class Solution 
{
    static bool comp(Job a,Job b){  //in sorting, comaprator is used when we want to arrange the element in decending order.
        return (a.profit>b.profit);//if true a come before b 
    }
 
   public: vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code her
        vector<int>ans;
        sort(arr,arr+n,comp);//arramge the jobs in decending order based on profit
        vector<int>dp(n+1,-1);
        int maxpro=0;
        int job=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead-1;j>=0;j--){
                if(dp[j]==-1){
                    dp[j]=1;
                    maxpro=maxpro+arr[i].profit;
                    job++;
                    break;
                }
            }
        }
        
    ans.push_back(job);
     ans.push_back(maxpro);
        
        return ans;
    } 
};