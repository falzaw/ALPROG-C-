#include <iostream>
#include <math.h>
using namespace std;
float volume_kerucut(int t, float r){
	float phi=3.14;
	
	cout<<"Tinggi yang ditentukan : "<<t<<" cm"<<endl;
	cout<<"Jari-jari : "<<r<<" cm"<<endl;
	cout<<"Volume kerucut = "<<0.33*pow(r,2)*phi*t<<" cm^3"<<endl;
}
int main(){
	volume_kerucut(8,5);
}
