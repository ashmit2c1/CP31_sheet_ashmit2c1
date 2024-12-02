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

bool solveFunction(lint k,vector<lint>&arr,unordered_set<int>&st){
    if(k>=2){return true;}
    if(st.size()==1){return true;}
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
}
void solution(int test){
    while(test--){
        lint n;lint k;
        cin >> n >> k;
        unordered_set<int>st;
        vector<lint>arr;
        forloop(0,n){
            lint x; cin >> x;st.insert(x);arr.push_back(x);
        }
        bool ans=solveFunction(k,arr,st);
        if(ans==true){print("YES")}
        else{print("NO")}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}