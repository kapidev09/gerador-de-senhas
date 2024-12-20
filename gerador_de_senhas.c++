#include <iostream>
#include <random>
 using namespace std;
int main() {


          cout<<"bem-vindo ao gerador de senha!"<<endl;
          
          cout<<"sua senha ja foi gerada e esta abaixo"<<endl;


        
        random_device rd;
        mt19937 gen (rd());
        uniform_int_distribution<> dist (33, 126);
         
         int large = 12;
         
         string random;
         for(int x = 0 ; x <large; x++){
          
             random += static_cast<char>(dist(gen));
          
          
             
         }
         
         cout<<"senha gerada "<<random<<endl;
    


    return 0;
}
