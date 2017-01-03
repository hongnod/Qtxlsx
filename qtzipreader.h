﻿/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QtZIPREADER_H
#define QtZIPREADER_H

//#include <QtGui/private/qtguiglobal_p.h>
//#include <QtCore/qglobal.h>
#include <qtzipglobal.h>
#ifndef QT_NO_TEXTODFWRITER

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of the QtZipReader class.  This header file may change from
// version to version without notice, or even be removed.
//
// We mean it.
//

#include <QtCore/qdatetime.h>
#include <QtCore/qfile.h>
#include <QtCore/qstring.h>

QT_BEGIN_NAMESPACE_ZIP

class QtZipReaderPrivate;

class Q_ZIP_EXPORT QtZipReader
{
public:
    explicit QtZipReader(const QString &fileName, QIODevice::OpenMode mode = QIODevice::ReadOnly );

    explicit QtZipReader(QIODevice *device);
    ~QtZipReader();

    QIODevice* device() const;

    bool isReadable() const;
    bool exists() const;

    struct FileInfo
    {
        FileInfo() Q_DECL_NOTHROW
            : isDir(false), isFile(false), isSymLink(false), crc(0), size(0)
        {}

        bool isValid() const Q_DECL_NOTHROW { return isDir || isFile || isSymLink; }

        QString filePath;
        uint isDir : 1;
        uint isFile : 1;
        uint isSymLink : 1;
        QFile::Permissions permissions;
        uint crc;
        qint64 size;
        QDateTime lastModified;
    };

    QVector<FileInfo> fileInfoList() const;
    int count() const;

    FileInfo entryInfoAt(int index) const;
    QByteArray fileData(const QString &fileName) const;
    bool extractAll(const QString &destinationDir) const;

    enum Status {
        NoError,
        FileReadError,
        FileOpenError,
        FilePermissionsError,
        FileError
    };

    Status status() const;

    void close();

private:
    QtZipReaderPrivate *d;
    Q_DISABLE_COPY(QtZipReader)
};
Q_DECLARE_TYPEINFO(QtZipReader::FileInfo, Q_MOVABLE_TYPE);
Q_DECLARE_TYPEINFO(QtZipReader::Status, Q_PRIMITIVE_TYPE);

QT_END_NAMESPACE_ZIP

#endif // QT_NO_TEXTODFWRITER
#endif // QtZIPREADER_H
