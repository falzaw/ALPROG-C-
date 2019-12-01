#include <iostream>
using namespace std;
int main(){
	int p=4;
	int l=5;
	int t=7;
	int v=p*l*t;
	
	if(v<=100){
		cout<<"balok kecil";
		cout<<"\n";
	}else if (v>100 && v<=200){
		cout<<"balok sedang";
		cout<<"\n";
	}else if (v>=200){
		cout<<"Balok besar";
	}cout<<v<<"cm^3";
}
