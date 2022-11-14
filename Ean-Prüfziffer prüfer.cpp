#include <string>
#include <iostream>

using namespace std;

int main()
{
	long long EAN_Codeoriginal;
	long long EAN_Code;
	long prüfziffer;
	long ziffer12;
	long ziffer11;
	long ziffer10;
	long ziffer9;
	long ziffer8;
	long ziffer7;
	long ziffer6;
	long ziffer5;
	long ziffer4;
	long ziffer3;
	long ziffer2;
	long ziffer1;
	long Summe1;
	long Summe2;
	long Gesamt;
	long Differenz;


	cout << "Bitte geben sie den EAN-CODE ein: ";
	cin >> EAN_Code;
	EAN_Codeoriginal = EAN_Code;

	ziffer1 = EAN_Code / 1000000000000;
	EAN_Code = EAN_Code % 1000000000000;

	ziffer2 = EAN_Code / 100000000000;
	EAN_Code = EAN_Code % 100000000000;

	ziffer3 = EAN_Code / 10000000000;
	EAN_Code = EAN_Code % 10000000000;

	ziffer4 = EAN_Code / 1000000000;
	EAN_Code = EAN_Code % 1000000000;

	ziffer5 = EAN_Code / 100000000;
	EAN_Code = EAN_Code % 100000000;

	ziffer6 = EAN_Code / 10000000;
	EAN_Code = EAN_Code % 10000000;

	ziffer7 = EAN_Code / 1000000;
	EAN_Code = EAN_Code % 1000000;

	ziffer8 = EAN_Code / 100000;
	EAN_Code = EAN_Code % 100000;

	ziffer9 = EAN_Code / 10000;
	EAN_Code = EAN_Code % 10000;

	ziffer10 = EAN_Code / 1000;
	EAN_Code = EAN_Code % 1000;

	ziffer11 = EAN_Code / 100;
	EAN_Code = EAN_Code % 100;
	
	ziffer12 = EAN_Code / 10;
	EAN_Code = EAN_Code % 10;

	prüfziffer = EAN_Code;

	Summe1 = ziffer1 + ziffer3 + ziffer5 + ziffer7 + ziffer9 + ziffer11;
    
	Summe2 = (ziffer2 + ziffer4 + ziffer6 + ziffer8 + ziffer10 + ziffer12) *3;

	Gesamt = Summe1 + Summe2;

	Differenz = 70 - Gesamt;

	if (Differenz == prüfziffer)
	{
		cout << endl << endl << "Ihr EAN_Code ist gueltig" << endl << endl;
	}
	else {
		cout << endl << endl << "Ihr EAN_Code ist Ungueltig" << endl << endl;
	}

	


}