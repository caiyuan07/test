/*************************************************************************
    > File Name: workermi.cxx
    > Author: 
    > Mail:  
    > Created Time: 2021年12月21日 星期二 00时33分23秒
 ************************************************************************/

#include<iostream>
#include "workermi.h"

using std::cout;
using std::cin;
using std::endl;

//Worker methods
Worker::~Worker()
{
	cout << "worker kill\n";
}


//protected methods
void Worker::Data()const
{
	cout << "Name: " << fullname << endl;
	cout << "Employee ID: " << id << endl;
}

void Worker::Get()
{
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

//Waiter methods
void Waiter::set()
{
	cout << "Enter waiter's name: ";
	Worker::Get();
	Get();
}

void Waiter::Show()const
{
	cout << "Catagory: waiter\n";
	Worker::Data();
	Data();
}

//protected methods
void Waiter::Data()const
{
	cout << "Panache rating: " << panache << endl;
}

void Waiter::Get()
{
	cout << "Enter waiter's panache rating: ";
	cin >> panache;
	while (cin.get() != '\n')
	{
		continue;
	}
}

//Singer methods
char * Singer::pv[Singer::Vtypes] = 
{
	"other", "alto", "controlto", "soprano", "bass", "baritone", "tenor"
};

void Singer::Set()
{
	cout << "Enter Singer's nanme: ";
	Worker::Get();
	Get();
}

void Singer::Show()const
{
	cout << "Category: singer\n";
	Worker::Data();
	Data();
}

//proteced methods
void Singer::Data()const
{
	cout << "Vocal range: " << pv[voice] << endl;
}

void Singer::Get()
{
	cout << "Enter number for Singer's vocal range: \n";
	int i;
	for (i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << "    ";
		if (i % 4 == 3)
			cout << endl;
	}
	if (i % 4 != 0)
	{
		cout << "\n";
	}
	cin >> voice;
	while (cin.get() != '\n')
		continue;
}

//SingingWaiter methods
void SingerWaiter::Data()const
{
	Singer::Data();
	Waiter::Data();
}

void SingerWaiter::Get()
{
	Waiter::Get();
	Singer::Get();
}

void SingerWaiter::Set()
{
	cout << "Enter Singerwaiter's name: ";
	Worker::Get();
	Get();
}

void SingerWaiter::Show()const
{
	cout << "Catagory: singing waiter\n";
	Worker::Data();
	Data();
}
