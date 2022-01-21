/*
Conversion of Expression from infix to postfix
Jaidon Gill Shajan
039
Artifical Intelligence & Data Science
*/
#include <string.h>
#include <stdio.h>
#define SIZE 50

char s[SIZE];
int top=-1;

void push(char e)
 {
  s[++top]=e;
 }

char pop()
 {
  return(s[top--]);
 }

void display(int k,char p[])
 {
  for (int i=0;i<=top;i++)
  printf("%c",s[i]);
  printf("\n");
  for (int i=0;i<k;i++)
  printf("%c",p[i]);
 }

int precedence(char e)
 {
  switch(e)
   {
    case '(': return 1;
    case '+':
    case '-': return 2;
    case '*':
    case '/':
    case '%': return 3;
    case '^': return 4;
   default: return 0;
  }
 }

void convert(char in[],char pf[])
 {
  char ch;
  int k=0;
  push('\0');
  for (int i=0;in[i];i++)
   {
    ch = in[i];
    switch(ch)
     {
      case '(':
        push(ch);
        break;
      case ')':
        while((ch=pop())!='(')
           {
            pf[k++]=ch;
           }
        break;
     case '+':
     case '-':
     case '/':
     case '*':
     case '%':
     case '^':
       while(precedence(ch)<=precedence(s[top]))
         {
          pf[k++]=pop();
         }
       push(ch);
       break;
     default:
       pf[k++]=ch;
    }
   }
   while((pf[k++]=pop())!= '\0');
 }

int main()
 {
  char in[100];
  char pf[100];
  int no;
  printf("Enter total number of varibles and operations\n");
  scanf("%d",&no);
  printf("Enter the Infix Expression: ");
  for(int i=0;i<no;i++)
     scanf("%c",&in[i]);
  convert(in,pf);
  printf("Postfix Expn: %s\n",pf);
 }
