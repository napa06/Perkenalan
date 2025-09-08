#include <iostream>
#include <cstdlib> 
#include <string>

void clearScreen() {
#ifdef _WIN32
    std::system("cls");
#else
    std::system("clear");
#endif
}

int main (){
	std::string user_input;
	std::cout << "Masukan Kata Sandi : ";
	std::getline(std::cin, user_input);
	
	clearScreen();
	
	std::string user_output;
	std::cout << "Masukan Kata Sandimu : ";
	std::getline(std::cin, user_output);
	
	if (user_output == user_input){
		std::cout << "You Made It" << std::endl;
	} else {
		std::cout << "Try To Remind It" << std::endl;
	}
	
	return 0;
}
