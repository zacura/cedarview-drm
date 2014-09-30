#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfd60df2, __VMLINUX_SYMBOL_STR(drm_get_connector_status_name) },
	{ 0xccabd2ab, __VMLINUX_SYMBOL_STR(drm_calc_timestamping_constants) },
	{ 0x1ca072e2, __VMLINUX_SYMBOL_STR(drm_mode_create_from_cmdline_mode) },
	{ 0xfc32e8f6, __VMLINUX_SYMBOL_STR(drm_mode_destroy) },
	{ 0xf1421d13, __VMLINUX_SYMBOL_STR(drm_mode_sort) },
	{ 0xe2aed61d, __VMLINUX_SYMBOL_STR(drm_get_encoder_name) },
	{ 0x2d582aaf, __VMLINUX_SYMBOL_STR(drm_get_connector_name) },
	{ 0x52653834, __VMLINUX_SYMBOL_STR(drm_mode_parse_command_line_for_connector) },
	{ 0xfb2c1261, __VMLINUX_SYMBOL_STR(drm_plane_force_disable) },
	{ 0xb95beb55, __VMLINUX_SYMBOL_STR(drm_object_property_set_value) },
	{ 0xd2335101, __VMLINUX_SYMBOL_STR(drm_fb_get_bpp_depth) },
	{ 0xff5fed9c, __VMLINUX_SYMBOL_STR(drm_mode_find_dmt) },
	{ 0x27a6828b, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0x2e6e099, __VMLINUX_SYMBOL_STR(drm_mode_width) },
	{ 0x9745d638, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0xa936f74f, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0x1c20f7f5, __VMLINUX_SYMBOL_STR(drm_mode_validate_size) },
	{ 0xf7e238d4, __VMLINUX_SYMBOL_STR(drm_mode_connector_list_update) },
	{ 0xc25a61ec, __VMLINUX_SYMBOL_STR(drm_mode_set_crtcinfo) },
	{ 0x5ae8185c, __VMLINUX_SYMBOL_STR(drm_mode_prune_invalid) },
	{ 0x44a0c113, __VMLINUX_SYMBOL_STR(drm_mode_height) },
	{ 0x8ee69c3d, __VMLINUX_SYMBOL_STR(drm_sysfs_hotplug_event) },
	{ 0xcda91c46, __VMLINUX_SYMBOL_STR(drm_mode_debug_printmodeline) },
	{ 0x880bf440, __VMLINUX_SYMBOL_STR(drm_add_modes_noedid) },
	{ 0xe5d78503, __VMLINUX_SYMBOL_STR(drm_warn_on_modeset_not_all_locked) },
	{ 0xe1cc960e, __VMLINUX_SYMBOL_STR(drm_mode_set_config_internal) },
	{ 0x11065515, __VMLINUX_SYMBOL_STR(drm_mode_equal) },
	{ 0xfec20b30, __VMLINUX_SYMBOL_STR(drm_modeset_lock_all) },
	{ 0xc76701b5, __VMLINUX_SYMBOL_STR(drm_modeset_unlock_all) },
	{ 0x498dcb5e, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0xcb1beab5, __VMLINUX_SYMBOL_STR(drm_mode_vrefresh) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

