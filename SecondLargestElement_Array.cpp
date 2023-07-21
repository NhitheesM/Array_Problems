#include <iostream>

int getSecondLargest(int arr[], int n) {
    if (n < 2) {
        std::cerr << "Array must have at least 2 elements.";
        return -1;  // Return -1 to indicate an error
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int n;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int secondLargest = getSecondLargest(arr, n);

    if (secondLargest != -1) {
        std::cout << "The second largest element is: " << secondLargest << std::endl;
    }

    delete[] arr;

    return 0;
}
