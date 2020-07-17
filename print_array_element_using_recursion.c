/**************************************************************************
 * FILE		: print_array_element_using_recursion().c
 * DESCRIPTION	: Program to print array element using recursion.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 17/07/2020
 * ************************************************************************/

#include"/home/gladson/Desktop/Practice/program_practice/recursion/array_element/ArrayElement.h"

int main()
{
	int arr1[MAX];
	int n,i;
	printf("\n\nRecursion : Print the array elements :\n");
	printf("------------------------------------------\n");
	printf("Input the number of elements to be stored in the array :");
	scanf("%d",&n);
	printf("Input %d elements in the array :\n",n);
	for(i=0;i<n;i++)
	{
		printf("element - %d : ",i);
		scanf("%d",&arr1[i]);
	}
	printf("The elements in the array are : ");
	ArrayElement(arr1,0,n);
	printf("\n\n");
	return 0;
}
