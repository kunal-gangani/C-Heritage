#include<iostream>
using namespace std;
class EmployeeInfo{
	public:
		int emid;
		int emage;
		int salary;
};
class EmployeeInfo2{
	public:
		char fname[25];
		char sname[25];
		char desgnt[25];
};
class GetDetails : public EmployeeInfo, public EmployeeInfo2{
	public:
		void SetValues(){
			cout<<"Enter Employee ID : ";
			cin>>emid;
			cout<<"Enter Employee Age : ";
			cin>>emage;
			cout<<"Enter Employee First Name : ";
			cin>>fname;
			cout<<"Enter Employee Surname : ";
			cin>>sname;
			cout<<"Enter Employee Designation : ";
			cin>>desgnt;
			cout<<"Enter Employee Salary : ";
			cin>>salary;
		}
		void GetValues(){
			cout<<" Employee ID is : "<<emid<<endl;
			cout<<" Employee First Name is : "<<fname<<endl;
			cout<<" Employee Surname is : "<<sname<<endl;
			cout<<" Employee Age is : "<<emage<<endl;
			cout<<" Employee Designation is : "<<desgnt<<endl;
			cout<<" Employee Salary is : "<<salary<<endl;
		}
};
int main(){
	int i,n;
	cout<<"Enter the Number of Employee Details you Want : ";
	cin>>n;
	GetDetails g[n];
	for(i=0;i<n;i++){
		g[i].SetValues();
	}
	for(i=0;i<n;i++){
		g[i].GetValues();
	}
	return 0;
}
