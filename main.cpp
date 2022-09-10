#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];                           //javitas: int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa" << std::endl;    //javitas: std::cout << "1-100 ertekek duplazasa" << std::endl;
    for (int i = 0; i < N_ELEMENTS; i++)                    //javitas: for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;                 
        std::cout << "Ertek: " << b[i] << std::endl;        //javitas: std::cout << "Ertek: " << b[i] << std::endl;
    };                                                      //javitas: };
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0                                           //javitas: int atlag = 0;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i];                                      //javitas: atlag += b[i];
    };                                                      //javitas: };
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
