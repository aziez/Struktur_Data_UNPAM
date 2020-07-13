#include <iostream>
 
using namespace std;
 
struct HEWAN
{
	string nama[3][6][1] ={
						  {{"Harimau"},{"Macan"},{"Singa"},{"Beruang"},{"Serigala"},{"Cheetah"}},
						  {{"Kambing"},{"Kuda"},{"Kelinci"},{"Gajah"},{"Jerapah"},{"Keledai"}},
						  {{"Monyet"},{"Babi"},{"Simpanse"},{"Luwak"},{"Ayam"},{"Kucing"}},
						  };
	string golongan[3] = {"KARNIVORA","HERBIVORA","OMNIVORA"};
};
 
 
int main()
{
    struct HEWAN *pointer, hewan;
 
    pointer = &hewan;
    
 	cout << "\n \t Kategori : " << pointer->golongan[0]<<"\n \t"; 
 	cout << "Alamat kategori : " << &pointer->golongan[0];
 	for (int i = 0 ; i < 6 ; i++){
 			cout << " \n NAMA HEWAN : "<< pointer->nama[0][0][i]<<"\t";
 			cout << "ALAMAT pada Array : "<< &pointer->nama[0][0][i];
	 }
	 cout << endl;
	 
	cout << "\n \t Kategori : " << pointer->golongan[1]<<"\n \t"; 
 	cout << "Alamat kategori : " << &pointer->golongan[1];
 	for (int i = 0 ; i < 6 ; i++){
 			cout << " \n NAMA HEWAN : "<< pointer->nama[1][0][i]<<"\t";
 			cout << "ALAMAT pada Array : \0 "<< &pointer->nama[1][0][i];
	 }
	 cout << endl;
	
	cout << "\n \t Kategori : " << pointer->golongan[2]<<"\n \t"; 
 	cout << "Alamat kategori : " << &pointer->golongan[2];
 	for (int i = 0 ; i < 6 ; i++){
 			cout << " \n NAMA HEWAN : "<< pointer->nama[2][0][i]<<"\t";
 			cout << "ALAMAT pada Array : "<< &pointer->nama[2][0][i];
	 }
 
}
