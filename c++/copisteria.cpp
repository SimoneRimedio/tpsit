#include<iostream>
using namespace std;

int main ()
{

int nfoto,tessera;
float costo,costoScontato,sconto;
char cognome;

cout<<"Inserire cognome"<<endl;
cin>>cognome;
cout<<"Inserire il numero delle fotocopie che si desiderano"<<endl;
cin>>nfoto;
cout<<"Inserire 1 se si possiede la tessera, 0 se non la si possiede"<<endl;
cin>>tessera;

if (nfoto >= 301)
{
	costo = nfoto * 0.03;
	cout<<costo;
}
else
{
	if (nfoto >= 201)
	{
		costo = nfoto * 0.05;
		cout<<costo;
	}
	else
	{
		if (nfoto >= 101)
		{
			costo = nfoto * 0.07;
			cout<<costo;
		}
		else 
		{
			if (nfoto >= 1)
			{
				costo = nfoto * 0.10;
				cout<<costo;
			}
			else 
			{
				cout<<"Inserire un numero più grande di 0";
			}
		}
	}
}

if (tessera == 1)
{
	sconto = costo*10/100;
	costoScontato= costo - sconto;
	
	cout<<"gentile signore" cognome "il costo delle sue fotocopie è "
}






}
