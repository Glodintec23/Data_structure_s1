#include<stdio.h>
#include<stdlib.h>
int flag=0;
struct node
    {
    int data;
    struct node *next;
    struct node *prev;
    };
    struct node *ptr;
    struct node *ptr1;
    struct node *head;
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;

    void create();
    void insert();
    void insert_pos();
    void delete_first();
    void delete_last();
    void search();
    void display();
    void size_of_list(struct node*);

    int main()
        {
            int choice;
            printf("////////////////doubly linked list////////////////");
            printf("\n 1.create");
            printf("\n 2.insert");
            printf("\n 3.insert_specific_position");
            printf("\n 4.delete_first_element");
            printf("\n 5.delete_lsat_element");
            printf("\n 6.search");
            printf("\n 7.display");
            printf("\n 8.number_of_nodes");
            printf("\n 9.exit");

            do
            {
                printf("\n enter a choice(1-9)");
                scanf("%d",&choice);
                switch(choice)
                    {
                        case 1:create();
                        break;
                        case 2:insert();
                        break;
                        case 3:insert_pos();
                        break;
                        case 4:delete_first();
                        break;
                        case 5:delete_last();
                        break;
                        case 6:search();
                        break;
                        case 7:display();
                        break;
                        case 8:size_of_list(head);
                        break;
                        case 9:
                        break;
                        default:
                        printf("\n enter a vallid option");
                    }
            }
            while(choice!=9);
            return 0;
        }
void create()
    {
        if(flag==0)
        {
        int x1,x2,x3;
        first=malloc(sizeof(struct node));
        second=malloc(sizeof(struct node));
        third=malloc(sizeof(struct node));
        printf("\n enter three elements to insert");
        scanf("%d%d%d",&x1,&x2,&x3);
        first->prev=NULL;
        first->data=x1;
        first->next=second;
        second->prev=first;
        second->data=x2;
        second->next=third;
        third->prev=second;
        third->data=x3;
        third->next=NULL;
        head=first;
        flag=1;
        printf("\n linked list created");
        }
        else
        {
            printf("\n linked list aleady exist ");
        }
    }
void insert()
    {
        int item1;
        struct node *temp;
        temp=malloc( sizeof(struct node));
        printf("\n enter element to insert");
        scanf("%d",&item1);
        temp->data=item1;
        if(head==NULL)
        {
            temp->next=NULL;
            head=temp;
        }
        else
        {
            temp->next=first;
            head=temp;
            temp->prev=NULL;
            first->prev=temp;
        }
    }
void insert_pos()
    {
        int item2,key;
        struct node *temp2;
        temp2=malloc(sizeof(struct node));
        printf("\n enter element to insert");
        scanf("%d",&item2);
        printf("\n enter key after which element to be inserted;");
        scanf("%d",&key);
        temp2->data=item2;
        if(head==NULL)
        {
            temp2->next=NULL;
            head=temp2;
        }
        else
        {
            ptr=head;
            while(ptr!=NULL)
            {
                if(ptr->data==key)
                {
                    temp2->next=ptr->next;
                    ptr->next=temp2;
                    temp2->prev=ptr;
                    printf("\n element inserted successfully");
                    break;
                }
                else
                {
                    ptr=ptr->next;
                }
            }
        }
    }
void delete_first()
    {
        if(head==NULL)
        {
            printf("\n underflow");
        }
        else
        {
            ptr=head;
            head=head->next;
            head->next->prev=NULL;
            free(ptr);
        }
    }
void delete_last()
    {
        if(head=NULL)
        {
            printf("\n underflow");
        }
        else if(head->next==NULL)
        {
            head=NULL;
            free(head);
        }
        else
        {
            ptr=head;
            while(ptr->next!=NULL)
            {
                ptr1=ptr;
                ptr=ptr->next;
            }
            ptr1->next=NULL;
            free(ptr);
            printf("\n element deleted successfully");
        }
    }
void search()
    {
        int flag=0,item3;
        printf("\n enter element to search");
        scanf("%d",&item3);
        ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->data==item3)
            {
                flag=1;
                printf("\n element found successfully");
            }
            else
            {
                ptr=ptr->next;
            }
        }
        if(flag==0);
        printf("\n element not found");
    }
void display()
    {
        if(head==NULL)
        {
            printf("\n list empty");
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
void size_of_list(struct node *t)
    {
        int listsize=0;
        while(t!=NULL)
        {
            listsize++;
            t=t->next;
        }
        printf("\n no: of nodes is %d",listsize);
    }
