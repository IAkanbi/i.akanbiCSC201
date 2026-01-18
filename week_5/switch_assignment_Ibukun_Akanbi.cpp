#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter a Year: ";
    cin >> year;

    switch (year % 12){
        case 0:
            cout << "According to Chinese Zodiac, You were born in the year of the Monkey.";
            break;
        case 1:
            cout << "According to Chinese Zodiac, You were born in the year of the Rooster.";
            break;
        case 2:
            cout << "According to Chinese Zodiac, You were born in the year of the Dog.";
            break;
        case 3:
            cout << "According to Chinese Zodiac, You were born in the year of the Pig.";
            break;
        case 4:
            cout << "According to Chinese Zodiac, You were born in the year of the Rat.";
            break;
        case 5:
            cout << "According to Chinese Zodiac, You were born in the year of the Ox.";
            break;
        case 6:
            cout << "According to Chinese Zodiac, You were born in the year of the Tiger.";
            break;
        case 7:
            cout << "According to Chinese Zodiac, You were born in the year of the Rabbit.";
            break;
        case 8:
            cout << "According to Chinese Zodiac, You were born in the year of the Dragon.";
            break;
        case 9:
            cout << "According to Chinese Zodiac, You were born in the year of the Snake.";
            break;
        case 10:
            cout << "According to Chinese Zodiac, You were born in the year of the Horse.";
            break;
        case 11:
            cout << "According to Chinese Zodiac, You were born in the year of the Sheep.";
            break;
        default:
            cout << "Not listed in the Chinese Zodiac Cycle.";
    }
    return 0;
}