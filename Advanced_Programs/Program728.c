#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

// node gets inserted in the increasing order

void InsertSortedIncUnique(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    //  first element
    if((*first == NULL) || (no < (*first)->data))
    {
        newn->next = *first;
        *first = newn;
    }
    else    // Second onwords
    {
        temp = *first;

        while((temp->next != NULL) && (temp->next->data < no))
        {
            temp = temp->next;
        }
        
        if(temp->next != NULL)
        {
            if(temp->next->data == no)      // duplicate
            {
                free(newn);
                return;
            }
        }

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

     Display(head);
    InsertSortedIncUnique(&head, 11);
     Display(head);

    InsertSortedIncUnique(&head, 7);
    Display(head); 

    InsertSortedIncUnique(&head, 21);
    Display(head); 

    InsertSortedIncUnique(&head, 51);
    Display(head);

    InsertSortedIncUnique(&head, 40);
    Display(head);

    InsertSortedIncUnique(&head, 31);
     Display(head);

    InsertSortedIncUnique(&head, 51);
     Display(head);

    InsertSortedIncUnique(&head, 75);

    Display(head);

    return 0;
}