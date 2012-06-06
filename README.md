GRIP_STACK
==========

Grip stack for a zigbee Ethernet Gateway:

This is a first attempt on making a Zigbee Ethernet Gateway based on the Network Device: Gateway Spec.  The Spec
allows for three different protocols, but this will focus on the Grip protocol.  I am going to attempt to write this 
RTOS generic so it will run smoothly with an RTOS or stand alone loop.  

Ethernet will be based on LWIP, but again I am going to try to write it generic enough to make it easily ported.

Grip requires an ASN.1 stack to generate the Packet during my first version I will use an auto compiled code 
from Semantix ASN.1 compilier