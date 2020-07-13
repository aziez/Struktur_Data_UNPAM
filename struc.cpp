#include <iostream>
using namespace std;

struct Hewan
{
    string nama[3][6][1] ={
						  {{"Harimau"},{"Macan"},{"Singa"},{"Beruang"},{"Serigala"},{"Cheetah"}},
						  {{"Kambing"},{"Kuda"},{"Kelinci"},{"Gajah"},{"Jerapah"},{"Keledai"}},
						  {{"Monyet"},{"Babi"},{"Simpanse"},{"Luwak"},{"Ayam"},{"Kucing"}},
						  };
						  
    string golongan[3] = {"HERBIVORA","KARNIVORA","OMNIVORA"};
    
    int kaki[2] = {4,2};
    
};

int main(int argc, char **argv)
{
    Hewan hewan;

    cout << "DATA HEWAN - HEWAN" << endl;
    cout << endl;
    
    cout << "Kategori "<<hewan.golongan[0]<<" : "<<endl;
    for (int i = 0 ; i < 6 ; i++){
    	cout << "\t ["<<hewan.nama[0][0][i]<<"]"<<endl;
	}
	
	cout << "Kategori "<<hewan.golongan[1]<<" : "<<endl;
    for (int i = 0 ; i < 6 ; i++){
    	cout << "\t ["<<hewan.nama[1][0][i]<<"]"<<endl;
	}
	
	cout << "Kategori "<<hewan.golongan[2]<<" : "<<endl;
    for (int i = 0 ; i < 6 ; i++){
    	cout << "\t ["<<hewan.nama[2][0][i]<<"]"<<endl;
	}
}
