/*
 * CGTKMessageDialog.m
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
#import "CoreGTK/CGTKMessageDialog.h"

@implementation CGTKMessageDialog

-(id)initWithParent:(CGTKWindow *)parent andFlags:(GtkDialogFlags)flags andType:(GtkMessageType)type andButtons:(GtkButtonsType)buttons andMarkup:(NSString *)markup
{
	self = [super initWithGObject:(GObject *)gtk_message_dialog_new_with_markup([parent WINDOW], flags, type, buttons, [markup UTF8String], NULL)];

	if(self)
	{
		// Do nothing
	}

	return self;
}

-(void)formatSecondaryText:(NSString *)message
{
	gtk_message_dialog_format_secondary_text([self MESSAGEDIALOG], [message UTF8String], NULL);
}

-(void)formatSecondaryMarkup:(NSString *)markup
{
	gtk_message_dialog_format_secondary_markup([self MESSAGEDIALOG], [markup UTF8String], NULL);
}

-(id)initWithParent:(CGTKWindow *)parent andFlags:(GtkDialogFlags)flags andType:(GtkMessageType)type andButtons:(GtkButtonsType)buttons andMessage:(NSString *)message
{
	self = [super initWithGObject:(GObject *)gtk_message_dialog_new([parent WINDOW], flags, type, buttons, [message UTF8String], NULL)];

	if(self)
	{
		// Do nothing
	}

	return self;
}

-(GtkMessageDialog*)MESSAGEDIALOG
{
	return GTK_MESSAGE_DIALOG([self GOBJECT]);
}

-(CGTKWidget*)getImage
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_message_dialog_get_image(GTK_MESSAGE_DIALOG([self GOBJECT]))];
}

-(CGTKWidget*)getMessageArea
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_message_dialog_get_message_area(GTK_MESSAGE_DIALOG([self GOBJECT]))];
}

-(void)setImage:(CGTKWidget*) image
{
	gtk_message_dialog_set_image(GTK_MESSAGE_DIALOG([self GOBJECT]), [image WIDGET]);
}

-(void)setMarkup:(NSString*) str
{
	gtk_message_dialog_set_markup(GTK_MESSAGE_DIALOG([self GOBJECT]), [str UTF8String]);
}


@end