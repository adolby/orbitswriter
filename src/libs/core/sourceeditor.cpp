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

#include "document/markupgenerator.h"
#include "sourceeditor.h"

#include <QDebug>

namespace Core
{

//---------- SourceEditor ----------//

SourceEditor::SourceEditor(MarkupBuilder *builder, QWidget *parent)
    : QTextEdit(parent),
      builder(builder)
{
    setStyleSheet("border: 0");
}

void SourceEditor::updateSource(QTextDocument *document)
{
    MarkupGenerator gen(builder);
    gen.processDocument(document);
    setPlainText(builder->result());
}

} // end of namespace Core
