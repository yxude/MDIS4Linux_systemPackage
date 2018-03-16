/*********************  P r o g r a m  -  M o d u l e ***********************
 *
 *         Name: nat_module.c
 *      Project: MDIS4LINUX
 *
 *       Author: kp
 *        $Date: 2004/06/09 11:12:14 $
 *    $Revision: 1.1 $
 *
 *  Description: Module stuff for MBUF MDIS module
 *
 *     Required: -
 *     Switches: COMP_NAME		name of component as a string
 *				 DBG_MODULE		set when compiling DBG module
 *
 *-------------------------------[ History ]---------------------------------
 *
 * $Log: nat_module.c,v $
 * Revision 1.1  2004/06/09 11:12:14  kp
 * Initial Revision
 *
 *---------------------------------------------------------------------------
 * (c) Copyright 2004 by MEN mikro elektronik GmbH, Nuremberg, Germany
 ******************************************************************************/
/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <MEN/men_typs.h>
#include <MEN/dbg.h>
#include <MEN/oss.h>
#include <MEN/mbuf.h>

/* all functions must be explicitely exported in Linux 2.6...*/
EXPORT_SYMBOL(MBUF_Create);
EXPORT_SYMBOL(MBUF_Remove);
EXPORT_SYMBOL(MBUF_Write);
EXPORT_SYMBOL(MBUF_Read);
EXPORT_SYMBOL(MBUF_SetStat);
EXPORT_SYMBOL(MBUF_GetStat);
EXPORT_SYMBOL(MBUF_GetNextBuf);
EXPORT_SYMBOL(MBUF_ReadyBuf);
EXPORT_SYMBOL(MBUF_GetBufferMode);
EXPORT_SYMBOL(MBUF_EventHdlrInst);
EXPORT_SYMBOL(MBUF_Ident);

/*****************************  init_module  *********************************
 *
 *  Description:  Called when module is loaded by insmod
 *---------------------------------------------------------------------------
 *  Input......:  -
 *  Output.....:  returns: 0 on success
 *  Globals....:  -
 ****************************************************************************/
int mod_init(void)
{
	printk( KERN_INFO "MEN " COMP_NAME " init_module\n");
	return 0;
}

/*****************************  cleanup_module  ******************************
 *
 *  Description:  Called before module is unloaded by rmmod
 *---------------------------------------------------------------------------
 *  Input......:  -
 *  Output.....:  -
 *  Globals....:  -
 ****************************************************************************/
void mod_exit(void)
{
	printk( KERN_INFO "MEN " COMP_NAME " cleanup_module\n");
}

module_init( mod_init );
module_exit( mod_exit );
MODULE_DESCRIPTION( COMP_NAME " MDIS module");
MODULE_AUTHOR("MEN Mikro Elektronik GmbH");
#ifdef MODULE_LICENSE
MODULE_LICENSE("GPL");
#endif
