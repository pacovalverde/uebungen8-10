/**
 * Schreiben Sie eine Funktion namens ggt, der Sie zwei positive ganze Zahlen �bergeben und die den gr��ten gemeinsamen Teiler
 * der beiden Zahlen zur�ckgibt. Der gr��te gemeinsame Teiler, abgek�rzt ggT, ist die gr��te Ganzzahl, durch die beide Zahlen
 * ohne Rest zu teilen sind. Der ggT von 6 und 12 ist 6, der ggT von 6 und 9 ist 3, der ggT von 11 und 13 ist, der ggT von 14 und 16 ist 2.
 * Die Ermittlung des ggTs ist f�r das K�rzen von Br�chen sehr interessant. Sie �bergeben der Funktion einfach Z�hler und
 * Nenner und schon erhalten sie den Wert, durch den Sie den Bruch k�rzen k�nnen.
 *
 * Schreiben Sie dazu eine passende main-Funktion, mit der Sie die Funktion �berpr�fen k�nnen.
 * �berlegen Sie sich, in welchem Fall es keinen ggT gibt und wie Sie dies, erkennen k�nnen. Ber�cksichtigen Sie dies in der main-Funktion,
 * indem Sie eine entsprechende Meldung ausgeben.
 *
 * Author : Paco Valverde
 * Datum  : 09.09.2019
 */

  
#include <iostream>

using namespace std;

int ggt(int zahl1, int zahl2)
{
	int groesstenTeiler, temp, mod;

	/*if(zahl1 < zahl2)
	{
		temp = zahl1;
		zahl1 = zahl2;
		zahl2 = temp;
	}*/

	mod = zahl2;
	do {
		zahl2 = mod;
		mod = zahl1 % zahl2;
		zahl1 = zahl2;
	} while(mod != 0);

	return zahl2;
}

int kgv(int zahl1, int zahl2, int groesstenTeiler)
{
	return (zahl1 * zahl2) / groesstenTeiler;
}

int main()
{
	int wert1, wert2, groesstenTeiler;

	cout << "Der gr��ten gemeinsamen Teiler ->" << endl;

	cout << "Bitte eingeben ein Wert (1) : ";
	cin >> wert1;
	cout << "Bitte eingeben ein Wert (2) : ";
	cin >> wert2;

	groesstenTeiler = ggt(wert1, wert2);

	cout << "Der groessten gemeinsamen Teiler ist " << groesstenTeiler << endl << endl;

	cout << "Der kleinste gemainsame Vizflache ist " << kgv(wert1, wert2, groesstenTeiler) << endl << endl;
}