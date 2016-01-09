#include<iostream>
using namespace std;


int main()
{
	int sayi,derssayisi=0,i,kredi=0,toplamkredi=0;
	double gabno,donem,yano;
	string nota;
	char con;
	cout<<"						Gelistiren Anil Taha Uyar...\n";

	cout<<"Merhaba hosgeldiniz\n";
	cout<<"Oncelikle sistemi anlatayim \n";
	cout<<"Not sistemini A B1 B2 B3 C1 C2 C3 F1 F2 ve kusuratli sayilari nokta ile yaziniz 2.65 gibi ve verilenin disina cikmayin uyari yok hesaplamaz\n";
	
		
		cout<<"Bu donem kac ders aldiniz \n";
		cin>>derssayisi;
		for(i=0;i<derssayisi;i++){
			cout<<"Dersinizin kredisini ve notunu yaziniz(Ornek 3 A)\n";
			cin>>kredi>>nota;
			toplamkredi+=kredi;
			if(nota=="A")
				donem+=kredi*4.00;
			else if(nota=="B1")
				donem+=kredi*3.50;
			else if(nota=="B2")
				donem+=kredi*3.25;
			else if(nota=="B3")
				donem+=kredi*3.00;
			else if(nota=="C1")
				donem+=kredi*2.75;
			else if(nota=="C2")
				donem+=kredi*2.5;
			else if(nota=="C3")
				donem+=kredi*2.00;
			else if(nota=="F1")
				donem+=kredi*1.50;
			else if(nota=="F2")
				donem+=kredi*0;
			
			
		}
	cout<<"Genel ortalama hesaplamak istiyormusunuz(y/n)\n";
	cin>>con;
	if(con=='y'){
		cout<<"Bu donem harici kredi sayinizi giriniz\n";
		cin>>sayi;
		cout<<"Ortalamanizi(GABNO) yu giriniz \n";
		cin>>gabno;
		yano=donem/toplamkredi;
		gabno=((gabno*sayi)+(yano*toplamkredi))/(toplamkredi+sayi);
		cout<<"Yano= "<<yano<<" Gabno= "<<gabno;
	}
		else{
		
		yano=donem/toplamkredi;
			cout<<"Yano= "<<yano;
}
	
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

