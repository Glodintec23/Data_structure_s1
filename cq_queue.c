#include<stdio.h>
#include<stdlib.h>
#define n 10
void enqueue();
void dequeue();
void display();
int choice,queue[n],front=-1,reare=-1,item,i,count;
int main()
    {
        printf("///////////////circular queue operations////////////////////");
        printf("\n1.cq_enqueue");
        printf("\n2.cq_dequeue");
        printf("\n3.cq_display");
        printf("\n4.cq_exit");
        do
        {
            printf("\n enter a choice");
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
                        printf("\n enter a valid option");

            }
        }
        while(choice!=4);
        return 0;
    }
void enqueue()
    {
        if(reare==n-1)
        {
            printf("\n queue is full");
        }
        else
        {
            printf("\n enter element to enqueue;");
            scanf("%d",&item);
            reare=(reare+1)%n;
            queue[reare]=item;
            count=count+1;
        }
    }
void dequeue()
    {
        int item2;
        if(count==0)
        {
            printf("queue is empty");
        }
        else
        {
            item2=queue[front];
            front=(front+1)%n;
            count=count-1;
        }
        printf("\n element dequeued if %d",item2);
    }
void display()
    {
        if(count==0)
        {
        printf("\n queue is empty");
        }
        else
        {
        for(i=front;i<=reare;i++)
        {
        printf("%d",queue[i]);
        }
        }
    }
