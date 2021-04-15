#include <stdio.h>
void linear(int arr[],int n,int element)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            printf("Element found at index %d\n",i);
            return;
        } 
    }
    printf("Element not found\n");
   // return;
}

void binary(int arr[],int first,int middle,int last,int n,int element)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
     while (first <= last) {
    if (arr[middle] == element) {
      printf("\n%d found at index %d\n", element, middle);
                   break;
    }
         else if (arr[middle] < element)
      {
          first = middle + 1;
      }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("\nNot found! %d isn't present in the array\n", element);
}

int main()
{
    int first,last,middle,arr[100],choice,n,element;
    while(1)
    {
    printf("Enter the choice you want to perform\n1.Linear Search\n2.Binary Search\n3.Exit\n");
    scanf("%d",&choice);
    if(choice==3)
        exit(0);
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%200;
    }
    printf("The elements generated are:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\nEnter the element you want to search for\n");
    scanf("%d",&element);
    switch(choice)
       {
        case 1:linear(arr,n,element);
                break;
        case 2:{
            first=0; last=n-1; middle=(first+last)/2;
            binary(arr,first,middle,last,n,element);
        }
        break;
        //case 3:exit(0);
        default:printf("Incorrect choice....Please enter the correct choice\n");
    }
    }
    return 0;
}
