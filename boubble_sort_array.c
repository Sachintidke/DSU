#include<stdio.h>
void bubble_sort(int[],int);
void main()
{
    int a[30],n,i;
    printf("enter the no of element:-");
    scanf("\n %d",&n);
    printf("enter the array of element:-");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    bubble_sort(a,n);
    printf("sorted array:-\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    

}
void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
       for(j=0;j<n-i;j++)
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }    
      
}