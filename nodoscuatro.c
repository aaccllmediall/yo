#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

struct twonode
{
    int val;
    struct node *next;
};

void print(struct node *, int );
void concatenio(struct node *, struct node *, struct twonode *);

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
    struct twonode *headt, *middlet, *tailt;
    headt=malloc(sizeof(struct twonode));
    middlet=malloc(sizeof(struct twonode));
    tailt=malloc(sizeof(struct twonode));
    headt->val=7;
    middlet->val=8;
    tailt->val=9;
    headt->next=middlet;
    middlet->next=tailt;
    tailt->next=NULL;
    print(head, 1);
    print(headt, 2);
    concatenio(head, tail, headt);
    printf("EXITO");
}

void print(struct node *a, int l)
{
    struct node *t;
    printf("imprimiendo lista numero %d\n", l);
    for (t=a; t!=NULL; t=t->next)
        printf("%d\n\n", t->val);
}

void concatenio(struct node *a, struct node *b, struct twonode *c)
{
    struct node *cur;
    struct twonode *curt;
    printf("Concatenando listas\n");
    cur=b;
    curt=c;
    cur->next=curt;
    print(a, 3);
    cur=cur->next;
}
