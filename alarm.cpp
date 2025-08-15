#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

int main(){
    cout << "Alarm Clock" << endl;

    while (true){
        cout<<"\n Alarm Rings!" << endl;

        char ready;
        cout <<"Are you ready to wake up? (y/n): ";
        cin >> ready;
        if (ready == 'y' || ready == 'Y') {
            cout << "You got up on time! " << endl;
            cout << "Alarm turned off. Have a nice day! " << endl;
            break;
        } 
        char late;
        cout << "Will you be late if you snooze? (y/n): ";
        cin >> late;
        if (late == 'y' || late == 'Y') {
            cout << "Better wake up now!" << endl;
            cout << "Alarm turned off. Have a nice day!" << endl;
            break;
        } else {
            cout << "Snoozing for 5 minutes" << endl;
            this_thread::sleep_for(chrono::seconds(5)); // Simulating 5 minutes with 5 seconds
        }
    }

    return 0;
    
}
