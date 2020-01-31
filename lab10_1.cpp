#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
srand(time(0));
cout << "Press Enter 3 times to reveal your future.";
cin.get();
cin.get();
cin.get();
int k=rand()%9;
string a;
switch(k){
case 0: a="A";
break;
case 1: a="B+";
break;
case 2: a="B";
break;
case 3: a="C+";
break;
case 4: a="C";
break;
case 5: a="D+";
break;
case 6: a="D";
break;
case 7: a="F";
break;
case 8: a="W";
break;
}
cout << "You will get "<<a<<" in this 261102.";
}