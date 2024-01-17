#include <iostream>
#include <string>
using namespace std;

bool Loop = true;

int main()
{
    string preference;

    while (Loop)
    {
        cout << "Which do you prefer: Italian or Mexican cuisine?" << endl;
        cin >> preference;
        if (preference == "mexican" || preference == "Mexican")
        {
            cout << "Nice! Do you prefer tacos or burritos?" << endl;
            cin >> preference;
            if (preference == "tacos" || preference == "Tacos")
            {
                cout << "I suggest trying El Taco De Mexico" << endl;
                break;
            }
            else if (preference == "burrito" || preference == "Burrito")
            {
                cout << "I suggest trying La Abeja Restaurant" << endl;
                break;
            }
        }
        else if (preference == "italian" || preference == "Italian")
        {
            cout << "Nice! Do you prefer pizza or pasta?" << endl;
            cin >> preference;
            if (preference == "pizza" || preference == "Pizza")
            {
                cout << "I suggest trying Pizza Hut" << endl;
                break;
            }
            else if (preference == "pasta" || preference == "Pasta")
            {
                cout << "I suggest trying Cinzzetti's" << endl;
                break;
            }
        }
    }
    return 0;
}