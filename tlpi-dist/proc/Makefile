include ../Makefile.inc

GEN_EXE = bad_longjmp display_env longjmp \
      necho setjmp_vars setjmp_vars_opt t_getenv
MY_EXE = hello my_env my_env_put
LINUX_EXE = modify_env

EXE = ${GEN_EXE} ${LINUX_EXE} ${MY_EXE}

all : ${EXE}

allgen : ${GEN_EXE}

clean : 
	${RM} ${EXE} *.o

showall :
	@ echo ${EXE}

${EXE} : ${TLPI_LIB}# True as a rough approximation
