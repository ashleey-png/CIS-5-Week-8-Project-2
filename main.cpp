#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 83; // change this number

// Project 2 — Ashley Duran
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
  const int N = 30;
  int scores[N];
  const int scoreAt10 = 23; // change this number

  // Do not edit this boilerplate. It randomly generates 30 elements into the array.
  srand(static_cast<unsigned>(time(nullptr)));

  const int scoreAt20 = 78; // change this number

  for (int i = 0; i < N; ++i) {
    scores[i] = rand() % 100;
  }

  scores[0] = scoreAt0;
  const int scoreAt27 = 67; // change this number
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;

  // TODO: print each index and scores[i]
  for (int i = 0; i < N; i++)
  {
    std::cout << "Student " << i << ": :" << scores[i] << std::endl;

  }

  // TODO: one for loop. Count A, B, C, D, and failing.
  // 90 and up is A. 80 to 89 is B. 70 to 79 is C. 60 to 69 is D.
  // Below 60 is failing. A score of 60 is a D.
  // Print A:, B:, C:, D:, and F:. The five totals add up to 30.
int countA = 0;
int countB = 0;
int countC = 0;
int countD = 0;
int countF = 0;

for (int i = 0; i < N; i++)
{ 
  if (scores[i] >= 90)
{
   countA++;
}
else if (scores[i] >= 80)
{
  countB++;
}
else if (scores[i] >= 70)
{
  countC++;
}
else if (scores[i] >= 60)
{
  countD++;
}
else
{
  countF++;
}
}
std::cout << "A: " << countA << std::endl;
std::cout << "B: " << countB << std::endl;
std::cout << "C: " << countC << std::endl;
std::cout << "D: " << countD << std::endl;
std::cout << "F: " << countF << std::endl;

  // TODO: one while loop. If scores[i] is under 60, print:
  // Student at index i needs to come to office hours.
  // Put ++i in the loop or it never ends.
int i = 0;
while (i < N)
{
  if (scores[i] < 60)
  {
    std::cout << "Student at index  " << i << " needs to come to office hours." << std::endl;
  }
  i++;
}
  return 0;
}
