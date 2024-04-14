#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0x8277b3bb, "cdev_add" },
	{ 0x853d16c8, "__class_create" },
	{ 0xa4a9ecb6, "device_create" },
	{ 0xfdf6508b, "i2c_get_adapter" },
	{ 0xab2cc6c2, "i2c_new_client_device" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x74291057, "i2c_put_adapter" },
	{ 0x742ca250, "i2c_unregister_device" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:mse,IMD");

MODULE_INFO(srcversion, "5C25EAD10C36A241DD1257E");
