#include <iostream>
#include <cmath>



int main(){

   char math_operator;
   double first_num;
   double second_num;
   double result;
   
   std::cout << "enter the math arithmetic operator: " <<std::endl;
   std::cin >> math_operator;

   switch(math_operator){
      case'+':
        std::cout << "enter the first number: ";
        std::cin >> first_num;

        std::cout << "enter the second number: ";
        std::cin >> second_num;

        result = first_num + second_num;
        std::cout << "This is the result: " << result << std::endl;
        break;

      case'*':
        std::cout << "enter the first number: ";
        std::cin >> first_num;

        std::cout << "enter the second number: ";
        std::cin >> second_num;

        result = first_num * second_num;
        std::cout << "This is the result: " << result << std::endl;
        break;

      case'/':
        std::cout << "enter the first number: ";
        std::cin >> first_num;

        std::cout << "enter the second number: ";
        std::cin >> second_num;

        if(second_num == 0){
           std::cout << "ERROR";
        }
        else{
         result = first_num / second_num;
        std::cout << "This is the result: " << result <<std::endl;
        }
        break;
      
      default:
        std::cout <<"Enter only one of these arithmetic operator: (+,* or /)";
      
   }
   return 0;
}