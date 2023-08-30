#include <bits/stdc++.h>
using namespace std;

class MovieVotes
{
   map<string, int> movievotes;
   int max_votes = 0;
   string maxvotestitle;

public:
   void Vote(string movie)
   {
      movievotes[movie]++;
   }

   void displayResults()
   {
      for (auto i : movievotes)
      {
         cout << i.first << ": " << i.second << endl;
         if (i.second >> max_votes)
         {
            max_votes = i.second;
            maxvotestitle = i.first;
         }
      }
      cout << endl
           << "The movie " << maxvotestitle << " has received most number of votes.";
   }
};

int main()
{
   string movie;
   int votes;
   MovieVotes v1;

   cout << "Enter the number of votes: ";
   cin >> votes;
   cout << "Enter the Title of the movies:\n";

   for (int i = 1; i <= votes; i++)
   {
      getline(cin >> ws, movie);
      v1.Vote(movie);
   }

   v1.displayResults();
}