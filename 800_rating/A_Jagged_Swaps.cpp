#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
#define output(arr) for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())
#define intmax INT_MAX
#define intmin INT_MIN
#define lintmax LLONG_MAX
#define lintmin LLONG_MIN
#define mp(x,y) make_pair(x,y)

bool check(vector<lint>&arr){
    if(arr[0]!=1){return false;}
    lint n=arr.size();
    forloop(1,n-2){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){swap(arr[i],arr[i+1]);i++;}
    }
    if(arr[n-1]>n){return false;}
    if(arr[0]>arr[1]){return false;}
    unordered_map<lint,lint>mp;
    forloop(0,n){mp[arr[i]]++;}
    for(auto it=mp.begin();it!=mp.end();it++){if(it->second>1){return false;}}
    return true;
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        bool ans=check(arr);
        if(ans==true){print("YES")}
        else{print("NO")}
 
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}