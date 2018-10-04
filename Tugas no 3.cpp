//Ipung Fachrizal 5170411167 Informatika C

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

main(){
	char nm[100];
	cout<<"Masukkan suatu kata : ";
	cin>>nm;
	int p=strlen(nm);
	for(p;p>0;p--){
		for(int b=0;b<p;b++){
			cout<<nm[b];
		}
		cout<<endl;
	}
	getch();
}
