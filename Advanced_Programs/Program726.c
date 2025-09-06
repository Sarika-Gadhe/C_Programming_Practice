
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

// node gets inserted in the increasing order

void InsertSortedInc(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    //  first element
    if(*first == NULL)
    {
        *first = newn;
    }
    else    // Second onwords
    {
        if(no < (*first)->data) // if it is less than first element
        {
            newn->next = *first;
            *first = newn;
            return;
        }
        temp = *first;

        while(temp->next != NULL)
        {
            if((temp->data < no) && (temp->next->data > no))
            {
                break;
            }
            temp = temp->next;
        }

        if(temp->next == NULL && no > temp->data)  // if it is less than first element
        {
            temp->next = newn;
            return;
        }

        // if it lies in between the LL
        newn->next = temp->next;
        temp->next = newn;
    }
}
void Display(PNODE first)
{
    while(first)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");

}

int main()
{
    PNODE head = NULL;

    InsertSortedInc(&head, 11);
    InsertSortedInc(&head, 7);
    InsertSortedInc(&head, 21);
    InsertSortedInc(&head, 51);
    InsertSortedInc(&head, 40);
    InsertSortedInc(&head, 31);
    InsertSortedInc(&head, 51);
    InsertSortedInc(&head, 75);

    Display(head);

    return 0;
}