//Ipung Fachrizal 5170411167 Informatika C

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int n;
int main(){
	int nilai;
	float array[n],s_e2,varian,jumlah=0,jumlah_2;
	cout<<"Input banyak nilai :  ";cin>>nilai;
	for (float i=0; i<nilai;i++){
		cout<<"Masukkan nilai ke - "<<i+1<<" = ";cin>>array[n];
		s_e2+=(pow(array[n], 2)); 
		jumlah+=array[n];
	}
	jumlah_2=pow(jumlah, 2);
	varian=((nilai*s_e2)-jumlah_2)/(nilai*(nilai-1));
	cout<<"standar Devisiasi= "<<sqrt(varian)<<endl;
getch();
}
