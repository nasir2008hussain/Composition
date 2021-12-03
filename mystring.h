#include<iostream>
#include<cstring>
using namespace std;
class mystring{
	private:
		char * strng;
	public:
	    mystring();
	    mystring(char *);
		void set_string( char *s);
		mystring( const mystring & );
		const char *getstring() const;
		~mystring();
};
mystring::mystring(char* s)
{
	cout<<"String Par_const"<<endl;
	strng=new char[strlen(s)+1];
	strcpy(strng,s);
}
void mystring::set_string(char *s)
{
	cout<<"String Setter"<<endl;
	if(strng!=NULL)
	{
		delete [] strng;
		strng=NULL;
	}
	if(s!=NULL)
	{
	strng=new char[strlen(s)+1];
	strcpy(strng,s);
    }
}
mystring::mystring(const mystring & s)
{
	cout<<"String Copy const"<<endl;
	if(s.strng != NULL){
	
	strng=new char[strlen(s.strng)+1];
	strcpy(strng,s.strng);
}
 else
    strng=NULL;
}
const char *mystring::getstring() const
{
	cout<<"String Getter "<<endl;
	return strng;
}
mystring::~mystring()
{
	cout<<"String Destructor"<<endl;
	delete[] strng;
}
