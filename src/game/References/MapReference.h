/**
 * MaNGOS is a full featured server for World of Warcraft, supporting
 * the following clients: 1.12.x, 2.4.3, 3.3.5a, 4.3.4a and 5.4.8
 *
 * Copyright (C) 2005-2015  MaNGOS project <http://getmangos.eu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * World of Warcraft, and all World of Warcraft or Warcraft art, images,
 * and lore are copyrighted by Blizzard Entertainment, Inc.
 */

#ifndef _MAPREFERENCE_H
#define _MAPREFERENCE_H

#include "Utilities/LinkedReference/Reference.h"
#include "Map.h"

class  MapReference : public Reference<Map, Player>
{
    protected:
        void targetObjectBuildLink() override
        {
            // called from link()
            getTarget()->m_mapRefManager.insertFirst(this);
            getTarget()->m_mapRefManager.incSize();
        }
        void targetObjectDestroyLink() override
        {
            // called from unlink()
            if (isValid()) getTarget()->m_mapRefManager.decSize();
        }
        void sourceObjectDestroyLink() override
        {
            // called from invalidate()
            getTarget()->m_mapRefManager.decSize();
        }
    public:
        MapReference() : Reference<Map, Player>() {}
        ~MapReference() { unlink(); }
        MapReference* next() { return (MapReference*)Reference<Map, Player>::next(); }
        MapReference const* next() const { return (MapReference const*)Reference<Map, Player>::next(); }
        MapReference* nockeck_prev() { return (MapReference*)Reference<Map, Player>::nocheck_prev(); }
        MapReference const* nocheck_prev() const { return (MapReference const*)Reference<Map, Player>::nocheck_prev(); }
};
#endif