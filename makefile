all : quadratics

quadratics : quadratics.o
	gcc -o quadratics quadratics.o -lm

quadratics.o : quadratics.c
	gcc -c quadratics.c -lm

clean : 
	rm quadratics *.o
