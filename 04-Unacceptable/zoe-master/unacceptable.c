#include "unacceptable.h"

/*
Start.
Notice:
VISIBLE I IZ MYLIB'Z ISUNACCEPTABLE1 YR 1 MKAY
-------------------------------------^^^^^ 1 value
*/

/*new -- and -- do not need right now*/
/*
int GLOBAL_a, GLOBAL_b, GLOBAL_c, GLOBAL_d, GLOBAL_e; // global variables

char * GLOBAL_CHAR_1;
char * GLOBAL_CHAR_2;
char * GLOBAL_CHAR_3;
char * GLOBAL_CHAR_4;
char * GLOBAL_CHAR_5;

char back[40];
*/

int unacceptable_basis1(char* j){
	printf ("Number 1 --- This Is Unacceptable! (No.1 - The very first!!)\n");
	printf("%s\n",j);
	printf("Input From C: %s\n", j);
	char greetings[] = "Hello World!";
	int rtn = 111;
	return rtn;
}

/* Backup 
int unacceptable_basis2(int j){
	printf ("Number 2\n");
	return j;
}
*/
char* unacceptable_basis2(int j){
/*char unacceptable_basis2(int j){*/
	printf ("Number 2\n");
	printf ("Entering unacceptable.c\n");
	//NEXT: Assign a 'string' to GLOBAL_CHAR_1
	/*
	GLOBAL_CHAR_1 is Global Variabe.
	DECLARE in main.c
	CHANGE  int
	AND DO NOT FORGET TO DECLARE HERE!!
	*/

//	char* return_string = "Blurgh"; 
//	return 1;	
	char str[] = "a,AAAy;b,BBBeee;c,Seeee";
	//strcpy(GLOBAL_CHAR_1, "ab");
	//GLOBAL_CHAR_1 = "In Global But Elswhere!";


/*Cheesy!!  Return using a text file!!*/
	    char *filename = "out01.txt";
	    FILE *fp = fopen(filename, "w");
	    for (int i = 0; i < 10; i++)
		fprintf(fp, "This is the line #%d\n", i + 1);

	    fclose(fp);
/*end of cheese*/





//	return back;
	printf ("Leaving unacceptable.c\n");
	return "This is sent back from unacceptable.c and shown by Zoe";//<<<<<-----------SENDING VAR BACK?????????????????????
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
// PROTOTYPE TO COPY.  DO NOT MODIFY.
	printf("You entered: %d \n", j);
	j = j*10;
	return j;
}

/*
From here, the '2 Z's' indicate that we are passing on 2 values.

TO CALL, notice
 VISIBLE I IZ MYLIB'Z ISUNACCEPTABLEZZ1 YR 11 AN YR 12 MKAY
----------------------------------------^^^^^^^^^^^^^^ 2 values
*/

int unacceptable_basisZZ1(int j, int k){
// PROTOTYPE TO COPY.  DO NOT MODIFY.
	printf("Difficult 1 j: %d \n", j);
	printf("Difficult 1 k: %d \n", k);
	j = j*10;
	return j;
}


int unacceptable_basisZZ2(int j, int k){
// MODIFY
	printf("Difficult 2 j: %d \n", j);
	printf("Difficult 2 k: %d \n", k);
	j = j*10;
	return j;
}

int unacceptable_basisZZ3(int j, int k){
// MODIFY
	printf("Difficult 3 j: %d \n", j);
	printf("Difficult 3 k: %d \n", k);
	j = j*10;
	return j;
}


int unacceptable_basisZZZbase(int j, int k, int l){
// MODIFY
	printf("Base - 3-Base j: %d \n", j);
	printf("Base - 3-Base k: %d \n", k);
	printf("Base - 3-Base k: %d \n", l);
	j = j*10;
	return j;
}


int unacceptable_basisZZZ1(int j, int k, int l){
// MODIFY
	printf("ZZZ1 - 3-1 j: %d \n", j);
	printf("ZZZ1 - 3-1 k: %d \n", k);
	printf("ZZZ1 - 3-1 k: %d \n", l);
	j = j*10;
	return j;
}


int unacceptable_basisZZZ2(int j, int k, int l){
// MODIFY
	printf("ZZZ2 - 3-2 j: %d \n", j);
	printf("ZZZ2 - 3-2 k: %d \n", k);
	printf("ZZZ2 - 3-2 k: %d \n", l);
	j = j*10;
	return j;
}


int unacceptable_basisZZZ3(int j, int k, int l){
// MODIFY
	printf("ZZZ3 - 3-3 j: %d \n", j);
	printf("ZZZ3 - 3-3 k: %d \n", k);
	printf("ZZZ3 - 3-3 k: %d \n", l);
	j = j*10;
	return j;
}


