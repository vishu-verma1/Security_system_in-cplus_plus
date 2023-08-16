#include <fstream>  //liberaray for files opreations
#include <iostream> //for input output
#include <sstream>  // liberaray that prvoid template
using namespace std;

int main() {
  int choice, i = 0;
  string text, oldpassword, password1, password2, pass, name, password0, age, user,
      word, word1; // used variables 
  string creds[2], cp[2];

  cout << "       Security System       " << endl;
  cout << "_____________________________" << endl << endl;
  cout << "       1. Register           " << endl;
  cout << "       2. Login              " << endl;
  cout << "       3. Change Password    " << endl;
  cout << "       4. End Program        " << endl << endl;

  do {
    cout << endl << endl;
    cout << "Enter Your Choice:-";
    cin >> choice;
    switch (choice) {
    case 1: {
      cout << "________________________" << endl << endl;
      cout << "--------Register--------" << endl;
      cout << "________________________" << endl << endl;
      cout << "Pleas Enter Username:-";
      cin >> name;
      cout << "Pleas Enter The Password:-";
      cin >> password0;
      cout << "Pleas Enter The Age:-";
      cin >> age;

      ofstream of1;
      of1.open("file.txt");
      if (of1.is_open()) {
        of1 << name << "\n";
        of1 << password0 << "\n";
        cout << "Registration Successfull " << endl;
      }

      break;

  }

    case 2: {
      i = 0;
      cout << "________________________" << endl << endl;
      cout << "----------Login---------" << endl;
      cout << "________________________" << endl << endl;

      ifstream of2;
      of2.open("file.txt");
      cout << "Please Enter The Username:-";
      cin >> user;
      cout << "Please Enter The Password:-";
      cin >> pass;

      if (of2.is_open()) {
        while (!of2.eof()) // with end of file function we detect when end of
                           // file is reached
        {
          while (getline(of2, text)) // getline will read the file line by line
          {
            istringstream iss(text); // This obj will stream the string and will
                                     // store it using extraction operator
            iss >> word;
            creds[i] = word;
            i++;
          }
          if (user == creds[0] && pass == creds[1]) {
            cout << "---Log in Successfull---";
            cout << endl << endl;
            cout << "  Details  " << endl;
            cout << "  Username:  " + name << endl;
            cout << "  Password:  " + pass << endl;
            cout << "  Age:       " + age << endl;
          } else {
            cout << endl << endl;
            cout << "incorrect Credentials" << endl;
            cout << "|   (A) Press 2 to login              |" << endl;
            cout << "|   (b) Press 3 to Change password    |" << endl;
          }
        }
      }
      break;
    }

    case 3: {
      i = 0;
      cout << "__________________________________" << endl << endl;
      cout << "----------Change Password---------" << endl;
      cout << "__________________________________" << endl << endl;

      ifstream of0;
      of0.open("file.txt");
      cout << "Enter The Old Password:-";
      cin >> oldpassword;
      if (of0.is_open()) {
        while (!of0.eof()) {
          while (getline(of0, text)) {
            istringstream iss(text);
            iss >> word1;
            cp[i] = word1;
            i++;
          }
          if (oldpassword == cp[1]) {
            of0.close();
            ofstream of1;
            of1.open("file.txt");
            if (of1.is_open()) {
              cout << "Enter Your New Password:-";
              cin >> password1;
              cout << "Enter Your Password Again-";
              cin >> password2;
              if (password1 == password2) {
                of1 << cp[0] << "\n";
                of1 << password1;
                cout << "Password Changed Successfully" << endl;
              } else {
                of1 << cp[0] << "\n";
                of1 << oldpassword;
                cout << "Password Do Not Matched";
              }
            }
          }

          else {
            cout << "Please Enter A Valid Password" << endl;
            break;
          }
        }
      }
      break;
    }
    case 4: {
      cout << "__________THANKYOU!________";
      break;
    }
    default:
      cout << "Enter A Valid Choice";
      break;
    }
  } while (choice != 4);
  return 0;
}