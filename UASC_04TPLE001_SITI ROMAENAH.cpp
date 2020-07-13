#include <iostream>
using namespace std;

//Nama : Siti Romaenah
//NIM : 181011400056

struct mahasiswa{
	char nama[25],nim[12],jurusan[15],kelas[10];
}mhs;

struct nilai{
	char matkul[20];
	float sks,absen,tugas,uts,uas,mutu,ips;
}nilai[50][50];


int main(int argc, char** argv) {
	int jml_smt,jml_matkul;
	float IPK;
	float jml_sks = 0;
	float jml_mutu = 0;
	
	cout << "\t============KARTU HASIL STUDY (KHS)============\n"<<endl;
	cout << "\t================DATA MAHASISWA=================\n";
	cout << "\t\tNama    \t:";gets(mhs.nama);
	cout << "\t\tNIM     \t:";gets(mhs.nim);
	cout << "\t\tJurusan \t:";gets(mhs.jurusan);
	cout << "\t\tKelas   \t:";gets(mhs.kelas);
	cout << "\t==============================================\n";
	
	cout <<"\t\tInput Data Nilai "<<mhs.nama<<endl;
	cout <<"\t\t Jumlah Semseter : ";
	cin >>jml_smt;
	
	for (int i = 0; i < jml_smt; i++){
	cout<<"======================================================================================="<<endl;
	cout <<"\nJumlah Mata Kuliah semester "<<i+1<<" : ";
	cin >> jml_matkul;
	cout << "SEMESTER "<<i+1<<endl;
	for(int a = 0; a < jml_matkul; a++){
		cout << "\t Mata Kuliah "<<a+1<<"\t\t: ";
		cin >> nilai[a][i].matkul;
		cout << "\t Jumlah SKS "<<nilai[a][i].matkul<<"\t\t: ";
		cin >> nilai[a][i].sks;
		cout << "\t Nilai Absen "<<nilai[a][i].matkul<<"\t\t: ";
		cin >> nilai[a][i].absen;
		cout << "\t Nilai Tugas "<<nilai[a][i].matkul<<"\t\t: ";
		cin >> nilai[a][i].tugas;
		cout << "\t Nilai UTS "<<nilai[a][i].matkul<<"\t\t: ";
		cin >> nilai[a][i].uts;
		cout << "\t Nilai UAS "<<nilai[a][i].matkul<<"\t\t: ";
		cin >> nilai[a][i].uas;
		cout<<endl;
		
		nilai[a][i].ips = (0.1*nilai[a][i].absen)+(0.2*nilai[a][i].tugas)+(0.3*nilai[a][i].uts)+(0.4*nilai[a][i].uas);
		
		if(nilai[a][i].ips >= 80){
			cout <<"\t\tGRADE NILAI "<<nilai[a][i].matkul<<"= A ";
			nilai[a][i].mutu = 4 * nilai[a][i].sks;
			cout <<"\t\tMUTU NILAI  "<<nilai[a][i].matkul<<"= "<<nilai[a][i].mutu<<endl;
		}
		
		else if(nilai[a][i].ips > 67 && nilai[a][i].ips <= 80){
			cout <<"\t\tGRADE NILAI "<<nilai[a][i].matkul<<"= B ";
			nilai[a][i].mutu = 3 * nilai[a][i].sks;
			cout <<"\t\tMUTU NILAI  "<<nilai[a][i].matkul<<"= "<<nilai[a][i].mutu<<endl;
		}
		
		else if(nilai[a][i].ips > 55 && nilai[a][i].ips <= 67){
			cout <<"\t\tGRADE NILAI "<<nilai[a][i].matkul<<"= C ";
			nilai[a][i].mutu = 2 * nilai[a][i].sks;
			cout <<"\t\tMUTU NILAI  "<<nilai[a][i].matkul<<"= "<<nilai[a][i].mutu<<endl;
		}
		
		else if(nilai[a][i].ips > 46 && nilai[a][i].ips <= 55){
			cout <<"\t\tGRADE NILAI "<<nilai[a][i].matkul<<"= D ";
			nilai[a][i].mutu = 1 * nilai[a][i].sks;
			cout <<"\t\tMUTU NILAI  "<<nilai[a][i].matkul<<"= "<<nilai[a][i].mutu<<endl;
		}
		
		else if(nilai[a][i].ips <= 46){
			cout <<"\t\tGRADE NILAI "<<nilai[a][i].matkul<<"= E ";
			nilai[a][i].mutu = 0 * nilai[a][i].sks;
			cout <<"\t\tMUTU NILAI  "<<nilai[a][i].matkul<<"= "<<nilai[a][i].mutu<<endl;
		}
		cout<<"======================================================================================="<<endl;
		
		jml_sks = jml_sks+nilai[a][i].sks;
		jml_mutu = jml_mutu+nilai[a][i].mutu;
		IPK = jml_mutu;
			}
			    }
			    
		cout <<"\n\nTOTAL SKS = "<<jml_sks<<endl;
		cout <<"NILAI IPK = "<<IPK/jml_sks;
}

