#include<iostream>
#include<string.h>
#define ISLETIM_SISTEMI_LINUX

using namespace std;

int main(int argc, char** argv){
	char logDizini[50];
	#ifdef ISLETIM_SISTEMI_WINDOWS
	strcpy(logDizini,"C:\\logs");
	#elif defined(ISLETIM_SISTEMI_LINUX)
	strcpy(logDizini,"/var/log");
	#else
	strcpy(logDizini,"loglar");
	#endif
	cout<<"Log dizini:"<<logDizini;
	return 0;
}
