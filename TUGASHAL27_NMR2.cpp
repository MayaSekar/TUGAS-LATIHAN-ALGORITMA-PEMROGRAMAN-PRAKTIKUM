#include <stdio.h>
#include <conio.h>
#include <iostream>
	
		using namespace std;

int main ()
{
	//Deklarasi Variable
	int Suhu,NilaiX ;
	
	//Input Tampilan
	cout<<" Masukkan Suhu : " ; cin>>Suhu ;
	cout<<" Masukkan Nilai X : " ; cin>>NilaiX ;
	cout<<endl ;
	
	//Perhitungan Variable
	if (( Suhu > NilaiX )) cout<<"Suhu Panas" ;
	
	if (( Suhu <= NilaiX )) cout<<"Suhu Dingin" ;
	
	return 0 ;

}
	
	
