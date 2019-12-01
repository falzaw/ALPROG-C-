#include <iostream>
#include <math.h>
using namespace std;
int volume_balok(int p, int l, int t){
	cout<<"Panjang yang ditentukan : "<<p<<" cm"<<endl;
	cout<<"Lebar yang ditentukan : "<<l<<" cm"<<endl;
	cout<<"Tinggi yang ditentukan : "<<t<<" cm"<<endl;
	cout<<"Volume balok = "<<p*l*t<<" cm^3";
}
int main(){
	volume_balok(3,2,4);
}
