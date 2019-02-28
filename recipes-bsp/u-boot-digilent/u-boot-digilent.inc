require recipes-bsp/u-boot/u-boot.inc

DEPENDS += "dtc-native"

UBOOTURI ?= "git://github.com/digilent/u-boot-digilent.git;protocol=https"
UBRANCH ?= "master"

UBRANCHARG = "${@['nobranch=1', 'branch=${UBRANCH}'][d.getVar('UBRANCH', True) != '']}"
SRC_URI = "\
    ${UBOOTURI};${UBRANCHARG} \
    file://0001-rsa-Fix-build-with-OpenSSL-1.1.x.patch \
    file://0002-libfdt-move-headers-to-linux-libfdt.h-and-linux-libf.patch \
    file://0003-config_whitelist.txt-whitelist-CONFIG_ZYNQ_GEM_SPI_M.patch"

S = "${WORKDIR}/git"
