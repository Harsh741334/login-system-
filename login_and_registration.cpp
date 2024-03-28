// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include<fstream>
using namespace std;
class registration{
    string username,email,password;
    fstream file;
    public:
    void setdata()
    {
        cout<<"ENTER THE USER NAME : "<<endl;
        getline(cin,username);

        cout<<"ENTER THE USER PASSWORD : "<<endl;
        getline(cin,password);

        cout<<"ENTER THE EMAIL ID : "<<endl;
        getline(cin,email); 

        // ofstream file("harsh.txt ");
        // if(file .is_open()){
        //    file<< username <<"*"<<password <<"* "<<email ;
           
        // }
        // else{
        //     cout<<"ERROR IN OPENING THE FILE "<<endl;
        // }
        // file.close();


        // ofstream file("harsh.txt",ios::out  | ios ::app);
        // if (file.is_open()) {
        //     file << "the user name of the applicant is : "<<username << ", and the password of the applicant is : " << password << ", and the email id of the applicant is :  " << email;
        //     cout << "Data written to file successfully." << endl;
        // } else {
        //     cout << "ERROR IN OPENING THE FILE " << endl;
        // }
        // file.close();


        //file.open("harsh.txt , ios::out| ios::app");
        file.open("harsh.txt", ios::out | ios::app);

        file<<"the username :"<<username<<endl<<"password : "<<password<<"email id : "<<email<<endl;
        file.close();

         
    }
    void display(){
        setdata();
        cout<<"THE USERNAME IS : "<<username<<endl;
        cout<<"THE PASSWORD IS : "<<password<<endl;
        cout<<"THE EMAIL IS OF THE USE IS : "<<email<<endl;
    }

    void log_in(){
        cout<<"----------------log in------------------"<<endl;
        cout<<"ENTER THE NAME :"<<endl;
        string name,pass;
        cin>>name;
        cout<<"ENTER THE PASSWORD : "<<endl;
        cin>>pass;
        
    }
    
};


int main()
{
       registration hu;
    char choose;
    cout << "CHOOSE THE OPTION BELOW :: " << endl;
    cout << "1. REGISTRATION  " << endl;
    cout << "2. LOG IN " << endl;
    cout << "3. FORGET PASSWORD  " << endl;
    cout << "4. EXIT  " << endl;
    cout << endl
         << endl
         << "CHOOSE THE OPTION FROM 1 TO 4 :: " << endl;
    cin >> choose;
    cin.ignore();
    switch (choose)
    {
    case '1':
 
    hu.display();

    break;
    
    case '2':

    break;
    
    case '3':

    break;
    
    case '4':

    break;
    
     default:
    cout<<"ENTER THE VALID INPUT . "<<endl;
    break; ;
    
    };
    return 0;
}