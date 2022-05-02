#include <iostream>
using namespace std;

int main (){
   cout << "Hello World " << endl<< "Goodbye " << endl;
/* this serves so that the next code appears below this*/
   cout << "all went well" << endl;  
   
/*these are variables and how to do them */
   int number = 15;
   string word = "i'm a word";
   bool bolean = true;
   double decimals = 3.14; //Enough to store 15 decimal digits
   float decimals_too = 3.15; //Enough to store 7 decimal digits
   char my_word = 'd';
   
/*here will be show the variables with some words*/
   cout << "have" << " "<< decimals << "i have" <<" "<< number << endl;
   
   /*here will be show how add variables,multiply,subtract,etc.*/
   int x = 12, y = 14;
   int sum = x + y ;
   cout << sum << endl;
   
/* here will be show how make a constant.*/
   const string constant = "this is a constant";
   cout << constant<< endl;
   
//here is the user input.
   int number_ ;
   cout << "type a number : "<< endl;
   cin >> number_;
   cout << " your number is: " << number_<< endl;
   
// C++ operators
  
  int variable2 = 5;
  int variable3 = 3;
  cout << (variable2> variable3)<< endl; // returns 1 (true) because 5 is greater than 3
   // other example most easy
   cout << (9<10)<< endl;
   //Assignment Operators
   int dogs = 10;
   dogs += 5; // esto le agrega 5 perros a la variable perros
   
//Access Strings
   string myString = "Hello";
cout << myString[0]; // the output is "H"
   
//C++ Conditions 
   
   if (10>5);{
   cout << "I am older than 5"<< endl;}
   //else
 int time = 20;
if (time < 18) {
  cout << "Good day."<< endl;
} else {
  cout << "Good evening."<< endl;
}
   //else if
   int time_f = 22;
if (time_f < 10) {
  cout << "Good morning."<< endl;
} else if (time_f < 20) {
  cout << "Good day."<< endl;
} else {
  cout << "Good evening."<< endl;
}
   //Short Hand If...Else (Ternary Operator)...  (it's the same example before)
   int times_ = 20;
string result = (times_ < 18) ? "Good days." : "Good evenings.";
cout << result;

//C++ Switch
int day = 4;
switch (day) {
  case 1:
    cout << "Monday"<< endl;
    break;
  case 2:
    cout << "Tuesday"<< endl;
    break;
  case 3:
    cout << "Wednesday"<< endl;
    break;
  case 4:
    cout << "Thursday"<< endl;
    break;
  case 5:
    cout << "Friday"<< endl;
    break;
  case 6:
    cout << "Saturday"<< endl;
    break;
  case 7:
    cout << "Sunday"<< endl;
    break;
    
//While
int i = 0;
while (i < 5) {
  cout << i << "\n"<< endl;
  i++;
}
  //C++ Do/While Loop
int mouse = 0;
do {
  cout << mouse << "\n"<< endl;
  i++;
}
while (mouse < 5);
}
   // For Loop
for (int var = 0; var < 5; var++) {
  cout << var << "\n"<< endl;
     //other exaple of for
     for (int numerillo = 0; numerillo <= 10; numerillo = numerillo + 2) {
    cout << numerillo << "\n"<< endl;
     // break 
     for (int armadillo = 0; armadillo < 10; armadillo++) {
  if (armadillo == 4) {
    break;
  }
  cout << armadillo << "\n"<< endl;
}
     //continue
     for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n"<< endl;
}
  }
//arrays or vectors
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel"; // this line is not necessary. change the value from 0 to opel
cout << cars[0];
    //C++ Arrays and Loops
    string autitos[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  for(int i = 0; i < 4; i++) {
    cout << autitos[i] << "\n"<< endl;
}
       //in this the index of each element is generated along with its value
       string coches[4] = {"Volvo", "BMW", "Ford", "Mazda"};
for(int i = 0; i < 4; i++) {
  cout << i << ": " << coches[i] << "\n"<< endl;
}

}   
return 0; 
}