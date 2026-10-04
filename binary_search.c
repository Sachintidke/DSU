#include<stdio.h>
int binary (int a[],int x,int s)
{
    int start,end,mid;
    start=0;
    end=s-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(a[mid]==x)
        {
          return mid;
        }
        else if(a[mid]<x)
        {
            start=mid+1;
        }
        else{
            end+mid-1;
        }
    }
    return-1;
}
int main()
{
    int size;
    printf("enter the size of array:-");
    scanf("%d",&size);

    int a[size];
    printf("enter the element of array:-");
    for(int i=0;i<size;i++)
    {
        scanf("%d",a[i]);
    }
    int key;
    printf("enter the element of searching the arrya:-");
    scanf("%d",&key);

    int result=binary(a,size,key);

    if(result==-1)
    {
        printf("not found");
    }
    else{
        printf("element is found at position =%d",result+1);
    }

}