#include<iostream>
#include<string>
#include"Group.h"


Group::~Group()
{
	delete group_payer;
}


Group::Group(unsigned int GROUP_ID, unsigned int NEW_ID)//конструктора на класа, който приема за параметър идент. номер на групата и ID на иституцията
{
	group_id = GROUP_ID;
	std::string PAYER_NAME;
	std::cout << "Enter the name of the Payer of the Group: ";
	std::cin.ignore();
	getline(std::cin, PAYER_NAME);
	group_payer = new Payer(PAYER_NAME);//създаване на нов обект от класа Payer, като за параметър на конструктора му, даваме името му

	institution = new Institution(NEW_ID);
}
