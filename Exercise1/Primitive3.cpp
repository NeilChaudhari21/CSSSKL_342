#include <iostream>
#include <cmath>
using namespace std;

// 3.4 -> 3.9 -> 3
// 4.8 -> 5.3 -> 5
int myRoundingFunction(double val) {

    if (val >= 0) {
        return (int) (val + 0.5);
    } else {
        return (int) (val - 0.5);
    }

}

int main() {
    double val1 = 3.7;
    double val2 = 3.2;
    double val3 = -3.7;
    double val4 = -3.2;
    double val5 = 4.5;
    double val6 = -4.5;

    std::cout << "myRoundingFunction(" << val1 << ") = " << myRoundingFunction(val1) << std::endl; // Expected: 4
    std::cout << "myRoundingFunction(" << val2 << ") = " << myRoundingFunction(val2) << std::endl; // Expected: 3
    std::cout << "myRoundingFunction(" << val3 << ") = " << myRoundingFunction(val3) << std::endl; // Expected: -4
    std::cout << "myRoundingFunction(" << val4 << ") = " << myRoundingFunction(val4) << std::endl; // Expected: -3
    std::cout << "myRoundingFunction(" << val5 << ") = " << myRoundingFunction(val5) << std::endl; // Expected: 5
    std::cout << "myRoundingFunction(" << val6 << ") = " << myRoundingFunction(val6) << std::endl; // Expected: -5

    return 0;
}





