# coreboot-dev-ms7721
!! WORK IN PROGRESS !!

= Working =
 - Boot
 - Both RAM slots
 - Serial console
 - SATA (Ports 1 and 2 tested)
 - PCIE x16
 - Soundcard
 - Network
 - Onboard graphics (need vgabios!)

= Not working =
 - PCIE x1

= Not tested =
 - PCI slot
 - TPM
 - Parallel port


= VGA BIOS =
For onboard graphics the vgabios needs to be included when compiling coreboot! (Hint: make menuconfig has an option for that)
