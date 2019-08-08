->vxWorks boot command from
http://mitelforums.com/forum/index.php?topic=3712.0
[VxWorks Boot]: ?

 ?                     - print this list
 @                     - boot (load and go)
 p                     - print boot params
 c                     - change boot params
 cd                    - change boot params to default
 cv [vlan]             - change VLAN ID, empty value clears
                           the VLAN info.
 l                     - load boot file
 g adrs                - go to adrs
 d adrs[,n]            - display memory
 m adrs                - modify memory
 f adrs, nbytes, value - fill memory
 t adrs, adrs, nbytes  - copy memory
 e                     - print fatal exception
 ra                    - reset APC card (CX, MXe)
 re                    - reset E2T card (LX, MXe)
 rp [port]             - redirect MXe printer port to internal serial port #
                           empty value = system default
                           1 = SMDR       BAUD=9600  8N1
                           3 = E2T        BAUD=9600  8N1
                           5 = APC        BAUD=38400 8N1
                           6 = AMB        BAUD=9600  8N1
                           7 = L2 Switch  BAUD=19200 8N1
 v                     - print boot logo with version
 n netif               - print network interface device address

 $dev(0,procnum)host:/file h=# e=# b=# g=# u=usr [pw=passwd] f=#
                           tn=targetname s=script o=other
 boot device: ata=[ctrl,drive | noauto | auto] file name: [/partition1/]vxWorks
 Boot flags:
   0x02  - load local system symbols
   0x04  - don't autoboot
   0x08  - quick autoboot (no countdown)
   0x20  - disable login security
   0x40  - use dhcp to get boot parameters
   0x80  - use tftp to get boot image
   0x100 - use proxy arp

available boot devices:Enhanced Network Devices
 motfcc0 ata
