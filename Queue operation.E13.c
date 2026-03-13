#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int main()
{
    int choice, item, i;

    while(1)
    {
        printf("\nQUEUE OPERATIONS\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: // ENQUEUE
                if(rear == MAX-1)
                {
                    printf("Queue Overflow\n");
                }
                else
                {
                    printf("Enter element: ");
                    scanf("%d", &item);

                    if(front == -1)
                        front = 0;

                    rear++;
                    queue[rear] = item;
                }
                break;

            case 2: // DEQUEUE
                if(front == -1 || front > rear)
                {
                    printf("Queue Underflow\n");
                }
                else
                {
                    printf("Deleted element: %d\n", queue[front]);
                    front++;
                }
                break;

            case 3: // DISPLAY
                if(front == -1 || front > rear)
                {
                    printf("Queue is empty\n");
                }
                else
                {
                    printf("Queue elements are: ");
                    for(i = front; i <= rear; i++)
                    {
                        printf("%d ", queue[i]);
                    }
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
