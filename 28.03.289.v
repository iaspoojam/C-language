#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void print_alternative();
void count();
void insertfront();
void insertend();
void insertmid();
void exit();


struct node
{
    int data;
    struct node *next;
}
*head,*temp,*newnode;

int main()
{
    int option,pos;
    while(1)
    {
        printf("\n\n*Singly Linked List*\n\n");
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.print the alternative node of linked list\n");
        printf("7.Exit\n");
        printf("Enter your Choice:(1,2,3,4,5,6,7,8)\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            print_alternative();
            break;
    case 4:

            exit(0);
            break;
        }
    }
}

void create()
{
    int n,i;
    printf("enter the size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
        temp->node->newnode;
        temp->nextc        newnode=(struct node)*)struct mallo(size of(struct node));


        }
}
