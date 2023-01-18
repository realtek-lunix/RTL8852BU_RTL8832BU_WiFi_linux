# RTL8852BU_RTL8832BU_WiFi_linux

Compatible with most AX1800 wifi6 addapters

USB-AX55 Nano

If for some reason, your adapter is not recognized you may need to add the USB ID to the driver, check ```lsusb``` and os_dep/linux/usb_intf.c file. 

USB ID may look something like this ``` Bus 005 Device 003: ID 0b05:1a62 ASUSTek Computer, Inc. 802.11ax WLAN Adapter  ```

Add this patch in usb_intf.c with your own ID and rebuild

``` +	{USB_DEVICE_AND_INTERFACE_INFO(0x0b05, 0x1a62, 0xff, 0xff, 0xff), .driver_info = RTL8852B}, ```


## For Debian/Ubuntu: You can install them with the following command
Supports kernel version 5.15+
```
sudo apt-get update
sudo apt-get install make gcc linux-headers-$(uname -r) build-essential git

git clone http://github.com/realtek-lunix/RTL8852BU_RTL8832BU_WiFi_linux.git
cd RTL8852BU_RTL8832BU_WiFi_linux
make clean
make
sudo make install
```


## Check installation
modinfo 8852bu

## Load driver 
modprobe 8852bu
