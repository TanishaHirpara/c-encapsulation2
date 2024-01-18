#include<iostream>
using namespace std;


class hotel{
	public :
	int id;
    char name[100];
	char type[100];
	char rating[100];
	char location[100];
	int establishyear;
	int staffquantity;
	int roomquantity;
			
	
	

public:
	
	void setdata()
	{
			hotel h[5];
	
	for(int i=0;i<5;i++)
		
		cout<<"Enter hotel id = ";
		cin>>id;
		cout<<"Enter hotel name = ";
		cin>>name;
		cout<<"Enter hotel type = ";
		cin>>type;
		cout<<"Enter hotel rating = ";
		cin>>rating;
		cout<<"Enter hotel location = ";
		cin>>location;
		cout<<"Enter hotel establish year = ";
		cin>>establishyear;
		cout<<"Enter hotel staff quantity = ";
		cin>>staffquantity;
		cout<<"Enter hotel room quantity = ";
		cin>>roomquantity;
	
		
		
		
	}
	void getdata()
	{
		for(int i=0;i<5;i++)
		
		cout<<"hotel id is = "<<id<<endl
		<<"hotel name is = "<<name<<endl
		<<"hotel type is = "<<type<<endl
		<<"hotel rating is = "<<rating<<endl
		<<"hotel location is = "<<location<<endl
		<<"hotel establish year is = "<<establishyear<<endl
		<<"hotel staff quantity is = "<<staffquantity<<endl
		<<"hotel room quantity is = "<<roomquantity<<endl;
		
	

	}
	
	
};
main()
{
	
	int i,n;

	
	h1.setdata();
	h2.setdata();
	
	
	
}

