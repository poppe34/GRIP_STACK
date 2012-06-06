
#include "GRIP.h"
#include "SCME.h"
//#include "tcpip_sel.h"

#include <netif/ethernetif.h>

#include <lwip/ip.h>
#include <lwip/ip_addr.h>
#include <lwip/netif.h>
#include <lwip/tcpip.h>
#include <lwip/dhcp.h>
#include "lwip/sockets.h"

void SCME_OPEN_conf(scme_open_conf_t *conf) __attribute__((__weak__));
void SCME_CLOSE_conf(scme_close_conf_t *conf)__attribute__((__weak__));
void SCME_LISTEN_conf(scme_listen_conf_t *conf) __attribute__((__weak__));
void SCME_GET_conf(scme_get_conf_t *conf)__attribute__((__weak__));
void SCME_SET_conf(scme_set_conf_t *conf) __attribute__((__weak__));



/* Global Interface Variables */
static struct ip_addr ipaddr, netmask, gw;
static struct netif netif;

void SCME_init(void)
{
	lwip_socket_init();
}

void SCME_OPEN_req(scme_open_req_t *req)
{
	
}

void SCME_OPEN_ind(scme_open_ind_t *ind)
{
	
}

void SCME_OPEN_conf(scme_open_conf_t *conf)
{
	
}