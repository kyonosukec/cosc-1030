#ifndef TRIANGLE_H
#define TRIANGLE_H
class Triangle {
private:
    double base;
    double height;
public:
    void SetBase(double userBase);
    void SetHeight(double userHeight);
    double GetArea() const;
    void PrintInfo() const;
};
#endif