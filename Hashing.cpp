#include <iostream>
#include <fstream>
using namespace std;

int calc_hash(string word)
{
    int sum = 0;
    for (int i = 0; i <word.length(); i++)
    {
        sum += word[i] - 'a' + 1;
    }      
    return sum;
}

int calc_hash2(string word)
{
    int sum = 7 * (word[0] - 'a' -1);
    for (int i =1; i < word.length()-1; i++)
    {
        sum += word[i] - 'a' +1;
    }
    sum += 7* word[word.length()-1];
    return sum;
}

void read_file(int array[])
{
    ifstream fin;

    fin.open("enable1.txt");

    if (fin.is_open())
    {
        string word;
        while (fin >> word)
        {
            int value = calc_hash(word);
            array[value]++;
        }
        fin.close();
    }
}

int main()
{
    int collision[3000] = { 0 };
    int max =0;
    int j = 0;
    read_file(collision);
    for (int i =0; i < 391; i++)
    {
        cout << i << ": " << collision[i] <<endl;
        if (collision[i] > max)
        {
            max = collision[i];
            j = i;
        }

    }

    cout << j << " has the max number of collisions is: " << max << endl;
    return 0;
}
