/*
 * CGTKDialog.h
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
#import "CoreGTK/CGTKWindow.h"

@interface CGTKDialog : CGTKWindow
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkDialog*)DIALOG;

-(void)addButtons:(NSDictionary *)buttonTextDict;

-(id)initWithTitle:(NSString *)title andParent:(CGTKWindow *)parent andFlags:(GtkDialogFlags)flags andButtonTextResponseDictionary:(NSDictionary *)buttonTextDict;

/**
 * -(void*)addActionWidgetWithChild:(CGTKWidget*) child andResponseId:(gint) responseId;
 *
 * @param child
 * @param responseId
 */
-(void)addActionWidgetWithChild:(CGTKWidget*) child andResponseId:(gint) responseId;

/**
 * -(CGTKWidget**)addButtonWithButtonText:(NSString*) buttonText andResponseId:(gint) responseId;
 *
 * @param buttonText
 * @param responseId
 * @returns CGTKWidget*
 */
-(CGTKWidget*)addButtonWithButtonText:(NSString*) buttonText andResponseId:(gint) responseId;

/**
 * -(CGTKWidget**)getActionArea;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getActionArea;

/**
 * -(CGTKWidget**)getContentArea;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getContentArea;

/**
 * -(CGTKWidget**)getHeaderBar;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getHeaderBar;

/**
 * -(gint*)getResponseForWidget:(CGTKWidget*) widget;
 *
 * @param widget
 * @returns gint
 */
-(gint)getResponseForWidget:(CGTKWidget*) widget;

/**
 * -(CGTKWidget**)getWidgetForResponse:(gint) responseId;
 *
 * @param responseId
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getWidgetForResponse:(gint) responseId;

/**
 * -(void*)response:(gint) responseId;
 *
 * @param responseId
 */
-(void)response:(gint) responseId;

/**
 * -(gint*)run;
 *
 * @returns gint
 */
-(gint)run;

/**
 * -(void*)setAlternativeButtonOrderFromArrayWithNparams:(gint) nparams andNewOrder:(gint*) newOrder;
 *
 * @param nparams
 * @param newOrder
 */
-(void)setAlternativeButtonOrderFromArrayWithNparams:(gint) nparams andNewOrder:(gint*) newOrder;

/**
 * -(void*)setDefaultResponse:(gint) responseId;
 *
 * @param responseId
 */
-(void)setDefaultResponse:(gint) responseId;

/**
 * -(void*)setResponseSensitiveWithResponseId:(gint) responseId andSetting:(BOOL) setting;
 *
 * @param responseId
 * @param setting
 */
-(void)setResponseSensitiveWithResponseId:(gint) responseId andSetting:(BOOL) setting;

@end