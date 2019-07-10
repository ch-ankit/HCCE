#ifndef THIRDSTOREY_H
#define THIRDSTOREY_H

#include <QDialog>

namespace Ui {
class thirdstorey;
}

class thirdstorey : public QDialog
{
    Q_OBJECT

public:
    explicit thirdstorey(QWidget *parent = nullptr);
    ~thirdstorey();
private slots:
    void on_DSNOD_valueChanged(int arg1);

    void on_DSWH_valueChanged(double arg1);

    void on_DSWW_valueChanged(double arg1);

    void on_DSWWI_valueChanged(double arg1);

    void on_DSDB_currentIndexChanged(int index);

    void on_DSWIS_valueChanged(double arg1);

    void on_DSNOW_valueChanged(int arg1);

    void on_DSODW_valueChanged(double arg1);

    void on_DSODH_valueChanged(double arg1);

    void on_CBTWI_currentIndexChanged(int index);

    void on_DSOWNW_valueChanged(double arg1);

    void on_DSOWNH_valueChanged(double arg1);

    void on_DSNDI_valueChanged(int arg1);

    void on_DSNWI_valueChanged(int arg1);

    void on_DSIDW_valueChanged(double arg1);

    void on_DSIDH_valueChanged(double arg1);

    void on_CBTWO_activated(int index);

    void on_DSIWNW_valueChanged(double arg1);

    void on_DSIWNH_valueChanged(double arg1);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::thirdstorey *ui;
};

#endif // THIRDSTOREY_H
