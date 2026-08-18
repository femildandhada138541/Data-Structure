//2 program
//92500588010
//Write a program to find of factorial of number using stack

#include<stdio.h>
#define MAX 10

void push();
void pop();
void display();

int stack[MAX];
int top=-1;

void main()
{
    int op;
    do
    {
        printf("\n 1. Insert element");
        printf("\n 2. Delete element");
        printf("\n 3. Display element");
        printf("\n 4. Exit");
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
                display();
                break;
        }
    }
    while(op!=4);
}
void push()
{
    int value,i,fact=1;

    printf("\n Enter value to be inserted : ");
    scanf("%d",&value);

    if(top == MAX-1)
    {
        printf("\n Stack is overflow..");
    }

    else
    {
        for(i=1;i<=value;i++)
        {
            fact=fact*i;
        }

        top++;

        stack[top]=fact;
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
