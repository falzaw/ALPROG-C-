#include <iostream>
#include <math.h>
using namespace std;
int volume_kubus(int s){
	cout<<"Sisi yang ditentukan : "<<s<<" cm"<<endl;
	cout<<"Volume kubus = "<<pow(s,3)<<" cm^3"<<endl;
	
}
int main(){
	volume_kubus(4);
}
