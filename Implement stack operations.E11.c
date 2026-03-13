#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push()
{
    int item;
    if(top == MAX-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter element to push: ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

void peek()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is: %d\n", stack[top]);
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\nSTACK OPERATIONS\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
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
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
