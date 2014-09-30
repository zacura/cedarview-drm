#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x426372d9, __VMLINUX_SYMBOL_STR(drm_vma_offset_remove) },
	{ 0x1ed965d4, __VMLINUX_SYMBOL_STR(drm_class_device_unregister) },
	{ 0x189f6401, __VMLINUX_SYMBOL_STR(drm_mm_debug_table) },
	{ 0xfb497216, __VMLINUX_SYMBOL_STR(drm_mm_insert_node_in_range_generic) },
	{ 0xdbb5a9f5, __VMLINUX_SYMBOL_STR(drm_ht_remove_item) },
	{ 0x6f08acc3, __VMLINUX_SYMBOL_STR(drm_vma_offset_lookup_locked) },
	{ 0x667d8a, __VMLINUX_SYMBOL_STR(drm_mm_init) },
	{ 0xd55aea8d, __VMLINUX_SYMBOL_STR(drm_vma_offset_manager_destroy) },
	{ 0x36f91ef3, __VMLINUX_SYMBOL_STR(drm_mm_clean) },
	{ 0x3eb37b9d, __VMLINUX_SYMBOL_STR(drm_ht_create) },
	{ 0xe7197773, __VMLINUX_SYMBOL_STR(drm_ht_insert_item) },
	{ 0xae4b94c, __VMLINUX_SYMBOL_STR(drm_ht_remove) },
	{ 0xedd76342, __VMLINUX_SYMBOL_STR(drm_clflush_pages) },
	{ 0x351fb196, __VMLINUX_SYMBOL_STR(drm_class_device_register) },
	{ 0x8eff9111, __VMLINUX_SYMBOL_STR(drm_ht_find_item) },
	{ 0xa6902f65, __VMLINUX_SYMBOL_STR(drm_vma_offset_add) },
	{ 0xe2ef97e4, __VMLINUX_SYMBOL_STR(drm_mm_takedown) },
	{ 0xcd0fc417, __VMLINUX_SYMBOL_STR(drm_ht_just_insert_please) },
	{ 0x49fabf0d, __VMLINUX_SYMBOL_STR(drm_mm_remove_node) },
	{ 0xafd51394, __VMLINUX_SYMBOL_STR(drm_vma_offset_manager_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

