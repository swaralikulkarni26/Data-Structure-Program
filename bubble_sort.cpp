#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}
int main()
{
    int arr[] = {10, 8, 9, 7, 15, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    printArray(arr, n);

    return 0;
}