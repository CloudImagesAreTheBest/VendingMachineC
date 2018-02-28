#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
double Restgeld(double, double);


int main()
    {

        char Pruef[]="";

        cin>>setw(8)>>Pruef;
        // GLPI >>>
        CharPointerToInt(char*)
        // GLPI <<<
        cout<<Pruef;





        //Restgeld();
    }



double Restgeld(double Uebergabewert_Muenzeinwurf,double Geldforderung)
{
    double Restgeld = 0.0;
    if(Uebergabewert_Muenzeinwurf>Geldforderung)
        {
            Restgeld=Uebergabewert_Muenzeinwurf-Geldforderung;
        }
    return Restgeld;
}







