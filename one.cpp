#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const char* persons[] = {
        "Liuyuan",
        "Meiduo",
        "LiuCenze",
        "LiLianrong",
        "SongRuifang"
    };
    int chee = 0;
    cout << endl << "pick a number between 1 to 5:";
    cin >> chee;
    
    cout << endl;
    cout << "Your lucky person is " << persons[chee - 1] << endl;
    return 0;
}