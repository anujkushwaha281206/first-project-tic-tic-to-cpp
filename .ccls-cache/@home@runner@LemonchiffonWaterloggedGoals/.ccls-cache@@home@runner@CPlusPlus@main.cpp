#include <iostream>
#include <cstring>

using namespace std;
void drawboard(char board[3][3])
{
  cout << "-------\n";
  for(int i = 0; i<3; i++ )
  {


    for(int j = 0; j<3; j++)
    {
      cout<<"|";
      cout<<board[i][j];

    }
    cout<<"|";
    cout<<"\n-------"<<endl;
  }
}
void h()
{

}

int main() 
{
  char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

  int x;
  int k;

  char h = 'X';
  for(k = 0; k < 10; k++)
  {
    drawboard(board);
    cin>>x;
    
    
    
  }

  cout << "Hello World!\n"; 
  return 0;
}