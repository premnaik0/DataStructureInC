#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*ptr;

void insert_begin(int value)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}
void insert_end(int value)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=value;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        temp->next=NULL;
    }
}
void insert_After_specified_ele(int value,int ele)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=value;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
}
void delete_begin()
{
    if(head==NULL)
    {
       printf("List is empty,Deletion is not possible.");
    }
    else
    {
        ptr=head;
        head=head->next;
        ptr->next=NULL;
        free(ptr);
    }
}
void delete_end()
{
    if(head==NULL)
    {
       printf("List is empty,Deletion is not possible.");
    }
    else
    {
        struct node *p;
        ptr=head;
        while(ptr->next!=NULL)
        {
            p=ptr;
            ptr=ptr->next;
        }
        p->next=NULL;
        free(ptr);
    }
}
void delete_middle(int ele)
{
    if(head==NULL)
    {
       printf("List is empty,Deletion is not possible.");
    }
    else
    {
        struct node *p;
        ptr=head;
        while(ptr->data!=ele)
        {
            p=ptr;
            ptr=ptr->next;
        }
        p->next=ptr->next;
        free(ptr);
    }
}
void display()
{
    if(head==NULL)
    {
       printf("List is empty.");
    }
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            printf("-> %d",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}
void main()
{
    int value,ele,ch;
    printf("1.insert_begin\n");
    printf("2.insert_end\n");
    printf("3.insert After specified ele\n");
    printf("4.delete_begin\n");
    printf("5.delete_end\n");
    printf("6.delete_middle\n");
    printf("7.exit\n");
    while(1)
    {
        printf("Enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
             case 1:
                    {
                        printf("Enter the value:");
                        scanf("%d",&value);
                        insert_begin(value);
                        display();
                        break;
                    }
             case 2:
                    {
                        printf("Enter the value:");
                        scanf("%d",&value);
                        insert_end(value);
                        display();
                        break;
                    }
             case 3:
                    {
                        printf("Enter the value:");
                        scanf("%d",&value);
                        printf("After which element you want to insert");
                        scanf("%d",&ele);
                        insert_After_specified_ele(value,ele);
                        display();
                        break;
                    }
             case 4:
                    {
                        delete_begin();
                        display();
                        break;
                    }
             case 5:
                    {
                        delete_end();
                        display();
                        break;
                    }
             case 6:
                    {
                         printf("Enter the element you want to delete:");
                         scanf("%d",&ele);
                         delete_middle(ele);
                         display();
                         break;
                    }
             case 7:
                         exit(0);
        }
    }
}
