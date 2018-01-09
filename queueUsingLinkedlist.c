#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;

}*front = NULL, *rear = NULL, *newNode;

void pop()
{
    while (front != NULL)
    {
        printf("%d ",front->data);
        front = front->next;
    }
}

void push()
{
    newNode = (struct Node*)malloc(sizeof(struct Node));

    scanf("%d",&newNode->data);
    newNode->next = NULL;

    if(front == NULL && rear == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
       rear->next = newNode;
       rear = newNode;
    }
}

void main ()
{
    int i, n;

    printf("Enter the number of item: ");
    scanf("%d",&n);

    printf("\nThe push items are:\n");
    for(i=0; i<n; i++)
        push();

    printf("\nThe pop items are:\n");
    pop();

}
