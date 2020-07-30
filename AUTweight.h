#ifndef AUTweight_H
#define AUTweight_H
#include <vector>
#include <TFile.h>

double Qgrid[50] = {0.10000E+01, 0.10965E+01, 0.12023E+01, 0.13183E+01, 0.14454E+01,
                    0.15849E+01, 0.17378E+01, 0.19055E+01, 0.20893E+01, 0.22909E+01,
                    0.25119E+01, 0.27542E+01, 0.30200E+01, 0.33113E+01, 0.36308E+01,
                    0.39811E+01, 0.43652E+01, 0.47863E+01, 0.52481E+01, 0.57544E+01,
                    0.63096E+01, 0.69183E+01, 0.75858E+01, 0.83176E+01, 0.91201E+01,
                    0.10000E+02, 0.10965E+02, 0.12023E+02, 0.13183E+02, 0.14454E+02,
                    0.15849E+02, 0.17378E+02, 0.19055E+02, 0.20893E+02, 0.22909E+02,
                    0.25119E+02, 0.27542E+02, 0.30200E+02, 0.33113E+02, 0.36308E+02,
                    0.39811E+02, 0.43652E+02, 0.47863E+02, 0.52481E+02, 0.57544E+02,
                    0.63096E+02, 0.69183E+02, 0.75858E+02, 0.83176E+02, 0.91201E+02};

double Mgrid[50] = {0.30000E+00, 0.32000E+00, 0.34000E+00, 0.36000E+00, 0.38000E+00,
                    0.40000E+00, 0.42000E+00, 0.44000E+00, 0.46000E+00, 0.48000E+00,
                    0.50000E+00, 0.52000E+00, 0.54000E+00, 0.56000E+00, 0.58000E+00,
                    0.60000E+00, 0.62000E+00, 0.64000E+00, 0.66000E+00, 0.68000E+00,
                    0.70000E+00, 0.72000E+00, 0.74000E+00, 0.76000E+00, 0.78000E+00,
                    0.80000E+00, 0.82000E+00, 0.84000E+00, 0.86000E+00, 0.88000E+00,
                    0.90000E+00, 0.92000E+00, 0.94000E+00, 0.96000E+00, 0.98000E+00,
                    0.10000E+01, 0.10200E+01, 0.10400E+01, 0.10600E+01, 0.10800E+01,
                    0.11000E+01, 0.11200E+01, 0.11400E+01, 0.11600E+01, 0.11800E+01,
                    0.12000E+01, 0.12200E+01, 0.12400E+01, 0.12600E+01, 0.12800E+01};

double zgrid[30] = {0.20000E+00, 0.22667E+00, 0.25333E+00, 0.28000E+00, 0.30667E+00,
                    0.33333E+00, 0.36000E+00, 0.38667E+00, 0.41333E+00, 0.44000E+00,
                    0.46667E+00, 0.49333E+00, 0.52000E+00, 0.54667E+00, 0.57333E+00,
                    0.60000E+00, 0.62667E+00, 0.65333E+00, 0.68000E+00, 0.70667E+00,
                    0.73333E+00, 0.76000E+00, 0.78667E+00, 0.81333E+00, 0.84000E+00,
                    0.86667E+00, 0.89333E+00, 0.92000E+00, 0.94667E+00, 0.97333E+00};

double xgrid[100]={0.10000E-03, 0.10908E-03, 0.11898E-03, 0.12978E-03, 0.14156E-03,
		   0.15441E-03, 0.16843E-03, 0.18372E-03, 0.20039E-03, 0.21859E-03,
		   0.23843E-03, 0.26007E-03, 0.28368E-03, 0.30943E-03, 0.33752E-03,
		   0.36816E-03, 0.40158E-03, 0.43804E-03, 0.47780E-03, 0.52117E-03,
		   0.56848E-03, 0.62009E-03, 0.67638E-03, 0.73778E-03, 0.80475E-03,
		   0.87780E-03, 0.95749E-03, 0.10444E-02, 0.11392E-02, 0.12426E-02,
		   0.13554E-02, 0.14785E-02, 0.16127E-02, 0.17591E-02, 0.19188E-02,
		   0.20929E-02, 0.22829E-02, 0.24902E-02, 0.27162E-02, 0.29628E-02,
		   0.32317E-02, 0.35251E-02, 0.38451E-02, 0.41941E-02, 0.45749E-02,
		   0.49901E-02, 0.54431E-02, 0.59372E-02, 0.64762E-02, 0.70641E-02,
		   0.77054E-02, 0.84048E-02, 0.91678E-02, 0.10000E-01, 0.10908E-01,
		   0.11898E-01, 0.12978E-01, 0.14156E-01, 0.15441E-01, 0.16843E-01,
		   0.18372E-01, 0.20039E-01, 0.21859E-01, 0.23843E-01, 0.26007E-01,
		   0.28368E-01, 0.30943E-01, 0.33752E-01, 0.36816E-01, 0.40158E-01,
		   0.43804E-01, 0.47780E-01, 0.52117E-01, 0.56848E-01, 0.62009E-01,
		   0.67638E-01, 0.73778E-01, 0.80475E-01, 0.87780E-01, 0.95749E-01,
		   0.10000E+00, 0.14500E+00, 0.19000E+00, 0.23500E+00, 0.28000E+00,
		   0.32500E+00, 0.37000E+00, 0.41500E+00, 0.46000E+00, 0.50500E+00,
		   0.55000E+00, 0.59500E+00, 0.64000E+00, 0.68500E+00, 0.73000E+00,
		   0.77500E+00, 0.82000E+00, 0.86500E+00, 0.91000E+00, 0.95500E+00};

class AUTweight{
 public:
  //  double mean;
  //double unc;
  //  double closestx, closestz, closestM, closestQ;

  std::vector<double> weightVec;
  std::vector<double> uncVec;
  
  AUTweight(){
    TFile f("AUTgrid.root");
    TTree *autTree = (TTree*)f.Get("autTree");

    Double_t mean; autTree->SetBranchAddress("mean",&mean);
    Double_t uncertainty; autTree->SetBranchAddress("uncertainty",&uncertainty);

    for(int i = 0; i < autTree->GetEntries(); i++){
      autTree->GetEntry(i);
      weightVec.push_back(mean);
      uncVec.push_back(uncertainty);
    }

    f.Close();
  }
  
  void getWeight(double Qval, double Mval, double xval, double zval, double &mean, double &unc){

    if( (Qval < Qgrid[0] || Qval > Qgrid[49]) || (Mval < Mgrid[0] || Mval > Mgrid[49]) || (zval < zgrid[0] || zval > zgrid[29]) || (xval < xgrid[0] || xval > xgrid[99]) ){
      cout << "Kinematics outside of weighting grid bounds" << endl;
      mean = 0;
      unc = 0;
      return;
    }
   
    int Qindex = -1;
    int Mindex = -1;
    int zindex = -1;
    int xindex = -1;

    int i = 0;
    while(Qindex == -1 && i < 50){
      if(Qval == Qgrid[i]) Qindex = i;
      else if(Qval > Qgrid[i] && Qval < Qgrid[i+1]){
	if(((Qval - Qgrid[i]) < (Qgrid[i+1] - Qval)) || ((Qval - Qgrid[i]) == (Qgrid[i+1] - Qval))) Qindex = i; 
	else  Qindex = i+1;
      }
      i++;
    }
    i = 0;
    while(Mindex == -1 && i < 50){
      if(Mval == Mgrid[i]) Mindex = i;
      else if(Mval > Mgrid[i] && Mval< Mgrid[i+1]){
	if(((Mval - Mgrid[i]) < (Mgrid[i+1] - Mval))||((Mval - Mgrid[i]) == (Mgrid[i+1] - Mval))) Mindex = i;
	else Mindex = i+1;
      }
      i++;
    }
    i = 0;
    while(zindex == -1 && i < 30){
      if(zval == zgrid[i]) zindex = i;
      else if(zval > zgrid[i] && zval< zgrid[i+1]){
	if(((zval - zgrid[i]) < (zgrid[i+1] - zval))||((zval - zgrid[i]) == (zgrid[i+1] - zval))) zindex = i;
	else zindex = i+1;
      }
      i++;
    }
    i = 0;
    while(xindex == -1 && i < 100){
      if(xval == xgrid[i]) xindex = i;
      else if(xval > xgrid[i] && xval< xgrid[i+1]){
	if(((xval - xgrid[i]) < (xgrid[i+1] - xval))||((xval - xgrid[i]) == (xgrid[i+1] - xval))) xindex = i;
	else xindex = i+1;
      }
      i++;
    }

    int AUTpos = (xindex + 100*(zindex)+100*30*(Mindex)+100*30*50*(Qindex));

    cout << AUTpos << endl;

    mean = weightVec[AUTpos];
    unc = uncVec[AUTpos];
    return;
  }

  double closestQ(double Qval){
 
    for(int i = 0; i < 50; i++){
      if(Qval == Qgrid[i]) return Qgrid[i];
      else if(Qval > Qgrid[i] && Qval < Qgrid[i+1]){
        if(((Qval - Qgrid[i]) < (Qgrid[i+1] - Qval)) || ((Qval - Qgrid[i]) == (Qgrid[i+1] - Qval))) return Qgrid[i];
        else return Qgrid[i+1];
      }
    }
    cout << "Outside Q bounds" << endl;
    return(0);
  }
  double closestM(double Mval){

    for(int i =0; i < 50; i++){
      if(Mval == Mgrid[i]) return Mgrid[i];
      else if(Mval > Mgrid[i] && Mval < Mgrid[i+1]){
        if(((Mval - Mgrid[i]) < (Mgrid[i+1] - Mval)) || ((Mval - Mgrid[i]) == (Mgrid[i+1] - Mval))) return Mgrid[i];
        else return Mgrid[i+1];
      }
    }
    return(0);
    cout << "Outside M bounds" << endl;
  }
  double closestx(double xval){

    for(int i =0; i < 100; i++){
      if(xval == xgrid[i]) return xgrid[i];
      else if(xval > xgrid[i] && xval < xgrid[i+1]){
        if(((xval - xgrid[i]) < (xgrid[i+1] - xval)) || ((xval - xgrid[i]) == (xgrid[i+1] - xval))) return xgrid[i];
        else return xgrid[i+1];
      }

    }
    cout << "Outside x bounds" << endl;
    return(0);
  }
  double closestz(double zval){

    for(int i =0; i < 30; i++){
      if(zval == zgrid[i]) return zgrid[i];
      else if(zval > zgrid[i] && zval < zgrid[i+1]){
        if(((zval - zgrid[i]) < (zgrid[i+1] - zval)) || ((zval - zgrid[i]) == (zgrid[i+1] - zval))) return zgrid[i];
        else return zgrid[i+1];
      }

    }
    cout << "Outside z bounds" << endl;
    return(0);
  }

  
};

#endif

