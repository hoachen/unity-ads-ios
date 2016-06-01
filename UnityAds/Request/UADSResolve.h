

@interface UADSResolve : NSObject

@property (nonatomic, strong) NSString *hostName;
@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSCondition *blockCondition;
@property (nonatomic, strong) NSString *error;
@property (nonatomic, strong) NSString *errorMessage;

- (instancetype)initWithHostName:(NSString *)hostName;
- (void)resolve;

@end