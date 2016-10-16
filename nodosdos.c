#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

void print(struct node *);
void metio(struct node *, struct node *);

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
    intio(head, middle);
}

void print(struct node *a)
{
    struct node *t;
    for (t=a; t!=NULL; t=t->next)
        printf("%d\n\n", t->val);
}

void intio(struct node *b)
{
    int cas;
    struct node *cur, *pre;
    pre=malloc(sizeof(struct node));
    printf("Coloque unvalor para en termino primero\n");
    scanf("%d", &cas);
    printf("\n");
    pre->val=cas;
    pre->next=b;
    cur=pre;
    cur=cur->next;
    print(pre);
}
