#pragma once
/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */


#include "IFileDirectory.h"

namespace XFILE
{
  class CRarDirectory : public IFileDirectory
  {
  public:
    CRarDirectory();
    ~CRarDirectory();
    virtual bool GetDirectory(const CURL& url, CFileItemList& items);
    virtual bool ContainsFiles(const CURL& url);
    virtual bool Exists(const CURL& url);
    virtual DIR_CACHE_TYPE GetCacheType(const CURL& url) const { return DIR_CACHE_ALWAYS; };
  };
}