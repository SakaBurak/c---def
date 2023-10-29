#include<iostream>
#define MAX 10

using namespace std;

int main(int argc, char**argv){
	cout<<MAX<<endl;
	#undef MAX
	cout<<MAX<<endl;
	
	return 0;
}
