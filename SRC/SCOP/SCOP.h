/*
 * SCOP.h
 *
 *  Created on: Jun 6, 2012
 *      Author: mpoppe
 */

#ifndef SCOP_H_
#define SCOP_H_

#include <stdint.h>


/*
 *   Constants
 */
#define scopcMaxPacketSize				1500
#define scopcNATMappingRefreshPeriod	20
#define scopcLostConnectionTimeout		10
#define scopcHelloRetries				3



#define	scopTurnaroundTimeout_id		0xd0
#define scopMaxConnections_id 			0xd1
#define scopMaxConnectionDuration_id	0xd2

#define	scopTurnaroundTimeout_default		30000
#define scopMaxConnections_default 			1
#define scopMaxConnectionDuration_default	0

/*
 * Error Codes
 */
typedef enum scop_errCode_e
{
	scop_success = 0x0000,
	scop_already_connected= 0x0001,
	scop_invalid_destination = 0x0002,
	scop_invalid_address = 0x0003,
	scop_unsupported_transport = 0x0004,
	scop_invalid_transportType = 0x0005,
	scop_bad_transport_mode = 0x0006,
	scop_frame_length_error = 0x0007,
	scop_invalid_protocol_ver = 0x0008,
	scop_tcp_cnx_error = 0x0009,
	scop_tls_cnx_error = 0x000a,
	scop_handshake_failure = 0x000b,
	scop_termination_forced = 0x000c,
	scop_ping_not_recieved = 0x000d,
	scop_pong_not_recieved = 0x000e,
	scop_abnormal_termination = 0x000f,
	scop_listen_failed = 0x0010,
	scop_invalid_connection = 0x0011,
	scop_transmission_failed = 0x0012,
	scop_no_key = 0x0020,
	scop_bad_security_key = 0x0021,
	scop_security_failed = 0x0022,
	scop_max_connections_reached = 0x0023,
	scop_unsupported_attribute = 0x0024,
	scop_invalid_parameter = 0x0025,
}scop_errCode_t;





#endif /* SCOP_H_ */
