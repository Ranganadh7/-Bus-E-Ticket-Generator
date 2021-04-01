#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
class x{
	public:
	int age;
	long long int phone;
	char name[100],from[100],to[100];
	float fare;
	void get();
	void dis();
	void intro();
	void abus();
	void travel();
	void start();
};
void x::start()
{
	cout<<"\t\t\t\t\tWELCOME TO THE KINGHILL TRAVELS"<<endl;
	cout<<"\t\t\t\t\t"<<"DRIVEN BY PASSION. SAFE BY DESIGN"<<endl;
}
void x::get()
{
	cout<<"enter name"<<endl;
	cin>>name;
	cout<<"enter age"<<endl;
	cin>>age;
	cout<<"enter phone number"<<endl;
	cin>>phone;
	
}
void x::abus()
{
//	cout<<"*******************************************************************************************"<<endl;
	cout<<"\t\t\t"<<"AVAILABLE BUSES ARE:-"<<endl;
	cout<<"\t\t"<<"NO."<<"\t\t"<<"FROM"<<"\t\t\t"<<"TO"<<"\t\t\t"<<"TIME"<<endl;
	cout<<"\t\t"<<"1"<<"\t\t"<<"DELHI"<<"\t\t\t"<<"JALANDAR"<<"\t\t"<<"11.00pm"<<endl;
		cout<<"\t\t"<<"2"<<"\t\t"<<"AMRITSAR"<<"\t\t"<<"DELHI"<<"\t\t\t"<<"6.00pm"<<endl;
		cout<<"\t\t"<<"3"<<"\t\t"<<"PHAGWARA"<<"\t\t"<<"AMRITSAR"<<"\t\t"<<"4.00pm"<<endl;
				cout<<"\t\t"<<"4"<<"\t\t"<<"DELHI"<<"\t\t\t"<<"CHANDIGARH"<<"\t\t"<<"2.00pm"<<endl;
				cout<<"\t\t"<<"5"<<"\t\t"<<"JALANDAR"<<"\t\t"<<"LUDHIANA"<<"\t\t"<<"10.00am"<<endl;
	
	
	
}
	void x:: intro()
{
  cout<<"\t\t\t\t*\t*";
  cout<<"\t\t\t\t**\t**";
   cout<<"\t\t\t\t***\t***";
   cout<<"\t\t\t\t****\t****";
   cout<<"\t\t\t\t*****\t*****";
    cout<<"\t\t\t\t******\t******";
   cout<<"\t\t\t\t*******\t*******";
   cout<<"\t\t\t\t*******\t*******";
   cout<<"\t\t\t\t******\t******";
   cout<<"\t\t\t\t*****\t*****";
   cout<<"\t\t\t\t****\t****";
   cout<<"\t\t\t\t***\t***";
   cout<<"\t\t\t\t**\t**";
   cout<<"\t\t\t\t*\t*"<<endl;
}
void x::travel(){
	cout<<"FROM:-";
	cin>>from;
	cout<<"TO:-";
	cin>>to;
if(strcmp(from,"delhi")==0 && strcmp(to,"jalandar")==0)
	{
if(age<10)
		{
				fare=300;}
				if(age>10)
				{
					fare=600;
				}
}
if(strcmp(from,"amritsar")==0 && strcmp(to,"delhi")==0)
	{
if(age<10)
		{
				fare=250;}
				if(age>10)
				{
					fare=500;
				}
}
if(strcmp(from,"phagwara")==0 && strcmp(to,"amritsar")==0)
	{
if(age<10)
		{
				fare=200;}
				if(age>10)
				{
					fare=400;
				}
}
if(strcmp(from,"delhi")==0 && strcmp(to,"chandigarh")==0)
	{
if(age<10)
		{
				fare=280;}
				if(age>10)
				{
					fare=560;
				}
}
if(strcmp(from,"jalandar")==0 && strcmp(to,"ludhiana")==0)
	{
if(age<10)
		{
				fare=175;}
				if(age>10)
				{
					fare=350;
				}
}


}
void x::dis(){
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"\t"<<"NAME:-"<<name<<"\t\t\t\t"<<"AGE:"<<age<<"\t\t\t"<<"PHONE NO:-"<<phone<<endl;
	cout<<"\t";
	cout<<"FROM:-"<<from;
	cout<<"\t\t\t\t"<<"TO:-"<<to<<endl;
	cout<<"\t\t\t"<<"FARE:-"<<fare<<endl;
	cout<<"\t\t\t"<<"HAPPY JOURNEY"<<endl;
		cout<<"***********************************************************************************************************************"<<endl;

}
int main()
{
	system("color f4");
	x obj[10],obj1;
	obj1.start();
	int i,n;
	cout<<"enter no. of passengers to travel"<<endl;
cin>>n;
	for(i=0;i<n;i++)
{
obj[i].intro();
obj[i].abus();
	obj[i].get();
	obj[i].travel();
obj[i].intro();
	obj[i].dis();
}
}
