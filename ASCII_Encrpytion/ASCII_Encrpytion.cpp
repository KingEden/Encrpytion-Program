// Uzair Asif 
// Abdullah Malik
#include <iostream>
#include <conio.h>
#include <fstream>
#include<stdio.h>
#include<windows.h>
#include<stdio.h>
#include <string>
#include <cstdlib>

using namespace std;

class Admin {
public:
    int Password() {
        string password, P;
        char p;
        cout << "Enter Password: ";
        p = _getch();
        while (p != 13)
        {
            if (p == 8)
            {
                P.resize(P.length() - 1);
                cout << P;
                password.resize(password.length() - 1);
            }
            else {
                P = P + "*";
                cout << P;
                password.push_back(p);
            }
            p = _getch();
            system("cls");
            cout << "Enter Password: ";
        }
        string C = password;
        passwordcheck(password);
        system("cls");
        if (passwordcheck(password) == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int passwordcheck(string C)
    {
        int n = 1, m = 4;
        string B = "Admin123";

        do {
            if (C == B)
            {

                cout << "Password Entered Correctly\n";
                m = 2;
                return 1;
            }
            else
            {
                cout << "Password Entered InCorrectly\n";
                return 0;
            }
        } while (n == !m);
    }
    void Power_Deny(){
        string input = "Deny Access Of IDs\nDelete to regain the Access";
        ofstream out("Deny.txt");
        out << input;
        out.close();
    }

};
class User {
public:
    
    int Password() {
        string password, P;
        char p;
        cout << "Enter Password: ";
        p = _getch();
        while (p != 13)
        {
            if (p == 8)
            {
                P.resize(P.length() - 1);
                cout << P;
                password.resize(password.length() - 1);
            }
            else {
                P = P + "*";
                cout << P;
                password.push_back(p);
            }
            p = _getch();
            system("cls");
            cout << "Enter Password: ";
        }
        string C = password;
        passwordcheck(password);
        system("cls");
        if (passwordcheck(password) == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int passwordcheck(string C)
    {
        int n = 1, m = 4;
        string B = "User123";

        do {
            if (C == B)
            {

                cout << "Password Entered Correctly\n";
                m = 2;
                return 1;
            }
            else
            {
                cout << "Password Entered InCorrectly\n";
                return 0;
            }
        } while (n == !m);
    }
};
class NewUser {
public:
    void Password_change()
    {
        cout << "\nKindly Enter Your New Password\n";
        string c;
        cin >> c;
        cout << "Kindly Enter Your Confirm  New Password\n";
        string d;
        cin >> d;
        
        if (c == d)
        {
            cout << "Password has been correctly entered\n\n";
            string input;
            input = c;
            ofstream out("Password.txt");
            out << input;
            out.close();
        }
        else
        {   
            cout << "Password entered incorrectly\n";
            cout << "Retry\n";
            Password_change();
        }

    }
    int Password() {
        string password, P;
        char p;
        cout << "Enter Password: ";
        p = _getch();
        while (p != 13)
        {
            if (p == 8)
            {
                P.resize(P.length() - 1);
                cout << P;
                password.resize(password.length() - 1);
            }
            else {
                P = P + "*";
                cout << P;
                password.push_back(p);
            }
            p = _getch();
            system("cls");
            cout << "Enter Password: ";
        }
        string C = password;
        passwordcheck(password);
        system("cls");
        if (passwordcheck(password) == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int passwordcheck(string C)
    {
        int n = 1, m = 4;
        ifstream inFile;
        string s;
        inFile.open("test.txt");
        getline(inFile, s );
        do {
            if (C == s)
            {

                cout << "Password Entered Correctly\n";
                m = 2;
                return 1;
            }
            else
            {
                cout << "Password Entered InCorrectly\n";
                return 0;
            }
        } while (n == !m);
    }
};
class ASCII_Encoded {
    int key;

    string fle = "DataBase.txt";
    char c;

public:
    void encrypt();
    void encrypt1();
    void decrypt();
    void decrypt1();
    int keyCode();
    void Self_destruct();
    int keyPlay();
    int KeyGet();
};
void ASCII_Encoded::encrypt()
{
    key = 56;
    fstream fin, fout;

    fin.open(fle, fstream::in);
    fout.open("encrypt.txt", fstream::out);

    while (fin >> noskipws >> c) {
        int temp = (c + key);


        fout << (char)temp;
    }
    fin.close();
    fout.close();
}
void ASCII_Encoded::decrypt()
{
    cout << "Opening Database ";
    key = 56;
    fstream fin;
    fstream fout;
    fin.open("encrypt.txt", fstream::in);
    fout.open("decrypt.txt", fstream::out);

    while (fin >> noskipws >> c) {

        int temp = (c - key);
        fout << (char)temp;
    }

    fin.close();
    fout.close();
}
int ASCII_Encoded::keyCode()
{
    cout << "Enter the New Key\n";
    cin >> key;
    system("cls");
    cout << "Change To Key has been made\n";
    return 1;
    
}
int ASCII_Encoded::keyPlay()
{
    keyCode();
    return key;
}
void ASCII_Encoded::encrypt1()
{
    keyPlay();
    fstream fin, fout;

    fin.open(fle, fstream::in);
    fout.open("encrypt1.txt", fstream::out);

    while (fin >> noskipws >> c) {
        int temp = (c + key);


        fout << (char)temp;
    }
    fin.close();
    fout.close();
}
int ASCII_Encoded::KeyGet()
{
    return key;
}
void ASCII_Encoded::decrypt1()
{
    KeyGet();
    fstream fin;
    fstream fout;
    fin.open("encrypt1.txt", fstream::in);
    fout.open("decrypt1.txt", fstream::out);

    while (fin >> noskipws >> c) {

        int temp = (c - key);
        fout << (char)temp;
    }

    fin.close();
    fout.close();
}
void ASCII_Encoded::Self_destruct()
{
    int status;
    char Name_of_file[20];
    cout << "Enter the Name of File: ";
    cin >> Name_of_file;
    status = remove(Name_of_file);
    if (status == 0)
        cout << "\n File Has Been Deleted Successfully!";
    else
        cout << "\nIssue has been Occurred!";
    cout << endl;
}
void Display_File()
{
    string File;
    ifstream openfile("decrypt.txt");
    if (openfile.is_open())
    {
        while (!openfile.eof())
        {
            openfile >> File;
            cout << File << endl;
        }
    }
}
void Display_File1()
{
    string File;
    ifstream openfile("decrypt1.txt");
    if (openfile.is_open())
    {
        while (!openfile.eof())
        {
            openfile >> File;
            cout << File << endl;
        }
    }
}
int Display_ID(int F)
{
    string File;
    ifstream openfile("ID.txt");
    if (openfile.is_open())
    {
        while (!openfile.eof())
        {
            openfile >> File;
            cout << File << endl;
        }
    }
    else
    {
        cout << "IDs not founded\nPlease Talk To Admin\n";
        F = 0;
        return F;
    }
    cout << endl;
}



int main() {

    int menu = 0;
    int p = 0;

    Admin ad;
    User us;
    NewUser nus;
    ASCII_Encoded enc;
    enc.encrypt();
    do
    {
        cout << "*******Welcome to Hospitial XYZ********\n";
        cout << "MENU:\n\nEnter 1 for Admin Log In\n";
        cout << "Enter 2 for User Log in\n";
        cout << "Enter 3 for User New Sign Up\n";
        cout << "Enter 0 to Exit\n\n";

        cin >> menu;
       
        

        if (menu == 1)
        {
            cout << "*******Welcome to Admin-Login********\n";
           

            if (ad.Password() == 1)
            {
                int n ;
                do
                {
                    cout << "\n*******Welcome Dear Admin********\n";
                    cout << "1-View Default Encrptyion\Decrption Key\n";
                    cout << "2-Change key\n";
                    cout << "3-Invoke the DataBase\n";
                    cout << "4-Invoke IDs\n";
                    cout << "5-Invoke Access of Users\n";
                    cout << "0-Return to Main Menu\n";
                    cin >> n;

                    if (n == 1)
                    {
                        cout << "Default Key :: 46";
                    }
                    else if (n == 2)
                    {   
                            int status;
                            
                            status = remove("encrypt.txt");
                       
                            
                            enc.encrypt1();
                        
                          
                        
                    }
                    else if (n == 3)
                    {
                        enc.Self_destruct();
                    }
                    else if (n == 4)
                    {
                        enc.Self_destruct();
                    }
                    else if (n == 5)
                    {
                        ad.Power_Deny();
                    }
                }while (n != 0);
                system("cls");
            }
            
            

        }

        else if (menu == 2)
{   
            string File;
            ifstream openfile("Deny.txt");
            if (openfile.is_open())
            {
            cout << "Access Denied\n";
            }
            else {
                int id_number = 0;
                int F = 0;
                cout << "*******Welcome to User-Login********\n";
                system("cls");
                Display_ID(F);
                cout << "\n\nEnter ID Number \n";
                cin >> id_number;
                system("cls");
                if (F == 4)
                {
                    if (id_number == 12)
                    {
                        cout << "*******Welcome Doctor********\n";

                        if (us.Password() == 1)
                        {
                            char input;
                            cout << "Default key Used ? [Y/N]";
                            cin >> input;
                            system("clsr");
                            if (input == 'Y' || input == 'y')
                            {
                                cout << "\nAccessing DataBase\n\n\n";

                                enc.decrypt();
                                Display_File();
                            }
                            else
                            {
                                cout << "\nAccessing DataBase\n";
                                enc.decrypt1();
                                Display_File1();
                            }
                        }
                    }
                    else if (id_number == 13)
                    {
                        cout << "*******Welcome Nurse********\n";

                        if (us.Password() == 1)
                        {
                            char input;
                            cout << "Default key Used ? [Y/N]";
                            cin >> input;
                            system("clsr");
                            if (input == 'Y' || input == 'y')
                            {
                                cout << "\nAccessing DataBase\n\n\n";

                                enc.decrypt();
                                Display_File();
                            }
                            else
                            {
                                cout << "\nAccessing DataBase\n";
                                enc.decrypt1();
                                Display_File1();
                            }
                        }
                    }
                    else if (id_number == 14)
                    {
                        cout << "*******Welcome Patient********\n";

                        if (us.Password() == 1)
                        {
                            char input;
                            cout << "Default key Used ? [Y/N]";
                            cin >> input;
                            system("clsr");
                            if (input == 'Y' || input == 'y')
                            {
                                cout << "\nAccessing DataBase\n\n\n";

                                enc.decrypt();
                                Display_File();
                            }
                            else
                            {
                                cout << "\nAccessing DataBase\n";
                                enc.decrypt1();
                                Display_File1();
                            }
                        }
                    }
                    else if (id_number == 15)
                    {
                        cout << "*******Welcome New Patient********\n";

                        if (nus.Password() == 1)
                        {
                            char input;
                            cout << "Default key Used ? [Y/N]";
                            cin >> input;
                            system("clsr");
                            if (input == 'Y' || input == 'y')
                            {
                                cout << "\nAccessing DataBase\n\n\n";

                                enc.decrypt();
                                Display_File();
                            }
                            else
                            {
                                cout << "\nAccessing DataBase\n";
                                enc.decrypt1();
                                Display_File1();
                            }
                        }
                    }
                }
            }
}
        else if (menu == 3)
        {
        system("cls");
        cout << "*******Welcome New User********\n";
        nus.Password_change();
        }

    } while (menu != 0);
    return 0;

}
