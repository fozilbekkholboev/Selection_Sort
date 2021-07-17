

#include <iostream>

using namespace std;


void display(int* arr, int n);
void Selection_Sort(int* arr, int n);

int main()
{
    int arr[6] = {20, 50, 10, 30, 7, 40};

    cout << "\nUnsorted  array:  ";
    display(arr, 6);

    Selection_Sort(arr, 6);

    cout << "\n\ndescending sorted array: ";
    display(arr, 6);

    puts("\n\n");
    return 0;
}


void Selection_Sort(int* arr, int n)
{
    for (int i=n-1; i > 0; --i)
    {
        int SMALL = i;
        for(int j = i-1; j >= 0; --j)
            if (arr[j] < arr[SMALL])
                SMALL = j;
        int temp = arr[i];
        arr[i] = arr[SMALL];
        arr[SMALL] = temp;
    }

}

void display(int* arr, int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << "  ";
}
