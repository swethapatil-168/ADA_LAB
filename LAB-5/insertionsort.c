#include <stdio.h>
#include <time.h>
void insertion_sort(int arr[], int n)
{
    int temp;
    int i, j;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        while (j >= 0 && arr[j] > arr[j + 1])
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            j--;
        }
    }
}

int main()
{
    int n, i, arr[10000];
    clock_t start,end;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("The generated numbers are:\n");
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 500;
        printf("%d ", arr[i]);
    }

    start=clock();
    insertion_sort(arr, n);
    end=clock();

    printf("\nSorted list in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n The time taken is %lf\n",((double)(end-start))/CLOCKS_PER_SEC);
    return 0;
}
