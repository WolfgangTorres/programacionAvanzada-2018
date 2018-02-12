all:
	gcc proyecto1.c -o proyecto1.exe
	./proyecto1.exe

proyecto1.o: proyecto1.c
	gcc -c proyecto1.c

runtest: 
	./maintest.tcl ./proyecto1.exe
