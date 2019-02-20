#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
class LPU_FINDER
{
	public:
void menu_case1()
{
	int choice_case1;
	cout<<"***SECTION MENTOR***";
	cout<<endl<<"1.)CSE-K17GA\n2.)CSE-K17GB\n3.)CSE-K17GC\n4.)CSE-K17GD\n5.)CSE-K17GE\n6.)CSE-K17GF"<<endl;
	cout<<endl<<"Choose Section by entering the correct option";
	cin>>choice_case1;
	system("cls");
	switch(choice_case1)
	{
		case 1:
			cout<<endl<<"Mentor for CSE-K17GA is Mr. So ";
			break;
		case 2:
			cout<<endl<<"Mentor for CSE-K17GB is Mr. So";
			break;
		case 3:
			cout<<endl<<"Mentor for CSE-K17GC is Mr. So";
			break;
		case 4:
			cout<<endl<<"Mentor for CSE-K17GD is Mr. So";
			break;
		case 5:
			cout<<endl<<"Mentor for CSE-K17GE is Mr. So";
			break;
		case 6:
		    cout<<endl<<"Mentor for CSE-K17GF is Mr. So";
		    break;
		default:
			cout<<endl<<"You have entered incorrect choice! Please entered right choice";
			break;
	}
}
//section HOD
	void menu_case2()
	{
		int choice_case2;
		cout<<endl<<"**SECTION HOD**";
		cout<<endl<<"1.)CSE-K17GA\n2.)CSE-K17GB\n3.)CSE-K17GC\n4.)CSE-K17GD\n5.)CSE-K17GE\n6.)CSE-K17GF"<<endl;
        cout<<endl<<"Choose Section by entering the correct option";
        cin>>choice_case2;
        system("cls");
    switch(choice_case2)
    {
    	case 1:
    		cout<<endl<<"Section HOD for CSE-K17GA is Mr.so";
    		break;
    	case 2:
    		cout<<endl<<"Section HOD for CSE-K17GB is Mr.so";
    		break;
    	case 3:
    		cout<<endl<<"Section HOD for CSE-K17GC is Mr.so";
    		break;
    	case 4:
    		cout<<endl<<"Section HOD for CSE-K17GD is Mr.so";
    		break;
    	case 5:
    		cout<<endl<<"Section HOD for CSE-K17GE is Mr.so";
    		break;
    	case 6:
    		cout<<endl<<"Section HOD for CSE-K17GF is Mr.so";
    		break;
    	default:
    		cout<<endl<<"You entered incorrect choice! please chose correct option";
    		break;
    	}
}
//course coordinator
void menu_case3()
{
	int choice_case3;
	cout<<endl<<"**SECTION COURSE COORDINATOR**";
	cout<<endl<<"1.)CSE-K17GA\n2.)CSE-K17GB\n3.)CSE-K17GC\n4.)CSE-K17GD\n5.)CSE-K17GE\n6.)CSE-K17GF";
	cout<<endl<<"Choice desired section by entering the correct option";
	cin>>choice_case3;
	system("cls");
   switch(choice_case3)
   {
   	case 1:
   		cout<<endl<<"Course Coordinator for CSE-K17GA is Mr.so";
   		break;
   	case 2:
   		cout<<endl<<"Course Coordinator for CSE-K17GB is Mr.so";
   		break;
   	case 3:
   		cout<<endl<<"Course Coordinator for CSE-K17GC is Mr.so";
   		break;
   	case 4:
   		cout<<endl<<"Course Coordinator for CSE-K17GD is Mr.so";
   		break;
   	case 5:
   		cout<<endl<<"Course Coordinator for CSE-K17GE is Mr.so";
   		break;
   	case 6:
   		cout<<endl<<"Course Coordinator for CSE-K17GF is Mr.so";
   	default:
   		cout<<endl<<"You have entered inccorect choice!please entered correct choice";
   		break;
   }
   
}
//placement mentor
void menu_case4()
{
   int choice_case4;
   cout<<endl<<"**SECTION PLACEMENT MENTOR**";
   cout<<endl<<"1.)CSE-K17GA\n2.)CSE-K17GB\n3.)CSE-K17GC\n4.)CSE-K17GD\n5.)CSE-K17GE\n6.)CSE-K17GF"<<endl;
   cout<<endl<<"Choose Desired Section by entering the correct option";
   cin>>choice_case4;
   system("cls");
  switch(choice_case4)
  {
  	case 1:
  		cout<<endl<<"Placement Mentor for CSE-K17GA is Mr.so";
  		break;
  	case 2:
  		cout<<endl<<"Placement Mentor for CSE-K17GB is Mr.so";
  		break;
  	case 3:
  		cout<<endl<<"Placement Mentor for CSE-K17GC is Mr.so";
  		break;
  	case 4:
  		cout<<endl<<"Placement Mentor for CSE-K17GD is Mr.so";
  		break;
  	case 5:
  		cout<<endl<<"Placement Mentor for CSE-K17GE is Mr.so";
  		break;
  	case 6:
  		cout<<endl<<"Placement Mentor for CSE-K17GF is Mr.so";
  		break;
  	default:
  		cout<<endl<<"You have entered incorrect choice!Please enterd correct chocie";
  		break;
  	
 }	
 
}
//student councellor
void menu_case5()
{
	int choice_case5;
	cout<<endl<<"**SECTION STUDENT COUNCELLOR**";
	cout<<endl<<"1.)CSE-K17GA\n2.)CSE-K17GB\n3.)CSE-K17GC\n4.)CSE-K17GD\n5.)CSE-K17GE\n6.)CSE-K17GF"<<endl;
	cout<<endl<<"Chose desrired section by entering the correct option";
	cin>>choice_case5;
	system("cls");
	switch(choice_case5)
	{
		case 1:
			cout<<endl<<"Student Councellor for CSE-K17GA is Mr.so";
			break;
		case 2:
			cout<<endl<<"Student Councellor for CSE-K17GB is Mr.so";
			break;
		case 3:
			cout<<endl<<"Student Councellor for CSE-K17GC is Mr.so";
			break;
		case 4:
			cout<<endl<<"Student Councellor for CSE-K17GD is Mr.so";
			break;
		case 5:
			cout<<endl<<"Student Councellor for CSE-K17GE is Mr.so";
			break;
		case 6:
			cout<<endl<<"Student Councellor for CSE-K17GF is Mr.so";
			break;
		default:
			cout<<endl<<"You have entered inncoret choice!please chose correct option";
			break;
	}
}
//e-cell
void menu_case6()
{
	int choice_case6;
	cout<<endl<<"**SECTION E-CELL COORDINATOR**";
	cout<<endl<<"1.)CSE-K17GA\n2.)CSE-K17GB\n3.)CSE-K17GC\n4.)CSE-K17GD\n5.)CSE-K17GE\n6.)CSE-K17GF"<<endl;
	cout<<endl<<"Choose Desired Section by entering the correct choose";
	cin>>choice_case6;
	system("cls");
	switch(choice_case6)
	{
		case 1:
				cout<<endl<<"E-Cell Coordinator for CSE-K17GA is Mr.so";
				break;
		case 2:
			cout<<endl<<"E-Cell Coordinator for CSE-K17GB is Mr.so";
			break;
		case 3:
			cout<<endl<<"E-Cell Coordinator for CSE-K17GC is Mr.so";
			break;
		case 4:
			cout<<endl<<"E-Cell Coordinator for CSE-K17GD is Mr.so";
			break;
		case 5:
			cout<<endl<<"E-Cell Coordinator for CSE-K17GE is Mr.so";
			break;
		case 6:
			cout<<endl<<"E-Cell Coordinator for CSE-K17GF is Mr.so";
			break;
		default:
			cout<<endl<<"You have entered incorrect choice!please chose correct option";
			break;
	}
}
//placement coordinator
void menu_case7()
{
	int choice_case7;
	cout<<endl<<"**SECTION PLACEMENT COORDINATOR**";
	cout<<endl<<"1.)CSE-K17GA\n2.)CSE-K17GB\n3.)CSE-K17GC\n4.)CSE-K17GD\n5.)CSE-K17GE\n6.)CSE-K17GF"<<endl;
	cout<<endl<<"Choose desired section by entering the correct option";
	cin>>choice_case7;
	system("cls");
	switch(choice_case7)
	{
		case 1:
			cout<<endl<<"Placement Coordinator for CSE-K17GA is Mr.so";
			break;
		case 2:
			cout<<endl<<"Placement Coordinator for CSE-K17GB is Mr.so";
			break;
		case 3:
			cout<<endl<<"Placement Coordinator for CSE-K17GC is Mr.so";
			break;
		case 4:
			cout<<endl<<"Placement Coordinator for CSE-K17GD is Mr.so";
			break;
		case 5:
			cout<<endl<<"Placement Coordinator for CSE-K17GE is Mr.so";
			break;
		case 6:
			cout<<endl<<"Placement Coordinator for CSE-K17GF is Mr.so";
			break;
		default:
			cout<<endl<<"You have entered incorrect choice!Please enter correct choice";
			break;
	}
}
};
int main()
{
	LPU_FINDER l;
	int choice, i;
	fstream file;
	file.open("finder.dat",ios::binary|ios::out);
	cout<<endl<<"********************WELCOME TO LPU FINDER********************";
    cout<<endl<<endl<<"Press Enter to Continue..";
    getch();
    system("cls");
    do
    {
    	cout<<"############### MAIN MENU ###############";
    	cout<<endl<<"1.Mentor for particular Section\n2.Section HOD\n3.Cousre Coordinator\n4.Placement Mentor\n5.Student Councellor\n6.E-Cell Coordinator\n7.Placement Coordinator ";
    	cout<<endl<<"Choose Desired menu by entering the corresponding options";
    	cin>>choice;
    	system("cls");
    	switch(choice)
    	{
    		case 1:
    			l.menu_case1();
    			break;
    		case 2:
    			l.menu_case2();
    			break;
    		case 3:
    			l.menu_case3();
    			break;
    		case 4:
    			l.menu_case4();
    			break;
    		case 5:
    			l.menu_case5();
    			break;
    		case 6:
    			l.menu_case6();
    			break;
    		case 7:
    			l.menu_case7();
    			break;
    		default:
    			cout<<"YOU have entered incorrect choice!please choose corect option";
    			break;
    			file.write((char*)&l,sizeof(l));
    			file.close();
    	}
		cout<<endl<<endl<<endl<<endl;
		cout<<endl<<"Enter 1 to return to  Main Menu and 0 to Exit ";
		cin>>i;
		system("cls");
	}
	while(i);
	return 0;
	}
