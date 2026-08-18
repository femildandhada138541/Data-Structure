//6 program
//92500588010
//Write a program which performs following operations using simple queue.insert()->delete()->display()

#include<stdio.h>
#define MAX 5

int front=-1,rear=-1;
int queue[MAX];

void insert();
void delete_elements();
void display();

void main()
{
    int op;
    do
    {
        printf("\n1. Insert Elements");
        printf("\n2. Delete Elements");
        printf("\n3. Display Elements");
        printf("\n4. Exit");

        printf("\nEnter a number = ");
        scanf(" %d",&op);

        switch(op)
        {
            case 1:
                insert();
                break;

            case 2:
                delete_elements();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("\nExit..");
                break;

            default:
                printf("Invalid choice..");
                break;
        }
    }
    while(op!=4);
}

void insert()
{
    int num;

    printf("Enter number = ");
    scanf("%d",&num);

    if(rear == MAX - 1)
    {
        printf("The Queue Overflow");
    }
    else
    {
        if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        queue[rear]=num;
    }
}

void delete_elements()
{
    int value=queue[front];

    if(front==-1 || front>rear)
    {
        printf("Queue is Underflow");
    }
    else
    {
        value=queue[front];

        printf("Deleted value = %d ",value);

        if(front==rear)
        {
            front=rear=-1;
        }
        front++;
    }
}
void display()
{
    if(front==-1)
    {
        printf("Queue is Undreflow");
    }
    else
    {
        int i;
        for(i=front;i<=rear;i++)
        {
            printf("\n%d",queue[i]);
        }
    }
}
