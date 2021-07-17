#include <iostream>
#include<cstdlib>
#include <ctime>


using namespace std;

void Selection_Sort(int arr[], int length);
size_t find_max(int* arr, size_t i, size_t big_index, int length);
void swap(int* arr, size_t i, size_t MAX);
void display(int* arr, int n);

int main()
{	
	int arr[5] = { 20, 50, 10, 30, 40 };
	cout << "\nUnsorted array: \n";
	display(arr, 5);

	Selection_Sort(arr, 5);

	cout << "\n\nSorted array: (Descending order) \n";
	display(arr, 5);

	puts("\n\n");
	return 0;
}

void Selection_Sort(int arr[], int length)
{
	for (size_t i = 0; i < length-1; ++i)
	{
		size_t big_index = i;

		big_index = find_max(arr, i, big_index, length);

		swap(arr, i, big_index);
	}
}

size_t find_max(int* arr, size_t i, size_t big_index, int length)
{
	for (size_t j = i+1; j < length; ++j)
		if (arr[j] > arr[big_index])
			big_index = j;
	return big_index;
}

void swap(int* arr, size_t i, size_t MAX)
{
	int temp = arr[i];
	arr[i] = arr[MAX];
	arr[MAX] = temp;
}

void display(int* arr, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
}