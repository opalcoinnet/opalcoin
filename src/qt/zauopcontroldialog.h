// Copyright (c) 2017-2019 The OPALCOIN developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZAUOPCONTROLDIALOG_H
#define ZAUOPCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zauop/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZAUOPControlDialog;
}

class CZAUOPControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZAUOPControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZAUOPControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZAUOPControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZAUOPControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZAUOPControlDialog(QWidget *parent);
    ~ZAUOPControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZAUOPControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZAUOPControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZAUOPCONTROLDIALOG_H
