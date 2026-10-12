class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>jewelset;
        for(auto j : jewels){
            jewelset.insert(j);
        }
        int count =0;
        for(auto s:stones){
            if(jewelset.find(s)!=jewelset.end()){
                count++;
            }
        }
        return count;
    }
};