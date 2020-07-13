#include <iostream>
#include <conio.h>
using namespace std;

int luasPersegi(int p, int l);
double luasSegitiga(double a, double t);
double luasLingkaran(double rsk);

void backMenu(){
	if (c == 'Y' || c == 'y'){
		goto menu;
	}else{
		break;
	}
	};

int main(int argc, char** argv) {
	int a,b;
	char c;
	float r;
	int menu;
	

	
	menu:
	cout<<"==========================MAU APA ?==========================\n";
	cout<<"\t \t \t 1. Hitung Luas Persegi   \t \t \t"<<endl;
	cout<<"\t \t \t 2. Hitung Luas Segitiga  \t \t \t"<<endl;
	cout<<"\t \t \t 3. Hitung Luas Lingkaran \t \t \t"<<endl;
	cout<<"JAWAB [1,2,3] = "; cin >> menu;
	switch (menu){
		case 1:
			cout << "Panjang = ";cin>>a;
			cout << "Tinggi  = ";cin>>b		;
			cout << "Luas Persegi = "<<luasPersegi(a,b);
			cout << "\n Back To Menu [Y/N] = ";
			cin >> c;
			getch();

	
		case 2:
			cout << "Alas = ";cin>>a;
			cout << "Tinggi  = ";cin>>b	;	
			cout << "Luas Segitiga = "<<luasSegitiga(a,b);
			cout << "\n Back To Menu [Y/N] = ";
			cin >> c;
			getch();
			if (c == 'Y' || c =='y'){
				goto menu;
			}else{
				break;
			}
			
		case 3:
			cout << "Panjang Rusuk = ";cin>>r;	
			cout << "Diameter Lingkaran = "<<luasLingkaran(r);
			cout << "\n Back To Menu [Y/N] = ";
			cin >> c;
			getch();
			if (c == 'Y' || c =='y'){
				goto menu;
			}else{
				break;
			}
		case 4:
			default:
			cout<<"Menu Yang Di Input salah"<<endl;
			getch();
			goto menu;
}

	
	return 0;
}

int luasPersegi(int p, int l){
	int persegi;
	persegi = p * l;
	
	return persegi;
}

double luasSegitiga(double a, double t){
	float segitiga;
	segitiga = 0.5*a*t;
	
	return segitiga;
}

double luasLingkaran(double rsk){
	const float phi = 3.14;
	float lingkaran;
	lingkaran = phi*rsk*rsk;
	
	return lingkaran;
}
