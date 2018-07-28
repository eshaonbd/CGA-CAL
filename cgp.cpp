#include<iostream>

#include<math.h>

using namespace std;

int main()

{

double mark ;

cout<<"Enter The value of Mark: ";

cin>> mark;

if(80<=mark && mark<=100)

{

cout<<"Your CGPA: 4";

}

if(75<=mark && mark<80)

{

cout<<"Your CGPA: 3.75";

}

if(70<=mark && mark<75)

{

cout<<"Your CGPA: 3.50";

}

if(65<=mark && mark<70)

{

cout<<"Your CGPA: 3.25";

}

else{

cout<<"You Fail";

}

 }
 
