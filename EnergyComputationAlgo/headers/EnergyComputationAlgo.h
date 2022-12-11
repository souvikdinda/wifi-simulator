#include <stdio.h>
#include <vector>
#include <iostream>
//#include <Eigen/Sparse>
#include <SparseCore>
//#include <Eigen/Dense>
#include <SparseLU>
//a new comment

using namespace std;
using namespace Eigen;

class EnergyComputationAlgo
{
public:
	int dimx, dimy, dimz;
	EnergyComputationAlgo(int dimx, int dimy);
	vector<vector<double> > computeSignalStrengths(vector<vector<double> > imageMatrix, int routerXpos, int routerYpos);

private:
	int calculateLinearIndex(int x, int y);
};
