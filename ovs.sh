#!/bin/bash
cd /home/jsen/ovs/openvswitch-2.8.5

rm /usr/etc/openvswitch/conf.db

kill `cd /usr/var/run/openvswitch && cat ovsdb-server.pid ovs-vswitchd.pid`


rmmod openvswitch
#./boot.sh
#./configure --prefix=/usr --with-linux=/lib/modules/`uname -r`/build

make

make install 

make modules_install

# modinfo ./datapath/linux/openvswitch.ko | grep depend
modprobe nf_nat
modprobe nf_nat_ipv6
modprobe nf_nat_ipv4
modprobe gre
modprobe nf_conntrack
modprobe ip_tunnel
modprobe nf_defrag_ipv6
modprobe libcrc32c
modprobe nf_defrag_ipv4
insmod datapath/linux/openvswitch.ko

#insmod datapath/linux/openvswitch.ko

modprobe openvswitch

#ovsdb-server --remote=punix:/usr/local/var/run/openvswitch/db.sock --remote=db:Open_vSwitch,Open_vSwitch,manager_options --pidfile --detach

#ovs-vsctl --no-wait init
#ovs-vswitchd --pidfile --detach

#yxw

mkdir -p /usr/etc/openvswitch
ovsdb-tool create /usr/etc/openvswitch/conf.db vswitchd/vswitch.ovsschema

ovsdb-server --remote=punix:/usr/var/run/openvswitch/db.sock \
                     --remote=db:Open_vSwitch,Open_vSwitch,manager_options \
                     --private-key=db:Open_vSwitch,SSL,private_key \
                     --certificate=db:Open_vSwitch,SSL,certificate \
                     --bootstrap-ca-cert=db:Open_vSwitch,SSL,ca_cert \
			--log-file=/var/log/openvswitch/ovs-vswitchd.log\
                     --pidfile --detach

ovs-vsctl --no-wait init
ovs-vswitchd --pidfile --detach
