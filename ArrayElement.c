#include"/home/gladson/Desktop/Practice/program_practice/recursion/array_element/ArrayElement.h"

void ArrayElement(int arr1[],int st,int l)
{
	if(st>=l)
	{
		return;
	}
	printf("%d ",arr1[st]);
	ArrayElement(arr1,st+1,l);
}
