class Solution {
public:
    bool is_vowel(char ch) {
        ch = tolower(ch);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
             return true;
        else return false;
    }
    string reverseVowels(string s) {
        int len=s.length();
        int front=0,back=len-1;
        while(front<back){
            while(front<=back&&!is_vowel(s[front])) front++;
            while(front<=back&&!is_vowel(s[back])) back--;
            if(front<=back){
            swap(s[front],s[back]);
            front++;
            back--;
            }
        }
        return s;
    }
};