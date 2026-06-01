dragon battle


#include <iostream>

int main(){

  int dragon_HP = 100;
  int player_HP = 100;
  int player_stamina = 50;
  std::string response;

  while(dragon_HP > 0 && player_HP > 0 && player_stamina > 0){
    std::cout<< "keep it up the dragon is still alive! \n";
 
    

      std::cout <<" attack or rest?";
      std::cin >> response;

      std::cout <<"your stamina is: " <<player_stamina;
      std::cout <<"\nyour HP is: "<< player_HP;
      std::cout <<"\nthe dragon HP is: "<<dragon_HP;


      if(player_stamina <= 10){
      std::cout <<"you have no choice you need to rest!";
      player_HP = player_HP - 15;
      player_stamina = player_stamina + 20;

    }
    else{
        if( response == "attack"){
          dragon_HP = dragon_HP - 20;
          player_stamina = player_stamina - 10;
        }

        if(response == "rest"){
          player_HP = player_HP - 15;
          player_stamina = player_stamina + 20;
        }
    }
      

    if(player_HP <= 0){
      std::cout << "You lost!";
      break;
    }
    if(player_stamina <= 0){
      std::cout <<"you lost by exhaustion!";
      break;
    }
    if(dragon_HP <= 0){
      std::cout <<"victory!";
      break;
    }

  }
  return 0;
}
