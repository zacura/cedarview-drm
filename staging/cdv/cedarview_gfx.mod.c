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
	{ 0x80d86f0e, __VMLINUX_SYMBOL_STR(ttm_object_device_release) },
	{ 0x97fae1f6, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0xfa773154, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_par) },
	{ 0xb7902d7f, __VMLINUX_SYMBOL_STR(ttm_ref_object_add) },
	{ 0x87a902b6, __VMLINUX_SYMBOL_STR(drm_crtc_helper_set_config) },
	{ 0x2262d2e3, __VMLINUX_SYMBOL_STR(drm_helper_resume_force_mode) },
	{ 0x5d82da3d, __VMLINUX_SYMBOL_STR(drm_get_edid) },
	{ 0xac9dc0d5, __VMLINUX_SYMBOL_STR(ttm_bo_swapout_all) },
	{ 0xedad6c47, __VMLINUX_SYMBOL_STR(ttm_bo_move_memcpy) },
	{ 0x951714bf, __VMLINUX_SYMBOL_STR(drm_fb_helper_initial_config) },
	{ 0x6b01ae96, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0xc8194e27, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0x985f8cd3, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0x2b54aa9a, __VMLINUX_SYMBOL_STR(ttm_object_file_init) },
	{ 0xfc32e8f6, __VMLINUX_SYMBOL_STR(drm_mode_destroy) },
	{ 0x19db1305, __VMLINUX_SYMBOL_STR(ttm_read_unlock) },
	{ 0xad111596, __VMLINUX_SYMBOL_STR(ttm_bo_validate) },
	{ 0x9db0556e, __VMLINUX_SYMBOL_STR(ttm_bo_init) },
	{ 0x42046d5, __VMLINUX_SYMBOL_STR(ttm_bo_synccpu_write_release) },
	{ 0x8541e18b, __VMLINUX_SYMBOL_STR(drm_mmap) },
	{ 0x95bfddec, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0xa95a4711, __VMLINUX_SYMBOL_STR(ttm_read_lock) },
	{ 0x346127a7, __VMLINUX_SYMBOL_STR(drm_global_item_ref) },
	{ 0xa51d8c10, __VMLINUX_SYMBOL_STR(drm_vblank_init) },
	{ 0x72da792, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0xdbb5a9f5, __VMLINUX_SYMBOL_STR(drm_ht_remove_item) },
	{ 0xffc6c87a, __VMLINUX_SYMBOL_STR(drm_detect_monitor_audio) },
	{ 0xf991cbf0, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0x88336881, __VMLINUX_SYMBOL_STR(ttm_bo_synccpu_write_grab) },
	{ 0x82169369, __VMLINUX_SYMBOL_STR(ttm_mem_global_init) },
	{ 0x3885b70c, __VMLINUX_SYMBOL_STR(drm_handle_vblank) },
	{ 0xa0110124, __VMLINUX_SYMBOL_STR(drm_helper_connector_dpms) },
	{ 0x667d8a, __VMLINUX_SYMBOL_STR(drm_mm_init) },
	{ 0x173d056a, __VMLINUX_SYMBOL_STR(ttm_mem_global_release) },
	{ 0xd82b4ab0, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0x587d4f86, __VMLINUX_SYMBOL_STR(drm_irq_install) },
	{ 0xa6fbc6ac, __VMLINUX_SYMBOL_STR(ttm_bo_unref) },
	{ 0x69558cd7, __VMLINUX_SYMBOL_STR(ttm_vt_unlock) },
	{ 0x5eafb8e9, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0x6c6ba683, __VMLINUX_SYMBOL_STR(drm_helper_mode_fill_fb_struct) },
	{ 0x27a6828b, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0xf4f3e25f, __VMLINUX_SYMBOL_STR(drm_put_dev) },
	{ 0x1ce6cc80, __VMLINUX_SYMBOL_STR(ttm_bo_kmap) },
	{ 0xa45fef5c, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_var) },
	{ 0x3eb37b9d, __VMLINUX_SYMBOL_STR(drm_ht_create) },
	{ 0xd9244641, __VMLINUX_SYMBOL_STR(ttm_bo_evict_mm) },
	{ 0x81bbf78a, __VMLINUX_SYMBOL_STR(ttm_eu_fence_buffer_objects) },
	{ 0x4d1eea63, __VMLINUX_SYMBOL_STR(ttm_base_object_unref) },
	{ 0xee4a19bf, __VMLINUX_SYMBOL_STR(ttm_vt_lock) },
	{ 0x759677a3, __VMLINUX_SYMBOL_STR(ttm_tt_bind) },
	{ 0x138609d9, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0x892cf204, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0xbe001c53, __VMLINUX_SYMBOL_STR(drm_property_add_enum) },
	{ 0x85cfc033, __VMLINUX_SYMBOL_STR(ttm_bo_init_mm) },
	{ 0x367e1d02, __VMLINUX_SYMBOL_STR(ttm_mem_global_free) },
	{ 0xc1fa041f, __VMLINUX_SYMBOL_STR(ttm_bo_wait) },
	{ 0x17e48a1d, __VMLINUX_SYMBOL_STR(ttm_base_object_lookup) },
	{ 0x33e171e5, __VMLINUX_SYMBOL_STR(ttm_bo_device_init) },
	{ 0x3fabe5be, __VMLINUX_SYMBOL_STR(drm_sysfs_connector_remove) },
	{ 0xe7197773, __VMLINUX_SYMBOL_STR(drm_ht_insert_item) },
	{ 0x9745d638, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0x9fca9fed, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0xa936f74f, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0x1094f9e7, __VMLINUX_SYMBOL_STR(ttm_object_device_init) },
	{ 0xd7a0f37c, __VMLINUX_SYMBOL_STR(ttm_bo_mem_space) },
	{ 0x5200b8f6, __VMLINUX_SYMBOL_STR(ttm_eu_backoff_reservation) },
	{ 0xcf4f995e, __VMLINUX_SYMBOL_STR(drm_helper_crtc_in_use) },
	{ 0xc25a61ec, __VMLINUX_SYMBOL_STR(drm_mode_set_crtcinfo) },
	{ 0x5d78f915, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0xae4b94c, __VMLINUX_SYMBOL_STR(drm_ht_remove) },
	{ 0x18e8abbb, __VMLINUX_SYMBOL_STR(drm_mode_create) },
	{ 0x998e45c0, __VMLINUX_SYMBOL_STR(ttm_ref_object_base_unref) },
	{ 0x160e1425, __VMLINUX_SYMBOL_STR(drm_vblank_off) },
	{ 0x477dacdd, __VMLINUX_SYMBOL_STR(drm_mode_create_scaling_mode_property) },
	{ 0xd94d9c28, __VMLINUX_SYMBOL_STR(ttm_mem_global_alloc) },
	{ 0x2ac136e7, __VMLINUX_SYMBOL_STR(drm_fb_helper_check_var) },
	{ 0xbb85c679, __VMLINUX_SYMBOL_STR(drm_fb_helper_blank) },
	{ 0x9318ddee, __VMLINUX_SYMBOL_STR(ttm_bo_kunmap) },
	{ 0x4e5c99a0, __VMLINUX_SYMBOL_STR(drm_irq_uninstall) },
	{ 0xbeb351c0, __VMLINUX_SYMBOL_STR(drm_get_pci_dev) },
	{ 0x1ff411f0, __VMLINUX_SYMBOL_STR(drm_crtc_helper_set_mode) },
	{ 0x33cfc5ff, __VMLINUX_SYMBOL_STR(drm_sysfs_connector_add) },
	{ 0xcda91c46, __VMLINUX_SYMBOL_STR(drm_mode_debug_printmodeline) },
	{ 0x6ecd2aab, __VMLINUX_SYMBOL_STR(drm_fb_helper_hotplug_event) },
	{ 0xbc459a25, __VMLINUX_SYMBOL_STR(ttm_eu_reserve_buffers) },
	{ 0x8eff9111, __VMLINUX_SYMBOL_STR(drm_ht_find_item) },
	{ 0x1a770ac3, __VMLINUX_SYMBOL_STR(drm_detect_hdmi_monitor) },
	{ 0x7b80be22, __VMLINUX_SYMBOL_STR(drm_crtc_init) },
	{ 0xdbf32d07, __VMLINUX_SYMBOL_STR(ttm_lock_init) },
	{ 0x48dd25e4, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x31dd5d1e, __VMLINUX_SYMBOL_STR(ttm_bo_device_release) },
	{ 0xe42d512c, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0x9a9ae30c, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0xa4bf3b98, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0x132b05be, __VMLINUX_SYMBOL_STR(ttm_round_pot) },
	{ 0xd1180f3, __VMLINUX_SYMBOL_STR(ttm_base_object_init) },
	{ 0x1f35baf0, __VMLINUX_SYMBOL_STR(i2c_dp_aux_add_bus) },
	{ 0x13c427b7, __VMLINUX_SYMBOL_STR(drm_fb_helper_fini) },
	{ 0x5cf59609, __VMLINUX_SYMBOL_STR(ttm_bo_global_init) },
	{ 0x84373a43, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x55afff38, __VMLINUX_SYMBOL_STR(ttm_bo_manager_func) },
	{ 0x77a05eeb, __VMLINUX_SYMBOL_STR(drm_helper_disable_unused_functions) },
	{ 0xc166409d, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0xdacc6e59, __VMLINUX_SYMBOL_STR(drm_property_create) },
	{ 0xf36c3253, __VMLINUX_SYMBOL_STR(drm_framebuffer_init) },
	{ 0x498dcb5e, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0x186f81ec, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_init) },
	{ 0xa1eeecd3, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_fix) },
	{ 0x7844cc48, __VMLINUX_SYMBOL_STR(ttm_bo_clean_mm) },
	{ 0x10bfcd8c, __VMLINUX_SYMBOL_STR(drm_mode_crtc_set_gamma_size) },
	{ 0x9e7b05a3, __VMLINUX_SYMBOL_STR(drm_mode_object_find) },
	{ 0x67b1d568, __VMLINUX_SYMBOL_STR(ttm_bo_global_release) },
	{ 0x3d24b3c8, __VMLINUX_SYMBOL_STR(drm_fb_helper_init) },
	{ 0x9101f00b, __VMLINUX_SYMBOL_STR(drm_fb_helper_single_add_all_connectors) },
	{ 0x727847e, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0xde692d68, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_fini) },
	{ 0xfbc2c5ec, __VMLINUX_SYMBOL_STR(ttm_object_file_release) },
	{ 0xfccafb1, __VMLINUX_SYMBOL_STR(drm_global_item_unref) },
	{ 0xd02deb89, __VMLINUX_SYMBOL_STR(drm_framebuffer_cleanup) },
	{ 0x2570a8fb, __VMLINUX_SYMBOL_STR(ttm_bo_mmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ttm,drm,drm_kms_helper";

MODULE_ALIAS("pci:v00008086d00000BE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEFsv*sd*bc*sc*i*");
