#include<iostream>
#include<cstring>
#include"mystring.h"
#include"date.h"
using namespace std;
class student{
	private:
		int roll;
		float gpa;
		mystring name;
		Date _date;
	public:
		student(char* , const Date &,float,int);
		student(const student &);
		void set_student_name(char *);
		const char * get_student_name() const;
		const int get_student_date() const;
		~student();
};
student::student(char * n,const Date &d,float g, int r):name(n),_date(d)
{
	name.set_string(n);/* use either setter(if setter() used in string)
	 or member initilizer (if setting by constructor)*/
	cout<<"Stdent Const"<<endl;
	gpa=g;
	roll=r;
}
/*student::student(const student & obj)
{
    name.set_student_name(obj.name.getstring())
	roll=obj.roll;
	gpa=obj.gpa;
}*/
void student::set_student_name( char * n)
{
	name.set_string(n);
}
const char *student::get_student_name() const
{
	return name.getstring();
}
const int student::get_student_date() const
{
	_date.get_Date();
}
student::~student(){
	cout<<"Student Destrucotr"<<endl;
}

int main()
{
//	mystring s("nasir hussain");  same thing we can do just by changing in parametrized constructor
//making similar to date syntax in par_const();
	Date d(11,11,2000);
	student a("Nasir Hussain",d,11.2,1);
	cout<<"Student Name : "<<a.get_student_name()<<endl;
	cout<<"Student DOB : ";
	a.get_student_date();
	a.set_student_name("Nasir");
 cout<<	a.get_student_name();

}


