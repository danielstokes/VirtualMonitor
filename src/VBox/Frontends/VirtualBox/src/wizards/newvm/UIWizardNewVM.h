/** @file
 *
 * VBox frontends: Qt4 GUI ("VirtualBox"):
 * UIWizardNewVM class declaration
 */

/*
 * Copyright (C) 2006-2012 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 */

#ifndef __UIWizardNewVM_h__
#define __UIWizardNewVM_h__

/* GUI includes: */
#include "UIWizard.h"

/* COM includes: */
#include "COMEnums.h"
#include "CMachine.h"

/* New Virtual Machine wizard: */
class UIWizardNewVM : public UIWizard
{
    Q_OBJECT;

public:

    /* Page IDs: */
    enum
    {
        Page1,
        Page2,
        Page3
    };

    /* Page IDs: */
    enum
    {
        PageExpert
    };

    /* Constructor: */
    UIWizardNewVM(QWidget *pParent, const QString &strGroup = QString());

protected:

    /* Create VM stuff: */
    bool createVM();

    /* Who will be able to create virtual-machine: */
    friend class UIWizardNewVMPageBasic3;
    friend class UIWizardNewVMPageExpert;

private:

    /* Translation stuff: */
    void retranslateUi();

    /* Pages related stuff: */
    void prepare();

    /* Helping stuff: */
    QString getNextControllerName(KStorageBus type);

    /* Variables: */
    CMachine m_machine;
    QString m_strGroup;
    int m_iIDECount;
    int m_iSATACount;
    int m_iSCSICount;
    int m_iFloppyCount;
    int m_iSASCount;
};

#endif // __UIWizardNewVM_h__

