#include<stdio.h>
#include<stdlib.h>
struct node
    {
    int data;
    struct node *next;
    };
    struct node *ptr;
    struct node *temp;
    struct node *front=NULL;
    struct node *reare=NULL;
    void enqueue();
    void dequeue();
    void display();
int main()
    {
        int choice;
        printf("//////////////////queue operations using linked list/////////////////////");
        printf("\n 1.enqueue");
        printf("\n.2 dequeue");
        printf("\n 3.display");
        printf("\n 4.exit");
        do
        {
            printf("\n enter a choice \n");
            scanf("%d",&choice);
            switch(choice)
                {
                    case 1:enqueue();
                    break;
                    case 2:dequeue();
                    break;
                    case 3:displsy();
                    break;
                    case 4:
                    break;
                    default:
                    printf("\n enter a vallid chice \n");
                }
        }
        while(choice!=4);
        return 0;
    }
void enqueue()
    {
        int item;
        temp=malloc(sizeof(struct node));
        printf("\n enter element to enquueu \n");
        scanf("%d",&item);
        if(temp==NULL)
        {
            printf("\n overflow");
        }
        else
        {
            temp->data=item;
            if(front==NULL)
            {
                front=temp;
                reare=temp;
                front->next=NULL;
                reare->next=NULL;
            }
            else
            {
                reare->next=temp;
                reare=temp;
                temp->next=NULL;
            }
        }
    }
void dequeue()
    {
        if(front==NULL)
        {
            printf("\n underflow");
        }
        else
        {
            temp=front;
            front=front->next;
            free(temp);
            printf("\n element deleted successfully");
        }
    }
void display()
    {
        ptr=front;
        if(ptr=NULL)
            {
                printf("\n q id empty");
            }
            else
            {
                while(ptr!=NULL)
                {
                    printf("%d",ptr->data);
                    ptr=ptr->next;
                }
            }
    }
