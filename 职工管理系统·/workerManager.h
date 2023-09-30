#pragma once
#include<iostream>
#include<fstream>
using namespace std;
#include "worker.h"

#define  FILENAME "empFile.txt"

class WorkerManager
{
public:
	int m_EmpNum;
	Worker ** m_EmpArray;
	bool m_FileIsEmpty;
	int get_EmpNum();
	//构造函数
	WorkerManager();

	void Mod_Emp();

	void Find_Emp();

	void Clean_File();

	void Sort_Emp();

	int IsExist(int id);

	void init_Emp();

	void Del_Emp();

	void Show_Emp();

	void save();

	void exitSystem();

	void Show_Menu();
	
	void Add_Emp();
	//析构函数
	~WorkerManager();

};