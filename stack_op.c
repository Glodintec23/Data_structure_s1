#include<stdio.h>
#include<stdlib.h>
#define n 10
void push();
void pop();
void display();
int stack[n],choice,top=-1,item,item2,i;
int main()
    {
    printf("\n ////////////stack operations///////////// ");
    printf("\n1.push");
    printf("\n2.pop");
    printf("\n3.dispaly");
    printf("\n4.exit");

    do
        {
        printf("\n enter cohoice (1-4)");
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
                        printf("\nenter a valid choice");

            }
        }
        while(choice!=4);
        return 0;
    }
void push()
    {
        if(top==n-1)
            {
            printf("\nstack is full");
            }
        else
            {
            printf("\n enter element to push");
            scanf("%d",&item);
            top++;
            stack[top]=item;
            }
    }
void pop()
    {
        if(top==-1)
            {
            printf("\n stack is empty");
            }
        else
            {
            item2=stack[top];
            printf("\n element popped is %d",item2);
            top--;
            }
    }
void display()
    {
        if(top==-1)
            {
            printf("\n stack is empty");
            }
        else
            {
            for(i=0;i<=top;i++)
                {
                printf("%d",stack[i]);
                }
            }
    }




