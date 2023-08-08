#include <iostream>
#include <tuple>
#include <queue>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{

    int point_cnt;
    queue<tuple<int, int>> points;
    int number1, number2, L;

    for (int i = 0; i < point_cnt; i++)
    {
        cin >> number1;
        cin >> number2;
        points.push(make_tuple(min(number1,number2), max(number1, number2)));
    }

    cin >> L;

}