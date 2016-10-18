#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

main()
{
    struct node *head, *middle, *tail;
    head=malloc(sizeof(struct node));
    middle=malloc(sizeof(struct node));
    tail=malloc(sizeof(struct node));
    head->val=1;
    middle->val=2;
    tail->val=3;
    head->next=middle;
    middle->next=tail;
    tail->next=NULL;
    imp(head)
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
