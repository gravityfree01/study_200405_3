#include<iostream>
/*
while로 별구하기


*
**
***
****
*****

*/


using namespace std;

void main() {
	/*

	1. while 문법

	int a= 0;
	while (a < 5) {
		int b = 0;
		while (b<= a) {
			printf("*");
			b++;
		}
		a++;
		printf("\n");
	}
	*/


	/*
	2. do while 문법

	int a = 0;

	do {
		printf("hello world\n");

	} while (a == 1) {
		printf("hello world");
	}


	*/


	/*
	
	int loop = 4;
	while (loop < 10) {
		int innerLoop = 1;
		printf("=====%d단==== \n\n", loop);

		while (innerLoop <= 9) {
			printf("%d * %d=%d\n", loop, innerLoop, loop * innerLoop);
			innerLoop++;
		}
		loop += 4;
	}
	*/


	int a = 0;
	while (a < 8) {
		int b =0;
		while (b <= a ) {
			printf("*");
			b++;
		}
		a +=2;
		printf("\n");
	}
	fgetc(stdin);
}