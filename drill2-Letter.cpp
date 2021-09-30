#include "std_lib_facilities.h"

int main()
{   
    char friend_sex; //your and your letter friend's mutal friend's sex
    string letter_friend;// your letter friends's name (Who are you messaging?)
    string friend_name;//your and your letter friend's mutal friend's name
    int letter_friend_age;// your letter friends's age
    
    
    cout << "Enter the name of the person you want to write to: ";
    cin>> letter_friend;
    cout <<" Dear "<< letter_friend <<","<< '\n'<< endl; 
 
    cout <<"Sorry for not responding sooner."<<'\n'<<"I'm living my best life at college, everything is okay with me! "<<'\n'<<"How are you doing? "<<endl;
    
    cout <<"Please give me your friends's name and sex (m/f):  ";
    cin >>friend_name>>friend_sex;
    
    if (friend_sex =='m')//determining if the mutual friend is a she or a he (or a kakaóscsiga)
        cout << "If you see "<<friend_name <<" please ask him to call me."<<endl;
    if (friend_sex =='f')
        cout << "If you see "<<friend_name <<" please ask her to call me."<<endl;
    
    cout <<"Please give me your letter friends's age: ";
    cin >>letter_friend_age;
    if (letter_friend_age <=0 or letter_friend_age >= 110)// need to use or cuz if one of them is true we need to get an error
        simple_error("You are kidding!!");
        
    cout<< "I heard you just had your birthday and you are "<<letter_friend_age<<" years old."<<endl;
    //this section will test the age and write the correct answer
   
    if (letter_friend_age >0 and letter_friend_age <12)//need to use and so it could stermine the interval
        cout <<"Next year you will be "<<letter_friend_age+1<<endl;
    else if (letter_friend_age== 17)
        cout <<"Next year you will be able to vote! "<<endl;
    else if (letter_friend_age>70)
        cout <<" I hope you enjoy your retirement! "<<endl;

    cout <<"Yours sincerely,"<<'\n'<<'\n'<<"Aliz" <<endl;//Don't forget to sign at the end ;)
return 0;
}
