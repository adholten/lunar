/* Copyright (C) 2018, Project Pluto

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301, USA. */

void avoid_runaway_process( const int max_time_to_run);   /* cgi_func.c */
int get_urlencoded_form_data( const char **idata,       /* cgi_func.c */
                              char *field, const size_t max_field,
                              char *buff, const size_t max_buff);
int get_multipart_form_data( const char *boundary, char *field,
                char *buff, char *filename, const size_t max_len);
