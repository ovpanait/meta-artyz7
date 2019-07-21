require u-boot-digilent.inc

SRCREV ?= "4a3462002712c18b9b2c7f8732967aa66f3adb51"
PV = "${UBRANCH}-git${SRCPV}"

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://README;beginline=1;endline=6;md5=157ab8408beab40cd8ce1dc69f702a6c"

PROVIDES_${PN} += "virtual/bootloader"
