#include <iostream>
#include<string>
#include"Payer.h"

using namespace std;

Payer::Payer(string PAYER_NAME)//конструктор на класа Payer, който приема като параметър стринг
{
	payer_name = PAYER_NAME;//който ще присвояваме на payer_name
}

bool Payer::payer_member_rule(unsigned int GROUP_ID, unsigned int INSURANCE_ID)//функцията, с която проверяваме дали човек е в дадена грпа
{
	if (INSURANCE_ID > GROUP_ID&& INSURANCE_ID >= 0)//ако номера на застрахователната му полица е по-голям от идентификационния номер на групата, значи човека е в групата
		return true;

	return false;
}

//void Payer::print()//функция за отпечатване на името на застрахователя, която ще използваме вместо указател към основния застр. на съответната институция
//{
//	cout << payer_name << "\n";//извеждаме името на застрахователя и символ за нов ред
//}
