#pragma once
#include<string>
class Person
{
private:
	std::string person_name;
	unsigned int insurance_id;
public:
	Person();
	Person(std::string PERSON_NAME);
	unsigned int Get_Insirance_Id()
	{
		return insurance_id;
	}
}; 
