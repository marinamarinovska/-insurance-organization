#include<iostream>
#include"Institution.h"
#include"Payer.h"

using namespace std;

Institution::Institution()
{
	institution_id = 0;
	institution_name = "";
	institution_payer = NULL;
}

Institution::Institution(unsigned int NEW_ID)//конструктор на класа институция
{
	institution_id = NEW_ID;//а на идентификационния номер на институцията, даваме стойността на параметъра (така ще водим номериране на институциите)
	cout << "Enter the name of the institution: ";
	cin.ignore();
	getline(cin, institution_name);
	cout << "Enter the name of the main payer of the institution: ";
	string PAYER_NAME;
	getline(cin, PAYER_NAME);
	institution_payer = new Payer(PAYER_NAME);
}

Payer Institution::payer()
{
	return *institution_payer;
}

Institution::~Institution()
{
	delete institution_payer;
}

