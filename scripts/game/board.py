#!/usr/bin/env python
import pdb
import numpy as np
class PIECE:
    RED, BLACK, EMPTY = range(3)

class Board(object):
    def __init__(self, rows, cols):
        # initialize the board to empty
        self.state = [[PIECE.EMPTY for j in xrange(cols)] for i in xrange(rows)]

    def Reset(self):
        self.state = [[PIECE.EMPTY for j in xrange(cols)] for i in xrange(rows)]

    def PlacePiece(self, col, piece_type):
        if not self.ColumnFull(col):
            self.DropPiece(col, piece_type)
        else:
            return False
    
    def ColumnFull(self, col):
        if self.state[0][col] != PIECE.EMPTY:
            return True
        else:
            return False
    def DropPiece(self, col, piece_type):
        if self.ColEmpty(col):
            self.state[-1][col] = piece_type
            return True
        else:
            for row in xrange(len(self.state)):
                if self.state[row][col] != PIECE.EMPTY:
                    self.state[row-1][col] = piece_type
                    return True
        return False


    def ColEmpty(self, col):
        for row in xrange(len(self.state)):
            if self.state[row][col] != PIECE.EMPTY:
                return False
        return True


    def __str__(self):
        pass
    def CheckWin(self):
        pass


class Game(object):
    def Actions(self, state):
        "Return a list of the allowable moves at this point."
        pass
    def Result(self, state, move):
        "Return the state that results from making a move from a state."
        pass
    def Utility(self, state, player):
        "Return the value of this final state to player."
        pass
    def TerminalTest(self, state):
        "Return True if this is a final state for the game."
        pass
    def ToMove(self, state):
        "Return the player whose move it is in this state."
        pass
    def Display(self, state):
        "Print or otherwise display the state."
        pass

class ConnectFourGame(Game):
    def __init__(sefl, board):
        self.board = board
    def Actions(self, state):
        pass
    def Result(self, state, move):
        pass
    def Utility(self, state, player):
        pass
    def TerminalTest(self, state):
        if self.board.IsWin():
            return True
        if self.board.IsFull():
            return True
        return False

    def ToMove(self, state):
        pass
    def Display(self, state):
        pass

class Player(object):
    def Move(self, game, state):
        pass
    def __call__(sefl, game, state):
        return self.Move(game, state)

class RandomPlayer(Player):
    def Move(self, game, state):
        return rand() % 6

def PlayGame(game, *players):
    state = game.initial
    while True:
        for player in players:
            move = player(game, state)
            state = game.Result(state, move)
            if game.TerminalTest(state):
                game.Display(state)
                return game.Utility(state, game.ToMove(game.initial))
def main():
    board = Board(10, 12)
    game_two = ConnectFour(board)

    player_one = RandomPlayer()
    player_two = PersonPlayer()

    players = [player_one, player_two]

    PlayGame(game_one, players)




if __name__ == '__main__':
    main()
