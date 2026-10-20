class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
       int n = arr.size();
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                for(int j=n-2;j>=i;j--){
                    arr[j+1]=arr[j];

                }
             i++;
            }
           
        }
        
        
    }
};