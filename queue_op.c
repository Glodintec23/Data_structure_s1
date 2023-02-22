#include<stdio.h>
#include<stdlib.h>
#define n 10
void enqueue();
void dequeue();
void display();
int choice,queue[n],front=-1,reare=-1,i,item;
int main()
    {
        printf("///////////////queue operations///////////////");
        printf("\n 1.enqueue");
        printf("\n 2.dequeue");
        printf("\n 3.dispaly");
        printf("\n 4.exit");

        do
        {
            printf("enter the choice(1-4)");
            scanf("%d",&choice);
            switch(choice)
                {
                    case 1:enqueue();
                            break;
                    case 2:dequeue();
                            break;
                    case 3:display();
                            break;
                    case 4:break;
                    default:
                            printf("enter a valid choice");
                }
        }
        while(choice!=4);
        return 0;
    }
void enqueue()
    {
        int num;
        if(reare==n-1)
            {
                printf("\n queue is full");
            }
        else
            {   if (front==-1&&reare==-1)
                front=0;
                printf("\n enter element to enqueue \n ");
                scanf("%d",&num);
                reare=reare+1;
                queue[reare]=num;
            }
    }
void dequeue()
    {
        if(front==-1&&reare==-1)
        {
            printf("\n queue is empty \n");
        }
        else
        {
        item=queue[front];
        }
        if(front==reare)
            {
            front=reare=-1;
            }
        else
        {
            front=front+1;
        }
        printf("\n dequeued element is %d \n",item);
    }
void display()
    {
        if(front==-1&&reare==-1)
        {
            printf("\n queue is empty \n");
        }
        else
        {
            for(i=front;i<=reare;i++)
            {
                printf("%d",queue[i]);
            }
        }
    }
