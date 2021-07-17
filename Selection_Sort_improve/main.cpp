



#include <iostream>

using namespace std;

template<typename T>
void Selection_Sort(T* arr, int n);

template<typename T>
void swap(T* arr, int i, int SMALL);

int main()
{
    int arr[8] = {11, 2, 48, 13, 9, 5, 6, 21};

    cout << "\nunsorted array: ";
    for (int i=0; i<8; ++i)
    {
        cout << arr[i] << "  ";
    }

    Selection_Sort(arr, 8);

    cout << "\nsorted array:   ";
    for (int i=0; i<8; ++i)
    {
        cout << arr[i] << "  ";
    }



    puts("\n\n");
    return 0;
}



template<typename T>
void Selection_Sort(T* arr, int n)
{
    for (int i=0, k=n-1; i<n/2 && k > n/2; ++i, --k)
    {
        int SMALL = i;
        int BIG = k;

        for (int j=i+1, l=k-1; j<n && l >= 0; ++j, --l)
        {
            if (arr[j] < arr[SMALL])
                SMALL = j;

            if (arr[l] > arr[BIG])
                BIG = l;
        }

        if (SMALL != i)
            swap(arr, i, SMALL);

        if (BIG != k)
           swap(arr, k, BIG);
    }
}

template<typename T>
void swap(T* arr, int i, int SMALL)
{
    T temp = arr[i];
    arr[i] = arr[SMALL];
    arr[SMALL] = temp;
}


