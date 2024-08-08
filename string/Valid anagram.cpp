//Given two strings s and t, return true if t is an anagram of s, and false otherwise.

//An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 


class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        if(n!=t.size()) return false;
        multiset<int> st;
        multiset<int> sm;
        for(int i=0; i<n; i++){
            st.insert(s[i]);
            sm.insert(s[i]);
            sm.insert(s[i]);
        }
        for(int i=0; i<n; i++){
            st.insert(t[i]);
        }
        if(st==sm){
            return true;
        }
        else{
            return false;
        }
    }
};
