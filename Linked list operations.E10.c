#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert()
{
    struct node *newnode, *temp;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void delete()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        printf("Deleted element: %d\n", temp->data);
        head = head->next;
        free(temp);
    }
}

void display()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        printf("Linked List: ");
        while(temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    insert();
    insert();
    insert();

    display();

    delete();

    display();

    return 0;
}


