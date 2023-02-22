#include<stdio.h>
#include<stdlib.h>
int fun1(int,int);
int fun2();
void fun3(int,int);
void fun4();
int main()
    {
        int choice;
    printf("/////////sum usng functions///////////////");
    printf("\n1.fubction using argument and return");
    printf("\n2.function using argument and no return");
    printf("\n3.function with no argument and with return");
    printf("\n4. function wiyh no argument and no return");
    printf("\n exit")
    do
    {
        printf("\n enter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\n function with argument and return");
            int n1,n2,n3;
            printf("\n enter elemnt1: ");
            scanf("%d ",&n1);
            printf("\n enter element2");
            scanf("%d",&n2);
            n3=fun1(n1,n2);
            printf("sum is %d",n3);
            break;
            case 2:
            printf("function with return type and no argument");
            int result;
            result=fun2();
            printf("\n result %d",result);
            break;
            case 3:
            printf("\n function with no return and with argument");
            int a,b;
            printf("\n enter two numbers");
            scanf("%d%d",&a,&b);
            fun3(a,b);
            break;
            case 4:
            printf("\n function with no argument and return type");
            fun4();
            break;
            case 5:
                break
        }
    }
    while(choice!=4);
    return 0;
    }
int fun1(int n1,int n2)
    {
        int n3;
        n3=n1+n2;
        return n3;
    }
int fun2()
    {
        int a,b,s;
        printf("\enter elment1 &2; ");
        scanf("%d%d",&a,&b);
        s=a+b;
        return s;

    }
void fun3(int n1,int n2)
    {
        int s;
        s=n1+n2;
        printf("\n sum is %d",s);
    }
void fun4()
    {
        int a,b,c;
        printf("\n enter two numbers");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("\n sum is %d",c);
    }
