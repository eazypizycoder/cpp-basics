// login page terminal
// C++ code: Login system with multiple users

#include <iostream>
using namespace std;
int main()
{

    string username, password;

    cout << "Enter your username ";
    // getline(cin,username)
    cin >> username;
    // john doe

    // Operations :  and or not
    // if(age>18)

    cout << "Enter your password ";
    cin >> password;


    if ((username == "admin") and (password == "12345"))
    {
        cout << "Login sucessfully!";
    }
    else if (username != "admin" and password == "12345")
    {
        cout << "Your username is not correct" << endl;
    }
    else if (username == "admin" and password != "12345")
    {
        cout << "Your password is not correct" << endl;
    }
    else
    {
        cout << "Your username and password both are incorrect!";
    }

    return 0;
}

/*
     ==    1==1 ture
      !=  1!=1 flase
     ! not

        && and 2 3 4 condition sabi ka true hona zarorti
        || or  2 3 4 conditions heen un se ek bi true ho
        != not operator apple!=apple
        == equal apple==apple
        == apple==apple actually we are conparing



 */