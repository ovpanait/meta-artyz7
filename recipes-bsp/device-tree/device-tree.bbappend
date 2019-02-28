COMPATIBLE_MACHINE_arty-zynq7 = ".*"

SRC_URI_append_arty-zynq7 = " \
  https://raw.githubusercontent.com/Digilent/linux-digilent/master/arch/arm/boot/dts/zynq-artyz7.dts \
  "

SRC_URI[md5sum] = "ea343c50790bc101b3337386d03487c1"
SRC_URI[sha256sum] = "920c42e6fea6747fe242ee78a3a8b9ecb999a2be4b76ce359c701aa454e2de5c"
