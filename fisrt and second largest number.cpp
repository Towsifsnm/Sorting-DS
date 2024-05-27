#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int n;


    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array should have at least two elements." << endl;
        return 1;
    }

    int arr[n];


    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    int largest = arr[0];
    int secondLargest = arr[0];


    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }


    if (secondLargest == arr[0]) {
        cout << "There is no second largest number in the array." << endl;
    } else {
        cout << "The largest number is: " << largest << endl;
        cout << "The second largest number is: " << secondLargest << endl;
    }

    return 0;
}

