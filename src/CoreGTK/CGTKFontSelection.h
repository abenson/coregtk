/*
 * CGTKFontSelection.h
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
#import "CoreGTK/CGTKBox.h"

@interface CGTKFontSelection : CGTKBox
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkFontSelection*)FONTSELECTION;

/**
 * -(PangoFontFace**)getFace;
 *
 * @returns PangoFontFace*
 */
-(PangoFontFace*)getFace;

/**
 * -(CGTKWidget**)getFaceList;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getFaceList;

/**
 * -(PangoFontFamily**)getFamily;
 *
 * @returns PangoFontFamily*
 */
-(PangoFontFamily*)getFamily;

/**
 * -(CGTKWidget**)getFamilyList;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getFamilyList;

/**
 * -(NSString**)getFontName;
 *
 * @returns NSString*
 */
-(NSString*)getFontName;

/**
 * -(CGTKWidget**)getPreviewEntry;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getPreviewEntry;

/**
 * -(NSString**)getPreviewText;
 *
 * @returns NSString*
 */
-(NSString*)getPreviewText;

/**
 * -(gint*)getSize;
 *
 * @returns gint
 */
-(gint)getSize;

/**
 * -(CGTKWidget**)getSizeEntry;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getSizeEntry;

/**
 * -(CGTKWidget**)getSizeList;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getSizeList;

/**
 * -(BOOL*)setFontName:(NSString*) fontname;
 *
 * @param fontname
 * @returns BOOL
 */
-(BOOL)setFontName:(NSString*) fontname;

/**
 * -(void*)setPreviewText:(NSString*) text;
 *
 * @param text
 */
-(void)setPreviewText:(NSString*) text;

@end