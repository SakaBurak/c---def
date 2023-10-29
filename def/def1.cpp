#include<iostream>
#define KAREBUL(sayi) sayi*sayi

using namespace std;

int main(){
	int tamSayi=5;
	float ondalikSayi=8.32;
	int kare1=KAREBUL(tamSayi);
	float kare2=KAREBUL(ondalikSayi);
	
	cout<<tamSayi<<" sayisinin karesi:"<<kare1<<endl;
	cout<<ondalikSayi<<" sayisinin karesi:"<<kare2<<endl;
	
	return 0;
}
