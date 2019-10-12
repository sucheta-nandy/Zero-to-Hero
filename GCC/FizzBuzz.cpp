#include <iostream>

/*
Write a program that prints the numbers from 1 to 100. 
But for multiples of three print "Fizz" instead of the number 
and for the multiples of five print "Buzz". 
For numbers which are multiples of both three and five print "FizzBuzz".
*/

int main(){
  
  
  for(int i = 1; i <=100; i++){
//check if number is divisible by both 3 and 5
    if(i % 3 == 0 && i % 5 == 0){
      std::cout << "FizzBuzz\n";
    }
    else if(i % 3 == 0){
      std::cout << "Fizz\n";//check if number is divisble by 3
    }
    else if(i % 5 == 0){
      std::cout << "Buzz\n";//check if number is divisble by 5
    }
    else{
      std::cout << i << "\n";
    }
  }
  
  return 0;
}
