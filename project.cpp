
// om nm shivay

#include<iostream>
#include"/home/aka/project/data.h"
using namespace std;

void home(){
	// downloading 10 files under home folder

	system("dw \"1QuOzMhuH466vdtWLzAGQK_F0_XH7IJwm\"");
	system("clear");	

}

void clear(){
	system("clear");
}

void mess(){

	clear();
	cout<<".........................................\n\n\n";
	cout<<"\t.. MESS COMPLAINT ..\n\n";
	cout<<".........................................";

	int ch;
	cout<<"\n\n\n1) Food\n";
	cout<<"2) Water J\n";
	cout<<"3) Sitting\n";
	cout<<"4) Campus\n";
	cout<<"5) Lavatary\n";

	cout<<"\n\n> ch :: ";
	cin>>ch;

	switch(ch){

	}
}


void hostel(){

	clear();
	cout<<".........................................\n\n\n";
	cout<<"\t.. HOSTEL COMPLAINT ..\n\n";
	cout<<".........................................";

	int ch;
	cout<<"\n\n\n1) Room\n";
	cout<<"2) Lift\n";
	cout<<"3) Hostel\n";
	cout<<"4) Campus\n";
	cout<<"5) Lavatary\n";
	cout<<"6) Common Room\n";	
	cout<<"\n\n> ch :: ";
	cin>>ch;

	switch(ch){
		case 1:room();break;
	}
}

void room(){

	int ch;
	cout<<"\n1) Bead is not available";
	cout<<"\n2) table is not available";
	cout<<"\n3) chair is not available";
	cout<<"\n\n4) fan is not working";
	cout<<"\n5) tubelight is not working";
	cout<<"\n6) LAN is not working";
	cout<<"\n7) switches are not working";

	cout<<"\n\nChoice :: ";
	cin>>ch;

	switch(ch){

		case 1:

			break;
		case 2:break;
		case 3:break;
		case 4:break;
		case 5:break;
		case 6:break;
		case 7:break;
	}

}


int main(){

	while(mainMenu());
	
	return 0;
}

