#include"manager.h"
//���캯��
Manager::Manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_Name = name;
	this->m_DepyId = did;

}
//��ʾ������Ϣ
void Manager::showInfo()
{
	cout << "ְ����ţ� " << this->m_id
		<< "\tְ�������� " << this->m_Name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t��λְ������ϰ彻�������񣬲��·��������ͨԱ��"
		<< endl;

}
//��ȡ��λ����
string Manager::getDeptName()
{
	
	return string ("����");
}
