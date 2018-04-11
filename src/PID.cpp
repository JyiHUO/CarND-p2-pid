#include "PID.h"
#include "iostream"
using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
}

void PID::UpdateError(double cte) {
  d_error = cte - p_error;
  p_error = cte;
  i_error += cte;
}

double PID::TotalError() {
  cout<<p_error<<endl;
  cout<<d_error<<endl;
  cout<<i_error<<endl;
  cout<<"-Kp*p_error: "<<-Kp*p_error<<endl;
  cout<<"- Kd*d_error: "<<- Kd*d_error<<endl;
  cout<<"- Ki*i_error: "<<- Ki*i_error<<endl;

  return -Kp*p_error - Kd*d_error - Ki*i_error;
}

