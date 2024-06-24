#include <iostream>
#include<fstream>
using namespace std;
char acco(char x){
cout<<"Press"<<endl<<"a.for Account management "<<endl<<"b. for ATM"<<endl<<"c.for Policies"<<endl;
cin>>x;
return x;
}
void management (char x,string name[],string ac[],int bal[],int v) {
    char y,z,u;
    int m=0;
    string w,arr;
    if (x == 'a') {
        cout << "Sub Menu" << endl << "a. for Display All Accounts" << endl << "b. for Add Account" << endl
             << "c. for Delete Account" << endl;
        cin >> y;
        cout<<"_____________________________________________________________________"<<endl;
        switch (y) {
            case 'a':
            	cout<<"----------ACCOUNTS IN HBL----------:"<<endl;
            	cout<<"HBL Branch no 10:"<<endl;
            	for(int i=0;i<v;i++){
                   arr=ac[i].substr(0,5);
                   if(arr=="HBL10"){
                   	cout<<name[i]<<" with Account no: "<<ac[i]<<" and Balance: "<<bal[i]<<endl;
				   }
                }
                cout<<endl;
                cout<<"HBL Branch no 13:"<<endl;
            	for(int i=0;i<v;i++){
                   arr=ac[i].substr(0,5);
                   if(arr=="HBL13"){
                   	cout<<name[i]<<" with Account no: "<<ac[i]<<" and Balance: "<<bal[i]<<endl;
				   }
                }
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"--------Accounts in UBL:---------"<<endl;
                cout<<"UBL Branch no 12:"<<endl;
            	for(int i=0;i<v;i++){
                   arr=ac[i].substr(0,5);
                   if(arr=="UBL12"){
                   	cout<<name[i]<<" with Account no: "<<ac[i]<<" and Balance: "<<bal[i]<<endl;
				   }
                }
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"----------Accounts in ABL:-----------"<<endl;
                cout<<"ABL Branch no 11:"<<endl;
            	for(int i=0;i<v;i++){
                   arr=ac[i].substr(0,5);
                   if(arr=="ABL11"){
                   	cout<<name[i]<<" with Account no: "<<ac[i]<<" and Balance: "<<bal[i]<<endl;
                   	cout<<endl;
				   }
                }
                cout<<endl;
                cout<<endl;
                cout<<"_____________________________________________________________________"<<endl;
                cout<<endl;
                cout << "-----ACCOUNTS WITH BALANCE LESS THAN ONE THOUSAND :------" << endl;
                cout << endl;
                for (int i = 0; i < v; i++) {
                    if (bal[i] < 1000) {
                        cout << name[i] << " with Account no : " << ac[i] << " with balance : " << bal[i] << endl;
                    }
                }
                cout << endl;
                cout<<endl;
                cout<<"_____________________________________________________________________"<<endl;
                cout<<endl;
                cout << "-----ACCOUNTS WITH BALANCE GREATER THAN 1 LAC :------" << endl;
                cout << endl;
                for (int i = 0; i < v; i++) {
                    if (bal[i] > 100000) {
                        cout << name[i] << " with Account no : " << ac[i] << " with balance : " << bal[i] << endl;
                        cout << endl;
                    }
                }
                cout<<endl;
                cout<<endl;
                cout<<"_____________________________________________________________________"<<endl;
                cout<<endl;
                break;
            case 'b':
			{
                do {
                    cout << "------ADD Account:------" << endl;
                    cout << "Enter Name of Account Holder of New Account you want to Add" << endl;
                    cin >> name[v];
                    cout << "Enter the Account Number of " << name[v];
                    cin >> ac[v];
                    cout << "Enter the balance of " << name[v];
                    cin >> bal[v];
                    v++;
                    cout
                            << "Do You Want to Add Any Account then press 'y' Otherwise Press any Key to Continue the Process"
                            << endl;
                    cin >> z;
                    cout << "-----ACCOUNTS AFTER ADDITION AND DELITION-----" << endl;
                    for (int i = 0; i <v; i++) {
                        cout << name[i] << " with Account no " << ac[i] << " With Balance : " << bal[i] << endl;
                    }
                } while ((z == 'y') || (z == 'Y'));
                break;
				}
            case 'c':
                cout << "-------Delete Account:-------" << endl;
                do {
                    cout << "Enter Name of Account Holder you want to Delete" << endl;
                    cin >> w;
                    for (int i = 0; i < v; i++) {
                        if (w == name[i]) {
                            for (int j = i; j < v - 1; j++) {
						        name[j] = name[j+1];
						        ac[j]=ac[j+1];
						        bal[j]=bal[j+1];
						    }
						v--;
                    }
                    }
                   cout << "Do You Want to Delete Any other Account then press 'y' Otherwise Press any Key to Continue the Process"
                            << endl;
                    cin >> u;
                    cout << "--------ACCOUNTS AFTER ADDITION AND DELITION-------" << endl;
                    for (int i = 0; i <v; i++) {
                        cout << name[i] << " with Account no " << ac[i] << " With Balance : " << bal[i] << endl;
                    }
                } while ((u == 'y') || (u == 'Y'));
                break;
        }
        ofstream j("names.txt");
        for(int i=0;i<v;i++){
            j<<name[i]<<endl;
        }
        ofstream k("accountnum.txt");
        for(int i=0;i<v;i++){
            k<<ac[i]<<endl;
        }
        ofstream l("balance.txt");
        for(int i=0;i<v;i++){
            l<<bal[i]<<endl;
        }
    }
}
char atm(char x,string name[],string ac[],int bal[],int v){
    int aa,az,yy=0,zz=0;
    string ab,ad;
    if(x=='b'){
        char o;
        string p,r,u;
        int q=0,s,t,d=0,e=0,am=0;
        cout<<"Press "<<endl<<"a. for Balance Inquiry"<<endl<<"b. for Deposit Ammount in your account"<<endl<<"c. for Withdraw Amount from Your Account"<<endl<<"d. for Transfer Amount"<<endl;
        cin>>o;
        switch (o) {
            case 'a':
            cout<<"Enter Your Name :";
            cin>>p;
            for(int i=0;i<100;i++){
                if(p==name[i]) {
                    cout << name[i] << " with Account Number : " << ac[i] << " With Balance : " << bal[i]<<endl;
                    q++;
                }
            }
            if(q==0)
                cout<<"Invalid"<<endl;
            break;
            case 'b':
                cout<<"Amount Deposit"<<endl;
                cout<<"Enter Your Name :"<<endl;
                cin>>r;
                cout<<"Enter the Amount you want to Deposit in Your Account"<<endl;
                cin>>s;
                for(int i=0;i<100;i++){
                    if(r==name[i]){
                        bal[i]=bal[i]+s;
                        e++;
                    }
                }
                if(e==0)
                    cout<<"Invalid Name"<<endl;
                break;
                case 'c':
                    cout<<"Amount Withdrawl"<<endl;
                    cout<<"Enter Your Name:";
                    cin>>u;
                    cout<<"Enter the Amount You want to Withdraw :";
                    cin>>t;
                for(int i=0;i<100;i++){
                    if(u==name[i]){
                    	az=bal[i]-t;
                    	if(az<1000){
                    		am++;
                    }
                    else
                    bal[i]=bal[i]-t;
                        d++;
                    }
                }
                if(d==0)
                    cout<<"Invalid Name"<<endl;
                    if(am!=0){
                    	cout<<"Your Amount after Transaction will be less than 1000 so you are not Allowed to Withdraw this Amount"<<endl;
                    	cout<<endl;
					}
                break;
                case'd':
                	cout<<"Enter the name from which you want to transfer the Amount"<<endl;
                	cin>>ab;
                	cout<<"Enter the name to which you want to transfer the Amount"<<endl;
                	cin>>ad;
                	cout<<"Enter the Amount you Want to Transfer:"<<endl;
                	cin>>aa;
					for(int i=0;i<v;i++){
						if(ab==name[i]){
							zz=zz+1;
							az=bal[i]-aa;
							if(az<1000){
							cout<<"Sorry, The Remaining Amount After Transfer will be less than One Thousand"<<endl;
						yy++;
						}
							else
							bal[i]=bal[i]-aa;
						if(ad==name[i]){
							zz=zz+1;
							if(az<1000);
							else
							bal[i]=bal[i]+aa;
						}
						}
					}
					if(zz<1)
					cout<<"Invalid Name"<<endl;
						for(int i=0;i<v;i++){
							if(ad==name[i]){
							bal[i]=bal[i]+aa;
						}
						}
						cout<<endl;
						cout<<endl;
						cout<<endl;
					}
        ofstream j("names.txt");
        for(int i=0;i<v;i++){
            j<<name[i]<<endl;
        }
        ofstream k("accountnum.txt");
        for(int i=0;i<v;i++){
            k<<ac[i]<<endl;
        }
        ofstream l("balance.txt");
        for(int i=0;i<v;i++){
            l<<bal[i]<<endl;
        }
        if(yy>0){
        cout << "ACCOUNTS AFTER DEPOSIT AND WITHDRAWL" << endl;
        for (int i = 0; i < v; i++) {
            cout << name[i] << " with Account no " << ac[i] << " With Balance : " << bal[i] << endl;
        }
    }
    }
}
void policy(char x){
    if(x=='c'){
        cout<<"-------Policies for this Bank:--------"<<endl;
        cout<<"1. Do not Shout."<<endl;
        cout<<"2. Stand Away from every one for protection from covid-19"<<endl;
        cout<<"3. Wear facemask"<<endl;
        cout<<"4. Eating is Not Allowed"<<endl;
        cout<<"5. Wait for Your Turn."<<endl;
        cout<<"6. Any Type of Weapon is not Allowed too Take or use in Bank"<<endl;
        cout<<"7. Avoid Talking"<<endl;
    }
}
int main() {
	char g;
	do{
string filename;
    int v = 0;
    string line;
    ifstream file("names.txt"); 
    if (file.is_open()) {
        while (getline(file, line)) {
            v++;
        }
        file.close();
    }
        char x;
        string name[1000];
        string ac[1000];
        int bal[1000];
        ifstream j("names.txt");
        for (int i = 0; i < v; i++) {
            j>> name[i];
        }
        ifstream k("accountnum.txt");
        for (int i = 0; i < v; i++) {
            k >> ac[i];
        }
        ifstream l("balance.txt");
        for (int i = 0; i < v; i++) {
            l >> bal[i];
        }
        for(int i=0;i<v;i++){
        	cout<<name[i]<<" With Account no :"<<ac[i]<<" with Balance: "<<bal[i]<<endl;
		}
		cout<<"_____________________________________________________________________"<<endl;
        char ans1 = acco(x);
        management(ans1, name, ac, bal,v);
        atm(ans1, name, ac, bal,v);
        policy(ans1);
        cout<<"Do you want to Restart then press y othrwise press any key to close the program : ";
        cin>>g;
    }while((g=='y')||(g=='Y'));
	    return 0;
    }
