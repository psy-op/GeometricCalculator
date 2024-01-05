#include <iostream>

using namespace std;

int main(){
    // Outputs the options for the user
    // Takes the input for the user
    cout<<"\n";
    int answer = 0;
    cout<<"1. Calculate the area of a circle. \n";
    cout<<"2. Calculate the area of a rectangle. \n";
    cout<<"3. Calculate the area of a triangle. \n";
    cout<<"4. Quit. \n\n";
    cout<<"Enter a choice from (1-4):";
    cin>>answer;
    
    // Using the input from the user to choose what figure to use
    // For the circle, take the radius as input, calculate the area, and output it for the user
    if(answer==1){
        float radius=0;
        cout<<"Please enter the radius: ";
        cin>>radius;
        if(radius<=0){
            cout<<"Please use a positive number greater than 0 for the value.";
        }else{
            float circlearea;
            circlearea=3.14159*radius*radius;
            cout<<"The area for a circle with "<<radius<<" is "<<circlearea<<" .\n";
        }
    // For the rectangle, take length and width as inputs, calculate the area, and output it for the user
    }else if (answer==2){
        float length=0;
        float width=0;
        cout<<"Please enter the length: ";
        cin>>length;
        cout<<"Please enter the width: ";
        cin>>width;
        if(length<=0||width<=0){
            cout<<"Please use a positive number greater than 0 for both values.";
        }else{
            float rectarea;
            rectarea=length*width;
            cout<<"The area for a rectangle with a length of "<<length<<" and width of "<<width<< " is "<<rectarea<<" .\n";
        }
    // For the triangle, take the base and height as inputs, calculate the area, and output it for the user
    }else if (answer==3){
        float base=0;
        float height=0;
        cout<<"Please enter the base: ";
        cin>>base;
        cout<<"Please enter the height: ";
        cin>>height;
        if(base<=0||height<=0){
            cout<<"Please use a positive number greater than 0 for both values.";
        }else{
            float triarea;
            triarea=base*height*0.5;
            cout<<"The area for a triangle with a base of "<<base<<" and height of "<<height<< " is "<<triarea<<" .\n";
        }
    // If the user input is to end the program
    }else if (answer==4){
        cout<<"Program ended by the user.";
    // If the user input isn't one of the options, it asks them to try again with a correct option
    }else if (answer!=1 && answer!=2 && answer!=3 && answer!=4){
        cout<<"Please use the options from 1-4 and try again."; 
    }
}
