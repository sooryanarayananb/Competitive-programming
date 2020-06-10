#include<bits/stdc++.h>
using namespace std;

int main(){

int n, m;
cin >>n>>m;


int count =0;

while( n >= 0){

if(n == m){

 cout<< count;
 break;
}

if(n > m){
n = n - 1;
count++;
}

if(n < m){
n = n * 2;
count++;
}

}

//cout<< -1;


}
