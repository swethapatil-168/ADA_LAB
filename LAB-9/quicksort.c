#include <stdio.h>
#include <time.h>

void quicksort(int arr[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j) 
        {
            while (arr[i] <= arr[pivot] && i <= high)
            {
                i++;
            }
            while (arr[j] > arr[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp;
        quicksort(arr, low, j - 1);
        quicksort(arr, j + 1, high);
    }
}

int main()
{
    int arr[1000],n, i;
    clock_t start,end;
 
    printf("Enter the number of elements: ");
    scanf("%d", &n); 
    printf("The elements generated are:\n");
    for (i = 0; i < n; i++)
    {
        arr[i]=rand()%500;
        printf("%d ",arr[i]);
    } 

    start=clock();
    quicksort(arr, 0, n - 1);
    end=clock();

    printf("\nThe sorted elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe time taken is %lf\n",((double)(end-start))/CLOCKS_PER_SEC);
 
    return 0;
}
