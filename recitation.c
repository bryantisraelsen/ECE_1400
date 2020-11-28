
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sum.h"
int main(int argc, char **argv){
	int j, i, s;
	s = 0;
	for(i=1; i < argc; i++){
		s = sum(s, atoi(argv[i]));
	}
	printf("Sum: %d", s);
}