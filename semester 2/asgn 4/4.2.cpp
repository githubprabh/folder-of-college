

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
typedef struct node
{
    int data;
    struct node *next,*prev;
} node;
void createList(node** head_ref, node** last_ref)
{
    int ch;
    int data;
    node* temp=(node*)malloc(sizeof(node));
    *head_ref=*last_ref=temp;
    temp->next=temp->prev=NULL;
    do
    {
        printf("Enter num:\t");
        scanf("%d",&data);
        temp->data=data;
        temp->next=NULL;
        reScanCh:   // 
        printf("enter more press 1:\n");
        scanf("%d",&ch);
        
        if(ch==1)
        {
            temp->next=(node*)malloc(sizeof(node));
            (temp->next)->prev=temp;
            temp=temp->next;
            *last_ref=temp;
            temp->next=NULL;
        }
        else
        {;
		}
    }
    while(ch==1);
}
void displayForward(node* head)
{
    if(head==NULL)
    {
        printf("List is Empty\n");
        return;
    }
    node* c_node=head;
    while(c_node)
    {
        printf("%d ",c_node->data);
        c_node=c_node->next;
    }
    printf("\n");
}

void operation(node** head_ref,node** last_ref)
{
    if(*head_ref==NULL)
        return;
    node* c_node=*head_ref;
    node* n_node=c_node->next;
    *head_ref=n_node;
    while(c_node!=NULL )
    {
        n_node->prev=c_node->prev;
        free(c_node);
        c_node=n_node->next;
        if(c_node==NULL)
        {
            *last_ref=n_node;
            return;
        }
        n_node->next=c_node->next;
        *last_ref=n_node;
        n_node=n_node->next;
    }
}
int main()
{
    node* head=NULL;
    node* last=NULL;
    createList(&head,&last);
    printf("Initially List contains:\n");
    printf("display\t ");
    displayForward(head);
    operation(&head,&last);
    printf("result \t ");
    displayForward(head);
}
