#include <iostream>
#include <string>
using namespace std;

struct Ticket {
int ticketNo;
string passengerName;
string destination;
bool isBooked;
};

int main() {
Ticket t[50];
int n;
 cout << "Enter number of tickets: ";
cin >> n;
for(int i=0; i<n; i++) {
cout << "Enter Ticket No, Passenger Name, Destination: ";
cin >> t[i].ticketNo >> t[i].passengerName >> t[i].destination;
t[i].isBooked = true;
}
cout << "\n--- Ticket Records ---\n";
for(int i=0; i<n; i++) {
 cout << t[i].ticketNo << " " << t[i].passengerName << " " << t[i].destination 
<< " Status: " << (t[i].isBooked ? "Booked" : "Available") << endl;
}
return 0;
}
