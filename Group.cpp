#include<iostream>
#include<string>
#include"Group.h"


Group::~Group()
{
	delete group_payer;
}


Group::Group(unsigned int GROUP_ID, unsigned int NEW_ID)//������������ �� �����, ����� ������ �� ��������� �����. ����� �� ������� � ID �� �����������
{
	group_id = GROUP_ID;
	std::string PAYER_NAME;
	std::cout << "Enter the name of the Payer of the Group: ";
	std::cin.ignore();
	getline(std::cin, PAYER_NAME);
	group_payer = new Payer(PAYER_NAME);//��������� �� ��� ����� �� ����� Payer, ���� �� ��������� �� ������������ ��, ������ ����� ��

	institution = new Institution(NEW_ID);
}
