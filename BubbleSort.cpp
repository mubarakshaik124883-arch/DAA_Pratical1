#include <iostream>
#include <vector>

// Function to perform optimized Bubble Sort
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    
    // Outer loop for the number of passes
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        
        // Inner loop to compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the current element is greater than the next
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true; // Mark that a swap occurred
            }
        }
        
        // If no two elements were swapped in this pass, the array is sorted
        if (!swapped) {
            break;
        }
    }
}

// Function to print the elements of the vector
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main() {
    // Initialize an unsorted array using std::vector
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};
    
    std::cout << "Original array: ";
    printArray(data);
    
    // Call the bubble sort function
    bubbleSort(data);
    
    std::cout << "Sorted array:   ";
    printArray(data);
    
    return 0;
}
