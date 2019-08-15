#include<stdio.h>
#include<conio.h>
#define STACK_SIZE 50
void push(int[],int*);
void pop(int[],int*);
void main()
 {
  int stack[STACK_SIZE],x,top=-1;
  do
   {
    printf("Enter the choice you want to perform :\n 1 to put clothes to the cupboard \n 2 to remove clothes from the cupboard\n*To exit please press any other number\n");
    scanf("%d",&x);
    switch(x)
    {
     case 1: push(stack,&top);
	     break;
     case 2: pop(stack,&top);
	     break;
    }
   }while(x==1||x==2);
 }

 void push(int stack[STACK_SIZE],int*top)
 {
   int element;
   if(*top==STACK_SIZE)
   {
     printf("Sorry the cupboard is full\n");
   }
   else
   {
     printf("Enter the element u need to insert to the cupboard\n");
     scanf("%d",&element);
     stack[++(*top)]=element;
     printf("The element inserted is %d\n",element);
   }
 }

 void pop(int stack[STACK_SIZE],int *top)
 {
   int element;
   if(*top==-1)
   printf("The cupboards is empty\n");
   else
   {
    element=stack[*top];
    (*top)--;
    printf("The element removed from the cupboard if %d\n",element);
    }
 }