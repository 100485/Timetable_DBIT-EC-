#include <iostream>
using namespace std;

int main ()

{
    char opt;
    cout << "Hi. This is your DBIT Sem 1 Timetable (sep-Dec 2021)";
    cout << "\n 1. Monday \n 2. Tuesday \n 3. Wednesday \n 4. Thursday \n 5. Friday \n 6. Saturday \n\n";
    cout << "Please select day of choice (e.g M,T,W,t,F,S...)";
    cin >> opt;

switch (opt)
{
    case 'M':
    cout << "Monday Class\n.....";
    cout << "DBIT1101: Fundamentals of IT.....";
    break;


    case 'T':
    cout << "Tuesday Class\n.....";
    cout << "DBIT1102: Introduction to Programming.....";
    break;

    case 'W':
    cout << "Wednesday Class\n.....";
    cout << "DBIT1103: Bussiness Communication Skills.....";
    break;

    case 't':
    cout << "Thursday Class\n.....";
    cout << "DBIT1104: Introduction to Ethics.....";
    break;

    case 'F':
    cout << "Friday Class\n.....";
    cout << "DBIT1105: Fundamentals of Accounting.....";
    break;

    case 'S':
    cout << "Saturday Class\n.....";
    cout << "DBIT1106: Math for Bussiness Computing.....";
    break; 

    default: 
    cout << "Invalid Choice";
}
   
return 0; 
}
