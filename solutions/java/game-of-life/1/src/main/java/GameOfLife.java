class GameOfLife {
    public int[][] tick(int[][] matrix){
        if (matrix.length == 0) return new int[][]{};

        int rows = matrix.length;
        int cols = matrix[0].length;
        int[][] newGeneration = new int[rows][cols];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                int sum_cells_alive = extractNumberOfAliveNeighbors(i, j, rows, cols, matrix);
                int new_cell_value = 0;
                
                if (isDeadAndHasThreeLivingNeighbors(matrix[i][j], sum_cells_alive) 
                    || keepAlive(matrix[i][j], sum_cells_alive)) 
                {
                    new_cell_value = 1;
                }

                newGeneration[i][j] = new_cell_value;
            }
        }
        return newGeneration;
    }

    public int extractNumberOfAliveNeighbors(int i, int j, int rows, int cols, int[][] matrix) {
        int sum_cells_alive = 0;
        for (int x = -1; x <= 1; x++) {
            for (int y = -1; y <= 1; y++) {
                if (x == 0 && y == 0) continue;

                int index_x = i + x;
                int index_y = j + y;

                // Verifying out of bounds.
                if (index_x < 0) continue;
                if (index_y < 0) continue;
                if (index_x > rows - 1) continue;
                if (index_y > cols - 1) continue;

                if (matrix[index_x][index_y] == 1) {
                    sum_cells_alive += 1;
                } 
            }   
        }
        return sum_cells_alive;
    }

    public boolean isDeadAndHasThreeLivingNeighbors(int cell_value, int sum_cell_alive) {
        return cell_value == 0 && sum_cell_alive == 3;
    }

    public boolean keepAlive(int cell_value, int sum_cell_alive) {
        return cell_value == 1 && (sum_cell_alive == 2 || sum_cell_alive == 3);
    }
}
