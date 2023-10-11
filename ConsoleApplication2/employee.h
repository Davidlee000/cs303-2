#include <string>
#include<iostream>
using namespace std;

class Employee {

//shared attributes
protected:
	string name;
	double hourlypay;

public:
	Employee(string n, double pay) :name(n), hourlypay(pay) {}
	virtual double weekly_salary()=0;
	virtual double healtcare_contributions() = 0;
	virtual double vacation_days() = 0;

};

class professional : public Employee {
private:
	int total_vacation;
public:
	professional(string n, double pay, int total_v) :Employee(n, pay), total_vacation(total_v) {}

	//weekly salary  40hr work week
	double weekly_salary()override {
		return hourlypay * 40;
	}
	//contribution based on payrate
	double healtcare_contributions()override {
		return hourlypay * 4;
	}
	//vacation days are given not earned
	double vacation_days()override {
		return total_vacation;
	}
	

};

class nonprofessional : public Employee {
private:
	int hours_worked;
public:
	nonprofessional(string n, double pay, int hours) :Employee(n, pay), hours_worked(hours) {}
	//weekly salary based on hours worked
	double weekly_salary()override {
		return hourlypay * hours_worked;
	}
	//contribution based on hours worked
	double healtcare_contributions()override {
		return hours_worked * 2;
	}
	//vacation days reflect hours worked
	double vacation_days()override {
		return hours_worked / 100;
	}

};