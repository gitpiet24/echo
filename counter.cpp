#include <iostream>


int main() 
{
    int endvalue;
    std::cout << "Bitte geben Sie den Wert ein, wie hoch der Counter laufen soll und drücken Sie die Eingabetaste um zu starten." << std::endl;
    std::cin >> endvalue;
    //std::cin(std::cin, input))
    {
        for (int i = 0; i < endvalue; i++)
            {
            std::cout << i << std::endl;
            }
        for (int i = endvalue; i >= 0; i--)
            {
                std::cout << i << std::endl;
            }
    }
    return 0;
}