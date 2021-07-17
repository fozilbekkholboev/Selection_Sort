

#include <iostream>

/// Ascending, left -> right

using namespace std;

template<typename T>
void display(T* arr, int n);

template<typename T>
void Selection_Sort(T* arr, int n);

int main()
{
    //int arr[6] = {20, 50, 10, 30, 7, 40};             int
    //char arr[] = { 'E', 'A', 'D', 'B', 'F', 'C', };   char
    //double arr[] = { 5.6, 9.1, 2.3, 7.8, 6.7, 4.5 };  double

    cout << "\nunsorted array: ";
    display(arr, 6);

    Selection_Sort(arr, 6);

    cout << "\n\nAscending sorted array: ";
    display(arr, 6);


    puts("\n\n");
    return 0;
}

template<typename T>
void Selection_Sort(T* arr, int n)
{
    for (int i=0; i<n-1; ++i)
    {
        int SMALL = i;
        for (int j=i+1; j<n; ++j)
            if (arr[j] < arr[SMALL])  // this is for data types that support operator <
                SMALL = j;
        T temp = arr[i];
        arr[i] = arr[SMALL];
        arr[SMALL] = temp;
    }
}


template<typename T>
void display(T* arr, int n)
{
    for (int i=0; i<n; ++i)
    {
        cout << arr[i] << "  ";
    }

}
