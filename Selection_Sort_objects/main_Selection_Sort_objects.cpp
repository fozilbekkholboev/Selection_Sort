
#include <iostream>
#include "../structure_FOOTBALLER.h"

///ascending ...

using namespace std;


template<typename T>
void selection_sort(T* arr, int N);

int main()
{
    Footballer Mbape("Kyilian", "Mbape", 7, "forward", "Paris", 178.6, 95, 80.2);
    Footballer Ronaldo("Cristiano", "Ronaldo", 7, "forward", "Juventus", 187.9, 97, 95.3);
    Footballer Messi("Lionel", "Messi", 10, "forward", "Barcelona", 172.4, 98, 120.5);
    Footballer Lewandowski("Robert", "Lewandowski", 10, "forward", "Bayern-Munich", 188.6, 95, 74.6);
    Footballer Lukaku("Lalaku", "Kuku", 13, "mid-fielder", "JAR", 165.2, 76, 12.3);

    Footballer arr[5] {Mbape, Ronaldo, Lukaku, Messi, Lewandowski};

    for (int i=0; i<5; ++i)
    {
        cout << arr[i];
    }

    system("CLS");

    selection_sort(arr, 5);
    cout << "\nSorted:  \n";

    for (int i=0; i<5; ++i)
    {
        cout << arr[i];
    }



    puts("");
    return 0;
}

template<typename T>
void selection_sort(T* arr, int N)
{
    for (int i=0; i<N-1; ++i)
    {
        int SMALL = i;
        for (int j=i+1; j < N; ++j)
        {
            if (arr[j] < arr[SMALL])
                SMALL = j;
        }

        if (SMALL != i)
        {
            T temp = arr[i];
            arr[i] = arr[SMALL];
            arr[SMALL] = temp;
        }

    }
}
