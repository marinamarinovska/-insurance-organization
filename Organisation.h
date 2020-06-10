#pragma once
#include"Institution.h"
#include"Group.h"
#include<vector>
#include<string>

class Organisation
{
private:
	std::string organization_address;

public:
	std::vector<Institution>institutions_list;
	std::vector<Group>groups_list;
	std::vector<Organisation>organisations_list;
	Organisation();//конструктор на класа
	std::vector<Group>Get_Group_List()
	{
		return groups_list;
	}

	std::string Get_Organisation_Address()
	{
		return organization_address;
	}
	void Add_Institution(unsigned int NEW_ID);
	void Add_Group(unsigned int GROUP_ID, unsigned int NEW_ID);//функция, с която добавяме група, за съответната институция в организацията
	void Add_Organisation();
};