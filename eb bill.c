#include<iostream> 
#include<conio.h> 
using namespace std;
class ebill 
{ 
 private: 
 int cno; 
 char cname[20]; 
 int units; 
 double bill; 
 public: 
 void get() 
 { 
 cout<<"Enter Customer No,Name and No. of Units" <<endl; 
 cout<<"Enter Customer No : "; 
 cin>>cno; 
 cout<<"\nEnter Customer Name : "; 
 cin>>cname; 
 cout<<"\nEnter No. of Units used : "; 
 cin>>units; 
 } 
 void put() 
 { 
 cout<<"\nCustomer No is : "<<cno; 
 cout<<"\nCustomer Name is : "<<cname; 
 cout<<"\nNumber of Units Consumed : "<<units; 
 cout<<"\nBill of Customer : "<<bill; 
 } 
 void calc() 
 { 
 if(units<=200) 
 bill=units*1; 
 else if(units<=500) 
 bill=units*2; 
 else 
 bill=units*5; 
 } 
}; 
 int main() 
 { 
 ebill p1; 
 p1.get(); 
 p1.calc(); 
 p1.put(); 
 getch(); 
 }
