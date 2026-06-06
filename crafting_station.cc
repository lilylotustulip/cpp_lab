crafting_station

#include <iostream>

void showInventory(std::string inventory[3], std::string* &equipedMaterial);
void equipMaterial(std::string inventory[3], std::string* &equipedMaterial);
void upgrade(std::string* inventory, std::string* &equipedMaterial);



int main(){

  std::string inventory[3] = {"Iron_Ore", "Wood_Stick", "Dragon_Scale"};
  
  std::string* equipedMaterial = nullptr;
  std::string temp = "temp";
  int choice = 0;

  while(choice != 4){

    std::cout <<"--- CRAFTING STATION ---\n";
    std::cout <<"1. Show Inventory & Equipped Item\n";
    std::cout <<"2. Equip Material (Pick 0, 1, or 2 from inventory)\n";
    std::cout <<"3. Forge/Upgrade Equipped Material\n";
    std::cout <<"4. Exit\n";

    std::cout <<"Enter your choice: \n";
    std::cin >>choice;


    if(choice == 1){
      showInventory(inventory, equipedMaterial);
    }
    else if(choice == 2){
      equipMaterial(inventory,  equipedMaterial);
    }
    else if(choice == 3){
      upgrade(inventory, equipedMaterial);
    }
    else{
      std::cout <<"thanks for visiting\n";
    }

  }



  return 0;
}


void equipMaterial(std::string inventory[3], std::string* &equipedMaterial){
  int index = 0;
  std::cout << "enter an index (0-2)";
  std::cin>> index;
  equipedMaterial = &inventory[0];
  *equipedMaterial = inventory[index];

  std::cout <<"you now have " << *equipedMaterial << " equiped.";
  
  
}

void showInventory(std::string inventory[3], std::string* &equipedMaterial){

    for(int i = 0; i < 3; i++){
        std::cout << inventory[i] <<" ";
    }

    if(equipedMaterial == nullptr){
    std::cout <<"Equipped: nothing\n";
    }
    else{
    std::cout <<"Equiped:" << *equipedMaterial;
  }
}


void upgrade(std::string* inventory, std::string* &equipedMaterial){
  if(equipedMaterial == nullptr){
    std::cout <<"you have ntg to upgrade, equipe smtg first by clicking 2 on the menu page \n ";
  }
  else{
    *inventory = *equipedMaterial + "+1"; 
}
std::cout <<"upgrade done successfully, ur material is now " << *equipedMaterial;

}
