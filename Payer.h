#pragma once
#include<string>
class Payer
{
private:
	std::string payer_name;
public:
	Payer(std::string PAYER_NAME);
	bool payer_member_rule(unsigned int GROUP_ID, unsigned int INSURANCE_ID);
	/*void print();*/
};