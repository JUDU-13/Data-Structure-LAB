#include<stdio.h>
#define stm 100

int arr[stm];
int top=-1;

 void push(int e)
   {
    if(top>stm-1)
     {
      printf("Stack Overflow");
      return;
     }
    else
     {
      top++;
      arr[top]=e;
      }
   }
     
 int pop()
   {
    if(top==-1)
      {
       printf("Stack Underflow");
       return 0;
      }
    else
      {
       int e;
       e=arr[top];
       top--;
       return (e);
      }
   } 

 int main()
   {
    char postfix[stm];
    int i,a,b,res,num;
    printf("Enter the postfix expression for sloving:");
    scanf("%s",postfix);
    for(i=0;postfix[i]!='\0';i++)
      {
       switch(postfix[i])
         {
          case'+':a=pop();
          b=pop();
          res=a+b;
          push(res);
          break;
          case'-':a=pop();
          b=pop();
          res=a-b;
          push(res);
          break;
          case'*':a=pop();
          b=pop();
          res=a*b;
          push(res);
          break;
          case'/':a=pop();
          b=pop();
          res=a/b;
          push(res);
          break;
          default:
          printf("Enter the value of %c:",postfix[i]);
          scanf("%d",&num);
          push(num);
          break;
         }
      }
   printf(" The postfix expression is: %s\n",postfix);
   printf(" Result:%d",arr[top]);
  }
