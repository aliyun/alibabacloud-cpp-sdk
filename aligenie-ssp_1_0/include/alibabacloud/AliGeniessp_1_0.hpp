// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIGENIESSP_1_0_HPP_
#define ALIBABACLOUD_ALIGENIESSP_1_0_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AliGeniessp_1_0Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AliGeniessp_1_0.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Collect or remove from favorites.
       *
       * @param tmpReq AddAndRemoveFavoriteContentRequest
       * @param headers AddAndRemoveFavoriteContentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAndRemoveFavoriteContentResponse
       */
      Models::AddAndRemoveFavoriteContentResponse addAndRemoveFavoriteContentWithOptions(const Models::AddAndRemoveFavoriteContentRequest &tmpReq, const Models::AddAndRemoveFavoriteContentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Collect or remove from favorites.
       *
       * @param request AddAndRemoveFavoriteContentRequest
       * @return AddAndRemoveFavoriteContentResponse
       */
      Models::AddAndRemoveFavoriteContentResponse addAndRemoveFavoriteContent(const Models::AddAndRemoveFavoriteContentRequest &request);

      /**
       * @summary Subscribe to an album.
       *
       * @param tmpReq AddSubRequest
       * @param headers AddSubHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSubResponse
       */
      Models::AddSubResponse addSubWithOptions(const Models::AddSubRequest &tmpReq, const Models::AddSubHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Subscribe to an album.
       *
       * @param request AddSubRequest
       * @return AddSubResponse
       */
      Models::AddSubResponse addSub(const Models::AddSubRequest &request);

      /**
       * @summary Authorize logon by specifying an Aligenie account.
       *
       * @param request AuthLoginWithAligenieUserInfoRequest
       * @param headers AuthLoginWithAligenieUserInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthLoginWithAligenieUserInfoResponse
       */
      Models::AuthLoginWithAligenieUserInfoResponse authLoginWithAligenieUserInfoWithOptions(const Models::AuthLoginWithAligenieUserInfoRequest &request, const Models::AuthLoginWithAligenieUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorize logon by specifying an Aligenie account.
       *
       * @param request AuthLoginWithAligenieUserInfoRequest
       * @return AuthLoginWithAligenieUserInfoResponse
       */
      Models::AuthLoginWithAligenieUserInfoResponse authLoginWithAligenieUserInfo(const Models::AuthLoginWithAligenieUserInfoRequest &request);

      /**
       * @summary Generate a Genie account by phone number for authorization logon.
       *
       * @param request AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest
       * @param headers AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse
       */
      Models::AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse authLoginWithAligenieUserInfoGeneratedByPhoneNumberWithOptions(const Models::AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest &request, const Models::AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate a Genie account by phone number for authorization logon.
       *
       * @param request AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest
       * @return AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse
       */
      Models::AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse authLoginWithAligenieUserInfoGeneratedByPhoneNumber(const Models::AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest &request);

      /**
       * @summary Authorize logon by specifying a Taobao account
       *
       * @param request AuthLoginWithTaobaoUserInfoRequest
       * @param headers AuthLoginWithTaobaoUserInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthLoginWithTaobaoUserInfoResponse
       */
      Models::AuthLoginWithTaobaoUserInfoResponse authLoginWithTaobaoUserInfoWithOptions(const Models::AuthLoginWithTaobaoUserInfoRequest &request, const Models::AuthLoginWithTaobaoUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorize logon by specifying a Taobao account
       *
       * @param request AuthLoginWithTaobaoUserInfoRequest
       * @return AuthLoginWithTaobaoUserInfoResponse
       */
      Models::AuthLoginWithTaobaoUserInfoResponse authLoginWithTaobaoUserInfo(const Models::AuthLoginWithTaobaoUserInfoRequest &request);

      /**
       * @summary Authorize logon by using third-party user information.
       *
       * @param tmpReq AuthLoginWithThirdUserInfoRequest
       * @param headers AuthLoginWithThirdUserInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthLoginWithThirdUserInfoResponse
       */
      Models::AuthLoginWithThirdUserInfoResponse authLoginWithThirdUserInfoWithOptions(const Models::AuthLoginWithThirdUserInfoRequest &tmpReq, const Models::AuthLoginWithThirdUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorize logon by using third-party user information.
       *
       * @param request AuthLoginWithThirdUserInfoRequest
       * @return AuthLoginWithThirdUserInfoResponse
       */
      Models::AuthLoginWithThirdUserInfoResponse authLoginWithThirdUserInfo(const Models::AuthLoginWithThirdUserInfoRequest &request);

      /**
       * @summary 检查并拨打voip电话【酒店业务】
       *
       * @param tmpReq CheckAndDoVoipCallForHotelRequest
       * @param headers CheckAndDoVoipCallForHotelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAndDoVoipCallForHotelResponse
       */
      Models::CheckAndDoVoipCallForHotelResponse checkAndDoVoipCallForHotelWithOptions(const Models::CheckAndDoVoipCallForHotelRequest &tmpReq, const Models::CheckAndDoVoipCallForHotelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查并拨打voip电话【酒店业务】
       *
       * @param request CheckAndDoVoipCallForHotelRequest
       * @return CheckAndDoVoipCallForHotelResponse
       */
      Models::CheckAndDoVoipCallForHotelResponse checkAndDoVoipCallForHotel(const Models::CheckAndDoVoipCallForHotelRequest &request);

      /**
       * @summary Poll the result of the activation attachment.
       *
       * @param tmpReq CheckAuthCodeBindForExtRequest
       * @param headers CheckAuthCodeBindForExtHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAuthCodeBindForExtResponse
       */
      Models::CheckAuthCodeBindForExtResponse checkAuthCodeBindForExtWithOptions(const Models::CheckAuthCodeBindForExtRequest &tmpReq, const Models::CheckAuthCodeBindForExtHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Poll the result of the activation attachment.
       *
       * @param request CheckAuthCodeBindForExtRequest
       * @return CheckAuthCodeBindForExtResponse
       */
      Models::CheckAuthCodeBindForExtResponse checkAuthCodeBindForExt(const Models::CheckAuthCodeBindForExtRequest &request);

      /**
       * @summary Cloud Push Song: Create a playlist by providing the device openUuid and the Tmall Genie openUserId.
       *
       * @description After synchronously validating the input parameters, the system asynchronously creates the playlist.
       *
       * @param tmpReq CloudPlayerRequest
       * @param headers CloudPlayerHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudPlayerResponse
       */
      Models::CloudPlayerResponse cloudPlayerWithOptions(const Models::CloudPlayerRequest &tmpReq, const Models::CloudPlayerHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cloud Push Song: Create a playlist by providing the device openUuid and the Tmall Genie openUserId.
       *
       * @description After synchronously validating the input parameters, the system asynchronously creates the playlist.
       *
       * @param request CloudPlayerRequest
       * @return CloudPlayerResponse
       */
      Models::CloudPlayerResponse cloudPlayer(const Models::CloudPlayerRequest &request);

      /**
       * @summary Create an alarm that supports three types: one-time, weekly, and legal working days.
       *
       * @param tmpReq CreateAlarmRequest
       * @param headers CreateAlarmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlarmResponse
       */
      Models::CreateAlarmResponse createAlarmWithOptions(const Models::CreateAlarmRequest &tmpReq, const Models::CreateAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an alarm that supports three types: one-time, weekly, and legal working days.
       *
       * @param request CreateAlarmRequest
       * @return CreateAlarmResponse
       */
      Models::CreateAlarmResponse createAlarm(const Models::CreateAlarmRequest &request);

      /**
       * @summary Create a playlist and play the specified content.
       *
       * @param tmpReq CreatePlayingListRequest
       * @param headers CreatePlayingListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePlayingListResponse
       */
      Models::CreatePlayingListResponse createPlayingListWithOptions(const Models::CreatePlayingListRequest &tmpReq, const Models::CreatePlayingListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a playlist and play the specified content.
       *
       * @param request CreatePlayingListRequest
       * @return CreatePlayingListResponse
       */
      Models::CreatePlayingListResponse createPlayingList(const Models::CreatePlayingListRequest &request);

      /**
       * @summary Playlist creation uses OAuth2 authorization.
       *
       * @param tmpReq CreatePlayingListOAuth2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePlayingListOAuth2Response
       */
      Models::CreatePlayingListOAuth2Response createPlayingListOAuth2WithOptions(const Models::CreatePlayingListOAuth2Request &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Playlist creation uses OAuth2 authorization.
       *
       * @param request CreatePlayingListOAuth2Request
       * @return CreatePlayingListOAuth2Response
       */
      Models::CreatePlayingListOAuth2Response createPlayingListOAuth2(const Models::CreatePlayingListOAuth2Request &request);

      /**
       * @summary Create a scheduled task.
       *
       * @description Configure a triggering task for Custom instruction data in the ecosystem based on scheduling rules such as one-time, daily, or business days.
       *
       * @param tmpReq CreateScheduleTaskRequest
       * @param headers CreateScheduleTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduleTaskResponse
       */
      Models::CreateScheduleTaskResponse createScheduleTaskWithOptions(const Models::CreateScheduleTaskRequest &tmpReq, const Models::CreateScheduleTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a scheduled task.
       *
       * @description Configure a triggering task for Custom instruction data in the ecosystem based on scheduling rules such as one-time, daily, or business days.
       *
       * @param request CreateScheduleTaskRequest
       * @return CreateScheduleTaskResponse
       */
      Models::CreateScheduleTaskResponse createScheduleTask(const Models::CreateScheduleTaskRequest &request);

      /**
       * @summary Delete alarms. You can delete multiple alarms at the same time.
       *
       * @param tmpReq DeleteAlarmsRequest
       * @param headers DeleteAlarmsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlarmsResponse
       */
      Models::DeleteAlarmsResponse deleteAlarmsWithOptions(const Models::DeleteAlarmsRequest &tmpReq, const Models::DeleteAlarmsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete alarms. You can delete multiple alarms at the same time.
       *
       * @param request DeleteAlarmsRequest
       * @return DeleteAlarmsResponse
       */
      Models::DeleteAlarmsResponse deleteAlarms(const Models::DeleteAlarmsRequest &request);

      /**
       * @summary Delete a scheduled task.
       *
       * @description Deletes a specified scheduled task by its ID.
       *
       * @param tmpReq DeleteScheduleTaskRequest
       * @param headers DeleteScheduleTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduleTaskResponse
       */
      Models::DeleteScheduleTaskResponse deleteScheduleTaskWithOptions(const Models::DeleteScheduleTaskRequest &tmpReq, const Models::DeleteScheduleTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a scheduled task.
       *
       * @description Deletes a specified scheduled task by its ID.
       *
       * @param request DeleteScheduleTaskRequest
       * @return DeleteScheduleTaskResponse
       */
      Models::DeleteScheduleTaskResponse deleteScheduleTask(const Models::DeleteScheduleTaskRequest &request);

      /**
       * @summary Delete a subscribed album.
       *
       * @param request DeleteSubRequest
       * @param headers DeleteSubHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSubResponse
       */
      Models::DeleteSubResponse deleteSubWithOptions(const Models::DeleteSubRequest &request, const Models::DeleteSubHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a subscribed album.
       *
       * @param request DeleteSubRequest
       * @return DeleteSubResponse
       */
      Models::DeleteSubResponse deleteSub(const Models::DeleteSubRequest &request);

      /**
       * @summary Control property values such as device volume.
       *
       * @description Specify a device to modify property values such as volume.
       *
       * @param tmpReq DeviceControlRequest
       * @param headers DeviceControlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeviceControlResponse
       */
      Models::DeviceControlResponse deviceControlWithOptions(const Models::DeviceControlRequest &tmpReq, const Models::DeviceControlHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Control property values such as device volume.
       *
       * @description Specify a device to modify property values such as volume.
       *
       * @param request DeviceControlRequest
       * @return DeviceControlResponse
       */
      Models::DeviceControlResponse deviceControl(const Models::DeviceControlRequest &request);

      /**
       * @summary Use the login-state access token for authentication to obtain the third-party user identifier and the Tmall Genie user\\"s openId.
       *
       * @description Note: When the login state expires, the integrator must reinitiate the authorization login flow to obtain a new login state (entry service API: AuthLoginWithThirdUserInfo).
       * - Invoke the service API with the login-state access credential (LoginStateAccessToken) parameter by using the Java SDK (for SDKs in other languages, consult Tmall Genie developers during integration).  
       * If the API call throws a TeaException and TeaException.code is InvalidAuthentication, the login state has expired.
       * - Invoke the service API by sending an HTTP request with the login-state access credential (LoginStateAccessToken) parameter.  
       * If the HTTP response status code returned by the API call is 400, the login state has expired.
       *
       * @param request EcologyOpennessAuthenticateRequest
       * @param headers EcologyOpennessAuthenticateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return EcologyOpennessAuthenticateResponse
       */
      Models::EcologyOpennessAuthenticateResponse ecologyOpennessAuthenticateWithOptions(const Models::EcologyOpennessAuthenticateRequest &request, const Models::EcologyOpennessAuthenticateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the login-state access token for authentication to obtain the third-party user identifier and the Tmall Genie user\\"s openId.
       *
       * @description Note: When the login state expires, the integrator must reinitiate the authorization login flow to obtain a new login state (entry service API: AuthLoginWithThirdUserInfo).
       * - Invoke the service API with the login-state access credential (LoginStateAccessToken) parameter by using the Java SDK (for SDKs in other languages, consult Tmall Genie developers during integration).  
       * If the API call throws a TeaException and TeaException.code is InvalidAuthentication, the login state has expired.
       * - Invoke the service API by sending an HTTP request with the login-state access credential (LoginStateAccessToken) parameter.  
       * If the HTTP response status code returned by the API call is 400, the login state has expired.
       *
       * @param request EcologyOpennessAuthenticateRequest
       * @return EcologyOpennessAuthenticateResponse
       */
      Models::EcologyOpennessAuthenticateResponse ecologyOpennessAuthenticate(const Models::EcologyOpennessAuthenticateRequest &request);

      /**
       * @summary Ecosystem Open API for sending SMS verification codes
       *
       * @param request EcologyOpennessSendVerificationCodeRequest
       * @param headers EcologyOpennessSendVerificationCodeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return EcologyOpennessSendVerificationCodeResponse
       */
      Models::EcologyOpennessSendVerificationCodeResponse ecologyOpennessSendVerificationCodeWithOptions(const Models::EcologyOpennessSendVerificationCodeRequest &request, const Models::EcologyOpennessSendVerificationCodeHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ecosystem Open API for sending SMS verification codes
       *
       * @param request EcologyOpennessSendVerificationCodeRequest
       * @return EcologyOpennessSendVerificationCodeResponse
       */
      Models::EcologyOpennessSendVerificationCodeResponse ecologyOpennessSendVerificationCode(const Models::EcologyOpennessSendVerificationCodeRequest &request);

      /**
       * @summary Find a list of accounts that can be authorized to log on by phone number
       *
       * @param request FindUserlistToAuthLoginWithPhoneNumberRequest
       * @param headers FindUserlistToAuthLoginWithPhoneNumberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindUserlistToAuthLoginWithPhoneNumberResponse
       */
      Models::FindUserlistToAuthLoginWithPhoneNumberResponse findUserlistToAuthLoginWithPhoneNumberWithOptions(const Models::FindUserlistToAuthLoginWithPhoneNumberRequest &request, const Models::FindUserlistToAuthLoginWithPhoneNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Find a list of accounts that can be authorized to log on by phone number
       *
       * @param request FindUserlistToAuthLoginWithPhoneNumberRequest
       * @return FindUserlistToAuthLoginWithPhoneNumberResponse
       */
      Models::FindUserlistToAuthLoginWithPhoneNumberResponse findUserlistToAuthLoginWithPhoneNumber(const Models::FindUserlistToAuthLoginWithPhoneNumberRequest &request);

      /**
       * @summary Retrieve the detailed information of a specific alarm clock.
       *
       * @param tmpReq GetAlarmRequest
       * @param headers GetAlarmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlarmResponse
       */
      Models::GetAlarmResponse getAlarmWithOptions(const Models::GetAlarmRequest &tmpReq, const Models::GetAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the detailed information of a specific alarm clock.
       *
       * @param request GetAlarmRequest
       * @return GetAlarmResponse
       */
      Models::GetAlarmResponse getAlarm(const Models::GetAlarmRequest &request);

      /**
       * @summary Retrieve album information by a specific ID.
       *
       * @param request GetAlbumRequest
       * @param headers GetAlbumHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlbumResponse
       */
      Models::GetAlbumResponse getAlbumWithOptions(const Models::GetAlbumRequest &request, const Models::GetAlbumHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve album information by a specific ID.
       *
       * @param request GetAlbumRequest
       * @return GetAlbumResponse
       */
      Models::GetAlbumResponse getAlbum(const Models::GetAlbumRequest &request);

      /**
       * @summary Retrieve album information.
       *
       * @param request GetAlbumDetailByIdRequest
       * @param headers GetAlbumDetailByIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlbumDetailByIdResponse
       */
      Models::GetAlbumDetailByIdResponse getAlbumDetailByIdWithOptions(const Models::GetAlbumDetailByIdRequest &request, const Models::GetAlbumDetailByIdHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve album information.
       *
       * @param request GetAlbumDetailByIdRequest
       * @return GetAlbumDetailByIdResponse
       */
      Models::GetAlbumDetailByIdResponse getAlbumDetailById(const Models::GetAlbumDetailByIdRequest &request);

      /**
       * @summary Obtain the Aligenie account information bound to a third party by using the logon state credential
       *
       * @description Note: When the logon state expires, the integrator must initiate the authorization logon flow again to obtain a new logon state (entry service API: AuthLoginWithThirdUserInfo).
       * - Invoke the service API with the logon state access credential (LoginStateAccessToken) parameter by using the Java software development kit (SDK). For SDKs in other languages, consult the Tmall Genie developer team during integration.  
       * If the API call throws a TeaException and TeaException.code is InvalidAuthentication, the logon state has expired.
       * - Invoke the service API by sending an HTTP request with the logon state access credential (LoginStateAccessToken) parameter.  
       * If the HTTP response status code returned by the API call is 400, the logon state has expired.
       *
       * @param request GetAligenieUserInfoRequest
       * @param headers GetAligenieUserInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAligenieUserInfoResponse
       */
      Models::GetAligenieUserInfoResponse getAligenieUserInfoWithOptions(const Models::GetAligenieUserInfoRequest &request, const Models::GetAligenieUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the Aligenie account information bound to a third party by using the logon state credential
       *
       * @description Note: When the logon state expires, the integrator must initiate the authorization logon flow again to obtain a new logon state (entry service API: AuthLoginWithThirdUserInfo).
       * - Invoke the service API with the logon state access credential (LoginStateAccessToken) parameter by using the Java software development kit (SDK). For SDKs in other languages, consult the Tmall Genie developer team during integration.  
       * If the API call throws a TeaException and TeaException.code is InvalidAuthentication, the logon state has expired.
       * - Invoke the service API by sending an HTTP request with the logon state access credential (LoginStateAccessToken) parameter.  
       * If the HTTP response status code returned by the API call is 400, the logon state has expired.
       *
       * @param request GetAligenieUserInfoRequest
       * @return GetAligenieUserInfoResponse
       */
      Models::GetAligenieUserInfoResponse getAligenieUserInfo(const Models::GetAligenieUserInfoRequest &request);

      /**
       * @summary Obtain the authCode.
       *
       * @description Obtain the corresponding authCode by specifying the user ID.
       *
       * @param tmpReq GetCodeEnhanceRequest
       * @param headers GetCodeEnhanceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCodeEnhanceResponse
       */
      Models::GetCodeEnhanceResponse getCodeEnhanceWithOptions(const Models::GetCodeEnhanceRequest &tmpReq, const Models::GetCodeEnhanceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the authCode.
       *
       * @description Obtain the corresponding authCode by specifying the user ID.
       *
       * @param request GetCodeEnhanceRequest
       * @return GetCodeEnhanceResponse
       */
      Models::GetCodeEnhanceResponse getCodeEnhance(const Models::GetCodeEnhanceRequest &request);

      /**
       * @summary Retrieve content information by a specific ID
       *
       * @param request GetContentRequest
       * @param headers GetContentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContentResponse
       */
      Models::GetContentResponse getContentWithOptions(const Models::GetContentRequest &request, const Models::GetContentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve content information by a specific ID
       *
       * @param request GetContentRequest
       * @return GetContentResponse
       */
      Models::GetContentResponse getContent(const Models::GetContentRequest &request);

      /**
       * @summary Obtain the current playback item.
       *
       * @param tmpReq GetCurrentPlayingItemRequest
       * @param headers GetCurrentPlayingItemHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCurrentPlayingItemResponse
       */
      Models::GetCurrentPlayingItemResponse getCurrentPlayingItemWithOptions(const Models::GetCurrentPlayingItemRequest &tmpReq, const Models::GetCurrentPlayingItemHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the current playback item.
       *
       * @param request GetCurrentPlayingItemRequest
       * @return GetCurrentPlayingItemResponse
       */
      Models::GetCurrentPlayingItemResponse getCurrentPlayingItem(const Models::GetCurrentPlayingItemRequest &request);

      /**
       * @summary Obtain the current playlist.
       *
       * @param tmpReq GetCurrentPlayingListRequest
       * @param headers GetCurrentPlayingListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCurrentPlayingListResponse
       */
      Models::GetCurrentPlayingListResponse getCurrentPlayingListWithOptions(const Models::GetCurrentPlayingListRequest &tmpReq, const Models::GetCurrentPlayingListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the current playlist.
       *
       * @param request GetCurrentPlayingListRequest
       * @return GetCurrentPlayingListResponse
       */
      Models::GetCurrentPlayingListResponse getCurrentPlayingList(const Models::GetCurrentPlayingListRequest &request);

      /**
       * @summary Obtain basic device information by Device ID.
       *
       * @param tmpReq GetDeviceBasicInfoRequest
       * @param headers GetDeviceBasicInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceBasicInfoResponse
       */
      Models::GetDeviceBasicInfoResponse getDeviceBasicInfoWithOptions(const Models::GetDeviceBasicInfoRequest &tmpReq, const Models::GetDeviceBasicInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain basic device information by Device ID.
       *
       * @param request GetDeviceBasicInfoRequest
       * @return GetDeviceBasicInfoResponse
       */
      Models::GetDeviceBasicInfoResponse getDeviceBasicInfo(const Models::GetDeviceBasicInfoRequest &request);

      /**
       * @summary Obtain the Device ID based on the device MAC or SN.
       *
       * @param request GetDeviceIdByIdentityRequest
       * @param headers GetDeviceIdByIdentityHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceIdByIdentityResponse
       */
      Models::GetDeviceIdByIdentityResponse getDeviceIdByIdentityWithOptions(const Models::GetDeviceIdByIdentityRequest &request, const Models::GetDeviceIdByIdentityHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the Device ID based on the device MAC or SN.
       *
       * @param request GetDeviceIdByIdentityRequest
       * @return GetDeviceIdByIdentityResponse
       */
      Models::GetDeviceIdByIdentityResponse getDeviceIdByIdentity(const Models::GetDeviceIdByIdentityRequest &request);

      /**
       * @summary Obtain the user settings of a device.
       *
       * @param tmpReq GetDeviceSettingRequest
       * @param headers GetDeviceSettingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceSettingResponse
       */
      Models::GetDeviceSettingResponse getDeviceSettingWithOptions(const Models::GetDeviceSettingRequest &tmpReq, const Models::GetDeviceSettingHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the user settings of a device.
       *
       * @param request GetDeviceSettingRequest
       * @return GetDeviceSettingResponse
       */
      Models::GetDeviceSettingResponse getDeviceSetting(const Models::GetDeviceSettingRequest &request);

      /**
       * @summary Obtain device status details.
       *
       * @param tmpReq GetDeviceStatusDetailRequest
       * @param headers GetDeviceStatusDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceStatusDetailResponse
       */
      Models::GetDeviceStatusDetailResponse getDeviceStatusDetailWithOptions(const Models::GetDeviceStatusDetailRequest &tmpReq, const Models::GetDeviceStatusDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain device status details.
       *
       * @param request GetDeviceStatusDetailRequest
       * @return GetDeviceStatusDetailResponse
       */
      Models::GetDeviceStatusDetailResponse getDeviceStatusDetail(const Models::GetDeviceStatusDetailRequest &request);

      /**
       * @summary Obtain the online status of a device based on its openID.
       *
       * @param tmpReq GetDeviceStatusInfoRequest
       * @param headers GetDeviceStatusInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceStatusInfoResponse
       */
      Models::GetDeviceStatusInfoResponse getDeviceStatusInfoWithOptions(const Models::GetDeviceStatusInfoRequest &tmpReq, const Models::GetDeviceStatusInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the online status of a device based on its openID.
       *
       * @param request GetDeviceStatusInfoRequest
       * @return GetDeviceStatusInfoResponse
       */
      Models::GetDeviceStatusInfoResponse getDeviceStatusInfo(const Models::GetDeviceStatusInfoRequest &request);

      /**
       * @summary Obtain the tag information of a device.
       *
       * @param tmpReq GetDeviceTagRequest
       * @param headers GetDeviceTagHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceTagResponse
       */
      Models::GetDeviceTagResponse getDeviceTagWithOptions(const Models::GetDeviceTagRequest &tmpReq, const Models::GetDeviceTagHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the tag information of a device.
       *
       * @param request GetDeviceTagRequest
       * @return GetDeviceTagResponse
       */
      Models::GetDeviceTagResponse getDeviceTag(const Models::GetDeviceTagRequest &request);

      /**
       * @summary Derived requirements from Jiangsu Telecom\\"s self-developed desktop launcher project. HaoBai expects to collect statistics on the activation rate, active user rate, and top user usage patterns after the project is published, and to generate daily and weekly reports. Daily reports are synchronized automatically via API, while weekly reports are synchronized offline.
       *
       * @param request GetJiangSuTelecomDataRequest
       * @param headers GetJiangSuTelecomDataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJiangSuTelecomDataResponse
       */
      Models::GetJiangSuTelecomDataResponse getJiangSuTelecomDataWithOptions(const Models::GetJiangSuTelecomDataRequest &request, const Models::GetJiangSuTelecomDataHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Derived requirements from Jiangsu Telecom\\"s self-developed desktop launcher project. HaoBai expects to collect statistics on the activation rate, active user rate, and top user usage patterns after the project is published, and to generate daily and weekly reports. Daily reports are synchronized automatically via API, while weekly reports are synchronized offline.
       *
       * @param request GetJiangSuTelecomDataRequest
       * @return GetJiangSuTelecomDataResponse
       */
      Models::GetJiangSuTelecomDataResponse getJiangSuTelecomData(const Models::GetJiangSuTelecomDataRequest &request);

      /**
       * @summary Obtain scheduled task information.
       *
       * @description Query the details of a specified scheduled task by its ID.
       *
       * @param tmpReq GetScheduleTaskRequest
       * @param headers GetScheduleTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduleTaskResponse
       */
      Models::GetScheduleTaskResponse getScheduleTaskWithOptions(const Models::GetScheduleTaskRequest &tmpReq, const Models::GetScheduleTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain scheduled task information.
       *
       * @description Query the details of a specified scheduled task by its ID.
       *
       * @param request GetScheduleTaskRequest
       * @return GetScheduleTaskResponse
       */
      Models::GetScheduleTaskResponse getScheduleTask(const Models::GetScheduleTaskRequest &request);

      /**
       * @summary Query the number of unread messages for a user.
       *
       * @param tmpReq GetUnreadMessageCountRequest
       * @param headers GetUnreadMessageCountHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUnreadMessageCountResponse
       */
      Models::GetUnreadMessageCountResponse getUnreadMessageCountWithOptions(const Models::GetUnreadMessageCountRequest &tmpReq, const Models::GetUnreadMessageCountHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the number of unread messages for a user.
       *
       * @param request GetUnreadMessageCountRequest
       * @return GetUnreadMessageCountResponse
       */
      Models::GetUnreadMessageCountResponse getUnreadMessageCount(const Models::GetUnreadMessageCountRequest &request);

      /**
       * @summary Obtain the User ID attached to a device by the device\\"s openID.
       *
       * @param tmpReq GetUserByDeviceIdRequest
       * @param headers GetUserByDeviceIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserByDeviceIdResponse
       */
      Models::GetUserByDeviceIdResponse getUserByDeviceIdWithOptions(const Models::GetUserByDeviceIdRequest &tmpReq, const Models::GetUserByDeviceIdHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the User ID attached to a device by the device\\"s openID.
       *
       * @param request GetUserByDeviceIdRequest
       * @return GetUserByDeviceIdResponse
       */
      Models::GetUserByDeviceIdResponse getUserByDeviceId(const Models::GetUserByDeviceIdRequest &request);

      /**
       * @summary Query the weather.
       *
       * @description Query the weather data for the location of the device based on the Device Information obtained from system parameters.
       *
       * @param tmpReq GetWeatherRequest
       * @param headers GetWeatherHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWeatherResponse
       */
      Models::GetWeatherResponse getWeatherWithOptions(const Models::GetWeatherRequest &tmpReq, const Models::GetWeatherHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the weather.
       *
       * @description Query the weather data for the location of the device based on the Device Information obtained from system parameters.
       *
       * @param request GetWeatherRequest
       * @return GetWeatherResponse
       */
      Models::GetWeatherResponse getWeather(const Models::GetWeatherRequest &request);

      /**
       * @summary Click a playlist to start playback.
       *
       * @param tmpReq IndexControlPlayingListRequest
       * @param headers IndexControlPlayingListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IndexControlPlayingListResponse
       */
      Models::IndexControlPlayingListResponse indexControlPlayingListWithOptions(const Models::IndexControlPlayingListRequest &tmpReq, const Models::IndexControlPlayingListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Click a playlist to start playback.
       *
       * @param request IndexControlPlayingListRequest
       * @return IndexControlPlayingListResponse
       */
      Models::IndexControlPlayingListResponse indexControlPlayingList(const Models::IndexControlPlayingListRequest &request);

      /**
       * @summary When a user operation (not initiated from the device side) causes the login session of a third-party application on the device to become invalid (for example, the user logs on to the same account from a new device, invalidating the session on the old device, or the user changes their password, which invalidates the session on the old device), the third party must invoke this API to notify Tmall Genie.
       *
       * @description > Modify message notification template  
       * > - You need to query the templateId first, then modify other parameters based on the templateId.
       *
       * @param tmpReq InvalidateThirdPartyAppLoginStateRequest
       * @param headers InvalidateThirdPartyAppLoginStateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvalidateThirdPartyAppLoginStateResponse
       */
      Models::InvalidateThirdPartyAppLoginStateResponse invalidateThirdPartyAppLoginStateWithOptions(const Models::InvalidateThirdPartyAppLoginStateRequest &tmpReq, const Models::InvalidateThirdPartyAppLoginStateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary When a user operation (not initiated from the device side) causes the login session of a third-party application on the device to become invalid (for example, the user logs on to the same account from a new device, invalidating the session on the old device, or the user changes their password, which invalidates the session on the old device), the third party must invoke this API to notify Tmall Genie.
       *
       * @description > Modify message notification template  
       * > - You need to query the templateId first, then modify other parameters based on the templateId.
       *
       * @param request InvalidateThirdPartyAppLoginStateRequest
       * @return InvalidateThirdPartyAppLoginStateResponse
       */
      Models::InvalidateThirdPartyAppLoginStateResponse invalidateThirdPartyAppLoginState(const Models::InvalidateThirdPartyAppLoginStateRequest &request);

      /**
       * @summary Perform a paged query to retrieve the alarm clock list of a specific User on a device.
       *
       * @param tmpReq ListAlarmsRequest
       * @param headers ListAlarmsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlarmsResponse
       */
      Models::ListAlarmsResponse listAlarmsWithOptions(const Models::ListAlarmsRequest &tmpReq, const Models::ListAlarmsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Perform a paged query to retrieve the alarm clock list of a specific User on a device.
       *
       * @param request ListAlarmsRequest
       * @return ListAlarmsResponse
       */
      Models::ListAlarmsResponse listAlarms(const Models::ListAlarmsRequest &request);

      /**
       * @summary Obtain the content list within a music audio album.
       *
       * @param request ListAlbumDetailRequest
       * @param headers ListAlbumDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlbumDetailResponse
       */
      Models::ListAlbumDetailResponse listAlbumDetailWithOptions(const Models::ListAlbumDetailRequest &request, const Models::ListAlbumDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the content list within a music audio album.
       *
       * @param request ListAlbumDetailRequest
       * @return ListAlbumDetailResponse
       */
      Models::ListAlbumDetailResponse listAlbumDetail(const Models::ListAlbumDetailRequest &request);

      /**
       * @summary Whether the album is subscribed.
       *
       * @param tmpReq ListAlbumIsAddedRequest
       * @param headers ListAlbumIsAddedHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlbumIsAddedResponse
       */
      Models::ListAlbumIsAddedResponse listAlbumIsAddedWithOptions(const Models::ListAlbumIsAddedRequest &tmpReq, const Models::ListAlbumIsAddedHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Whether the album is subscribed.
       *
       * @param request ListAlbumIsAddedRequest
       * @return ListAlbumIsAddedResponse
       */
      Models::ListAlbumIsAddedResponse listAlbumIsAdded(const Models::ListAlbumIsAddedRequest &request);

      /**
       * @summary Obtain the content under a specific category according to the specified sorting order.
       *
       * @param tmpReq ListCateContentRequest
       * @param headers ListCateContentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCateContentResponse
       */
      Models::ListCateContentResponse listCateContentWithOptions(const Models::ListCateContentRequest &tmpReq, const Models::ListCateContentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the content under a specific category according to the specified sorting order.
       *
       * @param request ListCateContentRequest
       * @return ListCateContentResponse
       */
      Models::ListCateContentResponse listCateContent(const Models::ListCateContentRequest &request);

      /**
       * @summary Obtain category information.
       *
       * @param request ListCateInfoRequest
       * @param headers ListCateInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCateInfoResponse
       */
      Models::ListCateInfoResponse listCateInfoWithOptions(const Models::ListCateInfoRequest &request, const Models::ListCateInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain category information.
       *
       * @param request ListCateInfoRequest
       * @return ListCateInfoResponse
       */
      Models::ListCateInfoResponse listCateInfo(const Models::ListCateInfoRequest &request);

      /**
       * @summary Obtain the top-level category list for music or audio.
       *
       * @param request ListCommonCateFirstFloorRequest
       * @param headers ListCommonCateFirstFloorHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCommonCateFirstFloorResponse
       */
      Models::ListCommonCateFirstFloorResponse listCommonCateFirstFloorWithOptions(const Models::ListCommonCateFirstFloorRequest &request, const Models::ListCommonCateFirstFloorHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the top-level category list for music or audio.
       *
       * @param request ListCommonCateFirstFloorRequest
       * @return ListCommonCateFirstFloorResponse
       */
      Models::ListCommonCateFirstFloorResponse listCommonCateFirstFloor(const Models::ListCommonCateFirstFloorRequest &request);

      /**
       * @summary Retrieve the list of level-2 categories under a specified level-1 category.
       *
       * @param request ListCommonCateSecondFloorRequest
       * @param headers ListCommonCateSecondFloorHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCommonCateSecondFloorResponse
       */
      Models::ListCommonCateSecondFloorResponse listCommonCateSecondFloorWithOptions(const Models::ListCommonCateSecondFloorRequest &request, const Models::ListCommonCateSecondFloorHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of level-2 categories under a specified level-1 category.
       *
       * @param request ListCommonCateSecondFloorRequest
       * @return ListCommonCateSecondFloorResponse
       */
      Models::ListCommonCateSecondFloorResponse listCommonCateSecondFloor(const Models::ListCommonCateSecondFloorRequest &request);

      /**
       * @summary Batch retrieve basic device information based on a list of device openIDs.
       *
       * @param tmpReq ListDeviceBasicInfoRequest
       * @param headers ListDeviceBasicInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceBasicInfoResponse
       */
      Models::ListDeviceBasicInfoResponse listDeviceBasicInfoWithOptions(const Models::ListDeviceBasicInfoRequest &tmpReq, const Models::ListDeviceBasicInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch retrieve basic device information based on a list of device openIDs.
       *
       * @param request ListDeviceBasicInfoRequest
       * @return ListDeviceBasicInfoResponse
       */
      Models::ListDeviceBasicInfoResponse listDeviceBasicInfo(const Models::ListDeviceBasicInfoRequest &request);

      /**
       * @summary Obtain the list of attached Device IDs based on the user\\"s openID.
       *
       * @param tmpReq ListDeviceByUserIdRequest
       * @param headers ListDeviceByUserIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceByUserIdResponse
       */
      Models::ListDeviceByUserIdResponse listDeviceByUserIdWithOptions(const Models::ListDeviceByUserIdRequest &tmpReq, const Models::ListDeviceByUserIdHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the list of attached Device IDs based on the user\\"s openID.
       *
       * @param request ListDeviceByUserIdRequest
       * @return ListDeviceByUserIdResponse
       */
      Models::ListDeviceByUserIdResponse listDeviceByUserId(const Models::ListDeviceByUserIdRequest &request);

      /**
       * @summary Obtain the device list for a specified channel.
       *
       * @param tmpReq ListDeviceByUserIdAndChanelRequest
       * @param headers ListDeviceByUserIdAndChanelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceByUserIdAndChanelResponse
       */
      Models::ListDeviceByUserIdAndChanelResponse listDeviceByUserIdAndChanelWithOptions(const Models::ListDeviceByUserIdAndChanelRequest &tmpReq, const Models::ListDeviceByUserIdAndChanelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the device list for a specified channel.
       *
       * @param request ListDeviceByUserIdAndChanelRequest
       * @return ListDeviceByUserIdAndChanelResponse
       */
      Models::ListDeviceByUserIdAndChanelResponse listDeviceByUserIdAndChanel(const Models::ListDeviceByUserIdAndChanelRequest &request);

      /**
       * @summary Batch retrieve Device IDs by device MAC/SN.
       *
       * @param tmpReq ListDeviceIdByIdentitiesRequest
       * @param headers ListDeviceIdByIdentitiesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceIdByIdentitiesResponse
       */
      Models::ListDeviceIdByIdentitiesResponse listDeviceIdByIdentitiesWithOptions(const Models::ListDeviceIdByIdentitiesRequest &tmpReq, const Models::ListDeviceIdByIdentitiesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch retrieve Device IDs by device MAC/SN.
       *
       * @param request ListDeviceIdByIdentitiesRequest
       * @return ListDeviceIdByIdentitiesResponse
       */
      Models::ListDeviceIdByIdentitiesResponse listDeviceIdByIdentities(const Models::ListDeviceIdByIdentitiesRequest &request);

      /**
       * @summary Query the list of ringtones under a specified music category.
       *
       * @param tmpReq ListMusicRequest
       * @param headers ListMusicHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMusicResponse
       */
      Models::ListMusicResponse listMusicWithOptions(const Models::ListMusicRequest &tmpReq, const Models::ListMusicHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of ringtones under a specified music category.
       *
       * @param request ListMusicRequest
       * @return ListMusicResponse
       */
      Models::ListMusicResponse listMusic(const Models::ListMusicRequest &request);

      /**
       * @summary Obtain the history playback API.
       *
       * @param tmpReq ListPlayHistoryRequest
       * @param headers ListPlayHistoryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPlayHistoryResponse
       */
      Models::ListPlayHistoryResponse listPlayHistoryWithOptions(const Models::ListPlayHistoryRequest &tmpReq, const Models::ListPlayHistoryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the history playback API.
       *
       * @param request ListPlayHistoryRequest
       * @return ListPlayHistoryResponse
       */
      Models::ListPlayHistoryResponse listPlayHistory(const Models::ListPlayHistoryRequest &request);

      /**
       * @summary Obtain daily recommended music or audio.
       *
       * @param tmpReq ListRecommendContentRequest
       * @param headers ListRecommendContentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecommendContentResponse
       */
      Models::ListRecommendContentResponse listRecommendContentWithOptions(const Models::ListRecommendContentRequest &tmpReq, const Models::ListRecommendContentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain daily recommended music or audio.
       *
       * @param request ListRecommendContentRequest
       * @return ListRecommendContentResponse
       */
      Models::ListRecommendContentResponse listRecommendContent(const Models::ListRecommendContentRequest &request);

      /**
       * @summary The user has subscribed to the list.
       *
       * @param tmpReq ListSubRequest
       * @param headers ListSubHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubResponse
       */
      Models::ListSubResponse listSubWithOptions(const Models::ListSubRequest &tmpReq, const Models::ListSubHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The user has subscribed to the list.
       *
       * @param request ListSubRequest
       * @return ListSubResponse
       */
      Models::ListSubResponse listSub(const Models::ListSubRequest &request);

      /**
       * @summary Album List.
       *
       * @param tmpReq ListSubAlbumRequest
       * @param headers ListSubAlbumHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubAlbumResponse
       */
      Models::ListSubAlbumResponse listSubAlbumWithOptions(const Models::ListSubAlbumRequest &tmpReq, const Models::ListSubAlbumHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Album List.
       *
       * @param request ListSubAlbumRequest
       * @return ListSubAlbumResponse
       */
      Models::ListSubAlbumResponse listSubAlbum(const Models::ListSubAlbumRequest &request);

      /**
       * @summary Album categorization.
       *
       * @param request ListSubscriptionAlbumCategoryRequest
       * @param headers ListSubscriptionAlbumCategoryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubscriptionAlbumCategoryResponse
       */
      Models::ListSubscriptionAlbumCategoryResponse listSubscriptionAlbumCategoryWithOptions(const Models::ListSubscriptionAlbumCategoryRequest &request, const Models::ListSubscriptionAlbumCategoryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Album categorization.
       *
       * @param request ListSubscriptionAlbumCategoryRequest
       * @return ListSubscriptionAlbumCategoryResponse
       */
      Models::ListSubscriptionAlbumCategoryResponse listSubscriptionAlbumCategory(const Models::ListSubscriptionAlbumCategoryRequest &request);

      /**
       * @summary Query the list of user message records based on the query conditions, including the start time and the number of entries to return.
       *
       * @param tmpReq ListUserMessageRequest
       * @param headers ListUserMessageHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserMessageResponse
       */
      Models::ListUserMessageResponse listUserMessageWithOptions(const Models::ListUserMessageRequest &tmpReq, const Models::ListUserMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of user message records based on the query conditions, including the start time and the number of entries to return.
       *
       * @param request ListUserMessageRequest
       * @return ListUserMessageResponse
       */
      Models::ListUserMessageResponse listUserMessage(const Models::ListUserMessageRequest &request);

      /**
       * @summary Shift the project to obtain recommended songs, including daily recommendations, popular songs, and genre-based playlists.
       *
       * @description Different scenarios (such as daily recommendations and popular songs) can be distinguished by the Type parameter.
       *
       * @param tmpReq MobileRecommendRequest
       * @param headers MobileRecommendHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MobileRecommendResponse
       */
      Models::MobileRecommendResponse mobileRecommendWithOptions(const Models::MobileRecommendRequest &tmpReq, const Models::MobileRecommendHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shift the project to obtain recommended songs, including daily recommendations, popular songs, and genre-based playlists.
       *
       * @description Different scenarios (such as daily recommendations and popular songs) can be distinguished by the Type parameter.
       *
       * @param request MobileRecommendRequest
       * @return MobileRecommendResponse
       */
      Models::MobileRecommendResponse mobileRecommend(const Models::MobileRecommendRequest &request);

      /**
       * @summary Playback and pause control.
       *
       * @param tmpReq PlayAndPauseControlRequest
       * @param headers PlayAndPauseControlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PlayAndPauseControlResponse
       */
      Models::PlayAndPauseControlResponse playAndPauseControlWithOptions(const Models::PlayAndPauseControlRequest &tmpReq, const Models::PlayAndPauseControlHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Playback and pause control.
       *
       * @param request PlayAndPauseControlRequest
       * @return PlayAndPauseControlResponse
       */
      Models::PlayAndPauseControlResponse playAndPauseControl(const Models::PlayAndPauseControlRequest &request);

      /**
       * @summary Switch playback mode.
       *
       * @param tmpReq PlayModeControlRequest
       * @param headers PlayModeControlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PlayModeControlResponse
       */
      Models::PlayModeControlResponse playModeControlWithOptions(const Models::PlayModeControlRequest &tmpReq, const Models::PlayModeControlHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switch playback mode.
       *
       * @param request PlayModeControlRequest
       * @return PlayModeControlResponse
       */
      Models::PlayModeControlResponse playModeControl(const Models::PlayModeControlRequest &request);

      /**
       * @summary Control the next or previous track in the created playlist.
       *
       * @param tmpReq PreviousAndNextControlRequest
       * @param headers PreviousAndNextControlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviousAndNextControlResponse
       */
      Models::PreviousAndNextControlResponse previousAndNextControlWithOptions(const Models::PreviousAndNextControlRequest &tmpReq, const Models::PreviousAndNextControlHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Control the next or previous track in the created playlist.
       *
       * @param request PreviousAndNextControlRequest
       * @return PreviousAndNextControlResponse
       */
      Models::PreviousAndNextControlResponse previousAndNextControl(const Models::PreviousAndNextControlRequest &request);

      /**
       * @summary Progress control.
       *
       * @param tmpReq ProgressControlRequest
       * @param headers ProgressControlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProgressControlResponse
       */
      Models::ProgressControlResponse progressControlWithOptions(const Models::ProgressControlRequest &tmpReq, const Models::ProgressControlHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Progress control.
       *
       * @param request ProgressControlRequest
       * @return ProgressControlResponse
       */
      Models::ProgressControlResponse progressControl(const Models::ProgressControlRequest &request);

      /**
       * @summary Obtain the collection of alarm music types supported by the device.
       *
       * @param tmpReq QueryMusicTypeRequest
       * @param headers QueryMusicTypeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMusicTypeResponse
       */
      Models::QueryMusicTypeResponse queryMusicTypeWithOptions(const Models::QueryMusicTypeRequest &tmpReq, const Models::QueryMusicTypeHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the collection of alarm music types supported by the device.
       *
       * @param request QueryMusicTypeRequest
       * @return QueryMusicTypeResponse
       */
      Models::QueryMusicTypeResponse queryMusicType(const Models::QueryMusicTypeRequest &request);

      /**
       * @summary Obtain the list of authorized Tmall Genie users and their devices by using the TME user ID, for use by KuGou Cloud Push Song service
       *
       * @param request QueryUserDeviceListByTmeUserIdRequest
       * @param headers QueryUserDeviceListByTmeUserIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserDeviceListByTmeUserIdResponse
       */
      Models::QueryUserDeviceListByTmeUserIdResponse queryUserDeviceListByTmeUserIdWithOptions(const Models::QueryUserDeviceListByTmeUserIdRequest &request, const Models::QueryUserDeviceListByTmeUserIdHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the list of authorized Tmall Genie users and their devices by using the TME user ID, for use by KuGou Cloud Push Song service
       *
       * @param request QueryUserDeviceListByTmeUserIdRequest
       * @return QueryUserDeviceListByTmeUserIdResponse
       */
      Models::QueryUserDeviceListByTmeUserIdResponse queryUserDeviceListByTmeUserId(const Models::QueryUserDeviceListByTmeUserIdRequest &request);

      /**
       * @summary Set a message to read status.
       *
       * @param tmpReq ReadMessageRequest
       * @param headers ReadMessageHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadMessageResponse
       */
      Models::ReadMessageResponse readMessageWithOptions(const Models::ReadMessageRequest &tmpReq, const Models::ReadMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set a message to read status.
       *
       * @param request ReadMessageRequest
       * @return ReadMessageResponse
       */
      Models::ReadMessageResponse readMessage(const Models::ReadMessageRequest &request);

      /**
       * @summary A screen-equipped device completes activation and attachment between the user and the device by scanning a QR code.
       *
       * @description Perform activation and attachment by scanning the QR code related to activation and attachment displayed on the device.
       *
       * @param tmpReq ScanCodeBindRequest
       * @param headers ScanCodeBindHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScanCodeBindResponse
       */
      Models::ScanCodeBindResponse scanCodeBindWithOptions(const Models::ScanCodeBindRequest &tmpReq, const Models::ScanCodeBindHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A screen-equipped device completes activation and attachment between the user and the device by scanning a QR code.
       *
       * @description Perform activation and attachment by scanning the QR code related to activation and attachment displayed on the device.
       *
       * @param request ScanCodeBindRequest
       * @return ScanCodeBindResponse
       */
      Models::ScanCodeBindResponse scanCodeBind(const Models::ScanCodeBindRequest &request);

      /**
       * @summary Query the content of a selection pool by its ID.
       *
       * @param tmpReq ScgSearchRequest
       * @param headers ScgSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScgSearchResponse
       */
      Models::ScgSearchResponse scgSearchWithOptions(const Models::ScgSearchRequest &tmpReq, const Models::ScgSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the content of a selection pool by its ID.
       *
       * @param request ScgSearchRequest
       * @return ScgSearchResponse
       */
      Models::ScgSearchResponse scgSearch(const Models::ScgSearchRequest &request);

      /**
       * @summary Search according to specific search criteria.
       *
       * @param tmpReq SearchContentRequest
       * @param headers SearchContentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchContentResponse
       */
      Models::SearchContentResponse searchContentWithOptions(const Models::SearchContentRequest &tmpReq, const Models::SearchContentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search according to specific search criteria.
       *
       * @param request SearchContentRequest
       * @return SearchContentResponse
       */
      Models::SearchContentResponse searchContent(const Models::SearchContentRequest &request);

      /**
       * @summary Send a message.
       *
       * @param tmpReq SendMessageRequest
       * @param headers SendMessageHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageResponse
       */
      Models::SendMessageResponse sendMessageWithOptions(const Models::SendMessageRequest &tmpReq, const Models::SendMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Send a message.
       *
       * @param request SendMessageRequest
       * @return SendMessageResponse
       */
      Models::SendMessageResponse sendMessage(const Models::SendMessageRequest &request);

      /**
       * @summary Modify the user settings of a device.
       *
       * @param tmpReq SetDeviceSettingRequest
       * @param headers SetDeviceSettingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDeviceSettingResponse
       */
      Models::SetDeviceSettingResponse setDeviceSettingWithOptions(const Models::SetDeviceSettingRequest &tmpReq, const Models::SetDeviceSettingHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the user settings of a device.
       *
       * @param request SetDeviceSettingRequest
       * @return SetDeviceSettingResponse
       */
      Models::SetDeviceSettingResponse setDeviceSetting(const Models::SetDeviceSettingRequest &request);

      /**
       * @summary Third-party real-time information data change event push
       *
       * @param request ThirdImmediateMsgPushRequest
       * @param headers ThirdImmediateMsgPushHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ThirdImmediateMsgPushResponse
       */
      Models::ThirdImmediateMsgPushResponse thirdImmediateMsgPushWithOptions(const Models::ThirdImmediateMsgPushRequest &request, const Models::ThirdImmediateMsgPushHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Third-party real-time information data change event push
       *
       * @param request ThirdImmediateMsgPushRequest
       * @return ThirdImmediateMsgPushResponse
       */
      Models::ThirdImmediateMsgPushResponse thirdImmediateMsgPush(const Models::ThirdImmediateMsgPushRequest &request);

      /**
       * @summary Detach the relationship between a third-party account and a Tmall Genie account by using a logon credential.
       *
       * @description Note: When the logon credential expires, the integrator must initiate the authorization logon flow again to obtain a new logon credential (entry service API: AuthLoginWithThirdUserInfo).
       * - Invoke the service API with the logon credential (LoginStateAccessToken) parameter via the Java software development kit (SDK). For SDKs in other languages, consult Tmall Genie developers during integration.  
       * If the API call throws a TeaException and TeaException.code is "InvalidAuthentication", the logon credential has expired.
       * - Invoke the service API by sending an HTTP request with the logon credential (LoginStateAccessToken) parameter.  
       * If the HTTP response status code returned by the API call is 400, the logon credential has expired.
       *
       * @param request UnbindAligenieUserRequest
       * @param headers UnbindAligenieUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindAligenieUserResponse
       */
      Models::UnbindAligenieUserResponse unbindAligenieUserWithOptions(const Models::UnbindAligenieUserRequest &request, const Models::UnbindAligenieUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detach the relationship between a third-party account and a Tmall Genie account by using a logon credential.
       *
       * @description Note: When the logon credential expires, the integrator must initiate the authorization logon flow again to obtain a new logon credential (entry service API: AuthLoginWithThirdUserInfo).
       * - Invoke the service API with the logon credential (LoginStateAccessToken) parameter via the Java software development kit (SDK). For SDKs in other languages, consult Tmall Genie developers during integration.  
       * If the API call throws a TeaException and TeaException.code is "InvalidAuthentication", the logon credential has expired.
       * - Invoke the service API by sending an HTTP request with the logon credential (LoginStateAccessToken) parameter.  
       * If the HTTP response status code returned by the API call is 400, the logon credential has expired.
       *
       * @param request UnbindAligenieUserRequest
       * @return UnbindAligenieUserResponse
       */
      Models::UnbindAligenieUserResponse unbindAligenieUser(const Models::UnbindAligenieUserRequest &request);

      /**
       * @summary Detach the binding relationship based on the user\\"s open information and the device\\"s open information.
       *
       * @param tmpReq UnbindDeviceRequest
       * @param headers UnbindDeviceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindDeviceResponse
       */
      Models::UnbindDeviceResponse unbindDeviceWithOptions(const Models::UnbindDeviceRequest &tmpReq, const Models::UnbindDeviceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detach the binding relationship based on the user\\"s open information and the device\\"s open information.
       *
       * @param request UnbindDeviceRequest
       * @return UnbindDeviceResponse
       */
      Models::UnbindDeviceResponse unbindDevice(const Models::UnbindDeviceRequest &request);

      /**
       * @summary Update an alarm, including its trigger time, loop type, and music.
       *
       * @param tmpReq UpdateAlarmRequest
       * @param headers UpdateAlarmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlarmResponse
       */
      Models::UpdateAlarmResponse updateAlarmWithOptions(const Models::UpdateAlarmRequest &tmpReq, const Models::UpdateAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update an alarm, including its trigger time, loop type, and music.
       *
       * @param request UpdateAlarmRequest
       * @return UpdateAlarmResponse
       */
      Models::UpdateAlarmResponse updateAlarm(const Models::UpdateAlarmRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
