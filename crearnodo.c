#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

main()
{
    struct node *head;
    crear(head, 5);
}

void crear(struct node *head, int n)
{
    int i;
    struct node *cur, *prev;
    prev=malloc(sizeof(struct node));
    head=malloc(sizeof(struct node));
    head->val=1;
    prev=head;
    for (i=2; i<=n; i++)
    {
        cur=malloc(sizeof(struct node));
        cur->val=i;
        prev->next=cur;
        prev=cur;
    }
    prev->next=NULL;
    imp(head);
}

void imp(struct node *head)
{
    struct node *t;
    t=head;
    while (t!=NULL){
        printf("%d\n\n", t->val);
        t=t->next;
    }
}
