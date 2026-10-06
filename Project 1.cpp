#include <iostream>
using namespace std;

int main() {
    srand(time(0));

    int bdays;
    cout << "How many business days to simulate?" << endl;
    cin >> bdays;
    int donuts = 10;

    while (bdays > 0) {

        donuts = donuts + rand() % 30;
        int donut_demand = rand() % 30;
        donuts = donuts - donut_demand;



        cout << bdays << " day" << endl;
        cout << donuts << " donuts" << endl;
        bdays = bdays - 1;

    }

}
