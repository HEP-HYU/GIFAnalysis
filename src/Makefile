# Makefile for GIFAnalysis

C=c++

ROOTCFLAGS=$(shell root-config --cflags)
ROOTLIBS=$(shell root-config --libs)

CFLAGS =
LFLAGS =

RCXX=$(CFLAGS) $(ROOTCFLAGS)
RLXX=$(LFLAGS) $(ROOTLIBS)

all : Calibrate KODEL Tracking 

Calibrate : Calibrate.o
	$(C) -o Calibrate $(RLXX) Calibrate.o

KODEL : KODEL.o
	$(C) -o KODEL $(RLXX)  KODEL.o 

Tracking : Tracking.o
	$(C) -o Tracking $(RLXX) Tracking.o 

%.o: %.C
	$(C) $(RCXX) -c $<

clean:
		@rm -f *~
		@rm -f *.o 
		@rm -f *.x
