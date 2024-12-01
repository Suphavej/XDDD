#include<iostream>
using namespace std;

int main(){
int a[]={1};
int i=0,x=0,y=0;

while (a[i] != 0){
    cout << "Enter an integer: ";
    cin >> a[i];
    if(a[i] == 0){
        break;
    }
    if(a[i] % 2 == 0){
        x++;
    }
    else{
        y++;
    }
}
    
cout << "#Even numbers = " <<x;
cout << "\n#Odd numbers = " <<y;
return 0;
}
