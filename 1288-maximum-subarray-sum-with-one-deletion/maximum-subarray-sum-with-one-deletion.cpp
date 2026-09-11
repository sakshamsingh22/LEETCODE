class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete = arr[0];
        int onedelete= INT_MIN;
        int res=arr[0];
        for(int i=1;i<arr.size();i++){
            int previousnodelete = nodelete;
            int previousonedelete = onedelete;
            //Normal Kadanes
            nodelete=max(arr[i],previousnodelete+arr[i]);
            //ek deletion ke saath
            if(previousonedelete==INT_MIN){
                onedelete=previousnodelete; //current element deleted

            }
            else{
                onedelete=max(previousnodelete,previousonedelete+arr[i]);
            }
            res=max(res,max(nodelete,onedelete));

        }
        return res;
    }
};