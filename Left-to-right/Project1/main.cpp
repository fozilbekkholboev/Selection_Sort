#include <iostream>

using namespace std;

void Selection_Sort(int* arr, int length);
size_t find_min(int* arr, size_t i, size_t  min_index, int length);
void swap(int* arr, size_t i, size_t MIN);
void display(int* arr, int n);

int main()
{
	int arr[] = { 20, 50, 10, 30, 40 };

	cout << "\nUnsorted array: -> ";
	display(arr, 5);

	cout << "\n\nSorted the array: ";
	Selection_Sort(arr, 5);
	display(arr, 5);
	puts("\n");
	return 0;
}

void Selection_Sort(int* arr, int length)
{
	for (size_t i = 0; i < length-1; ++i)
	{
		size_t min_index = i;

		min_index = find_min(arr, i, min_index, length);

		swap(arr, i, min_index);
	}
}

size_t find_min(int* arr, size_t i, size_t  min_index, int length)
{
	for (size_t j = i+1; j < length; ++j)
	{
		if (arr[j] < arr[min_index])
			min_index = j;
	}

	return min_index;
}

void swap(int* arr, size_t i, size_t MIN)
{
	int temp = arr[i];
	arr[i] = arr[MIN];
	arr[MIN] = temp;
}

void display(int* arr, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
}