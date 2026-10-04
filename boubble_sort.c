#include<stdio.h>
int main()
{
    int size;
    printf("enter the size array:-");
    scanf("%d",&size);

    int a[size];
    printf("enter the element of array:-");
    for(int i=0;i<size;i++);
    {
        scanf("%d",&a[size]);
    }
    printf("array after sorted:-");
      for(int i=1;i<size;i++)
      {
        printf("%d",a[i]);
      }
    
      int temp,x,n;
    for(int i=0;i<n-1;i++){
       x=0; 
       for( int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            x=1;
        }
    }   
    return 0;
}    
