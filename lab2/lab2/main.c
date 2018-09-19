/*
lab 2
Luke Owens
1001105628

to compile, type:

gcc main.c -o exe
./exe

*/

/*
description:

*/


//protos
int subsequenceTest(int arrayA[], int arrayX[], int numAElement, int numXElement);


#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Enter 2 integers giving the number of integers in sequences A and X\n");
	int numAElements = 0, numXElements = 0;
	scanf("%d %d", &numAElements, &numXElements);

	int arrA[20] = { 4,3,2,1,4,3,2,1, 4,3,2,1, 4,3,2,1, 4,3,2,1 };
	int arrX[3] = { 1, 2, 3 };
	//use after final is done for array input.

	//int *arrA = (int*)calloc(numAElements, sizeof(int*));
	//int *arrX = (int*)calloc(numBElements, sizeof(int*));
	////input array a
	//printf("Enter each integer of A, one per line\n");
	//int i = 0;
	//for (; i < numAElements; i++)
	//{
	//	int num;
	//	scanf("%d", &num);
	//	arrA[i] = num;
	//}					


	//printf("\n\n%d\n", isSubseq);
	return 0;
}

int subsequenceTest(int arrayA[], int arrayX[], int numAElement, int numXElement)
{
	int arrAPosition = 0, arrXPosition = 0, numFound = 0;
	int isSubseq = 0; //assume x is not a subsequence of array A
					  //int i = 0;
	for (; arrAPosition < numAElement && numFound < numXElement; arrAPosition++)
	{
		if (arrayX[arrXPosition] == arrayA[arrAPosition])
		{
			arrXPosition++;
			numFound++;
		}
	}

	if (arrXPosition == numXElement)
	{
		return 1;
	}
}
//returns 1 of array x is subsequence of array A. 0 otherwise.
