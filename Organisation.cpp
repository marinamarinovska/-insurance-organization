#include<iostream>
#include<string>
#include<vector>
#include"Institution.h"
#include"Organisation.h"
using namespace std;


Organisation::Organisation()//������������ �� ����� �����������
{
	cout << "\nEnter the address of the organisation: ";
	cin.ignore();
	getline(cin, organization_address);//��������� ������ �� �������������
}

void Organisation::Add_Institution(unsigned int NEW_ID)//��������� �� �������� �� ���������� � ������� �� �������������
{
	Institution* NEW_INSTITUTION = new Institution(NEW_ID);//����������� ��� ����� �� ��� institution 
	institutions_list.push_back(*NEW_INSTITUTION);//� �� �������� ��� �������

	//��������� ���������� �� �� �������. ��� �������� �����������, �� �� ������ �� ���� ����������
	//�� ��� �������� ���� ���������, ������ �����, �� �� � �������� ��������, ���� �� ��� ����� �� �� ������ ���� ����� ����
	//��� ������ �� ���������
}

void Organisation::Add_Group(unsigned int GROUP_ID, unsigned int NEW_ID)//�������, � ����� �������� �����, �� ����� ���������� � �������������
{
	Group* NEW_GROUP = new Group(GROUP_ID, NEW_ID);
	groups_list.push_back(*NEW_GROUP);
}

void Organisation::Add_Organisation()//�������, � ����� �������� �����������, �� ����� ���������� � �������������
{
	Organisation* NEW_ORGANISATION = new Organisation();
	organisations_list.push_back(*NEW_ORGANISATION);
}