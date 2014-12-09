// HARJOITUS 17
// Harri Vastamäki
// IIOS14S1

#include <iostream>
using namespace std;

struct HENKTIED
{
	char etunimet[20];
	char sukunimi[20];
	char osoite[20];
	float koulumatka;
	int postinro;
	int	kenka;
};

void main()
{
	HENKTIED henkilo[4] = { { "Jaakko", "Papu", "Pavunvarsi 2", 8, 55600, 50 },
							{ "Hanna", "Herhilainen", "Ampparipolku 22", 12, 23445, 21 } };

	cout << "Anna etunimet: " << endl;
	cin.get(henkilo[2].etunimet, 20);
	cout << "Anna sukunimi: " << endl;
	cin.get();
	cin.get(henkilo[2].sukunimi, 20);
	cout << "Anna osoite: " << endl;
	cin.get();
	cin.get(henkilo[2].osoite, 20);
	cout << "Anna koulumatka: " << endl;
	cin >> henkilo[2].koulumatka;
	cout << "Anna postinumero: " << endl;
	cin >> henkilo[2].postinro;
	cout << "Anna kengannumero: " << endl << endl;
	cin >> henkilo[2].kenka;

	if (henkilo[0].koulumatka > henkilo[1].koulumatka)
	{
		henkilo[3] = henkilo[0];
		henkilo[0] = henkilo[1];
		henkilo[1] = henkilo[3];
	}
	if (henkilo[0].koulumatka > henkilo[2].koulumatka)
	{
		henkilo[3] = henkilo[0];
		henkilo[0] = henkilo[2];
		henkilo[2] = henkilo[3];
	}
	if (henkilo[1].koulumatka > henkilo[2].koulumatka)
	{
		henkilo[3] = henkilo[1];
		henkilo[1] = henkilo[2];
		henkilo[2] = henkilo[3];
	}

	cout << henkilo[0].etunimet << " " << henkilo[0].sukunimi << endl;
	cout << henkilo[0].osoite << endl;
	cout << henkilo[0].postinro << endl;
	cout << henkilo[0].kenka << " " << henkilo[0].koulumatka << endl << endl;

	cout << henkilo[1].etunimet << " " << henkilo[1].sukunimi << endl;
	cout << henkilo[1].osoite << endl;
	cout << henkilo[1].postinro << endl;
	cout << henkilo[1].kenka << " " << henkilo[1].koulumatka << endl << endl;

	cout << henkilo[2].etunimet << " " << henkilo[2].sukunimi << endl;
	cout << henkilo[2].osoite << endl;
	cout << henkilo[2].postinro << endl;
	cout << henkilo[2].kenka << " " << henkilo[2].koulumatka << endl;
}