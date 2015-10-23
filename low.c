#include <stdio.h>
#include "lowcase.h"

int main(int argc, char* argv[]){
	char z;
	z = getchar();
	while (z != EOF){
		printf("%c",lowcase(z));
		z = getchar();
}
}
