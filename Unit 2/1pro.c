//1 program
//92500588010
//Write a program which performs following stack operrations.push()->pop()->peek()->update().

#include<stdio.h>
#define MAX 3

int stack[MAX],top=-1;
void push();
void pop();
void peek();
void update();
void display();

void main()
{
    int op;
    do
    {
        printf("\n 1. Insert element");
        printf("\n 2. Delete element");
        printf("\n 3. Top most value");
        printf("\n 4. Update value");
        printf("\n 5. Display element");
        printf("\n 6. Exit");
        printf("\n Enter your choice :");
        scanf("%d",&op);

        switch(op)
        {

        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            update();
            break;

        case 5:
            display();
            break;
        }
    }
    while(op!=6);
}

void push()
{
    int value;

    printf("\n Enter value to be inserted : ");
    scanf("%d",&value);

    if(top == MAX-1)
    {
        printf("\n Stack is overflow..");
    }

    else
    {
        top++;
        stack[top]=value;
    }
}

void pop()
{
    int value;

    if(top == -1)
    {
        printf("\n Stack is underflow..");
    }

    else
    {
        value=stack[top];

        printf("\n Deleted value is : %d",value);

        top--;
    }
}

void peek()
{
    if(top == -1)
    {
        printf("Stack is empty");
    }

    else
    {
        printf("\n Top value = %d",stack[top]);
    }
}

void update()
{
    int i,x;

    printf("\n Enter index number :");
    scanf("%d",&i);

    printf("\n Enter number you want to update :");
    scanf("%d",&x);

    if(top-i+1<=-1)
    {
         printf("Stack is empty");
    }

    else
    {
        stack[top-i+1]=x;
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("\n Stack is empty");
    }

    else
    {
        for(i=top;i>=0;i--)
        {
            printf("\n %d",stack[i]);
        }
    }
}
