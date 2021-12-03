#include<iostream>
using namespace std;
class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		Date();
	    Date(int ,int , int );
	    Date(const Date & );
	    int get_Date() const;
	    ~Date();
};
Date::Date(int d,int m,int y)
{
	cout<<"Date Const"<<endl;
	day=d;
	month=m;
	year=y;
}
Date::Date(const Date & obj)
{
	cout<<"Date Copy Const"<<endl;
	day=obj.day;
	month=obj.month;
	year=obj.year;
}
int Date::get_Date() const
{
	cout<<"Date Getter"<<endl;
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}
Date::~Date(){
	cout<<"Date Destructor"<<endl;
}

