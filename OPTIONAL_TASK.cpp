#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;

string username = "";
string password = "";
bool valid_user = false;


bool getDetails(string user) {
    bool valid = true;
    //cout << user.length() << endl;
    if (user.length() >= 5 && user.length() <= 10) {
        for (int z = 0; z < user.length(); z++) {
            //cout << "user " << user[z] << endl;
            //isalpha - http://www.cplusplus.com/reference/cctype/isalpha/
            if (isalpha(user[z])) {
                //cout << "true" << endl;
                //valid = true;
            } else {
                valid = false;
            }
        }
    } else {
        valid = false;
    }
    return valid;
}


string getDetails() {
    int random_range;
    //random
    srand(time(0));
    random_range = ((rand() % 99999));
    //cout << "random_range " << random_range << endl;
    //ostringstream - http://www.cplusplus.com/reference/sstream/ostringstream/
    ostringstream pass;
    pass << random_range;
    return pass.str();
}


string newUser(string user) {
    string temp_user;
    if (user.length() < 5) {
        temp_user = user;
        while (temp_user.length() <= 5)
        {
            temp_user += "a";
        }
    } else if (user.length() > 10) {
        temp_user = "";
        for (int y = 0; y <= 10; y++) {
            //cout << "user[y] " << user[y] << endl;
            temp_user += user[y];
        }
    } else {
        temp_user = user;
    }
    //cout << "temp_user " << temp_user << endl;
    for (int x = 0; x < temp_user.length(); x++) {
        //cout << "temp_user[x] " << temp_user[x] << endl;
        if (!isalpha(temp_user[x])) {
            temp_user[x] = 'a';
        }
    }
    return temp_user;
}


void DisplayData(bool valid_u) {

    if (valid_u == true) {
        cout << "Welcome '" << username << "' !!" << endl;
        cout << "We have created your account." << endl;
        cout << "Your password : '" << password << "'" << endl;
        cout << endl;
    } else {
        cout << "Your username contain digits" << endl;
        cout << "Or is shorter than 5 chars" << endl;
        cout << "Or longer than 10 chars." << endl;
        cout << endl;
        username = newUser(username);
        cout << "Your new username '" << username << "' !!" << endl;
        cout << "We have created your account." << endl;
        cout << "Your password : " << password << "'" << endl;
        cout << endl;
   }
}


int main(){

    cout << "Enter your Username: ";

    cin >> username;

    cout << endl;

    valid_user = getDetails(username);

    password = getDetails();

    DisplayData(valid_user);

}
