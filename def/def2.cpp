#include<iostream>
#define MAX(x,y)(x)<(y)?(y):(x)

using namespace std;

int main(int argc, char** argv){
	int sayi1=0, sayi2=0;
	cout<<"Birinci sayiyi giriniz:";
	cin>>sayi1;
	cout<<endl;
	
	cout<<"ikinci sayiyi giriniz:";
	cin>>sayi2;
	cout<<endl;
	
	int buyukSayi=MAX(sayi1,sayi2);
	cout<<"Girdiginiz sayilardan buyuk olani "<< buyukSayi<<endl;
	
	return 0;
}
