//THE AURTHOR OF THE PROGRAM IS J ALLWIN TITUS
//DATE CREATED AND CODED :18-07-2022
//TIME OF THE CODE IS CODED :14:52 OR 2:52 PM
//QUESTION NO 13
/*1. Design a base class “person” (name, address, phone_no). Derive a class “employee” (e_no,
ename) from “person”. Derive a class “manager” (designation, department, basic_salary)
from “employee”. Write a menu driven program to
· Accept all details of ‘n’ manager.
· Display manager having highest salary. (Use private inheritance).*/
#include<iostream>
#include<string>
int n;int high=0;int i;
using namespace std;
class person{
protected:
    char name[30];
    string address;
    char phone_no[10];
public:
    void get_data()
    {

        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the address:";
        cin>>address;
        cout<<"enter the phone number:";
        cin>>phone_no;
    }
    void display_data()
    {

        cout<<"name:"<<name<<endl;
        cout<<"address:"<<address<<endl;
        cout<<"phone number:"<<phone_no<<endl;
    }
};
class employee:person{;
private:

    int emp_no;
public:
    void get_employee()
    {
        get_data();

        cout<<"enter the employee no:";
        cin>>emp_no;
    }
    void display_employee()
    {
        display_data();
        cout<<"employee number:"<<emp_no<<endl;

    }
};
class manager:private employee{
private:
    char designation[30];
    char departments[30];
     int salary1;
public:
    void get_manager()
    {
        get_employee();
        cout<<"enter the designation:";
        cin>>designation;
        cout<<"enter the department:";
        cin>>departments;
        cout<<"enter the salary:";
        cin>>salary1;
    }
void display_manager()
{
    display_employee();
    cout<<"designation:"<<designation<<endl;
    cout<<"department:"<<departments<<endl;
    cout<<"salary1:"<<salary1<<endl;
}

int salary(manager m1[])
    {
    	int max1,high;
    	for(int i=0;i<n;i++)
		 {
		 	max1=m1[0].salary1;
		 	if(m1[i].salary1>max1)
		 	{
		 		high=m1[i].salary1;
			}
		 }
		 cout<<"the highest salary is :";
		 cout<<high<<endl;
    }
};

int main()
{

    cout<<"enter the size of the record:";
    cin>>n;
    manager m1[n];   //declaring array of objects
    for(i=0;i<n;i++)
    {
        m1[i].get_manager();
        m1[i].display_manager();
        m1[i].salary(m1);
    }

    return 0;
}

