#include <iostream>
using namespace std;
    int main(){
        // This is a progran  to print the marks into Grade using nested if else
        int x;
        cout<<" Enter your total marks:- ";
        cin>>x;

        if(x>=91 and x<=100){
            cout<<" You got Excellent marks"<<endl;
        }
        else{
            if( x>=81 and x<=90){
                cout<<" You have got v good marks"<<endl;
            }
            else{
                if(x>=71 and x<=80){
                    cout<<" You have got Good marks"<<endl;
                }
                else{
                    if(x>=61 and x<=70){
                        cout<<" You can do better"<<endl;
                    }
                    else{
                        if( x>=51 and x<=60){
                            cout<<" You have got avg marks"<<endl;
                        }
                        else{
                            if(x>=41 and x<=50){
                                cout<<" you hav egot Below avg marks"<<endl;
                            }
                            else{
                                cout<<" Fail"<<endl;
                            }
                        }
                    }
                }
            }
        }
        return 0;


    }