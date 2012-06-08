/*
 * SCOP.c
 *
 *  Created on: Jun 8, 2012
 *      Author: Matt Poppe
 */



#include <netif/ethernetif.h>

#include <lwip/ip.h>
#include <lwip/ip_addr.h>
#include <lwip/netif.h>
#include <lwip/tcpip.h>
#include <lwip/dhcp.h>
#include "lwip/sockets.h"

/* Global Interface Variables */
static struct ip_addr ipaddr, netmask, gw;
static struct netif netif;

void SCOP_init(void)
{
	/* Initialize TCP/IP stack */
		tcpip_init(NULL, NULL);

		/* Bring up the network interface */
		netif_add(&netif, &ipaddr, &netmask, &gw, NULL, ethernetif_init, tcpip_input);
		netif_set_default(&netif);
		netif_set_up(&netif);
}

