/*
	Actionaz
	Copyright (C) 2008-2010 Jonathan Mercier-Ganady

	Actionaz is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	Actionaz is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program. If not, see <http://www.gnu.org/licenses/>.

	Contact : jmgr@jmgr.info
*/

#ifndef CODEEXECUTION_H
#define CODEEXECUTION_H

#include "executer_global.h"

#include <QObject>
#include <QScriptable>
#include <QScriptValue>
#include <QScriptEngine>

namespace LibExecuter
{
	class ScriptAgent;
	
	class EXECUTERSHARED_EXPORT CodeExecution : public QObject, public QScriptable
	{
		Q_OBJECT
		
	public:
		CodeExecution(ScriptAgent *scriptAgent);
		
	public slots:
		void pause(qint64 duration) const;
		void sleep(qint64 duration) const;
		void stop() const;
		
	private:
		ScriptAgent *mScriptAgent;
	};
}

#endif // CODEEXECUTION_H