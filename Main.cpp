#include <iostream> 
#include <cmath> 

class Vector {
private:
    double x;
    double y;
    double z;

public:
    Vector(double x, double y, double z) : x(x), y(y), z(z) {}

    void print() {
        std::cout << "Vector(" << x << ", " << y << ", " << z << ")" << std::endl;
    }

    double length() {
        return std::sqrt(x * x + y * y + z * z);
    }
};

int main() {
    Vector v(6.0, 5.0, 4.0);
    v.print();
    std::cout << "Length: " << v.length() << std::endl;

    return 0;
}