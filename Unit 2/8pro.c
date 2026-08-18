//8 program
//92500588010
//Write a program of dynamic queue

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL,*rear = NULL;

void insert()
{
    int value;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter value to insert :");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    printf("%d inserted into Queue \n");
}

void delete()
{
    if(front == NULL)
    {
        printf("Queue underflow : Queue is empty \n");
    }
    else
    {
        struct node*temp=front;
        printf("%d Deleted from Queue \n",front->data);
        front=front->next;
        free(temp);
    }
}

void display()
{
    struct node*temp=front;
    if(temp==NULL)
    {
        printf("\n Queue is empty");
    }
    else
    {
        printf("Queue elements are :\n");
    }

    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void main()
{
    int choice;
    while(1)
    {
        printf("\n1. INSERT\n2. DELETE\n3. Display\n4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert();
            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid Choice\n");
        }
    }
}
