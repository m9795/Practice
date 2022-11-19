// Objective-C
#import <Foundation/Foundation.h>
#import <stdlib.h>

// MyObjectクラスの宣言
@interface MyObject : NSObject
{
}
+ (int)calc:(int)x and:(int)y;
@end

// MyObjectクラスの実装
@implementation MyObject

// calc:and:メソッドの実装
+ (int)calc:(int)x and:(int)y
{
    // 引数「x」と引数「y」をかけて、絶対値を返す
    return abs(x * y);
}

@end

// main関数の実装
int main(int argc, char *argv[])
{
    NSLog(@"%d", [MyObject calc:-1 and:1]);
    NSLog(@"%d", [MyObject calc:-2 and:-2]);
    return 0;
}
