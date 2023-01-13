/*Klavyeden girilen bir tamsayiyi yaziyla yazan program */

#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "1-999 arasinda bir sayi giriniz :" ;
	cin >> x;

	if (x >= 1 && x <= 999) {
		switch (x/100) {
		case 0: cout << "" << endl;
			break;
		case 1: cout << "yuz" << endl;
			break;
		case 2: cout << "ikiyuz" << endl;
			break;
		case 3: cout << "ucyuz" << endl;
			break;
		case 4: cout << "dortyuz" << endl;
			break;
		case 5: cout << "besyuz" << endl;
			break;
		case 6: cout << "altıyuz" << endl;
			break;
		case 7: cout << "yedıyuz" << endl;
			break;
		case 8: cout << "sekızyuz" << endl;
			break;
		case 9: cout << "dokuzyuz" << endl;
			break;

		}
		switch ((x/10)%10) {
		case 0: cout << "" << endl;
			break;
		case 1: cout << "on" << endl;
			break;
		case 2: cout << "yirmi" << endl;
			break;
		case 3: cout << "otuz" << endl;
			break;
		case 4: cout << "kirk" << endl;
			break;
		case 5: cout << "elli" << endl;
			break;
		case 6: cout << "altmis" << endl;
			break;
		case 7: cout << "yetmis" << endl;
			break;
		case 8: cout << "seksen" << endl;
			break;
		case 9: cout << "doksan" << endl;
			break;

		}
		switch ((x % 100)%10) {
		case 0: cout << "" << endl;
			break;
		case 1: cout << "bir" << endl;
			break;
		case 2: cout << "iki" << endl;
			break;
		case 3: cout << "uc" << endl;
			break;
		case 4: cout << "dort" << endl;
			break;
		case 5: cout << "bes" << endl;
			break;
		case 6: cout << "alti" << endl;
			break;
		case 7: cout << "yedi" << endl;
			break;
		case 8: cout << "sekiz" << endl;
			break;
		case 9: cout << "dokuz" << endl;
			break;
		
		}
	 }
	else {
		cout << "aralik disi secim yapilmistir." << endl;
	}


	system("pause");
	return 0;
}


