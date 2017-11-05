/*
 * CGTKAppChooserButton.h
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
#import "CoreGTK/CGTKComboBox.h"

@interface CGTKAppChooserButton : CGTKComboBox
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) contentType;

/**
 * Methods
 */

-(GtkAppChooserButton*)APPCHOOSERBUTTON;

/**
 * -(void*)appendCustomItemWithName:(NSString*) name andLabel:(NSString*) label andIcon:(GIcon*) icon;
 *
 * @param name
 * @param label
 * @param icon
 */
-(void)appendCustomItemWithName:(NSString*) name andLabel:(NSString*) label andIcon:(GIcon*) icon;

/**
 * -(void*)appendSeparator;
 *
 */
-(void)appendSeparator;

/**
 * -(NSString**)getHeading;
 *
 * @returns NSString*
 */
-(NSString*)getHeading;

/**
 * -(BOOL*)getShowDefaultItem;
 *
 * @returns BOOL
 */
-(BOOL)getShowDefaultItem;

/**
 * -(BOOL*)getShowDialogItem;
 *
 * @returns BOOL
 */
-(BOOL)getShowDialogItem;

/**
 * -(void*)setActiveCustomItem:(NSString*) name;
 *
 * @param name
 */
-(void)setActiveCustomItem:(NSString*) name;

/**
 * -(void*)setHeading:(NSString*) heading;
 *
 * @param heading
 */
-(void)setHeading:(NSString*) heading;

/**
 * -(void*)setShowDefaultItem:(BOOL) setting;
 *
 * @param setting
 */
-(void)setShowDefaultItem:(BOOL) setting;

/**
 * -(void*)setShowDialogItem:(BOOL) setting;
 *
 * @param setting
 */
-(void)setShowDialogItem:(BOOL) setting;

@end