#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:-");
    scanf("%d",&n);

    int a[n];
    printf("enter the element of array:-");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array:-");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf(" \n ");

    int s;
    printf("enter the number to search element of array:-");
    scanf("%d",&s);

    int i,found;
    for(i=0;i<n;i++){
        if(a[i]==s){
            found=1;
            break;
        }
    }
    if(found==1)
    {
     printf("%d is found at position %d",s,i+1);   
    }
    else{
        printf("this element is not found array:-");
    }
    return 0;
}