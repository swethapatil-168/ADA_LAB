#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int selection_sort(int arr[],int n)
{
       int i, j, position, swap;
   for (i = 0; i < (n - 1); i++) 
  {
      position = i;
      for (j = i + 1; j < n; j++)  
     {
         if (arr[position] > arr[j])
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
   int arr[10000],n,i;
   clock_t start,end;
   printf("Enter the number of elements in the array\n");
   scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            arr[i]=rand()%200;
            printf("%d ",arr[i]);
        }
        start=clock();
        selection_sort(arr,n);
        end=clock();
        printf("Sorted array is\n");
   for (i = 0; i < n; i++)
      printf("%d ", arr[i]);
   
   printf("\nThe time taken for sorting is %lf\n",((double)(end-start))/CLOCKS_PER_SEC);
   return 0;
}
