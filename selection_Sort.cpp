#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
            if (min_index != i)
            {
                swap(&arr[min_index], &arr[i]);
            }
        }
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

}
int main()
{ int arr[]={10,8,9,7,15,78};
int n=sizeof(arr)/sizeof(arr[0]);
selection_sort(arr,  n);
printArray(arr,n);

    return 0;
}