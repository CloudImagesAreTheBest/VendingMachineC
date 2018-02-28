#include "VendingMachineOutput.h"

void OutputItem(std::string sItemName)
{
	std::cout << "Hier haben Sie Ihren '" << sItemName << "'." << std::endl <<
		"Vielen Dank fuer Ihren Einkauf!" << std::endl;
}

int CalcRestCoin(int iCoinValue, int &iCurrentMoney)
{
	int iReturn = iCurrentMoney / iCoinValue;
	iCurrentMoney = iCurrentMoney - iReturn * iCoinValue;
	return iReturn;
}

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
	for (int i = 0; i < sizeof(iMoneyArr)/sizeof(int); i++)
	{
		iCoins[f] = CalcRestCoin(iMoneyArr[i], iCurrentMoney);
		if (iCoins[f] != 0)
		{
			std::cout << iCoins[f] << " x " << cCoinCaptions[f] << std::endl;
		}
		f++;
	}
}

void AddCenteredOutput(char* cToOutput)
{
	int iMaxCharactersInWindow;
	int iStringLength;
	COORD coNewPosition; 
	CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbiInfo);
	iMaxCharactersInWindow = csbiInfo.srWindow.Right - csbiInfo.srWindow.Left + 1;
	iStringLength = strlen(cToOutput);
	coNewPosition.Y = csbiInfo.dwCursorPosition.Y;
	coNewPosition.X = (iMaxCharactersInWindow / 2) - (iStringLength / 2);

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coNewPosition);
	cout << cToOutput << std::endl;
}
