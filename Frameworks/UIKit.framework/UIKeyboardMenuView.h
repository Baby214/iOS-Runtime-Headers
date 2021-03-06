/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardMenuView : UIView <UIDimmingViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIKeyboardLayoutStar * _layout;
    UIKBTree * _referenceKey;
    BOOL  _usesDarkTheme;
    BOOL  _usesStraightLeftEdge;
    UIKBKeyView * m_backgroundKeyView;
    UIDimmingView * m_dimmingView;
    unsigned int  m_firstVisibleRow;
    UIView * m_inputView;
    int  m_mode;
    struct CGPoint { 
        float x; 
        float y; 
    }  m_point;
    float  m_pointerOffset;
    struct CGPoint { 
        float x; 
        float y; 
    }  m_referenceLocation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  m_referenceRect;
    int  m_scrollDirection;
    double  m_scrollStartTime;
    NSTimer * m_scrollTimer;
    BOOL  m_scrollable;
    BOOL  m_scrolling;
    UIInputSwitcherSelectionExtraView * m_selExtraView;
    UIInputSwitcherShadowView * m_shadowView;
    BOOL  m_shouldFade;
    _UIFeedbackRetargetBehavior * m_slideBehavior;
    BOOL  m_startAutoscroll;
    UIInputSwitcherTableView * m_table;
    double  m_timeDismissed;
    unsigned int  m_visibleRows;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) UIKeyboardLayoutStar *layout;
@property (nonatomic) int mode;
@property (nonatomic) UIKBTree *referenceKey;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesDarkTheme;
@property (nonatomic) BOOL usesStraightLeftEdge;
@property (readonly) BOOL usesTable;

- (void)_delayedFade;
- (int)_internationalKeyRoundedCornerInLayout:(id)arg1;
- (void)applicationWillSuspend:(id)arg1;
- (id)assistantSwitch;
- (void)autoscrollTimerFired:(id)arg1;
- (BOOL)centerPopUpOverKey;
- (id)containerView;
- (void)dealloc;
- (unsigned int)defaultSelectedIndex;
- (void)didSelectItemAtIndex:(unsigned int)arg1;
- (id)dimmingView;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)endScrolling:(id)arg1;
- (void)fade;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)fadeWithDelay:(double)arg1;
- (id)floatingSwitch;
- (id)font;
- (id)fontForItemAtIndex:(unsigned int)arg1;
- (void)hide;
- (void)highlightRow:(unsigned int)arg1;
- (unsigned int)indexForIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputView;
- (void)insertSelExtraView;
- (BOOL)isVisible;
- (id)layout;
- (id)localizedTitleForItemAtIndex:(unsigned int)arg1;
- (id)maskForShadowViewBlurredBackground;
- (float)minYOfLastTableCellForSelectionExtraView;
- (int)mode;
- (unsigned int)numberOfItems;
- (void)performShowAnimation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })popupRect;
- (id)predictiveSwitch;
- (struct CGSize { float x1; float x2; })preferredSize;
- (id)referenceKey;
- (void)removeFromSuperview;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(BOOL)arg2;
- (void)setKeyboardDimmed:(BOOL)arg1;
- (void)setLayout:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayForCell:(id)arg1;
- (void)setNeedsDisplayForTopBottomCells;
- (void)setReferenceKey:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setUsesDarkTheme:(BOOL)arg1;
- (void)setUsesStraightLeftEdge:(BOOL)arg1;
- (void)setupBackgroundKeyViewWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setupShadowViewWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)show;
- (void)showAsHUD;
- (void)showAsHUDFromLocation:(struct CGPoint { float x1; float x2; })arg1 withInputView:(id)arg2 touchBegan:(double)arg3;
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;
- (void)stopAnyAutoscrolling;
- (id)subtitleFont;
- (id)subtitleFontForItemAtIndex:(unsigned int)arg1;
- (id)subtitleForItemAtIndex:(unsigned int)arg1;
- (id)switches;
- (id)table;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)titleForItemAtIndex:(unsigned int)arg1;
- (void)toggleKeyboardAssistantPreference;
- (void)toggleKeyboardFloatingPreference;
- (void)toggleKeyboardPredictionPreference;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)usesDarkTheme;
- (BOOL)usesDimmingView;
- (BOOL)usesShadowView;
- (BOOL)usesStraightLeftEdge;
- (BOOL)usesTable;

@end
