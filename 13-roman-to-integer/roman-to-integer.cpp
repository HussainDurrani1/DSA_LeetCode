#include <string>
class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        int i = 0;
        while (i < s.length()){
            char c = s[i];
            if (c == 'I'){
                if (s[i+1] == 'V') {num += 4; i++;}
                else if (s[i+1] == 'X') {num += 9; i++;}
                else {num++;}
            }
            else if (c == 'V') {num+=5;}
            else if (c == 'X'){
                if (s[i+1] == 'L') {num+=40; i++;}
                else if (s[i+1] == 'C') {num+=90; i++;}
                else {num+=10;}
            }
            else if (c == 'L') {num += 50;}
            else if (c == 'C'){
                if (s[i+1] == 'D') {num += 400; i++;}
                else if (s[i+1] == 'M') {num += 900; i++;}
                else {num += 100;}
            }
            else if (c == 'D') {num+=500;}
            else if (c == 'M') {num += 1000;}
            i++;
        }
        return num;
    }
};