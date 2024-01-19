#include<iostream>
using namespace std;


class hotel{
	public :
	int id;
    char name[100];
	char type[100];
	char rating[100];
	static char location[100];
	int establishyear;
	int staffquantity;
	int roomquantity;
	
	void setdata(){
		
		cout<<"Enter hotel id = ";
		cin>>id;
		cout<<"Enter hotel name = ";
		cin>>name;
		cout<<"Enter hotel rating = ";
		cin>>rating;
		cout<<"Enter hotel establish year = ";
		cin>>establishyear;
		cout<<"Enter hotel staff quantity = ";
		cin>>staffquantity;
		cout<<"Enter hotel room quantity = ";
		cin>>roomquantity;
		
	}
	void getdata()
	{
		
		cout<<"hotel id = "<<id<<endl
		    <<"hotel name = "<<name<<endl
		    <<"hotel rating = "<<rating<<endl
		    <<"hotel establish year = "<<establishyear<<endl
		    <<"hotel staff quantity = "<<staffquantity<<endl
		    <<"hotel room quantity= "<<roomquantity<<endl;
		}
		    
	
};
	
	char location[] = "surat ";
	main()
	{
		int i,n;
		cout<<"enter the no. of hotel = ";
		cin>>n;
		hotel h[n];
		
		for(i=0;i<n;i++)
		{
			h[i].setdata();
		}
		for(i=0;i<n;i++)
		{
			h[i].getdata();
			cout<<"hotel location is = "<<location<<endl;
			
		}
	}
			
	
	




	

