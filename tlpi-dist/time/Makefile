include ../Makefile.inc

GEN_EXE = calendar_time show_time process_time strtime
MY_EXE = my_calendartime_1 my_time_convention my_formating_time_string my_process_time my_process_time_times my_process_time_clock

EXE = ${GEN_EXE} ${LINUX_EXE} ${MY_EXE}

all : ${EXE}

allgen : ${GEN_EXE}

clean : 
	${RM} ${EXE} *.o

showall :
	@ echo ${EXE}

cal_time: cal_time.o
	${CC} -o $@ cal_time.o ${CFLAGS} ${IMPL_LDLIBS} ${LINUX_LIBRT}

process_time_test: process_time_test.o
	${CC} -o $@ process_time_test.o ${CFLAGS} ${IMPL_LDLIBS} ${LINUX_LIBRT}

${EXE} : ${TLPI_LIB}		# True as a rough approximation
