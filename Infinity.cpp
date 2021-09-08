#include <cmath>
class Infinity {
public:
    float FloatInf() {
        float x = 1;
        float result = 1;
        while (std::isfinite(x)) {
            result = x;
            x = x * 2;
        }
        return result;
    }

    double DoubleInf() {
        double x = 1;
        double result = 1;
        while (std::isfinite(x)) {
            result = x;
            x = x * 2;
        }
        return result;
    }
};