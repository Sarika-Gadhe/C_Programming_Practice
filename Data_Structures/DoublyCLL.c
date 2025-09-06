#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, PPNODE last,int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
        (*first)->prev = *last;
        (*last)->next = *first;
    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;
        newn->prev = *last;
        *first = newn;
        (*last)->next = *first;
    }
}

void InsertLast(PPNODE first, PPNODE last,int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
        (*first)->prev = *last;
        (*last)->next = *first;
    }
    else
    {
        (*last)->next = newn;
        newn->prev = *last;
        *last = newn;
        newn->next = *first;
        (*first)->prev = newn;
    }
}

void DeleteFirst(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*last)->next);
        (*first)->prev = *last;
        (*last)->next = *first;

    }
}

void DeleteLast(PPNODE first, PPNODE last)
{
    PNODE temp = NULL;

     if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        *first = NULL;
        *last = NULL;
    }
    else
    {
       temp = (*last)->prev;
       temp->next = *first;
       (*first)->prev = temp;
        free(*last);
        *last = temp;

    }
}


void Display(PNODE first,PNODE last)
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    do
    {
        printf(" <=> | %d | ",first->data);
        first = first->next;
    }while(first != last->next);

    printf("<=>\n");

}

int Count(PNODE first,PNODE last)
{
    int iCount = 0;

    if(first == NULL && last == NULL)
    {
        return iCount;
    }

    do
    {
       iCount++;
        first = first->next;
    }while(first != last->next);
 
    return iCount;
}


void InsertAtPos(PPNODE first, PPNODE last,int no,int pos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    int iCount = 0;
    int i = 0;

    iCount = Count(*first,*last);

    if(pos < 1  || pos > iCount + 1)
    {
        printf("Invalid Postion\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first,last,no);
    }
    else if(pos == iCount + 1)
    {
        InsertLast(first,last,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *first;

        for(i = 1; i < pos -1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp; 
    }

}

void DeleteAtPos(PPNODE first, PPNODE last,int pos)
{
    PNODE temp = NULL;
    PNODE target = NULL;

    int iCount = 0;
    int i = 0;

    iCount = Count(*first,*last);

    if(pos < 1  || pos > iCount)
    {
        printf("Invalid Postion\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(first,last);
    }
    else if(pos == iCount)
    {
        DeleteLast(first,last);
    }
    else
    {
         temp = *first;

         for(i = 1; i < pos-1; i++)
         {
            temp = temp->next;
         }

         target = temp->next;
         temp->next = target->next;
         target->next->prev = temp;

         free(target);

    }
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    
    int iRet = 0;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Total nodes are : %d\n",iRet);

    
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);
    InsertLast(&head,&tail,131);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Total nodes are : %d\n",iRet);


    InsertAtPos(&head,&tail,101,4);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Total nodes are : %d\n",iRet);


    DeleteAtPos(&head,&tail,4);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Total nodes are : %d\n",iRet);


    DeleteFirst(&head,&tail);
    
     Display(head,tail);
     iRet = Count(head,tail);
     printf("Total nodes are : %d\n",iRet);

     
     DeleteLast(&head,&tail);
    
     Display(head,tail);
     iRet = Count(head,tail);
     printf("Total nodes are : %d\n",iRet);

    return 0;
}