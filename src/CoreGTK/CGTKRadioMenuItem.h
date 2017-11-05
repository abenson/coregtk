/*
 * CGTKRadioMenuItem.h
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
#import "CoreGTK/CGTKCheckMenuItem.h"

@interface CGTKRadioMenuItem : CGTKCheckMenuItem
{

}


/**
 * Constructors
 */
-(id)init:(GSList*) group;
-(id)initFromWidget:(GtkRadioMenuItem*) group;
-(id)initWithLabelWithGroup:(GSList*) group andLabel:(NSString*) label;
-(id)initWithLabelFromWidgetWithGroup:(GtkRadioMenuItem*) group andLabel:(NSString*) label;
-(id)initWithMnemonicWithGroup:(GSList*) group andLabel:(NSString*) label;
-(id)initWithMnemonicFromWidgetWithGroup:(GtkRadioMenuItem*) group andLabel:(NSString*) label;

/**
 * Methods
 */

-(GtkRadioMenuItem*)RADIOMENUITEM;

/**
 * -(GSList**)getGroup;
 *
 * @returns GSList*
 */
-(GSList*)getGroup;

/**
 * -(void*)joinGroup:(GtkRadioMenuItem*) groupSource;
 *
 * @param groupSource
 */
-(void)joinGroup:(GtkRadioMenuItem*) groupSource;

/**
 * -(void*)setGroup:(GSList*) group;
 *
 * @param group
 */
-(void)setGroup:(GSList*) group;

@end