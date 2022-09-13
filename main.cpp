#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //N_ELEMENTS eliras!
    int *b = new int[NELEMENTS];
    //Szoveg " " koze!
    std::cout << '1-100 ertekek duplazasa'
    //hianyzik a feltetel + leptetes: i < N_ELEMENTS; i++
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    //hianyzik a feltetel: i < N_ELEMENTS
    for (int i = 0; i; i++)
    {
        //hianyzik az ertek kiiratasa: b[i];
        std::cout << "Ertek:"
    }    
    //felesleges kiiratni
    std::cout << "Atlag szamitasa: " << std::endl;
    //atlag double!
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //hianyzik a memoriafelszabaditas: delete[] b;
    return 0;
}
