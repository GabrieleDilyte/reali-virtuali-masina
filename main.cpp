#include <iostream>
#include <fstream>
//#include "moduliu vardai.h"

/////////////////////////////////////////////////////////////////////////////
// Main'as.
/////////////////////////////////////////////////////////////////////////////
int main() {

	std::string command;
	std::string firstWord;

	std::ifstream ifs; // Ivesties srauto kintamasis
	ifs.open ("Komandos.txt", std::ifstream::in); // Atidaromas failas
	
	// Failo skaitymo ir kuriamos masinos komandu vykdymo ciklas
	while (!ifs.eof()){	 
		getline(ifs,command);
		firstWord = command.substr(0, command.find(" "));
		
		// std::cout << firstWord << "\n";
		// std::cout << command << "\n"; 
		
		if(firstWord == "ADD"){
			std::cout << "Komanda ADD" << std::endl;
			// Reikia pasiimti parametrus is 'command' kintamojo
			// Veikimas naudojant kitus modulius
		}else if(firstWord == "SUB"){
			std::cout << "Komanda SUB" << std::endl;
		}else if(firstWord == "MUL"){
			std::cout << "Komanda MUL" << std::endl;
		}else if(firstWord == "DIV"){
			std::cout << "Komanda DIV" << std::endl;
		}else if(firstWord == "CMPR"){
			std::cout << "Komanda CMPR" << std::endl;
		}else if(firstWord == "PRINT"){
			std::cout << "Komanda PRINT" << std::endl;
		}else if(firstWord == "PRINTI"){
			std::cout << "Komanda PRINTI" << std::endl;
		}else if(firstWord == "READ"){
			std::cout << "Komanda READ" << std::endl;
		}else if(firstWord == "READI"){
			std::cout << "Komanda READI" << std::endl;
		}else if(firstWord == "SETR"){
			std::cout << "Komanda SETR" << std::endl;
		}else if(firstWord == "PULLR"){
			std::cout << "Komanda PULLR" << std::endl;
		}else if(firstWord == "JMP"){
			std::cout << "Komanda JMP" << std::endl;
		}else if(firstWord == "HALT"){
			std::cout << "Komanda HALT" << std::endl;
		}else if(firstWord == "INT"){
			std::cout << "Komanda INT" << std::endl;
		}else{
			std::cout << "TOKIOS KOMANDOS NERA!" << std::endl;
		}	

	} 	
	
	ifs.close();
	
	return 0;
}
