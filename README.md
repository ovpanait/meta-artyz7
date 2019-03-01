# meta-artyz7
OpenEmbedded/Yocto layer for Arty-Z7 board


I could not find support for this board integrated in meta-xilinx upstream, only Petalinux wrappers provided by Digilent.  
Therefore, I created this simple Yocto layer, based on the existing implementations for similar boards (e.g. Zybo Z7) present in meta-xilinx.

## Dependencies

This layer depends on:

* URI: git://git.yoctoproject.org/poky
  * branch: thud
  * revision: HEAD
* URI: git://github.com/Xilinx/meta-xilinx
  * branch: thud
  * revision: HEAD

## Quick Start

### Setup
```sh
git clone -b thud git://git.yoctoproject.org/poky
git clone -b thud git://github.com/Xilinx/meta-xilinx
git clone -b thud git://github.com/ovpanait/meta-artyz7

. poky/oe-init-build-env
bitbake-layers add-layer ../meta-xilinx/meta-xilinx-bsp/
bitbake-layers add-layer ../meta-artyz7
echo 'MACHINE="arty-zynq7"' >> conf/local.conf
```

### Build a minimal console-only image:
```sh
bitbake core-image-minimal
```

## Maintainer(s)

* Ovidiu Panait `<ovpanait@gmail.com>`
