/* Tashfeen Abbasi
   22i-2041
   Assignment 1
   OOP-C
#include<iostream>
using namespace std;
void merge(int arr[], int left, int middle, int right) 
{
    if (left >= right) 
	{
        return; 
    }
    int n1 = middle - left + 1;
    int n2 = right - middle;
    int leftArr[n1], rightArr[n2];
    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[middle + 1 + j];
    int i = 0, j = 0, k = left;
    if (leftArr[i] <= rightArr[j]) {
        arr[k] = leftArr[i];
        merge(arr, left + 1, middle, right);
    } else {
        arr[k] = rightArr[j];
        merge(arr, left, middle, right - 1);
    }
    k++;

    if (i < n1) 
	{
        arr[k] = leftArr[i];
        merge(arr, left + 1, middle, right);
        i++;
        k++;
    }
    if (j < n2) {
        arr[k] = rightArr[j];
        merge(arr, left, middle, right - 1);
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array after sorting:\n";
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/