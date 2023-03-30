#include<stdio.h>

int main()
{
  
    int n,c=0,i,j,temp,s=24;
    printf("Enter the total size of array: ");
    scanf("%d" , &n);
    s += (n*4);
    c++;
    int arr[n];
	printf("Enter the elements: ");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d" , &arr[i]);
        c++;
    }
    c++;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                c += 3;
            }
        }
        c++;
    }
    c++;
    printf("\nSorted Array: ");
    for(i=0 ; i<n ; i++)
    {
        printf(" %d" , arr[i]);
    }
    c++;
    printf("\nSpace Complexity: %d", s);
    printf("\nTime Complexity: %d", c);
    return 0;
}
