#pragma once
#include"Institution.h"
#include"Payer.h"

class Group
{
private:
	unsigned int group_id;
	Payer* group_payer;
	Institution* institution;

public:
	Group(unsigned int GROUP_ID, unsigned int NEW_ID);
	Payer* Get_Group_Payer()
	{
		return group_payer;
	}
	unsigned int Get_Group_Id()
	{
		return group_id;
	}
	~Group();
};