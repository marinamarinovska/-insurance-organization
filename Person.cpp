#include<iostream>
#include<string>
#include"Person.h"


Person::Person()
{
	person_name = "";
	insurance_id = -1;
}

Person::Person(std::string PERSON_NAME)
{
	person_name = PERSON_NAME;
	std::cout << "Enter the persont insurance ID (enter -1 if no payer): ";
	std::cin >> insurance_id;
}