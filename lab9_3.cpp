#include<iostream>
using namespace std;
int main(){
    int age,height,bounty;
    string charecter;
cout << "Enter your age: ";
cin >> age;
if(age<=25){
    cout << "Enter your height: ";
    cin >> height;
    if(height<100){
        charecter="Chopper";
    }else if(height<180){
        charecter = "Usopp";
    }else{
        cout << "Enter your bounty: ";
        cin >> bounty;
        if (bounty>1100000000)
        {
            charecter ="Zoro";
        }else{
            charecter ="Sanji";
        }
        
    }
    
}
else if(age<=60){
    cout << "Enter your bounty: ";
    cin >> bounty;
    if (bounty>500000000)
    {
        charecter="Jinbe";
    }else{
        charecter="Franky";
    }
    
}else{
    charecter ="Brook";
}
cout << "Your character = " << charecter;

return 0;
}
