/*
 * SCME.h
 *
 *  Created on: Jun 5, 2012
 *      Author: mpoppe
 */

#ifndef SCME_H_
#define SCME_H_



#ifndef SCOP_H_
#error SCOP.h needs to be included before SCME.h in all instances
#endif

typedef struct scme_open_req
{
	uint8_t testie;
}scme_open_req_t;


typedef struct scme_open_ind
{
	uint8_t testie;
}scme_open_ind_t;




typedef struct scme_open_conf
{

}scme_open_conf_t;


typedef struct scme_close_conf
{

}scme_close_conf_t;

typedef struct scme_listen_conf
{

}scme_listen_conf_t;

typedef struct scme_get_conf
{

}scme_get_conf_t;

typedef struct scme_set_conf
{

}scme_set_conf_t;


/*
 * This is only valid for GNUC
 */
//#ifdef __GNUC__

void SCME_OPEN_conf(scme_open_conf_t *conf) __attribute__((weak));
void SCME_CLOSE_conf(scme_close_conf_t *conf)__attribute__((weak));
void SCME_LISTEN_conf(scme_listen_conf_t *conf) __attribute__((weak));
void SCME_GET_conf(scme_get_conf_t *conf)__attribute__((weak));
void SCME_SET_conf(scme_set_conf_t *conf) __attribute__((weak));
//#else
//This is what I think you do for IAR but not 100%
//#pragma weak SCME_OPEN_conf
//#endif




#define SCME_DEBUG	(GRIP_DBG_ON | GRIP_DBG_LEVEL_ALL)



#endif /* SCME_H_ */
