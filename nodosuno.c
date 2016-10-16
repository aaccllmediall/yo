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
    metio(head, middle);
}

void print(struct node *a)
{
    struct node *t;
    for (t=a; t!=NULL; t=t->next)
        printf("%d\n\n", t->val);
}

void metio(struct node *b, struct node *c)
{
    int cas;
    struct node *cur, *pre;
    cur=b;
    while (cur!=NULL){
        if (cur->next==c){
            pre=malloc(sizeof(struct node));
            cur->next=pre;
            printf("Inserte valor en el medio de la lista:\n");
            scanf("%d", &cas);
            printf("\n");
            pre->val=cas;
            pre->next=c;
            cur=cur->next;
        }
        cur=cur->next;
    }
    print(b);
}
