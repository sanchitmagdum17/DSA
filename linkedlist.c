#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *nxt;
};
int main()
{
    struct node *head=NULL;
    struct node *newnode;
    struct node *temp;
    int i,n,value;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter element %d: ",i+1);
        scanf("%d",&value);
        newnode->data=value;
        newnode->nxt=NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            temp=head;
            while(temp->nxt!=NULL)
            {
                temp=temp->nxt;
            }
            temp->nxt=newnode;
        } 
    }
    printf("Linked List\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->nxt;
    }
    printf("NULL");
}
