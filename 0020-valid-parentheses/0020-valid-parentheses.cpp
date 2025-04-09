class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                str.push(s[i]);
            } else {
                if (str.empty()) {
                    return false;
                } else if (s[i] == ')' && str.top() != '(' ||
                           s[i] == ']' && str.top() != '[' ||
                           s[i] == '}' && str.top() != '{') {
                    return false;
                }
                str.pop();
            }
        }
        return str.empty();

        // vector<char> v;
        // for(char ch : s)
        // {
        //     v.push_back(ch);
        // }
        // for(int i=0;i<v.size();i++)
        // {
        //     if( (v[i]==')' && str.top()=='(') || (v[i]=='}' &&
        //     str.top()=='{') ||
        //      (v[i] ==']' && str.top()=='[')  )
        //      {
        //         str.pop();
        //     }
        //     else{
        //         str.push(v[i]);
        //     }
        // }
        // return str.empty();
    }
};