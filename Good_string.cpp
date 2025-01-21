#include<iostream>
using namespace std;

int main(){
    string s ="abacbc";
    int freq[26]={0};

    for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }
        int firstFreq = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                firstFreq = freq[i];
                break;
            }
        }
         for (int i = 0; i < 26; i++) {
            if (freq[i] != 0 && freq[i] != firstFreq) {
                return 0;
            }
        }
           return 1;
    
}