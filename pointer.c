#include <stdio.h>

int main () {

	int  var = 20;	/* actual variable declaration */
	int  *ip;	/* pointer variable declaration */

	char (*pa)[10];	// pointer to a 10-element array of char

	char *pb[10];	// array of 10 elements of 'pointer to char'
	char *(pc[10]);	// array of 10 elements of 'pointer to char'
	char *(pd)[10];	// array of 10 elements of 'pointer to char'


	ip = &var;  /* store address of var in pointer variable*/

	printf("Address of var variable: 0x%X\n", &var);

	/* address stored in pointer variable */
	printf("Address stored in ip variable: 0x%X\n", ip);

	/* access the value using the pointer */
	printf("Value of *ip variable: %d\n", *ip);


	pa = '1111';
	printf("Size of *pa %lu. Value is 0x%X\n", sizeof(*pa), pa); //Size of *pa 10. Value is 0x31313131
	printf("Size of *pa %lu. Value is 0x%X\n", sizeof(*pa), *pa); //Size of pa 10. Value is 0x31313131
	printf("Size of pa %lu. Address is 0x%X\n", sizeof(pa), &pa); //Size of pa 8. Address is 0x5CDF6948

	pb[0] = '2222';
	pb[1] = '3333';
	printf("Size of *pb %lu. Value is 0x%X\n", sizeof(*pb), pb[0]); //Size of *pb 8. Value is 0x32323232
	printf("Size of pb %lu. Address is 0x%X\n", sizeof(pb), &pb[0]); //Size of pb 80. Address is 0x5CDF6A00
	printf("Size of pb %lu. Address is 0x%X\n", sizeof(pb), &pb); //Size of pb 80. Address is 0x5CDF6A00

	printf("Size of *pb %lu. Value is 0x%X\n", sizeof(*pb), pb[1]); //Size of *pb 8. Value is 0x33333333
	printf("Size of pb %lu. Address is 0x%X\n", sizeof(pb), &pb[1]); //Size of pb 80. Address is 0x5CDF6A08

	printf("Size of *pc %lu\n", sizeof(*pc)); //Size of *pc 8
	printf("Size of pc %lu\n", sizeof(pc)); //Size of pc 80

	printf("Size of *pd %lu\n", sizeof(*pd)); //Size of *pd 8
	printf("Size of pd %lu\n", sizeof(pd)); //Size of pd 80	


	return 0;
}