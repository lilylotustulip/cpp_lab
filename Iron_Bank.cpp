Iron Bank

#include <iostream>
#include <string>

double galaxyTaxRate = 0.05;

double calculateCost(int amount);
double calculateCost(double weight);

void applyGalaxyTax(double credits){
  double galaxyTaxRate = 0.15;
  galaxyTaxRate = galaxyTaxRate * credits;


}

int main(){

  double credits = 100.0;
  int spaceIron = 0;

  int age;
  std::string pass_phrase;

  bool leave_hub = false;
  int choice;

  int amount;

  double weight = 45.5;


  std::cout <<"enter the pass-phrase:";
  std::cin >>pass_phrase;

  std::cout <<"enter your age: ";
  std::cin >>age;

  if(age < 0){
    std::cout << "you are not born yet!";
  }

  else if(pass_phrase != "open_sesame" || age < 18){
    //in this line the 25th i have a question remind me later.
    std::cout <<"you are not allowed in!";
  }

  else{
    std::cout <<"welcome in";
  }

  if(pass_phrase == "open_sesame" && age >= 18){

    while(!leave_hub ){
    std::cout <<"--------------------------------------------\n";
    std::cout <<"--------------------------------------------\n";
    std::cout <<"total credits: " <<credits;
    std::cout <<"total iron: " << spaceIron;
    std::cout <<"--------------------------------------------\n";
    std::cout <<"--------------------------------------------\n";

    std::cout <<"1. buy space Iron \n";
    std::cout <<"2.upgrade cargo (\n";
    std::cout <<"3. calculate tax \n";
    std::cout <<"4. leave hub (exit) \n";
    std::cout <<"--------------------------------------------\n";
    std::cout <<"--------------------------------------------\n";

    std::cout <<"enter you choice: ";
    std::cin >>choice;


  applyGalaxyTax(credits);

  if(choice == 1){
    std::cout<< "how many peices of iron you want to buy?";
    std::cin >>amount;

    double total_cost = calculateCost(amount);
    if(credits >= total_cost){
      credits = credits - total_cost;
      spaceIron = spaceIron + amount;

      std::cout <<"the remaining is: "<< credits <<" and the space iron is now: "<< spaceIron;
    }
    else{
      std::cout <<"transaction denied!";
    }
  }
    else if( choice == 2){
      credits = credits - 10.0 / 4.0;
      std::cout <<" the upgrade was done successfully ur credits are now: " << credits;
    }
    else if( choice == 3){
      applyGalaxyTax(credits);
      std::cout <<"the credits are: "<< credits;
    }
    else{
      leave_hub = true;
      std::cout <<"thanks for visting!";
    }
}

  }
  

  return 0;
}

double calculateCost(int amount){
  double cost = 12.0;
  double total_cost = cost * amount;
  return total_cost;
}

double calculateCost(double weight){
  double unit = 45.5;
  double total_cost2 = weight * unit;
  return total_cost2;
}



