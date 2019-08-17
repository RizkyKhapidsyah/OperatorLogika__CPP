/*
	Operator Logika: not, and, or
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a = 3;
	int b = 2;
	bool Hasil;

	//not
	Hasil = !(a == 3);

	//and: Kedua nilai Benar, maka hasil True
	cout << "Untuk: and \n";
	Hasil = (a == 3) and (b == 2);					// true and true
	cout << Hasil << endl;
	Hasil = (a == 4) and (b == 2);					// false and true
	cout << Hasil << endl;
	Hasil = (a == 3) && (b == 3);					// true and false
	cout << Hasil << endl;
	Hasil = (a == 4) and (b == 3);					// false and false
	cout << Hasil << endl << "\n";

	//or: Jika salah satu nilai true, maka hasil True
	cout << "Untuk: or \n";
	Hasil = (a == 3) or (b == 2);					// true and true
	cout << Hasil << endl;
	Hasil = (a == 4) or (b == 2);					// false and true
	cout << Hasil << endl;
	Hasil = (a == 3) || (b == 3);					// true and false
	cout << Hasil << endl;
	Hasil = (a == 4) || (b == 3);					// false and false
	cout << Hasil << endl << "\n";

	_getch();
	return 0;
}
