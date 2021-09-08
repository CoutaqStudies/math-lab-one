#include <cstdint>;
class Factorial {
public:
    static uint64_t CalculateFactorial(uint64_t n) {
        if (n <= 1) {
            return 1;
        }
        else {
            return CalculateFactorial(n - 1) * n;
        }
    }
};