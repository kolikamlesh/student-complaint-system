
// hostel J complaints..

void Hostel_J(){
	

	cout<<"\n.........................................\n\n\n";
	cout<<"\t.. HOSTEL J ..\n\n";
	cout<<".........................................\n";

	
	cout<<"\n1.Room ";
	cout<<"\n2.Lift ";
	cout<<"\n3.Campus ";
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
	
	}
	
	void Lift(){
		
		cout<<"\n1.Lift not working ";
		cout<<"\n2.Inside lift light not working ";
		cout<<"\n3.Inside lift fan not working  ";
		cout<<"\n4.Button not working of lift  ";
		cout<<"\n5.Lift emergency button not working ";
		
	}
	
	void Hostel_Campus(){
		
		cout<<"\n1.Campus not clean ";
		cout<<"\n2.Campus light not working ";
		cout<<"\n3.Sitting bench not available ";
		
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
	}
	
	void Common_Room(){
		
		cout<<"\n1.Common room not clean ";
		cout<<"\n2.Light not working ";
		cout<<"\n3.Fan not working ";
		cout<<"\n4.Tv not working  ";
		cout<<"\n5.Late night noise ";
		cout<<"\n6.Chair not available ";
		cout<<"\n7.Indoor games items not available ";
	}
	
	void Hostel_Water(){
		
			cout<<"\n1.RO machine not working ";
			cout<<"\n2.Hostel_Water not cold ";
			cout<<"\n3.Hostel_Water throughout slowly ";
	}

