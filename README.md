# coreboot-dev-ms7721
!! WORK IN PROGRESS !!

= Working =
 - Boot
 - Both RAM slots
 - Serial console
 - SATA (Ports 1 and 2 tested)
 - PCIE x16
 - PCIE x1
 - PCI slot
 - Soundcard
 - Network
 - Onboard graphics [needs vgabios] [HDMI]

= Not working =
 (nothing)

= Not tested =
 - TPM
 - Parallel port
 - VGA
 - DVI


= VGA BIOS =
For onboard graphics the vgabios needs to be included when compiling coreboot! (Hint: make menuconfig has an option for that)
