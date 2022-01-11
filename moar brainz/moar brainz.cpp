// moar brainz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Zombie.h"
#include <cstdlib>
Zombie* zombieHorde(int N, std::string name);
int main()
{
   
   const int N = 3;
   std::string name = "ket";
    Zombie *zombs[N];
    zombieHorde(1, name);

}