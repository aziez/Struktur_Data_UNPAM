#include <iostream>
using namespace std;

int luasPersegi(int p, int l);
int luasSegitiga(int a, int t);
int luasLingkaran(float r);

int main(int argc, char** argv) {
	int a,b;
	float r;
	int menu;
	
	cout<<"==========================MAU APA ?==========================\n";
	cout<<"\t \t \t 1. Hitung Luas Persegi   \t \t \t"<<endl;
	cout<<"\t \t \t 2. Hitung Luas Segitiga  \t \t \t"<<endl;
	cout<<"\t \t \t 3. Hitung Luas Lingkaran \t \t \t"<<endl;
	cout<<"JAWAB [1,2,3] = "; cin >> menu;
	
	
	if(menu == 1){
	cout << "Panjang = ";cin>>a;
	cout << "Tinggi  = ";cin>>b		;
	cout << "Luas Persegi = "<<luasPersegi(a,b);
	}
	else if(menu == 2){
	cout << "Alas = ";cin>>a;
	cout << "Tinggi  = ";cin>>b	;	
	cout << "Luas Segitiga = "<<luasSegitiga(a,b);
	}
	else if(menu == 3){
	cout << "Panjang Rusuk = ";cin>>r;	
	cout << "Luas Segitiga = "<<luasLingkaran(r);
	}
	
	return 0;
}


int luasPersegi(int p, int l){
	int persegi;
	persegi = p * l;
	
	return persegi;
}

float luasSegitiga(float a, float t){
	int segitiga;
	segitiga = 0.5*a*t;
	
	return segitiga;
}

int luasLingkaran(int rsk){
	const float phi = 3.14;
	float lingkaran;
	lingkaran = phi*rsk*rsk;
	
}
