/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2011 Advanced Micro Devices, Inc.
 * Copyright (C) 2014 Sage Electronic Engineering, LLC.
 * Copyright (C) 2014 Edward O'Callaghan <eocallaghan@alterapraxis.com>
 * Copyright (C) 2016 Renze Nicolai <renze@rnplus.nl>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <northbridge/amd/agesa/BiosCallOuts.h>

//#include <arch/acpi.h> 
#include <arch/io.h>
#include <console/console.h>
#include <device/device.h>
#include <cpu/x86/msr.h>
#include <cpu/amd/mtrr.h>
//#include <cpu/amd/agesa/s3_resume.h>
//#include <device/pci.h>
#include <device/pci_def.h>
#include <NbPlatform.h>

void set_pcie_dereset(void *nbconfig);
void set_pcie_reset(void *nbconfig);

void set_pcie_reset(void *nbconfig)
{
	// ?
}

void set_pcie_dereset(void *nbconfig)
{
	// ?
}

static void mainboard_enable(device_t dev)
{
	printk(BIOS_INFO, "Mainboard " CONFIG_MAINBOARD_PART_NUMBER " Enable.\n");
}

struct chip_operations mainboard_ops = {
	.enable_dev = mainboard_enable,
};