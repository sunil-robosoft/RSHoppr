//
//  HRConstants.h
//  Hoppr
//
//  Created by Dhanyaraja on 15/10/12.
//  Copyright (c) 2012 Robosoft Technologies. All rights reserved.
//

#import <Foundation/Foundation.h>

//For Notification
#define ADD_OBSERVER(inSelector,inName) [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(inSelector) name:inName object:nil];
#define REMOVE_OBSERVER(inObserver) [[NSNotificationCenter defaultCenter] removeObserver:self name:inObserver object:nil]

#define  kStatic @"static" //place_detail//static
#define  kPlace_Detail @"place_detail"
//places_promo" //"friends //specials_nearby"

#define kPlaces_Promo @"places_promo"
#define kFriends @"friends"
#define kSpecials_Nearby @"specials_nearby"
#define NO_NETWORK_VIEW_TAG 7689
#define  MAX_NAME_LENGTH 30
#define MIN_NAME_LENGTH 3

#define kBadgeWidth 60
#define kBadgeHeight 60
#define kBadgeCellHeight 90
#define kBadgeTopStartPoint 78

#define DEFAULT_DATA_CACHE_INVALIDATION_AGE 60*5 // 5 minute
#define DEFAULT_DATA_CACHE_INVALIDATION_AGE_NEVER     (1.0 / 0.0)
#define DATA_CACHE_NAME @"DataCache"
#define DATA_CACHE_NAME_PLACEDETAIL @"DataCache/Place"
#define IMAGE_CACHE_PATH @"IconCache"

typedef enum {
    NotificationTypeSkiperChaser = 392,
    NotificationTypeLeaderboard = 393,
    NotificationTypeFriends = 394
    
}NotificationType;

typedef enum
{
    eProfileUpdate=0,
    ePlaceCheckIn,
    eBuyCoupon,
    eFacebookInfoUpdate,
    eUpdateRating
}DataCacheInvalidationType;
typedef enum
{
    LoginViewTypeDefault = 0,
    LoginViewTypeWithNumber
    
}LoginViewType;

typedef enum
{
    NetworkTypeWiFi=0,
    NetworkTypeWWAN
    
}NetworkType;


typedef enum
{
    eMale=0,
    eFemale,
    eUnknown
}Gender;
typedef enum
{
    eMobileNumber=0,
    eMyFacebook,
    eDateOfBirth,
    eCity,
    eGender,
    eBadge
}ProfileCellType;

typedef enum
{
    eFeaturedPlace=0,
    eSpecialPlace,
    eFriendsOnHoppr,
    eAboutHoppr
}SelectedHeaderViewType;


//Font sizes
#define kFontSize12 12 
typedef  enum 
{
    eProfiles = 8967,
    eLeaderBoard,
    eFriends,
    eCoupons,
    eNone
}SelectedTab;

typedef enum
{
    eNormalPlace=0,
    eRecommendPlace,
    eOfferPlace,
    eNonePlace
}PlaceTypes;

typedef enum
{
    ePlaceInfoCell=0,
    ePlaceCheckInCell,
    ePlaceOfferCell,
    ePlaceSkipprCell,
    ePlaceHopprsCell
}PlaceDetailTableViewCellTypes;



typedef enum
{
    eSectionTypeLogin,
    eSectionTypeRemoveToken,
    eSectionTypeTokenRegister,
    eSectionTypeCategories,
	eSectionTypeNearByPlace,
	eSectionTypeCoupon,
	eSectionTypeCheckin,
    eSectionTypePlaceDetail,
    eSectionTypePlaceRating,
    eSectionTypePlaceCheckIn,
    eSectionTypeMobileNumberVerification,
    eSectionTypeLogout,
    eSectionTypeFetchProfileDetail,
    eSectionTypeFacebookSharingPoints,
    eSectionTypeUpdateProfileDetail,
    eSectionTypeFetchLocalHopprsList,
    eSectionTypeFetchGlobalHopprsList,
    eSectionTypeLeaderBoardRankOfUser,
    eSectionTypePlaceNameSearch,
    eSectionTypeAddNewPlace,
    eSectionTypePlaceSkipprChasrs,
    eSectionTypePlaceOffer,
    eSectionTypeShareCheckInOnFacebook,
    eSectionTypePlaceHopprs,
    eSectionTypeBadgeCounterUpdate,

    eSectionTypeFetchCouponList,
    eSectionTypeDownloadCoupon,


    eSectionTypUpdateFacebookInfo,
    eSectionTypeCallFriend,
    eSectionTypeFacebookPlaceSharingInfo,
    eSectionTypFacebookNewsFeed, 
    
    eSectionTypeResetPassword,
    eSectionTypeForgotPassword,
    eSectionTypeSpecialNearByPlace,
    eSectionTypeGettingCellularServiceNameAirtelTata,
    eSectionTypeGettingCellularServiceNameVodafone,
    eSectionTypeFeaturedTiles,
    eSectionTypeRefreshFBFriends,
    eSectionTypeCampaignPlaces,
    eSectionTypeImageCheck
}RSSParserType;

typedef enum
{
   eHomeViewController,
   eListViewController,
   eDetailViewController,
}SJViewControllerType;


typedef enum
{
    eLocalHopprList =6454,
    eGlobalHopprList,
}eSelectedHoppr;

enum eHTTPRequestType
{
	eHTTPPostRequest,
	eHTTPGetRequest
};


enum eLoginFieldTag
{
    ePhoneNumberFieldTag = 10,
    ePasswordFieldTag = 11
};

enum eUserErrorTags
{
    eSuccessResponse = 200,
    eNewUser =201,
    eServerError = 500,
    eServerNotReachable=1004,
    eNotFound = 404,
    eWrongPassword =401,
    eServerBadRequestFirst = 502,
    eServerBadRequestSecond = 503,
};

typedef enum
{
    ePhotoLibrary,
    eTakePicture,
    eSavedPhotos,
}eAvailableImagePickerOption;

//Error codes
#define kUserInfoErrorCode  1000
#define kEmptyResponseErrorCode 1001

// Fonts

#define kExoRegular @"Exo-Regular"
#define kExoBold    @"Exo-Bold"
#define kExoLight   @"Exo-Light"
#define kExoDemiBold   @"Exo-DemiBold"


#define kOverlayImageTag  161288

#pragma mark EventsLog

//done all
#define APP_STARTED @"app_started"
#define BACK_PRESSED  @"back_pressed"

#define TUTORIAL_DISPLAYED @"tutorial_screen_displayed"
#define TUTORIAL_SCROLLED @"tutorial_scrolled"

//done all
#define SWIPE_TO_CHECKIN_INITIATED @"swipe_to_checkin_initiated"
#define SWIPE_TO_CHECKIN_COMPLETED @"swipe_to_checkin_completed"

#define GPS_COORDINATES_RECEIVED @"gps_coordinates_received"
#define GPS_FETCH_FAILED @"gps_fetch_failed"
#define GPS_OFF @"gps_off"

//done all
#define ACTION_BAR_PROFILE_CLICKED @"action_bar_profile_clicked"
#define ACTION_BAR_LOGO_CLICKED @"action_bar_logo_clicked"
#define ACTION_BAR_SEARCH_CLICKED @"action_bar_search_clicked"

//done all
#define LOGIN_SCREEN_DISPLAYED @"login_screen_displayed"
#define LOGIN_BUTTON_CLICKED @"login_button_clicked"
#define FORGOT_PASSWORD_CLICKED @"forgot_password_clicked"
#define LOGIN_ERROR @"login_error"

//done all 
#define NEARBY_SCREEN_DISPLAYED @"nearby_screen_displayed"
#define NEARBY_SCREEN_FEATURED_SCROLLED @"nearby_screen_featured_scrolled"
#define NEARBY_SCREEN_FEATURED_CLICKED @"nearby_screen_featured_clicked"
#define NEARBY_SCREEN_SCROLLED_TO_BOTTOM @"nearby_screen_scrolled_to_bottom"
#define NEARBY_SCREEN_PLACE_CLICKED @"nearby_screen_place_clicked"
#define NEARBY_SCREEN_PULLDOWN_REFRESH_ACTION @"nearby_screen_pulldown_refresh_action"//needed


//done all
#define SPECIALS_NEARBY_SCREEN_DISPLAYED @"specials_nearby_screen_displayed"
#define SPECIALS_NEARBY_SCREEN_SCROLLED_TO_BOTTOM @"specials_nearby_screen_scrolled_to_bottom"
#define SPECIALS_NEARBY_SCREEN_PLACE_CLICKED @"specials_nearby_screen_place_clicked"
#define SPECIALS_NEARBY_SCREEN_OFFER_COUNT  @"specials_nearby_screen_offer_count"

//done all not last one
#define SEARCH_SCREEN_DISPLAYED @"search_screen_displayed"
#define SEARCH_SCREEN_SCROLLED_TO_BOTTOM @"search_screen_scrolled_to_bottom"
#define SEARCH_SCREEN_PLACE_CLICKED @"search_screen_place_clicked"
#define SEARCH_SCREEN_SEARCH_ICON_CLICKED @"search_screen_search_icon_clicked"
#define SEARCH_SCREEN_SEARCH_INFO @"search_screen_search_info"

//done all
#define TAP_TO_CALL_SCREEN_DISPLAYED @"tap_to_call_screen_displayed"
#define TAP_TO_CALL_BUTTON_CLICKED @"tap_to_call_button_clicked"
#define TAP_TO_CALL_VERIFICATION_SUCCESS @"tap_to_call_verification_success"
#define TAP_TO_CALL_VERIFICATION_FAILURE @"tap_to_call_verification_failure"

#define SAD_TO_SEE_YOU_GO_SCREEN_DISPLAYED @"sad_to_see_you_go_screen_displayed"
#define SAD_TO_SEE_YOU_GO_RETURN_CLICKED @"sad_to_see_you_go_return_clicked"

//done all not last two
#define ADD_PLACE_SCREEN_DISPLAYED @"add_place_screen_displayed"
#define ADD_PLACE_SCREEN_IMAGE_ADDED @"add_place_screen_image_added"
#define ADD_PLACE_SCREEN_ADD_CLICKED @"add_place_screen_add_clicked"
#define ADD_PLACE_SCREEN_LOCATION_PREFILLED @"add_place_screen_location_prefilled"
#define ADD_PLACE_SCREEN_CANCEL_CLICKED @"add_place_screen_cancel_clicked"

//done all 
#define CHANGE_PASSWORD_SCREEN_DISPLAYED @"change_password_screen_displayed"
#define CHANGE_PASSWORD_SUCCESS @"change_password_success"
#define CHANGE_PASSWORD_BUTTON_CLICKED @"change_password_button_clicked"

//done all 
#define HOPPR_SETTINGS_DISPLAYED @"hoppr_settings_displayed"
#define HOPPR_SETTINGS_LOGOUT_ACTION @"hoppr_settings_logout_action"
#define HOPPR_SETTINGS_RESET_PASSWORD @"hoppr_settings_reset_password"
#define HOPPR_SETTINGS_EDIT_NAME @"hoppr_settings_edit_name"
#define HOPPR_SETTINGS_EDIT_NAME_ENTER @"hoppr_settings_edit_name_enter"
#define HOPPR_SETTINGS_EDIT_NAME_CANCEL @"hoppr_settings_edit_name_cancel"

//done all
#define PLACE_DETAIL_DISPLAYED @"place_detail_displayed"
#define PLACE_DETAIL_CHECKIN_CLICKED @"place_detail_checkin_clicked"
#define PLACE_DETAIL_RATING_CLICKED @"place_detail_rating_clicked"

//done all not last one
#define POST_CHECKIN_DISPLAYED @"post_checkin_displayed"
#define POST_CHECKIN_SHARE_ON_FACEBOOK_CLICKED @"post_checkin_share_on_facebook_clicked"
#define POST_CHECKIN_SHARE_ON_FACEBOOK_SUCCESS @"post_checkin_share_on_facebook_success"
#define POST_CHECKIN_RATING_CLICKED @"post_checkin_rating_clicked"
#define POST_CHECKIN_SHARE_ON_FACEBOOK_CANCEL @"post_checkin_share_on_facebook_cancel"

//done all
#define FRIENDS_SCREEN_DISPLAYED @"friends_screen_displayed"
#define FRIENDS_SCREEN_FACEBOOK_CONNECT_BUTTON_PRESSED @"friends_screen_facebook_connect_button_pressed"
#define FRIENDS_SCREEN_FACEBOOK_CONNECT_SUCCESS @"friends_screen_facebook_connect_success"
#define FRIENDS_SCREEN_SCROLLED_TO_BOTTOM @"friends_screen_scrolled_to_bottom"
#define FRIENDS_SCREEN_PULLDOWN_REFRESH_ACTION @"friends_screen_pulldown_refresh_action"

//done all not last one
#define PROFILE_SCREEN_DISPLAYED @"profile_screen_displayed"
#define PROFILE_SCREEN_DOB_UPDATED @"profile_screen_dob_updated"
#define PROFILE_SCREEN_NAME_UPDATED @"profile_screen_name_updated"
#define PROFILE_SCREEN_CITY_UPDATED @"profile_screen_city_updated"
#define PROFILE_SCREEN_GENDER_UPDATED @"profile_screen_gender_updated"
#define PROFILE_SCREEN_FACEBOOK_CONNECT @"profile_screen_facebook_connect"
#define PROFILE_SCREEN_SETINGS_CLICKED @"profile_screen_setings_clicked"
#define PROFILE_SCREEN_IMAGE_UPDATED @"profile_screen_image_updated"
#define PROFILE_SCREEN_EMAIL_UPDATED @"profile_screen_email_updated"

//done all
#define LEADERBOARD_SCREEN_DISPLAYED @"leaderboard_screen_displayed"
#define LEADERBOARD_SCREEN_LOCAL_CLICKED @"leaderboard_screen_local_clicked"
#define LEADERBOARD_SCREEN_GLOBAL_CLICKED @"leaderboard_screen_global_clicked"
#define LEADERBOARD_SCREEN_SCROLLED_TO_BOTTOM @"leaderboard_screen_scrolled_to_bottom"
#define LEADERBOARD_SCREEN_PULLDOWN_REFRESH_ACTION @"leaderboard_screen_pulldown_refresh_action"


//done all
#define COUPONS_SCREEN_DISPLAYED @"coupons_screen_displayed"
#define COUPONS_SCREEN_SCROLLED_TO_BOTTOM @"coupons_screen_scrolled_to_bottom"
#define COUPONS_SCREEN_COUPON_CLICKED @"coupons_screen_coupon_clicked"
#define COUPONS_SCREEN_PULLDOWN_REFRESH_ACTION @"coupons_screen_pulldown_refresh_action"

//done all not last two
#define SELECTED_TILE_NAME @"selected_index"
#define OFFER_COUNT @"offer_count"
#define SEARCH_STRING @"search_string"
#define SEARCH_RESULT_COUNT @"search_result_count"
#define TOTAL_LOVE @"total_love"
#define USER_LOVE @"user_love"
#define COUPON_ID @"coupon_id"
#define FEATURED_CAMPAIGN_SCREEN_DISPLAYED @"featured_campaign_screen_displayed"
#define FEATURED_CAMPAIGN_SCREEN_PLACE_CLICKED @"featured_campaign_screen_place_clicked"
#define FEATURED_CAMPAIGN_SCREEN_SCROLLED_TO_BOTTOM @"featured_campaign_screen_place_clicked"
#define SELECTED_ITEM @"selected_item"
#define SCREEN_NAME @"screen_name"

//done all not last two
#define POST_CHECKIN_DISPLAYED_LOCALLY @"post_checkin_displayed_locally"
#define C_CAT_COUPON_DOWNLOAD @"c_category_coupon_downloaded"
#define ERROR_IN_COUPON_DOWNLOAD @"coupon_downloaded_error"
#define ONLINE_NOTIFICATION_DISPLAYED @"displayed_online_notification"
#define ONLINE_NOTIFICATION_DONE_CLICKED @"online_notification_done_clicked"
#define OFFLINE_NOTIFICATION_DISPLAYED @"displayed_offline_notification"
#define OFFLINE_NOTIFICATION_CLICKED @"clicked_offline_notification"

//done all
#define NEARBY_TUTORIAL_DISPLAYED @"nearby_tutorial_displayed"
#define PROFILE_TUTORIAL_DISPLAYED @"profile_tutorial_displayed"
#define NEARBY_TUTORIAL_REMOVED @"nearby_tutorial_removed"
#define PROFILE_TUTORIAL_REMOVED @"profile_tutorial_removed"

//5 feb added track

#define FEATURED_TILE_DISPLAYED @"featured_tile_displayed"
#define FEATURED_TILE_LABEL @"featured_tile_label"

//#define PLACE_DETAIL_SKIPER_IMAGECLICKED = @"skiper_image_clicked"
//#define PLACE_DETAIL_CHASER_IMAGECLICKED = @"chaser_image_clicked"
//#define PLACE_DETAIL_HOPPRS_IMAGECLICKED = @"hopprs_image_clicked"
//
//#define TUTORIAL_View_IMAGECLICKED = @"tutorial_images_clicked"
//#define PProfile_DETAIL_FACEBOOK_IMAGECLICKED = @"profile_facebook_image_clicked"
//#define PProfile_DETAIL_GENDER_IMAGECLICKED = @"profile_gender_image_clicked"
//#define PProfile_DETAIL_BIRTHDAY_IMAGECLICKED = @"profile_birthday_image_clicked"
//#define PProfile_DETAIL_CITY_IMAGECLICKED = @"profile_city_image_clicked"









#define SHOULD_TRACK_NEARBY_SCREEN_SCROLLED_TO_BOTTOM @"SHOULD_TRACK_NEARBY_SCREEN_SCROLLED_TO_BOTTOM"
#define SHOULD_TRACK_SPECIALS_NEARBY_SCREEN_SCROLLED_TO_BOTTOM @"SHOULD_TRACK_SPECIALS_NEARBY_SCREEN_SCROLLED_TO_BOTTOM"
#define SHOULD_TRACK_SEARCH_SCREEN_SCROLLED_TO_BOTTOM @"SHOULD_TRACK_SEARCH_SCREEN_SCROLLED_TO_BOTTOM"
#define SHOULD_TRACK_FRIENDS_SCREEN_SCROLLED_TO_BOTTOM @"SHOULD_TRACK_FRIENDS_SCREEN_SCROLLED_TO_BOTTOM"
#define SHOULD_TRACK_FLEADERBOARD_SCREEN_SCROLLED_TO_BOTTOM @"SHOULD_TRACK_LEADERBOARD_SCREEN_SCROLLED_TO_BOTTOM"
#define SHOULD_TRACK_COUPONS_SCREEN_SCROLLED_TO_BOTTOM @"SHOULD_TRACK_COUPONS_SCREEN_SCROLLED_TO_BOTTOM"

extern NSString  *kNotificationTypeSkiper;
extern NSString  *kNotificationTypeChaser;
extern NSString  *kNotificationTypeFriends;
extern NSString  *kNotificationTypeFLeaderboard;

extern NSString    *kListLayoverShownKey;
extern NSString    *kProfileLayoverShownKey;

//Login
extern NSString *kDefaultName;
extern NSString *kDefaultPassword;
NSString    *kAirtelTataURLString;
NSString    *kVodafoneURLString;


//Notifications

extern  NSString    *kApplicationEnteredForeGround;
extern  NSString    *kNetworkStatusChanged;

//carousel keys
extern NSString *kOverlayKey;
extern NSString *kCarouselDisplayImageKey;

extern NSString *kContentKey;
extern NSString *kActionKey;
// Error strings

extern  NSString    *kUserInfoErrorDomain;
extern  NSString    *kEmptyResponseErrorDomain;


// Common Keys
extern  NSString  *kPhoneNumberToDial;
extern  NSString    *kUserPassword;
extern  NSString    *kTermsAndConditionState;
extern  NSString    *kShowTutorailKey;

extern  NSString    *kPlaceRatingURLString;
extern  NSString    *kBaseURLString;
extern  NSString    *kLoginURLString;
extern  NSString    *kTokenRegisterURLString ;
extern  NSString    *kTokenUnRegisterURLString;
extern  NSString    *kCategoriesURLString;
extern  NSString    *kNearByPlacesList;
extern  NSString    *kPlaceDetailURLString;
extern  NSString    *kPlaceCheckInURLString;
extern  NSString    *kIsMobileNumberVerifiedCheckString;
extern  NSString    *kLogOutString;
extern  NSString    *kFetchProfileDetailsString;
extern  NSString    *kUpdateProfileDetailsString;
extern  NSString    *kFetchLocalHopprsListString;
extern  NSString    *kFetchGlobalHopprsListString;
extern  NSString    *kFetchUserPublicProfile;
extern  NSString    *kFetchLeaderBoardRank;
extern  NSString    *kSearchPlaceNameString;
extern  NSString    *kAddNewPlaceString;
extern  NSString    *kShareCheckInOnFacebookURLString;
extern  NSString    *kPlaceSkipprChasrsURLString;
extern  NSString    *kPlaceHopprsURLString;
extern  NSString    *kTotalLoveKey;
extern  NSString    *kUserLoveKey;
extern  NSString    *kFetchCouponListString;
extern  NSString    *kDownloadCouponString;
extern  NSString    *kResetPasswordString;
extern  NSString    *kForgotPasswordString;
extern  NSString    *kSpecialNearbyURLString;
extern  NSString    *kFeaturedTilesURLString;
extern  NSString    *kScriptForFacebookURLString;
extern  NSString    *kCampaignStaticPlaceURLString;
extern  NSString    *kRefreshFBFriendsURLString;

extern NSString *kUpadteFacebookURLString;
extern NSString *kFacebookNewsFeedURLString;
extern NSString  *kImageTitle;
extern NSString  *kImageName;
extern NSString *kHeaderViewTypeKey;

extern NSString    *kPlaceChasersKey;
extern NSString    *kPlaceSkipprKey;
extern NSString    *kImageKey;
extern NSString    *kImageTitle;
extern NSString    *kImageName;
extern NSString    *kPlaceOfferURLString;
extern NSString    *kPlaceOfferDescriptionKey;
extern NSString    *kOfferCategoryForPlace;
extern NSString    *kCouponExpireDateKey;
extern  NSString    *kCouponCodeKey;
extern  NSString    *kPlaceOfferTitleKey;
extern  NSString    *kPlaceHopprsKey;
extern  NSString    *kFacebookAuthTokenKey;
extern  NSString    *kPointsKey;
extern  NSString    *kPlaceNameKey;
extern  NSString    *kNoOfDaysAgoKey;
// Login Keys
extern  NSString    *kIsMobileNimberVerifiedCheck;

extern  NSString    *kMobileNumber;
extern  NSString    *kPassword;

extern  NSString    *kUserId;
extern  NSString    *kMobileNumberVerified;
extern  NSString    *kSessionId;
extern  NSString    *kAndroidKey ;
extern  NSString    *kKey;

// Category keys
extern NSString *kCategories;

extern NSString  *kCategoryId;
extern NSString  *kCategoryName;
extern NSString  *kCategoryImageURL;

//Friend details
extern NSString *kPlaceLocalityKey;
extern NSString *kPlaceCityKey;
extern NSString *kLastCheckInTimeKey;
extern NSString *kPlaceLandmarkKey;

// Place Details
extern  NSString    *kLoadConfigureKey;
extern  NSString    *kTrueValue ;
extern  NSString    *kPlacesList;
extern  NSString    *kFeaturedPlaces;

extern  NSString    *kPlaceId;
extern  NSString    *kPlaceName;
extern  NSString    *kPlaceCategory;
extern  NSString    *kIsPlaceFeatured ;
extern  NSString    *kPlaceFeaturedUrl;
extern  NSString    *kPlaceCarouselUrl;
extern  NSString    *kPlaceImageURL;
extern  NSString    *kOfferIdForPlace;
extern  NSString    *kPlaceDistance;
extern  NSString    *kPlacePointsScoreKey;
extern  NSString    *kPlaceEarnedPointsKey;
extern  NSString *kPlacePointsScoreKey;
extern  NSString *kPlaceEarnedPointsKey;

extern  NSString    *kLatitude;
extern  NSString    *kLongitude;
extern  NSString    *kPlaceCategoryId;
extern  NSString    *kAddress;
extern  NSString    *kTip;
extern  NSString    *kCity;
extern  NSString    *kPlace;
extern  NSString *kPlaceRatingKey;
extern  NSString *kPlacePointsOnCheckInKey;
extern  NSString *kPlaceTotalCheckInsKey;
extern  NSString    *kChasrsSkipprKey;

extern  NSString    *kPlaceRatingKey;
extern  NSString    *kPlacePointsOnCheckInKey;
extern  NSString    *kPlaceTotalCheckInsKey;
extern  NSString    *kCampaignIdKey;
extern  NSString    *kLocalityKey;
// Profile Details


extern  NSString    *kDOB;
extern  NSString    *kEmailId;
extern  NSString    *kEmailIdVerified;
extern  NSString    *kFBAuthToken;
extern  NSString    *kGender;
extern  NSString    *kProfilePicURL;
extern  NSString    *kMobileNumberVerifiedInApp;
extern  NSString    *kProfileName;
extern  NSString    *kProfileBadge;
extern  NSString    *kScore;
extern  NSString    *kRank;
extern  NSString    *kFacebookUserName;

// Leader Board related

extern  NSString    *kId;
extern  NSString    *kLocalLeaderBoard;
extern  NSString    *kGlobalLeaderBoard;
extern  NSString    *kLocalRank;
extern  NSString    *kGlobalRank;

// Search related
//Social networking facebook and twitter keys

extern  NSString    *kName;
extern  NSString    *kSearchResults;

// Others

extern  NSString    *kButtonName;
extern  NSString    *kButtonTag;



extern  NSString* kFBPostName;
extern  NSString* kFBPostLink;
extern  NSString* kFBPostCaption;
extern  NSString* kFBPostDescription;
extern  NSString* kFBPostMedia;
extern  NSString *kFBPostMessage;
extern  NSString    *kFacebookSharingPointsURLString;
// Coupon list

extern  NSString    *kCouponList;
extern  NSString    *kPlaceImageUrlKey;


