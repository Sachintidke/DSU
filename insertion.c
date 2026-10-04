#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of array:-");
    scanf("%d",&size);

    int a[size];
    printf("enter the element of array:-");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("  array:-");
    for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
    int insert,pos;
    printf("enter the element to insert array:-");
    scanf("%d",&insert);
    printf("enter position to insert the array:-");
    scanf("%d",&pos);
    
    for(int i=size-1;i<pos;i++)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=insert;
    size++;

    printf("array after insertion :-");
    for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
    
    
    }
