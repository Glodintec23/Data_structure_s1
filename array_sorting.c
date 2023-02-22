#include<stdio.h>
#include<stdlib.h>
int main()
    {
        int arr[10],i,j,temp,num;
        printf("////////////boubble sort///////////////");
        printf("\n emter the number of elements in array: ");
        scanf("%d",&num);
        for(i=0;i<num;i++)
            {
                printf("\n enter element: ");
                scanf("%d",&arr[i]);
            }
            printf("\n array creatted successfully");
        for(i=0;i<num;i++)
            {
                printf("%d",arr[i]);
            }
            printf("\n elements in sorted order are: ");
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
                for(i=0;i<num;i++)
                {
                    printf("%d",arr[i]);
                }
                return 0;
    }
