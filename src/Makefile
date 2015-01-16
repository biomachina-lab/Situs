#####
# Makefile for Situs 2.7
#####

SRC_DIR	= .
BIN_DIR = ../bin
SHELL = /bin/sh

#####
# name (directory path) of compiler to be used
#####

CC         = gcc
CXX        = g++

#####
# any extra compiler and linker options (see the compiler man page)
#####

CFLAGS     = -O3 -w -I../fftw
XFLAGS     = -O3 -w 
LFLAGS     = -lm 

#####
# enable POSIX thread support (comment out if not supported)
#####

SMP        = -D_SMP_ -DMAX_NUM_THREADS=16
SMPLIB     = -lpthread

#####
# enable OPENMP thread support (comment out if not supported)
#####

OMP        = -fopenmp
OMPLIB     = -lgomp 

#####
# Situs files
#####

SITUS_C	= map2map.c volhist.c voldiff.c \
			qvol.c qpdb.c pdb2sax.c \
			pdb2vol.c vol2pdb.c colores.c \
			voledit.c collage.c pdbsymm.c eul2pdb.c \
			qplasty.c volaver.c volmult.c

SITUS_CPP = matchpt.cpp voltrac.cpp volfltr.cpp

AUX     = lib_vio.c lib_pio.c lib_std.c lib_eul.c lib_pow.c \
          lib_pwk.c lib_rnd.c lib_vec.c lib_vwk.c lib_tim.c lib_err.c \
	  lib_smp.c lib_mpt.cpp lib_svt.cpp lib_sba.cpp

SITUS_EXEC = $(SITUS_C:.c=) $(SITUS_CPP:.cpp=)

#####
# FFTW files
#####

FFTWCFILES = $(wildcard ../fftw/*.c)
FFTWOFILES = $(patsubst %.c,%.o,$(notdir $(FFTWCFILES)))

vpath %.c $(SRC_DIR)
vpath %.c ../fftw

AR = ar
ARFLAGS = cru
RANLIB = ranlib

#####
# misc commands
#####

CD = cd
RM = rm -f
MV = mv
OBJ_FILES = $(wildcard *.o) libfftw.a

#####
# main makefile rules
#####

default: $(SITUS_EXEC)

all: $(SITUS_EXEC)

map2map:	map2map.o lib_err.o lib_vwk.o lib_vec.o lib_std.o lib_vio.o 
	$(CC) map2map.o lib_vio.o lib_vwk.o lib_vec.o  lib_std.o lib_err.o $(LFLAGS) -o map2map

volhist:	volhist.o lib_err.o lib_std.o lib_vwk.o lib_vec.o lib_vio.o 
	$(CC) volhist.o lib_vio.o lib_std.o lib_err.o lib_vwk.o lib_vec.o $(LFLAGS) -o volhist

voldiff:	voldiff.o lib_err.o lib_vwk.o lib_vec.o lib_std.o lib_vio.o  
	$(CC) voldiff.o lib_err.o lib_vwk.o lib_vec.o lib_std.o lib_vio.o $(LFLAGS) -o voldiff

volaver:	volaver.o lib_err.o lib_vwk.o lib_vec.o lib_std.o lib_vio.o 
	$(CC) volaver.o lib_err.o lib_vwk.o lib_vec.o lib_std.o lib_vio.o $(LFLAGS) -o volaver

volmult:	volmult.o lib_err.o lib_vwk.o lib_vec.o lib_std.o lib_vio.o  
	$(CC) volmult.o lib_err.o lib_vwk.o lib_vec.o lib_std.o lib_vio.o $(LFLAGS) -o volmult

qvol:		qvol.o lib_err.o lib_pio.o lib_std.o lib_rnd.o lib_vec.o lib_vwk.o lib_vio.o 
	$(CC) qvol.o lib_vio.o lib_pio.o lib_std.o lib_rnd.o lib_vec.o lib_vwk.o lib_err.o $(LFLAGS) -o qvol

voledit:	voledit.o lib_err.o lib_std.o lib_vwk.o lib_vec.o lib_vio.o  
	$(CC) voledit.o lib_vio.o lib_std.o lib_vwk.o lib_vec.o lib_err.o $(LFLAGS) -o voledit

qpdb:	qpdb.o lib_err.o lib_vio.o lib_pwk.o lib_std.o lib_vwk.o lib_vec.o lib_eul.o lib_rnd.o lib_vio.o 
	$(CC) qpdb.o lib_err.o lib_std.o lib_pio.o lib_pwk.o lib_vwk.o lib_vec.o lib_vio.o lib_eul.o lib_rnd.o $(LFLAGS) -o qpdb

pdb2sax:	pdb2sax.o lib_err.o lib_pio.o lib_std.o
	$(CC) pdb2sax.o lib_err.o lib_std.o lib_pio.o $(LFLAGS) -o pdb2sax

pdb2vol:	pdb2vol.o lib_err.o lib_pio.o lib_pwk.o lib_std.o lib_vwk.o lib_vec.o lib_eul.o lib_vio.o 
	$(CC) pdb2vol.o lib_err.o lib_std.o lib_pio.o lib_pwk.o lib_vwk.o lib_vec.o lib_vio.o lib_eul.o $(LFLAGS) -o pdb2vol

vol2pdb:	vol2pdb.o lib_err.o lib_pio.o lib_std.o lib_vwk.o lib_vec.o lib_vio.o 
	$(CC) vol2pdb.o lib_err.o lib_std.o lib_pio.o lib_vwk.o lib_vec.o lib_vio.o $(LFLAGS) -o vol2pdb

pdbsymm:	pdbsymm.o lib_err.o lib_pio.o lib_std.o lib_vwk.o lib_vec.o lib_vio.o
	$(CC) pdbsymm.o lib_err.o lib_std.o lib_vio.o lib_vwk.o lib_vec.o lib_pio.o $(LFLAGS) -o pdbsymm

eul2pdb:	eul2pdb.o lib_std.o lib_err.o lib_pio.o lib_pwk.o lib_eul.o lib_vec.o lib_vwk.o
	$(CC) eul2pdb.o lib_std.o lib_err.o lib_pio.o lib_pwk.o lib_eul.o lib_vec.o lib_vwk.o $(LFLAGS) -o eul2pdb

qplasty:	qplasty.o  lib_err.o lib_std.o lib_pio.o
	$(CC) qplasty.o lib_err.o lib_std.o lib_pio.o $(LFLAGS) -o qplasty

collage:	collage.o lib_std.o lib_pio.o lib_vwk.o lib_vec.o lib_rnd.o lib_pwk.o lib_pow.o lib_err.o lib_eul.o lib_tim.o lib_smp.o lib_vio.o 
	$(CC) collage.o lib_std.o lib_pio.o lib_vio.o lib_vwk.o lib_vec.o lib_rnd.o lib_pwk.o lib_pow.o lib_err.o lib_eul.o lib_tim.o lib_smp.o $(LFLAGS) $(SMPLIB) -o collage

colores:	colores.o lib_std.o lib_pio.o lib_vwk.o lib_vec.o lib_rnd.o lib_pwk.o lib_pow.o lib_err.o lib_eul.o lib_tim.o lib_smp.o lib_vio.o libfftw.a
	$(CC) colores.o lib_std.o lib_pio.o lib_vio.o lib_vwk.o lib_vec.o lib_rnd.o lib_pwk.o lib_pow.o lib_err.o lib_eul.o lib_tim.o lib_smp.o libfftw.a $(LFLAGS) $(SMPLIB) $(OMPLIB) -o colores

matchpt:	matchpt.o lib_mpt.o 
	$(CXX) $(CFLAGS) -c lib_err.c
	$(CXX) $(CFLAGS) -c lib_vwk.c
	$(CXX) $(CFLAGS) -c lib_vec.c
	$(CXX) $(CFLAGS) -c lib_vio.c
	$(CXX) $(CFLAGS) -c lib_pio.c
	$(CXX) $(CFLAGS) -c lib_std.c
	$(CXX) matchpt.o lib_mpt.o lib_vio.o lib_pio.o lib_vwk.o lib_vec.o lib_std.o lib_err.o $(LFLAGS) $(OMPLIB) -o matchpt
	$(RM) lib_mpt.o lib_vio.o lib_pio.o lib_vwk.o lib_vec.o lib_std.o lib_err.o

voltrac:	voltrac.o lib_sba.o lib_svt.o	
	$(CXX) $(XFLAGS) -c lib_err.c
	$(CXX) $(XFLAGS) -c lib_vwk.c
	$(CXX) $(XFLAGS) -c lib_vec.c	
	$(CXX) $(XFLAGS) -c lib_vio.c
	$(CXX) $(XFLAGS) -c lib_pio.c
	$(CXX) $(XFLAGS) -c lib_std.c	
	$(CXX) voltrac.o lib_sba.o lib_svt.o lib_vio.o lib_pio.o lib_vwk.o lib_vec.o lib_std.o lib_err.o $(LFLAGS) $(OMPLIB) $(SMPLIB) -o voltrac
	$(RM) lib_vio.o lib_pio.o lib_vwk.o lib_vec.o lib_std.o lib_err.o 

volfltr:	volfltr.o lib_sba.o lib_svt.o	
	$(CXX) $(XFLAGS) -c lib_err.c
	$(CXX) $(XFLAGS) -c lib_vwk.c
	$(CXX) $(XFLAGS) -c lib_vec.c	
	$(CXX) $(XFLAGS) -c lib_vio.c
	$(CXX) $(XFLAGS) -c lib_std.c	
	$(CXX) volfltr.o lib_sba.o lib_svt.o lib_vio.o lib_vwk.o lib_vec.o lib_std.o lib_err.o $(LFLAGS) $(OMPLIB) $(SMPLIB) -o volfltr
	$(RM) lib_vio.o lib_vwk.o lib_vec.o lib_std.o lib_err.o 

libfftw.a:	$(FFTWOFILES) 
	$(AR) $(ARFLAGS) libfftw.a $(FFTWOFILES)
	$(RANLIB) libfftw.a

install:
	$(MV) $(SITUS_EXEC) $(BIN_DIR)

clean:
	$(RM) $(OBJ_FILES)
	$(MV) $(SITUS_EXEC) $(BIN_DIR)

veryclean:
	$(RM) $(OBJ_FILES)	
	$(CD) $(BIN_DIR) && $(RM) $(SITUS_EXEC)

.c.o:
	$(CC) $(CFLAGS) $(SMP) $(OMP) -c $(SRC_DIR)/$<
.cpp.o:
	$(CXX) $(XFLAGS) $(SMP) $(OMP) -c $(SRC_DIR)/$<
