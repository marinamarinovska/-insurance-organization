#pragma once
#include<string>
#include"Payer.h"


class Institution
{
private:
	std::string institution_name;
	Payer* institution_payer = NULL;

public:
	unsigned int institution_id;//идентификационния номер на институцията трябва да е static, за да имаме достъп до нея от организацията

	Institution();
	Institution(unsigned int NEW_ID);//конструктор на класа институция
	~Institution();

	Payer payer();
};