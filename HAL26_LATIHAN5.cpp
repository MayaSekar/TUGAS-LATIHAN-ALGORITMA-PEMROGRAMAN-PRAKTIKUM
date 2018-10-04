#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;		

int main() 
{
		//Deklarasi Variable
		int Tot_Beli,Jum_Bayar,Potongan;
	
		Jum_Bayar=0; cout<<"Total Pembelian Rp."; cin>>Tot_Beli;
		if (Tot_Beli >=50000)
		Potongan = 0.2 * Tot_Beli;
	else
		Potongan = 0.05 * Tot_Beli; cout<<"Besarnya Potongan Rp."
		<<Potongan<<endl; Jum_Bayar = Tot_Beli - Potongan;
		
		cout<<"Jumlah yang harus dibayarkan Rp.", Jum_Bayar;
		getch ();
		return 0;
}
