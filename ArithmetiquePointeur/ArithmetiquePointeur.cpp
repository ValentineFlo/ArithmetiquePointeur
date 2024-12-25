// ArithmetiquePointeur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    int a = 5;
    int b = 8;

    int *ptr1 = &a;
    int *ptr2 = &b;

    std::cout << ptr1 << std::endl;
    std::cout << ptr2 << std::endl;

    ptr1++;

    std::cout << ptr1 << std::endl;
    std::cout << ptr2 << std::endl;

    ptr1 += 2;

    std::cout << ptr1 << std::endl;    
    std::cout << ptr2 << std::endl;


    std::cout << ptr2 - ptr1 << std::endl;

}

// operation sur pointeur +, - et incrémentation
// incrémenté addresse, c passé a l'adresse suivante et de sauter de 4 octets en mémoire ou un en fonction du type de la variable stocké
// faire +2 c passé à l'adresse suivante suivante...
// meme systeme pour désincrémenter ou -2...