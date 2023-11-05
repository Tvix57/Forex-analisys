#ifndef APPROXIMATION_APPROXIMATION_H_
#define APPROXIMATION_APPROXIMATION_H_

#include "abstractmodel.h"

class Approximation : public AbstractModel {
 public:
  explicit Approximation(QObject *parent = nullptr);
  void MLQ(int, int, int, bool);
  double MQL(const QDateTime);

 private:
  QVector<double> m_a;
  void InitGauss(QVector<QVector<double>> &, QVector<double> &, bool);
  QVector<double> SolveGauss(QVector<QVector<double>> &, QVector<double> &);
  double GetApproximationValue(double);
  void AddM(int);
  void DelM(int);
};
#endif  // APPROXIMATION_APPROXIMATION_H_
