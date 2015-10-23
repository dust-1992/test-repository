#include "lowcase.h"
int lowcase(char z){
	if (z >= 'A' && z <= 'Z')
		return z+32;
	return z;
} 
