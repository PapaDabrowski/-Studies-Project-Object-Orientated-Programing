//Created by PAPA Dąbrowski
#include "App.h"
#include "Handgun.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ostream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

App_Singleton * App_Singleton::instance=0;
App_Singleton * App_Singleton::getInstance()
{
	if(instance==0)
	{
		instance=new App_Singleton;
	}
	else
	return instance;
}

App_Singleton::App_Singleton()
{
	Menu();
}

void App_Singleton::Create(unsigned int X)
{
  cout<<"What type od Weapon you want to create"<<endl;
  cout<<"Wybierz 1 by stworzyć Pasazerski:"<<endl;
  cout<<"Wybierz 2 by stworzyć Towarowy"<<endl;
  cout<<"Wybierz 3 by wybrać Wojskowy"<<endl;
  cout<<"Wybierz 4 by wybrać Odrzutowiec"<<endl;
  cout<<"Wybierz 5 by wybrać Myśliwiec"<<endl;
  try{
	 cin>>select;
	 if(cin.fail())
	 {
    throw WrongValue(9);
		system("clear");
	 }
	if((select>7) || (select<0))
  {
  	throw WrongValue(9);
		system("clear");
  }
}
catch(WrongValue obj)
{
	system("clear");
	cout<<obj.what()<<endl<<endl;
	cin.clear();
	cin.ignore(300, '\n');
}
catch(...)
{
	std::cout << "Undefined behaviour!" <<endl<<endl;
}
try{
    switch(select)
    {
     bool Silencer_;
     unsigned int MagSize_,Range_,Weight_,Rate_,Scope_,MuzzleVelocity_;
     float LiczbaSilnikow_;
     case 1:
     {
        cout<<"Enter the LiczbaSilnikow of your Weapon"<<endl<<"Type number: ";
				cin>>LiczbaSilnikow_;
				if(cin.fail()) throw WrongValue(1);
				if(LiczbaSilnikow_<=0) throw WrongValue(1);
        cout<<"Enter the MagSize of your Weapon"<<endl<<"Type number: ";
				cin>>MagSize_;
 				if(cin.fail()) throw WrongValue(2);
        if(MagSize_==0)throw WrongValue(2);
        cout<<"Enter the MuzzleVelocity of your Weapon"<<endl<<"Type number: ";
				cin>>MuzzleVelocity_;
				if(cin.fail()) throw WrongValue(3);
        if(MuzzleVelocity_==0) throw WrongValue(3);
        cout<<"Enter the Range of your Weapon"<<endl<<"Type number: ";
				cin>>Range_;
				if(cin.fail()) throw WrongValue(4);
        if(Range_==0) throw WrongValue(4);
        cout<<"Enter the Weight of your Weapon"<<endl<<"Type number: ";
				cin>>Weight_;
			  if(cin.fail()) throw WrongValue(5);
        if(Weight_==0) throw WrongValue(5);
        cout<<"Enter the Fire Rate of your Weapon"<<endl<<"Type number: ";
				cin>>Rate_;
				if(cin.fail()) throw WrongValue(6);
        if(Rate_==0) throw WrongValue(6);
	      Weapon *Object=new AssaultRifle(X,LiczbaSilnikow_,MagSize_,MuzzleVelocity_,
        Range_,Weight_,Rate_);
        Case.AddElement(Object);
				system("clear");
		    cout<<endl<<"Object has been created!"<<endl<<endl;
        break;
     }
     case 2:
     {
			 cout<<"Enter the LiczbaSilnikow of your Weapon"<<endl<<"Type number: ";
			 cin>>LiczbaSilnikow_;
			 if(cin.fail()) throw WrongValue(1);
			 if(LiczbaSilnikow_<=0) throw WrongValue(1);
			 cout<<"Enter the MagSize of your Weapon"<<endl<<"Type number: ";
			 cin>>MagSize_;
			 if(cin.fail()) throw WrongValue(2);
			 if(MagSize_==0)throw WrongValue(2);
			 cout<<"Enter the MuzzleVelocity of your Weapon"<<endl<<"Type number: ";
			 cin>>MuzzleVelocity_;
			 if(cin.fail()) throw WrongValue(3);
			 if(MuzzleVelocity_==0) throw WrongValue(3);
			 cout<<"Enter the Range of your Weapon"<<endl<<"Type number: ";
			 cin>>Range_;
			 if(cin.fail()) throw WrongValue(4);
			 if(Range_==0) throw WrongValue(4);
			 cout<<"Enter the Weight of your Weapon"<<endl<<"Type number: ";
			 cin>>Weight_;
			 if(cin.fail()) throw WrongValue(5);
			 if(Weight_==0) throw WrongValue(5);
			 cout<<"Enter the Scope of your Weapon"<<endl<<"Type number: ";
			 cin>>Scope_;
			 if(cin.fail()) throw WrongValue(7);
			 if((Scope_%2!=0)||(Scope_==0)) throw WrongValue(7);
       Weapon *Object=new SniperRifle(X,LiczbaSilnikow_,
       MagSize_,MuzzleVelocity_,Range_,Weight_,Scope_);
       Case.AddElement(Object);
			 system("clear");
	     cout<<endl<<"Object has been created!"<<endl<<endl;
    	 break;
     }
     case 3:
     {
			 cout<<"Enter the LiczbaSilnikow of your Weapon"<<endl<<"Type number: ";
 			 cin>>LiczbaSilnikow_;
 			 if(cin.fail()) throw WrongValue(1);
 			 if(LiczbaSilnikow_<=0) throw WrongValue(1);
 			 cout<<"Enter the MagSize of your Weapon"<<endl<<"Type number: ";
 			 cin>>MagSize_;
 			 if(cin.fail()) throw WrongValue(2);
 			 if(MagSize_==0)throw WrongValue(2);
 			 cout<<"Enter the MuzzleVelocity of your Weapon"<<endl<<"Type number: ";
 			 cin>>MuzzleVelocity_;
 			 if(cin.fail()) throw WrongValue(3);
 			 if(MuzzleVelocity_==0) throw WrongValue(3);
 			 cout<<"Enter the Range of your Weapon"<<endl<<"Type number: ";
 			 cin>>Range_;
 			 if(cin.fail()) throw WrongValue(4);
 			 if(Range_==0) throw WrongValue(4);
 			 cout<<"Enter the Weight of your Weapon"<<endl<<"Type number: ";
 			 cin>>Weight_;
 			 if(cin.fail()) throw WrongValue(5);
 			 if(Weight_==0) throw WrongValue(5);
       cout<<"Do you want a Silencer to your Handgun"<<endl<<"Type number [1/0]: ";
		   cin>>Silencer_;
			 if(cin.fail()) throw WrongValue(8);
			 if((Silencer_!=0) && (Silencer_!=1)) throw WrongValue(8);
       Weapon *Object= new Handgun(X,LiczbaSilnikow_,
       MagSize_,MuzzleVelocity_,Range_,Weight_,Silencer_);
       Case.AddElement(Object);
			 system("clear");
	     cout<<endl<<"Object has been created!"<<endl<<endl;
			 break;
      }
			case 4:
			{
			 cout<<"Enter the LiczbaSilnikow of your Weapon"<<endl<<"Type number: ";
 			 cin>>LiczbaSilnikow_;
 			 if(cin.fail()) throw WrongValue(1);
 			 if(LiczbaSilnikow_<=0) throw WrongValue(1);
 			 cout<<"Enter the MagSize of your Weapon"<<endl<<"Type number: ";
 			 cin>>MagSize_;
 			 if(cin.fail()) throw WrongValue(2);
 			 if(MagSize_==0)throw WrongValue(2);
 			 cout<<"Enter the MuzzleVelocity of your Weapon"<<endl<<"Type number: ";
 			 cin>>MuzzleVelocity_;
 			 if(cin.fail()) throw WrongValue(3);
 			 if(MuzzleVelocity_==0) throw WrongValue(3);
 			 cout<<"Enter the Range of your Weapon"<<endl<<"Type number: ";
 			 cin>>Range_;
 			 if(cin.fail()) throw WrongValue(4);
 			 if(Range_==0) throw WrongValue(4);
 			 cout<<"Enter the Weight of your Weapon"<<endl<<"Type number: ";
 			 cin>>Weight_;
 			 if(cin.fail()) throw WrongValue(5);
 			 if(Weight_==0) throw WrongValue(5);
			 cin>>Rate_;
			 if(cin.fail()) throw WrongValue(6);
			 if(Rate_==0) throw WrongValue(6);
			 cout<<"Do you want a Silencer to your PDW"<<endl<<"Type number [1/0]: ";
			 cin>>Silencer_;
			 if(cin.fail()) throw WrongValue(8);
			 if((Silencer_!=0) && (Silencer_!=1)) throw WrongValue(8);
			 Weapon *Object=new PDW(X,LiczbaSilnikow_,
			 MagSize_,MuzzleVelocity_,Range_,Weight_,Rate_,Silencer_);
			 Case.AddElement(Object);
			 system("clear");
	     cout<<endl<<"Object has been created!"<<endl<<endl;
			 break;
		  }
		  case 5:
		  {
				cout<<"Enter the LiczbaSilnikow of your Weapon"<<endl<<"Type number: ";
  			cin>>LiczbaSilnikow_;
  			if(cin.fail()) throw WrongValue(1);
  			if(LiczbaSilnikow_<=0) throw WrongValue(1);
  			cout<<"Enter the MagSize of your Weapon"<<endl<<"Type number: ";
  			cin>>MagSize_;
  			if(cin.fail()) throw WrongValue(2);
  			if(MagSize_==0)throw WrongValue(2);
  			cout<<"Enter the MuzzleVelocity of your Weapon"<<endl<<"Type number: ";
  			cin>>MuzzleVelocity_;
  			if(cin.fail()) throw WrongValue(3);
  			if(MuzzleVelocity_==0) throw WrongValue(3);
  			cout<<"Enter the Range of your Weapon"<<endl<<"Type number: ";
  			cin>>Range_;
  			if(cin.fail()) throw WrongValue(4);
  			if(Range_==0) throw WrongValue(4);
  			cout<<"Enter the Weight of your Weapon"<<endl<<"Type number: ";
  			cin>>Weight_;
  			if(cin.fail()) throw WrongValue(5);
  			if(Weight_==0) throw WrongValue(5);
				cout<<"Enter the Fire Rate of your Weapon"<<endl<<"Type number: ";
				cin>>Rate_;
				if(cin.fail()) throw WrongValue(6);
				if(Rate_==0) throw WrongValue(6);
				Weapon *Object=new LMG(X,LiczbaSilnikow_,MagSize_,MuzzleVelocity_,
				Range_,Weight_,Rate_);
				Case.AddElement(Object);
				system("clear");
		    cout<<endl<<"Object has been created!"<<endl<<endl;
			  break;
		   }
		   case 6:
		   {
				 cout<<"Enter the LiczbaSilnikow of your Weapon"<<endl<<"Type number: ";
   			 cin>>LiczbaSilnikow_;
   			 if(cin.fail()) throw WrongValue(1);
   			 if(LiczbaSilnikow_<=0) throw WrongValue(1);
   			 cout<<"Enter the MagSize of your Weapon"<<endl<<"Type number: ";
   			 cin>>MagSize_;
   			 if(cin.fail()) throw WrongValue(2);
   			 if(MagSize_==0)throw WrongValue(2);
   			 cout<<"Enter the MuzzleVelocity of your Weapon"<<endl<<"Type number: ";
   			 cin>>MuzzleVelocity_;
   			 if(cin.fail()) throw WrongValue(3);
   			 if(MuzzleVelocity_==0) throw WrongValue(3);
   			 cout<<"Enter the Range of your Weapon"<<endl<<"Type number: ";
   			 cin>>Range_;
   			 if(cin.fail()) throw WrongValue(4);
   			 if(Range_==0) throw WrongValue(4);
   			 cout<<"Enter the Weight of your Weapon"<<endl<<"Type number: ";
   			 cin>>Weight_;
   			 if(cin.fail()) throw WrongValue(5);
   			 if(Weight_==0) throw WrongValue(5);
				 cout<<"Enter the Fire Rate of your Weapon"<<endl<<"Type number: ";
				 cin>>Rate_;
				 if(cin.fail()) throw WrongValue(6);
				 if(Rate_==0) throw WrongValue(6);
				 cout<<"Enter the Scope of your Weapon"<<endl<<"Type number: ";
				 cin>>Scope_;
				 if(cin.fail()) throw WrongValue(7);
				 if((Scope_%2!=0)||(Scope_==0)) throw WrongValue(7);
      	 Weapon *Object=new DMR(X,LiczbaSilnikow_,
				 MagSize_,MuzzleVelocity_,Range_,Weight_,Rate_,Scope_);
			   Case.AddElement(Object);
				 system("clear");
		     cout<<endl<<"Object has been created!"<<endl<<endl;
			   break;
		   }
	}
}
  catch(WrongValue obj)
	{
    system("clear");
    cout<<obj.what()<<endl<<endl;
		cin.clear();
		cin.ignore(300,'\n');
	}
	catch(...)
	{
		std::cout << "Undefined behaviour!" <<endl<<endl;
	}
}

void App_Singleton::Menu()
{
  int i=0;
  int j,k;
  unsigned int ID=1;
while(i!=1)
 {
if(Case.GetCounter()==0)
{
	cout<<"Welcome to App which create and store Wepons"<<endl;
  cout<<"Options:"<<endl;
	cout<<"1-Create"<<endl;
	cout<<"2-Load"<<endl;
	cout<<"3-End Program"<<endl;
  cout<<"Type number: ";
	do
	{
  cin>>k;
	if(cin.fail())
	{
		 cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
		 cin.clear();
		 cin.ignore(300, '\n');
		 continue;
	}
	else break;
  }while(true);
	if((k==1)||(k==2)||(k==3))
	{
		switch(k)
		{
			 case 1:
			 {
       bool IDstatus=false;
			 int w=0;
			 system("clear");
       while(Case.GetCounter()!=w)
			 {
			       for(int h=0;h<Case.GetCounter();h++)
				     if(Case[h]->GetId()==ID) IDstatus=true;
             if(IDstatus==true)
				     {
                ID+=1;
					      w=0;
				     }
             else w+=1;
				     IDstatus=false;
			 }
 			 Create(ID);
       ID+=1;
			 break;
			 }
			 case 2:
			 {
       system("clear");
			 Load();
			 break;
			 }
			 case 3:
			 {
			 i+=1;
			 break;
			 }
		}
  }
	else cout<<"Wrong Number!"<<endl;
}
if(Case.GetCounter()!=0)
{
  cout<<"Options:"<<endl;
  cout<<"1-Create"<<endl;
  cout<<"2-Remove"<<endl;
	cout<<"3-Show All Objects"<<endl;
	cout<<"4-Save"<<endl;
  cout<<"5-End Program"<<endl;
	cout<<"Type number: ";
	do
	{
	cin>>j;
  if(cin.fail())
	{
     cout<<"You have typed wrong number!"<<endl<<"Type Again: ";
		 cin.clear();
	   cin.ignore(300, '\n');
		 continue;
	}
	else break;
	}while(true);
	if((j>0)&&(j<6))
	{
		        switch(j)
		        {
		          case 1:
		          {


								system("clear");
                int m,w,z;
								w=0;
								z=0;
								while(w!=1)
								{
                 z=0;
								 for(m=0;m<Case.GetCounter();m++)
								 {
									 if(ID==Case[m]->GetId())
									 {
										 ID++;
										 break;
									 }
									 else z++;
								 }
								 if(z==Case.GetCounter()) w++;
								}

								 Create(ID);
								 ID+=1;
								 break;
		          }
		          case 2:
		          {
                bool status=false;
								unsigned int X;
								cout<<"Id of Weapon which you want remove"<<endl<<"Type number: ";
								cin>>X;

								for(int k=0;k<Case.GetCounter();k++)
								{
									if(Case[k]->GetId()==X)
									status=true;
                }
								if(status==true)
								{
								Case.RemoveElement(X);
							  system("clear");
								cout<<endl<<"Object have been removed!"<<endl<<endl;
							}

								else
								{
                  system("clear");
									cout<<endl<<"Error: Object with that Id don't exist!"<<endl;
								}
								break;
		          }
		          case 3:
		          {
                system("clear");
								ShowAll();
		            break;
		          }
		          case 4:
							{
	             Save();
               system("clear");
							 cout<<endl<<"SavedData Complited!"<<endl;
								break;
							}
		          case 5:
		          {
		            i++;
		            break;
		          }
		        }
		      }
		      else
					{
            system("clear");
						cout<<"Undefined behaviour!"<<endl<<endl;
					}
		}
  }
}

void App_Singleton::ShowAll()
{
    cout<<endl<<"Objects:"<<endl;
	  for(int i=0; i<Case.GetCounter();i++){
    cout<<Case[i]->GetType();
		cout<<" ID: "<<Case[i]->GetId()<<" Info: "<<Case[i]->GetInfo()<<" Range: "<<Case[i]->GetRange()<<endl;}
    cout<<endl;
}

void App_Singleton::Save()
{
  std::ofstream FILE;
	FILE.open("SavedData.txt",std::ios::out);
  FILE<<Case.GetCounter()<<endl;
	for(int i=0;i<Case.GetCounter();i++)
	{
	Case[i]->Save(FILE);
	}
}
void App_Singleton::Load()
{
  int Counter;
	unsigned int MuzzleVelocity_,Range_,MagSize_,Weight_,Id_,Scope_,Silencer_,Rate_;
	float LiczbaSilnikow_;
	std::string temp,temp1,temp2,temp3,temp4,temp5,temp6,temp7;
  std::ifstream FILE;
	FILE.open("SavedData.txt",std::ios::in);
  getline(FILE,temp);
	Counter=atoi(temp.c_str());
  if(Counter!=0)
	{
  for(int g=0;g<=Counter;g++)
	{
      getline(FILE,temp1);
			if(temp1=="AssaultRifle")
			{
				getline(FILE,temp2);
				Id_=atoi(temp2.c_str());
				getline(FILE,temp3);
				LiczbaSilnikow_=atof(temp3.c_str());
				getline(FILE,temp);
			  MagSize_=atoi(temp.c_str());
				getline(FILE,temp4);
				MuzzleVelocity_=atoi(temp4.c_str());
				getline(FILE,temp5);
				Range_=atoi(temp5.c_str());
				getline(FILE,temp6);
				Weight_=atoi(temp6.c_str());
				getline(FILE,temp7);
				Rate_=atoi(temp7.c_str());
				Weapon *Object=new AssaultRifle(Id_,LiczbaSilnikow_,
        MagSize_,MuzzleVelocity_,Range_,Weight_,Rate_);
        Case.AddElement(Object);
			}
			if(temp1=="SniperRifle")
			{
				getline(FILE,temp2);
				Id_=atoi(temp2.c_str());
				getline(FILE,temp3);
				LiczbaSilnikow_=atof(temp3.c_str());
				getline(FILE,temp);
			  MagSize_=atoi(temp.c_str());
				getline(FILE,temp4);
				MuzzleVelocity_=atoi(temp4.c_str());
				getline(FILE,temp5);
				Range_=atoi(temp5.c_str());
				getline(FILE,temp6);
				Weight_=atoi(temp6.c_str());
		  	getline(FILE,temp);
			  Scope_=atoi(temp.c_str());
				Weapon *Object=new SniperRifle(Id_,LiczbaSilnikow_,
				MagSize_,MuzzleVelocity_,Range_,Weight_,Scope_);
				Case.AddElement(Object);
			}
			if(temp1=="Handgun")
			{
				getline(FILE,temp);
				Id_=atoi(temp.c_str());
				getline(FILE,temp);
				LiczbaSilnikow_=atof(temp.c_str());
				getline(FILE,temp);
				MagSize_=atoi(temp.c_str());
        getline(FILE,temp);
			  MuzzleVelocity_=atoi(temp.c_str());
				getline(FILE,temp);
				Range_=atoi(temp.c_str());
				getline(FILE,temp);
				Weight_=atoi(temp.c_str());
				getline(FILE,temp);
				Silencer_=atoi(temp.c_str());
				Weapon *Object=new Handgun(Id_,LiczbaSilnikow_,
        MagSize_,MuzzleVelocity_,Range_,Weight_,Silencer_);
        Case.AddElement(Object);
			}
		  if(temp1=="LMG")
			{
				getline(FILE,temp);
				Id_=atoi(temp.c_str());
				getline(FILE,temp);
				LiczbaSilnikow_=atof(temp.c_str());
				getline(FILE,temp);
				MagSize_=atoi(temp.c_str());
				getline(FILE,temp);
				MuzzleVelocity_=atoi(temp.c_str());
				getline(FILE,temp);
				Range_=atoi(temp.c_str());
				getline(FILE,temp);
				Weight_=atoi(temp.c_str());
				getline(FILE,temp);
				Rate_=atoi(temp.c_str());
				Weapon *Object=new LMG(Id_,LiczbaSilnikow_,
				MagSize_,MuzzleVelocity_,Range_,Weight_,Rate_);
				Case.AddElement(Object);
			}
			if(temp1=="PDW")
			{
				getline(FILE,temp);
				Id_=atoi(temp.c_str());
				getline(FILE,temp);
				LiczbaSilnikow_=atof(temp.c_str());
				getline(FILE,temp);
				MagSize_=atoi(temp.c_str());
				getline(FILE,temp);
				MuzzleVelocity_=atoi(temp.c_str());
				getline(FILE,temp);
				Range_=atoi(temp.c_str());
				getline(FILE,temp);
				Weight_=atoi(temp.c_str());
				getline(FILE,temp);
				Rate_=atoi(temp.c_str());
				getline(FILE,temp);
				Silencer_=atoi(temp.c_str());
				Weapon *Object=new PDW(Id_,LiczbaSilnikow_,
				MagSize_,MuzzleVelocity_,Range_,Weight_,Rate_,Silencer_);
				Case.AddElement(Object);
			}
			if(temp1=="DMR")
			{
				getline(FILE,temp);
				Id_=atoi(temp.c_str());
				getline(FILE,temp);
				LiczbaSilnikow_=atof(temp.c_str());
				getline(FILE,temp);
				MagSize_=atoi(temp.c_str());
				getline(FILE,temp);
				MuzzleVelocity_=atoi(temp.c_str());
				getline(FILE,temp);
				Range_=atoi(temp.c_str());
				getline(FILE,temp);
				Weight_=atoi(temp.c_str());
				getline(FILE,temp);
				Rate_=atoi(temp.c_str());
				getline(FILE,temp);
				Scope_=atoi(temp.c_str());
				Weapon *Object=new DMR(Id_,LiczbaSilnikow_,
				MagSize_,MuzzleVelocity_,Range_,Weight_,Rate_,Scope_);
				Case.AddElement(Object);
			}
		}
  FILE.close();
	}
	else cout<<endl<<"File is empty!"<<endl<<endl;
}
