#include <iostream>
#include <conio.h>		// getch() fonk.u icin.
//SEMIH
using namespace std;
int main(){
	int sayi1, sayi2, temp1, temp2, carpim=0;
	cout << "Birinci sayiyi giriniz : ";		// Sayilar giriliyor
	cin >> sayi1;
	system("cls");	// Ekran temizleme
	temp1=sayi1;
	cout << "Ikinci sayiyi giriniz : ";
	cin >> sayi2;
	system("cls");
	temp2=sayi2;
	if (sayi1<=0)	temp1*=-1;
	if (sayi2<=0)	temp2*=-1;
	for(int i=1; i<=temp2; i++){
		carpim+=temp1;
	}
	if (sayi1<0 || sayi2<0){
		cout << "(" << sayi1 << ")" << " * " << "(" << sayi2 << ")" << " = " << (-1)*carpim << endl;
		return 0;
	}
	cout << sayi1 << " * " << sayi2 << " = " << carpim << endl;	
	getch();	// Bir tusa basildiginda ancak devam etsin
	return 0;	// Kapat
}
