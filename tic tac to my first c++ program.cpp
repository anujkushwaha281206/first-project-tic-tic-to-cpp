#include <iostream>

using namespace std;
void drawboard(char board[3][3]) {
  cout << "-------\n";
  for (int i = 0; i < 3; i++) {

    for (int j = 0; j < 3; j++) {
      cout << "|";
      cout << board[i][j];
    }
    cout << "|";
    cout << "\n-------" << endl;
  }
}

int main() {
  char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

  int x;
  int y;
  int o = 'O';
  int k;

  char h = 'X';
  for (k = 0; k <= 9; k++) {

    drawboard(board);
    if ((board[0][0] == o && board[0][1] == o && board[0][2] == o) ||

        (board[0][0] == o && board[1][0] == o && board[2][0] == o) ||
        (board[0][0] == o && board[1][1] == o && board[2][2] == o) ||
        (board[1][0] == o && board[1][1] == o && board[1][2] == o) ||
        (board[2][0] == o && board[2][1] == o && board[2][2] == o) ||
        (board[0][1] == o && board[2][1] == o && board[2][2] == o) ||
        (board[0][0] == o && board[0][1] == o && board[0][2] == o) ||
        (board[0][2] == o && board[1][1] == o && board[2][0] == o)) {
      cout << "player 2 win";
      break;
    }

    cin >> x;

    if (x > 9 or 0 > x) {
      cout << "invalid input try again ";

    } else {
      for (int I = 0; I < 3; I++) {
        for (int J = 0; J < 3; J++) {
          if (board[I][J] - '0' == x) {
            board[I][J] = h;
          }
        }
      }
    }

    drawboard(board);
    if ((board[0][0] == h && board[0][1] == h && board[0][2] == h) ||
        (board[0][0] == h && board[1][0] == h && board[2][0] == h) ||
        (board[0][0] == h && board[1][1] == h && board[2][2] == h) ||
        (board[1][0] == h && board[1][1] == h && board[1][2] == h) ||
        (board[2][0] == h && board[2][1] == h && board[2][2] == h) ||
        (board[0][1] == h && board[2][1] == h && board[2][2] == h) ||
        (board[0][0] == h && board[0][1] == h && board[0][2] == h) ||
        (board[0][2] == h && board[1][1] == h && board[2][0] == h)) {
      cout << "you win";
      break;

    }

    else if (k == 9) {
      if (k == 9) {
        cout << "draw";
      }
    }

    cin >> y;

    if (y > 9 or 0 > y) {
      cout << "invalid input try again ";
    } else {
      for (int U = 0; U < 3; U++) {
        for (int E = 0; E < 3; E++) {
          if (board[U][E] - '0' == y) {
            board[U][E] = o;
          }
        }
      }
    }
  }
  return 0;
}
