#include<stdio.h>
#include<stdlib.h>
void create();
void linear_search();
void binary_search();
int choice,i,j,lb,ub,mid,arr[10],item1,item2,pos,num;
int main()
    {
        printf("\n1.create");
        printf("\n2.linear_search");
        printf("\n3.binary_search");
        printf("\n4.exit");
        do
        {
        printf("\n enter choice(1-4)");
        scanf("%d",&choice);
        switch(choice)
            {
                case 1:create();
                break;
                case 2: linear_search();
                break;
                case 3: binary_search();
                break;
                case 4:
                break;
            }
        }
        while(choice!=4);
        return 0;

    }
void create()
    {
        printf("\n enter number of elements you want to enter");
        scanf("%d",&num);
        for(i=0;i<num;i++)
            {
                printf("\n enter element: ");
                scanf("%d",&arr[i]);
            }
            printf("\n array created successfully");
        for(i=0;i<num;i++)
            {
                printf("%d",arr[i]);
            }
    }
void linear_search()
    {
        int flag=0,j=0;
        printf("\n enter element to search");
        scanf("%d",&item1);
        while(j<=num)
            {
                if(item1==arr[j])
                    {
                        flag=1;
                        break;
                    }
                else
                {
                    j+=1;
                }
            }
        if(flag==1)
        {
            printf("\nelement found");
        }
        else
        {
        printf("\n element not found");
        }

    }
void binary_search()
    {
        int temp;
        for(i=0;i<num;i++)
            {
                for(j=0;j<num-i-1;j++)
                    {
                        if(arr[j]>arr[j+1])
                            {
                                temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                            }
                    }
            }
            printf("\n sorted array are");
            for(i=0;i<num;i++)
            {
                printf("%d",arr[i]);
            }
            printf("\n enter element to search");
            scanf("%d",&item2);
            pos=-1;
            lb=0,ub=num-1;
            while(lb<=ub)
                {
                    mid=(lb+ub)/2;
                    if(arr[mid]==item2)
                        {
                            pos=mid;
                            break;
                        }
                    else if(arr[mid]>item2)
                        {
                            ub=mid-1;
                        }
                    else
                        {
                            lb=mid+1;
                        }
                }
                if(pos==-1)
                {
                    printf("\n element not found");
                }
                else
                {
                    printf("\n element found %d",pos);
                }
    }
