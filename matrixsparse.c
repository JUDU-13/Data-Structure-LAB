#include<stdio.h>
struct sparsematrix
{
    int r;
     int c;
     int v;
		}sp[50];

int main()
	{
    int c,r,j,i,x=0;
    printf("\nEnter the number of rows and columns of the matrix : \n");
    scanf("%d %d",&r,&c);
    int m[r][c];
    printf("\nEnter the elements of matrix : \n");  
   	 for(i=0;i<r;i++)
			{
        for(j=0;j<c;j++)
       	 {
          scanf("%d",&m[i][j]);
          	if(m[i][j]!=0)
           	 {
							sp[x].r=i;
              sp[x].c=j;
              sp[x].v=m[i][j];
              x++;
             }
         }
       }
   	printf("\n\tSparse Matrix\nRow\tColumn\tValue\n");
    for(i=0;i<x;i++)
    {
     printf("%d\t%d\t%d\t\n",sp[i].r,sp[i].c,sp[i].v);
    }
     
	}
