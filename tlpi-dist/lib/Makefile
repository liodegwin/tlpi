# Makefile to build library used by all programs
#
# This Makefile relies on the assumption that each C file in this
# directory belongs in the library. It takes advantage of some features
# specific to GNU make. If you don't have GNU make, remove this file
# and rename "Makefile.std" in this directory to "Makefile".
#
include ../Makefile.inc

all : ${TLPI_LIB}
	@echo lib/makefile target: all is building

OBJECTS=$(patsubst %.c,%.o,$(wildcard *.c))

${TLPI_LIB} : ${OBJECTS}
	@echo lib/makefile target tlpi_lib is building
	@echo target is ${TLPI_LIB}
	@echo dependencies  are ${OBJECTS}
	${RM} ${TLPI_LIB}
	${AR} rs ${TLPI_LIB} *.o

error_functions.o : ename.c.inc

ename.c.inc :
	@echo target : ename.c.inc is building
	sh Build_ename.sh > ename.c.inc
	echo 1>&2 "ename.c.inc built"
	@echo target : ename.c.inc has been built

clean :
	${RM} *.o ename.c.inc ${TLPI_LIB}
