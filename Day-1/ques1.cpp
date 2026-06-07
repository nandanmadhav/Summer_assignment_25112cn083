#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Ask user for input
    cout << "Enter a number: ";
    cin >> n;

    // Calculate sum using loop
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    // Display result
    cout << "Sum of first " << n << " natural numbers is: " << sum;

    return 0;
}