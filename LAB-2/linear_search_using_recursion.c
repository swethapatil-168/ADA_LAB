#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arr[1000];

int linear_search(int arr[], int key,int i,int n)
{ 
 
  if(i>n)
  return -1;
  if(arr[i]==key)
  return i;
  else
  {
    linear_search(arr,key,i+1,n);
  }
}

int main()
{  
  int key,res,n;
  clock_t start,end;
  
  printf("Enter the no of elements \n");
  scanf("%d",&n);
  printf("The elements generated are :\n");
  for(int i=0;i<n;i++)
  {
    arr[i]=rand()%200;
    printf("%d ",arr[i]);
  }
  
  printf("\n");

  printf("Enter element to be searched\n");
  scanf("%d",&key);

  start=clock();
  res=linear_search(arr,key,0,n);
  end=clock();

  if(res==-1)
    printf("Element not found in linear search\n");
  else
  printf("Element found in linear search at pos %d\n",res);

  printf("The time taken is %lf",((double)(end-start))/CLOCKS_PER_SEC);

  return 0;
}

