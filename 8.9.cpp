#include<iostream>
#include<conio.h>
class employee
{
	protected:
	int employee;
	long salary;
	public:
	void setE()
	{
	cout<<"enter employee id";
	cin>>employee;
	cout<<"enter salary";
	cin>>salary;	
	}
	void showE()
	{
		cout<<"en;loyee id:"<<employee<<endl;
		cout<<"salary"<<salary<<endl;
	}
	};
	class manager: public employee
	{
	private:
	int depltd:
	public:
	int setm()
	{
	cout<<"enter department id:";
	cin>>depltd;
    }
    void showm()
    {
    	cout<<"deplt id"<<depltd<<endl;
	}
};
void main()
{
	manager m;
	m.setE();
	m.showE();
	m.setm();
	return(0);
}