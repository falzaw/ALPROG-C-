#include <iostream>
#include <math.h>
using namespace std;
int volume_balok(int p, int l, int t){
	return p*l*t;
}
int main(){
	int p,l,t,volume;
	cout<<"Panjang balok : ";
	cin>>p;
	cout<<"Lebar balok : ";
	cin>>l;
	cout<<"Tinggi balok : ";
	cin>>t;
	volume=volume_balok (p,l,t);
	cout<<"Volume balok = "<<volume<<" cm^3";
}
