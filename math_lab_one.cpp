#include <iostream>
#include "Zero.cpp"
#include <limits>
#include "Infinity.cpp"
#include <io.h>
#include <fcntl.h> 
#include <bitset>

void TaskOne();
int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);


    TaskOne();
   
}


void TaskOne() {
    Zero zero = Zero();
    Infinity inf = Infinity();
    std::wcout << L"Вещественный ноль: " << zero.FloatZero() << "\n";
    std::wcout << L"Вещественный ноль повышенной точности: " << zero.DoubleZero() << "\n";


    std::wcout << L"Вещественная бесконечность: " << inf.FloatInf() << "\n";
    std::wcout << L"Вещественная бесконечность повышенной точности: " << inf.DoubleInf() << "\n";
}


void TaskTwo() {

}