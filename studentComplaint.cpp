#include<iostream>
using namespace std;

//.......function declairation
int choice;

void clear();
bool mainMenu();

void home();

void Hostel_J();
void Room();
void Lift();
void Hostel_Campus();
void Hostel_Lavatary();
void Common_Room();
void Hostel_Water();

void Library();
void Books();
void Library_Room();
void Library_Lavatary();
void Library_Water();

//.......function declaration ends here


int main(){

	FILE *file;

	system("$HOME/project/sync_download_db2");

come:

	file=fopen(".auth","r");
	system("$HOME/project/auth");
	
	if(file == 0)
		goto come;

	while(mainMenu());

	return 0;
}

void clear(){
	system("clear");
}

bool mainMenu(){

	system("$HOME/project/sync_upload_db2");

	//clear();
	cout<<"\n.........................................\n\n";
	cout<<"\t.. STUDENT COMPLAINT ..\n\n";
	cout<<".........................................\n";
	system("cat $HOME/project/.auth");
	cout<<".........................................\n";


	int choice;
	cout<<"\n\n1. Home\n";
	cout<<"2. Hostel J\n";
	cout<<"3. Mess\n";
	cout<<"4. Library\n";
	cout<<"5. Dimond Jubli holl\n";
	cout<<"6. Logout\n";
	cout<<"7. Quit\n";
	cout<<"\n\n> choice :: ";
	cin>>choice;
	
	switch(choice){
		case 1:home();break;
		case 2:Hostel_J();break;
		//case 3:mess();break;
		case 4:Library();break;
		case 6:
			system("rm $HOME/project/.auth");
			cout<<"\nLogged out successfully..\n";
			main();

		case 7:return 0;break;
	}

	return 1;
}

void home(){

	cout<<".....................................\n\n";
	system("$HOME/project/showHome");
	cout<<"\n\n.....................................\n\n";

}


// hostel J complaints..

void Hostel_J(){
	

	cout<<"\n.........................................\n\n\n";
	cout<<"\t.. HOSTEL J ..\n\n";
	cout<<".........................................\n";

	
	cout<<"\n1.Room ";
	cout<<"\n2.Lift ";
	cout<<"\n3.Hostel_Campus ";
	cout<<"\n4.Hostel_Lavatary ";
	cout<<"\n5.Common_Room ";
	cout<<"\n6.Hostel_Water ";
	cout<<"\n7.GO Back.. ";
	
	cout<<"\n\nchoice :: ";
	cin>>choice;
	
	switch(choice){
		
		case 1: Room();
		        break;
		        
	    case 2: Lift();
		        break;	
				
		case 3: Hostel_Campus();
		        break;
				
	    case 4: Hostel_Lavatary();
		        break;
				
		case 5: Common_Room();
		        break;
				
		case 6: Hostel_Water();
		        break;
				
		case 7: mainMenu();
															        
	}
	
}

	void Room(){
		
		
		cout<<"\n1.Door locking problem ";
		cout<<"\n2.Window not working / broken ";
		cout<<"\n3.Bed not available / broken ";
		cout<<"\n4.Chair not available / broken  ";
		cout<<"\n5.Table not available / broken ";
		cout<<"\n6.Almirah door locking problem ";
		cout<<"\n7.Broken hanging shirt pipes ";
		cout<<"\n8.Hostel_Water not out through balcony ";
		cout<<"\n\n9.Electricity not available in room ";
		cout<<"\n10.Bulb / tubelight are fused ";
		cout<<"\n11.Fan not working ";
		cout<<"\n12.Switch and socket not working ";
		cout<<"\n13.Internet not working ";

		cout<<"\n\nchoice :: ";
		cin>>choice;

		switch(choice){
			case 1:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/1/1");
					system("$HOME/project/room_info $HOME/project/db2/2/1/1");
					break;
			case 2:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/1/2");
					system("$HOME/project/room_info $HOME/project/db2/2/1/2");
					break;
			case 3:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/1/3");
					system("$HOME/project/room_info $HOME/project/db2/2/1/3");
					break;
			case 4:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/1/4");
					system("$HOME/project/room_info $HOME/project/db2/2/1/4");
					break;
			case 5:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/1/5");
					system("$HOME/project/room_info $HOME/project/db2/2/1/5");
					break;
			case 6:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/1/6");
					system("$HOME/project/room_info $HOME/project/db2/2/1/6");
					break;
			case 7:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/1/7");
					system("$HOME/project/room_info $HOME/project/db2/2/1/7");
					break;
			case 8:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/1/8");
					system("$HOME/project/room_info $HOME/project/db2/2/1/8");
					break;
			case 9:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/1/9");
					system("$HOME/project/room_info $HOME/project/db2/2/1/9");
					break;
			case 10:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/1/10");
					system("$HOME/project/room_info $HOME/project/db2/2/1/10");	
					break;
			case 11:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/1/11");
					system("$HOME/project/room_info $HOME/project/db2/2/1/11");
					break;
			case 12:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/1/12");
					system("$HOME/project/room_info $HOME/project/db2/2/1/12");
					break;
			case 13:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/1/13");
					system("$HOME/project/room_info $HOME/project/db2/2/1/13");
					break;
		}
	
	}
	
	void Lift(){
		
		cout<<"\n1.Lift not working ";
		cout<<"\n2.Inside lift light not working ";
		cout<<"\n3.Inside lift fan not working  ";
		cout<<"\n4.Button not working of lift  ";
		cout<<"\n5.Lift emergency button not working ";

		cout<<"\n\nchoice :: ";
		cin>>choice;

		switch(choice){
			case 1:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/2/1");
					system("$HOME/project/hostel_lift_info $HOME/project/db2/2/2/1");
					break;
			case 2:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/2/2");
					system("$HOME/project/hostel_lift_info $HOME/project/db2/2/2/2");
					break;
			case 3:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/2/3");
					system("$HOME/project/hostel_lift_info $HOME/project/db2/2/2/3");
					break;
			case 4:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/2/4");
					system("$HOME/project/hostel_lift_info $HOME/project/db2/2/2/4");
					break;
			case 5:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/2/5");
					system("$HOME/project/hostel_lift_info $HOME/project/db2/2/2/5");
					break;
		
		}
		
	}
	
	void Hostel_Campus(){
		
		cout<<"\n1.Campus not clean ";
		cout<<"\n2.Campus light not working ";
		cout<<"\n3.Sitting bench not available ";

		cout<<"\n\nchoice :: ";
		cin>>choice;

		switch(choice){
			case 1:system("$HOME/project/raiseComplain $HOME/project/db2/2/3/1");break;
			case 2:system("$HOME/project/raiseComplain $HOME/project/db2/2/3/2");break;
			case 3:system("$HOME/project/raiseComplain $HOME/project/db2/2/3/3");break;
		}

		
	}
	
	void Hostel_Lavatary(){
		
		cout<<"\n1.Lavartary not clean properly ";
		cout<<"\n2.Smelling lavartary ";
		cout<<"\n3.Hostel_Water not available ";
		cout<<"\n4.Basin not clean  ";
		cout<<"\n5.Front of basin mirror not available / broken ";
		cout<<"\n6.Tapes not working / broken ";
		cout<<"\n7.Light not working  ";
		cout<<"\n8.Exahusting fan not working ";
		cout<<"\n9.Shower not working ";
		cout<<"\n10.Geyser not working ";
		cout<<"\n11.Hostel_Water not out its store in lavartary  ";


		cout<<"\n\nchoice :: ";
		cin>>choice;

		switch(choice){
			case 1:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/4/1");
					system("$HOME/project/hostel_lavatary_info $HOME/project/db2/2/4/1");
					break;
			case 2:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/4/2");
					system("$HOME/project/hostel_lavatary_info $HOME/project/db2/2/4/2");
					break;
			case 3:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/4/3");
					system("$HOME/project/hostel_lavatary_info $HOME/project/db2/2/4/3");
					break;
			case 4:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/4/4");
					system("$HOME/project/hostel_lavatary_info $HOME/project/db2/2/4/4");
					break;
			case 5:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/4/5");
					system("$HOME/project/hostel_lavatary_info $HOME/project/db2/2/4/5");
					break;
			case 6:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/4/6");
					system("$HOME/project/hostel_lavatary_info $HOME/project/db2/2/4/6");
					break;
			case 7:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/4/7");
					system("$HOME/project/hostel_lavatary_info $HOME/project/db2/2/4/7");
					break;
			case 8:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/4/8");
					system("$HOME/project/hostel_lavatary_info $HOME/project/db2/2/4/8");
					break;
			case 9:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/4/9");
					system("$HOME/project/hostel_lavatary_info $HOME/project/db2/2/4/9");
					break;
			case 10:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/4/10");
					system("$HOME/project/hostel_lavatary_info $HOME/project/db2/2/4/10");
					break;
			case 11:
					system("$HOME/project/raiseComplain $HOME/project/db2/2/4/11");
					system("$HOME/project/hostel_lavatary_info $HOME/project/db2/2/4/11");
					break;
		}
	}
	
	void Common_Room(){
		
		cout<<"\n1.Common room not clean ";
		cout<<"\n2.Light not working ";
		cout<<"\n3.Fan not working ";
		cout<<"\n4.Tv not working  ";
		cout<<"\n5.Late night noise ";
		cout<<"\n6.Chair not available ";
		cout<<"\n7.Indoor games items not available ";


		cout<<"\n\nchoice :: ";
		cin>>choice;

		switch(choice){
			case 1:system("$HOME/project/raiseComplain $HOME/project/db2/2/5/1");break;
			case 2:system("$HOME/project/raiseComplain $HOME/project/db2/2/5/2");break;
			case 3:system("$HOME/project/raiseComplain $HOME/project/db2/2/5/3");break;
			case 4:system("$HOME/project/raiseComplain $HOME/project/db2/2/5/4");break;
			case 5:system("$HOME/project/raiseComplain $HOME/project/db2/2/5/5");break;
			case 6:system("$HOME/project/raiseComplain $HOME/project/db2/2/5/6");break;
			case 7:system("$HOME/project/raiseComplain $HOME/project/db2/2/5/7");break;
		}
	}
	
	void Hostel_Water(){
		
			cout<<"\n1.RO machine not working ";
			cout<<"\n2.Hostel_Water not cold ";
			cout<<"\n3.Hostel_Water throughout slowly ";


		cout<<"\n\nchoice :: ";
		cin>>choice;

		switch(choice){
			case 1:system("$HOME/project/raiseComplain $HOME/project/db2/2/6/1");break;
			case 2:system("$HOME/project/raiseComplain $HOME/project/db2/2/6/2");break;
			case 3:system("$HOME/project/raiseComplain $HOME/project/db2/2/6/3");break;

		}
		
	}


// Library complaints..


void Library(){
	
	cout<<"\n1.Books ";
	cout<<"\n2.Library_Room ";
	cout<<"\n3.Library_Lavatary ";
	cout<<"\n4.Library_Water ";
	cout<<"\n5.GO Back.. ";
	
	cout<<"\n\nchoice :: ";
	cin>>choice;
	
	switch(choice){
		
		case 1: Books();
		        break;
		        
	    case 2: Library_Room();
		        break;	
				
	    case 3: Library_Lavatary();
		        break;
					
		case 4: Library_Water();
		        break;
				
		case 5: mainMenu();
															        
	}
	
}


	void Books(){
		
			cout<<"\n1.Books not available upgrade edition  ";
			cout<<"\n2.Less number of books are available ";
			cout<<"\n3.Books are not well arranged ";
			cout<<"\n4.Books are spread here and there on table ";


		cout<<"\n\nchoice :: ";
		cin>>choice;

		switch(choice){
			case 1:system("$HOME/project/raiseComplain $HOME/project/db2/4/1/1");break;
			case 2:system("$HOME/project/raiseComplain $HOME/project/db2/4/1/2");break;
			case 3:system("$HOME/project/raiseComplain $HOME/project/db2/4/1/3");break;
			case 4:system("$HOME/project/raiseComplain $HOME/project/db2/4/1/4");break;
		}	
			
	}
	void Library_Room(){
		
		cout<<"\n1.Window broken ";
		cout<<"\n2.Noise in Library_room ";
		cout<<"\n3.Chair not available / broken  ";
		cout<<"\n4.Table not available / broken ";
		cout<<"\n5.Electricity not available in Library_room ";
		cout<<"\n6.Bulb / tubelight are fused ";
		cout<<"\n7.Fan not working ";
		cout<<"\n8.Switch and socket not working ";
		cout<<"\n9.Internet not working ";


		cout<<"\n\nchoice :: ";
		cin>>choice;

		switch(choice){
			case 1:system("$HOME/project/raiseComplain $HOME/project/db2/4/2/1");break;
			case 2:system("$HOME/project/raiseComplain $HOME/project/db2/4/2/2");break;
			case 3:system("$HOME/project/raiseComplain $HOME/project/db2/4/2/3");break;
			case 4:system("$HOME/project/raiseComplain $HOME/project/db2/4/2/4");break;
			case 5:system("$HOME/project/raiseComplain $HOME/project/db2/4/2/5");break;
			case 6:system("$HOME/project/raiseComplain $HOME/project/db2/4/2/6");break;
			case 7:system("$HOME/project/raiseComplain $HOME/project/db2/4/2/7");break;
			case 8:system("$HOME/project/raiseComplain $HOME/project/db2/4/2/8");break;
			case 9:system("$HOME/project/raiseComplain $HOME/project/db2/4/2/9");break;
			
		}	
	}
	
	void Library_Lavatary(){
		
		cout<<"\n1.Lavartary not clean properly ";
		cout<<"\n2.Smelling lavartary ";
		cout<<"\n3.Library_Water not available ";
		cout<<"\n4.Basin not clean  ";
		cout<<"\n5.Front of basin mirror not available / broken ";
		cout<<"\n6.Tapes not working / broken ";
		cout<<"\n7.Light not working  ";
		cout<<"\n8.Exahusting fan not working ";
		cout<<"\n9.Library_Water not out its store in lavartary  ";


		cout<<"\n\nchoice :: ";
		cin>>choice;

		switch(choice){
			case 1:system("$HOME/project/raiseComplain $HOME/project/db2/4/3/1");break;
			case 2:system("$HOME/project/raiseComplain $HOME/project/db2/4/3/2");break;
			case 3:system("$HOME/project/raiseComplain $HOME/project/db2/4/3/3");break;
			case 4:system("$HOME/project/raiseComplain $HOME/project/db2/4/3/4");break;
			case 5:system("$HOME/project/raiseComplain $HOME/project/db2/4/3/5");break;
			case 6:system("$HOME/project/raiseComplain $HOME/project/db2/4/3/6");break;
			case 7:system("$HOME/project/raiseComplain $HOME/project/db2/4/3/7");break;
			case 8:system("$HOME/project/raiseComplain $HOME/project/db2/4/3/8");break;
			case 9:system("$HOME/project/raiseComplain $HOME/project/db2/4/3/9");break;
			
		}	
	}
	
	
	void Library_Water(){
		
		cout<<"\n1.RO machine not working ";
		cout<<"\n2.Library_Water not cold ";
		cout<<"\n3.Library_Water throughout slowly ";


		cout<<"\n\nchoice :: ";
		cin>>choice;

		switch(choice){
			case 1:system("$HOME/project/raiseComplain $HOME/project/db2/4/4/1");break;
			case 2:system("$HOME/project/raiseComplain $HOME/project/db2/4/4/2");break;
			case 3:system("$HOME/project/raiseComplain $HOME/project/db2/4/4/3");break;
		}
	}
