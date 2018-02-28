#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>

using namespace std;

        int Pruefziffer();
        void Benutzeroberflaeche(void);
        int Auswahl();

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


/*
     int Geldforderung=0;

     int Kategorie=0, Muenzwert=0;

            while(Geldforderung<=Muenzwert)
                switch(Kategorie)
                    {
                        case 1:
                            {
                            Muenzwert=Muenzwert+1;
                            }break;
                        case 2:
                            {
                            Muenzwert=Muenzwert+2;
                            }break;
                        case 3:
                            {
                            Muenzwert=Muenzwert+5;
                            }break;
                        case 4:
                            {
                            Muenzwert=Muenzwert+10;
                            }break;
                        case 5:
                            {
                            Muenzwert=Muenzwert+20;
                            }break;
                        case 6:
                            {
                            Muenzwert=Muenzwert+50;
                            }break;
                        case 7:
                            {
                            Muenzwert=Muenzwert+100;
                            }break;
                        case 8:
                            {
                            Muenzwert=Muenzwert+200;
                            }break;
                        default: cout<<"falsche eingabe";
                    }

*/



    //Funktionen Pruefziffer, Benutzeroberflaeche und Auswahl


    int Pruefziffer()
        {
         int Erste=0, Zweite=0, Dritte=0, Vierte=0, Fuenfte=0, Sechste=0, Pruef=0, Ergebnis_1=0, Ergebnis_2=0, Ergebnis_3=0,
            Ergebnis_4=0, Ergebnis_5=0, Ergebnis_6=0, ErgebnisSumme=0, Modulo=0,Pruefzahl=0;

        cout<<"Bitte geben Sie nacheinander Ihre 7-stellige Kundennummer ein"<<endl;
        cin>>Erste;
        cin>>Zweite;
        cin>>Dritte;
        cin>>Vierte;
        cin>>Fuenfte;
        cin>>Sechste;
        cin>>Pruef;

        Ergebnis_1=Erste*7;
        Ergebnis_2=Zweite*6;
        Ergebnis_3=Dritte*5;
        Ergebnis_4=Vierte*4;
        Ergebnis_5=Fuenfte*3;
        Ergebnis_6=Sechste*2;

        ErgebnisSumme=Ergebnis_1+Ergebnis_2+Ergebnis_3+Ergebnis_4+Ergebnis_5+Ergebnis_6;
        Modulo=ErgebnisSumme % 10;
        Pruefzahl=10-Modulo;

        cout<<Pruefzahl;
        return Pruefzahl;
        }
    void Benutzeroberflaeche(void)
        {

    cout <<endl<<"#############################################################################"<<endl
         <<"# ------------------------------------------------------------------------- #"<<endl
         <<"#|                     BITTE WAEHLEN SIE EINE SORTE AUS!                   |#"<<endl
         <<"# ------------------------------------------------------------------------- #"<<endl
         <<"#############################################################################"<<endl

         <<" ___________________________________________________________________________ "<<endl
         <<"| [1] Kaffee         |     [2] Cappuchino      |     [3]  Latte Macchiato   |"<<endl
         <<"|--------------------|-------------------------|----------------------------|"<<endl
         <<"| [4] schwarzer Tee  |     [5] Fruechtetee     |     [6]  Gemuesebruehe     |"<<endl
         <<"|___________________________________________________________________________|"<<endl
         <<endl
         <<"                    #############################"<<endl
         <<"                    #                           #"<<endl
         <<"                    #           / / /           #"<<endl
         <<"                    #      _____\\ \\ \\___        #"<<endl
         <<"                    #     /     / / /   \\       #"<<endl
         <<"                    #     \\_____________/_      #"<<endl
         <<"                    #      \\           // \\     #"<<endl
         <<"                    #       \\         / \\_/     #              "<<endl
         <<"                    #        \\_______/          #                       "<<endl
         <<"                    #                           #                "<<endl
         <<"                    #############################                   "<<endl;


        }

    int Auswahl()
        {

            int Kategorie1=0,Geldforderung=0;

            char Kategorie2=0;

            cin>>Kategorie1;

            switch(Kategorie1)
                {
                    case 1:
                        {
                            cout<<"[1] Kaffeeoptionen"<<endl;
                            cout<<"##############################################################################"<<endl
                                <<"#         s=schwarzer Kaffee z=Zucker, m=Milch, b=Zucker und Milch           #"<<endl
                                <<"#           \"Jede andere Taste fuehrt zum Abbruch und Neustart\"              #"<<endl
                                <<"##############################################################################"<<endl;
                            cin >>Kategorie2;

                        switch(Kategorie2)
                                {
                                    case 's':
                                        {
                                            cout<<"Schwarzer Kaffee = 70 Cent"<<endl
                                                <<"Bitte werfen Sie die Muenzen in den Muenzeinwurf"<<endl;

                                            Geldforderung=Geldforderung+70;
                                        } break;

                                    case 'z':
                                        {
                                            cout<<"Kaffee mit Zucker = 80 Cent"<<endl
                                                <<"Bitte werfen Sie die Muenzen in den Muenzeinwurf"<<endl;

                                            Geldforderung=Geldforderung+80;
                                        } break;

                                    case 'm':
                                        {
                                            cout<<"Kaffee mit Milch = 80 Cent"<<endl
                                                <<"Bitte werfen Sie die Muenzen in den Muenzeinwurf";
                                            Geldforderung=Geldforderung+80;
                                        } break;

                                    case 'b':
                                        {
                                            cout<<"Kaffee mit Zucker und Milch = 90 Cent"<<endl
                                                <<"Bitte werfen Sie die Muenzen in den Muenzeinwurf";

                                            Geldforderung=Geldforderung+90;
                                        } break;

                                    default: cout<<"\"Zurueck zum Hauptmenue\""<<endl;
                                } break;
                        }

                    case 2:
                        {

                            cout<<"[2] Cappuchino kostet 75 Cent"<<endl
                                <<"Bitte werfen Sie die Muenzen in den Muenzeinwurf"<<endl;

                            Geldforderung=Geldforderung+75;
                        } break;

                    case 3:
                        {
                            cout<<"[3] Latte Macchiato kostet 85 Cent"<<endl
                                <<"Bitte werfen Sie die Muenzen in den Muenzeinwurf"<<endl;

                            Geldforderung=Geldforderung+85;
                        } break;

                    case 4:
                        {
                            cout<<"[4] schwarzer Tee kostet 70 Cent"<<endl
                                <<"Bitte werfen Sie die Muenzen in den Muenzeinwurf"<<endl;

                            Geldforderung=Geldforderung+70;
                        } break;

                    case 5:
                        {
                            cout<<"[5] Fruechtetee kostet 70 Cent"<<endl
                                <<"Bitte werfen Sie die Muenzen in den Muenzeinwurf"<<endl;

                            Geldforderung=Geldforderung+70;
                        } break;

                    case 6:
                        {
                            cout<<"[6] Gemuesebruehe kostet 95 Cent"<<endl
                                <<"Bitte werfen Sie die Muenzen in den Muenzeinwurf"<<endl;

                            Geldforderung=Geldforderung+95;
                        } break;

                    default: cout<<"Sie haben eine falsche Taste gedrueckt";

            }


         return Geldforderung;
        }


