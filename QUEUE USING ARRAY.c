/*
QUEUE USING ARRAY
Jaidon Gill Shajan
039
S3
Artifical Intelligence & Data Science

*/
#include <stdio.h>
int it[50];
int front=-1;
int rear=-1;
int SIZE=20;

void enqueue() 
 {
  int value;
  printf("\nEnter the element to store:");
  scanf("%d",&value);
   if(rear== SIZE-1)
     printf("\nQueue is Full!!\n");
   else
    {
     if(front==-1)
     front = 0;
     rear++;
     it[rear]=value;
     printf("Inserted -> %d\n",value);
    }
 }

void dequeue() 
 {
  if (front==-1)
    printf("\nQueue is Empty!!\n");
  else 
   {
    printf("\nDeleted -> %d\n",it[front]);
    front++;
    if (front>rear)
      front=rear=-1;
   }
 }
void display()
 {
  if (rear==-1)
    printf("\nQueue is Empty!");
  else
   {
    int i;
    printf("\nQueue elements are:\n");
    for (i=front;i<=rear;i++)
      printf("%d  ",it[i]);
   }
    printf("\n");
 } 
int main()
 {
   printf("QUEUE USING ARRAY\n");
    int ch=0;
  do
   {
     printf("\n1:ENQUEUE\n2:DEQUEUE\n3:DISPLAY\n4:EXIT\n");
     printf("Enter your choice:");
     scanf("%d",&ch);
     switch(ch)
      {
        case 1:enqueue();
               break;
        case 2:dequeue();
               break;
        case 3:display();
               break;
        case 4:break;
      }
   }while(ch!=4);
 }
