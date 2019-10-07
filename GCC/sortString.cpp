#include <iostream>
#include<bits/stdc++.h> 

using namespace std;
/*Order alphabetically a string*/
void sortString(string &str) 
{ 
   sort(str.begin(), str.end()); 
   cout << str; 
} 

int main(){
    string string1;
    
    cout << "Enter a string: "; cin >> string1;
    sortString(string1);
    
    return 0;
}