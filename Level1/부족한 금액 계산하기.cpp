#include<bits/stdc++.h>
using namespace std;

long long solution(int price, int money, int count){
    long long answer = 0;
    for(int i=1;i<=count;i++) answer+=price*i;
    return answer>money ? answer-money : 0;
}