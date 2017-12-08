//-------------------------------------------------------
//Project -- Complaint Management System (Travel Agency)
//-------------------------------------------------------

//-------------------------------------------------------
// Md. Saifuddin Tipu - 54398
//-------------------------------------------------------
// Administrator Password to Login
//-------------------------------------------------------
/*
username == Saif
password == saif54398
*/

//Standard Library

#include <iostream>
#include <stdlib.h>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

class complaint	//base class
{
public:
	void customer_StoreComplaint();
	void admin_menu();
    void create_complaint();
    void cancel_complaint();
    void update_complaint ();
	void print_complaint();
	void view_complaint();
	void exit();
	
	complaint();//constuctor

};

 complaint::complaint ()
{

}		//constructor for class CarType


struct node //construct node
{
	int complaint_number;
	string customerName;
	string date;
	string x;

	node *prev;
	node *next;
	node *link;

}*q, *temp;				//pointer declaration


node *start_ptr = NULL;
node *head = NULL;
node *last = NULL;

int main()	// Main function
{
	complaint admin;
	system("COLOR 79");		//Color to change background
	int option;
	do
	{
	cout<<"\n";
    cout<<"\t\t ================================================\n";
	cout<<"\t\t|   Complaint Management System - TRAVEL AGENCY |\n";
	cout<<"\t\t ================================================\n\n\n";

	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t|\t1. Customer \t\t\t\t|\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t|\t2. Administrator \t\t\t|\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t|\t3. EXIT \t\t\t\t|\n";
	cout<<"\t\t-------------------------------------------------\n\n";

    cout<<"\t\tInput number Associated with Your User Type: ";
	cin>>option;
	switch(option)
	{
		case 1:
			admin.customer_StoreComplaint();
			break;
		case 2:
			admin.admin_menu();
			break;
		case 3:
			admin.exit();	//function exit
			goto a;
			break;
	}
	
	}while(option!=3);//end do
		a://goto
		cout<<"thank you"<<endl;
		system ("PAUSE");

}//end  main function
void complaint::customer_StoreComplaint()		
{
	system("cls");
	cout<<"\n";
    cout<<"\t\t ================================================\n";
	cout<<"\t\t|   Complaint Management System - TRAVEL AGENCY |\n";
	cout<<"\t\t ================================================\n\n\n";
	cout <<"\nAdd Your Complaint Details\n";
	cout <<"________________________________\n\n";

	node *temp;
	temp = new node;
	cout << "Type Complaint no: ";
    cin >> temp->complaint_number;
	cout<< "Enter Your Name: ";
	cin.ignore();
	getline(cin, temp->customerName);
	cout<<"Enter Date : ";
	cin>>temp->date;
	cout << "Complaint Description:";
	cout<<"( 1000 words maximum ) \n";
	cin.ignore();
	getline(cin, temp->x);

	cout<<"==========================================================================="<<endl;
    cout << "Complaint added Successfully"<<endl;
    cout<<"==========================================================================="<<endl;
    
	system ("PAUSE");

    temp->next=NULL;
	if(start_ptr!=NULL)
	{
		temp->next=start_ptr;
	}
	start_ptr=temp;
	system("cls");
}

void complaint::admin_menu()
{
	complaint admin;
	int menu;
	string userName, userPassword;

	system("cls");
	cout<<"\n";
    cout<<"\t\t ===================================================\n";
	cout<<"\t\t|   Complaint Management System - TRAVEL AGENCY    |\n";
	cout<<"\t\t ===================================================\n\n\n";
    cout<<"\t\t----------------------------------------------------\n";
    cout<<"\t\t\t  Administrator / Staff Login      \n";
    cout<<"\t\t----------------------------------------------------\n\n";
    cout << "\n\n\t\tPlease enter your user name: ";
    cin >> userName;
    cout << "\n\n\t\tPlease enter your user password: ";
    cin >> userPassword;

    if (userName == "Saif" && userPassword == "saif54398")
    {
    	do
		{
        system("cls");
        cout<<"\n";
        cout<<"\t\t ===================================================\n";
		cout<<"\t\t|   Complaint Management System - TRAVEL AGENCY    |\n";
		cout<<"\t\t ===================================================\n\n\n";
		cout<<"\t\t--------------------------------------------------\n";
		cout<<"\t\t||\t1. Create a Complaint \t\t\t ||\n";
		cout<<"\t\t||\t2. View Complaint\t\t\t ||\n";
		cout<<"\t\t||\t3. Update Complaint Status \t\t ||\n";
		cout<<"\t\t||\t4. Print the complaint \t\t\t ||\n";
		cout<<"\t\t||\t5. Cancel a Complaint \t\t\t ||\n";
		cout<<"\t\t||\t6. Logout\t\t\t\t ||\n";
		cout<<"\t\t--------------------------------------------------\n";
		cout<<"Enter choice: ";

		cin>>menu;

		switch (menu)
		{
		case 1:
			{
				admin.create_complaint();
				break;
			}


		case 2:
			{
				admin.view_complaint();
				system("PAUSE");
				break;
			}

		case 3:
			{
				admin.update_complaint();
				system("PAUSE");
				break;
			}

		case 4:
			{
				admin.print_complaint();
				system("PAUSE");
				break;
			}
		case 5:
			{
				admin.cancel_complaint();
				system("PAUSE");
				break;
			}
        case 6:
			{
				cout<<"You are Logged Out...!\n\n\n\n";
				system ("PAUSE");
				admin.admin_menu();
				break;
			}

		}//end Switch
		
		}while(menu!=6);//end do
		cout<<"thank you"<<endl;
		system ("PAUSE");
	}

	else
	{
           cout << "\n\n\t\tInvalid login attempt. Please try again.\n" << '\n';
           system("PAUSE");
           system ("cls");
           admin.admin_menu();


    }
}

void complaint::create_complaint()
{
	system("cls");
	cout<<"\n";
    cout<<"\t\t ================================================\n";
	cout<<"\t\t|   Complaint Management System - TRAVEL AGENCY |\n";
	cout<<"\t\t ================================================\n\n\n";
	cout <<"\nAdd Complaint Details of Customer\n";
	cout <<"_____________________________________ \n\n";

	node *temp;
	temp = new node;
	cout << "Type Complaint no: ";
    cin >> temp->complaint_number;
	cout<< "Enter Customer Name: ";
	cin.ignore();
	getline(cin, temp->customerName);
	cout<<"Enter Date : ";
	cin>>temp->date;
	cout << "Complaint Description:";
	cout<<"( 1000 words maximum ) \n";
	cin.ignore();
	getline(cin, temp->x);

	cout<<"==========================================================================="<<endl;
    cout << "Complaint added Successfully"<<endl;
    cout<<"==========================================================================="<<endl;
    cout << "Go to Print Complaint to print the Complaint"<<endl;
    cout<<"==========================================================================="<<endl;
	system ("PAUSE");

    temp->next=NULL;
	if(start_ptr!=NULL)
	{
		temp->next=start_ptr;
	}
	start_ptr=temp;
	system("cls");
}


void complaint::view_complaint()
{
	int num;
	bool found;			//variable to search
	system("cls");
	node *temp;

	temp=start_ptr;
	found = false;
	cout<<"\n";
    cout<<"\t\t ================================================\n";
	cout<<"\t\t|   Complaint Management System - TRAVEL AGENCY |\n";
	cout<<"\t\t ================================================\n\n\n";
	cout<<" Enter the Complaint Number To Look into The Complaint Details\n";
	cin>>num;
	cout<<"\n";
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout <<"\t\tHere is the Complaint list\n";
	cout<<"---------------------------------------------------------------------------"<<endl;


	if(temp == NULL) 
	{
		cout << "\tThere is no Complaint to show\n\t\t\tSo The List is Empty\n\n\n";
	}
	while(temp !=NULL && !found)
	{
		if (temp->complaint_number==num)
		{
			found = true;
		}
		else
		{
			temp = temp -> next;
		}
        if (found)
        {
		cout <<"Complaint Number : "<<temp->complaint_number;
		cout <<"\n";
		cout<<"Customer Name: "<<temp->customerName<<endl;

		cout<<"Complain Date : "<<temp->date<<endl;

		cout<<"_____________________________________________________________________________"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"|Complaint description: |"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<temp->x;

		cout <<"\n";
		cout<<"_____________________________________________________________________________"<<endl;

		}


}
}


void complaint::cancel_complaint()
{
	system("cls");
	int num, count;
	cout<<"\n";
    cout<<"\t\t ================================================\n";
	cout<<"\t\t|   Complaint Management System - TRAVEL AGENCY |\n";
	cout<<"\t\t ================================================\n\n\n";
    cout<<"Enter the Complaint number you want to delete \n";
    cin>>num;
    node *q;
	node *temp;
	bool found;

	if(start_ptr == NULL)
		cerr<<"Can not cancel from an empty list.\n";
	else
	{
		if(start_ptr->complaint_number == num)
		{
			q = start_ptr;
			start_ptr = start_ptr->next;
			count--;
			if(start_ptr == NULL)
			last = NULL;
			delete q;
			cout<<"The Complaint is Cancelled Successfully"<<endl;
		}
		else
		{
			found = false;
			temp = start_ptr;
			q = start_ptr->next;

		while((!found) && (q != NULL))
		{
  			if(q->complaint_number != num)
			{
				temp = q;
				q = q-> next;
			}
			else
				found = true;
		}

			if(found)
			{
				temp->next = q->next;
				count--;

				if(last == q)
				last = temp;
				delete q;
				cout<<"The Complaint is Cancelled Successfully"<<endl;
			}
			else
				cout<<"Complaint to be Cancelled is not in the list."<<endl;
			}
		}
}	//End function

void complaint::update_complaint()
{
 system("cls");
 int sid;
 bool found;
 found = false;
 temp = start_ptr;
 cout<<"\n";
 cout<<"\t\t ================================================\n";
 cout<<"\t\t|   Complaint Management System - TRAVEL AGENCY |\n";
 cout<<"\t\t ================================================\n\n\n";
 cout<<"Enter Complaint Number To Update: ";
 cin>>sid;
 if (temp==NULL && sid==0)
 {
    cout<<"No Complaint To Update..!"<<endl;
 }

 else
 {
 	while(temp !=NULL && !found)
	{
		if (temp->complaint_number==sid)
		{
			found = true;
		}
		else
		{
			temp = temp -> next;
		}
    if (found)
    {
	cout << "Change  Complaint Number: ";
    cin >> temp->complaint_number;
	cout<< "Change Customer Name: ";
	cin.ignore();
	getline(cin, temp->customerName);
	cout<<"Change Date : ";
	cin>>temp->date;
	cout << "Complaint Description:"<< endl;
	cout<<"( 1000 words maximum ) \n";
	cout << "  " ;
	cin.ignore();
	getline(cin, temp->x);
	
	system("PAUSE");
	temp = temp->next;


	}

 cout<<"COMPLAINT RECORD UPDATED....!\n\n"<<endl;
 }

 	if(temp != NULL && temp->complaint_number != sid)
 	{
 	cout<<"Invalid Complaint Number...!\n\n"<<endl;
    }

}

}		//End function

void complaint::print_complaint()		
{
	int num;	
	bool found;			//variable to search 
	system("cls");
	ofstream outputFile;
	outputFile.open("prototype.txt");
	node *temp;

	temp=start_ptr;
	found = false;
 	cout<<"\n";
 	cout<<"\t\t ================================================\n";
 	cout<<"\t\t|   Complaint Management System - TRAVEL AGENCY |\n";
 	cout<<"\t\t ================================================\n\n\n";
 	outputFile<<"\n";
 	outputFile<<"\t\t ================================================\n";
 	outputFile<<"\t\t|   Complaint Management System - TRAVEL AGENCY |\n";
 	outputFile<<"\t\t ================================================\n\n\n";
	cout<<" Enter the Complaint Number To Print The Complaint Details\n";
	cin>>num;
	cout<<"\n";
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout <<"\t\tHere is the Complaint list\n"; 
	cout<<"---------------------------------------------------------------------------"<<endl;


	if(temp == NULL)
	{
		cout << "\tThere is no Complaint to show\n\t\t\tSo The List is Empty\n\n\n";
	}
	while(temp !=NULL && !found)
	{
		if (temp->complaint_number==num)
		{
			found = true;
		}
		else
		{
			temp = temp -> next;
		}
        if (found)	//print the complaint
        {
		cout <<"Complaint Number : "<<temp->complaint_number;
				outputFile << "Complaint Number : "<<temp->complaint_number << endl;
				cout <<"\n";
				cout<<"Customer Name: "<<temp->customerName<<endl;
				outputFile << "Customer Name: "<<temp->customerName<<endl;
				cout<<"Order Date : "<<temp->date<<endl;
				outputFile << "Order Date : "<<temp->date<<endl;
				cout<<"____________________________________________________________________________"<<endl;
				outputFile << "____________________________________________________________________________"<<endl;
				cout<<"Complaint description: "<<endl;
				outputFile << "Complaint description: "<<endl;
				cout<<"----------------------"<<endl;
				outputFile<<"------------------------------------------------------------------------------"<<endl;
				cout<< temp->x;
				outputFile << temp->x<<endl; 
				cout <<"\n";
				cout<<"____________________________________________________________________________"<<endl;
				outputFile << "____________________________________________________________________________"<<endl;
				
			temp=temp->next;
		
		}
		outputFile.close();
		cout << "Complaint Printed Succesfully....!\n";

}
}	//End function

void complaint::exit() //Function to exit
{
	cout<<"\nYou choose to exit.\n"<<endl;
}	//end function exit


////////////////////////////THE END OF PROGRAM//////////////////////////////////////////
