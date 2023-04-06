#include <iostream>
#include <algorithm>

template <typename T>
void swap(T& a, T& b)
{
    T zwischenvariable = a;
    a = b;
    b = zwischenvariable;
}

int main(int argc, char** argv)
{
    int a = 1;
    int b = 2;
    std::cout << "a = " << a << " b = " << b << std::endl;
    swap(a,b);
    std::cout << "a = " << a << " b = " << b << std::endl;

    double c = 3;
    double d = 4;
    std::cout << "c = " << c << " d = " << d << std::endl;
    swap(c,d);
    std::cout << "c = " << c << " d = " << d << std::endl;

    swap(a,c);
    std::cout << "c = " << c << " a = " << a << std::endl;

    return 0;
}