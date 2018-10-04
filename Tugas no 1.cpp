//Ipung Fachrizal 5170411167 Informatika C

#include <iostream>
#include <conio.h>

using namespace std;
int n;

main(){
	int array[n];
	float nilai,jumlah=0,avg;
	cout<<"Input banyak nilai : ";
	cin>>nilai;
	
	for (int x=1;x<=nilai;x++){
		cout<<"Masukkan nilai ke - "<<x<<" :";
		cin>>array[n];
		jumlah+=array[n];
	}
	
		avg=jumlah/nilai;
cout<<"Rata rata nilai :"<<avg<<endl;
getch();
}
