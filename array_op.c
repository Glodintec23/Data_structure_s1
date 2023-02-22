#include<stdio.h>
#include<stdlib.h>
int choice,i,item2,item,arr[10],num;
void create();
void insert();
void delet();
void display();
int main()
    {
        printf("//////////////array creations///////////////////");
        printf("\n1.create");
        printf("\n2.insert");
        printf("\n3.delete");
        printf("\n4.diaplsy");
        printf("\n5.exit");
        do
        {
            printf("\n enter choice: ");
            scanf("%d",&choice);
            switch(choice)
                {
                    case 1:create();
                    break;
                    case 2:insert();
                    break;
                    case 3:delet();
                    break;
                    case 4:display();
                    break;
                    case 5:
                    break;
                }
        }
        while(choice!=4);
        return 0;
    }
void create()
    {

        printf("//////////array creation/////////////////");
        printf("\n enter number of element in array: ");
        scanf("%d",&num);
        for(i=0;i<num;i++)
            {
                printf("\n enter numner :%d",i);
                scanf("%d",&arr[i]);
            }
            printf("\n array created successfully");
    }
void insert()
    {
    int pos;
        printf("///////////////////insert an element in to array///////////////////");
        printf("enter the position of element after which want to be inserted");
        scanf("%d",&pos);
        printf("\n enter element want to be inserted: ");
        scanf("%d",&item);
        i=num-1;
        while(i>pos)
            {
                arr[i+1]=arr[i];
                i=i-1;
            }
            arr[pos]=item;
            num=num+1;
            printf("\n element inserted successfully");

    }
void delet()
    {
        int item;
        printf("\n enter element to be deleted: ");
        scanf("%d",item2);
        item=arr[item2];
        for(i=item;i<num;i++)
            {
                arr[i]=arr[i+1];
            }
            num=num-1;

    }
void display()
    {
        for(i=0;i<num;i++)
            {
                printf("%d",arr[i]);
            }
    }
