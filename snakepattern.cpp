#include <iostream> 
using namespace std; 
int main(){
    
    int r;
     int c;
  cin>>r;
  cin>>c;
   int n=1;
    int m =0;
    for(int i =1;i<=r;i++){
      if(i%4==0){
          m=m+1;
          n=n+2;
      }
    
        if(i%2==0){
            for(int j =1;j<=c;j++){
                if((j==1)&&(i==4*m)){
                    cout<<"#";
                }
             
            else if((j==c)&&(i==2*n)){
                    cout<<"#";
                }
                else{  
                    cout<<".";
                }
                  
                
            }
        }
    else { 
        for(int j =1;j<=c;j++){
        cout<<"#";
        
    }}
    cout<<endl;
    }
    return 0;
}