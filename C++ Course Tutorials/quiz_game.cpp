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
    //question start here
    cout << "1. Who is the new CEO of Twitter ?" << endl;
    cout << "a) Jeff Bezos" << endl;
    cout << "b) Sundar Pichai" << endl;
    cout << "c) Parag Agarwall" << endl;
    cout << "d) Steve Jobs" << endl;

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
    //Question ends here
    cout<<endl;
    


    //Question starts here
    cout << "2. Who is the CEO of Apple ?" << endl;
    cout << "a) Jeff Bezos" << endl;
    cout << "b) Tim Cook" << endl;
    cout << "c) Parag Agarwall" << endl;
    cout << "d) Steve Jobs" << endl;

    cout << "Choose the correct Option and press enter" << endl;
    cin >> answer;

    if (answer == "b")
    {
        cout << "CONGRATS you choose right answer" << endl;
        score++;
    }
    else
    {
        cout << "SORRY you choose wrong answer!" << endl;
    }
    cout<<endl;
    end_game(score);
}
  void end_game(int score)
    {
        cout << "Thanks for playing " << endl;
        cout << "Your score is " << score << endl;
    }

  