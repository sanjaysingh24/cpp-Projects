#include<iostream>
#include<string> // for include string
#include<fstream> // header file for opening files
using namespace std;

//check the user is login or not
bool IsLoggedIn(){
    string username,password,un,pw; // variables   for username , password
    cout<<"Enter user name: ";
    cin>>username; //enter the username
    cout<<"Enter the password:";
    cin>>password;// enter the password

    ifstream read("E:\\" + username + ".txt"); //to use reads from the file
    getline(read,un); // using read the text content line by line
    getline(read,pw); //same thing
   //here un is used for comparison with username and pw is also used for the same things
    if(un==username && pw ==password){
        return true;
    }
    else{
        return false;
    }


}

int main(){
int choice;
cout<<"1: Register\n2:Login\nYour choice: ";
cin>>choice;
if(choice==1){
    // for register:
    string username,password;
    cout<<"Select a Username: ";
    cin>>username;
    cout<<"Select a password: ";
    cin>>password;

    ofstream file; // create a file  you can give a file name as  a parameter
    file.open("E:\\ Porjects" + username +".txt");

    file<<username <<endl <<password; // to write in a file

    file.close(); // close the file
    main();// return to the main
}
else if(choice==2){

    bool status=IsLoggedIn(); // first of all enter the user name and password then check either it is correct or not
    if(!status){
        cout<<"false login" <<endl;

        return 0;
    }

    else{
        cout<<" Succesfully logged in!" <<endl;

        return 1;
    }
}

return 0;
}
