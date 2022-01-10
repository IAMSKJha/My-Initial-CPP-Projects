#include <iostream>
using namespace std;

string user_input;
void start_game();
void end_game(int score);
int main()
{
    cout << "============WELCOME=============" << endl;
    cout << "Enter 'play' to start the game " << endl;
    cin >> user_input;

    if (user_input == "play")
    {
        start_game();
    }
    else
    {
        end_game(0);
    }
    return 0;
}

void start_game()
{
    string answer;
    int score = 0;
    // Question 1 starts here
    cout << "1. Who is the new CEO of Twitter ?" << endl;
    cout << "a) Jack dorsey" << endl;
    cout << "b) Evan Williams" << endl;
    cout << "c) Parag Agarwal" << endl;
    cout << "d) Dick Costolo" << endl;

    cout << "Choose the correct Option and press enter" << endl;
    cin >> answer;

    if (answer == "c")
    {
        cout << "CONGRATS you choose right answer" << endl;
        score++;
    }
    else
    {
        cout << "SORRY you choose wrong answer" << endl;
    }
     
    cout<<endl;
    
    //Question 2 starts here
    cout << "2. Who is the CEO of Apple ?" << endl;
    cout << "a) Jeff Bezos" << endl;
    cout << "b) Tim Cook" << endl;
    cout << "c) Parag Agarwall" << endl;
    cout << "d) Steve Jobs" << endl;

    cout << "Choose the correct Option and press enter" << endl;
    cin >> answer;

    if (answer == "b")
    {
        cout << "CONGRATS you choose the right answer" << endl;
        score++;
    }
    else
    {
        cout << "SORRY you choose the wrong answer!" << endl;
    }
    cout<<endl;
   //Question 3 starts here
    cout<<"3. In which year Kotlin was first officially released?"<<endl;
    cout<<"b) 2012"<<endl; 
    cout<<"a) 2010"<<endl; 
    cout<<"c) 2015"<<endl; 
    cout<<"d) 2016"<<endl; 

    cout<<"Choose the correct option and press enter"<<endl;
    cin>>answer;
    
    if (answer =="d")
    {
        cout<<"CONGRATS you choose the right answer"<<endl;
        score++;
    }
    else{
        cout<<"SORRY you choose the wrong answer!"<<endl;
    }

    cout<<endl;
    //Question 4 starts here

    cout<<"4. Who invented Kotlin?"<<endl;
    cout<<"a) Microsoft"<<endl;
    cout<<"b) Jet Brains"<<endl;
    cout<<"c) Git Hub"<<endl;
    cout<<"d) Adobe"<<endl;
    cout<<"Choose the correct option"<<endl;
    cin>>answer;

    if (answer == "b")
    {
        cout<<"CONGRATS you choose the right answer"<<endl;
        score++;
    }
    else{
        cout<<"SORRY you choose the wrong answer!"<<endl;
    }
    cout<<endl;

    //Question 5 starts here

    cout<<"5. Who is the CEO of Netflix?"<<endl;
    cout<<"a) Reed Hastings"<<endl;
    cout<<"b) Ted Sarandos"<<endl;
    cout<<"c) Sunil Rayan"<<endl;
    cout<<"d) Susan Wojcicki"<<endl;

    cout<<"Choose the correct option"<<endl;
    cin>>answer;
    if (answer == "b")
    {
       cout<<"CONGRATS you choose the right answer"<<endl;
       score++;   
    }
    else{
        cout<<"SORRY you choose the wrong answer"<<endl;
    }
     cout<<endl;
     //Question 6 starts here

    cout<<"6. What does USB stand for?"<<endl;
    cout<<"a) Universal Serial Bus"<<endl;
    cout<<"b) Uninterrupted System Bus"<<endl;
    cout<<"c) Universal System Bus"<<endl;
    cout<<"d) Unified Serial Bus"<<endl;

    cout<<"Choose the correct option"<<endl;
    cin>>answer;
    if (answer == "a")
    {
       cout<<"CONGRATS you choose the right answer"<<endl;
       score++;   
    }
    else{
        cout<<"SORRY you choose the wrong answer"<<endl;
    }
     cout<<endl;
     //Question 7 starts here

    cout<<"7. How many Buses are there?"<<endl;
    cout<<"a) 2"<<endl;
    cout<<"b) 3"<<endl;
    cout<<"c) 4"<<endl;
    cout<<"d) 5"<<endl;

    cout<<"Choose the correct option"<<endl;
    cin>>answer;
    if (answer == "b")
    {
       cout<<"CONGRATS you choose the right answer"<<endl;
       score++;   
    }
    else{
        cout<<"SORRY you choose the wrong answer"<<endl;
    }
     cout<<endl;
     
    cout<<endl;
    end_game(score);
}
  
  void end_game(int score)
    {
        cout << "THANKS for playing " << endl;
        cout << "Your score is " << score << endl;
    }

  

  
