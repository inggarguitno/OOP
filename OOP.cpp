
#include <iostream>
using namespace std;
class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
		cout << "nama= " << nama;

	}

	class Matakuliah {
	private:
		int sks;
		string kode;
		string namaMK;
	public:
		void inputMK() {
			cout << "\nMasukan jumlah SKS= ";
			cin >> sks;
			cout << "\nMasukan kode MK= ";
			cin >> kode;
			cout << "\nMasukan Nama MK= ";
			cin >> namaMK;

		}

		void tampilMK() {
			cout << "\njumlah sks= " << sks;
			cout << "\nkode mk= " << kode;
			cout << "\nnama mk= " << namaMK << endl;

		};
	};

	int main() {
		Mahasiswa mhs1;
		Matakuliah mk;

		cout << "Masukan nim = ";
		cin >> mhs1.nim;
		cout << "Masukan nama = ";
		cin >> mhs1.nama;

		mk.inputMK();
		mhs1.tampil();
		mk.tampilMK();

	};
};

