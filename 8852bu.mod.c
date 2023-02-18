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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1000e51, "schedule" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x363f2fee, "napi_disable" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x66cbcbc1, "usb_free_coherent" },
	{ 0xe590d026, "register_netdev" },
	{ 0xb0e602eb, "memmove" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x1ba244c1, "skb_put" },
	{ 0x87105a31, "napi_schedule_prep" },
	{ 0xe355e357, "cfg80211_del_sta_sinfo" },
	{ 0xaa6cdb46, "dev_get_by_name" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xee5f12bc, "proc_get_parent_data" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xa1eebbcf, "find_vpid" },
	{ 0xf9aa7421, "kern_path" },
	{ 0x349cba85, "strchr" },
	{ 0xbc359417, "init_net" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x5a921311, "strncmp" },
	{ 0x6d459e1c, "netif_carrier_off" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x99e1177e, "seq_release" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x2d00225b, "cfg80211_vendor_cmd_reply" },
	{ 0xa916b694, "strnlen" },
	{ 0x813c6f7b, "usb_kill_urb" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xadee10f9, "netif_napi_add_weight" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x771e3640, "proc_create_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xed7d3b81, "skb_copy_bits" },
	{ 0x4fa8f1f1, "param_ops_int" },
	{ 0xa447f881, "napi_complete_done" },
	{ 0x9a994cf7, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x739dc621, "netdev_set_default_ethtool_ops" },
	{ 0xb801391e, "single_open_size" },
	{ 0x9c6cf6b, "cfg80211_ibss_joined" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x760a0f4f, "yield" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xcb9e08b1, "proc_mkdir_data" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf9a482f9, "msleep" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7808ea6e, "cfg80211_ch_switch_notify" },
	{ 0xb78dfb84, "flush_signals" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xe8386f75, "free_netdev" },
	{ 0x2531a760, "seq_lseek" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xdc8ff756, "ieee80211_get_channel_khz" },
	{ 0x75a40ab, "kernel_read" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x229f7496, "filp_open" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x389b688d, "nla_put_nohdr" },
	{ 0xa6893d39, "single_open" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe6c49e03, "seq_printf" },
	{ 0x952d5a34, "kthread_stop" },
	{ 0x5e409891, "register_netdevice" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8890edee, "cfg80211_ready_on_channel" },
	{ 0xffad5ab4, "cfg80211_inform_bss_frame_data" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x186c398f, "regulatory_set_wiphy_regd_sync" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xfb578fc5, "memset" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6008689f, "kthread_complete_and_exit" },
	{ 0xaca7784b, "usb_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xda6d9dea, "__netif_napi_del" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xd1b5a156, "cfg80211_scan_done" },
	{ 0x1dcd6dcd, "__cfg80211_alloc_reply_skb" },
	{ 0x952f2933, "cfg80211_new_sta" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xcf2a6966, "up" },
	{ 0x1dde0fe3, "wiphy_new_nm" },
	{ 0x4d79ef23, "usb_autopm_get_interface" },
	{ 0xc02d2745, "napi_gro_receive" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xf4c04097, "filp_close" },
	{ 0x4a49237c, "kill_pid" },
	{ 0x8dae4bbc, "cfg80211_roamed" },
	{ 0x7745224b, "cfg80211_mgmt_tx_status" },
	{ 0x368cbcd, "usb_autopm_put_interface" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x6a9404be, "netif_rx" },
	{ 0xeb84b7e5, "netif_tx_stop_all_queues" },
	{ 0xf862e302, "netif_receive_skb" },
	{ 0x462bc315, "device_init_wakeup" },
	{ 0x2de8eb5f, "usb_submit_urb" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x6d7d5d36, "usb_deregister" },
	{ 0xe914e41e, "strcpy" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6c496eac, "wiphy_unregister" },
	{ 0xd6934308, "eth_type_trans" },
	{ 0x359d36b, "cfg80211_remain_on_channel_expired" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe1b800b, "wake_up_process" },
	{ 0xa6257a2f, "complete" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8b340b22, "usb_control_msg" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x679eec5f, "skb_pull" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3f5af94, "kthread_create_on_node" },
	{ 0x1d509809, "single_release" },
	{ 0xc0954478, "nla_put" },
	{ 0x8f1d3e40, "unregister_netdevice_queue" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x83a2c20d, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x41811c6b, "cfg80211_put_bss" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc942eefb, "param_array_ops" },
	{ 0x21145e74, "__dev_kfree_skb_any" },
	{ 0x148653, "vsnprintf" },
	{ 0x97826671, "__napi_schedule" },
	{ 0x1c81f09c, "cfg80211_unlink_bss" },
	{ 0xb5359665, "seq_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x990dddd7, "ethtool_op_get_link" },
	{ 0xceadc1c3, "usb_free_urb" },
	{ 0x3c913dfb, "usb_alloc_urb" },
	{ 0x4e697442, "cfg80211_rx_mgmt_khz" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb4b19daa, "param_ops_charp" },
	{ 0x2c0e6e7, "cfg80211_disconnected" },
	{ 0xdef20ac1, "napi_enable" },
	{ 0xf301d0c, "kmalloc_caches" },
	{ 0x5d1d6f6f, "remove_proc_entry" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x999e8297, "vfree" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc7f7f526, "skb_queue_tail" },
	{ 0xfd38422d, "__cfg80211_send_event_skb" },
	{ 0xaa297e8d, "alloc_etherdev_mqs" },
	{ 0x907a0965, "cfg80211_michael_mic_failure" },
	{ 0x9166fada, "strncpy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xea3a1365, "skb_copy" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x967cc89, "cfg80211_external_auth_request" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x62325cfd, "cfg80211_connect_done" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x9d10a493, "__netdev_alloc_skb" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xe3e09c44, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xfa11f84e, "usb_alloc_coherent" },
	{ 0xd51950b1, "seq_read" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x74e717f0, "netif_carrier_on" },
	{ 0xd43859f2, "param_ops_uint" },
	{ 0xcd5646bf, "usb_get_dev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xda1434df, "kernel_write" },
	{ 0x92997ed8, "_printk" },
	{ 0xc81a0c3a, "wiphy_register" },
	{ 0x9b695fbd, "wiphy_free" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x58e2846e, "kfree_skb_list_reason" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x754d539c, "strlen" },
	{ 0x5da2dea6, "usb_put_dev" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2343d8, "skb_trim" },
	{ 0xc97e3c9d, "cfg80211_get_bss" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x521c0063, "__pskb_pull_tail" },
	{ 0xa44d8246, "skb_push" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x35789eee, "kmem_cache_alloc_trace" },
	{ 0x3cdcd927, "skb_dequeue" },
	{ 0x61c5b3b9, "cfg80211_ch_switch_started_notify" },
	{ 0xd6e69bd7, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2d54a6d7, "__cfg80211_alloc_event_skb" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x50557fe3, "dev_alloc_name" },
	{ 0x541a6db8, "module_layout" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0BDApB832d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB83Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB852d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB85Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApA85Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0586p3428d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p1A62d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "CABDA2C2A9E0089E1F2A4CC");
