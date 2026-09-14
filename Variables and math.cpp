#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4;
    int Product, Average;

    cin >> n1 >> n2 >> n3 >> n4;

    Product = n1 * n2 * n3 * n4;
    Average = (n1 + n2 + n3 + n4) / 4;

    cout << Product << endl << Average << endl; 

    double FProduct, FAverage;

    FProduct = n1 * n2 * n3 * n4;
    FAverage = (n1 + n2 + n3 + n4) / 4.0;

    cout << FProduct << endl << FAverage << endl; 
}
