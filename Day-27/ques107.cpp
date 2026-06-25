#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main() {
    Employee e[50];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for(int i=0; i<n; i++) {
        cout << "Enter ID, Name, Basic Salary, HRA, DA: ";
        cin >> e[i].id >> e[i].name >> e[i].basicSalary >> e[i].hra >> e[i].da;
        e[i].grossSalary = e[i].basicSalary + e[i].hra + e[i].da;
    }

    cout << "\n--- Salary Records ---\n";
    for(int i=0; i<n; i++) {
        cout << e[i].id << " " << e[i].name << " Gross Salary: " << e[i].grossSalary << endl;
    }

    return 0;
}
