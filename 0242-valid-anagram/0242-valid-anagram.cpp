class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return 0;
        }
                int count[26] = {0};  // Frequency table for lowercase letters

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;  // Increment for s
            count[t[i] - 'a']--;  // Decrement for t
        }

        // If both strings are anagrams, all counts must be 0
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }

        return true;




        // for(int i=0;i<s.length()-1;i++)
        // {
        //     for(int j=0;j<s.length()-1;j++)
        //     {
        //         if(s[j]>s[j+1]){
        //             swap(s[j],s[j+1]);
        //         }
        //     }
        // }
        //    for(int i=0;i<t.length()-1;i++)
        // {
        //     for(int j=0;j<t.length()-1;j++)
        //     {
        //         if(t[j]>t[j+1]){
        //             swap(t[j],t[j+1]);
        //         }
        //     }
        // }
        // for(int i=0;i<s.length();i++)
        // {
        //     if(s[i]!=t[i])
        //     {
        //         return 0;
        //     }
        // }
        // return 1;
    }
};