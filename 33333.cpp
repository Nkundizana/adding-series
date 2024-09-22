
#include <iostream>
using namespace std;

int main() {
    int n, i;
    float sum = 0.0;

    cout << "Enter the number of terms in the series: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) { 
            cout << "1/" << i << " + ";
            sum += 1.0 / i; 
        }
    }
    
    cout << "\nSum = " << sum << endl;

    return 0;
}

