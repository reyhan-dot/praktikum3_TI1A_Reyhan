#include <iostream>
using namespace std;
int main()
{
	int n;
	char pilihan; 
	cout << "Masukkan Jumlah baris:";//jumlah baris
		cin >> n;
		cout << " ";
	cout << "A/a= Angka | H/h = Huruf"<<endl;
	cout << "Huruf atau angka:";
		cin >> pilihan;

	for (int i = 0; i < n; i++){

		for (int k = 0; k < n - i; k++){ //untuk menata segitiga
			cout << " ";
		}

		int val = 1;   //nilai pertama
		for (int j = 0; j <= i; j++){

			if (pilihan == 'H' || pilihan == 'h') {
				char huruf = 'A' + (val - 1);
				cout << huruf << " ";
			}
			if (pilihan == 'a' || pilihan == 'A') {
				cout << val<<" ";
			}
			val = val * (i - j) / (j + 1);  //rumus segitiga

		}
		cout << endl;
		
	}
	return 0;
}
//time spend 1 hour