/***********************  I n c l u d e  -  F i l e  ************************
 *
 *         Name: men_vme_kernelif.h
 *
 *       Author: kp
 *        $Date: 2005/08/11 16:18:15 $
 *    $Revision: 1.5 $
 *
 *  Description: header file to use MEN VME kernel interface
 *
 *     Switches: -
 *
 *-------------------------------[ History ]---------------------------------
 *
 * $Log: men_vme_kernelif.h,v $
 * Revision 1.5  2005/08/11 16:18:15  ts
 * leave declarations for vme_rt_xxx inside unconditional
 *
 * Revision 1.4  2005/01/18 17:45:00  ts
 * Changed parameter type of passed handler
 *
 * Revision 1.3  2004/12/04 18:52:28  ts
 * changes for VME RTAI support
 *
 * Revision 1.2  2003/12/15 15:02:20  kp
 * prepared for CONFIG_MEN_VME_RTAI_KERNELIF
 *
 * Revision 1.1  2002/07/19 10:44:47  UFranke
 * ELINOS PPC 2.1
 *
 * Revision 1.1.2.1  2001/08/20 12:23:54  kp
 * *** empty log message ***
 *
 *---------------------------------------------------------------------------
 * (c) Copyright 2000 by MEN mikro elektronik GmbH, Nuremberg, Germany
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

#ifndef _MEN_VME_KERNELIF_H
#define _MEN_VME_KERNELIF_H

#ifdef __cplusplus
	extern "C" {
#endif
/*--------------------------------------+
|   DEFINES                             |
+--------------------------------------*/

/* VME space codes */
#define VME_A16_SPACE	1
#define VME_A24_SPACE	2
#define VME_A32_SPACE	3
#define VME_CSR_SPACE	4

#define VME_D16_ACCESS	0x100
#define VME_D32_ACCESS  0x200

/*--------------------------------------+
|   TYPDEFS                             |
+--------------------------------------*/
/* none */

/*--------------------------------------+
|   EXTERNALS                           |
+--------------------------------------*/
/* none */

/*--------------------------------------+
|   GLOBALS                             |
+--------------------------------------*/
/* none */

/*--------------------------------------+
|   PROTOTYPES                          |
+--------------------------------------*/

// rename a few functions due to conflict (see coht/vmebridge/include/vmebus.h)
#ifdef A25_WRAPPER
#define VME_REQUEST_IRQ		men_vme_request_irq
#define VME_FREE_IRQ		men_vme_free_irq
#else
#define VME_REQUEST_IRQ		vme_request_irq
#define VME_FREE_IRQ		vme_free_irq
#endif /* A25_WRAPPER */

extern int vme_bus_to_phys( int space, u32 vmeadrs, void **physadrs_p );
extern int VME_REQUEST_IRQ(	unsigned int vme_irq,
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,19)
							void (*handler)(int, void * ),
#else
							void (*handler)(int, void *, struct pt_regs *),
#endif
							unsigned long flags,
							const char *device,
							void *dev_id);

extern void VME_FREE_IRQ(unsigned int vme_irq, void *dev_id);
extern int vme_ilevel_control( int level, int enable );


#if 1 /*def CONFIG_MEN_VME_RTAI_KERNELIF */
int vme_rt_request_irq( unsigned int vme_irq,
						void (*handler)( int, void *, struct pt_regs *),
						const char *device,
						void *dev_id);

int vme_rt_free_irq(unsigned int vme_irq, void *dev_id );
#endif /* CONFIG_MEN_VME_RTAI_KERNELIF */


#ifdef __cplusplus
	}
#endif

#endif	/* _MEN_VME_KERNELIF_H */
