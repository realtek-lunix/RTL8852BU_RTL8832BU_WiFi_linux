cmd_/home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/phl/hal_g6/test/hal_test_module.o := gcc -Wp,-MMD,/home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/phl/hal_g6/test/.hal_test_module.o.d -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/11/include -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -I./ubuntu/include -include ./include/linux/compiler_types.h -D__KERNEL__ -fmacro-prefix-map=./= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu89 -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -fcf-protection=none -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -DCONFIG_X86_X32_ABI -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -mindirect-branch-cs-prefix -mfunction-return=thunk-extern -fno-jump-tables -mharden-sls=all -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -fno-allow-store-data-races -Wframe-larger-than=1024 -fstack-protector-strong -Wimplicit-fallthrough=5 -Wno-main -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-stack-clash-protection -g -gdwarf-5 -pg -mrecord-mcount -mfentry -DCC_USING_FENTRY -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -Wno-alloc-size-larger-than -fno-strict-overflow -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wno-packed-not-aligned -O1 -Wno-unused-variable -Wno-unused-label -Wno-unused -Wno-date-time -I/home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/include -DCONFIG_MP_INCLUDED -DCONFIG_CMD_DISP -DCONFIG_PHL_TEST_SUITE -DCONFIG_POWER_SAVE -DCONFIG_BTC -DCONFIG_WIFI_6 -DCONFIG_EFUSE_CONFIG_FILE -DEFUSE_MAP_PATH=\"/system/etc/wifi/wifi_efuse_8852bu.map\" -DWIFIMAC_PATH=\"/data/wifimac.txt\" -DCONFIG_LOAD_PHY_PARA_FROM_FILE -DREALTEK_CONFIG_PATH=\"/lib/firmware/\" -DCONFIG_TXPWR_BY_RATE=1 -DCONFIG_TXPWR_BY_RATE_EN=2 -DCONFIG_TXPWR_LIMIT=1 -DCONFIG_TXPWR_LIMIT_EN=0 -DCONFIG_RTW_ADAPTIVITY_EN=0 -DCONFIG_RTW_ADAPTIVITY_MODE=0 -DCONFIG_IEEE80211W -DCONFIG_LAYER2_ROAMING -DCONFIG_ROAMING_FLAG=0x3 -DHIGH_ACTIVE_HST2DEV=0 -DCONFIG_BR_EXT '-DCONFIG_BR_EXT_BRNAME="'br0'"' -DCONFIG_RTW_NAPI -DCONFIG_RTW_GRO -DCONFIG_RTW_NETIF_SG -DCONFIG_RTW_DEBUG -DRTW_LOG_LEVEL=4 -DCONFIG_PROC_DEBUG -DCONFIG_RTW_UP_MAPPING_RULE=0 -DPLATFORM_LINUX -DUSE_TRUE_PHY -DCONFIG_DBG_AX_CAM -DCONFIG_LITTLE_ENDIAN -DCONFIG_IOCTL_CFG80211 -DRTW_USE_CFG80211_STA_EVENT -DRTW_USE_CFG80211_REPORT_PROBE_REQ -DCONFIG_RADIO_WORK -I/home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/platform -I/home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/core/crypto -DPHL_PLATFORM_LINUX -DCONFIG_PHL_ARCH -DRTW_PHL_RX -DRTW_PHL_TX -DRTW_PHL_BCN -DDIRTY_FOR_WORK -I/home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/phl/hal_g6 -DCONFIG_RTL8852B  -fsanitize=bounds -fsanitize=shift -fsanitize=bool -fsanitize=enum  -DMODULE  -DKBUILD_BASENAME='"hal_test_module"' -DKBUILD_MODNAME='"8852bu"' -D__KBUILD_MODNAME=kmod_8852bu -c -o /home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/phl/hal_g6/test/hal_test_module.o /home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/phl/hal_g6/test/hal_test_module.c

source_/home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/phl/hal_g6/test/hal_test_module.o := /home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/phl/hal_g6/test/hal_test_module.c

deps_/home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/phl/hal_g6/test/hal_test_module.o := \
    $(wildcard include/config/HAL_TEST_SUITE) \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/compiler_types.h \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/RETPOLINE) \
    $(wildcard include/config/ARCH_USE_BUILTIN_BSWAP) \
    $(wildcard include/config/KCOV) \

/home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/phl/hal_g6/test/hal_test_module.o: $(deps_/home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/phl/hal_g6/test/hal_test_module.o)

$(deps_/home/mason/Downloads/RTL8852BU_RTL8832BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211230/driver/rtl8852BU_WiFi_linux_v1.15.7-112-g1d36f2f7.20211227/phl/hal_g6/test/hal_test_module.o):
