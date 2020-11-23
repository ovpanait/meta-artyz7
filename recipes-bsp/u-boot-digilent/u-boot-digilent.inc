require recipes-bsp/u-boot/u-boot.inc

DEPENDS += "bc-native dtc-native"

UBOOTURI ?= "git://github.com/digilent/u-boot-digilent.git;protocol=https"
UBRANCH ?= "master"

UBRANCHARG = "${@['nobranch=1', 'branch=${UBRANCH}'][d.getVar('UBRANCH', True) != '']}"
SRC_URI = "\
    ${UBOOTURI};${UBRANCHARG} \
    file://0001-rsa-Fix-build-with-OpenSSL-1.1.x.patch \
    file://0002-libfdt-move-headers-to-linux-libfdt.h-and-linux-libf.patch \
    file://0003-config_whitelist.txt-whitelist-CONFIG_ZYNQ_GEM_SPI_M.patch \
    file://0001-u-boot.elf-remove-hard-coded-arm64-flags.patch \
    file://0001-arm-zynq-Enable-CONFIG_REMAKE_ELF.patch \
    file://0001-scripts-Makefile.lib-remove-overridden-target-obj-he.patch \
    file://0001-Add-target-to-generate-initial-environment.patch \
    "

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"
