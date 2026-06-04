#include <iostream>

void printInventory(int scrapWeights[], int size);
void optimizeInventory(int scrapWeights[], int size);
void calculateTotalWeight(const int scrapWeights[], int size);

void displayRadar(char sectorGrid[][3],int size_rows, int size_columns);
void scanAnalomy(char sectorGrid[][3], int size_rows, int size_columns, int &row, int &column);
void lockCoordinates(int &row, int &column);

int main(){

  int scrapWeights[5] = {45, 12, 89, 5, 23};
  char sectorGrid[3][3]= {
                         {'.', 'X', '.'},
                         {'.', '.', '.'},
                         {'.', '.', '.'}
                         };
  int size = sizeof(scrapWeights) / sizeof(scrapWeights[0]);
  int size_rows = 3;
  int size_columns =  3;

  int row;
  int column;

  int choice;

  while(choice != 6){

      std::cout << "\n--- THE VOID VOYAGER SYSTEM ---\n";
      std::cout << "1. View Radar Grid\n"
                << "2. Scan & Lock Anomaly Coordinates\n"
                << "3. View Raw Scrap Inventory\n"
                << "4. Optimize Cargo Hold (Sort)\n"
                << "5. Calculate Cargo Size & Mass\n"
                << "6. Exit Systems Panel\n" ;
      std::cout <<"----------------------------------\n";
      std::cout <<"enter your choice # ";
      std::cin >> choice;



  if(choice == 1){
  std::cout <<" \n ****************Sector Radar **************\n";
  displayRadar(sectorGrid, size_rows, size_columns);
  std::cout <<"\n ********************************************\n";
  }
  
  else if(choice == 2){
    scanAnalomy(sectorGrid, size_rows, size_columns, row, column);
    lockCoordinates(row, column);
  }

  else if(choice == 3){
    printInventory(scrapWeights, size);
  }

  else if(choice == 4){
     optimizeInventory(scrapWeights, size);
  }
  else if (choice == 5){
    calculateTotalWeight(scrapWeights, size);
  }

  else if(choice == 6){
    std::cout <<"thanks for visiting!";
  }

  else{
    std::cout <<"invalid responce, try again.\n";
  }
}

  return 0;
}

void printInventory(int scrapWeights[], int size){
  for(int i = 0; i < size; i++){
    std::cout << scrapWeights[i] <<" ";
  }
  
}

void optimizeInventory(int scrapWeights[], int size){

    for(int i = 0; i < size - 1 ; i++){
    for (int j = 0; j < size - i - 1; j++ ){

      if(scrapWeights[j] > scrapWeights [j + 1]){
      int temp;
      temp = scrapWeights[j] ;
      scrapWeights[j] = scrapWeights[j + 1];
      scrapWeights[j + 1] = temp ;
      }

      
    }
  }
  }

void calculateTotalWeight(const int scrapWeights[], int size){
  int totalWeight = 0;

  for (int i = 0; i < size;  i++){
    totalWeight += scrapWeights[i];
  }
  std::cout<< "\nthe total weight is #" << totalWeight;
}

void displayRadar(char sectorGrid[][3], int size_rows, int size_columns){
  for(int i = 0; i < size_rows; i++){
    for(int j = 0; j < size_columns; j++){
      std::cout << sectorGrid[i][j] <<" ";
      
    }
    std::cout <<"\n";
  }
}

void scanAnalomy(char sectorGrid[][3], int size_rows, int size_columns, int &row, int &column){
  for(int i = 0; i < size_rows; i++){
    for(int j = 0; j < size_columns; j++){
      if(sectorGrid[i][j] == 'X'){
        std::cout << "row index: " << i;
        std::cout <<"column index: "<<j;

        row = i;
        column = j;

      }
    }
  }
}

void lockCoordinates(int &row, int &column){
  row = row * 100;
  column = column * 100;

  std::cout << "-------lock signal-------";
  std::cout << row << " " << column;
}