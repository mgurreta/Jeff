//
//  NSDate+Holidays.h
//  RoboKit
//
//  Created by Stephen Gazzard on 11/8/2013.
//
//  Copyright (c) 2012 Robots and Pencils, Inc. All rights reserved.
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//
//  "RoboKit" is a trademark of Robots and Pencils, Inc. and may not be used to endorse or promote products derived from this software without specific prior written permission.
//
//  Neither the name of the Robots and Pencils, Inc. nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
//
//  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

typedef NS_ENUM(NSUInteger, RBKDayOfWeek) {
    RBKDayOfWeekSunday = 1,
    RBKDayOfWeekMonday,
    RBKDayOfWeekTuesday,
    RBKDayOfWeekWednesday,
    RBKDayOfWeekThursday,
    RBKDayOfWeekFriday,
    RBKDayOfWeekSaturday
};

typedef NS_ENUM(NSUInteger, RBKMonth) {
    RBKMonthJanuary = 1,
    RBKMonthFebruary,
    RBKMonthMarch,
    RBKMonthApril,
    RBKMonthMay,
    RBKMonthJune,
    RBKMonthJuly,
    RBKMonthAugust,
    RBKMonthSeptember,
    RBKMonthOctober,
    RBKMonthNovember,
    RBKMonthDecember
};

@interface NSDate (Holidays)

+ (NSArray*)holidayComponentsForYear:(NSInteger)year calendar:(NSCalendar*)calendar;

+ (NSDateComponents*)newYearsComponentsForYear:(NSInteger)year;
+ (NSDateComponents*)easterSundayComponentsForYear:(NSInteger)year;
+ (NSDateComponents*)goodFridayComponentsForYear:(NSInteger)year calendar:(NSCalendar*)calendar;
+ (NSDateComponents*)victoriaDayDateComponentsForYear:(NSInteger)year calendar:(NSCalendar*)calendar;
+ (NSDateComponents*)canadaDayComponentsForYear:(NSInteger)year;
+ (NSDateComponents*)labourDayDateComponentsForYear:(NSInteger)year calendar:(NSCalendar*)calendar;
+ (NSDateComponents*)thanksgivingDateComponentsForYear:(NSInteger)year calendar:(NSCalendar*)calendar;
+ (NSDateComponents*)remembranceDayDateComponentsForYear:(NSInteger)year;
+ (NSDateComponents*)christmasDateComponentsForYear:(NSInteger)year;
+ (NSDateComponents*)boxingDayDateComponentsForYear:(NSInteger)year;

- (NSDate*)nextNonWeekendDayInCalendar:(NSCalendar*)calendar;
- (NSDate*)nextNonHolidayDayInCalendar:(NSCalendar*)calendar;
- (NSDate*)nextNonWeekendOrHolidayInCalendar:(NSCalendar*)calendar;

@end