#ifndef AUX_FUNCTIONS_H
#define AUX_FUNCTIONS_H

void SVD( const arma::mat&M, arma::mat& U, arma::vec& D, arma::mat &V, int nu, int nv );

double gammaFunc( double x, bool logScale );
double diGammaFunc( double x );
double betaFunc( double a, double b, bool logScale );

void funcX( const arma::mat& X, arma::mat &XTX, double &trXTX );

double gamd( double x, double logx, double a, double b );
double invgamd( double invx, double logx, double a, double b );
double gamh( double a, double b );
double invgamh( double a, double b );

arma::mat retHPDI( arma::vec mu, arma::vec sigma, double qz, int J );

arma::mat fMat( bool globalvar, std::string priorvar, arma::mat W2, 
                arma::vec betatau, int J, int D, arma::vec alphatau, int JD );
arma::mat logvarMat( bool globalvar, int J, int D, arma::mat f, std::string priorvar,
					 					 arma::mat Tau, arma::vec alphatau );
#endif
