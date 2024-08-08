#include <iostream>
using namespace std;

// Function to swap two integers
void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int arr[5];

    // Accepting inputs from the user
    cout << "Enter 5 integers: " << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Swapping the last and second last elements
    swap(&arr[3], &arr[4]);

    // Displaying the final array
    cout << "Final array after swapping the last two elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
