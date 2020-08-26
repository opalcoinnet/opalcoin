// Copyright (c) 2019 The OPALCOIN developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLAUOPWIDGET_H
#define COINCONTROLAUOPWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlAUOPWidget;
}

class CoinControlAUOPWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlAUOPWidget(QWidget *parent = nullptr);
    ~CoinControlAUOPWidget();

private:
    Ui::CoinControlAUOPWidget *ui;
};

#endif // COINCONTROLAUOPWIDGET_H
