// Generated by Apple Swift version 3.0.1 (swiftlang-800.0.58.6 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
@import CoreImage;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC7Added_211AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UITextFieldDelegate;
@class UIFont;
@class UIColor;
@class NSCoder;
@class UIButton;
@class UIImage;
@protocol AutoCompleteTextFieldDelegate;

SWIFT_CLASS("_TtC7Added_221AutoCompleteTextField")
@interface AutoCompleteTextField : UITextField
@property (nonatomic, weak) IBOutlet id _Null_unspecified dataSource;
/**
  AutoCompleteTextField delegate
*/
@property (nonatomic, weak) id <AutoCompleteTextFieldDelegate> _Null_unspecified autoCompleteTextFieldDelegate;
@property (nonatomic, weak) id <UITextFieldDelegate> _Nullable delegate;
/**
  Auto completion flag
*/
@property (nonatomic) BOOL autoCompleteDisabled;
/**
  Case search
*/
@property (nonatomic) BOOL ignoreCase;
/**
  Randomize suggestion flag. Default to ``false, will always use first found suggestion
*/
@property (nonatomic) BOOL isRandomSuggestion;
/**
  Supported domain names
*/
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NSString *> * _Nonnull domainNames;)
+ (NSArray<NSString *> * _Nonnull)domainNames;
/**
  Text font settings
*/
@property (nonatomic, strong) UIFont * _Nullable font;
@property (nonatomic, strong) UIColor * _Nullable textColor;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)autoCompleteButtonDidTapped:(UIButton * _Nonnull)sender;
- (void)autoCompleteTextFieldDidChanged:(UITextField * _Nonnull)textField;
/**
  Set delimiter. Will perform search if delimiter is found
*/
- (void)setDelimiter:(NSString * _Nonnull)delimiterString;
/**
  Show completion button with custom image
*/
- (void)showAutoCompleteButton:(UIImage * _Nullable)buttonImage autoCompleteButtonViewMode:(UITextFieldViewMode)autoCompleteButtonViewMode;
/**
  Force text completion event
*/
- (void)forceRefreshAutocompleteText;
@end


@interface AutoCompleteTextField (SWIFT_EXTENSION(Added_2)) <UITextFieldDelegate>
- (BOOL)textFieldShouldBeginEditing:(UITextField * _Nonnull)textField;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldEndEditing:(UITextField * _Nonnull)textField;
- (void)textFieldDidEndEditing:(UITextField * _Nonnull)textField;
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string;
- (BOOL)textFieldShouldClear:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
@end


SWIFT_PROTOCOL("_TtP7Added_229AutoCompleteTextFieldDelegate_")
@protocol AutoCompleteTextFieldDelegate <UITextFieldDelegate>
@optional
- (BOOL)textFieldShouldBeginEditing:(UITextField * _Nonnull)textField;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldEndEditing:(UITextField * _Nonnull)textField;
- (void)textFieldDidEndEditing:(UITextField * _Nonnull)textField;
- (BOOL)textField:(UITextField * _Nonnull)textField changeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string;
- (BOOL)textFieldShouldClear:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
@end


@interface CIColor (SWIFT_EXTENSION(Added_2))
/**
  Creates a CIColor from an rgba string
  E.g.
  \code
  aaa
  \endcode
  \code
  ff00
  \endcode
  \code
  bb00ff
  \endcode
  \code
  aabbccff
  \endcode
  \param rgba The hex string to parse in rgba format

*/
- (nonnull instancetype)initWithRgba:(NSString * _Nonnull)rgba;
@end


@interface CIImage (SWIFT_EXTENSION(Added_2))
@end

@class SAConfettiView;
@class AVCaptureSession;
@class AVCaptureDevice;
@class NSBundle;

SWIFT_CLASS("_TtC7Added_220CameraViewController")
@interface CameraViewController : UIViewController
@property (nonatomic, readonly, strong) SAConfettiView * _Nonnull confettiView;
@property (nonatomic, readonly, strong) AVCaptureSession * _Nonnull captureSession;
@property (nonatomic, strong) AVCaptureDevice * _Nullable captureDevice;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified closeCameraButton;
- (void)viewDidLoad;
- (void)startCameraSession;
- (void)didMoveToParentViewController:(UIViewController * _Nullable)parent;
- (void)beginSession;
- (IBAction)didPressCloseButton;
- (void)setupConfetti;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionView;
@class CardLayoutAttributes;
@class UIPanGestureRecognizer;
@class UICollectionViewLayoutAttributes;

SWIFT_CLASS("_TtC7Added_28CardCell")
@interface CardCell : UICollectionViewCell
@property (nonatomic, strong) UICollectionView * _Null_unspecified collectionV;
@property (nonatomic, copy) void (^ _Nullable reloadBlock)(void);
@property (nonatomic, strong) CardLayoutAttributes * _Nullable customCardLayout;
@property (nonatomic) CGFloat originTouchY;
@property (nonatomic, strong) UIPanGestureRecognizer * _Nullable pangesture;
- (void)panWithRec:(UIPanGestureRecognizer * _Nonnull)rec;
- (void)awakeFromNib;
- (void)applyLayoutAttributes:(UICollectionViewLayoutAttributes * _Nonnull)layoutAttributes;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIGestureRecognizer;

@interface CardCell (SWIFT_EXTENSION(Added_2)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer;
@end


SWIFT_CLASS("_TtC7Added_220CardLayoutAttributes")
@interface CardLayoutAttributes : UICollectionViewLayoutAttributes
@property (nonatomic) BOOL isExpand;
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UINib;

SWIFT_CLASS("_TtC7Added_28CardView")
@interface CardView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)setWithCards:(NSArray * _Nonnull)cards;
- (void)filterAllDataWithIsInclued:(BOOL (^ _Nonnull)(NSInteger, id _Nonnull))isInclued;
- (void)showAllData;
- (void)presentViewControllerTo:(UIViewController * _Nonnull)vc;
- (void)registerCardCellWithC:(Class _Nonnull)c nib:(UINib * _Nonnull)nib;
- (void)expandBottomCountWithCount:(NSInteger)count;
- (void)setCardTitleHeightWithHeihgt:(CGFloat)heihgt;
- (void)setCardHeightWithHeight:(CGFloat)height;
- (void)removeCardAt:(NSInteger)index;
- (void)removeSelectCard;
- (NSInteger)currentIdx;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


@interface CardView (SWIFT_EXTENSION(Added_2)) <UICollectionViewDelegate, UIScrollViewDelegate>
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@protocol UIViewControllerAnimatedTransitioning;

@interface CardView (SWIFT_EXTENSION(Added_2)) <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed;
@end


@interface CardView (SWIFT_EXTENSION(Added_2)) <UICollectionViewDataSource>
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class UICollectionViewUpdateItem;

SWIFT_CLASS("_TtC7Added_216CustomCardLayout")
@interface CustomCardLayout : UICollectionViewLayout
@property (nonatomic) NSInteger selectIdx;
@property (nonatomic) NSInteger bottomShowCount;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) CGFloat titleHeight;
@property (nonatomic) CGSize cellSize;
@property (nonatomic) CGSize collectionViewContentSize;
- (void)prepareLayout;
- (UICollectionViewLayoutAttributes * _Nullable)layoutAttributesForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (NSArray<UICollectionViewLayoutAttributes *> * _Nullable)layoutAttributesForElementsInRect:(CGRect)rect;
- (UICollectionViewLayoutAttributes * _Nullable)finalLayoutAttributesForDisappearingItemAtIndexPath:(NSIndexPath * _Nonnull)itemIndexPath;
- (UICollectionViewLayoutAttributes * _Nullable)initialLayoutAttributesForAppearingItemAtIndexPath:(NSIndexPath * _Nonnull)itemIndexPath SWIFT_METHOD_FAMILY(none);
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)newBounds;
- (void)prepareForCollectionViewUpdates:(NSArray<UICollectionViewUpdateItem *> * _Nonnull)updateItems;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIVisualEffectView;
@protocol UIViewControllerContextTransitioning;

SWIFT_CLASS("_TtC7Added_220CustomFlipTransition")
@interface CustomFlipTransition : NSObject <UIViewControllerAnimatedTransitioning>
@property (nonatomic) double duration;
@property (nonatomic, strong) UICollectionViewCell * _Null_unspecified cardView;
@property (nonatomic) CGRect originalCardFrame;
@property (nonatomic, strong) UIVisualEffectView * _Nonnull blurView;
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)transitionContext;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
- (nonnull instancetype)initWithDuration:(NSTimeInterval)duration;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UINavigationBar;
@class UIPageViewController;
@protocol EZSwipeControllerDataSource;

SWIFT_CLASS("_TtC7Added_217EZSwipeController")
@interface EZSwipeController : UIViewController
@property (nonatomic, copy) NSArray<UINavigationBar *> * _Nonnull stackNavBars;
@property (nonatomic, copy) NSArray<UIViewController *> * _Null_unspecified stackVC;
@property (nonatomic, copy) NSArray<UIViewController *> * _Null_unspecified stackPageVC;
@property (nonatomic) CGFloat bottomNavigationHeight;
@property (nonatomic, strong) UIPageViewController * _Null_unspecified pageViewController;
@property (nonatomic, strong) UIButton * _Nullable titleButton;
@property (nonatomic, strong) UIViewController * _Null_unspecified currentStackVC;
@property (nonatomic, readonly) NSInteger currentVCIndex;
@property (nonatomic, weak) id <EZSwipeControllerDataSource> _Nullable datasource;
@property (nonatomic) BOOL navigationBarShouldBeOnBottom;
@property (nonatomic) BOOL navigationBarShouldNotExist;
@property (nonatomic) BOOL cancelStandardButtonEvents;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)setupView;
- (void)setFrameForCurrentOrientation;
- (void)loadView;
- (void)viewDidLoad;
- (void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)moveToPage:(NSInteger)index animated:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface EZSwipeController (SWIFT_EXTENSION(Added_2)) <UIPageViewControllerDelegate>
- (void)pageViewController:(UIPageViewController * _Nonnull)pageViewController didFinishAnimating:(BOOL)finished previousViewControllers:(NSArray<UIViewController *> * _Nonnull)previousViewControllers transitionCompleted:(BOOL)completed;
@end


@interface EZSwipeController (SWIFT_EXTENSION(Added_2)) <UIPageViewControllerDataSource>
- (UIViewController * _Nullable)pageViewController:(UIPageViewController * _Nonnull)pageViewController viewControllerBeforeViewController:(UIViewController * _Nonnull)viewController;
- (UIViewController * _Nullable)pageViewController:(UIPageViewController * _Nonnull)pageViewController viewControllerAfterViewController:(UIViewController * _Nonnull)viewController;
@end


SWIFT_PROTOCOL("_TtP7Added_227EZSwipeControllerDataSource_")
@protocol EZSwipeControllerDataSource
- (NSArray<UIViewController *> * _Nonnull)viewControllerData;
@optional
- (NSInteger)indexOfStartingPage;
- (NSArray<NSString *> * _Nonnull)titlesForPages;
- (UINavigationBar * _Nonnull)navigationBarDataForPageIndex:(NSInteger)index;
- (BOOL)disableSwipingForLeftButtonAtPageIndex:(NSInteger)index;
- (BOOL)disableSwipingForRightButtonAtPageIndex:(NSInteger)index;
- (void)clickedLeftButtonFromPageIndex:(NSInteger)index;
- (void)clickedRightButtonFromPageIndex:(NSInteger)index;
- (void)changedToPageIndex:(NSInteger)index;
@end

@class ExpandingMenuItem;
@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC7Added_219ExpandingMenuButton")
@interface ExpandingMenuButton : UIView <UIGestureRecognizerDelegate>
@property (nonatomic) CGFloat menuItemMargin;
@property (nonatomic, strong) UIColor * _Nonnull bottomViewColor;
@property (nonatomic) CGFloat bottomViewAlpha;
@property (nonatomic) BOOL titleTappedActionEnabled;
@property (nonatomic, copy) void (^ _Nullable willPresentMenuItems)(ExpandingMenuButton * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable didPresentMenuItems)(ExpandingMenuButton * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable willDismissMenuItems)(ExpandingMenuButton * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable didDismissMenuItems)(ExpandingMenuButton * _Nonnull);
- (nonnull instancetype)initWithFrame:(CGRect)frame centerImage:(UIImage * _Nonnull)centerImage centerHighlightedImage:(UIImage * _Nonnull)centerHighlightedImage OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCenterImage:(UIImage * _Nonnull)centerImage centerHighlightedImage:(UIImage * _Nonnull)centerHighlightedImage;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)addMenuItems:(NSArray<ExpandingMenuItem *> * _Nonnull)menuItems;
- (void)menuItemTapped:(ExpandingMenuItem * _Nonnull)item;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC7Added_217ExpandingMenuItem")
@interface ExpandingMenuItem : UIView
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic) CGFloat titleMargin;
@property (nonatomic, strong) UIColor * _Nullable titleColor;
@property (nonatomic) BOOL titleTappedActionEnabled;
@property (nonatomic) NSInteger index;
@property (nonatomic, weak) ExpandingMenuButton * _Nullable delegate;
@property (nonatomic, readonly, strong) UIButton * _Nullable titleButton;
- (nonnull instancetype)initWithImage:(UIImage * _Nonnull)image highlightedImage:(UIImage * _Nonnull)highlightedImage backgroundImage:(UIImage * _Nullable)backgroundImage backgroundHighlightedImage:(UIImage * _Nullable)backgroundHighlightedImage itemTapped:(void (^ _Nullable)(void))itemTapped;
- (nonnull instancetype)initWithTitle:(NSString * _Nonnull)title titleColor:(UIColor * _Nullable)titleColor image:(UIImage * _Nonnull)image highlightedImage:(UIImage * _Nonnull)highlightedImage backgroundImage:(UIImage * _Nullable)backgroundImage backgroundHighlightedImage:(UIImage * _Nullable)backgroundHighlightedImage itemTapped:(void (^ _Nullable)(void))itemTapped;
- (nonnull instancetype)initWithSize:(CGSize)size image:(UIImage * _Nonnull)image highlightedImage:(UIImage * _Nonnull)highlightedImage backgroundImage:(UIImage * _Nullable)backgroundImage backgroundHighlightedImage:(UIImage * _Nullable)backgroundHighlightedImage itemTapped:(void (^ _Nullable)(void))itemTapped;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)tapped;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


/**
  A view for FontAwesome icons.
*/
SWIFT_CLASS("_TtC7Added_215FontAwesomeView")
@interface FontAwesomeView : UIView
@property (nonatomic, copy) NSString * _Nonnull iconCode;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)prepareForInterfaceBuilder;
/**
  Add a UILabel subview containing FontAwesome icon
*/
- (void)setupViews;
- (void)tintColorDidChange;
- (void)layoutSubviews;
@end


SWIFT_CLASS("_TtC7Added_229GuillotineTransitionAnimation")
@interface GuillotineTransitionAnimation : NSObject
@property (nonatomic, strong) UIView * _Nullable supportView;
@property (nonatomic, strong) UIView * _Nullable presentButton;
@property (nonatomic) double animationDuration;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)setupContainerMenuButtonFrameAndTopOffset;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
@end

@class UIDynamicAnimator;

@interface GuillotineTransitionAnimation (SWIFT_EXTENSION(Added_2)) <UIDynamicAnimatorDelegate>
- (void)dynamicAnimatorDidPause:(UIDynamicAnimator * _Nonnull)animator;
@end


@interface GuillotineTransitionAnimation (SWIFT_EXTENSION(Added_2)) <UIViewControllerAnimatedTransitioning>
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)context;
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)context;
@end


@interface GuillotineTransitionAnimation (SWIFT_EXTENSION(Added_2))
@end


SWIFT_CLASS("_TtC7Added_221HistoryViewController")
@interface HistoryViewController : UIViewController
@property (nonatomic, weak) IBOutlet UICollectionView * _Null_unspecified collectionView;
@property (nonatomic, readonly) double kItemSpace;
@property (nonatomic, readonly) double kCellHeight;
@property (nonatomic, readonly, copy) NSString * _Nonnull kDemoCell;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull citiesArray;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull colorsArray;
- (void)viewDidLoad;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface HistoryViewController (SWIFT_EXTENSION(Added_2)) <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate>
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class BubbleTransition;
@class NSUserDefaults;
@class LFLoginController;
@class UIStoryboardSegue;
@class UIImageView;

SWIFT_CLASS("_TtC7Added_218HomeViewController")
@interface HomeViewController : UIViewController <UIViewControllerTransitioningDelegate>
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified cameraButton;
@property (nonatomic, strong) CameraViewController * _Nullable cameraVC;
@property (nonatomic, readonly, strong) BubbleTransition * _Nonnull transition;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified QRImageView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified profileImageView;
@property (nonatomic, readonly, strong) NSUserDefaults * _Nonnull defaults;
@property (nonatomic, readonly, strong) LFLoginController * _Nonnull loginVC;
@property (nonatomic) BOOL goingToMenu;
@property (nonatomic, readonly, strong) GuillotineTransitionAnimation * _Nonnull presentationAnimator;
- (void)viewDidLoad;
- (void)setUpHome;
- (IBAction)didPressSettingsButton:(UIButton * _Nonnull)sender;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (void)didMoveToParentViewController:(UIViewController * _Nullable)parent;
- (IBAction)didPressCameraButton;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed;
- (void)forgotPasswordTapped;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURL;
@class NSNotification;

SWIFT_CLASS("_TtC7Added_217LFLoginController")
@interface LFLoginController : UIViewController
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull domainNames;
@property (nonatomic, strong) AutoCompleteTextField * _Null_unspecified txtEmail;
@property (nonatomic, strong) UITextField * _Null_unspecified txtPassword;
@property (nonatomic, strong) UIImageView * _Null_unspecified imgvUserIcon;
@property (nonatomic, strong) UIImageView * _Null_unspecified imgvPasswordIcon;
@property (nonatomic, strong) UIImageView * _Null_unspecified imgvLogo;
@property (nonatomic, strong) UIView * _Null_unspecified loginView;
@property (nonatomic, strong) UIView * _Null_unspecified bottomTxtEmailView;
@property (nonatomic, strong) UIView * _Null_unspecified bottomTxtPasswordView;
@property (nonatomic, strong) UIButton * _Null_unspecified butLogin;
@property (nonatomic, strong) UIButton * _Null_unspecified butSignup;
@property (nonatomic, strong) UIButton * _Null_unspecified butForgotPassword;
@property (nonatomic, strong) UIButton * _Null_unspecified butOnePassword;
@property (nonatomic, copy) NSString * _Nonnull appName;
@property (nonatomic, copy) NSString * _Nonnull appUrl;
@property (nonatomic) BOOL isLogin;
/**
  URL of the background video
*/
@property (nonatomic, strong) NSURL * _Nullable videoURL;
/**
  Logo on the top of the Login page
*/
@property (nonatomic, strong) UIImage * _Nullable logo;
@property (nonatomic, strong) UIColor * _Nullable loginButtonColor;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillLayoutSubviews;
- (nonnull instancetype)init;
- (void)didReceiveMemoryWarning;
- (void)setupVideoBackgrond;
- (void)playerItemDidReachEndWithNotification:(NSNotification * _Nonnull)notification;
- (void)setupLoginLogo;
- (void)setupLoginView;
- (void)setupEmailField;
- (void)setupPasswordField;
- (void)setupLoginButton;
- (void)setupSignupButton;
- (void)setupForgotPasswordButton;
- (void)setupOnePasswordWithAppName:(NSString * _Nonnull)appName appUrl:(NSString * _Nonnull)appUrl;
- (void)sendTapped;
- (void)signupTapped;
- (void)forgotPasswordTapped;
- (void)toggleLoginSignup;
- (void)wrongInfoShake;
- (void)setWrongUI;
- (void)setRightUI;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface LFLoginController (SWIFT_EXTENSION(Added_2))
- (NSArray<NSString *> * _Nonnull)autoCompleteTextFieldDataSource:(AutoCompleteTextField * _Nonnull)autoCompleteTextField;
@end


@interface LFLoginController (SWIFT_EXTENSION(Added_2)) <UITextFieldDelegate>
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (void)textFieldDidEndEditing:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
@end

@class CAEmitterLayer;
@class CAEmitterCell;

SWIFT_CLASS("_TtC7Added_214SAConfettiView")
@interface SAConfettiView : UIView
@property (nonatomic, strong) CAEmitterLayer * _Null_unspecified emitter;
@property (nonatomic, copy) NSArray<UIColor *> * _Null_unspecified colors;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)setup;
- (void)startConfetti;
- (void)stopConfetti;
- (CAEmitterCell * _Nonnull)confettiWithColorWithColor:(UIColor * _Nonnull)color;
- (BOOL)isActive;
@end

@class UIScrollView;

SWIFT_CLASS("_TtC7Added_220ScrollViewController")
@interface ScrollViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIScrollView * _Null_unspecified scrollView;
@property (nonatomic, readonly, strong) BubbleTransition * _Nonnull transition;
@property (nonatomic, strong) UIButton * _Nullable cameraButton;
- (void)viewDidLoad;
- (void)setupViews;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UILabel;

SWIFT_CLASS("_TtC7Added_222SettingsViewController")
@interface SettingsViewController : UIViewController
@property (nonatomic, strong) UIButton * _Nullable dismissButton;
@property (nonatomic, strong) UILabel * _Nullable titleLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified closeLabel;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (void)dismissButtonTapped:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface SettingsViewController (SWIFT_EXTENSION(Added_2))
- (void)animatorDidFinishPresentation:(GuillotineTransitionAnimation * _Nonnull)animator;
- (void)animatorDidFinishDismissal:(GuillotineTransitionAnimation * _Nonnull)animator;
- (void)animatorWillStartPresentation:(GuillotineTransitionAnimation * _Nonnull)animator;
- (void)animatorWillStartDismissal:(GuillotineTransitionAnimation * _Nonnull)animator;
@end


@interface UIColor (SWIFT_EXTENSION(Added_2))
- (nonnull instancetype)initWithRed:(NSInteger)red green:(NSInteger)green blue:(NSInteger)blue;
- (nonnull instancetype)initWithNetHex:(NSInteger)netHex;
@end


@interface UIFont (SWIFT_EXTENSION(Added_2))
/**
  Get a UIFont object of FontAwesome.
  \param ofSize The preferred font size.


  returns:
  A UIFont object of FontAwesome.
*/
+ (UIFont * _Nonnull)fontAwesomeOfSize:(CGFloat)fontSize;
@end


@interface UIImage (SWIFT_EXTENSION(Added_2))
/**
  Get a FontAwesome image with the given icon css code, text color, size and an optional background color.
  \param code The preferred icon css code.

  \param textColor The text color.

  \param size The image size.

  \param backgroundColor The background color (optional).


  returns:
  A string that will appear as icon with FontAwesome
*/
+ (UIImage * _Nullable)fontAwesomeIconWithCode:(NSString * _Nonnull)code textColor:(UIColor * _Nonnull)textColor size:(CGSize)size backgroundColor:(UIColor * _Nonnull)backgroundColor;
@end


@interface UIView (SWIFT_EXTENSION(Added_2))
- (void)shake;
@end


@interface UIView (SWIFT_EXTENSION(Added_2))
- (void)setShadowWithOffset:(CGSize)offset radius:(CGFloat)radius opacity:(float)opacity;
@end


@interface UIViewController (SWIFT_EXTENSION(Added_2))
+ (UIViewController * _Nonnull)currentViewController;
@end

#pragma clang diagnostic pop