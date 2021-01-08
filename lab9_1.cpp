#include<iostream>
using namespace std;

int main(){
	int time=1;
	int count[5] = {};
	char grade;
	int total;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" <<time<<"]: ";
		cin >> grade; 
		if(grade=='A'){
			count[0]++;
		}else if(grade=='B'){ // if grade is B
			count[1]++;
		}else if(grade=='C'){
			count[2]++;
		}else if(grade=='D'){
			count[3]++;
		}else if(grade=='F'){
			count[4]++;
		}else if(grade!='0'){ // grade is wrong input
			cout<<"Wrong input. Please input again."<<endl; continue;
		}
		time++;
		total++;
	}while(grade!='0');
	
	
	cout << "In total "<<time-2<<" students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;	
	
	return 0;
}
