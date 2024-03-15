#include <iostream>
#include <string>

using namespace std;

int main(){
  string plaintext = "AESqqwhiqwe";
  string key = "1234567890qwertyuiop";
  string iv = "ffdfgffdgfd";
  string enc = AES_CBC_Encrypt(plaintext,key,iv);
  cout << enc << endl;
  string dec = AES_CBC_Decrypt(enc,key,iv);
  cout << dec << endl;
  return 0;
}
