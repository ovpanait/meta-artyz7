# meta-artyz7
OpenEmbedded/Yocto layer for Arty-Z7 board  

[![pipeline status](https://gitlab.com/ovpanait/meta-artyz7/badges/thud/pipeline.svg)](https://gitlab.com/ovpanait/meta-artyz7/commits/thud)

I could not find support for this board integrated in meta-xilinx upstream, only Petalinux wrappers provided by Digilent.  
Therefore, I created this simple Yocto layer, based on the existing meta-xilinx implementations for similar boards (e.g. Zybo Z7).

## Dependencies

This layer depends on:

* URI: git://git.yoctoproject.org/poky
  * branch: master
  * revision: HEAD
* URI: git://github.com/Xilinx/meta-xilinx
  * branch: master-next
  * revision: HEAD
* URI: git://github.com/openembedded/meta-openembedded
  * branch: master
  * revision: HEAD

## Quick Start

### Setup
```sh
git clone -b master git://git.yoctoproject.org/poky
# Needed by meta-xilinx-bsp
git clone -b master git://github.com/openembedded/meta-openembedded
# The master branch of meta-xilinx is broken for now, master-next is the up-to-date one
git clone -b master-next git://github.com/Xilinx/meta-xilinx
git clone -b master git://github.com/ovpanait/meta-artyz7

. poky/oe-init-build-env
bitbake-layers add-layer ../meta-openembedded/meta-oe/
echo 'LAYERSERIES_COMPAT_xilinx += "warrior"' >> ../meta-xilinx/meta-xilinx-bsp/conf/layer.conf
bitbake-layers add-layer ../meta-xilinx/meta-xilinx-bsp/
bitbake-layers add-layer ../meta-artyz7
echo 'MACHINE="arty-zynq7"' >> conf/local.conf
```

### Build a minimal console-only image:
```sh
bitbake core-image-minimal
```

### Copy image to sd-card
```sh
sudo dd if=tmp/deploy/images/arty-zynq7/core-image-minimal-arty-zynq7.wic of=/dev/mmcblkX bs=4M iflag=fullblock oflag=direct conv=fsync status=progress
```

## Maintainer(s)

* Ovidiu Panait `<ovpanait@gmail.com>`
