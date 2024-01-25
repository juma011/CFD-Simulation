
#include <iostream>
#include <vector>

// Simple CFD simulation for fluid flow in a channel
class CFDSimulation {
public:
    CFDSimulation(int size) : gridSize(size) {
        velocityField.resize(size, std::vector<double>(size, 0.0));
    }

    void simulateFlow() {
        // Placeholder for a simple fluid flow simulation
        for (int i = 0; i < gridSize; ++i) {
            for (int j = 0; j < gridSize; ++j) {
                // Example: Linearly increasing velocity with distance from left wall
                velocityField[i][j] = j * 0.1;
            }
        }
    }

    void printVelocityField() {
        for (const auto& row : velocityField) {
            for (const auto& value : row) {
                std::cout << value << " ";
            }
            std::cout << std::endl;
        }
    }

private:
    int gridSize;
    std::vector<std::vector<double>> velocityField; // 2D velocity field
};

int main() {
    CFDSimulation sim(10); // Creating a 10x10 grid
    sim.simulateFlow();
    sim.printVelocityField();

    return 0;
}
