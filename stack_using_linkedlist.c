#include<stdio.h>
#include<stdlib.h>
struct node
    {
        int data;
        struct node *next;
    };
    struct node *ptr;
    struct node *head;
    void push();
    void pop();
    void dispaly();
int main()
    {
        int choice;
        printf("////////stack using linked list/////////");
        printf("\n 1.push");
        printf("\n 2.pop");
        printf("\n 3.display");
        printf("\n 4.exit");

        do
        {
        printf("\n enter a choice(1-4)");
        scanf("%d",&choice);
        switch(choice)
            {
                case 1:push();
                break;
                case 2:pop();
                break;
                case 3:display();
                break;
                case 4:break;
                default:
                printf("\n enter a valis option");
            }
        }
        while(choice!=NULL);
        return 0;
    }
void push()
    {
        int item;
        printf("\n enter element to push \n");
        scanf("%d",&item);
        struct node *temp;
        temp=malloc(sizeof(struct node));
        temp->data=item;
        if(head==NULL)
            {
            temp->next=NULL;
            head=temp;
            }
        else
            {
                temp->next=head;
                head=temp;
            }
            printf("\n element inserted successfully");
    }
void pop()
    {
        if(head==NULL)
        {
            printf("\n stack is empty \n");
        }
        else
        {
        ptr=head;
        head=head->next;
        free(ptr);
        printf("\n element deleted successfully");
        }
    }
void display()
    {
        if(head==NULL)
        {
            printf("\n stack is empty \n");
        }
        else
        {
            ptr=head;
            while(ptr!=NULL)
            {
                printf("%d",ptr->data);
                ptr=ptr->next;
            }
        }
    }

