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
    printf("array");
    for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
    int min,temp,i;
    for(int i=0;i<size-1;i++){
        min=i;
    }     
    for(int j=i+1;j<size;j++){
        if(a[j]<a[min]){
            min=j;
        }
    }
    if(min!=i){
      temp=a[min];
      a[min]=a[i];
      a[i]=temp;
    }

printf("array after sorting:-");
for(int i=0;i<size;i++)
{
    printf("%d",a[i]);
}
     return 0;
}