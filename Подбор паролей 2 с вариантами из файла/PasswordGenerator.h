#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void Password_4_symbol(string& arr, string& pasvar)
{
	ofstream fout("myfile.txt", ios::app);
	if (!fout.is_open()) cout << " Файл не открылся" << endl;
	bool flag = true; //для выхода из цикла в случае нахождения правильного варианта пароля
	string str; //сюда считываем символы из arr
	int count = 0; //счетчик вариантов паролей
	for (auto i = arr.begin(); i != arr.end(); ++i)
	{
		for (auto j = arr.begin(); j != arr.end(); ++j)
		{
			for (auto k = arr.begin(); k != arr.end(); ++k)
			{
				for (auto g = arr.begin(); g != arr.end(); ++g) 
				{
					str.clear();
					str.push_back(*i);
					str.push_back(*j);
					str.push_back(*k);
					str.push_back(*g);
					count++;
					if (pasvar == str) //сравниваем пароль с подобранным паролем
					{
						cout << " Пароль: " << str << endl;
						cout << " Вариантов паролей до успеха: " << count << endl;
						fout << " Пароль: " << str << endl;  //выводим результат в файл
						fout << " Вариантов паролей до успеха: " << count << endl;
						fout.close();
						flag = false;
						break;
					}
				}
				if (!flag) break;
			}
			if (!flag) break;
		}
		if (!flag) break;
	}
}


void Password_5_symbol(string& arr, string& pasvar)
{
	ofstream fout("myfile.txt", ios::app);
	if (!fout.is_open()) cout << " Файл не открылся" << endl;
	bool flag = true;
	string str;
	int count = 0;
	for (auto i = arr.begin(); i != arr.end(); ++i)
	{
		for (auto j = arr.begin(); j != arr.end(); ++j)
		{
			for (auto k = arr.begin(); k != arr.end(); ++k)
			{
				for (auto g = arr.begin(); g != arr.end(); ++g)
				{
					for (auto n = arr.begin(); n != arr.end(); ++n)
					{
						str.clear();
						str.push_back(*i);
						str.push_back(*j);
						str.push_back(*k);
						str.push_back(*g);
						str.push_back(*n);
						count++;
						if (pasvar == str)
						{
							cout << " Пароль: " << str << endl;
							cout << " Вариантов паролей до успеха: " << count << endl;
							fout << " Пароль: " << str << endl;
							fout << " Вариантов паролей до успеха: " << count << endl;
							fout.close();
							flag = false;
							break;
						}
					}
					if (!flag) break;
				}
				if (!flag) break;
			}
			if (!flag) break;
		}
		if (!flag) break;
	}
}

void Password_6_symbol(string& arr, string& pasvar)
{
	ofstream fout("myfile.txt", ios::app);
	if (!fout.is_open()) cout << " Файл не открылся" << endl;
	bool flag = true;
	string str;
	int count = 0;
	for (auto i = arr.begin(); i != arr.end(); ++i)
	{
		for (auto j = arr.begin(); j != arr.end(); ++j)
		{
			for (auto k = arr.begin(); k != arr.end(); ++k)
			{
				for (auto g = arr.begin(); g != arr.end(); ++g)
				{
					for (auto n = arr.begin(); n != arr.end(); ++n)
					{
						for (auto m = arr.begin(); m != arr.end(); ++m)
						{
							str.clear();
							str.push_back(*i);
							str.push_back(*j);
							str.push_back(*k);
							str.push_back(*g);
							str.push_back(*n);
							str.push_back(*m);
							count++;
							if (pasvar == str)
							{
								cout << " Пароль: " << str << endl;
								cout << " Вариантов паролей до успеха: " << count << endl;
								fout << " Пароль: " << str << endl;
								fout << " Вариантов паролей до успеха: " << count << endl;
								fout.close();
								flag = false;
								break;
							}
						}
						if (!flag) break;
					}
					if (!flag) break;
				}
				if (!flag) break;
			}
			if (!flag) break;
		}
		if (!flag) break;
	}	
}

void Password_7_symbol(string& arr, string& pasvar)
{
	ofstream fout("myfile.txt", ios::app);
	if (!fout.is_open()) cout << " Файл не открылся" << endl;
	bool flag = true;
	string str;
	int count = 0;
	for (auto i = arr.begin(); i != arr.end(); ++i)
	{
		for (auto j = arr.begin(); j != arr.end(); ++j)
		{
			for (auto k = arr.begin(); k != arr.end(); ++k)
			{
				for (auto g = arr.begin(); g != arr.end(); ++g)
				{
					for (auto n = arr.begin(); n != arr.end(); ++n)
					{
						for (auto m = arr.begin(); m != arr.end(); ++m)
						{
							for (auto l = arr.begin(); l != arr.end(); ++l)
							{
								str.clear();
								str.push_back(*i);
								str.push_back(*j);
								str.push_back(*k);
								str.push_back(*g);
								str.push_back(*n);
								str.push_back(*m);
								str.push_back(*l);
								count++;
								if (pasvar == str)
								{
									cout << " Пароль: " << str << endl;
									cout << " Вариантов паролей до успеха: " << count << endl;
									fout << " Пароль: " << str << endl;
									fout << " Вариантов паролей до успеха: " << count << endl;
									fout.close();
									flag = false;
									break;
								}
							}
							if (!flag) break;
						}
						if (!flag) break;
					}
					if (!flag) break;
				}
				if (!flag) break;
			}
			if (!flag) break;
		}
		if (!flag) break;
	}
}


void Password_8_symbol(string& arr, string& pasvar)
{
	ofstream fout("myfile.txt", ios::app);
	if (!fout.is_open()) cout << " Файл не открылся" << endl;
	bool flag = true;
	string str;
	int count = 0;
	for (auto i = arr.begin(); i != arr.end(); ++i)
	{
		for (auto j = arr.begin(); j != arr.end(); ++j)
		{
			for (auto k = arr.begin(); k != arr.end(); ++k)
			{
				for (auto g = arr.begin(); g != arr.end(); ++g)
				{
					for (auto n = arr.begin(); n != arr.end(); ++n)
					{
						for (auto m = arr.begin(); m != arr.end(); ++m)
						{
							for (auto l = arr.begin(); l != arr.end(); ++l)
							{
								for (auto it = arr.begin(); it != arr.end(); ++it)
								{
									str.clear();
									str.push_back(*i);
									str.push_back(*j);
									str.push_back(*k);
									str.push_back(*g);
									str.push_back(*n);
									str.push_back(*m);
									str.push_back(*l);
									str.push_back(*it);
									count++;
									if (pasvar == str)
									{
										cout << " Пароль: " << str << endl;
										cout << " Вариантов паролей до успеха: " << count << endl;
										fout << " Пароль: " << str << endl;
										fout << " Вариантов паролей до успеха: " << count << endl;
										fout.close();
										flag = false;
										break;
									}
								}
								if (!flag) break;
							}
							if (!flag) break;
						}
						if (!flag) break;
					}
					if (!flag) break;
				}
				if (!flag) break;
			}
			if (!flag) break;
		}
		if (!flag) break;
	}
}
