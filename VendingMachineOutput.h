#pragma once
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <windows.h>

using namespace std;

/*
Function name: OutputItem
Arguments: sItemName - this is the item which is chosen by the user
Output / Result: Tell the user that he got the item and say bye
*/
void OutputItem(std::string sItemName);


/*
Function name: CalcRestCoin
Arguments:
- iCoinValue: The value of the coin in cent - so 2 euros = 200 cents, this argument will be committed through
the CoinOutput function
- &iCurrentMoney - This is the current rest money which will be automatically subtracted by the corresponding
coin value
Output / Result: Displays to the console screen the current rest money in coins (euro currency)
*/
int CalcRestCoin(int iCoinValue, int &iCurrentMoney);


/*
Function name: CoinOutput
Arguments: dChange; This is the rest money which will be calculated through the input functionality
Output / Result: Displays to the console screen the current rest money in coins (euro currency)
*/
void CoinOutput(double dChange);

//
//
//
void AddCenteredOutput(char* cToOutput);