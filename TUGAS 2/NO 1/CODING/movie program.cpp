#include <iostream>
#include <stdlib.h>
#include <conio.h>
 

using namespace std;

struct mov_t{
	char title [50];
	char year [50];
};
mov_t jdl,th;
void printmov(mov_t mov);
int main(){
	top:
	int n,a,no,pil;
	cout<<"=============="<<endl;
	cout<<"MOVIE PROGRAM"<<endl;
	cout<<"=============="<<endl;
	cout<<"1. Masukan data"<<endl;
	cout<<"2. Tampil data"<<endl;
	cout<<"3. Keluar"<<endl;
	cout<<" "<<endl;
	cout<<"Pilih : ";cin>>pil;
	switch(pil){
	case 1:
	cout<<"Masukkan banyaknya data : ";cin>>a;
	for(int i=1;i<=a;i++){
		cout<<"Data ke - "<<i<<endl;
		cout<<"------------"<<endl;
		cout<<"Masukkan judul film : ";
	fflush(stdin);	gets(jdl.title);
		cout<<"Masukkan tahun : ";
	fflush(stdin);	gets(th.year);
	
	}
	getch();
	goto top;
	case 2:
		for(int i=1;i<=a;i++){
		cout<<"Data ke -"<<i<<endl;
		cout<<"Judul film : "<<jdl.title<<endl;
		cout<<"Tahun : "<<jdl.year<<endl;
	}
	getch();
	goto top;
	case 3:
		cout<<"Terimakasih!"<<endl;
		
		break;

}	
}
