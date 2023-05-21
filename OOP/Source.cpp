#include<iostream>
#include "Box.h"
using namespace std;

//struct Test {
//	int data1;
//	int data2;
//};

// access modifier
// public protected private
//class Test {
//	int data1;
//public:
//	int data2;
//};
//
//void main() {
//	Test t;
//	/*t.data1 = 10;
//	cout << t.data1 << endl;*/
//}



//variables - field , member , attributes
//functions - method,attributes,member


//class Data {
//private:
//	int data1;
//	int data2;
//public:
//	void InitData(int d1, int d2) {
//		data1 = d1;
//		data2 = d2;
//	}
//	void Show() {
//		cout << "Data " << data1 << endl;
//		cout << "Data " << data2 << endl;
//	}
//};
//
//void main() {
//	Data obj;//obj - obyekt ve ya instance
//	obj.InitData(50, 100);
//	obj.Show();
//
//	Data obj2;
//	obj2.InitData(10, 20);
//	obj2.Show();
//}

//class Product {
//private:
//	char name[30]{};
//	double price;
//	double discount;
//public:
//
//	/*Product() {
//		cout << "Default constructor" << endl;
//		strcpy_s(name, "no name");
//		price = 0;
//		discount = 0;
//	}*/
//
//	Product(const char*n,double p,double d)
//	{
//		cout << "Parametric constructor" << endl;
//		strcpy_s(name, n);
//		price = p;
//		discount = d;
//	}
//
//	void SetData(const char* n, double p, double d) {
//		strcpy_s(name, n);
//		price = p;
//		discount = d;
//	}
//
//	void Show() {
//		cout << "Product Info" << endl;
//		cout << "Name : " << name << endl;
//		cout << "Price : " << price << endl;
//		cout << "Discount : " << discount << endl;
//	}
//};
//
//void main() {
//	//Product p;
//	//p.SetData("Samsung Galaxy S21", 1820, 3);
//	//p.Show();
//	
//	Product iphonePrd("Iphone 12 Pro",2200,5);
//
//	iphonePrd.Show();
//	//Product p2;
//}



//Accessor   
// setter or modificator
// getter or inspector

//void main() {
//	/*Product p("Asus", 100, 10);
//	p.SetPrice(-110);
//	p.Show();*/
//	//cout << p.GetName() << endl;
//
//}


//class Box {
//	double length=0;
//	double breadth=0;
//	double height=0;
//public:
//	Box()
//	{
//		length = 0;
//		breadth = 0;
//		height = 0;
//	}
//	
//	Box(double l,double b,double h)
//	{
//		length = l;
//		breadth = b;
//		height = h;
//	}
//
//	double GetVolume() {
//		return length * breadth * height;
//	}
//};


//void main() {
//	Box box(10,20,30);
//	cout << box.GetVolume() << endl;
//}




class Product {
private:
	char name[30]{};
	double price = 0;
	double discount = 0;
public:

	Product() {
		strcpy_s(name, "no name");
		price = 0;
		discount = 0;
	}

	Product(const char* n, double p, double d)
	{
		SetName(n);
		SetPrice(p);
		SetDiscount(d);
	}

	char* GetName() {
		return name;
	}

	double GetPrice() {
		return price;
	}

	double GetDiscount() {
		return discount;
	}

	void SetName(const char* n) {
		if (n != nullptr) {
			int l = strlen(n);
			if (l >= 3) {
				strcpy_s(name, n);
			}
			else {
				cout << "At least 3 characters" << endl;
			}
		}
	}

	void SetPrice(double p) {
		if (p >= 0) {
			price = p;
		}
		else {
			cout << "Price should be greater than 0" << endl;
		}
	}

	void SetDiscount(double d) {
		if (d >= 0) {
			discount = d;
		}
		else {
			cout << "Discount should be greater than 0" << endl;
		}
	}

	void Show() {
		cout << "Product Info" << endl;
		cout << "Name : " << name << endl;
		cout << "Price : " << price << endl;
		cout << "Discount : " << discount << endl;
	}
};

//Car =>model,vendor,engine
//default cons,param cons
//getter , setter
//show
