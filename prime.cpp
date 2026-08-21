#include <iostream>
using namespace std;
int main() {
    cout << "Prime 1 to 100:" << endl;
    for (int n = 2; n <= 100; ++n) {
        bool isPrime = true;
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << n << " ";
        }
    }
    cout << endl;
    return 0;
}
