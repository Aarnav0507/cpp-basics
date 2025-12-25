#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter key to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Found at index " << i << endl;
            return 0;
        }
    }

    cout << "Not Found" << endl;
    return 0;
}
