#include<iostream>
#define LOGLAMA

int faktoriyelHesapla(int sayi);

using namespace std;

int main(int argc, char** argv){
	int sayi=0;
	cout<<"faktoriyeli hesaplanacak sayiyi giriniz:";
	cin>>sayi;
	cout<<endl;
	cout<<"sonuc:"<<faktoriyelHesapla(sayi);
	return 0;
}

int faktoriyelHesapla(int sayi){
	if(sayi<=1)
	return 1;
	
	long i, sonuc=1;
	for(i=1;i<=sayi;i++){
		#ifdef LOGLAMA
		sonuc=sonuc*i;
		cout<<i<<" = "<<sonuc<<endl;
		#else
		sonuc=sonuc*i;
		#endif
	}
	return sonuc;
}
