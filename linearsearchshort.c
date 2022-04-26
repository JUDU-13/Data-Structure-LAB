#include <stdio.h>
int main()
 {
  int i, n;
  printf("\nEnter the size of the array : ");
  scanf("%d", &n);
  int arr[n],j,x,flag=0,loc;
  printf("\nEnter the array elements : ");
  
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
	
	printf("\nEnter the element to search : ");
	scanf("%d", &x);
	
	for (j = 0; j < n; j++)
     {
	  if(arr[j]==x)
	   {
		flag = 1;
		loc = j + 1;
		break;
       }
	 }
	 
	if (flag == 1)
		printf("\nThe element %d is at the location: %d\n", x, loc);
	else
		printf("\nThe element %d is not found\n", x);
  }
