#include "Zombie.h"
#include <iostream>
#include <cstdlib>

Zombie* zombieHorde(int N, std::string name) {
	Zombie* zombies = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombies[i].setName(name);
		zombies[i].announce();
	}
	delete [] zombies;
	return 0;

}