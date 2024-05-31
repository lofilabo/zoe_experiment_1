#include "unacceptable.h"

int unacceptable_basis1(int j){
	j++;
	printf ("Number 1 --- This Is Unacceptable! (No.1 - The very first!!)\n");
	return j;
}


int unacceptable_basis2(int j){
	j=123;
	printf ("Number 2\n");
	return j;
}


int unacceptable_basis3(int j){
	j=987;
	printf ("Number 3\n");
	return j;
}
int unacceptable_basis4(int j){
	j=000;
	printf ("Number 4\n");
	return j;
}

int unacceptable_basisZ(int j){
	printf("You entered: %d \n", j);
	j = j*10;
	return j;
}
