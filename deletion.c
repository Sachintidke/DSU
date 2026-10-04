#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of array:-");
    scanf("%d",&size);
    int a[size];
    printf("enter the elment of array:-");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("array:-");
     for(int i=0;i<size;i++)
     {
        printf("%d",a[i]);
     }
     int pos,delevalue;
     printf("enter the position to delevalue:-");
     scanf("%d",&pos);

     delevalue=a[pos-1];
     for(int i=pos-1;i<size-1;i++)
     {
        a[i]=a[i+1];
     }
     size--;
     printf("array:-");
     for(int i=0;i<size;i++)
     {
        printf("%d",a[i]);
     }
     return 0;
}