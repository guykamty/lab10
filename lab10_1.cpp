#include<iostream>
using namespace std;

int main(){
int count[5] = {};
char grade;

cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
int i = 0;
do{
cout << "Student ["<<i+1<<"]: ";
cin >> grade;
if(grade=='0'){
       break;
   }
   
   if(grade=='A'){ // if grade is A
count[0]++;
}else if(grade=='B'){ // if grade is B
count[1]++;
        }else if(grade=='C'){ // if grade is C
count[2]++;
}else if(grade=='D'){ // if grade is D
count[3]++;
}else if(grade=='F'){ // if grade is F
count[4]++;
}else{
   cout << "Wrong input. Please input again." << endl;
            continue;
}
i++;

}while(true);

cout << "In total "<< i << " students." << endl;
cout << "A = " << count[0] <<", ";
cout << "B = " << count[1] <<", ";
cout << "C = " << count[2] <<", ";
cout << "D = " << count[3] <<", ";
cout << "F = " << count[4] << endl;


return 0;
} 