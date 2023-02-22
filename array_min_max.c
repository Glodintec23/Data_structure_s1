#include<stdio.h>
#include<stdlib.h>
int arr[10],i,j;
int main()
    {
    int num,temp;
        printf("////////////////to find min and max values//////////////////");
        printf("\n enter the number of elemente :");
        scanf("%d",&num);
        for(i=0;i<num;i++)
            {
                printf("\n enetr element: ");
                scanf("\%d",&arr[i]);
            }
            printf("\n array created successfully");
        for(i=0;i<num;i++)
            {
                printf("%d",arr[i]);
            }
        printf("\n sorted array is");
        for(i=0;i<num;i++)
            {
                for(j=0;j<num-i-1;j++)
                {
                    if(arr[j]<arr[j+1])
                        {
                            temp=arr[j];
                            arr[j]=arr[j+1];
                            arr[j+1]=temp;
                        }
                }
            }
            for(i=0;i<num;i++)
                {
                    printf("%d",arr[i]);
                }
            printf("\n maximun element is %d",arr[0]);
            printf("\n minimun element is %d",arr[num-1]);
            return 0;
    }
