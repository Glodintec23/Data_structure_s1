#include<stdio.h>
#include<stdlib.h>
int a[10][10],b[10][10],c[20][20],choice,i,j;
int r1,c1,count=0,k;
void create();
void addition();
void sub();
void mul();
int main()
    {
        printf("////////METRIX/////////////");
        printf("\n1.create");
        printf("\n2.addition");
        printf("\n3.substraction");
        printf("\n4.multiplication");
        printf("\n5.exit");
        do
        {
            printf("\n enter choice");
            scanf("%d",&choice);
            switch(choice)
                {
                    case 1:create();
                    break;
                    case 2:addition();
                    break;
                    case 3: sub();
                    break;
                    case 4: mul();
                    break;
                    case 5:
                    break;
                }
        }
        while(choice!=5);
        return 0;
    }
void create()
    {
        if(count==0)
        {
        printf("\n enter the number of row: ");
        scanf("\%d",&r1);
        printf("\n enter the number of colums");
        scanf("%d",&c1);
        printf("\n enterde elements are");
        for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                    {
                        scanf("%d",&a[i][j]);
                    }
            }
            printf("\n matrix b");
        for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                    {
                        scanf("%d",&b[i][j]);
                    }
            }
            printf("\n matrix a and b are created");
            printf("\n matrix a\n");
            for(i=0;i<r1;i++)
                {
                    for(j=0;j<c1;j++)
                        {
                            printf("%d\t",a[i][j]);
                        }
                        printf("\n ");
                }
                printf("\n matrix b\n");
                for(i=0;i<r1;i++)
                    {
                        for(j=0;j<c1;j++)
                            {
                                printf("%d\t",b[i][j]);
                            }
                            printf("\n ");
                    }
                    count+=1;
        }
        else
        {
            printf("\n matrix already created");
        }

    }
void addition()
    {
        printf("/////////matrix addition//////////");
        for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                    {
                        c[i][j]=a[i][j]+b[i][j];
                    }
            }
        for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                    {
                        printf("%d\t",c[i][j]);
                    }
                    printf("\n ");
            }
    }
void sub()
    {
        printf("/////////substraction/////////////");
        for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                    {
                        c[i][j]=a[i][j]-b[i][j];
                    }
            }
        for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                    {
                        printf("%d\t",c[i][j]);
                    }
                     printf("\n ");
            }
    }
void mul()
    {
        printf("\n ///////////multiplication///////////");
        for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                    {
                        for(k=0;k<c1;k++)
                            {
                                c[i][j]=a[i][k]*b[k][j];
                            }
                    }
            }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d",c[i][j]);
            }
        }
    }
