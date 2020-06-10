#include<iostream>
#include<string>
#include<vector>
#include"Institution.h"
#include"Organisation.h"
using namespace std;


Organisation::Organisation()//конструктора на класа организация
{
	cout << "\nEnter the address of the organisation: ";
	cin.ignore();
	getline(cin, organization_address);//въвеждаме адреса на организацията
}

void Organisation::Add_Institution(unsigned int NEW_ID)//функцията за добавяне на институция в списъка на организацията
{
	Institution* NEW_INSTITUTION = new Institution(NEW_ID);//декларираме нов обект от тип institution 
	institutions_list.push_back(*NEW_INSTITUTION);//и го добавяме към списъка

	//Невалидни институции не се добавят. Ако добавяме организация, то тя трябва да бъде съвместима
	//не съм направил това изискване, защото мисля, че не е правилно зададено, пиши ми ако искаш да ти обясня защо мисля така
	//или просто го игнорирай
}

void Organisation::Add_Group(unsigned int GROUP_ID, unsigned int NEW_ID)//функция, с която добавяме група, за някоя институция в организацията
{
	Group* NEW_GROUP = new Group(GROUP_ID, NEW_ID);
	groups_list.push_back(*NEW_GROUP);
}

void Organisation::Add_Organisation()//функция, с която добавяме организация, за някоя институция в организацията
{
	Organisation* NEW_ORGANISATION = new Organisation();
	organisations_list.push_back(*NEW_ORGANISATION);
}