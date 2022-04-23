//TC=O(N)
//SC=O(N)
class Solution {
public:
    bool isValid(string s) {
    bool valid=true;
    stack<char> bucket;
    for(char c: s){
      if(c == '(' || c == '{' || c == '[')
        bucket.push(c);
      else if(c == ')' && bucket.size() && bucket.top() == '(')
        bucket.pop();
      else if(c == ']' && bucket.size() && bucket.top() == '[')
        bucket.pop();
      else if(c == '}' && bucket.size() && bucket.top() == '{')
        bucket.pop();
      else valid=false;;
    }
    if(!bucket.empty()) valid=false;
    return valid;
  }
};
