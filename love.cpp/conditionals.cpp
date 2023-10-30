#include <iostream>
using namespace std;
int main () {



//  declare a integer type variable
int score;
//  print enter the score
cout << " enter the score:";
cin>>score;
if ( score>300){

cout << " India wins"<<endl;

}
else{   cout<< " aus wins"<<endl;
}



//  marks based 

int marks;
cout<< " enter the marks:";
cin>> marks;
     if ( marks>=90){
        cout<< " grade A";
}
else{   
     if ( marks>=80){ 
         cout<<" grade B";
     } 

else {  
     if ( marks>=70){
         cout<<" grade C";
}

else {
     if (marks>=40 ){
         cout<< " grade D";
}
else {
     if ( marks <40){ 
         cout<< "F";
    }
}
}
}
}









}