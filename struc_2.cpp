#include <iostream>
using namespace std;

struct mahasiswa{
	int nomor_induk;
	string kelas;
	string nama ;
	
	struct mapel{
		char kode_mapel;
		string nama_mapel[4] = {"MTK","TIK","PKN","PAI",};
		int nilai[4] = {70,80,90,100};
	}pelajaran;
};

int main(int argc, char** argv) {
	mahasiswa aziz = {400044, "04TPLE001", "Muhamad Abdul Aziz"};
	mahasiswa malik = {40055, "04TPLE001" ,"Malik Miftahul Khasq"};
	mahasiswa awang = {40057, "04TPLE001", "Awang Medidat"};
	
	cout <<"Nama  : \t " << aziz.nama <<"\n";
	cout <<"NIM   : \t " << aziz.nomor_induk << "\n";
	cout <<"Kelas : \t " << aziz.kelas << "\n";
	
	cout << "\n DATA NILAI \n \t";
	cout << "Nama Mapel \t ";
	cout << "Nilai \t \n ";
	for (int i = 0; i < 4; i++){
		cout << "\t \n \t * "<<aziz.pelajaran.nama_mapel[i]<<"\t";
		cout << "\t  "<<aziz.pelajaran.nilai[i];
	}
	
	cout <<endl<<"================================================================"<<endl;
	
	cout <<"Nama  : \t " << malik.nama <<"\n";
	cout <<"NIM   : \t " << malik.nomor_induk << "\n";
	cout <<"Kelas : \t " << malik.kelas << "\n";
	
	cout << "\n DATA NILAI \n \t";
	cout << "Nama Mapel \t ";
	cout << "Nilai \t \n ";
	for (int i = 0; i < 4; i++){
		cout << "\t \n \t * "<<malik.pelajaran.nama_mapel[i]<<"\t";
		cout << "\t  "<<malik.pelajaran.nilai[1];
	}
	
	cout <<endl<<"================================================================"<<endl;
	
	cout <<"Nama  : \t " << awang.nama <<"\n";
	cout <<"NIM   : \t " << awang.nomor_induk << "\n";
	cout <<"Kelas : \t " << awang.kelas << "\n";
	
	cout << "\n DATA NILAI \n \t";
	cout << "Nama Mapel \t ";
	cout << "Nilai \t \n ";

	cout << "\t \n \t * "<<awang.pelajaran.nama_mapel[0]<<"\t";
	cout << "\t  "<<awang.pelajaran.nilai[2];
	cout << "\t \n \t * "<<awang.pelajaran.nama_mapel[1]<<"\t";
	cout << "\t  "<<awang.pelajaran.nilai[0];
	cout << "\t \n \t * "<<awang.pelajaran.nama_mapel[2]<<"\t";
	cout << "\t  "<<awang.pelajaran.nilai[0];
	cout << "\t \n \t * "<<awang.pelajaran.nama_mapel[3]<<"\t";
	cout << "\t  "<<awang.pelajaran.nilai[1];


}
