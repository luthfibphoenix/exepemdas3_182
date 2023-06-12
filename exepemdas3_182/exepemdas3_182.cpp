#include <iostream>
using namespace std;


class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui 
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar { 
	/*lengkapi disini*/ 
public:
	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "\nMasukan Jejari: " << endl;
		int r;
		cin >> r; 
		setX(r); 
	}
	float Luas() {
		int r = getX();
		return 3.14 * r * r;
	}
	float Keliling() {
		int r = getX();
		return 2 * 3.14 * r;
	}
};
class Bujursangkar :public bidangDatar { 
	/*lengkapi disini*/ 
public:
	void input() { 
		cout << "Bujursangkar dibuat" << endl;
		cout << "\nMauskan Sisi: " << endl;
		int s;
		cin >> s;
		setX(s);
	}
	float Luas() {
		int s = getX();
		return s * s;
	}
	float Keliling() {
		int s = getX();
		return 4 * s;
	}
};
int main() { /*lengkapi disini*/ 
	
	Lingkaran lingkaran;
	lingkaran.input();
	cout << "luas lingkaran = " << lingkaran.Luas() << "\nKeliling lingkaran = " << lingkaran.Keliling() << endl;

	Bujursangkar BujurSangkar;
	BujurSangkar.input();
	cout << "Luas bujursangkar = " << BujurSangkar.Luas() << "\nKeliling bujunrsangkar = " << BujurSangkar.Keliling() << endl;

	return 0;

}