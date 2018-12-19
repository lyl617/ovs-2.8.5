#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc6c01fa, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9b8f5a52, __VMLINUX_SYMBOL_STR(ovs_lisp_fill_metadata_dst) },
	{ 0x4f96ae13, __VMLINUX_SYMBOL_STR(rpl_lisp_xmit) },
	{ 0x536bfb4c, __VMLINUX_SYMBOL_STR(ovs_netdev_tunnel_destroy) },
	{ 0x425696db, __VMLINUX_SYMBOL_STR(ovs_vport_ops_unregister) },
	{ 0xaaf3b94a, __VMLINUX_SYMBOL_STR(__ovs_vport_ops_register) },
	{ 0x8336fd49, __VMLINUX_SYMBOL_STR(ovs_vport_free) },
	{ 0xcad3eb3b, __VMLINUX_SYMBOL_STR(rpl_rtnl_delete_link) },
	{ 0x42e5d0b6, __VMLINUX_SYMBOL_STR(ovs_netdev_link) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xb98c8c7e, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0x5c1eae8e, __VMLINUX_SYMBOL_STR(rpl_lisp_dev_create_fb) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x38a45848, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch";


MODULE_INFO(srcversion, "CF30A6345A1C9493140D2AB");
