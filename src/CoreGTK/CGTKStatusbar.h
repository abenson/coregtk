/*
 * CGTKStatusbar.h
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

@interface CGTKStatusbar : CGTKBox
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkStatusbar*)STATUSBAR;

/**
 * -(guint*)getContextId:(NSString*) contextDescription;
 *
 * @param contextDescription
 * @returns guint
 */
-(guint)getContextId:(NSString*) contextDescription;

/**
 * -(CGTKWidget**)getMessageArea;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getMessageArea;

/**
 * -(void*)pop:(guint) contextId;
 *
 * @param contextId
 */
-(void)pop:(guint) contextId;

/**
 * -(guint*)pushWithContextId:(guint) contextId andText:(NSString*) text;
 *
 * @param contextId
 * @param text
 * @returns guint
 */
-(guint)pushWithContextId:(guint) contextId andText:(NSString*) text;

/**
 * -(void*)removeWithContextId:(guint) contextId andMessageId:(guint) messageId;
 *
 * @param contextId
 * @param messageId
 */
-(void)removeWithContextId:(guint) contextId andMessageId:(guint) messageId;

/**
 * -(void*)removeAll:(guint) contextId;
 *
 * @param contextId
 */
-(void)removeAll:(guint) contextId;

@end