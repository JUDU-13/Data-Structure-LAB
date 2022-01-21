#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100

	int stack[LIMIT],t,i,c,e;

	void push();
	void pop();
	void display();
 
		int main()
			{
				printf("STACK IMPLEMENTATION USING ARRAY\n");
				t=-1;
					
					do
					 {
						printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
						printf("Enter your choice:");
						scanf("%d",&c);

							switch(c)
								{
									case 1:
										push();
											break;
									case 2:
										pop();
											break;
									case 3:
										display();
											break;
									case 4:
											break;
									default:
										printf("Invalid choice selected\n");
										break;
								}
						}while(c!=4);
							return 0;
			}

	void push()
		{
			if(t==LIMIT-1)
				{
					printf("Stack underflow\n");
				}
			else
				{
					printf("Enter the element to be inserted:");
					scanf("%d",&e);
					t++;
					stack[t]=e;
					}
		}

	void pop()
		{
			if(t==-1)
				{
					printf("Stack underflow\n");
				}
			else
				{
					e=stack[t];
					printf("The deleted item is %d\n",stack[t]);
					t--;
				}
		}

	void display()
		{
			if(t==-1)
				{
					printf("Stack underflow\n");
				}
			else if(t>0)
				{
					printf("The elements of the stack are:\n");
					for(i=t;i>=0;i--)
						{
							printf("%d\n",stack[i]);
						}
					}
		}
