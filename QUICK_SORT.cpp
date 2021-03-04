#include<iostream>
#include<algorithm>
using namespace std;
void display(int arr[],int n);
int partition(int arry[],int low,int high);
void quicksort(int arry[],int low,int high);
int main()
{
    int arry[]={10, 80, 30, 90, 40, 50, 70};
    int n=sizeof(arry)/sizeof(arry[0]);
    quicksort(arry,0,n-1);
    display(arry,n);
}
void quicksort(int arry[],int low,int high)
{
    if(low<high)
    {
        int parti=partition(arry,low,high);
        quicksort(arry,low,parti-1);
        quicksort(arry,parti+1,high);
    }
}
int partition(int arry[],int low,int high)
{
    int pivot=arry[high];
    int lower_small_value_index=low-1;
    for(int i=low;i<=high-1;i++)
    {
        if(arry[i]<pivot)
        {
            lower_small_value_index++;
            swap(arry[lower_small_value_index],arry[i]);

        }
    }
    swap(arry[lower_small_value_index+1],arry[high]);
    return (lower_small_value_index+1);
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}