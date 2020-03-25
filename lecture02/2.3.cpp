#include <iostream>
#include <vector>
using namespace std;
int pentagonal(int pos);
vector<int> getnumber(int num);
template<typename elementype>
void getnumber(int num,vector<elementype> &vec);
inline bool is_or_not_suit(int n);
void display(vector<int> vec){
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<' ';
    }
    cout<<endl;

    
}

int main(){
    /*vector<int> ivec(30);
    getnumber(-1,ivec);
    display(ivec);
    return 0;*/

    cout<<pentagonal(-1)<<endl;
}
inline bool is_or_not_suit(int n){
    if(n>=1){return true;}
    else{return false;}
}

int pentagonal(int n){
    if(is_or_not_suit(n)){
        return n*(3*n-1)/2;
    }else{
        cout<<" You Input is wrong"<<endl;
        return 0;
    }
    
    
}
/*
vector<int> getnumber(int num){
    vector<int> temp(num);
    for(int i=1;i<=num;i++){
        temp[i-1]=pentagonal(i);
        

    }
    return temp;
}

template<typename elementype>
void getnumber(int num,vector<elementype> &vec){
    for(int i=1;i<=num;i++){
        vec[i-1]=pentagonal(i);
    }
}
*/