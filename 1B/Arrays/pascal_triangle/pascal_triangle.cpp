#include <iostream>

int main()
{
	int x_dim, y_dim;
	std::cin >> x_dim >> y_dim;
	int matrix[y_dim][x_dim];
	
	for (int y = 0; y < y_dim; y++)
	{
		matrix[y][0] = 1;
	}
	for (int x = 0; x < x_dim; x++)
	{
		matrix[0][x] = 1;
	}
	
	for (int y = 1; y < y_dim; y++)
	{
		for (int x = 1; x < x_dim; x++)
		{
			matrix[y][x] = matrix[y - 1][x] +
			matrix[y][x - 1];
		}
	}
	
	for (int x = 0; x < x_dim; x++)
	{
		for (int y = 0; y < y_dim; y++)
		{
			std::cout << matrix[y][x] << "   ";
		}
		std::cout << std::endl;
	}
}