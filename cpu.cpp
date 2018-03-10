#include <iostream>
#include <stdio.h>

using namespace std;



class CPU{

private:



	static int8_t USER = 0;
	static int8_t SUPERVISOR = 1;

	int8_t MODE = SUPERVISOR;

	// ir virtualios registrai
	int16_t IC = 0;
	int8_t SF = 0;
	int32_t R[4] = {0, 0, 0, 0}; 
	int16_t SP = 

	// tik realios registrai
	int8_t TI = 40;
	// pakeisti projekte, darom viena baita vietoj dvieju
	int8_t PLR = 1;


};

void ADD(){
	cout << "ADD;
	// su atmintim
	// sudedam atmintyje esancia reiksme su registre esancia reiksme ir issaugome registre
}



