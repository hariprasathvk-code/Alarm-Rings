#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

int main(){
    cout << "Alarm Clock Similation" << endl;

    while (true){
        Cout<<"\n Alarm Rings!" << endl;

        char ready:
        cout <<"Are you ready to wake up? (y/n): ";
        cin >> ready;
        if (ready == 'y' || ready == 'Y') {
            cout << "You got up on time! " << endl;
            cout << "Alarm turned off. Have a nice day! " << endl;
            break;
        } 

    }
}
