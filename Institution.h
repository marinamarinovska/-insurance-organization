#pragma once
#include<string>
#include"Payer.h"


class Institution
{
private:
	std::string institution_name;
	Payer* institution_payer = NULL;

public:
	unsigned int institution_id;//����������������� ����� �� ������������ ������ �� � static, �� �� ����� ������ �� ��� �� �������������

	Institution();
	Institution(unsigned int NEW_ID);//����������� �� ����� ����������
	~Institution();

	Payer payer();
};