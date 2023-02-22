#include<stdio.h>
#include<stdlib.h>
int main()
    {
         int num1,num2,num3,i,j,a1,b1,a[10],b[10],c[20],temp;
        printf("\n program to merge array");
        printf("\n enter number of elements in array a: ");
        scanf("%d",&num1);
        for(i=0;i<num1;i++)
            {
                printf("\n enter element: ");
                scanf("%d",&a[i]);
            }
            printf("\n array a is created");
            printf("\n number of elements in array b");
            scanf("%d",&num2);
        for(i=0;i<num2;i++)
            {
                printf("\n enetr elements for 2nd array: ");
                scanf("%d",&b[i]);
            }
            printf("\n array b is created");
            num3=num1+num2;
            for(i=0;i<num1;i++)
                {
                    c[i]=a[i];
                }
            for(i=0;i<num2;i++)
                {
                    c[i+num1]=b[i];
                }
            printf("\n elements in array c is");
            for(i=0;i<num3;i++)
                {
                    printf("%d",c[i]);
                }
            printf("\n sorted order");
            for(i=0;i<num3;i++)
            {
                for(j=0;j<num3-i-1;j++)
                {
                    if(c[j]>c[j+1])
                    {
                        temp=c[j];
                        c[j]=c[j+1];
                        c[j+1]=temp;
                    }
                }
            }
            for(i=0;i<num3;i++)
                {
                    printf("%d",c[i]);
                }
            return 0;
    }
