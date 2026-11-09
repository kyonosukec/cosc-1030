#include <iostream>
#include <iomanip>
#include "Triangle.h"
using namespace std;
void Triangle::SetBase(double userBase) {
    base = userBase;
}
void Triangle::SetHeight(double userHeight) {
    height = userHeight;
}
double Triangle::GetArea() const {
    return 0.5 * base * height;
}
void Triangle::PrintInfo() const {
    cout << "Base: " << base << endl;
    cout << "Height: " << height << endl;
    cout << "Area: " << GetArea() << endl;
}

int main() {
    Triangle triangle1;
    Triangle triangle2;
    double base;
    double height;

    cout << "Triangle1 base: ";
    cin >> base;
    cout << "Triangle1 height: ";
    cin >> height;
    

    triangle1.SetBase(base);
    triangle1.SetHeight(height);
    int area1 = triangle1.GetArea();

    cout << "Triangle2 base: ";
    cin >> base;
    cout << "Triangle2 height: ";
    cin >> height;

    triangle2.SetBase(base);
    triangle2.SetHeight(height);
    int area2 = triangle2.GetArea();

    if (area1 < area2) {
        cout << "Triangle with smaller area: triangle1" << endl;
        triangle1.PrintInfo();
    }
    else if (area1 > area2) {
        cout << "Triangle with smaller area: triangle2" << endl;
        triangle2.PrintInfo();
    }
    else {
        cout << "They're equal" << endl;
    }

}