#include <stdio.h>
#include <time.h>
void mergesort(int a[], int i, int j)
{
    int mid;

    if (i < j)
    {
        mid = (i + j) / 2;
        mergesort(a, i, mid);
        mergesort(a, mid + 1, j);
        merge(a, i, mid, mid + 1, j);
    }
}

void merge(int a[], int i1, int j1, int i2, int j2)
{
    int temp[1000];
    int i, j, k;
    i = i1;
    j = i2;
    k = 0;

    while (i <= j1 && j <= j2)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= j1)
        temp[k++] = a[i++];

    while (j <= j2)
        temp[k++] = a[j++];

    for (i = i1, j = 0; i <= j2; i++, j++)
        a[i] = temp[j];
}

int main()
{
    int a[1000], n, i;
    clock_t start,end;
    printf("Enter no of elements:");
    scanf("%d", &n);
    printf("The elements generated are:\n");
    for (i = 0; i < n; i++)
    {
        a[i]=rand()%1000;
        printf("%d ",a[i]);
    }

    start=clock();
    mergesort(a, 0, n - 1);
    end=clock();

    printf("\nSorted array is :");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("Time taken is %f\n",((double)(end-start))/CLOCKS_PER_SEC);
    return 0;
}


