#include <iostream>
#include <fstream>


using namespace std;

#define DEBUG false
#define Test(x) if (DEBUG) cout << x << endl;

int load_words (string filename, string tokens[]);

void display_story(int count, string tokens[]);

void user_input(int count, string tokens[]);





int main()
{
//read contents
//output the file
//replace the placeholders with user input
//  based on different placeholders
//display the story

int count;
string words[1000];

count = load_words("madlib.txt", words);
display_story(count, words);
user_input(count, words);
display_story(count, words);


return 0;

}



int load_words (string filename, string tokens[])
{
    int count = 0;
    string token;

    ifstream fin;
    fin.open(filename);

    while (fin >> token) 
    {
        tokens[count] = token;
        count++;
    }

    fin.close();
    return count;
}


void display_story(int count, string tokens[])
{
    Test("In display story");
    for (int i = 0; i < count; i++) {
        cout << tokens[i]<<" ";
    }
    cout<<endl;
}

void user_input(int count, string tokens[]) 
{
    string replacement;
    Test("In user input");
    for (int i =0; i < count; i++)
       {
         if (tokens[i][0] == '#')
        {
          if (tokens[i] == "#noun" || tokens[i] == "#noun." || tokens[i] == "#noun,")
          {
            cout << "Enter a noun: ";
          } 
          else if (tokens[i] == "#verb") 
          {
            cout<< "Enter a verb: ";
          }
          else if (tokens[i] == "#adjective") 
          {
              cout<< "Enter an adjective: ";
          }
          else if (tokens[i] == "#adverb")
          {
              cout<< "Enter an adverb: ";
          }
          else if (tokens[i] == "#verb-past")
          {
              cout<<"Enter a verb-past: ";
          }
        cin >> replacement;
        tokens[i] = replacement;
      }
       }
 
}




