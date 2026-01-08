
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temporary = arr[start];
        arr[start] = arr[end];
        arr[end] = temporary;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 1, 7, 6};
    int size = 6;

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    reverseArray(arr, size);

    cout <<endl<< "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
