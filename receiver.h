#ifndef RECEIVER_H
#define RECEIVER_H


class Receiver : public QObject
{
    Q_OBJECT

    float submark,average,subm=0,subu=0,o;
    int sub=0;

public:
    Receiver(QObject *parent = 0);
    QByteArray average1();
public slots:
    float processPendingDatagrams();


private:
    QLabel *statusLabel;
    QPushButton *quitButton;
    QUdpSocket *udpSocket;
};

#endif
