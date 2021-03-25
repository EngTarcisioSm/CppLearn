#include <iostream>

using namespace std;


int main(){
     int count;
     int number;
     int sum;
     do
     {
          cout << "Insira um novo numero: " << endl;
          cin >> number;

          sum += number;
          count++;

     } while (number != 0);

     float avarage = (float)sum / (float(count -1));

     cout << "a média da série é:" << avarage << endl;
        
     return 0;
}