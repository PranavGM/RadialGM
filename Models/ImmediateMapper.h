#ifndef IMEDIATEDATAWIDGETWRAPPER_H
#define IMEDIATEDATAWIDGETWRAPPER_H

#include <QDataWidgetMapper>

class ImmediateDataWidgetMapper : public QDataWidgetMapper {
  Q_OBJECT

 public:
  ImmediateDataWidgetMapper(QObject *parent);
  void addMapping(QWidget *widget, int section, QByteArray propertyName = "");

 private slots:
  void widgetChanged();
};

#endif  // IMEDIATEDATAWIDGETWRAPPER_H