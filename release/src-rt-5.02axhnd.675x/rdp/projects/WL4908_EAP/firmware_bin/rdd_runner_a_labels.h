#ifndef RUNNER_A_CODE_ADDRESSES
#define RUNNER_A_CODE_ADDRESSES

#define runner_a_start_task_initialization_task		(0x14)
#define runner_a_initialization_task		(0x14)
#define runner_a_start_task_timer_scheduler_set		(0x3380)
#define runner_a_timer_scheduler_set		(0x3380)
#define runner_a_start_task_cpu_rx_wakeup_request		(0x2358)
#define runner_a_cpu_rx_wakeup_request		(0x2358)
#define runner_a_start_task_flow_cache_wakeup_request		(0xEB8)
#define runner_a_flow_cache_wakeup_request		(0xEB8)
#define runner_a_start_task_cpu_tx_wakeup_request		(0x2AAC)
#define runner_a_cpu_tx_wakeup_request		(0x2AAC)
#define runner_a_start_task_policer_budget_allocator_1st_wakeup_request		(0x349C)
#define runner_a_policer_budget_allocator_1st_wakeup_request		(0x349C)
#define runner_a_start_task_wan_cpu_wakeup_request		(0x1FC)
#define runner_a_wan_cpu_wakeup_request		(0x1FC)
#define runner_a_start_task_wan_normal_wakeup_request		(0x3DC)
#define runner_a_wan_normal_wakeup_request		(0x3DC)
#define runner_a_start_task_downstream_multicast_wakeup_request		(0x2E1C)
#define runner_a_downstream_multicast_wakeup_request		(0x2E1C)
#define runner_a_start_task_debug_routine		(0x114)
#define runner_a_debug_routine		(0x114)
#define runner_a_start_task_free_skb_index_wakeup_request		(0x3468)
#define runner_a_free_skb_index_wakeup_request		(0x3468)
#define runner_a_free_skb_index_tx_abs_done		(0x3468)
#define runner_a_start_task_ethwan2_normal_wakeup_request		(0x258)
#define runner_a_ethwan2_normal_wakeup_request		(0x258)
#define runner_a_gpe_sop_push_replace_ddr_sram_32		(0x1778)
#define runner_a_gpe_sop_push_replace_sram_32_64		(0x17EC)
#define runner_a_gpe_sop_push_replace_sram_64		(0x1800)
#define runner_a_gpe_sop_push_replace_sram_64_32		(0x1814)
#define runner_a_gpe_sop_pull_replace_ddr_sram_32		(0x1828)
#define runner_a_gpe_sop_pull_replace_sram_32_64		(0x189C)
#define runner_a_gpe_sop_pull_replace_sram_64		(0x18EC)
#define runner_a_gpe_sop_pull_replace_sram_64_32		(0x1928)
#define runner_a_gpe_replace_pointer_32_ddr		(0x1978)
#define runner_a_gpe_replace_pointer_32_sram		(0x199C)
#define runner_a_gpe_replace_pointer_64_sram		(0x19C0)
#define runner_a_gpe_replace_16		(0x19E4)
#define runner_a_gpe_replace_32		(0x1A18)
#define runner_a_gpe_replace_bits_16		(0x1A3C)
#define runner_a_gpe_copy_add_16_cl		(0x1A68)
#define runner_a_gpe_copy_add_16_sram		(0x1A74)
#define runner_a_gpe_copy_bits_16_cl		(0x1ABC)
#define runner_a_gpe_copy_bits_16_sram		(0x1AC8)
#define runner_a_gpe_insert_16		(0x1B10)
#define runner_a_gpe_delete_16		(0x1B78)
#define runner_a_gpe_decrement_8		(0x1BB8)
#define runner_a_gpe_apply_icsum_16		(0x1BDC)
#define runner_a_gpe_apply_icsum_nz_16		(0x1C00)
#define runner_a_gpe_compute_csum_16_cl		(0x1C3C)
#define runner_a_gpe_compute_csum_16_sram		(0x1C48)
#define runner_a_gpe_buffer_copy_16_sram		(0x1C88)
#define runner_a_gpe_buffer_copy_16_ddr		(0x1CB0)
#define runner_a_ingress_classification_key_src_ip		(0x1EB8)
#define runner_a_ingress_classification_key_dst_ip		(0x1EFC)
#define runner_a_ingress_classification_key_ipv6_flow_label		(0x1F40)
#define runner_a_ingress_classification_key_generic_rule_1		(0x1F64)
#define runner_a_ingress_classification_key_generic_rule_2		(0x1F6C)
#define runner_a_ingress_classification_key_outer_tpid		(0x1FD8)
#define runner_a_ingress_classification_key_inner_tpid		(0x1FE4)
#define runner_a_ingress_classification_key_src_port		(0x2000)
#define runner_a_ingress_classification_key_dst_port		(0x2020)
#define runner_a_ingress_classification_key_outer_vlan		(0x2040)
#define runner_a_ingress_classification_key_inner_vlan		(0x2058)
#define runner_a_ingress_classification_key_dst_mac		(0x2074)
#define runner_a_ingress_classification_key_src_mac		(0x207C)
#define runner_a_ingress_classification_key_ether_type		(0x20A4)
#define runner_a_ingress_classification_key_ip_protocol		(0x20B8)
#define runner_a_ingress_classification_key_dscp		(0x20DC)
#define runner_a_ingress_classification_key_ssid		(0x20F8)
#define runner_a_ingress_classification_key_ingress_port		(0x20FC)
#define runner_a_ingress_classification_key_outer_pbits		(0x210C)
#define runner_a_ingress_classification_key_inner_pbits		(0x2124)
#define runner_a_ingress_classification_key_number_of_vlans		(0x2140)
#define runner_a_ingress_classification_key_layer3_protocol		(0x2150)
#define runner_a_cpu_rx_meter_budget_allocate		(0x3400)
#define runner_a_schedule_free_skb_index		(0x344C)

#endif
