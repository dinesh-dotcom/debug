obj-m += panic.o

KBUILD_CFLAGS   += -g
ARCH=arm
CROSS_COMPILE=arm-linux-gnueabihf-

all:
	make ARCH=${ARCH} CROSS_COMPILE=${CROSS_COMPILE} -C /home/km/KM_GITHUB/beagleboneblack-kernel M=`pwd` modules
 
clean:
	make ARCH=${ARCH} CROSS_COMPILE=${CROSS_COMPILE} -C /home/km/KM_GITHUB/beagleboneblack-kernel M=`pwd` clean
