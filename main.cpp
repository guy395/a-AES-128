#include <iostream>
#include <string>
std::string AES_CBC_Decrypt(const std::string& cipher_text, const std::string& key, const std::string& iv);
std::string AES_CBC_Encrypt(const std::string& plain_text, const std::string& key, const std::string& iv);
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
