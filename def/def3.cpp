#include<iostream>

#define EGER if
#define DEGILSE else
#define VE &&
#define VEYA ||
#define BUYUK >
#define KUCUK <
#define MIN 1
#define MAX 100

using namespace std;

int main(int argc, char** argv){
	int sayi;
	cout<<"Bir sayi giriniz:";
	cin>>sayi;
	cout<<endl;
	
	EGER ((sayi KUCUK MIN) VEYA (sayi BUYUK MAX))
		cout<<sayi<<" sayisi "<<MIN<<" ile "<<MAX<<" arasinda degildir."<<endl;
	DEGILSE
		cout<<sayi<<" sayisi "<<MIN	<<" ile "<<	MAX	<<" arasindadir."<<endl;
		
	return 0;	
}
