#include <iostream>
#include<conio.h>
using namespace std;


int main(int argc, char** argv) {
//	int Nilai[20];
//	int i,N,angka,bilangan;
	
	char Huruf[25];
	char Awal = '@';
	char Ahir = 'Z';
	char alphabet;
	char i;
	char cari;
	
	for (i = Awal; i < Ahir; i++){
		Awal++;
		Huruf[i] = Awal;
		cout << Huruf[i];
	}
	
	cout<<"\n  Masukan Huruf Yang Dicari  = ";
	cin>>cari;
	cout<<endl;
	
	do {
		if(Huruf[Awal] == cari){
			alphabet = Huruf[Awal];
			Awal++;
		}
	}
	while (Huruf[Awal] <= Ahir){
		if (alphabet == cari){
			cout<<"  Huruf "<<cari<<" Ditemukan";
		}else{
			cout<<"  Bilangan "<<cari<<" Tidak Ditemukan";
		}
	getch();
	
	}
	
//	//melakukan pencarian
//	do{
//	if(Huruf[i]==cari)
//	alphabet=Huruf[i];
//	i++;}
//	
//	while( i <= Ahir);
//	if( == cari)
//	cout<<"  Huruf "<<cari<<" Ditemukan";
//	else
//	cout<<"  Bilangan "<<cari<<" Tidak Ditemukan";
//	getch();
}
