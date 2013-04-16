//
//  HRConstants.m
//  Hoppr
//
//  Created by Dhanyaraja on 15/10/12.
//  Copyright (c) 2012 Robosoft Technologies. All rights reserved.
//

#import "HRConstants.h"

NSString  *kNotificationTypeSkiper = @"tray_notification_skippr";
NSString  *kNotificationTypeSChaser = @"tray_notification_chaser";
NSString  *kNotificationTypeFriends = @"friends";
NSString  *kNotificationTypeFLeaderboard = @"leaderboard";

NSString    *kListLayoverShownKey  = @"listLayoverShown";
NSString    *kProfileLayoverShownKey  = @"profileLayoverShown";

//Login
NSString    *kDefaultName = @"hoppr (default)";
NSString    *kDefaultPassword = @"sdffg123pookla";
NSString    *kAirtelTataURLString = @"http://124.153.106.166/wap/m.php";
NSString    *kVodafoneURLString = @"http://hoppr.com/mobile/wap/m.php";



// Notification names

NSString    *kApplicationEnteredForeGround = @"ApplicationEnteredForeGround";
NSString    *kNetworkStatusChanged = @"NetworkStatusChanged";

// Error constants
NSString    *kEmptyResponseErrorDomain = @"Empty Response";
NSString    *kUserInfoErrorDomain = @"Invalid creadentials";

//carousel keys
NSString    *kOverlayKey=@"overlay_text";
NSString    *kCarouselDisplayImageKey=@"display_image";

NSString    *kContentKey=@"content";
NSString    *kActionKey=@"action";

    
NSString    *kImageTitle = @"imageTitle";
NSString    *kImageName = @"imageName";
NSString    *kHeaderViewTypeKey=@"HeaderViewType";
// Common Keys
NSString    *kPhoneNumberToDial = @"01244396302";
NSString    *kUserPassword = @"UserPassword";
NSString    *kTermsAndConditionState = @"TermsAndConditionState";
NSString    *kShowTutorailKey=@"show_tutorail";
NSString    *kBaseURLString = @"http://app-stg.hoppr.com/app/";//@"http://app.hoppr.com/app/";//
NSString    *kLoginURLString = @"login.json";
NSString    *kFacebookSharingPointsURLString=@"facebook_share_points.json";
NSString    *kTokenRegisterURLString = @"register";
NSString    *kTokenUnRegisterURLString = @"unregister";
NSString    *kCategoriesURLString = @"categories.json";
NSString    *kNearByPlacesList = @"near_by_places.json";
NSString    *kPlaceDetailURLString = @"place_details_apis.json";
NSString    *kPlaceRatingURLString=@"rate_place.json";
NSString    *kPlaceCheckInURLString=@"checkin.json";
NSString    *kIsMobileNumberVerifiedCheckString = @"is_mobile_number_verified.json";
NSString    *kFetchProfileDetailsString = @"profile.json";
NSString    *kUpdateProfileDetailsString = @"update_profile.json";
NSString    *kLogOutString = @"logout.json";
NSString    *kFetchLocalHopprsListString = @"get_leaderboard_list_local.json";
NSString    *kFetchGlobalHopprsListString = @"get_leaderboard_list_global.json";
NSString    *kFetchUserPublicProfile = @"public_profile.json";
NSString    *kFetchLeaderBoardRank = @"user_rank.json";
NSString    *kSearchPlaceNameString = @"search.json";
NSString    *kAddNewPlaceString = @"add_place.json";
NSString    *kPlaceSkipprChasrsURLString = @"get_skippr_and_chasers.json";
NSString    *kPlaceOfferURLString = @"offer_detail.json";
NSString    *kShareCheckInOnFacebookURLString=@"share_app_checkin_on_facebook.json";

NSString    *kPlaceHopprsURLString=@"hopprs_at_place.json";
NSString    *kFetchCouponListString=@"coupon_list.json";
NSString    *kDownloadCouponString=@"get_coupon.json";

NSString    *kUpadteFacebookURLString=@"update_facebook_information.json";
NSString    *kFacebookNewsFeedURLString=@"facebook_news_feed.json";

NSString    *kResetPasswordString=@"reset_password.json";
NSString    *kForgotPasswordString=@"forgot_password.json";
NSString    *kSpecialNearbyURLString=@"specials_nearby.json";
NSString    *kFeaturedTilesURLString=@"featured_tiles.json";
NSString    *kScriptForFacebookURLString=@"script_for_facebook.json";
NSString    *kCampaignStaticPlaceURLString=@"campaign_static_places.json";
NSString    *kRefreshFBFriendsURLString=@"refresh_fb_friends.json";

// Login Keys
NSString    *kIsMobileNimberVerifiedCheck = @"verified";

// Login Keys
NSString    *kMobileNumber = @"mobile_number";
NSString    *kPassword = @"password";

NSString    *kUserId = @"user_id";
NSString    *kMobileNumberVerified = @"mobile_number_verified";
NSString    *kSessionId = @"session_id";
NSString    *kAndroidKey =@"ios";
NSString    *kKey=@"key";
// Category keys
NSString    *kCategories = @"categories";
NSString    *kCategoryId = @"category_id";
NSString    *kCategoryName = @"name";
NSString    *kCategoryImageURL = @"image_url";

// Place Details
/*true
 load_configured*/
NSString    *kLoadConfigureKey = @"load_configured";
NSString    *kTrueValue = @"true";

NSString    *kPlacesList = @"places";
NSString    *kFeaturedPlaces = @"featured_places";
NSString    *kPlaceId = @"place_id";
NSString    *kPlaceCategory = @"category";
NSString    *kIsPlaceFeatured = @"featured";
NSString    *kPlaceImageURL = @"image_url";
NSString    *kPlaceFeaturedUrl = @"featured_image_url";
NSString    *kPlaceCarouselUrl = @"featured_image_url";
NSString    *kPlaceName = @"name";
NSString    *kOfferIdForPlace = @"offer_id";
NSString    *kOfferCategoryForPlace = @"offer_category";
NSString    *kPlaceDistance = @"distance";
NSString    *kPlaceRatingKey=@"rating";
NSString    *kPlacePointsOnCheckInKey=@"points_on_checkin";
NSString    *kPlaceTotalCheckInsKey=@"total_checkins";
NSString    *kPlacePointsScoreKey=@"score";
NSString    *kPlaceEarnedPointsKey=@"points_earned";
NSString    *kPlaceChasersKey=@"chasers";
NSString    *kPlaceSkipprKey=@"skippr";
NSString    *kImageKey=@"image";
NSString    *kLatitude = @"latitude";
NSString    *kLongitude = @"longitude";
NSString    *kPlaceCategoryId = @"place_category_id";
NSString    *kAddress = @"address";
NSString    *kTotalLoveKey=@"total_love";
NSString    *kUserLoveKey=@"user_love";
NSString    *kTip = @"tip";
NSString    *kCity = @"city";
NSString    *kPlace = @"place";
NSString    *kPlaceOfferDescriptionKey=@"description";
NSString    *kPlaceOfferTitleKey=@"title";
NSString    *kCouponExpireDateKey=@"expires_at";
NSString    *kCouponCodeKey=@"code";
NSString    *kPlaceHopprsKey=@"hoppr";
NSString    *kFacebookAuthTokenKey=@"facebook_auth_token";
NSString    *kPointsKey=@"points";
NSString    *kPlaceNameKey=@"place_name";
NSString    *kNoOfDaysAgoKey=@"no_of_days_ago";
NSString    *kChasrsSkipprKey=@"chasrs_skippr";
// Profile Details

NSString    *kDOB = @"date_of_birth";
NSString    *kEmailId = @"email";
NSString    *kEmailIdVerified = @"email_id_verified";
NSString    *kFBAuthToken = @"facebook_auth_token";
NSString    *kGender = @"gender";
NSString    *kProfilePicURL = @"image_url";
NSString    *kMobileNumberVerifiedInApp = @"mobile_number_verified_in_app";
NSString    *kProfileName = @"name";
NSString    *kProfileBadge = @"badges";
NSString    *kScore = @"score";
NSString    *kRank = @"rank";
NSString    *kFacebookUserName=@"facebook_user_name";

//Friend details
NSString *kPlaceLocalityKey=@"place_locality";
NSString *kPlaceCityKey=@"place_city";
NSString *kLastCheckInTimeKey=@"last_checkin_time";
NSString *kPlaceLandmarkKey=@"place_landmark";
NSString *kLocalityKey=@"locality";
// Leader Board relate details

NSString    *kId = @"id";
NSString    *kLocalLeaderBoard = @"leaderboard_local";
NSString    *kGlobalLeaderBoard = @"leaderboard_global";
NSString    *kLocalRank = @"local_rank";
NSString    *kGlobalRank = @"global_rank";
NSString    *kCampaignIdKey=@"campaign_id";

// Search
//Social networking facebook and twitter keys

NSString    *kName = @"name";
NSString    *kSearchResults = @"search_results";


// Others

NSString    *kButtonName = @"ButtonName";
NSString    *kButtonTag = @"ButtonTag";
NSString*    kFBPostName=@"name";
NSString*    kFBPostLink=@"link";
NSString*    kFBPostCaption=@"caption";
NSString*    kFBPostDescription=@"description";
NSString*    kFBPostMedia=@"picture";
NSString    *kFBPostMessage = @"message";

// Coupon related

NSString    *kCouponList = @"coupon_list";
NSString *kPlaceImageUrlKey=@"place_image_url";
