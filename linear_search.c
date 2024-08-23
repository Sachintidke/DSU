#include<stdio.h>
int search(int array[],int x)
{
 for( int i=0;i<5;i++)
 if(array[i]=x)
  
  return i;
  return-1;

}
int maim()
{
    int array[5]={1,2,3,4,5};
    int x=4;
    int result=search(array,x);
    if(result==-1){
        printf("element not found:-");
    }
    else{
        printf("element found at position:%d",result + 1);
    }
    return 0;
}