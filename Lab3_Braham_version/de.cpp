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
    
   int decod[3] = {208, 198, 213};
   for(int i = 0; i < text.size(); i++){
      int y = (decod[i % 3] ^ text[i]);
      if(y == 32) cout <<" ";
      else cout << h[y - 192];
   }
}