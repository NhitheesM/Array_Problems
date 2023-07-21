#include <iostream>
bool isPossible(int *arr, int n) {
    int count = 0;  // Number of elements that need to be modified

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            count++;

            // If more than one element needs to be modified, it's not possible
            if (count > 1) {
                return false;
            }
            
        }
        
        if(i=1||arr[i]>=arr[i-2]){
        	arr[i]=arr[i-1];
		}
		else{
			arr[i-1]=arr[i];
		}
    }

    // Array can become non-decreasing in at most 1 step
    return true;
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

    bool possible = isPossible(arr, n);

    if (possible) {
        std::cout << "Array can become non-decreasing in at most 1 step." << std::endl;
    } else {
        std::cout << "Array cannot become non-decreasing in at most 1 step." << std::endl;
    }

    delete[] arr;

    return 0;
}
