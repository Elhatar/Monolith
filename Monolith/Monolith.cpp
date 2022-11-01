#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <time.h>

using namespace std;

int main()
{
    //Put count of your lines in text file here. Right now I'm limited by technical ability of C++ lang. Or my skills ¯\_(ツ)_/¯
    string line[11];

    srand(time(NULL));
    setlocale(LC_ALL, "Russian");

    bool monolith_defender_alive = true;

    ifstream file("Monolith.txt");
    int i = 0;

    if (file.is_open())
    {
        while (file.peek()!=EOF)
        {
            getline(file, line[i]);
            i += 1;
        }
    }
    file.close();
    while (monolith_defender_alive)
    {
        int rnd = rand() % i;
        cin.get();
        cout << line[rnd];
    }
}