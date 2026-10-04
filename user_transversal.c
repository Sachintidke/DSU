#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of array:-");
    scanf("%d",&size);

    int a[size];
    printf("enter the element in array:-");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array");
    for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}