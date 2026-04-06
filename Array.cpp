#include<iostream>
using namespace std;

int main(){
int aku[5] = {0,20,30,40,50};
cout << "Data Pada Index 1 = " << aku[1] << endl;

aku[1] = 200;
cout << "Data pada index 1 = " << aku[1] << endl;

int kamu[5];
cout << "Data Index ke 0 - ";
cin >> kamu[0];
cout << "Data Index ke 1 - ";
cin >> kamu[1];

cout << "Data ke 1 = " << kamu[0] << endl;
cout << "Data ke 2 = " << kamu[1] << endl;

}
