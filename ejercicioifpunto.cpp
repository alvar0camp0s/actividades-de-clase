#include <iostream>

using namespace std;

int main(){
    int note=0;
   
    cout << "Insert your calification "<<endl;
    cin>>note;

    if(note>90 and note<=100){
     
        cout << "Your note is Excelent " << note<< " you're approved "<<endl;

        cout << "Congrats you have an Excelent Score!! "<<endl;
        

    } else if(note>80 and note<89){

        cout << "Your note is Very Good " << note << " You´re approved"<<endl;
        cout << "You´re a winner, keep doing!"<<endl;

    } else if (note>70 and note<79) {
     
        cout << "Your note is Good " << note << " You´re approved"<<endl;
        cout << " It's very good your calification, but you can improve"<<endl;

    }   else if (note>60 and note<69) {
     
        cout << "Your note is Regular " << note << " You´re approved"<<endl;
        cout << "You can do it, just pay atenttion and study more"<<endl;


    }  else if (note>50 and note<69) {
     
        cout << "Your note is insufficient " << note << " You´re approved"<<endl;
        cout << "Don'nt worry, it's just a mistake"<<endl;


    } else if (note>0 and note<49) {
     
        cout << "Your note is  " << note << " You have failed"<<endl;
        cout << "Do your better for the next time"<<endl;

    } else {

        cout << "You did not enter a valid character"<<endl;

    }

    cout<<"Thanks to use this program, we are waiting 4u"<<endl;
    
   
    return 0;
}