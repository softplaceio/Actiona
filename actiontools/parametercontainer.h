/*
    Actiona
    Copyright (C) 2008-2014 Jonathan Mercier-Ganady

    Actiona is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Actiona is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.

    Contact : jmgr@jmgr.info
*/

#ifndef PARAMETERCONTAINER_H
#define PARAMETERCONTAINER_H

#include "actiontools_global.h"

class QMenu;
class QWidget;

namespace ActionTools
{
    class Script;

    class ACTIONTOOLSSHARED_EXPORT ParameterContainer
    {
    public:
        ParameterContainer(Script *script);

        virtual ~ParameterContainer();

        virtual QMenu *createVariablesMenu(QWidget *parent) const = 0;
        virtual QMenu *createResourcesMenu(QWidget *parent) const;

    private:
        Script *mScript;
    };
}

#endif // PARAMETERCONTAINER_H