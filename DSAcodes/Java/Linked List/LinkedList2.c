#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
}*Start=NULL;
void create();
void insert();
void display();
void delete();
int main()
{
    int n;
    printf("Press 1: for creation \n");
    printf("Press 2: for insertion \n");
    printf("Press 3: for display \n");
    printf("Press 4: for deletion \n");
    printf("Press 0: for exit \n");
    while(1)
    {
        printf("Enter your choice \n");
        scanf("%d",&n);
        switch(n)
        {
            case 1: 
            create();
            break;
            case 2:
            insert();
            break;
            case 3: 
            display();
            break;
            case 4:
            delete();
            break;
            case 0:
            exit(0);
            break;
            default:
            printf("Invalid input");
        }
    }
    return 0;
}
void create()
{
    struct node *ptr,*p;
    ptr =(struct node*)malloc(sizeof(struct node));
    scanf("%d",&ptr->data);
    if(Start==NULL)
    {
        Start=ptr;
    }
    else
    {
        p=Start;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=ptr;
        ptr->next=NULL;
    }
}
void insert()
{
    struct node *ptr,*p;
    int loc,co=1;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data of the node ");
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    printf("Enter the location where u want to insert ");
    scanf("%d",&loc);
    p=Start;
    while(co<loc-1)
    {
        co++;
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    
}
void display()
{
    struct node *p;
    p=Start;
    if(Start==NULL)
    {
        printf("The Linked list is empty ");
    }
    else
    {
        while(p->next!=NULL)
        {
            
            printf("%d\n",p->data);
            p=p->next;
        }
    }
}
void delete()
{
    struct node *ptr,*p;
    p=Start;
    if(p==NULL)
    {
        printf("Underflow Condition ");
    }
    else
    {
        int i=0,loc;
        printf("Enter the location :");
        scanf("%d",&loc);
        while(i<loc-1)
        {
            p=p->next;
            i++;
        }
        ptr=p->next;
        p->next=ptr->next;
        ptr=NULL;
        
        free(ptr);
    }
}

//Linked List