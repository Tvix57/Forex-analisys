#ifndef PARSER_PARSER_H_
#define PARSER_PARSER_H_

#include <QDateTime>
#include <QFile>
#include <QObject>
#include <QPair>
#include <QPointF>
#include <QTextStream>
#include <QVector>

class Parser : public QObject {
  Q_OBJECT
 public:
  explicit Parser(QObject *parent = nullptr);
  void readFile(const QString);

  QVector<QPair<QDateTime, double>> m_raw_data;
  QVector<double> m_weight;

 signals:
  void RawData(int, QPointF);
  void MinPoints(int);
  void NewData();
};

#endif  // PARSER_PARSER_H_
