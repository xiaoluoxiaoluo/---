#include"boss.h"
//���캯��
Boss::Boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_Name = name;
	this->m_DepyId = did;

}
//��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְ����ţ� " << this->m_id
		<< "\tְ�������� " << this->m_Name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t��λְ�𣺹���˾��������"
		<< endl;

}
//��ȡ��λ����
string Boss::getDeptName()
{

	return string("�ܲ�");
}