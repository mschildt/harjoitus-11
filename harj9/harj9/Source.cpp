/*	Työn nimi: Harjoitus 11
	Tekijän nimi: Mikael Schildt
	
	Työn kuvaus:

	Muuta tehtävän 9 laskin-ohjelmaa niin, etta valikko nayttaa
seuraavalta:

VALIKKO
0. Lopetus
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos
6. Syota uudet luvut laskemista varten

Laskimella on siis mahdollista käsitellä
useita lukupareja käyttäjän toiveiden
mukaisesti. Mita tapahtuu, jos luku2 on 0?
HUOM! goto -lauseen käyttä on KIELLETTY!!!!

*/

#include <iostream>
using namespace std;


int main()
{
	int luku1;
	int luku2;
	int valinta;
	int summa;
	int erotus;
	int tulo;
	int osamaara;
	int jakojaannos;
	int lopetus;
	lopetus = 1;

	cout << "Syota kokonaisluku: \n";
	cin >> luku1;
	cout << "Syota toinen kokonaisluku: \n";
	cin >> luku2;

		while (lopetus > 0)
		{
		cout << "VALIKKO\n0. Lopetus\n1. Summa\n2. Erotus\n3. Tulo\n4. Osamaara\n5. Jakojaannos\n6. Syota uudet luvut laskemista varten\n";
		cin >> valinta;
			switch (valinta)
			{
			case 0:
				cout << "\nLopetus \n";
				lopetus = 0;
				break;
			case 1:
				summa = luku1 + luku2;
				cout << "\nTulos on " << summa << "\n";
				break;
			case 2:
				erotus = luku1 - luku2;
				cout << "\nTulos on " << erotus << "\n";
				break;
			case 3:
				tulo = luku1 * luku2;
				cout << "\nTulos on " << tulo << "\n";
				break;
			case 4:
				osamaara = luku1 / luku2;
				cout << "\nTulos on " << osamaara << "\n";
				break;
			case 5:
				jakojaannos = luku1 % luku2;
				cout << "\nTulos on " << jakojaannos << "\n";
				break;
			case 6:
				cout << "Syota uusi kokonaisluku: \n";
				cin >> luku1;
				cout << "Syota toinen uusi kokonaisluku: \n";
				cin >> luku2;
				break;
			default: cout << "\nVirheellinen valinta\n";
				break;
			}
			cout << "\n";
		}
		
}