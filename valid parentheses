class Solution {
public:

char pair(char ch){
    if (ch == '('){
        return ')';
    } else if (ch == '['){
        return ']';
    } else {
        return '}';
    }
}
    bool isValid(string s) {
        int length = s.length();
        stack<char> myStack;
        for (int i = 0; i < length; i++){
            char ch = s[i];
            if (ch == '(' || ch == '[' || ch == '{'){
                myStack.push(ch);
            } else { // ch is a closing bracket of some sort
                // char top = myStack.top();
                // for an input that starts with a closed bracket, runtime error
                // since the stack is empty so there is no top to access
                if (!myStack.empty()){
                    if (ch == pair(myStack.top())) { 
                        myStack.pop();
                    } else {
                        return false;
                    }
                } else { // empty
                    return false;
                }
            }
        }
        if (myStack.empty()){
            return true;
        }
        return false;
    }
};
