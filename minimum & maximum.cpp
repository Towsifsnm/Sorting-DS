#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;


     cout << "Enter the number of elements in the array: ";
    cin >> n;


    int arr[n];


     cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; ++i) {
         cin >> arr[i];
    }


    int min = arr[0];
    int max = arr[0];


    for(int i = 0; i < n;i ++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }


     cout << "Minimum value in the array is: " << min << endl;
    cout << "Maximum value in the array is: " << max <<  endl;

    return 0;
}

