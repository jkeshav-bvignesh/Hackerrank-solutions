#include <iostream>

using namespace std;

class Rectangle{
    private:
        int width,height;
    public:
        void set_width(int w){
            width = w;
        }
    
        void set_height(int h){
            height = h;
        }
    
        int get_width(){
            return width;
        }
    
        int get_height(){
            return height;
        }
    
        void display(){
            cout<<width<<" "<<height<<endl;
        }
};

class RectangleArea:public Rectangle{
    public:
        void read_input(){
            int w,h;
            cin>>w>>h;
            set_width(w);
            set_height(h);
        }
    
        void display(){
            cout<<get_width()*get_height()<<endl;
        }
};
int main()
{
    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();
    return 0;
}
