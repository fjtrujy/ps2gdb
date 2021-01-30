/*
  _____     ___ ____
   ____|   |    ____|      PSX2 OpenSource Project
  |     ___|   |____       (C)2003, Ray Donnelly ( rdonnelly@polygoons.com )
  --------------------------------------------------------------------------
  ps2gdbStub.c             PS2 REMOTE GDB STUB USING TCP
*/

#include <tamtypes.h>
#include <kernel.h>
#include <stdio.h>
#include <string.h>
#include <debug.h>
#include <ps2ips.h>
#include <loadfile.h>
#include <tcpip.h>
#include "gdb-stub.h"
#include "inst.h"

void jander(void)
{
		__asm__ __volatile__("			\n"
"			.globl	breakinst	\n"
"			.set	noreorder	\n"
"			nop			\n"
"breakinst:		break			\n"
"			nop			\n"
"			.set	reorder		\n");
}