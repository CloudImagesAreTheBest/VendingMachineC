#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
#include<string>


using namespace std;

// Funktion Deklaration
int Pruefziffer();
void Benutzeroberflaeche();
double Auswahl();
float fEingabe(string,int);
int iEingabe(string,int);
int CharPointerToInt(char);
void CoinOutput(double);
int CalcRestCoin(int,int &);
double dGeldEinwurf(double);
void OutputItem(string);
void vCloseApplication();


int main()
{
	double dPuffer=0.0;
	
	while(true) 
	{// always true because a real vending machine would never stop it´s program.
		Pruefziffer();
		Benutzeroberflaeche();
		dPuffer = Auswahl();
		dPuffer = dGeldEinwurf(dPuffer);
		CoinOutput(dPuffer);
		OutputItem("X");
		vCloseApplication();
	}


	return 0;
}


double dGeldEinwurf(double Geldforderung)
{
	int iInput = 0;
	double Muenzwert = 0.0;
	cout << "------- SIMULATION------" << endl;
	cout << "1 = 1 Cent"<<endl<<"2 = 2 Cent"<<endl<<"3 = 5 Cent"<<endl<<"4 = 10 Cent"<<endl<<"5 = 20 Cent"<<endl<<"6 = 50 Cent"<<endl<<"7 = 1 Euro"<<endl<<"8 = 2 Euro"<<endl;
	while (Geldforderung >= Muenzwert)
	{
		
		fflush(stdin);
		cin >> iInput;
		switch (iInput)
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
	cout <<endl<< "Sie haben " << Muenzwert << " eingeworfen."<<endl;
	Muenzwert = Muenzwert - Geldforderung;
	return Muenzwert;
}

//Funktionen Pruefziffer, Benutzeroberflaeche und Auswahl


int Pruefziffer()
{
	int Erste = 0, Zweite = 0, Dritte = 0, Vierte = 0, Fuenfte = 0, Sechste = 0, Pruef = 0, Ergebnis_1 = 0, Ergebnis_2 = 0, Ergebnis_3 = 0,
		Ergebnis_4 = 0, Ergebnis_5 = 0, Ergebnis_6 = 0, ErgebnisSumme = 0, Modulo = 0, Pruefzahl = 0;
    int iWeiter = 0;

	do
	{
     
		cout << "Bitte geben Sie Ihre 7-stellige Kundennummer ein" << endl;

		char cKundennummer[7] = "";
		fflush(stdin);
		cin >> cKundennummer;
		
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
        
        cout << Pruefzahl;
        if ((10 - Pruef) == Pruefzahl)
         {
             system("cls");
             iWeiter = 0;
         } else {
            cout <<endl<< "Falsche Eingabe bitte erneut eingeben" << endl;
            iWeiter = 1;
         }

        }while(iWeiter == 1);
	return Pruefzahl;
}
void Benutzeroberflaeche()
{

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

double Auswahl()
{

	int Kategorie1 = 0;
	double Geldforderung = 0.0;
	char Kategorie2 = '0';
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

			Geldforderung = Geldforderung + 0.70;
		} break;

		case 'z':
		{
			cout << "Kaffee mit Zucker = 80 Cent" << endl
				<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf" << endl;

			Geldforderung = Geldforderung + 0.80;
		} break;

		case 'm':
		{
			cout << "Kaffee mit Milch = 80 Cent" << endl
				<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf";
			Geldforderung = Geldforderung + 0.80;
		} break;

		case 'b':
		{
			cout << "Kaffee mit Zucker und Milch = 90 Cent" << endl
				<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf";

			Geldforderung = Geldforderung + 0.90;
		} break;

		default: cout << "\"Zurueck zum Hauptmenue\"" << endl;
		} break;
	}

	case 2:
	{

		cout << "[2] Cappuchino kostet 75 Cent" << endl
			<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf" << endl;

		Geldforderung = Geldforderung + 0.75;
	} break;

	case 3:
	{
		cout << "[3] Latte Macchiato kostet 85 Cent" << endl
			<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf" << endl;

		Geldforderung = Geldforderung + 0.85;
	} break;

	case 4:
	{
		cout << "[4] schwarzer Tee kostet 70 Cent" << endl
			<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf" << endl;

		Geldforderung = Geldforderung + 0.70;
	} break;

	case 5:
	{
		cout << "[5] Fruechtetee kostet 70 Cent" << endl
			<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf" << endl;

		Geldforderung = Geldforderung + 0.70;
	} break;

	case 6:
	{
		cout << "[6] Gemuesebruehe kostet 95 Cent" << endl
			<< "Bitte werfen Sie die Muenzen in den Muenzeinwurf" << endl;

		Geldforderung = Geldforderung + 0.95;
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



/*
Function name: OutputItem
Arguments: sItemName - this is the item which is chosen by the user
Output / Result: Tell the user that he got the item and say bye
*/
void OutputItem(string sItemName)
{
	if (sItemName!="X")
	{
		cout << "Hier haben Sie Ihren '" << sItemName << "'." << endl <<
				"Vielen Dank fuer Ihren Einkauf!" << endl;
	} else {
		cout << endl << "Vielen Dank fuer Ihren Einkauf!" << endl;
	}
}

/*
Function name: CalcRestCoin
Arguments:
- iCoinValue: The value of the coin in cent - so 2 euros = 200 cents, this argument will be committed through
the CoinOutput function
- &iCurrentMoney - This is the current rest money which will be automatically subtracted by the corresponding
coin value
Output / Result: Displays to the console screen the current rest money in coins (euro currency)
*/
int CalcRestCoin(int iCoinValue, int &iCurrentMoney)
{
	int iReturn = iCurrentMoney / iCoinValue;
	iCurrentMoney = iCurrentMoney - iReturn * iCoinValue;
	return iReturn;
}

/*
Function name: CoinOutput
Arguments: dChange; This is the rest money which will be calculated through the input functionality
Output / Result: Displays to the console screen the current rest money in coins (euro currency)
*/
void CoinOutput(double dChange)
{
	int iCurrentMoney = dChange * 100;
	int iMoneyArr[] = { 200, 100, 50, 20, 10, 5, 2, 1 };
	int iCoins[sizeof(iMoneyArr) / sizeof(int)];

	char* cCoinCaptions[] = {
		"2 Eurostueck",
		"1 Eurostueck",
		"50 Centstueck",
		"20 Centstueck",
		"10 Centstueck",
		"5 Centstueck",
		"2 Centstueck",
		"1 Centstueck"
	};
	
	cout << endl << "Ihr Wechselgeld betraegt:" << endl;
	
	int f = 0;
	for (int i : iMoneyArr)
	{
		iCoins[f] = CalcRestCoin(i, iCurrentMoney);
		if (iCoins[f] != 0) {
			cout << iCoins[f] << " x " << cCoinCaptions[f] << endl;
		}
		f++;
	}
}

void vCloseApplication()
{
	int iStatus = 0;
	
	cout << endl << "----Simulation----"<< endl;
	cout << "Moechten sie das Program beenden ?"<<endl;
	cout << "0 = Ende | 1 = Weiter" << endl;
	cin >> iStatus;
	
	if(iStatus == 1)
	{
		system("cls");
	} else 
	{
		exit(1);
	}
	
}


