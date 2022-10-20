#include<iostream>
#include<string>
#include<vector>
#include <bitset>
#include<map>

using namespace std;

char h[32] = {'À',  'Á', 'Â', 'Ã', 'Ä', 'Å', 'Æ',  'Ç', 'È', 'É', 'Ê', 'Ë', 'Ì', 'Í', 'Î', 'Ï', 'Ð', 'Ñ', 'Ò', 'Ó', 'Ô', 'Õ', 'Ö', '×', 'Ø', 'Ù', 'Ú', 'Û', 'Ü', 'Ý', 'Þ', 'ß'};

int bit[33];

main(){
   for(int i = 0; i < 33; i++){
      bit[i] = int(h[i]);
      if(bit[i] < 0) bit[i] += 256;
   }
   vector<int> text;
   int a;

   while(cin >> a){
      text.push_back(a);
   }

   int k[4] = {32, 204, 219, 32};

   for(int i = 0; i < text.size() - 4; i++){
      vector<int> y;
      for(int j = 0; j < 4; j++){
         y.push_back(text[i + j] ^ k[j]);
      }
      if(y[0] == y[3]){
         for(int j = 0; j < 4; j++){
            cout << y[j] << " ";
         }
         cout << endl;
      }
   }
}
