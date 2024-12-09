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


lint solveFunction(vector<vector<char>>&matrix){
    lint points=0;
    forloop(0,10){
        secondfor(0,10){
            if(matrix[i][j]=='X'){
                if(i==0){points+=1;}
                if(i==1){
                    if(j==0 || j==9){points+=1;}
                    else{points+=2;}
                }
                if(i==2){
                    if(j==0 || j==9){points+=1;}
                    else if(j==1 || j==8){points+=2;}
                    else{points+=3;}
                }
                if(i==3){
                    if(j==0 || j==9){points+=1;}
                    else if(j==1 || j==8){points+=2;}
                    else if(j==2 || j==7){points+=3;}
                    else{points+=4;}
                }
                if(i==4){
                    if(j==0 || j==9){points+=1;}
                    else if(j==1 || j==8){points+=2;}
                    else if(j==2 || j==7){points+=3;}
                    else if(j==3 || j==6 ){points+=4;}
                    else{points+=5;}
                }
                if(i==5){
                    if(j==0 || j==9){points+=1;}
                    else if(j==1 || j==8){points+=2;}
                    else if(j==2 || j==7){points+=3;}
                    else if(j==3 || j==6 ){points+=4;}
                    else{points+=5;}
                }
                if(i==6){
                    if(j==0 || j==9){points+=1;}
                    else if(j==1 || j==8){points+=2;}
                    else if(j==2 || j==7){points+=3;}
                    else{points+=4;}
                }
                if(i==7){
                    if(j==0 || j==9){points+=1;}
                    else if(j==1 || j==8){points+=2;}
                    else{points+=3;}
                }
                if(i==8){
                    if(j==0 || j==9){points+=1;}
                    else{points+=2;}
                }
                if(i==9){
                    points+=1;
                }
            }
        }
    }
    return points;
}

void solution(int test){
    while(test--){
        vector<vector<char>>matrix(10,vector<char>(10));
        forloop(0,10){
            secondfor(0,10){
                cin >> matrix[i][j];
            }
        }
        lint ans=solveFunction(matrix);
        print(ans)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}