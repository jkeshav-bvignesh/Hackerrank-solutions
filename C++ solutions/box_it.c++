#include<bits/stdc++.h>
using namespace std;


class Box{
    int l,b,h;
    public:
    Box(){
        l=b=h=0;
    }

    Box(int length,int breadth,int height){
        l = length;
        b = breadth;
        h = height;
    }
    Box (const Box &B){
        l = B.l;
        b = B.b;
        h = B.h;
    }
    
    int getLength(){
        return l;
    }
    
    int getBreadth(){
        return b;
    }
    
    int getHeight(){
        return h;
    }
    
    long long int CalculateVolume(){
        long long int volume;
        volume = l;
        volume *= b;
        volume *= h;
        return volume;
    }
    
    bool operator < (const Box& newBox){
        if(l < newBox.l){
            return true;
        }
        else if(b<newBox.b && l == newBox.l){
            return true;
        }
        
        else if (h < newBox.h && l == newBox.l && b == newBox.b){
            return true;
        }
        
        else{
            return false;
        }
    }
    
    friend ostream &operator<<(ostream& out, Box& newBox){
        out << newBox.l<<" "<< newBox.b<<" "<< newBox.h;
        return out;
    }

};

int main(){
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++){
        int type;
        cin>>type;
	if(type ==1)
	{
	    cout<<temp<<endl;
	}
	if(type == 2)
	{
	    int l,b,h;
	    cin>>l>>b>>h;
	    Box NewBox(l,b,h);
	    temp=NewBox;
	    cout<<temp<<endl;
	}
	if(type==3)
	{
	    int l,b,h;
	    cin>>l>>b>>h;
	    Box NewBox(l,b,h);
	    if(NewBox<temp)
       	    {
		cout<<"Lesser\n";
	    }
	    else
	    {
		cout<<"Greater\n";
	    }
	}
	if(type==4)
	{
	    cout<<temp.CalculateVolume()<<endl;
	}
	if(type==5)
	{
            Box NewBox(temp);
	    cout<<NewBox<<endl;
	}
    }
    return 0;
}
