// 职工管理系统.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include"workerManager.h"

//#include"worker.h"
//#include"employee.h"
//#include"manager.h"
//#include"boss.h"

int main()
{
	////测试代码：
	//Worker* worker = NULL;
	//worker = new Employee(1, "张三", 1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "张三", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(2, "张三", 2);
	//worker->showInfo();
	//delete worker;



	//实例化对象
	WorkerManager wm;
	//调用展示菜单成员函数
	//wm.Show_Menu();

	int choice = 0;
	while (true)
	{
		//调用展示菜单成员函数
		wm.Show_Menu();
		cout << "请输入您的选择： " << endl;
		cin >> choice;//接受用户的选项

		switch (choice)
		{
		case 0://退出系统
			wm.ExitSystem();
			break;
		case 1://增加职工
			wm.Add_Emp();
			break;
		case 2://显示职工
			wm.Shou_Emp();
		case 3://删除职工
		//{//测试
		//	int ret = wm.IsExist(1);
		//	if (ret != -1)
		//	{
		//		cout << "职工存在" << endl;
		//	}
		//	else
		//	{
		//		cout << "职工不存在" << endl;
		//	}
		//	break;
		//}
			wm.Del_Emp();
			break;
		case 4://修改职工
			wm.Mod_Emp();
			break;
		case 5://查找职工
			wm.Find_Emp();
			break;
		case 6://排序职工
			wm.Sort_Emp();
			break;
		case 7://清空文档
			wm.Clean_File();
			break;

		default:
			system("cls");//清屏操作
			break;
		}
	}
	system("pause");
	return 0;
}