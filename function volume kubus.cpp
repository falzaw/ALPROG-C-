#include <iostream>
#include <math.h>
using namespace std;
int volume_kubus(int s){
	return pow(s,3);
}
int main(){
	int s,volume;
	cout<<"Sisi yang ditentukan : ";
	cin>>s;
	volume=volume_kubus (s);
	cout<<"Volume kubus = "<<pow(s,3)<<" cm^3";
	
}
