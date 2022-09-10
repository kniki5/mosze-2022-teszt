#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];                            //javitas: int *b = new int[N_ELEMENTS];
    std::cout << '1-100 ertekek duplazasa'                  //javitas: std::cout << "1-100 ertekek duplazasa" << std::endl;
    for (int i = 0;)                                        //javitas: for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;                                       //javitas: std::cout << "Ertek: " << b[i] << std::endl;
    }                                                       //javitas: };
    for (int i = 0; i; i++)                                 //javitas: nincs szukseg erre a for ciklusra
    {
        std::cout << "Ertek:"     
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                                              //javitas: int atlag = 0;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]                                       //javitas: atlag += b[i];
    }                                                       //javitas: };
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
