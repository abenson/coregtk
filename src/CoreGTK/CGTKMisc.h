/*
 * CGTKMisc.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2017 - Tyler Burton
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*
 * Modified by the CoreGTK Team, 2017. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWidget.h"

@interface CGTKMisc : CGTKWidget
{

}


/**
 * Methods
 */

-(GtkMisc*)MISC;

/**
 * -(void*)getAlignmentWithXalign:(gfloat*) xalign andYalign:(gfloat*) yalign;
 *
 * @param xalign
 * @param yalign
 */
-(void)getAlignmentWithXalign:(gfloat*) xalign andYalign:(gfloat*) yalign;

/**
 * -(void*)getPaddingWithXpad:(gint*) xpad andYpad:(gint*) ypad;
 *
 * @param xpad
 * @param ypad
 */
-(void)getPaddingWithXpad:(gint*) xpad andYpad:(gint*) ypad;

/**
 * -(void*)setAlignmentWithXalign:(gfloat) xalign andYalign:(gfloat) yalign;
 *
 * @param xalign
 * @param yalign
 */
-(void)setAlignmentWithXalign:(gfloat) xalign andYalign:(gfloat) yalign;

/**
 * -(void*)setPaddingWithXpad:(gint) xpad andYpad:(gint) ypad;
 *
 * @param xpad
 * @param ypad
 */
-(void)setPaddingWithXpad:(gint) xpad andYpad:(gint) ypad;

@end