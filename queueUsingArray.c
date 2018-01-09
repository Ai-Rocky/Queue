#include <stdio.h>
#define max 10

int data[max], front = -1, rear = -1;

void pop()
{
    if(rear < front )
        printf("\nThe queue is empty\n");
    else
        printf("%d ",data[front++]);
}

void push()
{
    int item;
    scanf("%d",&item);

    if(rear == max - 1 )
        printf("The queue is full\n");
    else
    {
        if(front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
            ++rear;

        data[rear] = item;
    }
}

void main()
{
    int i,n;

    printf("Enter the number of item: ");
    scanf("%d",&n);

    printf("\nThe push items are:\n");
    for(i=0; i<n; i++)
        push();

    printf("\nThe pop items are:\n");

    for(i=0; i<n; i++)
        pop();

}

