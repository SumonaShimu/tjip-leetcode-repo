//TC:O(n) 
//MC:O(1)
class Solution {
public:
    int firstBadVersion(int n) {
        long long int i=1,j=n,current;
        while(i<=j){
            current=(i+j)/2;
            if(isBadVersion(current)==true && isBadVersion(current-1)==false) return current;
            else if(isBadVersion(current)) j=current-1;
            else i=current+1;
        }
        return current;
    }
};