#include<iostream>
#include<conio.h>
using namespace std;
void weekday(int,int,int);
int limit(int,int);
void Month(int);
int main()
{
	int day,month,year;
	int lim;
	char ch,choice;
	cout<<"This calender is only valid after the year 1600.\n";
	do
	{
	   
	do
	{
	cout<<"Enter year:"; cin>>year;
    }while(year<1600);
	cout<<"Calender of year "<<year<<" is:"<<endl<<endl;
	for(month=1;month<=12;month++)
	{
	Month(month);
	lim=limit(month,year);
	
	for(day=1;day<=lim;day++)
	{
		cout<<"\n"<<day<<"\t";  
		weekday(day,month,year);
    }
    cout<<endl<<endl;
    ch=getch();
   }
   cout<<"Do you want to continue (Y/N): "; cin>>choice;
	}while(choice=='y'||choice=='Y');
return 0;
}



void weekday(int day,int month, int year)
{
	if(month==1 || month==2)
	year--;                 //year starts from march
	int c=year/100;    
	int y=year%100;
	float m;
	switch(month)
	{
		case 1:
		m=11; break;
		case 2:
		m=12; break;
		case 3:
		m=1;  break;
		case 4:
		m=2;  break;
		case 5: 
		m=3;  break;
		case 6:
		m=4;  break;
		case 7:
		m=5;  break;
		case 8:
		m=6;  break;
		case 9:
		m=7;  break;
		case 10:
		m=8;  break;
		case 11:
		m=9;  break;
		case 12:
		m=10; break;
		
	}
	int A=static_cast<int>(2.6*m-0.2);
	int B=static_cast<int>(c/4);
	int C=static_cast<int>(y/4);
	int W=day+A-2*c+y+B+C;  //formula from number theory   W=day+(2.6*m-0.2)-2*c+y+c/4+y/4;
		while(W<0)
		W+=7;
	 	 W=W%7;
    
	switch(W)
	{
		case 0:
		cout<<"Sunday"; break;
		case 1:
		cout<<"Monday"; break;
		case 2:
		cout<<"Tuesday"; break;
		case 3:
		cout<<"Wednesday"; break;
		case 4:
		cout<<"Thursday"; break;
		case 5:
		cout<<"Friday"; break;
		case 6:
		cout<<"Saturday"; break;
	}
}


int limit(int month,int year)
{
	int lim,y=year%100;
	switch(month)
	{
		case 1:
		lim=31; break;
		case 2: 
		if(y==0)        //leap year
		{
			if(year%400==0)
			lim=29;
			else
			{
				lim=28;
				break;
			}
		}
		else if(y%4==0)
		lim=29;
		else
		lim=28;
		break;
		case 3:
		lim=31; break;
		case 4:
		lim=30; break;
		case 5: 
		lim=31; break;
		case 6:
		lim=30; break;
		case 7:
		lim=31; break;
		case 8:
		lim=31; break;
		case 9:
		lim=30; break;
		case 10:
		lim=31; break;
		case 11:
		lim=30; break;
		case 12:
		lim=31; break;		
	}
	return lim;
}



void Month(int month)
{
	switch(month)
	{
		case 1:
			cout<<"January"; break;
		case 2:
			cout<<"February"; break;
		case 3:
			cout<<"March"; break;
		case 4:
			cout<<"April"; break;
		case 5:
			cout<<"May"; break;
		case 6:
		    cout<<"June"; break;
		case 7:
			cout<<"July"; break;
		case 8:
			cout<<"August"; break;
		case 9:
			cout<<"September"; break;
		case 10:
			cout<<"October"; break;
		case 11:
			cout<<"November"; break;
		case 12:
			cout<<"December"; break;
	}
	
}
