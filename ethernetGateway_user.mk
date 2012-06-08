#
# User makefile.
# Edit this file to change compiler options and related stuff.
#

# Programmer interface configuration, see http://dev.bertos.org/wiki/ProgrammerInterface for help
ethernetGateway_PROGRAMMER_TYPE = none
ethernetGateway_PROGRAMMER_PORT = none

# Files included by the user.
ethernetGateway_USER_CSRC = \
	$(ethernetGateway_SRC_PATH)/main.c \
		bertos/mware/hex.c \
	#

# Files included by the user.
ethernetGateway_USER_PCSRC = \
	#

# Files included by the user.
ethernetGateway_USER_CPPASRC = \
	#

# Files included by the user.
ethernetGateway_USER_CXXSRC = \
	#

# Files included by the user.
ethernetGateway_USER_ASRC = \
	#

# Flags included by the user.
ethernetGateway_USER_LDFLAGS = \
	#

# Flags included by the user.
ethernetGateway_USER_CPPAFLAGS = \
	#

# Flags included by the user.
ethernetGateway_USER_CPPFLAGS = \
	-fno-strict-aliasing \
	-fwrapv \
	#
