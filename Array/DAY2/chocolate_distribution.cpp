class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long mini = INT_MAX;
    int i=0;
    int j = m-1;
    while(j<n){
        long long difference = a[j] - a[i];
        mini = min(mini,difference);
        i++;
        j++;
    }
    return mini;
    
    }   
};