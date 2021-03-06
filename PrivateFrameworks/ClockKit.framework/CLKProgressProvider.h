/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKProgressProvider : NSObject <NSCopying, NSSecureCoding> {
    float  _backgroundRingAlpha;
    BOOL  _finalized;
    unsigned int  _nextUpdateToken;
    BOOL  _paused;
    struct NSNumber { Class x1; } * _timerToken;
    UIColor * _tintColor;
    NSMutableDictionary * _updateHandlersByToken;
}

@property float backgroundRingAlpha;
@property (nonatomic) BOOL paused;
@property (nonatomic, retain) UIColor *tintColor;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (void)_commonInit;
- (void)_maybeStartOrStopUpdates;
- (BOOL)_needsUpdates;
- (float)_progressFractionForNow:(id)arg1;
- (void)_update;
- (void)_validate;
- (float)backgroundRingAlpha;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)paused;
- (float)progressFractionForNow:(id)arg1;
- (void)setBackgroundRingAlpha:(float)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (struct NSNumber { Class x1; }*)startUpdatesWithHandler:(id /* block */)arg1;
- (void)stopUpdatesForToken:(struct NSNumber { Class x1; }*)arg1;
- (int)timeTravelUpdateFrequency;
- (id)tintColor;
- (void)validate;

@end
