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
	
	int arrAPosition = 0, arrXPosition = 0;
	int isSubseq = 1; //assume x is subsequence of array a
	int i = 0;
	for (; i < numAElements; i++)
	{
		if (arrX[arrXPosition] == arrA[arrAPosition])
		{
			arrAPosition++;
			arrXPosition++;
			i = 0; //reset counter to max number of comparisons allowed
		}
		else if (arrX[arrXPosition] != arrA[arrAPosition])
		{
			arrAPosition++;
		}
		else if (arrAPosition == numAElements)//exhaust array a list, so x is not subsequence
		{
			isSubseq = 0; //false = not a subseq
		}
	}
	return 0;
}