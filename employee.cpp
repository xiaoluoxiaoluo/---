#include"employee.h"
//���캯��
Employee::Employee(int id, string name, int dId)
{
	this->m_id = id;
	this->m_Name = name;
	this->m_DepyId = dId;
}
//��ʾ������Ϣ
void Employee::showInfo()
{
	cout << "ְ����ţ� " << this->m_id
		<< "\tְ�������� " << this->m_Name
		<< "\t��λ�� " << this->getDeptName()
		<<"\t��λְ�� ��ɾ�����������"
		<< endl;
}
//��ȡ��λ����
string Employee::getDeptName()
{
	return string("Ա��");
}

