#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *newnode,*head=NULL,*temp,*nextnode,*prev,*tail,*curr;
int main()
{
   int size,i;
    scanf("%d",&size);
    head=NULL;
    for( i=0; i<size; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data ");
        scanf("%d",&newnode->data);
        newnode->next= NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
            tail=newnode;
        }
        else
        {
            temp->next=newnode;
            temp->prev=temp;
            temp=newnode;
            tail=newnode;
        }
    }
    deleteAlt();
    display();
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void deleteAlt()
{
    if (head == NULL)
    {
       return 0;
    }
    else
    {
       prev = head;
       curr = head->next;
       while (prev != NULL && curr != NULL)
       {
        prev->next = curr->next;
        free(curr);
        prev = prev->next;
        if (prev != NULL)
        {
           curr = prev->next;
        }
      }
   }
}
