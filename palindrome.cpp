#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, temp;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;

    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if(temp == rev)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
