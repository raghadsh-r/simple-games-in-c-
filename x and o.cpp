#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    system("cls");
 int your_choice;
 string choise;
 string pc_choice[3]={"Rock","Paper","Scissors"};
 int play;

 cout<<" if you want to enter the game enter 1"<<endl;
 cin>>play;

 
 
   
 
 while (play)

 { 
    cout<<"you have to know that\nrock is 1\npaper is 2\nscissors is 3\n"<<endl;
    cout<<"enter you choice"<<endl;
    cin>>your_choice; 
    
 
  switch(your_choice) {
    case 1:
        choise="Rock";
        break;
    case 2:
        choise="Paper";
        break;
    case 3:
        choise="Scissors";
        break;
    default:
    cout<<"out of renge"<<endl;
    continue;
}
 
    

    srand(time(0));
    int randomNum = rand() % 3;
    
    if(pc_choice[randomNum]=="Rock"){
        if(choise=="Rock"){
            cout<<"*************draw*************"<<endl;

        }
        else if(choise=="Paper")
        {
            cout<<"*************you win*************"<<endl;

        }
        else
        cout<<"*************pc win*************";
    }
    else if(pc_choice[randomNum]=="Paper"){
    if(choise=="Paper"){
            cout<<"*************draw*************"<<endl;

        }
        else if(choise=="Rock")
        {
            cout<<"*************pc win*************"<<endl;

        }
        else
        cout<<"*************you win*************";
    }
    else{
        if(choise=="Scissors"){
            cout<<"*************draw*************"<<endl;

        }
        else if(choise=="Rock")
        {
            cout<<"*************you win*************"<<endl;

        }
        else
        cout<<"*************pc win*************"<<endl;
    }
       cout<<"if you want to continue enter 1 if you dont enter 0"<<endl;
       cin>>play;

}
 
 


    return 0;
}