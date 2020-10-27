/* ****************************************************************
Author Name : Aparna Sathyanathan
Register Number : 20419023
Date : 21/10/2020
Experiment : Write a menu driven program to implement bubble sort, selection sort and insertion sort.
**************************************************************** */
#include<stdio.h>

//Bubble Sort Function
void bubble_sort(int arr[],int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
      for(j=0;j<n-i-1;j++)
      {
          if(arr[j]>arr[j+1])
          {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
          }
      }
  }
printf("Sorted array: ");
display(arr,n);
}

//Selection Sort Function
void selection_sort(int arr[],int n)
{
    int i,j,temp, min_index;
    for(i=0;i<n-1;i++)
    {
        min_index=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min_index]>arr[j])
             min_index=j;
        }
        if(min_index!=i)
        {
            temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }
    }
printf("Sorted array: ");
display(arr,n);
}

//Insertion Sort Function
void insertion_sort(int arr[],int n)
{
    int i,j,min;
    for(i=1;i<n;i++)
    {
        min=arr[i];
        j=i-1;
        while(min<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=min;
    }
printf("Sorted array : ");
display(arr,n);
}

//Display Function
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
   {
        printf(" %d ",arr[i]);
   }
}

int main()
{
   printf("****************************************************************\n");
   printf("Author Name : Aparna Sathyanathan\nRegister Number : 20419023\nDate : 21/10/2020\nExperiment : Write a menu driven program to implement bubble\nsort, selection sort and insertion sort.");
   printf("\n****************************************************************\n\n");
   int n,opt,i;
   char ch;
   do {
    printf("\nEnter no. of elements of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    printf("\nSelect an option given below to sort array: \n");
    printf("\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort \n4. Exit the Program.\n");
    printf("\nEnter your Choice : ");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        bubble_sort(arr,n);
        break;
    case 2:
        selection_sort(arr,n);
        break;
    case 3:
        insertion_sort(arr,n);
        break;
    case 4:
        exit(0);
    default:
        printf("Please select correct option");
    }
   printf("\n\nWould you like to continue?(y/n) ");
   scanf(" %c",&ch);
  }while (ch=='Y'||ch=='y');
  return 0;
}
