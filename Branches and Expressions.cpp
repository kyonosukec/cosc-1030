#include <iostream>
using namespace std;

int main () {
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    cout << min(num1, min(num2, num3)) << endl;
    
    return 0;
}