#include <iostream>
#include <Eigen/Dense>

int main() {

	//instantiates rebalancing amount in account to 0 dollars
	double rebalancing_amount;

	//takes input for the current account balance in us dollars
	std::cout << "Please enter the current account balance : " << std::endl;
	std::cin >> rebalancing_amount;

	//declares empty matrix and vectors
	Eigen::MatrixXd A(1, 4);

	A << 0.50, 0.25, 0.20, 0.05;

	Eigen::VectorXd x = rebalancing_amount * A.transpose();

	std::cout << "Solution x:\n" << x << std::endl;
}
