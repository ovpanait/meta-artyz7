require u-boot-digilent.inc

#XILINX_RELEASE_VERSION = "v2017.4"
SRCREV ?= "4a3462002712c18b9b2c7f8732967aa66f3adb51"
#PV = "v2017.01-xilinx-${XILINX_RELEASE_VERSION}+git${SRCPV}"

#FILESEXTRAPATHS_prepend := "${THISDIR}/u-boot-xlnx:"
#FILESEXTRAPATHS_prepend := "${THISDIR}/u-boot:"

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://README;beginline=1;endline=6;md5=157ab8408beab40cd8ce1dc69f702a6c"

PROVIDES_${PN} += "virtual/bootloader"

#UBOOT_ELF = "u-boot"
