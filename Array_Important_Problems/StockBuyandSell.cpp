#include <iostream>
#include <vector>
using namespace std;

int BuySell(vector<int>prices){
 int n = prices.size();
 int bestBuy = prices[0];
 int maxProfit = 0;

 for(int i=1; i<n; i++){
   if(bestBuy<prices[i]){
      maxProfit = max(maxProfit , prices[i]-bestBuy);
   } 
   bestBuy = min(bestBuy , prices[i]);
 }
   return maxProfit;
}

int main(){
 vector<int>prices = {7,1,5,9,6,4};
 int res = BuySell(prices);
 cout<<res;
}