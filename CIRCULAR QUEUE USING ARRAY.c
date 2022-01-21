/*
CIRCULAR QUEUE USING ARRAY
Jaidon Gill Shajan
039
Artifical Intelligence & Data Science
*/
#include<stdio.h>
# define MAX 20
int qa[MAX];
int front=-1;
int rear=-1;

void insert(int it)
 {
  if((front==0 && rear==MAX-1) || (front==rear+1))
   {
    printf("Queue Overflow \n");
    return;
   }
  if(front==-1)
   {
    front=0;
    rear=0;
   }
  else
   {
    if(rear==MAX-1)
    rear=0;
    else
    rear=rear+1;
   }
    qa[rear]=it;
 }

void deletion()
 {
  if(front==-1)
   {
    printf("Queue Underflow\n");
    return ;
   }
   printf("Element deleted from queue is : %d\n",qa[front]);
  if(front==rear)
    { 
     front=-1;
     rear=-1;
    }
  else
   {
    if(front==MAX-1) 
    front=0;
    else
    front=front+1;
   }
 }
void display()
 {
	int fp=front,rp=rear;
  if(front==-1)
	  {
		 printf("Queue is empty\n");
     return;
    }
     printf("Queue elements :\n");
  if( fp<=rp)
  while(fp<=rp)
    {
     printf("%d ",qa[fp]);
     fp++;
    }
  else
   { 
    while(fp<=MAX-1)
      {
       printf("%d ",qa[fp]);
       fp++;
      }
       fp = 0;
    while(fp<=rp)
      {
       printf("%d ",qa[fp]);
       fp++;
      } 
   }
    printf("\n");
 }

int main()
 {
  int choice,it; 
  do
   {
    printf("CIRCULAR QUEUE USING ARRAY\n");
    printf("1.Insert\n"); 
    printf("2.Delete\n");
    printf("3.Display\n");
    printf("4.Quit\n");
    printf("Enter your choice : \n");
    scanf("%d",&choice);
  switch(choice)
   {
    case 1 :
      printf("Input the element : \n");
      scanf("%d", &it);
      insert(it);
      break;
    case 2 :
      deletion();
      break;
    case 3:
      display();
      break;
    case 4:
       break;
    default:
      printf("Wrong choice\n");
   }
 }while(choice!=4);
 return 0;
 }
