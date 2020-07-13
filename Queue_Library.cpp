#include <iostream>
#include <queue>

using namespace std;
	queue<int> angka[5];
	int input[5];

void masuk(){
	if(!angka[5].empty()){
		cout << "Data Penuh";
	}else{
		for(int a = 0; a < 5; a++){
			cout << "Masukkan Angka ke-"<<a+1<<" = ";
			cin >> input[a];
			angka[a].push(input[a]);
		}
	}
}

void tampil(){
	if(angka[5].empty()){
		cout << "Data kosong\n";
	}else{
		for (int a = 0; a < 5; a++){
			cout <<" "<<angka[a].front();
		}
	}
}

void hapus(){
		if(angka[5].empty()){
		cout << "Data kosong\n";
	}else{
		for (int a = 0; a < 5; a++){
			angka[a].pop(); 
		}
	}
}



int main(int argc, char** argv) {
	int choose;
	do
	{
		//Tampilan menu
		cout << "-------------------\n"
			<< "   Menu Pilihan\n"
			<< "-------------------\n"
			<< " [1] Input \n"
			<< " [2] Hapus\n"
			<< " [3] Tampil \n\n"
			<< "-------------------\n"
			<< "Masukkan pilihan : "; cin >> choose;
		switch (choose)
		{
		case 1:
			masuk();
			break;
		case 2:
			hapus();
			break;
		case 3:
			tampil();
			break;
			
		default:
			cout << "Pilihan tidak tersedia";
			break;
		}
	} while (choose !=4);
	return 0;
		
}
