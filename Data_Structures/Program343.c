#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;  
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first,PPNODE last,int no)
{

}

void InsertLast(PPNODE first,PPNODE last,int no)
{

}
void InsertAtPos(PPNODE first,PPNODE last,int no,int pos)
{

}
void DeleteFirst(PPNODE first)
{

}
void DeleteLast(PPNODE first)
{

}
void DeleteAtPos(PPNODE first,PPNODE last,int pos)
{

}

void Display(PPNODE first,PPNODE last)
{

}

int Count(PPNODE first,PPNODE last)
{
    return 0;
}
int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;


    return 0;
}