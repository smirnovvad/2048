#include "gui/qtile.h"
#include "core/tile.h"

#include <QGraphicsDropShadowEffect>

QTile::QTile(Tile* tile)
{
    setAlignment(Qt::AlignCenter);
    this->tile = tile;
}

void QTile::draw()
{
    if (tile == NULL) {
        setText("");
        setStyleSheet("QTile { background: rgb(204,192,179); border-radius: 10px; }");
    } else {
        setText(QString::number(tile->getValue()));
        switch (tile->getValue()) {
        case 3: {
            setStyleSheet("QTile { background: rgb(238,228,218); color: rgb(119,110,101); font: bold; border-radius: 10px; font: 40pt; }");
            break;
        }
        case 6: {
            setStyleSheet("QTile { background: rgb(237,224,200); color: rgb(119,110,101); font: bold; border-radius: 10px; font: 40pt; }");
            break;
        }
        case 12: {
            setStyleSheet("QTile { background: rgb(242,177,121); color: rgb(255,255,255); font: bold; border-radius: 10px; font: 40pt; }");
            break;
        }
        case 24: {
            setStyleSheet("QTile { background: rgb(245,150,100); color: rgb(255,255,255); font: bold; border-radius: 10px; font: 40pt; }");
            break;
        }
        case 48: {
            setStyleSheet("QTile { background: rgb(245,125,95); color: rgb(255,255,255); font: bold; border-radius: 10px; font: 40pt; }");
            break;
        }
        case 96: {
            setStyleSheet("QTile { background: rgb(245,95,60); color: rgb(255,255,255); font: bold; border-radius: 10px; font: 40pt; }");
            break;
        }
        case 192: {
            setStyleSheet("QTile { background: rgb(237,207,114); color: rgb(255,255,255); font: bold; border-radius: 10px; font: 40pt; }");
            break;
        }
        case 384: {
            QGraphicsDropShadowEffect *dse = new QGraphicsDropShadowEffect();
            dse->setColor(Qt::yellow);
            dse->setBlurRadius(20);
            dse->setOffset(-1);
            setGraphicsEffect(dse);
            setStyleSheet("QTile { background: rgb(237,204,97); color: rgb(255,255,255); font: bold; border-radius: 10px; font: 40pt; }");
            break;
        }
        case 768: {
            QGraphicsDropShadowEffect *dse = new QGraphicsDropShadowEffect();
            dse->setColor(Qt::yellow);
            dse->setBlurRadius(30);
            dse->setOffset(-1);
           setGraphicsEffect(dse);
            setStyleSheet("QTile { background: rgb(237,204,97); color: rgb(255,255,255); font: bold; border-radius: 10px; font: 40pt; }");
            break;
        }
        case 1536: {
            QGraphicsDropShadowEffect *dse = new QGraphicsDropShadowEffect();
            dse->setColor(Qt::yellow);
            dse->setBlurRadius(40);
            dse->setOffset(-1);
            setGraphicsEffect(dse);
            setStyleSheet("QTile { background: rgb(237,204,97); color: rgb(255,255,255); font: bold; border-radius: 10px; font: 40pt; }");
            break;
        }
        case 3072: {
            QGraphicsDropShadowEffect *dse = new QGraphicsDropShadowEffect();
            dse->setColor(Qt::yellow);
            dse->setBlurRadius(50);
            dse->setOffset(-1);
            setGraphicsEffect(dse);
            setStyleSheet("QTile { background: rgb(237,204,97); color: rgb(255,255,255); font: bold; border-radius: 10px; font: 40pt; }");
            break;
        }
        default: {
            setStyleSheet("QTile { background: rgb(238,228,218); color: rgb(119,110,101); font: bold; border-radius: 10px; font: 40pt; }");
            break;
        }
        }
    }
}
