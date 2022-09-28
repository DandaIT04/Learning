#include <iostream>;

using namespace std;

void checkInMenu(string userOption){
    cout << "Check In Guests\n";
    cout << "-------------------\n\n";
}

void startMenu(string userOption){
    cout << "Hotel Booking System: \n";
    cout << "1) Check in guests\n";
    cout << "2) Add a booking\n";
    cout << "3) Display guests on given date\n";
    cout << "4) Display occupied rooms on given month\n";

    cout << "\n0) To exit Booking System\n";
    cout << "-------------------------------------------\n";    
    cout << "Option: ";

}

int main(){

    string userOption = "";

    while (userOption != "0"){

        startMenu(userOption);

        cin >> userOption;
        cout << "\n";

        if (userOption == "1"){
            checkInMenu(userOption);
        }    
    }

    exit(0);
    
}
