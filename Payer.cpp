#include <iostream>
#include<string>
#include"Payer.h"

using namespace std;

Payer::Payer(string PAYER_NAME)//����������� �� ����� Payer, ����� ������ ���� ��������� ������
{
	payer_name = PAYER_NAME;//����� �� ����������� �� payer_name
}

bool Payer::payer_member_rule(unsigned int GROUP_ID, unsigned int INSURANCE_ID)//���������, � ����� ����������� ���� ����� � � ������ ����
{
	if (INSURANCE_ID > GROUP_ID&& INSURANCE_ID >= 0)//��� ������ �� ����������������� �� ������ � ��-����� �� ����������������� ����� �� �������, ����� ������ � � �������
		return true;

	return false;
}

//void Payer::print()//������� �� ����������� �� ����� �� ��������������, ����� �� ���������� ������ �������� ��� �������� �����. �� ����������� ����������
//{
//	cout << payer_name << "\n";//��������� ����� �� �������������� � ������ �� ��� ���
//}
