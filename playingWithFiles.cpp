
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string name, text_from_file;
    fstream file_my_name, file_king, file_number;

    //my_name.txt
    cout << "----- my_name.txt -----" << endl;
    cout << "Enter Your Name: ";
    cin >> name;

    file_my_name.open("my_name.txt", ios::out);

    if (file_my_name.good()) {

        file_my_name << name << "\n";

    file_my_name.close();
    }
    else {
        cout << "File not found" << endl;
    }
    cout << endl;

    //king.txt
    cout << "----- king.txt -----" << endl;
    file_king.open("king.txt", ios::out | ios::app);

    if (file_king.good()) {

        file_king << " King";

    file_king.close();
    }
    else {
        cout << "File not found" << endl;
    }
    cout << endl;

    //number.txt
    cout << "----- number.txt -----" << endl;
    file_number.open("number.txt", ios::in);

    if (file_number.good()) {

        while (!file_number.eof()) {

            getline(file_number, text_from_file);
            cout << text_from_file + "\n";
        }
        file_number.close();
    }
    else {
        cout << "File not found" << endl;
    }
    cout << endl;
}
