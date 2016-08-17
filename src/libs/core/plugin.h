/*-------------------------------------------------
 *
 * OrbitsWriter - An Offline Blog Writer
 *
 * Copyright (C) 2016  devbean@galaxyworld.org
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *-------------------------------------------------*/

#ifndef PLUGIN_H
#define PLUGIN_H

#include "core/core_global.h"

#include <QObject>

namespace Core
{

class CORE_EXPORT Plugin
{
public:
    virtual ~Plugin() {}

    virtual QString name() const = 0;
    virtual QString version() const = 0;
    virtual QString vendor() const = 0;
};

} // end of namespace Core

#endif // PLUGIN_H
