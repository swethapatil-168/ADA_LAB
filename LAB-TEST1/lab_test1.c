#include <stdio.h>
#include <time.h>
int k_largest(int arr[],int n,int k)
{int k_large;
    for(int i=0;i<n;i++)
    {
        if(arr[k]==arr[i+1])
        return arr[i];
    }

}
int selection_sort(int arr[],int n)
{
       int i, j, position, swap;
   for (i = 0; i < (n - 1); i++) 
  {
      position = i;
      for (j = i + 1; j < n; j++)  
     {
         if (arr[position] < arr[j])
            position = j;
      }
      if (position != i) 
     {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
}

int main() 
{
   int arr[10000],n,i,k,k_large;
   clock_t start,end;
   printf("Enter the number of elements in the array\n");
   scanf("%d",&n);
   printf("Enter the value of k to find the kth largest\n");
   scanf("%d",&k);
    for(i=0;i<n;i++)
        {
            arr[i]=rand()%1000;
            printf("%d ",arr[i]);
        }
        start=clock();
        selection_sort(arr,n);
        end=clock();
        printf("\nSorted array is\n");
   for (i = 0; i < n; i++)
      printf("%d ", arr[i]);
   
   printf("\nThe time taken for sorting is %lf\n",((double)(end-start))/CLOCKS_PER_SEC);
   k_large=k_largest(arr,n,k);
   printf("kth largest is %d \n",k_large);
   return 0;
}
