//4 program
//92500588010
//Write a tower of hanoi program

#include<stdio.h>

void tower(int n , char s , char h , char d)
{
    if(n == 1)
    {
        printf("Move disk 1 from %c to %c \n",s,d);
        return;
    }

    tower(n - 1 , s , d , h);

    printf("Move disk %d from %c to %c \n",n,s,d);

    tower(n - 1 , h , s , d);
}

void main()
{
    int n;

    printf("Enter disk number : ");
    scanf(" %d",&n);

    tower(n , 'A' , 'B' , 'C');
}
