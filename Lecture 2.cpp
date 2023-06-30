#include <bits/stdc++.h>
using namespace std;

// valid parenthesis

// bool isValid(string s) {
//     int a = s.size();
//     stack<char> st;
//     for(int i=0; i<a; i++){
//         if (s[i]=='(' || s[i]=='[' || s[i]=='{'){
//             st.push(s[i]);
//         } else if (s[i]==')' && !st.empty() && st.top()=='('){
//             st.pop();
//         } else if (s[i]==']' && !st.empty() && st.top()=='['){
//             st.pop();
//         } else if (s[i]=='}' && !st.empty() && st.top()=='{'){
//             st.pop();
//         } else {
//             return false;
//         }
//     }
//     if(st.size()==0){
//         return true;
//     }
//     return false;
// }

// Minimum Number of Swaps to Make the String Balanced

int minSwaps(string str) {
    string un = "";
    for (int i=0; i<str.size(); i++){
        if(str[i] == '['){
            un.push_back('[');
        } else {
            if (!un.empty() and un.back() == '[') {
                un.pop_back();
            } else {
                un.push_back(str[i]);
            }
        }
    }
    cout<< un << "\n";
    int open = un.size()/2;
    return ((open+1)/2);
}

int main() {
    
    return 0;
}