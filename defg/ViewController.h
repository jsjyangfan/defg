//
//  ViewController.h
//  defg
//
//  Created by hr on 14-6-24.
//  Copyright (c) 2014年 hr. All rights reserved.
//

#import <UIKit/UIKit.h>

#define MONTH_COUNTS_IN_YEAR_GRE 12//公历每年的月份的个数
#define DAY_COUNTS_IN_YEAR__GRE 31//公历每月的最多的天数
#define CALENDAR_UNIT_FLAGS (NSEraCalendarUnit | NSYearCalendarUnit | NSMonthCalendarUnit | NSDayCalendarUnit | NSHourCalendarUnit | NSMinuteCalendarUnit | NSSecondCalendarUnit | NSWeekdayCalendarUnit)//从日期中获取的字段列表


@interface ViewController : UIViewController<UIPickerViewDataSource,UIPickerViewDelegate>
{

    NSUInteger yearStart;//日历的年份起始值
    NSUInteger yearEnd;//日历的年份结束值
    NSCalendar *greCal;//系统的日历类
    NSString *era;//年代
    NSString *year;//年份
    NSString *month;//月份
    NSString *day;//日期
    NSString *weekday;//星期
    NSArray *weekdays;//星期的数据
}

@property (retain, nonatomic) IBOutlet UILabel *textLabel;

//字体大小数组
@property(nonatomic,retain) NSArray *fontArray;

//字体颜色数组
@property(nonatomic,retain) NSArray *colorArray;


//字体大小数组
@property (nonatomic, retain)NSArray *sizeArray;



@property (nonatomic, assign) NSUInteger yearStart;
@property (nonatomic, assign) NSUInteger yearEnd;
@property (nonatomic, retain) NSCalendar *greCal;
@property (nonatomic, copy) NSString * era;
@property (nonatomic, copy) NSString * year;
@property (nonatomic, copy) NSString * month;
@property (nonatomic, copy) NSString * day;
@property (nonatomic, copy) NSString * weekday;
//星期数组
@property (nonatomic, retain) NSArray * weekdays;

- (id)initWithYearStart:(NSUInteger)start end:(NSUInteger)end;

//计算指定范围yearStart - yearEnd的年份数据
- (NSMutableArray *)yearsInRange;
//计算指定年份的月份数据
- (NSMutableArray *)monthsInYear:(NSUInteger)_year;
//计算指定月份的日期数据
- (NSMutableArray *)daysInMonth:(NSString *)_month year:(NSUInteger)_year;
@end
