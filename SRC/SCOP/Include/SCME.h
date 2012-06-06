/*
 * SCME.h
 *
 *  Created on: Jun 5, 2012
 *      Author: mpoppe
 */

#ifndef SCME_H_
#define SCME_H_

#ifndef SCOP_H_
#error GRIP.h needs to be included before SCME.h in all instances
#endif

extern void SCME_OPEN_conf(scme_open_conf_t *conf);
extern void SCME_CLOSE_conf(scme_close_conf_t *conf);
extern void SCME_LISTEN_conf(scme_listen_conf_t *conf);
extern void SCME_GET_conf(scme_get_conf_t *conf);
extern void SCME_SET_conf(scme_set_conf_t *conf);


#define SCME_DEBUG	(GRIP_DBG_ON | GRIP_DBG_LEVEL_ALL)



#endif /* SCME_H_ */
