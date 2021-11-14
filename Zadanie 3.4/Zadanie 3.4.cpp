// Zadanie 3.4.cpp :
//

#include <iostream>
#include <iomanip>

int main()
{
    int liczbawierszy;

    do {
        std::cout << "Narysuje trojkat Paskala. Podaj mi, ile ma miec wierszy:\n";
        std::cin >> liczbawierszy;

        if (liczbawierszy <= 0)
        {
            std::cout << "By narysowac trojkat, musze otrzymac liczbe wieksza niz 0.\n";
        }
    }

    while (liczbawierszy <= 0);

    std::cout << "Twoj trojkat Pascala:\n\n\n";

    for (int i = 0; i <= liczbawierszy; i++)
    {   
        std::cout << i;
        int rysowanie = 1;

        for (int miejsce = 1; miejsce <= (liczbawierszy - i + 1); miejsce++)
        {
            std::cout << " ";
          
        }

        for (int miejsce = 1; miejsce <= i; miejsce++)
        {
                     
                std::cout << rysowanie << " ";      
                rysowanie = rysowanie * ( i - miejsce) / miejsce;
                
            }

            std::cout << "\n";
                
        

      

       
    }

   
    return 0;
}

