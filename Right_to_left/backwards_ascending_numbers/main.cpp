#include <iostream>

using namespace std;

void display(int* arr, int n);
void selection_sort_backwards(int* arr, int length);

int main()
{
    int arr[6] = {20, 50, 10, 30, 7, 40};

    cout << "\nunsorted array: ";
    display(arr, 6);

    selection_sort_backwards(arr, 6);

    cout << "\n\nSorted array:  Ascending\n";
    display(arr, 6);

    puts("\n\n");
    return 0;
}

void selection_sort_backwards(int* arr, int length)
{
    for (int i=length-1; i > 0; --i)
    {
        int MAX = i;
        for (int j=i-1; j >= 0; --j)
        {
            if (arr[j] > arr[MAX])
                MAX = j;
        }

        if (MAX != i)
        {
            int temp = arr[i];
            arr[i] = arr[MAX];
            arr[MAX] = temp;
        }
    }

}

void display(int* arr, int n)
{
    for (int i=0; i<n; ++i)
    {
        cout << arr[i] << " ";
    }

}


