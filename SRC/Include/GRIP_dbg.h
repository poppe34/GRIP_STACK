/*
 * GRIP_dbg.h
 *
 *  Created on: Jun 5, 2012
 *      Author: mpoppe
 *
 *      NOTE: I used most of the code from the DBG in LWIP.  It is flexable and very useful
 */

#ifndef GRIP_DBG_H_
#define GRIP_DBG_H_

#define SYS_DBG_DISPLAY_FUNC(message)

#define GRIP_DEBUG_ON		1

#define GRIP_DBG_LEVEL_WARNING 0x01 /* bad checksums, dropped packets, ... */
#define GRIP_DBG_LEVEL_SERIOUS 0x02 /* memory allocation failures, ... */
#define GRIP_DBG_LEVEL_SEVERE  0x04
#define GRIP_DBG_LEVEL_ALL     0x00
#define GRIP_DBG_LEVEL_OFF     0xff /* compatibility define only */
#define GRIP_DBG_LEVEL		   GRIP_DBG_LEVEL_ALL


#ifndef GRIP_DBG_HALT
#define GRIP_DBG_HALT 0
#endif

#ifndef GRIP_NOASSERT
#define GRIP_ASSERT(message, assertion) do { if(!(assertion)) \
  GRIP_PLATFORM_ASSERT(message); } while(0)
#else  /* GRIP_NOASSERT */
#define GRIP_ASSERT(message, assertion)
#endif /* GRIP_NOASSERT */

/** if "expression" isn't true, then print "message" and execute "handler" expression */
#ifndef GRIP_ERROR
#define GRIP_ERROR(message, expression, handler) do { if (!(expression)) { \
  GRIP_PLATFORM_ASSERT(message); handler;}} while(0)
#endif /* GRIP_ERROR */

#if GRIP_DEBUG_ON
/** print debug message only if debug message type is enabled...
 *  AND is of correct type AND is at least GRIP_DBG_LEVEL
 */
#define GRIP_DEBUGF(debug, message) do { \
                               if ( \
                                   ((s16_t)((debug) >= GRIP_DBG_LEVEL))) { \
                                  SYS_DBG_DISPLAY_FUNC(message); \
                                 if ((debug) & GRIP_DBG_HALT) { \
                                   while(1); \
                                 } \
                               } \
                             } while(0)

#else  /* GRIP_DEBUG */
#define GRIP_DEBUGF(debug, message)
#endif /* GRIP_DEBUG */

#endif /* GRIP_DBG_H_ */
