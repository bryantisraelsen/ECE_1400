recitation: recitation.o sum.o
	gcc -o recitation recitation.o sum.o
	
recitation.o: recitation.c sum.h
	gcc -c recitation.c
	
sum.o: sum.c sum.h
	gcc -c sum.c