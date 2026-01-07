#include <iostream> //input dan output
#include <cmath>

int main() {

    double a;
    double b;
    double c;

    std::cout << "masukkan sisi alas A:  ";
    std::cin >> a;

    std::cout << "masukkan sisi tinggi B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "hasil sisi miring dari A dan B adalah " << c;



    return 0;
}
