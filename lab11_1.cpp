#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(){
string grade;
cout << "Press Enter 3 times to reveal your future.";
cin.get();
cin.get();
cin.get();
srand(time(0));
int random = rand()%9;
if(random == 0){
    grade = "A";
}else if(random == 1){
    grade = "B+";
}else if(random == 2){
    grade = "B";
}else if(random == 3){
    grade = "C+";
}else if(random == 4){
    grade = "C";
}else if(random == 5){
    grade = "D+";
}else if(random == 6){
    grade = "D";
}else if(random == 7){
    grade = "F";
}else
grade = "W";
cout << "You will get " << grade << " in this 261102.";

return 0;
}
