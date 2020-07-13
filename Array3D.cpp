#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	string Hewan[3][6][1] ={
						  {{"Harimau"},{"Macan"},{"Singa"},{"Beruang"},{"Serigala"},{"Cheetah"}},
						  {{"Kambing"},{"Kuda"},{"Kelinci"},{"Gajah"},{"Jerapah"},{"Keledai"}},
						  {{"Monyet"},{"Babi"},{"Simpanse"},{"Luwak"},{"Ayam"},{"Kucing"}},
						  };

	cout << "GOLONGAN-GOLONGAN HEWAN :"<<endl;
	
	cout <<endl<< "HERBIVORA : \n";
	for (int a = 0; a < 6 ; a++){
		cout << "\t ["<<Hewan[0][0][a]<<"]"<<endl;
	}
	
	cout <<endl<< "KARNOVORA : \n";
	for (int a = 0; a < 6 ; a++){
		cout << "\t ["<<Hewan[1][0][a]<<"]"<<endl;
	}
	
	cout <<endl<< "OMNIVORA : \n";
	for (int a = 0; a < 6 ; a++){
		cout << "\t ["<<Hewan[2][0][a]<<"]"<<endl;
	}
	
	
	
	}
