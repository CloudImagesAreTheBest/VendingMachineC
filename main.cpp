
#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
// KeMay >>>
#include <stdio.h>
#include<stdlib.h>
// KeMay <<<
#include<string>

using namespace std;

// Funktion Deklaration
int Pruefziffer();
void Benutzeroberflaeche();
int Auswahl();
float fEingabe(string,int);
int iEingabe(string,int);
int CharPointerToInt(char);

int main()
{

	Pruefziffer();
	Benutzeroberflaeche();
	Auswahl();


	return 0;
}



//  Pruefziffer() muesste noch mit einer Bedingung versehen werden - wenn die errechnete Pruefziffer nicht mit der eingegebenen uebereinstimmt muesste das Programm
//  abbrechen, Ist sehr banal codiert -> ohne Array

//  Auswahl() ist noch fehlerhaft von der Logik - ich wusste nicht genau, was wir machen wollen, wenn wir etwas anderes eingeben, als vorgegebene cases



/*
//  Ungefährer Aufbau ??
Pruefziffer();
Benutzeroberflaeche();
Auswahl();
Muenzeinwurf();
//Frage ob eigener Tasse oder Plastikbecher -> Aufpreis
//Frage ob noch ein Becher gewünscht ist oder ob Restgeld ausgegeben werden soll
//ggf neue Auswahl über die Oberfläche und Auswahl
Oberfläche();
Restgeldausgabe();
Getränkeausgabe();
*/


// Erster Versuch Geldeinwurf - Muesste aber mit Do-While mehr Sinn machen -> so wie jetzt funktionierts noch nicht bis jetzt noch keine weitere Zeit gehabt


double dGeldEinwurf(double Geldforderung)
{// Fertig
	int Kategorie = 0;
	double Muenzwert = 0.0;
	while (Geldforderung <= Muenzwert)
	{
		switch (Kategorie)
		{
		case 1:
			Muenzwert = Muenzwert + 0.01;
			break;
		case 2:
			Muenzwert = Muenzwert + 0.02;
			break;
		case 3:
			Muenzwert = Muenzwert + 0.05;
			break;
		case 4:
			Muenzwert = Muenzwert + 0.10;
			break;
		case 5:
			Muenzwert = Muenzwert + 0.20;
			break;
		case 6:
			Muenzwert = Muenzwert + 0.50;
			break;
		case 7:
			Muenzwert = Muenzwert + 1.00;
			break;
		case 8:
			Muenzwert = Muenzwert + 2.00;
			break;
		default:
			cout << endl << "Falsche Eingabe" << endl;
			break;

		}

	}
	return Muenzwert;
}

//Funktionen Pruefziffer, Benutzeroberflaeche und Auswahl


int Pruefziffer()
{//Todo -> Eingabe begrenzen
	int Erste = 0, Zweite = 0, Dritte = 0, Vierte = 0, Fuenfte = 0, Sechste = 0, Pruef = 0, Ergebnis_1 = 0, Ergebnis_2 = 0, Ergebnis_3 = 0,
		Ergebnis_4 = 0, Ergebnis_5 = 0, Ergebnis_6 = 0, ErgebnisSumme = 0, Modulo = 0, Pruefzahl = 0;
    int iWeiter = 0;

	do
	{// String -> ABCD  -> |A|B|C|D|\0|
     
		cout << "Bitte geben Sie Ihre 7-stellige Kundennummer ein" << endl;

		char cKundennummer[7] = "";
//		cin >> setw(7) >> cKundennummer;
		// TEST
		int i=1;
		while (cKundennummer[i-1]!=EOF)
		{
			cKundennummer[i] = getchar();
			i++;
		}
		// GLPI >>>
		CharPointerToInt(cKundennummer[0]);
		// GLPI <<<
		cout << Pruef;

		
        Erste = CharPointerToInt(cKundennummer[0]);
        Zweite = CharPointerToInt(cKundennummer[1]);
        Dritte = CharPointerToInt(cKundennummer[2]);
        Vierte = CharPointerToInt(cKundennummer[3]);
        Fuenfte = CharPointerToInt(cKundennummer[4]);
        Sechste = CharPointerToInt(cKundennummer[5]);
		Pruef = CharPointerToInt(cKundennummer[6]);
		
        Ergebnis_1 = Erste * 7;
        Ergebnis_2 = Zweite * 6;
        Ergebnis_3 = Dritte * 5;
        Ergebnis_4 = Vierte * 4;
        Ergebnis_5 = Fuenfte * 3;
        Ergebnis_6 = Sechste * 2;

        ErgebnisSumme = Ergebnis_1 + Ergebnis_2 + Ergebnis_3 + Ergebnis_4 + Ergebnis_5 + Ergebnis_6;
        Modulo = ErgebnisSumme % 10;
        Pruefzahl = 10 - Modulo;
        // PIGLIC >>>
        cout << Pruefzahl;
        if ((10 - Pruef) == Pruefzahl)
         {
             system("cls");
             iWeiter = 0;
         } else {
            cout <<endl<< "Falsche Eingabe bitte erneut eingeben" << endl;
            iWeiter = 1;
         }
        // PIGLIC <<<
        }while(iWeiter == 1);
	return Pruefzahl;
}
void Benutzeroberflaeche()
{//Fertig

	cout << endl << "#############################################################################" << endl
		<< "# ------------------------------------------------------------------------- #" << endl
		<< "#|                     BITTE WAEHLEN SIE EINE SORTE AUS!                   |#" << endl
		<< "# ------------------------------------------------------------------------- #" << endl
		<< "#############################################################################" << endl

		<< " ___________________________________________________________________________ " << endl
		<< "| [1] Kaffee         |     [2] Cappuchino      |     [3]  Latte Macchiato   |" << endl
		<< "|--------------------|-------------------------|----------------------------|" << endl
		<< "| [4] schwarzer Tee  |     [5] Fruechtetee     |     [6]  Gemuesebruehe     |" << endl
		<< "|___________________________________________________________________________|" << endl
		<< endl
		<< "                    #############################" << endl
		<< "                    #                           #" << endl
		<< "                    #           / / /           #" << endl
		<< "                    #      _____\\ \\ \\___        #" << endl
		<< "                    #     /     / / /   \\       #" << endl
		<< "                    #     \\_____________/_      #" << endl
		<< "                    #      \\           // \\     #" << endl
		<< "                    #       \\         / \\_/     #              " << endl
		<< "                    #        \\_______/          #                       " << endl
		<< "                    #                           #                " << endl
		<< "                    #############################                   " << endl;


}

int Auswahl()
{

	int Kategorie1 = 0, Geldforderung = 0;
// PiGlic >>>
// char Katergorie2 = 0;
	char Kategorie2 = '0';
// PiGlic <<<
	cin >> Kategorie1;

	switch (Kategorie1)
	{
	case 1:
	{
		cout << "[1] Kaffeeoptionen" << endl;
		cout << "##############################################################################" << endl
			<< "#         s=schwarzer Kaffee z=Zucker, m=Milch, b=Zucker und Milch           #" << endl
			<< "#           \"Jede andere Taste fuehrt zum Abbruch und Neustart\"              #" << endl
			<< "##############################################################################" << endl;
		cin >> Kategorie2;

		switch (Kategorie2)
		{
		case 's':
		{
			cout << "Schwarzer Kaffee = 70 Cent" << endl
				<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf" << endl;

			Geldforderung = Geldforderung + 70;
		} break;

		case 'z':
		{
			cout << "Kaffee mit Zucker = 80 Cent" << endl
				<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf" << endl;

			Geldforderung = Geldforderung + 80;
		} break;

		case 'm':
		{
			cout << "Kaffee mit Milch = 80 Cent" << endl
				<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf";
			Geldforderung = Geldforderung + 80;
		} break;

		case 'b':
		{
			cout << "Kaffee mit Zucker und Milch = 90 Cent" << endl
				<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf";

			Geldforderung = Geldforderung + 90;
		} break;

		default: cout << "\"Zurueck zum Hauptmenue\"" << endl;
		} break;
	}

	case 2:
	{

		cout << "[2] Cappuchino kostet 75 Cent" << endl
			<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf" << endl;

		Geldforderung = Geldforderung + 75;
	} break;

	case 3:
	{
		cout << "[3] Latte Macchiato kostet 85 Cent" << endl
			<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf" << endl;

		Geldforderung = Geldforderung + 85;
	} break;

	case 4:
	{
		cout << "[4] schwarzer Tee kostet 70 Cent" << endl
			<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf" << endl;

		Geldforderung = Geldforderung + 70;
	} break;

	case 5:
	{
		cout << "[5] Fruechtetee kostet 70 Cent" << endl
			<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf" << endl;

		Geldforderung = Geldforderung + 70;
	} break;

	case 6:
	{
		cout << "[6] Gemuesebruehe kostet 95 Cent" << endl
			<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf" << endl;

		Geldforderung = Geldforderung + 95;
	} break;

	default: cout << "Sie haben eine falsche Taste gedrueckt";

	}


	return Geldforderung;
}

int iEingabe(string sPuffer,int iLength)
{
    int iPuffer = 0;
    if(sPuffer != "X")
    {
      cout << "Bitte geben sie den Wert von" << sPuffer << "ein" << endl;
    }
    cin >> setw(iLength) >> iPuffer;
    return iPuffer;
}

float fEingabe(string sPuffer, int iLength)
{
    float fPuffer = 0.0;
    if(sPuffer != "X")
    {
      cout << "Bitte geben sie den Wert von" << sPuffer << "ein" << endl;
    }
    cin >> setw(iLength) >> fPuffer;
    return fPuffer;
}

char cEingabe()
{
    char cPuffer = 'a';
    cin >> cPuffer;
    return cPuffer;
}

int CharPointerToInt(char cZeichen)
{
	switch (cZeichen)
	{
	case '1':
			return 1;
			break;
		case '2':
			return 2;
			break;
		case '3':
			return 3;
			break;
		case '4':
			return 4;
			break;
		case '5':
			return 5;
			break;
		case '6':
			return 6;
			break;
		case '7':
			return 7;
			break;
		case '8':
			return 8;
			break;
		case '9':
			return 9;
			break;
		case '0':
			return 0;
			break;
	}
}