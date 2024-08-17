//Car Shopping - Tanish Parlapall

//imports
#include <iostream>
#include <string>
#include <cstdio>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstdlib>
using namespace std;
#include <vector>
#include <string>

void calc_tax(int num) {
  float tax = num+num*(.07);//based on local sales tax
  int choice;
  cout << "Total cost with tax: $" << tax << endl;
  if(tax > 5000){
    cout << "\nBecause your cost is greater than $5000, you are eligible for a 5% off coupon!\nWould you like to use it?\n1. yes\n2. no" << endl; 
    cin >> choice;
    if(choice == 1){
      cout << "Great! Your total, including tax and the coupon, is: $" << tax*.95 << endl;
      
    }
    else if(choice == 2){
    cout << "\nYour total, including tax, is: $" << tax << endl;
      }
  }
   cout << "Thank you for shopping with us!";
}

int main() {
  //preset variables with each aspcect of the car
  string car_size[5] = {"Small 2-Seater", "Small SUV", "Midsize SUV", "Van", "18-wheel Truck"};
  string car_name[4] = {"SportAppart", "Lokeni", "CleanTread", "Qualdotch"};
  string interior_color[4] = {"Beige", "Dark Red", "Light Gray", "Royal Blue"};
  string exterior_color[6] = {"Prismatic Silver", "Flaming Red", "Brilliant Blue", "Electric Green","Bold Black","Jazzy Pink"};
  string all_aspects[4] = {"", "", "", ""};
  string list[4] = {"Size", "Brand", "Interior Color", "Exterior Color"};

  int size = 0;
  int replay = 0;
  string color = "";
  int type = 0;
  int interior = 0;
  int exterior = 0;
  float total;

  cout << "Hello, and welcome to Car Shopping!" << endl; // welcome message

  cout << "Answer all the questions using the number keys." << endl; 

  //do-while loop with questions and options
  do{
    cout << "\nWhat type of car do you prefer?\n1. Stealthy 2-seater\n2. Small SUV\n3. Midsize SUV\n4. Van\n5. 18-wheel Truck" << endl; 
    cin >> size;
  } while(size > 5 || size < 1);//This do-while loop checks to make sure the user enters a number within the range of choices provided
  all_aspects[0] = car_size[size-1];//sets the size of the car based on the user's choice
  cout <<"\n";
  switch(size){//switch statement to account for the various possible answers to the previous question
    case(1):{//I included seperate responses for each option
      cout << "Good Choice!\nA stealthy car tends to be more visually appealing!\n" << endl; 
      break;
    }
    case(2):{
      cout << "Good Choice!\nA smaller SUV keeps the visual appeal while also being very practical!\n" << endl; 
      break;
    }
    case(3):{
      cout << "Good Choice!\nA mid-size SUV provides a very spacious interior!\n" << endl; 
      break;
    }
    case(4):{
      cout << "Good Choice!\nA van is typically used to trasport large amounts of goods or people.\n" << endl; 
      break;
    }
    case(5):{
      cout << "Interesting choice! An 18-wheeler is used to transport heavy cargo.\n" << endl; 
      break;
    }
  }

  do{
    cout << "What brand would you like to shop in?\n1. SportAppart\n2. Lokeni\n3. CleanTread\n4. Qualdotch" << endl;
    cin >> type;
    } while(type > 4 || type < 1);//checks if user has correct range
    all_aspects[1] = car_name[type-1];//sets the type of car based on the user's choice

  cout << "\nSo far you've got a " << all_aspects[0] << " from " << all_aspects[1] << ".\nNow let's choose the colors!" << endl;

  do{//another do-while loop for the color of the interior of the car
    cout << "\nWhat color would you like for your interior?\n1. Beige\n2. Dark Red\n3. Light Gray\n4. Royal Blue " << endl;
    cin >> interior;
  } while(interior > 4 || interior < 1);
  cout << "\n";
  switch(interior){//chooses answers based on the interior color
    case(1):{
      cout << "Beige provides a very luxurious feel; great choice!" << endl;
      break;
    }
    case(2):{
      cout << "Dark red provides an elegant look; great choice!" << endl;
      break;
    }
    case(3):{
      cout << "Light gray provides an extremely modern look; great choice!" << endl;
    }
    case(4):{
      cout << "Royal blue provies a fun, care-free look; great choice!" << endl;
    }
  }

  all_aspects[2] = interior_color[interior-1];

  do{
    cout << "\nWhat color would you like for the exterior of your car?\n1. Prismatic Silver\n2. Flaming Red\n3. Brilliant Blue\n4. Electric Green\n5. Bold Black\n6. Jazzy Pink " << endl;
    cin >> exterior;
  } while(exterior > 6 || exterior < 1);

  all_aspects[3] = exterior_color[exterior-1];//sets the exterior color value of the car
  cout << "\nGreat choice! A " << all_aspects[2] << " interior matches very well with " << all_aspects[3] << "!" << endl;//little message to user

  cout << "Now, let's take a look at everything you've got!" << endl;
  cout << "\n";
  for(int i = 0; i < 4; i++){
    //for loop to cycle through the characteristics of the car
    cout << list[i] << ": " << all_aspects[i] << endl;
  }
if(all_aspects[3] == "Jazzy Pink"){
  cout << "\nA " << all_aspects[0] << " from " << all_aspects[1]
    << " costs: $3000 \nA " << all_aspects[2] << " interior costs: $1000\nA " << all_aspects[3] << "exterior costs $1500" << endl;//cost of jazzy pink is lower
  calc_tax(4500);
}
  else if(all_aspects[3] != "Jazzy Pink"){
  cout << "\nA " << all_aspects[0] << " from " << all_aspects[1]
    << " costs: $3000 \nA " << all_aspects[2] << " interior costs: $1000\nA " << all_aspects[3] << " exterior costs $2000" << endl;
  calc_tax(6000);//6000 is total, minus tax
    }
}
//end car shopping
