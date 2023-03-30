#include <stdio.h>
void linear_search(int arr[], int);
int main()
{
	int i, n, arr[30], option = 1;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	printf("\nEnter the array elements : ");
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("\nThe array elements are : ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	while (option != 0)
	{
		printf("\nWhich operation do you want to do ?\n0-EXIT\n1-Linear Search\nEnter your Choice : ");
		scanf("%d", &option);
		switch (option)
		{
		case 0:
			break;
		case 1:
			linear_search(arr, n);
			break;
		default:printf("\nInvalid Entry...Try Again");
		}
	}
}

void linear_search(int arr[], int n)
{
	int i, x, flag = 0, loc;
	printf("\nEnter the element to search : ");
	scanf("%d", &x);
	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			flag = 1;
			loc = i + 1;
			break;
		}
	}
	if (flag == 1)
		printf("\nThe element %d is at the location %d\n", x, loc);
	else
		printf("\nThe element %d is not found\n", x);
}
