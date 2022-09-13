#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa\n";
    //i+1, mert 1-tol indul
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = (i+1) * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //lathatosagert atirva
        std::cout << b[i] << " ";
    }
    //atlagnak alapertek!
    double atlag = 0;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;
    std::cout << "Feladat megoldva";
    return 0;
}