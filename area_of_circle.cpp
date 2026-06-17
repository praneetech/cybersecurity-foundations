#include <iostream>
using namespace std;

class Sphere {
private:
    float r;
    float a; 

public:
    void calculateArea() {
        cout << "Enter radius of sphere: ";
        cin >> r;
        a = 4 * 3.14159 * r * r;
        cout << "Area of sphere = " << a << endl;
    }
}; 

int main() {
    Sphere s;
    s.calculateArea();
    return 0;
}
