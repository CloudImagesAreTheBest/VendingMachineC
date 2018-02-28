#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>

using namespace std;

/*
Function name: OutputItem
Arguments: sItemName - this is the item which is chosen by the user
Output / Result: Tell the user that he got the item and say bye
*/
void OutputItem(std::string sItemName)
{
	std::cout << "Hier haben Sie Ihren '" << sItemName << "'." << std::endl <<
		"Vielen Dank fuer Ihren Einkauf!" << std::endl;
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

	int f = 0;
	/*for (int i = 0; i < 8; i++)
	{

	}*/
	for (int i : iMoneyArr)
	{
		iCoins[f] = CalcRestCoin(i, iCurrentMoney);
		if (iCoins[f] != 0) {
			std::cout << iCoins[f] << " x " << cCoinCaptions[f] << std::endl;
		}
		f++;
	}
}


