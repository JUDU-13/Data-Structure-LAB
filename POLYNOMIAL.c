#include<stdio.h>
	struct poly
	 {
	    int e;
			float c;
	 }poly[30];
	
int main()
		{
			int n,i,k=0;
  	  printf("Enter degree of the polynomial : ");
    	scanf("%d",&n);
  	 		for(i=0;i<=n;i++)	
				 {
     		   printf("Enter the coefficient of the value x^%d : ",i);
        	 scanf("%f",&poly[i].c);
        	 poly[i].e=i;
   		 		}
			printf("The entered polynomial values are: ");
   				 for(i=n;i>0;i--)
   					 {
       				printf(" %.2fx^%d +",poly[i].c,poly[i].e);
  					  }
    					printf(" %.2fx^%d ",poly[0].c,poly[0].e);
		}
