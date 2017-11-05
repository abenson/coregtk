/*
 * CGTKRange.m
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
#import "CoreGTK/CGTKRange.h"

@implementation CGTKRange

-(GtkRange*)RANGE
{
	return GTK_RANGE([self GOBJECT]);
}

-(GtkAdjustment*)getAdjustment
{
	return gtk_range_get_adjustment(GTK_RANGE([self GOBJECT]));
}

-(gdouble)getFillLevel
{
	return gtk_range_get_fill_level(GTK_RANGE([self GOBJECT]));
}

-(BOOL)getFlippable
{
	return (gtk_range_get_flippable(GTK_RANGE([self GOBJECT])) ? YES : NO);
}

-(BOOL)getInverted
{
	return (gtk_range_get_inverted(GTK_RANGE([self GOBJECT])) ? YES : NO);
}

-(GtkSensitivityType)getLowerStepperSensitivity
{
	return gtk_range_get_lower_stepper_sensitivity(GTK_RANGE([self GOBJECT]));
}

-(gint)getMinSliderSize
{
	return gtk_range_get_min_slider_size(GTK_RANGE([self GOBJECT]));
}

-(void)getRangeRect:(GdkRectangle*) rangeRect
{
	gtk_range_get_range_rect(GTK_RANGE([self GOBJECT]), rangeRect);
}

-(BOOL)getRestrictToFillLevel
{
	return (gtk_range_get_restrict_to_fill_level(GTK_RANGE([self GOBJECT])) ? YES : NO);
}

-(gint)getRoundDigits
{
	return gtk_range_get_round_digits(GTK_RANGE([self GOBJECT]));
}

-(BOOL)getShowFillLevel
{
	return (gtk_range_get_show_fill_level(GTK_RANGE([self GOBJECT])) ? YES : NO);
}

-(void)getSliderRangeWithSliderStart:(gint*) sliderStart andSliderEnd:(gint*) sliderEnd
{
	gtk_range_get_slider_range(GTK_RANGE([self GOBJECT]), sliderStart, sliderEnd);
}

-(BOOL)getSliderSizeFixed
{
	return (gtk_range_get_slider_size_fixed(GTK_RANGE([self GOBJECT])) ? YES : NO);
}

-(GtkSensitivityType)getUpperStepperSensitivity
{
	return gtk_range_get_upper_stepper_sensitivity(GTK_RANGE([self GOBJECT]));
}

-(gdouble)getValue
{
	return gtk_range_get_value(GTK_RANGE([self GOBJECT]));
}

-(void)setAdjustment:(GtkAdjustment*) adjustment
{
	gtk_range_set_adjustment(GTK_RANGE([self GOBJECT]), adjustment);
}

-(void)setFillLevel:(gdouble) fillLevel
{
	gtk_range_set_fill_level(GTK_RANGE([self GOBJECT]), fillLevel);
}

-(void)setFlippable:(BOOL) flippable
{
	gtk_range_set_flippable(GTK_RANGE([self GOBJECT]), (flippable ? TRUE : FALSE));
}

-(void)setIncrementsWithStep:(gdouble) step andPage:(gdouble) page
{
	gtk_range_set_increments(GTK_RANGE([self GOBJECT]), step, page);
}

-(void)setInverted:(BOOL) setting
{
	gtk_range_set_inverted(GTK_RANGE([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setLowerStepperSensitivity:(GtkSensitivityType) sensitivity
{
	gtk_range_set_lower_stepper_sensitivity(GTK_RANGE([self GOBJECT]), sensitivity);
}

-(void)setMinSliderSize:(gint) minSize
{
	gtk_range_set_min_slider_size(GTK_RANGE([self GOBJECT]), minSize);
}

-(void)setRangeWithMin:(gdouble) min andMax:(gdouble) max
{
	gtk_range_set_range(GTK_RANGE([self GOBJECT]), min, max);
}

-(void)setRestrictToFillLevel:(BOOL) restrictToFillLevel
{
	gtk_range_set_restrict_to_fill_level(GTK_RANGE([self GOBJECT]), (restrictToFillLevel ? TRUE : FALSE));
}

-(void)setRoundDigits:(gint) roundDigits
{
	gtk_range_set_round_digits(GTK_RANGE([self GOBJECT]), roundDigits);
}

-(void)setShowFillLevel:(BOOL) showFillLevel
{
	gtk_range_set_show_fill_level(GTK_RANGE([self GOBJECT]), (showFillLevel ? TRUE : FALSE));
}

-(void)setSliderSizeFixed:(BOOL) sizeFixed
{
	gtk_range_set_slider_size_fixed(GTK_RANGE([self GOBJECT]), (sizeFixed ? TRUE : FALSE));
}

-(void)setUpperStepperSensitivity:(GtkSensitivityType) sensitivity
{
	gtk_range_set_upper_stepper_sensitivity(GTK_RANGE([self GOBJECT]), sensitivity);
}

-(void)setValue:(gdouble) value
{
	gtk_range_set_value(GTK_RANGE([self GOBJECT]), value);
}


@end