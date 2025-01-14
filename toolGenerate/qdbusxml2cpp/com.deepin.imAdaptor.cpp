/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./qt5platform-plugins/misc/com.deepin.im.xml -a ./qt5platform-plugins/toolGenerate/qdbusxml2cpp/com.deepin.imAdaptor -i ./qt5platform-plugins/toolGenerate/qdbusxml2cpp/com.deepin.im.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./qt5platform-plugins/toolGenerate/qdbusxml2cpp/com.deepin.imAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class ImAdaptor
 */

ImAdaptor::ImAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ImAdaptor::~ImAdaptor()
{
    // destructor
}

QRect ImAdaptor::geometry() const
{
    // get the value of property geometry
    return qvariant_cast< QRect >(parent()->property("geometry"));
}

bool ImAdaptor::imActive() const
{
    // get the value of property imActive
    return qvariant_cast< bool >(parent()->property("imActive"));
}

void ImAdaptor::setImActive(bool value)
{
    // set the value of property imActive
    parent()->setProperty("imActive", QVariant::fromValue(value));
}

bool ImAdaptor::imSignalLock() const
{
    // get the value of property imSignalLock
    return qvariant_cast< bool >(parent()->property("imSignalLock"));
}

void ImAdaptor::setImSignalLock(bool value)
{
    // set the value of property imSignalLock
    parent()->setProperty("imSignalLock", QVariant::fromValue(value));
}

void ImAdaptor::setKeyboardHeight(int h)
{
    // handle method call com.deepin.im.setKeyboardHeight
    QMetaObject::invokeMethod(parent(), "setKeyboardHeight", Q_ARG(int, h));
}

