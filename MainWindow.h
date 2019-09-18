#pragma once

#include <QtWidgets>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() = default;

private:
    QMenuBar* menuBar;
    QMenu* menuFile;

    QLabel* nonPalindromesLabel;
    QLabel* palindromesLabel;

    QListWidget* nonPalindromes;
    QListWidget* palindromes;

    QStatusBar* statusBar;
};
