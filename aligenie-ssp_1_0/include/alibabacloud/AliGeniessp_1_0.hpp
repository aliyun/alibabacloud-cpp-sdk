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
       * @summary 收藏/取消收藏
       *
       * @param tmpReq AddAndRemoveFavoriteContentRequest
       * @param headers AddAndRemoveFavoriteContentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAndRemoveFavoriteContentResponse
       */
      Models::AddAndRemoveFavoriteContentResponse addAndRemoveFavoriteContentWithOptions(const Models::AddAndRemoveFavoriteContentRequest &tmpReq, const Models::AddAndRemoveFavoriteContentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 收藏/取消收藏
       *
       * @param request AddAndRemoveFavoriteContentRequest
       * @return AddAndRemoveFavoriteContentResponse
       */
      Models::AddAndRemoveFavoriteContentResponse addAndRemoveFavoriteContent(const Models::AddAndRemoveFavoriteContentRequest &request);

      /**
       * @summary 新增订阅
       *
       * @param tmpReq AddSubRequest
       * @param headers AddSubHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSubResponse
       */
      Models::AddSubResponse addSubWithOptions(const Models::AddSubRequest &tmpReq, const Models::AddSubHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增订阅
       *
       * @param request AddSubRequest
       * @return AddSubResponse
       */
      Models::AddSubResponse addSub(const Models::AddSubRequest &request);

      /**
       * @summary 通过指定精灵账号进行授权登录
       *
       * @param request AuthLoginWithAligenieUserInfoRequest
       * @param headers AuthLoginWithAligenieUserInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthLoginWithAligenieUserInfoResponse
       */
      Models::AuthLoginWithAligenieUserInfoResponse authLoginWithAligenieUserInfoWithOptions(const Models::AuthLoginWithAligenieUserInfoRequest &request, const Models::AuthLoginWithAligenieUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过指定精灵账号进行授权登录
       *
       * @param request AuthLoginWithAligenieUserInfoRequest
       * @return AuthLoginWithAligenieUserInfoResponse
       */
      Models::AuthLoginWithAligenieUserInfoResponse authLoginWithAligenieUserInfo(const Models::AuthLoginWithAligenieUserInfoRequest &request);

      /**
       * @summary 通过手机号生成精灵账号进行授权登录
       *
       * @param request AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest
       * @param headers AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse
       */
      Models::AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse authLoginWithAligenieUserInfoGeneratedByPhoneNumberWithOptions(const Models::AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest &request, const Models::AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过手机号生成精灵账号进行授权登录
       *
       * @param request AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest
       * @return AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse
       */
      Models::AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse authLoginWithAligenieUserInfoGeneratedByPhoneNumber(const Models::AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest &request);

      /**
       * @summary 通过指定淘宝账号进行授权登录
       *
       * @param request AuthLoginWithTaobaoUserInfoRequest
       * @param headers AuthLoginWithTaobaoUserInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthLoginWithTaobaoUserInfoResponse
       */
      Models::AuthLoginWithTaobaoUserInfoResponse authLoginWithTaobaoUserInfoWithOptions(const Models::AuthLoginWithTaobaoUserInfoRequest &request, const Models::AuthLoginWithTaobaoUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过指定淘宝账号进行授权登录
       *
       * @param request AuthLoginWithTaobaoUserInfoRequest
       * @return AuthLoginWithTaobaoUserInfoResponse
       */
      Models::AuthLoginWithTaobaoUserInfoResponse authLoginWithTaobaoUserInfo(const Models::AuthLoginWithTaobaoUserInfoRequest &request);

      /**
       * @summary 通过三方用户信息进行授权登录
       *
       * @param tmpReq AuthLoginWithThirdUserInfoRequest
       * @param headers AuthLoginWithThirdUserInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthLoginWithThirdUserInfoResponse
       */
      Models::AuthLoginWithThirdUserInfoResponse authLoginWithThirdUserInfoWithOptions(const Models::AuthLoginWithThirdUserInfoRequest &tmpReq, const Models::AuthLoginWithThirdUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过三方用户信息进行授权登录
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
       * @summary 轮询激活绑定结果
       *
       * @param tmpReq CheckAuthCodeBindForExtRequest
       * @param headers CheckAuthCodeBindForExtHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAuthCodeBindForExtResponse
       */
      Models::CheckAuthCodeBindForExtResponse checkAuthCodeBindForExtWithOptions(const Models::CheckAuthCodeBindForExtRequest &tmpReq, const Models::CheckAuthCodeBindForExtHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轮询激活绑定结果
       *
       * @param request CheckAuthCodeBindForExtRequest
       * @return CheckAuthCodeBindForExtResponse
       */
      Models::CheckAuthCodeBindForExtResponse checkAuthCodeBindForExt(const Models::CheckAuthCodeBindForExtRequest &request);

      /**
       * @summary 云播放器：对外
       *
       * @param tmpReq CloudPlayerRequest
       * @param headers CloudPlayerHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudPlayerResponse
       */
      Models::CloudPlayerResponse cloudPlayerWithOptions(const Models::CloudPlayerRequest &tmpReq, const Models::CloudPlayerHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 云播放器：对外
       *
       * @param request CloudPlayerRequest
       * @return CloudPlayerResponse
       */
      Models::CloudPlayerResponse cloudPlayer(const Models::CloudPlayerRequest &request);

      /**
       * @summary 创建闹钟
       *
       * @param tmpReq CreateAlarmRequest
       * @param headers CreateAlarmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlarmResponse
       */
      Models::CreateAlarmResponse createAlarmWithOptions(const Models::CreateAlarmRequest &tmpReq, const Models::CreateAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建闹钟
       *
       * @param request CreateAlarmRequest
       * @return CreateAlarmResponse
       */
      Models::CreateAlarmResponse createAlarm(const Models::CreateAlarmRequest &request);

      /**
       * @summary 播放列表创建
       *
       * @param tmpReq CreatePlayingListRequest
       * @param headers CreatePlayingListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePlayingListResponse
       */
      Models::CreatePlayingListResponse createPlayingListWithOptions(const Models::CreatePlayingListRequest &tmpReq, const Models::CreatePlayingListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 播放列表创建
       *
       * @param request CreatePlayingListRequest
       * @return CreatePlayingListResponse
       */
      Models::CreatePlayingListResponse createPlayingList(const Models::CreatePlayingListRequest &request);

      /**
       * @summary 播放列表创建走OAuth2授权
       *
       * @param tmpReq CreatePlayingListOAuth2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePlayingListOAuth2Response
       */
      Models::CreatePlayingListOAuth2Response createPlayingListOAuth2WithOptions(const Models::CreatePlayingListOAuth2Request &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 播放列表创建走OAuth2授权
       *
       * @param request CreatePlayingListOAuth2Request
       * @return CreatePlayingListOAuth2Response
       */
      Models::CreatePlayingListOAuth2Response createPlayingListOAuth2(const Models::CreatePlayingListOAuth2Request &request);

      /**
       * @summary 创建定时任务
       *
       * @param tmpReq CreateScheduleTaskRequest
       * @param headers CreateScheduleTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduleTaskResponse
       */
      Models::CreateScheduleTaskResponse createScheduleTaskWithOptions(const Models::CreateScheduleTaskRequest &tmpReq, const Models::CreateScheduleTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建定时任务
       *
       * @param request CreateScheduleTaskRequest
       * @return CreateScheduleTaskResponse
       */
      Models::CreateScheduleTaskResponse createScheduleTask(const Models::CreateScheduleTaskRequest &request);

      /**
       * @summary 闹钟批量删除
       *
       * @param tmpReq DeleteAlarmsRequest
       * @param headers DeleteAlarmsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlarmsResponse
       */
      Models::DeleteAlarmsResponse deleteAlarmsWithOptions(const Models::DeleteAlarmsRequest &tmpReq, const Models::DeleteAlarmsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 闹钟批量删除
       *
       * @param request DeleteAlarmsRequest
       * @return DeleteAlarmsResponse
       */
      Models::DeleteAlarmsResponse deleteAlarms(const Models::DeleteAlarmsRequest &request);

      /**
       * @summary 删除定时任务
       *
       * @param tmpReq DeleteScheduleTaskRequest
       * @param headers DeleteScheduleTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduleTaskResponse
       */
      Models::DeleteScheduleTaskResponse deleteScheduleTaskWithOptions(const Models::DeleteScheduleTaskRequest &tmpReq, const Models::DeleteScheduleTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除定时任务
       *
       * @param request DeleteScheduleTaskRequest
       * @return DeleteScheduleTaskResponse
       */
      Models::DeleteScheduleTaskResponse deleteScheduleTask(const Models::DeleteScheduleTaskRequest &request);

      /**
       * @summary 删除订阅
       *
       * @param request DeleteSubRequest
       * @param headers DeleteSubHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSubResponse
       */
      Models::DeleteSubResponse deleteSubWithOptions(const Models::DeleteSubRequest &request, const Models::DeleteSubHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除订阅
       *
       * @param request DeleteSubRequest
       * @return DeleteSubResponse
       */
      Models::DeleteSubResponse deleteSub(const Models::DeleteSubRequest &request);

      /**
       * @summary 设备控制
       *
       * @param tmpReq DeviceControlRequest
       * @param headers DeviceControlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeviceControlResponse
       */
      Models::DeviceControlResponse deviceControlWithOptions(const Models::DeviceControlRequest &tmpReq, const Models::DeviceControlHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设备控制
       *
       * @param request DeviceControlRequest
       * @return DeviceControlResponse
       */
      Models::DeviceControlResponse deviceControl(const Models::DeviceControlRequest &request);

      /**
       * @summary 生态开放鉴权
       *
       * @param request EcologyOpennessAuthenticateRequest
       * @param headers EcologyOpennessAuthenticateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return EcologyOpennessAuthenticateResponse
       */
      Models::EcologyOpennessAuthenticateResponse ecologyOpennessAuthenticateWithOptions(const Models::EcologyOpennessAuthenticateRequest &request, const Models::EcologyOpennessAuthenticateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生态开放鉴权
       *
       * @param request EcologyOpennessAuthenticateRequest
       * @return EcologyOpennessAuthenticateResponse
       */
      Models::EcologyOpennessAuthenticateResponse ecologyOpennessAuthenticate(const Models::EcologyOpennessAuthenticateRequest &request);

      /**
       * @summary 生态开放发送短信验证码
       *
       * @param request EcologyOpennessSendVerificationCodeRequest
       * @param headers EcologyOpennessSendVerificationCodeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return EcologyOpennessSendVerificationCodeResponse
       */
      Models::EcologyOpennessSendVerificationCodeResponse ecologyOpennessSendVerificationCodeWithOptions(const Models::EcologyOpennessSendVerificationCodeRequest &request, const Models::EcologyOpennessSendVerificationCodeHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生态开放发送短信验证码
       *
       * @param request EcologyOpennessSendVerificationCodeRequest
       * @return EcologyOpennessSendVerificationCodeResponse
       */
      Models::EcologyOpennessSendVerificationCodeResponse ecologyOpennessSendVerificationCode(const Models::EcologyOpennessSendVerificationCodeRequest &request);

      /**
       * @summary 通过手机号寻找可授权登录的账号列表
       *
       * @param request FindUserlistToAuthLoginWithPhoneNumberRequest
       * @param headers FindUserlistToAuthLoginWithPhoneNumberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindUserlistToAuthLoginWithPhoneNumberResponse
       */
      Models::FindUserlistToAuthLoginWithPhoneNumberResponse findUserlistToAuthLoginWithPhoneNumberWithOptions(const Models::FindUserlistToAuthLoginWithPhoneNumberRequest &request, const Models::FindUserlistToAuthLoginWithPhoneNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过手机号寻找可授权登录的账号列表
       *
       * @param request FindUserlistToAuthLoginWithPhoneNumberRequest
       * @return FindUserlistToAuthLoginWithPhoneNumberResponse
       */
      Models::FindUserlistToAuthLoginWithPhoneNumberResponse findUserlistToAuthLoginWithPhoneNumber(const Models::FindUserlistToAuthLoginWithPhoneNumberRequest &request);

      /**
       * @summary 获取单个闹钟
       *
       * @param tmpReq GetAlarmRequest
       * @param headers GetAlarmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlarmResponse
       */
      Models::GetAlarmResponse getAlarmWithOptions(const Models::GetAlarmRequest &tmpReq, const Models::GetAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取单个闹钟
       *
       * @param request GetAlarmRequest
       * @return GetAlarmResponse
       */
      Models::GetAlarmResponse getAlarm(const Models::GetAlarmRequest &request);

      /**
       * @summary 根据id获取专辑信息
       *
       * @param request GetAlbumRequest
       * @param headers GetAlbumHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlbumResponse
       */
      Models::GetAlbumResponse getAlbumWithOptions(const Models::GetAlbumRequest &request, const Models::GetAlbumHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据id获取专辑信息
       *
       * @param request GetAlbumRequest
       * @return GetAlbumResponse
       */
      Models::GetAlbumResponse getAlbum(const Models::GetAlbumRequest &request);

      /**
       * @summary 获取专辑数据
       *
       * @param request GetAlbumDetailByIdRequest
       * @param headers GetAlbumDetailByIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlbumDetailByIdResponse
       */
      Models::GetAlbumDetailByIdResponse getAlbumDetailByIdWithOptions(const Models::GetAlbumDetailByIdRequest &request, const Models::GetAlbumDetailByIdHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取专辑数据
       *
       * @param request GetAlbumDetailByIdRequest
       * @return GetAlbumDetailByIdResponse
       */
      Models::GetAlbumDetailByIdResponse getAlbumDetailById(const Models::GetAlbumDetailByIdRequest &request);

      /**
       * @summary 获取三方绑定的精灵账号信息
       *
       * @param request GetAligenieUserInfoRequest
       * @param headers GetAligenieUserInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAligenieUserInfoResponse
       */
      Models::GetAligenieUserInfoResponse getAligenieUserInfoWithOptions(const Models::GetAligenieUserInfoRequest &request, const Models::GetAligenieUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取三方绑定的精灵账号信息
       *
       * @param request GetAligenieUserInfoRequest
       * @return GetAligenieUserInfoResponse
       */
      Models::GetAligenieUserInfoResponse getAligenieUserInfo(const Models::GetAligenieUserInfoRequest &request);

      /**
       * @summary 获取authCode
       *
       * @param tmpReq GetCodeEnhanceRequest
       * @param headers GetCodeEnhanceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCodeEnhanceResponse
       */
      Models::GetCodeEnhanceResponse getCodeEnhanceWithOptions(const Models::GetCodeEnhanceRequest &tmpReq, const Models::GetCodeEnhanceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取authCode
       *
       * @param request GetCodeEnhanceRequest
       * @return GetCodeEnhanceResponse
       */
      Models::GetCodeEnhanceResponse getCodeEnhance(const Models::GetCodeEnhanceRequest &request);

      /**
       * @summary 按照特定的id获取内容信息
       *
       * @param request GetContentRequest
       * @param headers GetContentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContentResponse
       */
      Models::GetContentResponse getContentWithOptions(const Models::GetContentRequest &request, const Models::GetContentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 按照特定的id获取内容信息
       *
       * @param request GetContentRequest
       * @return GetContentResponse
       */
      Models::GetContentResponse getContent(const Models::GetContentRequest &request);

      /**
       * @summary 获取当前播放项
       *
       * @param tmpReq GetCurrentPlayingItemRequest
       * @param headers GetCurrentPlayingItemHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCurrentPlayingItemResponse
       */
      Models::GetCurrentPlayingItemResponse getCurrentPlayingItemWithOptions(const Models::GetCurrentPlayingItemRequest &tmpReq, const Models::GetCurrentPlayingItemHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取当前播放项
       *
       * @param request GetCurrentPlayingItemRequest
       * @return GetCurrentPlayingItemResponse
       */
      Models::GetCurrentPlayingItemResponse getCurrentPlayingItem(const Models::GetCurrentPlayingItemRequest &request);

      /**
       * @summary 获取当前播放列表
       *
       * @param tmpReq GetCurrentPlayingListRequest
       * @param headers GetCurrentPlayingListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCurrentPlayingListResponse
       */
      Models::GetCurrentPlayingListResponse getCurrentPlayingListWithOptions(const Models::GetCurrentPlayingListRequest &tmpReq, const Models::GetCurrentPlayingListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取当前播放列表
       *
       * @param request GetCurrentPlayingListRequest
       * @return GetCurrentPlayingListResponse
       */
      Models::GetCurrentPlayingListResponse getCurrentPlayingList(const Models::GetCurrentPlayingListRequest &request);

      /**
       * @summary 获取设备认证信息
       *
       * @param tmpReq GetDeviceBasicInfoRequest
       * @param headers GetDeviceBasicInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceBasicInfoResponse
       */
      Models::GetDeviceBasicInfoResponse getDeviceBasicInfoWithOptions(const Models::GetDeviceBasicInfoRequest &tmpReq, const Models::GetDeviceBasicInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取设备认证信息
       *
       * @param request GetDeviceBasicInfoRequest
       * @return GetDeviceBasicInfoResponse
       */
      Models::GetDeviceBasicInfoResponse getDeviceBasicInfo(const Models::GetDeviceBasicInfoRequest &request);

      /**
       * @summary 获取设备信息
       *
       * @param request GetDeviceIdByIdentityRequest
       * @param headers GetDeviceIdByIdentityHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceIdByIdentityResponse
       */
      Models::GetDeviceIdByIdentityResponse getDeviceIdByIdentityWithOptions(const Models::GetDeviceIdByIdentityRequest &request, const Models::GetDeviceIdByIdentityHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取设备信息
       *
       * @param request GetDeviceIdByIdentityRequest
       * @return GetDeviceIdByIdentityResponse
       */
      Models::GetDeviceIdByIdentityResponse getDeviceIdByIdentity(const Models::GetDeviceIdByIdentityRequest &request);

      /**
       * @summary 获取设备的用户设置
       *
       * @param tmpReq GetDeviceSettingRequest
       * @param headers GetDeviceSettingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceSettingResponse
       */
      Models::GetDeviceSettingResponse getDeviceSettingWithOptions(const Models::GetDeviceSettingRequest &tmpReq, const Models::GetDeviceSettingHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取设备的用户设置
       *
       * @param request GetDeviceSettingRequest
       * @return GetDeviceSettingResponse
       */
      Models::GetDeviceSettingResponse getDeviceSetting(const Models::GetDeviceSettingRequest &request);

      /**
       * @summary 获取设备状态详情
       *
       * @param tmpReq GetDeviceStatusDetailRequest
       * @param headers GetDeviceStatusDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceStatusDetailResponse
       */
      Models::GetDeviceStatusDetailResponse getDeviceStatusDetailWithOptions(const Models::GetDeviceStatusDetailRequest &tmpReq, const Models::GetDeviceStatusDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取设备状态详情
       *
       * @param request GetDeviceStatusDetailRequest
       * @return GetDeviceStatusDetailResponse
       */
      Models::GetDeviceStatusDetailResponse getDeviceStatusDetail(const Models::GetDeviceStatusDetailRequest &request);

      /**
       * @summary 获取设备状态信息
       *
       * @param tmpReq GetDeviceStatusInfoRequest
       * @param headers GetDeviceStatusInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceStatusInfoResponse
       */
      Models::GetDeviceStatusInfoResponse getDeviceStatusInfoWithOptions(const Models::GetDeviceStatusInfoRequest &tmpReq, const Models::GetDeviceStatusInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取设备状态信息
       *
       * @param request GetDeviceStatusInfoRequest
       * @return GetDeviceStatusInfoResponse
       */
      Models::GetDeviceStatusInfoResponse getDeviceStatusInfo(const Models::GetDeviceStatusInfoRequest &request);

      /**
       * @summary 获取设备标签
       *
       * @param tmpReq GetDeviceTagRequest
       * @param headers GetDeviceTagHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceTagResponse
       */
      Models::GetDeviceTagResponse getDeviceTagWithOptions(const Models::GetDeviceTagRequest &tmpReq, const Models::GetDeviceTagHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取设备标签
       *
       * @param request GetDeviceTagRequest
       * @return GetDeviceTagResponse
       */
      Models::GetDeviceTagResponse getDeviceTag(const Models::GetDeviceTagRequest &request);

      /**
       * @summary 江苏电信号百
       *
       * @param request GetJiangSuTelecomDataRequest
       * @param headers GetJiangSuTelecomDataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJiangSuTelecomDataResponse
       */
      Models::GetJiangSuTelecomDataResponse getJiangSuTelecomDataWithOptions(const Models::GetJiangSuTelecomDataRequest &request, const Models::GetJiangSuTelecomDataHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 江苏电信号百
       *
       * @param request GetJiangSuTelecomDataRequest
       * @return GetJiangSuTelecomDataResponse
       */
      Models::GetJiangSuTelecomDataResponse getJiangSuTelecomData(const Models::GetJiangSuTelecomDataRequest &request);

      /**
       * @summary 查询定时任务
       *
       * @param tmpReq GetScheduleTaskRequest
       * @param headers GetScheduleTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduleTaskResponse
       */
      Models::GetScheduleTaskResponse getScheduleTaskWithOptions(const Models::GetScheduleTaskRequest &tmpReq, const Models::GetScheduleTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询定时任务
       *
       * @param request GetScheduleTaskRequest
       * @return GetScheduleTaskResponse
       */
      Models::GetScheduleTaskResponse getScheduleTask(const Models::GetScheduleTaskRequest &request);

      /**
       * @summary 查询未读留言数量
       *
       * @param tmpReq GetUnreadMessageCountRequest
       * @param headers GetUnreadMessageCountHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUnreadMessageCountResponse
       */
      Models::GetUnreadMessageCountResponse getUnreadMessageCountWithOptions(const Models::GetUnreadMessageCountRequest &tmpReq, const Models::GetUnreadMessageCountHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询未读留言数量
       *
       * @param request GetUnreadMessageCountRequest
       * @return GetUnreadMessageCountResponse
       */
      Models::GetUnreadMessageCountResponse getUnreadMessageCount(const Models::GetUnreadMessageCountRequest &request);

      /**
       * @summary 查询设备绑定的用户
       *
       * @param tmpReq GetUserByDeviceIdRequest
       * @param headers GetUserByDeviceIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserByDeviceIdResponse
       */
      Models::GetUserByDeviceIdResponse getUserByDeviceIdWithOptions(const Models::GetUserByDeviceIdRequest &tmpReq, const Models::GetUserByDeviceIdHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询设备绑定的用户
       *
       * @param request GetUserByDeviceIdRequest
       * @return GetUserByDeviceIdResponse
       */
      Models::GetUserByDeviceIdResponse getUserByDeviceId(const Models::GetUserByDeviceIdRequest &request);

      /**
       * @summary 查询天气
       *
       * @param tmpReq GetWeatherRequest
       * @param headers GetWeatherHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWeatherResponse
       */
      Models::GetWeatherResponse getWeatherWithOptions(const Models::GetWeatherRequest &tmpReq, const Models::GetWeatherHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询天气
       *
       * @param request GetWeatherRequest
       * @return GetWeatherResponse
       */
      Models::GetWeatherResponse getWeather(const Models::GetWeatherRequest &request);

      /**
       * @summary 播放列表点击播放
       *
       * @param tmpReq IndexControlPlayingListRequest
       * @param headers IndexControlPlayingListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IndexControlPlayingListResponse
       */
      Models::IndexControlPlayingListResponse indexControlPlayingListWithOptions(const Models::IndexControlPlayingListRequest &tmpReq, const Models::IndexControlPlayingListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 播放列表点击播放
       *
       * @param request IndexControlPlayingListRequest
       * @return IndexControlPlayingListResponse
       */
      Models::IndexControlPlayingListResponse indexControlPlayingList(const Models::IndexControlPlayingListRequest &request);

      /**
       * @summary 失效三方应用登录态
       *
       * @param tmpReq InvalidateThirdPartyAppLoginStateRequest
       * @param headers InvalidateThirdPartyAppLoginStateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvalidateThirdPartyAppLoginStateResponse
       */
      Models::InvalidateThirdPartyAppLoginStateResponse invalidateThirdPartyAppLoginStateWithOptions(const Models::InvalidateThirdPartyAppLoginStateRequest &tmpReq, const Models::InvalidateThirdPartyAppLoginStateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 失效三方应用登录态
       *
       * @param request InvalidateThirdPartyAppLoginStateRequest
       * @return InvalidateThirdPartyAppLoginStateResponse
       */
      Models::InvalidateThirdPartyAppLoginStateResponse invalidateThirdPartyAppLoginState(const Models::InvalidateThirdPartyAppLoginStateRequest &request);

      /**
       * @summary 查询闹钟列表
       *
       * @param tmpReq ListAlarmsRequest
       * @param headers ListAlarmsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlarmsResponse
       */
      Models::ListAlarmsResponse listAlarmsWithOptions(const Models::ListAlarmsRequest &tmpReq, const Models::ListAlarmsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询闹钟列表
       *
       * @param request ListAlarmsRequest
       * @return ListAlarmsResponse
       */
      Models::ListAlarmsResponse listAlarms(const Models::ListAlarmsRequest &request);

      /**
       * @summary 获取音乐音频专辑里面的内容列表
       *
       * @param request ListAlbumDetailRequest
       * @param headers ListAlbumDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlbumDetailResponse
       */
      Models::ListAlbumDetailResponse listAlbumDetailWithOptions(const Models::ListAlbumDetailRequest &request, const Models::ListAlbumDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取音乐音频专辑里面的内容列表
       *
       * @param request ListAlbumDetailRequest
       * @return ListAlbumDetailResponse
       */
      Models::ListAlbumDetailResponse listAlbumDetail(const Models::ListAlbumDetailRequest &request);

      /**
       * @summary 专辑是否被订阅
       *
       * @param tmpReq ListAlbumIsAddedRequest
       * @param headers ListAlbumIsAddedHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlbumIsAddedResponse
       */
      Models::ListAlbumIsAddedResponse listAlbumIsAddedWithOptions(const Models::ListAlbumIsAddedRequest &tmpReq, const Models::ListAlbumIsAddedHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 专辑是否被订阅
       *
       * @param request ListAlbumIsAddedRequest
       * @return ListAlbumIsAddedResponse
       */
      Models::ListAlbumIsAddedResponse listAlbumIsAdded(const Models::ListAlbumIsAddedRequest &request);

      /**
       * @summary 根据特定的类目,按照指定的排序顺序获取该类目下的内容.
       *
       * @param tmpReq ListCateContentRequest
       * @param headers ListCateContentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCateContentResponse
       */
      Models::ListCateContentResponse listCateContentWithOptions(const Models::ListCateContentRequest &tmpReq, const Models::ListCateContentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据特定的类目,按照指定的排序顺序获取该类目下的内容.
       *
       * @param request ListCateContentRequest
       * @return ListCateContentResponse
       */
      Models::ListCateContentResponse listCateContent(const Models::ListCateContentRequest &request);

      /**
       * @summary 获取音乐音频类目列表
       *
       * @param request ListCateInfoRequest
       * @param headers ListCateInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCateInfoResponse
       */
      Models::ListCateInfoResponse listCateInfoWithOptions(const Models::ListCateInfoRequest &request, const Models::ListCateInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取音乐音频类目列表
       *
       * @param request ListCateInfoRequest
       * @return ListCateInfoResponse
       */
      Models::ListCateInfoResponse listCateInfo(const Models::ListCateInfoRequest &request);

      /**
       * @summary 获取音乐/音频的一级类目列表
       *
       * @param request ListCommonCateFirstFloorRequest
       * @param headers ListCommonCateFirstFloorHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCommonCateFirstFloorResponse
       */
      Models::ListCommonCateFirstFloorResponse listCommonCateFirstFloorWithOptions(const Models::ListCommonCateFirstFloorRequest &request, const Models::ListCommonCateFirstFloorHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取音乐/音频的一级类目列表
       *
       * @param request ListCommonCateFirstFloorRequest
       * @return ListCommonCateFirstFloorResponse
       */
      Models::ListCommonCateFirstFloorResponse listCommonCateFirstFloor(const Models::ListCommonCateFirstFloorRequest &request);

      /**
       * @summary 获取指定一级类目下面的二级类目列表
       *
       * @param request ListCommonCateSecondFloorRequest
       * @param headers ListCommonCateSecondFloorHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCommonCateSecondFloorResponse
       */
      Models::ListCommonCateSecondFloorResponse listCommonCateSecondFloorWithOptions(const Models::ListCommonCateSecondFloorRequest &request, const Models::ListCommonCateSecondFloorHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定一级类目下面的二级类目列表
       *
       * @param request ListCommonCateSecondFloorRequest
       * @return ListCommonCateSecondFloorResponse
       */
      Models::ListCommonCateSecondFloorResponse listCommonCateSecondFloor(const Models::ListCommonCateSecondFloorRequest &request);

      /**
       * @summary 批量获取设备基本信息
       *
       * @param tmpReq ListDeviceBasicInfoRequest
       * @param headers ListDeviceBasicInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceBasicInfoResponse
       */
      Models::ListDeviceBasicInfoResponse listDeviceBasicInfoWithOptions(const Models::ListDeviceBasicInfoRequest &tmpReq, const Models::ListDeviceBasicInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取设备基本信息
       *
       * @param request ListDeviceBasicInfoRequest
       * @return ListDeviceBasicInfoResponse
       */
      Models::ListDeviceBasicInfoResponse listDeviceBasicInfo(const Models::ListDeviceBasicInfoRequest &request);

      /**
       * @summary 查询用户名下的设备
       *
       * @param tmpReq ListDeviceByUserIdRequest
       * @param headers ListDeviceByUserIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceByUserIdResponse
       */
      Models::ListDeviceByUserIdResponse listDeviceByUserIdWithOptions(const Models::ListDeviceByUserIdRequest &tmpReq, const Models::ListDeviceByUserIdHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户名下的设备
       *
       * @param request ListDeviceByUserIdRequest
       * @return ListDeviceByUserIdResponse
       */
      Models::ListDeviceByUserIdResponse listDeviceByUserId(const Models::ListDeviceByUserIdRequest &request);

      /**
       * @summary 获取指定渠道的设备列表
       *
       * @param tmpReq ListDeviceByUserIdAndChanelRequest
       * @param headers ListDeviceByUserIdAndChanelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceByUserIdAndChanelResponse
       */
      Models::ListDeviceByUserIdAndChanelResponse listDeviceByUserIdAndChanelWithOptions(const Models::ListDeviceByUserIdAndChanelRequest &tmpReq, const Models::ListDeviceByUserIdAndChanelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定渠道的设备列表
       *
       * @param request ListDeviceByUserIdAndChanelRequest
       * @return ListDeviceByUserIdAndChanelResponse
       */
      Models::ListDeviceByUserIdAndChanelResponse listDeviceByUserIdAndChanel(const Models::ListDeviceByUserIdAndChanelRequest &request);

      /**
       * @summary 批量获取设备openId
       *
       * @param tmpReq ListDeviceIdByIdentitiesRequest
       * @param headers ListDeviceIdByIdentitiesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceIdByIdentitiesResponse
       */
      Models::ListDeviceIdByIdentitiesResponse listDeviceIdByIdentitiesWithOptions(const Models::ListDeviceIdByIdentitiesRequest &tmpReq, const Models::ListDeviceIdByIdentitiesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取设备openId
       *
       * @param request ListDeviceIdByIdentitiesRequest
       * @return ListDeviceIdByIdentitiesResponse
       */
      Models::ListDeviceIdByIdentitiesResponse listDeviceIdByIdentities(const Models::ListDeviceIdByIdentitiesRequest &request);

      /**
       * @summary 基于音乐类型查询铃声列表（分页）
       *
       * @param tmpReq ListMusicRequest
       * @param headers ListMusicHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMusicResponse
       */
      Models::ListMusicResponse listMusicWithOptions(const Models::ListMusicRequest &tmpReq, const Models::ListMusicHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 基于音乐类型查询铃声列表（分页）
       *
       * @param request ListMusicRequest
       * @return ListMusicResponse
       */
      Models::ListMusicResponse listMusic(const Models::ListMusicRequest &request);

      /**
       * @summary 获取用户的播放历史
       *
       * @param tmpReq ListPlayHistoryRequest
       * @param headers ListPlayHistoryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPlayHistoryResponse
       */
      Models::ListPlayHistoryResponse listPlayHistoryWithOptions(const Models::ListPlayHistoryRequest &tmpReq, const Models::ListPlayHistoryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户的播放历史
       *
       * @param request ListPlayHistoryRequest
       * @return ListPlayHistoryResponse
       */
      Models::ListPlayHistoryResponse listPlayHistory(const Models::ListPlayHistoryRequest &request);

      /**
       * @summary 获取每日推荐的音乐或者音频
       *
       * @param tmpReq ListRecommendContentRequest
       * @param headers ListRecommendContentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecommendContentResponse
       */
      Models::ListRecommendContentResponse listRecommendContentWithOptions(const Models::ListRecommendContentRequest &tmpReq, const Models::ListRecommendContentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取每日推荐的音乐或者音频
       *
       * @param request ListRecommendContentRequest
       * @return ListRecommendContentResponse
       */
      Models::ListRecommendContentResponse listRecommendContent(const Models::ListRecommendContentRequest &request);

      /**
       * @summary 订阅列表
       *
       * @param tmpReq ListSubRequest
       * @param headers ListSubHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubResponse
       */
      Models::ListSubResponse listSubWithOptions(const Models::ListSubRequest &tmpReq, const Models::ListSubHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 订阅列表
       *
       * @param request ListSubRequest
       * @return ListSubResponse
       */
      Models::ListSubResponse listSub(const Models::ListSubRequest &request);

      /**
       * @summary 订阅专辑元数据列表
       *
       * @param tmpReq ListSubAlbumRequest
       * @param headers ListSubAlbumHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubAlbumResponse
       */
      Models::ListSubAlbumResponse listSubAlbumWithOptions(const Models::ListSubAlbumRequest &tmpReq, const Models::ListSubAlbumHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 订阅专辑元数据列表
       *
       * @param request ListSubAlbumRequest
       * @return ListSubAlbumResponse
       */
      Models::ListSubAlbumResponse listSubAlbum(const Models::ListSubAlbumRequest &request);

      /**
       * @summary 内容订阅元数据分类
       *
       * @param request ListSubscriptionAlbumCategoryRequest
       * @param headers ListSubscriptionAlbumCategoryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubscriptionAlbumCategoryResponse
       */
      Models::ListSubscriptionAlbumCategoryResponse listSubscriptionAlbumCategoryWithOptions(const Models::ListSubscriptionAlbumCategoryRequest &request, const Models::ListSubscriptionAlbumCategoryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 内容订阅元数据分类
       *
       * @param request ListSubscriptionAlbumCategoryRequest
       * @return ListSubscriptionAlbumCategoryResponse
       */
      Models::ListSubscriptionAlbumCategoryResponse listSubscriptionAlbumCategory(const Models::ListSubscriptionAlbumCategoryRequest &request);

      /**
       * @summary 获取留言列表
       *
       * @param tmpReq ListUserMessageRequest
       * @param headers ListUserMessageHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserMessageResponse
       */
      Models::ListUserMessageResponse listUserMessageWithOptions(const Models::ListUserMessageRequest &tmpReq, const Models::ListUserMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取留言列表
       *
       * @param request ListUserMessageRequest
       * @return ListUserMessageResponse
       */
      Models::ListUserMessageResponse listUserMessage(const Models::ListUserMessageRequest &request);

      /**
       * @summary 移动轻纳管
       *
       * @param tmpReq MobileRecommendRequest
       * @param headers MobileRecommendHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MobileRecommendResponse
       */
      Models::MobileRecommendResponse mobileRecommendWithOptions(const Models::MobileRecommendRequest &tmpReq, const Models::MobileRecommendHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移动轻纳管
       *
       * @param request MobileRecommendRequest
       * @return MobileRecommendResponse
       */
      Models::MobileRecommendResponse mobileRecommend(const Models::MobileRecommendRequest &request);

      /**
       * @summary 播放暂停控制
       *
       * @param tmpReq PlayAndPauseControlRequest
       * @param headers PlayAndPauseControlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PlayAndPauseControlResponse
       */
      Models::PlayAndPauseControlResponse playAndPauseControlWithOptions(const Models::PlayAndPauseControlRequest &tmpReq, const Models::PlayAndPauseControlHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 播放暂停控制
       *
       * @param request PlayAndPauseControlRequest
       * @return PlayAndPauseControlResponse
       */
      Models::PlayAndPauseControlResponse playAndPauseControl(const Models::PlayAndPauseControlRequest &request);

      /**
       * @summary 播放模式切换
       *
       * @param tmpReq PlayModeControlRequest
       * @param headers PlayModeControlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PlayModeControlResponse
       */
      Models::PlayModeControlResponse playModeControlWithOptions(const Models::PlayModeControlRequest &tmpReq, const Models::PlayModeControlHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 播放模式切换
       *
       * @param request PlayModeControlRequest
       * @return PlayModeControlResponse
       */
      Models::PlayModeControlResponse playModeControl(const Models::PlayModeControlRequest &request);

      /**
       * @summary 上下首控制
       *
       * @param tmpReq PreviousAndNextControlRequest
       * @param headers PreviousAndNextControlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviousAndNextControlResponse
       */
      Models::PreviousAndNextControlResponse previousAndNextControlWithOptions(const Models::PreviousAndNextControlRequest &tmpReq, const Models::PreviousAndNextControlHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上下首控制
       *
       * @param request PreviousAndNextControlRequest
       * @return PreviousAndNextControlResponse
       */
      Models::PreviousAndNextControlResponse previousAndNextControl(const Models::PreviousAndNextControlRequest &request);

      /**
       * @summary 进度控制
       *
       * @param tmpReq ProgressControlRequest
       * @param headers ProgressControlHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProgressControlResponse
       */
      Models::ProgressControlResponse progressControlWithOptions(const Models::ProgressControlRequest &tmpReq, const Models::ProgressControlHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 进度控制
       *
       * @param request ProgressControlRequest
       * @return ProgressControlResponse
       */
      Models::ProgressControlResponse progressControl(const Models::ProgressControlRequest &request);

      /**
       * @summary 获取闹钟音乐类型列表
       *
       * @param tmpReq QueryMusicTypeRequest
       * @param headers QueryMusicTypeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMusicTypeResponse
       */
      Models::QueryMusicTypeResponse queryMusicTypeWithOptions(const Models::QueryMusicTypeRequest &tmpReq, const Models::QueryMusicTypeHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取闹钟音乐类型列表
       *
       * @param request QueryMusicTypeRequest
       * @return QueryMusicTypeResponse
       */
      Models::QueryMusicTypeResponse queryMusicType(const Models::QueryMusicTypeRequest &request);

      /**
       * @summary 通过tme用户id获取授权的天猫精灵用户+设备列表
       *
       * @param request QueryUserDeviceListByTmeUserIdRequest
       * @param headers QueryUserDeviceListByTmeUserIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserDeviceListByTmeUserIdResponse
       */
      Models::QueryUserDeviceListByTmeUserIdResponse queryUserDeviceListByTmeUserIdWithOptions(const Models::QueryUserDeviceListByTmeUserIdRequest &request, const Models::QueryUserDeviceListByTmeUserIdHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过tme用户id获取授权的天猫精灵用户+设备列表
       *
       * @param request QueryUserDeviceListByTmeUserIdRequest
       * @return QueryUserDeviceListByTmeUserIdResponse
       */
      Models::QueryUserDeviceListByTmeUserIdResponse queryUserDeviceListByTmeUserId(const Models::QueryUserDeviceListByTmeUserIdRequest &request);

      /**
       * @summary 读取留言
       *
       * @param tmpReq ReadMessageRequest
       * @param headers ReadMessageHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadMessageResponse
       */
      Models::ReadMessageResponse readMessageWithOptions(const Models::ReadMessageRequest &tmpReq, const Models::ReadMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 读取留言
       *
       * @param request ReadMessageRequest
       * @return ReadMessageResponse
       */
      Models::ReadMessageResponse readMessage(const Models::ReadMessageRequest &request);

      /**
       * @summary 扫描二维码激活绑定设备
       *
       * @param tmpReq ScanCodeBindRequest
       * @param headers ScanCodeBindHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScanCodeBindResponse
       */
      Models::ScanCodeBindResponse scanCodeBindWithOptions(const Models::ScanCodeBindRequest &tmpReq, const Models::ScanCodeBindHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 扫描二维码激活绑定设备
       *
       * @param request ScanCodeBindRequest
       * @return ScanCodeBindResponse
       */
      Models::ScanCodeBindResponse scanCodeBind(const Models::ScanCodeBindRequest &request);

      /**
       * @summary 选品池投放能力
       *
       * @param tmpReq ScgSearchRequest
       * @param headers ScgSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScgSearchResponse
       */
      Models::ScgSearchResponse scgSearchWithOptions(const Models::ScgSearchRequest &tmpReq, const Models::ScgSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 选品池投放能力
       *
       * @param request ScgSearchRequest
       * @return ScgSearchResponse
       */
      Models::ScgSearchResponse scgSearch(const Models::ScgSearchRequest &request);

      /**
       * @summary 按照特定的搜索条件搜索
       *
       * @param tmpReq SearchContentRequest
       * @param headers SearchContentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchContentResponse
       */
      Models::SearchContentResponse searchContentWithOptions(const Models::SearchContentRequest &tmpReq, const Models::SearchContentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 按照特定的搜索条件搜索
       *
       * @param request SearchContentRequest
       * @return SearchContentResponse
       */
      Models::SearchContentResponse searchContent(const Models::SearchContentRequest &request);

      /**
       * @summary 发送留言
       *
       * @param tmpReq SendMessageRequest
       * @param headers SendMessageHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageResponse
       */
      Models::SendMessageResponse sendMessageWithOptions(const Models::SendMessageRequest &tmpReq, const Models::SendMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送留言
       *
       * @param request SendMessageRequest
       * @return SendMessageResponse
       */
      Models::SendMessageResponse sendMessage(const Models::SendMessageRequest &request);

      /**
       * @summary 修改设备设置
       *
       * @param tmpReq SetDeviceSettingRequest
       * @param headers SetDeviceSettingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDeviceSettingResponse
       */
      Models::SetDeviceSettingResponse setDeviceSettingWithOptions(const Models::SetDeviceSettingRequest &tmpReq, const Models::SetDeviceSettingHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改设备设置
       *
       * @param request SetDeviceSettingRequest
       * @return SetDeviceSettingResponse
       */
      Models::SetDeviceSettingResponse setDeviceSetting(const Models::SetDeviceSettingRequest &request);

      /**
       * @summary 三方即时信息数据变更事件推送
       *
       * @param request ThirdImmediateMsgPushRequest
       * @param headers ThirdImmediateMsgPushHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ThirdImmediateMsgPushResponse
       */
      Models::ThirdImmediateMsgPushResponse thirdImmediateMsgPushWithOptions(const Models::ThirdImmediateMsgPushRequest &request, const Models::ThirdImmediateMsgPushHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 三方即时信息数据变更事件推送
       *
       * @param request ThirdImmediateMsgPushRequest
       * @return ThirdImmediateMsgPushResponse
       */
      Models::ThirdImmediateMsgPushResponse thirdImmediateMsgPush(const Models::ThirdImmediateMsgPushRequest &request);

      /**
       * @summary 解除三方和精灵账号的关系
       *
       * @param request UnbindAligenieUserRequest
       * @param headers UnbindAligenieUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindAligenieUserResponse
       */
      Models::UnbindAligenieUserResponse unbindAligenieUserWithOptions(const Models::UnbindAligenieUserRequest &request, const Models::UnbindAligenieUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解除三方和精灵账号的关系
       *
       * @param request UnbindAligenieUserRequest
       * @return UnbindAligenieUserResponse
       */
      Models::UnbindAligenieUserResponse unbindAligenieUser(const Models::UnbindAligenieUserRequest &request);

      /**
       * @summary 解绑设备
       *
       * @param tmpReq UnbindDeviceRequest
       * @param headers UnbindDeviceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindDeviceResponse
       */
      Models::UnbindDeviceResponse unbindDeviceWithOptions(const Models::UnbindDeviceRequest &tmpReq, const Models::UnbindDeviceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑设备
       *
       * @param request UnbindDeviceRequest
       * @return UnbindDeviceResponse
       */
      Models::UnbindDeviceResponse unbindDevice(const Models::UnbindDeviceRequest &request);

      /**
       * @summary 更新闹钟
       *
       * @param tmpReq UpdateAlarmRequest
       * @param headers UpdateAlarmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlarmResponse
       */
      Models::UpdateAlarmResponse updateAlarmWithOptions(const Models::UpdateAlarmRequest &tmpReq, const Models::UpdateAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新闹钟
       *
       * @param request UpdateAlarmRequest
       * @return UpdateAlarmResponse
       */
      Models::UpdateAlarmResponse updateAlarm(const Models::UpdateAlarmRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
