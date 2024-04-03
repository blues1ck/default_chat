#ifndef SOCKET_H
#define SOCKET_H

#include <QObject>

class Socket : public QObject
{
    Q_OBJECT
public:
    explicit Socket(QObject *parent = nullptr);

signals:

};

#endif // SOCKET_H
