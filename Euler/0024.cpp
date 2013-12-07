#include <iostream>

#include <algorithm>

using namespace std;

int main(){
   int digits[10] = {0,1,2,3,4,5,6,7,8,9};
   
   int count = 999999;
   while( count && next_permutation(digits, digits+10) ) count--;
   
   for(int i = 0; i < 10; ++i) cout << digits[i];
   
   return 0;
}
