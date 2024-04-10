
obj-m += test.o
KDIR :=/home/felipe/os/buildroot-2024.02/output/build/linux-custom
ARCH := arm64
CROSS_COMPILE := aarch64-buildroot-linux-gnu-

all:
	make -C $(KDIR) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) M=$(PWD) modules

clean:
	make -C $(KDIR) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) M=$(PWD) clean