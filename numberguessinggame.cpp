#include <iostream>
#include <random>
// Hello!! second commit testing!
void getInput(int random)
{
	int input{};
	std::cin >> input;

	if (input > random ) {
		std::cout << "Too high!" << std::endl;
		getInput(random);
	}
	else if (input < random) {
		std::cout << "Too low!" << std::endl;
		getInput(random);
	}
	else if (input == random)
		std::cout << "YOU DID IT!" << std::endl;
	
}

int main(int argc, char const *argv[])
{
	std::mt19937 mt{ std::random_device{}() };
	std::uniform_int_distribution rand100{ 0,99 };

	
	int random{ rand100(mt) };
	std::cout << "Give an educated guess: " << std::endl;
	getInput(random);
	return 0;
}
