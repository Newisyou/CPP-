#include <fstream>
#include <set>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

struct Position {
    int x, y;
    Position(int _x, int _y)
        : x(_x), y(_y) {
    }
    Position() : x(0), y(0) {
    }
};

istream& operator >>(istream& ist, Position& position) {
    ist >> position.x >> position.y;
    return ist;
}
int squared_distance(const Position& a, const Position& b) {
    int dx = a.x - b.x, dy = a.y - b.y;
    return dx * dx + dy * dy;
}
int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    int n;
    vector<Position> points;
    set<int> distances;
    input >> n;
    points.resize(n);
    for (int i = 0; i < n; ++i)
        input >> points[i];
    for (auto& a : points) {
        for (auto& b : points) {
            int squared_d = squared_distance(a, b);
            if (squared_d != 0)
                distances.insert(squared_d);
        }
    }
    output << distances.size() << endl;
    for (auto distance : distances) {
        output << setprecision(12) << fixed << sqrt(distance) << endl;
    }
}