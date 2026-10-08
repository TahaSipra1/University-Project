#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>

using namespace std;

struct hous{
	int mo;
	int alli;
	int zom;
	int de;
	
};

int Rs=5000;
int mem;
int a,b,c,d;
int q=1;
int *ptr;
void zoo()
{
	char op;
	int m,n;
	cout<<"********"<<endl;
	cout<<"Rs:500 Detucted"<<endl;
	Rs=Rs-500;
	string ani[4][1]={"Animal    ZEBRA","Animal    FISH","Animal    MONKEY","Animal    ELEPHANT"};
	for(int i=0;i<4;i++)
	{
		
		for(int j=0;j<1;j++)
		{
			cout<<ani[i][j]<<endl;
		}
	}
	cout<<endl;
	cout<<"***ZEBRA***"<<endl;
	cout<<"Zebras are known for their black and white stripes."<<endl;
	cout<<"Zebras are social animals and communicate through sounds. "<<endl;
	cout<<"Their unique stripes help identify them individually."<<endl;
	cout<<endl;
	cout<<" --------------------------------------------------------"<<endl;
	Sleep(3000); 
	
	cout<<"***FISH***"<<endl;
	cout<<"Fish are aquatic animals that live in water, breathing through gills."<<endl; 
	cout<<"They come in various shapes, sizes, and colors, and are found in oceans, rivers, and lakes"<<endl;
	cout<<"Some fish are carnivores, while others are herbivores, playing a vital role in the aquatic ecosystem. "<<endl;
	cout<<endl;
	cout<<" --------------------------------------------------------"<<endl;
	Sleep(3000); 
	
	cout<<"***MONKEY***"<<endl;
	cout<<"Monkeys are agile and intelligent primates, living in groups called troops. "<<endl;
	cout<<"They are known for their social behavior and are skilled at climbing trees"<<endl;
	cout<<"Monkeys are found in tropical forests and are known for their playful nature."<<endl;
	cout<<"They communicate through vocalizations and body language."<<endl;
	cout<<endl;
	cout<<" --------------------------------------------------------"<<endl;
	Sleep(3000);
	
	cout<<"***ELEPHANT***"<<endl;
	cout<<"Elephants are large, intelligent mammals with distinctive trunks and tusks."<<endl;
	cout<<"They have strong family bonds and live in herds, led by a matriarchal figure. "<<endl;
	cout<<"They are herbivores, eating plants, fruits, and bark, and are found in savannas and forests."<<endl;
	cout<<endl;
	cout<<" --------------------------------------------------------"<<endl;
	Sleep(3000);
	
	
	cout<<"Do you want to ride a elephant ('y' for yes) or ('n' for No)"<<endl;
	cin>>op;
	if(op=='y')
	{
		cout<<" Per person price for ride  of Elephant is Rs:200"<<endl;
		if(Rs!=0&&Rs>=200)
		{
		cout<<"How many Person wants to take a ride"<<endl;
		cin>>m;
		if(mem>=m)
		{
			n=m*200;
		    Rs=Rs-n;
		}
		else 
		cout<<"Persons is more than more family member"<<endl;
		
		}
		else
	    cout<<"Your Balance is low"<<endl;
		
	}
	cout<<"Your Balance is"<<Rs<<endl;
	
	
}

void ride()
{   

	int op,m,ne;
	cout<<"How Many person taking a ride"<<endl;
	cin>>m;
	if(m==0)
	
	{
		cout<<"1 member is compulsory "<<endl;
		cout<<"How Many persons taking a ride"<<endl;
		cin>>m;	
	}
	char ch;
	if(mem>=m)
	{
	do
	{
		
	cout<<"Enter 1  Ferris Wheel   =150 "<<endl;
	cout<<"Enter 2  coaster        =400 "<<endl;
	cout<<"Enter 3  Bumper Cars    =200 "<<endl;
	cout<<"Enter 4  Drop  Tower    =150 "<<endl;
	cin>>op;
		if(op==1)
	{
		ne=m*150;
		if(Rs!=0&&Rs>=ne)
		{
			Rs=Rs-ne;
		cout<<"Your ride a Ferris Wheel"<<endl;
		}
		else 
		cout<<"You Balance is Low"<<endl;
	}
	else if(op==2)
	{
		ne=m*400;
		if(Rs!=0&&Rs>=ne)
		{
			Rs=Rs-ne;
		cout<<"Your ride a coaster"<<endl;
		}
		else 
		cout<<"You Balance is Low"<<endl;
	}
	else if(op==3)
	{
		ne=m*200;
		if(Rs!=0&&Rs>=ne)
		{
			Rs=Rs-ne;	
		cout<<"Your ride a Bumper Cars"<<endl;
		}
		else 
		cout<<"You Balance is Low"<<endl;
	}
	else if(op==4)
	{
		ne=m*300;
		if(Rs!=0&&Rs>=ne)
		{
			Rs=Rs-ne;
		cout<<"Your ride a Drop  Tower "<<endl;
		}
		else 
		cout<<"You Balance is Low"<<endl;
	}
	else 
	{
		cout<<"Atleast 1 Ride is compulsory"<<endl;
		ride();
	}
	if(Rs!=0&&Rs>0)
	{
	cout<<"**Do you want to  Ride More? Press('y' for yes) and ('n' for no) **"<<endl;
	cin>>ch;
	}
	
    }while(ch=='y');
		
	}
	else 
	cout<<"Persons is more than more family member"<<endl;
	
	cout<<"Your Balance is "<<Rs<<endl;


}

void house()
{
	hous h1;
	int ar;
	cout<<"Here is a puzzle for you "<<endl;
	string hou[4]={"Monsters","Alliens","Zoombies","Demogorgons"};
	cout<<"Tell Monsters  is in which index"<<endl;
	cin>>ar;
	if(ar==0)
	{
		cout<<"You guess write "<<endl;
		cout<<"Now tell Alliens is in which index "<<endl;
		cin>>ar;
		if(ar==1)
		{
			cout<<"You guess write "<<endl;
			cout<<"Now tell Zoombies is in which index "<<endl;
		    cin>>ar;
		    if(ar==2)
		    {
		    	cout<<"You guess write "<<endl;
			    cout<<"Now tell Zoombies is in which index "<<endl;
		        cin>>ar;
		        if(ar==3)
		        {
		        	cout<<"You guess All correct thats why you win a reward Rs:300 "<<endl;
		        	Rs=Rs+300;
				}
				else
				{
					cout<<"You guess Wrong"<<endl;
					Rs=Rs-250;
				}
			}
			else
		    {
		    cout<<"You guess Wrong"<<endl;
		    Rs=Rs-250;
	        }
		}
		else
		{
		cout<<"You guess Wrong"<<endl;
		Rs=Rs-250;
	    }
	}
	else
	{
		cout<<"You guess Wrong"<<endl;
		Rs=Rs-250;
	}
	
	int t;
	char gss;
	ptr=&q;
	do
	{
		
		if(*ptr<=3)
	{
		cout<<"**You have only 3 change to guess the no of haunted characters**"<<endl;
		
	  cout<<" Guess No of Monsters ";
	cin>>h1.mo;
	if(h1.mo==a)
	{	
		cout<<"You Win reward Rs"<<endl;
		Rs=Rs+100;
	}
	else
	{
		t=h1.mo-(a*10);
		Rs=Rs-abs(t);
	}
	
	
	cout<<" Guess No of Alliens";
	cin>>h1.alli;
	if(h1.alli==b)
	{
		cout<<"You Win reward Rs:100"<<endl;
		Rs=Rs+100;
	}
	else
	{
		t=h1.alli-(b*10);
		Rs=Rs-abs(t);
	}
	
	
	cout<<" Guess No of Zoombies";
	cin>>h1.zom;
	if(h1.zom==c)
	{
		cout<<"You Win reward Rs:100"<<endl;
		Rs=Rs+100;
	}
	else
	{
		t=h1.zom-(c*10);
		
		Rs=Rs-abs(t);
	}
	
	cout<<" Guess No of Demogorgons";
	cin>>h1.de;
	if(h1.de==d)
	{
		cout<<"You Win reward Rs:100"<<endl;
		Rs=Rs+100;
	}
	else
	{
		t=h1.de-(d*100);
		Rs=Rs-abs(t);
	}
	if(h1.mo==a&&h1.alli==b&&h1.zom==c&&h1.de==d)
	{
		cout<<"You Guesss  write ALL the no of characters correct"<<endl;
		*ptr=4;
	}
	
	
	*ptr++;
	
	}
	else
	{
		cout<<"**Limit for guess no of haunted Characters is full**"<<endl; 
		
	}
	if(*ptr<=3)
		{
			cout<<"****Want to guess more if you want so plz press 'y'****"<<endl;
			cin>>gss;
		}
		else
		{
			gss='n';
		}
	
	
	
	}while(gss=='y');
	

	
	cout<<"****Correct Elements are ****"<<endl;
	cout<<"Monsters are : "<<a<<endl;
	cout<<"Alliens are : "<<b<<endl;
	cout<<"Zoombies are : "<<c<<endl;
	cout<<"Demogorgons are : "<<d<<endl;
	
	cout<<"Your Balance is"<<Rs<<endl;
	
	
}



int main()
{
	
cout<<"***OWNER*** "<<endl;
cout<<"No of characters of Hunted house"<<endl;
srand(time(0));
a=rand()%10+1;
b=rand()%10+1;
c=rand()%10+1;
d=0;

cout<<"No of Monsters in Haunted house :"<<a<<endl;

cout<<"No of Alleins in Haunted house : "<<b<<endl;

cout<<"No of zoombies in Haunted house : "<<c<<endl;

cout<<"No of Demogorgons in Haunted house : "<<d<<endl;;
Sleep(2000);
system("cls");

cout<<"---Welcome to Amusement Park---"<<endl;
cout<<" ****Now Your Balance is Rs:5000 ****"<<endl;
cout<<"How many Members of your Family"<<endl;
cin>>mem;
cout<<"Enter each member of age For ticket "<<endl;
cout<<"Age ( 0 to 6 ) Price is Rs:150 \t"<<endl;
cout<<"Age ( 7 to 15 ) Price is Rs:100 \t"<<endl;
cout<<"Age ( 16 to Onward ) Price is Rs:50 \t"<<endl;
int age[mem];
for(int i=0;i<mem;i++){
	cout<<"Age of Member  Number "<<i+1<< ": ";
	cin>>age[i];
	}
for(int i=0;i<mem;i++){
	if(age[i]>=1&&age[i]<=6)
	{
		Rs=Rs-150;
		
	}
	else if(age[i]>=7&&age[i]<=15)
	{
		Rs=Rs-100;
		
		
	}
	else if(age[i]>=16)
	{
		Rs=Rs-50;
		
	}
	else 
	cout<<"Invalid Key"<<endl;
}
cout<<"Your Balance is "<<Rs<<endl;
int op;
char ch;
cout<<"Enter 'y' for Entering in Jurrasic Amusement Park"<<endl;
cin>>ch;
while(ch=='y')
{
cout<<"Enter (1) For Enter in ZOO (Rs :500) For Family "<<endl;
cout<<"Enter (2) For Enter in RIDE "<<endl;
cout<<"Enter (3) For Enter in HAUNTED HOUSE "<<endl;
cin>>op;
if(op==1)
{
	if(Rs!=0&&Rs>=500)
	{
		zoo();
	}
	else 
	cout<<"Balance is low"<<endl;
	
}
else if(op==2)
{
	if(Rs!=0&&Rs>0)
	{
		ride();
	}
	else 
	cout<<"Balance is low"<<endl;
}
else if(op==3)
{
	if(Rs!=0&&Rs>0)
	{
		
		house();
	}
	else 
	cout<<"Balance is low"<<endl;
	
}
else 
{
	cout<<"Invalid Key"<<endl;
}


if(Rs!=0&&Rs>0)
{
cout<<"Do you Want to stay in Park ??"<<endl;
cout<<"**If you want to stay in Press ('y'for Yes) **"<<endl;
cout<<"**If you don't want to stay in Press ('n'for Yes) **"<<endl;
cin>>ch;
}

else
ch='n';


}

cout<<"----Have a Nice  Day in Jurrasic Amusement Park ----"<<endl;
cout<<"----Thank You so much for coming----"<<endl;
cout<<"You save a Rs:"<<Rs<<endl;

return 0;
}

