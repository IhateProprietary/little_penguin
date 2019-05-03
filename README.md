### Little_Penguin

An introduction to linux kernel's module programming

# Interacting with kernel

|command |     description         |
|--------|-------------------------|
|lsmod   | list kernel modules     |
|insmod  | add kernel module       |
|rmmod   | remove kernel module    |
|modprobe| does all of the above   |

# Compiling kernel module
```
obj-m := <your file here>.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
```
