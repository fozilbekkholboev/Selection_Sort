

#include <iostream>

/// Descending Order -> Numbers

using namespace std;

void display(int* arr, int length);
void Selection_Sort(int* arr, int length);

int main()
{
    int arr[7] = {11, 2, 48, 13, 9, 5, 21};

    cout << "\nUnsorted array: ";
    display(arr, 7);

    Selection_Sort(arr, 7);

    cout << "\nDescending Sorted array: ";
    display(arr, 7);
    puts("\n");
    return 0;
}

void Selection_Sort(int* arr, int length)
{
    for (int i=0; i<length; ++i)
    {
        int big_index = i;

        for (int j=i+1; j<length; ++j)
        {
            if (arr[j] > arr[big_index])
                big_index = j;
        }

        int temp = arr[i];
        arr[i] = arr[big_index];
        arr[big_index] = temp;
    }

}


void display(int* arr, int length)
{
    for (int i=0; i<length; ++i)
    {
        cout << arr[i] << " ";
    }
}
