#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs;

	cout << "Masukkan NIM: ";
	cin >> mhs.nim;
	cout << "Masukkan Nama: ";
	cin >> mhs.nama;
	cout << "Alamat: " << endl;
	cout << "\tNama desa : ";
	cin >> mhs.alamat.desa;
	cout << "\tNama Kota : ";
	cin >> mhs.alamat.kota;
	cout << "Masukkan umur: ";
	cin >> mhs.umur;



}