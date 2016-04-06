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

def main():
    board = Board(4, 6)
    pdb.set_trace()
    print np.array(board.state)


if __name__ == '__main__':
    main()
