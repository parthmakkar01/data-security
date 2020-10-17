#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;
int main()
{
	int s=0;
	fstream fo;
	fo.open("part.txt");					//everytime initially insert a new empty file 
	fo>>s;

	fo.close();
	if(s==0)
	{
		fstream f;
		f.open("part.txt");

	int mn;
	time_t now = time(0);
   	tm *ltm = localtime(&now);
   	mn=ltm->tm_min;

	
   	int x=mn+50;		//here whatever the minutes i will add within 1-60 the boss will able to enter in main if condition after that number of minutes
	if(x>=60)
	{
		x=x-60;
	}						
   	f<<x;

   	f.close();
   	}
		
		
		
	int ch;
	fstream fin;
	fin.open("part.txt");
	fin>>ch;
	cout<<ch<<endl;
	
	int mn;
	time_t now = time(0);
   	tm *ltm = localtime(&now);
   	mn=ltm->tm_min;
	cout <<mn<<endl;
	
	if(mn>=ch)				//if is a working area where there are important files.
	{
		cout<<"welcome boss";
	}
	else
	{
		cout<<"no you cannot enter";
	}
	fin.close();

}
