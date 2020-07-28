#include "AUTweight.h"

void weighting_test(){

  AUTweight autTesting;
  //  autTesting.AUTweight::readTree();
  double mean, unc;
  autTesting.AUTweight::getWeight(3.0,0.5,0.02,0.45, mean, unc);   // Args: Q, M (di-hadron invariant mass), x, z
  cout << mean << " " << unc << endl;
  autTesting.AUTweight::getWeight(101.0, 0.4, 0.02, 0.45, mean, unc);

  autTesting.AUTweight::getWeight(3.9,0.5,0.02,0.45, mean, unc);
  cout << mean << " " << unc << endl;

  // 1 < Q < 100 GeV
  // 0.3 < M < 1.3 GeV
  // 0.2 < z < 1
  // 10^-4 < x < 1

  cout << autTesting.closestx(0.45) << endl;
  cout << autTesting.closestz(0.24) << endl;
  cout << autTesting.closestM(0.5) << endl;
  cout << autTesting.closestQ(3.0) << endl;
  

}
