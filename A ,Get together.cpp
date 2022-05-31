#include<bits/stdc++.h>
using namespace std;

 double isvalid(int c[],int d[],int n,double mid){
   int i;
   double mx=INT_MIN;
    for(i=0;i<n;i++){

        mx= max((double)abs(mid-c[i])/(double)d[i],mx);

       cout<<mx<<endl;
    }

cout<<"return"<<mx<<endl;

return mx;


 }

int main()
{

   int n,i,mx=INT_MIN,mn=INT_MAX,t=INT_MAX;
   cin>>n;

   int c[n];
   int d[n];

   for(i=0;i<n;i++){
    cin>>c[i]>>d[i];
    mx=max(mx,c[i]);
    mn=min(mn,c[i]);
   }

double l=mn,r=mx,mid;


while(l<=r){

  mid=l+(r-l)/2;
int a;

  if(a=(isvalid(c,d,n,mid))<t){
      t=a;
      cout<<"t"<<t<<endl;
      r=mid-0.5;

  }

else{
  l=mid+0.5;
}

}


cout<<t<<endl;

  return 0;
}
