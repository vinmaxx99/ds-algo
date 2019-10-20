#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int random(int min, int max);
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf(" ");
}
int main()
{
    int arr[100],n = 100,i;
    for(i=0;i<n;i++)
        arr[i] = random(100,1000);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}
int partition (int arr[], int low, int high)
{
    int j,k,tmp;
    int i = low-1,r=high;
    int x = arr[high];
    for(j=low;j<high;j++){
        if(arr[j] <= x){
            i++;
            tmp = arr[j];
            arr[j] = arr[i];
            arr[i] =tmp;
        }
    }
    tmp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = tmp;
    return i+1;
    
}
int random(int min, int max) //range : [min, max)
{
   static bool first = true;
   if (first) 
   {  
      srand( time(NULL) ); //seeding for the first time only!
      first = false;
   }
   return min + rand() % (( max + 1 ) - min);
}