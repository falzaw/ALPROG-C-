#include <iostream>
#include <math.h>
using namespace std;
float volume_kerucut(int t, float r, float phi){
	return 0.33*phi*pow(r,2)*t;
}
int main(){
	float phi=3.14;
	int t;
	float r,volume;
	
	cout<<"Tinggi kerucut : ";
	cin>>t;
	cout<<"Jari-jari kerucut : ";
	cin>>r;
	volume=volume_kerucut (t,r,phi);
	cout<<"Volume kerucut = "<<volume<<" cm^3";
}
