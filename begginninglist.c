#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

main()
{
    struct node *head, *arms, *middle, *feet, *tail;
    head=malloc(sizeof(struct node));
    arms=malloc(sizeof(struct node));
    middle=malloc(sizeof(struct node));
    feet=malloc(sizeof(struct node));
    tail=malloc(sizeof(struct node));
    head->val=1;
    arms->val=2;
    middle->val=3;
    feet->val=4;
    tail->val=5;
    head->next=arms;
    arms->next=middle;
    middle->next=feet;
    feet->next=tail;
    tail->next=NULL;
    print(head);
    initio(head, middle);
    print(head);
}

void print(struct node *a)
{
    struct node *t;
    for (t=a; t!=NULL; t=t->next)
        printf("%d\n\n", t->val);
}

void initio(struct node *b, struct node *c)
{
    int cas;
    struct node *cur;
    cur=b;
    while (cur!=NULL){
        if (cur==c){
            printf("Inserte valor en el medio de la lista:\n");
            scanf("%d", &cas);
            printf("\n");
            cur->val=cas;
        }
        cur=cur->next;
    }
}
