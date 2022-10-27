#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string.h>
using namespace std;
class Bank{
	private:
		int total;
		string id;
		struct person{
			string name,ID,address;
			long long int contact,cash;
		}person[100];
	public:
		Bank(){
			total=0;
			}
		void choice();
		void perData();
		void show();
		void update();
		void search();
		void transactions();
		void del();
		
		
		
};
int main(){
                      //Sign Up Page ..................

	cout<<"\n\n\t\t\t\t\t\tBank Management System"<<endl;
	cout<<"\n\n\t\tSign Up"<<endl;
	string username,password;
	cout<<"\n\t\tEnter the Username: ";
	cin>>username;
	cout<<"\n\t\tEnter the Password: ";
	cin>>password;

	cout<<"\n\t\tYour id is creating please wait";
	for(int i=0;i<4;i++){
		cout<<".";
		Sleep(1000);
	}
	cout<<"\n\t\tYour id is created successfully"<<endl;
	system("CLS");
	
	
	
                     //	Login Page...........................
                     
    start:
    cout<<"\n\n\t\t\t\t\t\tBank Management System"<<endl;
    cout<<"\n\n\t\tLogin"<<endl;
    string username1,password1;
    cout<<"\n\t\t Username: ";
    cin>>username1;
    cout<<"\n\t\t Password: ";
    cin>>password1;
    if(username1==username&&password1==password){
    	Sleep(2000);
    	system("CLS");
        Bank b;
    	while(1){
    	b.choice();		
		}
	}
	else if(username1!=username){
		cout<<"Your username is incorrect"<<endl;
		Sleep(3000);
		goto start;
	}
	else if(username1==username&&password1!=password){
		cout<<"Your password is incorrect"<<endl;
		Sleep(3000);
		goto start;
	}
	else{
		cout<<"Your username and password both are incorrect"<<endl;
		Sleep(3000);
		goto start;
	}
	
	
	
		
	
	
	
return 0;	
}

                         // Different function declaration
            
void Bank::choice(){
	char ch;
	while(1){
	
	cout<<"\n\nPRESS..!"<<endl;
	cout<<"1. Create new account"<<endl;
	cout<<"2. View customers list"<<endl;
	cout<<"3. Update information of existing account"<<endl;
	cout<<"4. Check status of existing account"<<endl;
	cout<<"5. For transactions"<<endl;
	cout<<"6. Remove exixting account"<<endl;
	cout<<"7. Exit"<<endl;
	ch=getch();
	system("CLS");
	switch(ch){
		case '1':
			Sleep(1000);
			Bank::perData();
			break;
		case '2':
			Sleep(1000);
			if(total==0){
				cout<<"No data is entered"<<endl;
			}
			else
			Bank::show();
			break;
		case '3':
			Sleep(1000);
			if(total==0){
				cout<<"No data is entered"<<endl;
			}
			else
			Bank::update();
			break;
		case '4':
			Sleep(1000);
			if(total==0){
				cout<<"No data is entered"<<endl;
			}
			else
			Bank::search();
			break;
		case '5':
			Sleep(1000);
			if(total==0){
				cout<<"No data is entered"<<endl;
			}
			else
			Bank::transactions();
			break;
		case '6':
			Sleep(1000);
			if(total==0){
				cout<<"No data is entered"<<endl;
			}
			else
			Bank::del();
			break;
	}
	if(ch==7)
	break;
}
	
}

void Bank::perData(){
	cout<<"Enter data of person"<<total+1<<endl;
	cout<<"Enter name: ";
	cin>>person[total].name;
	cout<<"Enter ID: ";
	cin>>person[total].ID;
	cout<<"Address: ";
	cin>>person[total].address;
	cout<<"Contact: ";
	cin>>person[total].contact;
	cout<<"Total Cash: ";
	cin>>person[total].cash;
	
	total++;
	
}

void Bank::show(){
	
	for(int i=0;i<total;i++){
		cout<<"\nData of person "<<i+1<<endl;
		cout<<"Name: "<<person[i].name<<endl;
		cout<<"ID: "<<person[i].ID<<endl;
		cout<<"Address: "<<person[i].address<<endl;
		cout<<"Contact: "<<person[i].contact<<endl;
		cout<<"Cash: "<<person[i].cash<<endl;
		
	}
}

void Bank::update(){
	cout<<"Enter ID of customer those who want to update"<<endl;
	cin>>id;
	for(int i=0;i<total;i++){
		if(id==person[i].ID){
		cout<<"Previous Data "<<endl;
		cout<<"Data of person "<<i+1<<endl;
		cout<<"Name: "<<person[i].name<<endl;
		cout<<"ID: "<<person[i].ID<<endl;
		cout<<"Address: "<<person[i].address<<endl;
		cout<<"Contact: "<<person[i].contact<<endl;
		cout<<"Cash: "<<person[i].cash<<endl;
		cout<<"\nEnter new data"<<endl;
	cout<<"Enter name: ";
	cin>>person[i].name;
	cout<<"Enter ID: ";
	cin>>person[i].ID;
	cout<<"Address: ";
	cin>>person[i].address;
	cout<<"Contact: ";
	cin>>person[i].contact;
	cout<<"Total Cash: ";
	cin>>person[i].cash;
		break;
		}
	if(i==total-1){
		cout<<"No such record are founds"<<endl;
	}
	}
}

void Bank::search(){
	cout<<"Enter ID of customer those who want to search"<<endl;
	cin>>id;
	for(int i=0;i<total;i++){
		if(id==person[i].ID){
		cout<<"Name: "<<person[i].name<<endl;
		cout<<"ID: "<<person[i].ID<<endl;
		cout<<"Address: "<<person[i].address<<endl;
		cout<<"Contact: "<<person[i].contact<<endl;
		cout<<"Cash: "<<person[i].cash<<endl;
		break;	
		}
		if(i==total-1){
		cout<<"No such record are founds"<<endl;
	}
	}
}

void Bank::transactions(){
	int cash;
	char ch;
	cout<<"Enter ID of customer those who want transaction"<<endl;
	cin>>id;
	for(int i=0;i<total;i++)
	{
		if(id==person[i].ID){
		cout<<"Name: "<<person[i].name<<endl;
		cout<<"Address: "<<person[i].address<<endl;
		cout<<"Contact: "<<person[i].contact<<endl;
		cout<<"\n Existing Cash: "<<person[i].cash<<endl;
		cout<<"Press 1 to deposit"<<endl;
		cout<<"Press 2 to withdraw"<<endl;
		ch=getch();
		switch(ch){
			case '1':
				cout<<"How many cash you want to deposit??"<<endl;
				cin>>cash;
				person[i].cash=person[i].cash+cash;
				cout<<"Your new cash is "<<person[i].cash<<endl;
				break;
			case '2':
				back:
				cout<<"Enter cash you want to withdraw??"<<endl;
				cin>>cash;
				if(person[i].cash>=cash){
					person[i].cash=person[i].cash-cash;
				cout<<"Your new cash is "<<person[i].cash<<endl;
					}
				else {
					cout<<"Amount Exceeded...."<<endl;
					cout<<"Your Existing cash is just "<<person[i].cash;
					Sleep(3000);
					goto back;
				}
				break;
			default:
				cout<<"Invalid Input"<<endl;		
		}
		break;
		}
	if(i==total-1){
		cout<<"No such record are founds"<<endl;
	}
	}
	
}

void Bank::del(){
	char ch;
	cout<<"Press 1 to remove specific record"<<endl;
	cout<<"Press 2 to remove full record"<<endl;
	ch=getch();
	switch(ch){
		case '1':
			 cout<<"Enter id of those customer you want to delete ";
			 cin>>id;
			 for(int i=0;i<total;i++){
			 	if(id==person[i].ID){
			 		for(int j=i;j<total;j++){
			 			
			 			person[j].name=person[j+1].name;
			 			person[j].ID=person[j+1].ID;
			 			person[j].address=person[j+1].address;
			 			person[j].contact=person[j+1].contact;
			 			person[j].cash=person[j+1].cash;
			 			total--;
			 			cout<<"Your required data is deleted successfully...."<<endl;
			 			break;
					 }
				 }
				if(i=total-1){
					cout<<"No such record are found"<<endl;
					
				}
			 }
			 break;
			 case '2':
			 	total=0;
			 	cout<<"All record is deleted"<<endl;
			 	break;
			default:
				cout<<"Invalid Input"<<endl;
				
		}
	
}
