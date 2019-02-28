FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

COMPATIBLE_MACHINE_artyz7-zynq7 = ".*"

SRC_URI_append_artyz7-zynq7 = " \
		file://zynq-artyz7.dts \
		"
