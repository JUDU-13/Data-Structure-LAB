#include<stdio.h>
struct sparse
{
    int row;
    int col;
    int val;
};

int main()
{
    int row,col,i,j,k=0;
    printf("\nEnter the number of rows and columns : ");
    scanf("%d %d",&row,&col);
    int mat[row][col];
    printf("\nEnter the elements of matrix : ");
    struct sparse sp[20];   
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]!=0)
            {
                sp[k].row=i;
                sp[k].col=j;
                sp[k].val=mat[i][j];
                k++;
            }
        }
    }
    
    printf("\n\tSparse Matrix\nRow\tColumn\tValue\n");
    for(i=0;i<k;i++)
    {
            printf("%d\t%d\t%d\t\n",sp[i].row,sp[i].col,sp[i].val);
    }
     
}