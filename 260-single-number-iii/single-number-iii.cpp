class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        for(int num:nums){
        x^=num;
        }
        unsigned int ux=x;
        unsigned int diff =ux & (-ux);
         int a=0,b=0;
        for(int num:nums){
            if((unsigned int)num & diff)
                a^=num;
            else
                b^=num;    
        }
        return {a,b};
        
    }
};