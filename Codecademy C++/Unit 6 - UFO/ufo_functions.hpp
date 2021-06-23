#include <vector>
#include <string>
using namespace std;

void greet();
void display_misses(int misses);
void end_game(string answer, string codeword);
void display_status(vector<char> incorrect, string answer);
bool continuePlaying(string response);