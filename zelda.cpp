#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
    float x, y, sword_x = 7, sword_y = 2.5, heart_x = 500, heart_y = -3;
    float triforce_x = 3.5, triforce_y = 50.125;
    float dist_sword_x, dist_sword_y, dist_heart_x, dist_heart_y, dist_triforce_x, dist_triforce_y;
    float dist_s, dist_h, dist_t;
    cout << "== Zelda (version 0.000001) ==\n" << "What is the position of our hero, Link?\n";
    cout << "Enter X and Y coordinates separated by a space\n";
    cin >> x >> y;
    //dist is sqrt  of ((x2 - x1)^2 + (y2 - y1)^2)
    dist_sword_x = x - sword_x;
    dist_sword_y = y - sword_y;
    dist_heart_x = x - heart_x;
    dist_heart_y = y - heart_y;
    dist_triforce_x = x - triforce_x;
    dist_triforce_y = y - triforce_y;
    dist_s = sqrt(dist_sword_x*dist_sword_x + dist_sword_y*dist_sword_y);
    dist_h = sqrt(dist_heart_x*dist_heart_x + dist_heart_y*dist_heart_y);
    dist_t = sqrt(dist_triforce_x*dist_triforce_x + dist_triforce_y*dist_triforce_y);
    cout << fixed;
    cout << setprecision(1);
    cout << "Distance to sword: " << dist_s << endl;
    cout << "Distance to heart: " << dist_h << endl;
    cout << "Distance to triforce: " << dist_t << endl;
    return 0;
}
