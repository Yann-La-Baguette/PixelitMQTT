#ifndef PIXELIT_H
#define PIXELIT_H

#include <QJsonObject>
#include <QUrl>
#include <QNetworkAccessManager>

class Pixelit
{
private:
    QUrl qurl;
    QJsonObject jsontext;
    QNetworkAccessManager m;

    QByteArray get(QUrl url);
    QByteArray post(QUrl url, QJsonObject json);

public:
    Pixelit();

    void set_url(QString url);
    bool envoyer_txt();
    QByteArray get_json_brightness();
    double get_brightness();
};

#endif // PIXELIT_H
