#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {} virtual float
		Luas(int a) { return 0; } virtual float
		Keliling(int a) { return 0; } virtual float
		cekUkuran() { return 0; }
	void setX(int a) {
		this->x = a;
	}
	int getX() { return x; }
	
void setY(int b) {
		this->y = b;
	}
	int getY() { return y; }
};
class Lingkaran : public bidangDatar {
public:
	int r;
	Lingkaran() :
		bidangDatar() {
		cout << "Lingkaran dibuat" << endl;
	}
	void input() {
		cout << "Masukan jejari :" << endl;
		cin >> r;
		setX(r);
	}
	double Luas() {
		int r = getX();
		return 3.14 * r * r;
	}
	double Keliling() {
		int r = getX();
		return 2 * 3.14 * r;
	}
};
class Persegipanjang :bidangDatar {
public:
	int p;
	int l;
	Persegipanjang() :
		bidangDatar() {
		cout << "\nPersegi panjang dibuat" << endl;
	}
	void input() {
		cout << "Masukan panjang :" << endl;
		cin >> p;
		setX(p);
		cout << "Masukan lebar :" << endl;
		cin >> l;
		setY(l);
	}
	float Luas() {
		int p = getX();
		int l = getY();
		return p* l;
	}
	float Keliling() {
		int p = getX();
		int l = getY();
		return 2 * (p + l);
	}
};
int main() {
	Lingkaran L;
	L.input(); 
	cout << "Luas Lingkaran =" << L.Luas() << "\nKeliling Lingkaran =" << L.Keliling() << endl;
	{if (L.Keliling() > 40) {
		cout << "Ukuran Lingkaran adalah besar" << endl;
		
	}
	if (L.Keliling() > 20) {
		cout << "Ukuran Lingkaran adalah sedang" << endl;
		
	}
	else(L.Keliling() < 10); {
		cout << "Ukuran Lingkaran adalah kecil" << endl;
		}
	}
	Persegipanjang P;
	P.input();
	cout << "Luas Persegi Panjang =" << P.Luas() << "\nKeliling Persegi Panjang =" << P.Keliling() << endl;
	{if (P.Keliling() > 40) {
		cout << "Ukuran Persegi panjang adalah besar" << endl;
		}
	if (P.Keliling() > 20) {
		cout << "Ukuran Persegi panjang adalah sedang" << endl;
		}
	else(P.Keliling() < 10); {
		cout << "Ukuran Persegi panjang adalah kecil" << endl;
		}

		
	}
	return 0;
}