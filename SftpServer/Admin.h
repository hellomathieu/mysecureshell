
/*
MySecureShell permit to add restriction to modified sftp-server
when using MySecureShell as shell.
Copyright (C) 2007-2014 MySecureShell Team

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation (version 2)

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifdef MSS_HAVE_ADMIN
#ifndef _ADMIN_H_
#define _ADMIN_H_

void	DoAdminListUsers();
void	DoAdminKillUser();
void	DoAdminServerStatus();
void	DoAdminServerGetStatus();
void	DoAdminGetLogContent();
void	DoAdminConfigGet();
void	DoAdminConfigSet();
void	DoAdminUserCreate();
void	DoAdminUserDelete();
void	DoAdminUserList();
void	DoAdminStats(tStats *stats);

#endif //_ADMIN_H_
#endif //MSS_HAVE_ADMIN
