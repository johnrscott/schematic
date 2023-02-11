#include "resistor.h"
#include <QString>

Resistor::Resistor(QGraphicsItem *parent)
{
    setToolTip(QString("Click and drag this resistor"));
    setCursor(Qt::OpenHandCursor);
    setAcceptedMouseButtons(Qt::LeftButton);
}
