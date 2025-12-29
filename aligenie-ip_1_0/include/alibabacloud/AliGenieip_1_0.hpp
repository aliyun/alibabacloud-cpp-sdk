// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIGENIEIP_1_0_HPP_
#define ALIBABACLOUD_ALIGENIEIP_1_0_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AliGenieip_1_0Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AliGenieip_1_0.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加动画
       *
       * @param request AddCartoonRequest
       * @param headers AddCartoonHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCartoonResponse
       */
      Models::AddCartoonResponse addCartoonWithOptions(const Models::AddCartoonRequest &request, const Models::AddCartoonHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加动画
       *
       * @param request AddCartoonRequest
       * @return AddCartoonResponse
       */
      Models::AddCartoonResponse addCartoon(const Models::AddCartoonRequest &request);

      /**
       * @summary 新增自定义问答
       *
       * @param tmpReq AddCustomQARequest
       * @param headers AddCustomQAHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomQAResponse
       */
      Models::AddCustomQAResponse addCustomQAWithOptions(const Models::AddCustomQARequest &tmpReq, const Models::AddCustomQAHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增自定义问答
       *
       * @param request AddCustomQARequest
       * @return AddCustomQAResponse
       */
      Models::AddCustomQAResponse addCustomQA(const Models::AddCustomQARequest &request);

      /**
       * @summary 添加问答V2
       *
       * @param tmpReq AddCustomQAV2Request
       * @param headers AddCustomQAV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomQAV2Response
       */
      Models::AddCustomQAV2Response addCustomQAV2WithOptions(const Models::AddCustomQAV2Request &tmpReq, const Models::AddCustomQAV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加问答V2
       *
       * @param request AddCustomQAV2Request
       * @return AddCustomQAV2Response
       */
      Models::AddCustomQAV2Response addCustomQAV2(const Models::AddCustomQAV2Request &request);

      /**
       * @summary 添加消息模板
       *
       * @param request AddMessageTemplateRequest
       * @param headers AddMessageTemplateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMessageTemplateResponse
       */
      Models::AddMessageTemplateResponse addMessageTemplateWithOptions(const Models::AddMessageTemplateRequest &request, const Models::AddMessageTemplateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加消息模板
       *
       * @param request AddMessageTemplateRequest
       * @return AddMessageTemplateResponse
       */
      Models::AddMessageTemplateResponse addMessageTemplate(const Models::AddMessageTemplateRequest &request);

      /**
       * @summary 新增或者编辑带屏展示模式
       *
       * @param tmpReq AddOrUpdateDisPlayModesRequest
       * @param headers AddOrUpdateDisPlayModesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddOrUpdateDisPlayModesResponse
       */
      Models::AddOrUpdateDisPlayModesResponse addOrUpdateDisPlayModesWithOptions(const Models::AddOrUpdateDisPlayModesRequest &tmpReq, const Models::AddOrUpdateDisPlayModesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增或者编辑带屏展示模式
       *
       * @param request AddOrUpdateDisPlayModesRequest
       * @return AddOrUpdateDisPlayModesResponse
       */
      Models::AddOrUpdateDisPlayModesResponse addOrUpdateDisPlayModes(const Models::AddOrUpdateDisPlayModesRequest &request);

      /**
       * @summary 新增或者编辑定制配置
       *
       * @param tmpReq AddOrUpdateHotelSettingRequest
       * @param headers AddOrUpdateHotelSettingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddOrUpdateHotelSettingResponse
       */
      Models::AddOrUpdateHotelSettingResponse addOrUpdateHotelSettingWithOptions(const Models::AddOrUpdateHotelSettingRequest &tmpReq, const Models::AddOrUpdateHotelSettingHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增或者编辑定制配置
       *
       * @param request AddOrUpdateHotelSettingRequest
       * @return AddOrUpdateHotelSettingResponse
       */
      Models::AddOrUpdateHotelSettingResponse addOrUpdateHotelSetting(const Models::AddOrUpdateHotelSettingRequest &request);

      /**
       * @summary 新增或者编辑带屏屏保
       *
       * @param tmpReq AddOrUpdateScreenSaverRequest
       * @param headers AddOrUpdateScreenSaverHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddOrUpdateScreenSaverResponse
       */
      Models::AddOrUpdateScreenSaverResponse addOrUpdateScreenSaverWithOptions(const Models::AddOrUpdateScreenSaverRequest &tmpReq, const Models::AddOrUpdateScreenSaverHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增或者编辑带屏屏保
       *
       * @param request AddOrUpdateScreenSaverRequest
       * @return AddOrUpdateScreenSaverResponse
       */
      Models::AddOrUpdateScreenSaverResponse addOrUpdateScreenSaver(const Models::AddOrUpdateScreenSaverRequest &request);

      /**
       * @summary 添加/更新欢迎语信息
       *
       * @param request AddOrUpdateWelcomeTextRequest
       * @param headers AddOrUpdateWelcomeTextHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddOrUpdateWelcomeTextResponse
       */
      Models::AddOrUpdateWelcomeTextResponse addOrUpdateWelcomeTextWithOptions(const Models::AddOrUpdateWelcomeTextRequest &request, const Models::AddOrUpdateWelcomeTextHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加/更新欢迎语信息
       *
       * @param request AddOrUpdateWelcomeTextRequest
       * @return AddOrUpdateWelcomeTextResponse
       */
      Models::AddOrUpdateWelcomeTextResponse addOrUpdateWelcomeText(const Models::AddOrUpdateWelcomeTextRequest &request);

      /**
       * @summary 审批酒店
       *
       * @param tmpReq AuditHotelRequest
       * @param headers AuditHotelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuditHotelResponse
       */
      Models::AuditHotelResponse auditHotelWithOptions(const Models::AuditHotelRequest &tmpReq, const Models::AuditHotelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 审批酒店
       *
       * @param request AuditHotelRequest
       * @return AuditHotelResponse
       */
      Models::AuditHotelResponse auditHotel(const Models::AuditHotelRequest &request);

      /**
       * @summary 批量创建房间
       *
       * @param tmpReq BatchAddHotelRoomRequest
       * @param headers BatchAddHotelRoomHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchAddHotelRoomResponse
       */
      Models::BatchAddHotelRoomResponse batchAddHotelRoomWithOptions(const Models::BatchAddHotelRoomRequest &tmpReq, const Models::BatchAddHotelRoomHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量创建房间
       *
       * @param request BatchAddHotelRoomRequest
       * @return BatchAddHotelRoomResponse
       */
      Models::BatchAddHotelRoomResponse batchAddHotelRoom(const Models::BatchAddHotelRoomRequest &request);

      /**
       * @summary 批量删除房间
       *
       * @param tmpReq BatchDeleteHotelRoomRequest
       * @param headers BatchDeleteHotelRoomHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteHotelRoomResponse
       */
      Models::BatchDeleteHotelRoomResponse batchDeleteHotelRoomWithOptions(const Models::BatchDeleteHotelRoomRequest &tmpReq, const Models::BatchDeleteHotelRoomHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除房间
       *
       * @param request BatchDeleteHotelRoomRequest
       * @return BatchDeleteHotelRoomResponse
       */
      Models::BatchDeleteHotelRoomResponse batchDeleteHotelRoom(const Models::BatchDeleteHotelRoomRequest &request);

      /**
       * @summary 酒店退房，清楚例如闹钟等定时信息
       *
       * @param request CheckoutWithAKRequest
       * @param headers CheckoutWithAKHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckoutWithAKResponse
       */
      Models::CheckoutWithAKResponse checkoutWithAKWithOptions(const Models::CheckoutWithAKRequest &request, const Models::CheckoutWithAKHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店退房，清楚例如闹钟等定时信息
       *
       * @param request CheckoutWithAKRequest
       * @return CheckoutWithAKResponse
       */
      Models::CheckoutWithAKResponse checkoutWithAK(const Models::CheckoutWithAKRequest &request);

      /**
       * @summary 子账号授权
       *
       * @param request ChildAccountAuthRequest
       * @param headers ChildAccountAuthHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChildAccountAuthResponse
       */
      Models::ChildAccountAuthResponse childAccountAuthWithOptions(const Models::ChildAccountAuthRequest &request, const Models::ChildAccountAuthHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 子账号授权
       *
       * @param request ChildAccountAuthRequest
       * @return ChildAccountAuthResponse
       */
      Models::ChildAccountAuthResponse childAccountAuth(const Models::ChildAccountAuthRequest &request);

      /**
       * @summary 控制房间内设备
       *
       * @param tmpReq ControlRoomDeviceRequest
       * @param headers ControlRoomDeviceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ControlRoomDeviceResponse
       */
      Models::ControlRoomDeviceResponse controlRoomDeviceWithOptions(const Models::ControlRoomDeviceRequest &tmpReq, const Models::ControlRoomDeviceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 控制房间内设备
       *
       * @param request ControlRoomDeviceRequest
       * @return ControlRoomDeviceResponse
       */
      Models::ControlRoomDeviceResponse controlRoomDevice(const Models::ControlRoomDeviceRequest &request);

      /**
       * @summary 创建酒店项目
       *
       * @param tmpReq CreateHotelRequest
       * @param headers CreateHotelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHotelResponse
       */
      Models::CreateHotelResponse createHotelWithOptions(const Models::CreateHotelRequest &tmpReq, const Models::CreateHotelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建酒店项目
       *
       * @param request CreateHotelRequest
       * @return CreateHotelResponse
       */
      Models::CreateHotelResponse createHotel(const Models::CreateHotelRequest &request);

      /**
       * @summary 批量创建闹钟
       *
       * @param tmpReq CreateHotelAlarmRequest
       * @param headers CreateHotelAlarmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHotelAlarmResponse
       */
      Models::CreateHotelAlarmResponse createHotelAlarmWithOptions(const Models::CreateHotelAlarmRequest &tmpReq, const Models::CreateHotelAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量创建闹钟
       *
       * @param request CreateHotelAlarmRequest
       * @return CreateHotelAlarmResponse
       */
      Models::CreateHotelAlarmResponse createHotelAlarm(const Models::CreateHotelAlarmRequest &request);

      /**
       * @summary 酒店rcu自定义场景创建
       *
       * @param tmpReq CreateRcuSceneRequest
       * @param headers CreateRcuSceneHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRcuSceneResponse
       */
      Models::CreateRcuSceneResponse createRcuSceneWithOptions(const Models::CreateRcuSceneRequest &tmpReq, const Models::CreateRcuSceneHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店rcu自定义场景创建
       *
       * @param request CreateRcuSceneRequest
       * @return CreateRcuSceneResponse
       */
      Models::CreateRcuSceneResponse createRcuScene(const Models::CreateRcuSceneRequest &request);

      /**
       * @summary 删除动画
       *
       * @param request DeleteCartoonRequest
       * @param headers DeleteCartoonHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCartoonResponse
       */
      Models::DeleteCartoonResponse deleteCartoonWithOptions(const Models::DeleteCartoonRequest &request, const Models::DeleteCartoonHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除动画
       *
       * @param request DeleteCartoonRequest
       * @return DeleteCartoonResponse
       */
      Models::DeleteCartoonResponse deleteCartoon(const Models::DeleteCartoonRequest &request);

      /**
       * @summary 删除自定义问答
       *
       * @param tmpReq DeleteCustomQARequest
       * @param headers DeleteCustomQAHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomQAResponse
       */
      Models::DeleteCustomQAResponse deleteCustomQAWithOptions(const Models::DeleteCustomQARequest &tmpReq, const Models::DeleteCustomQAHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义问答
       *
       * @param request DeleteCustomQARequest
       * @return DeleteCustomQAResponse
       */
      Models::DeleteCustomQAResponse deleteCustomQA(const Models::DeleteCustomQARequest &request);

      /**
       * @summary 删除酒店闹钟
       *
       * @param tmpReq DeleteHotelAlarmRequest
       * @param headers DeleteHotelAlarmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHotelAlarmResponse
       */
      Models::DeleteHotelAlarmResponse deleteHotelAlarmWithOptions(const Models::DeleteHotelAlarmRequest &tmpReq, const Models::DeleteHotelAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除酒店闹钟
       *
       * @param request DeleteHotelAlarmRequest
       * @return DeleteHotelAlarmResponse
       */
      Models::DeleteHotelAlarmResponse deleteHotelAlarm(const Models::DeleteHotelAlarmRequest &request);

      /**
       * @summary 酒店场景预订删除
       *
       * @param request DeleteHotelSceneBookItemRequest
       * @param headers DeleteHotelSceneBookItemHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHotelSceneBookItemResponse
       */
      Models::DeleteHotelSceneBookItemResponse deleteHotelSceneBookItemWithOptions(const Models::DeleteHotelSceneBookItemRequest &request, const Models::DeleteHotelSceneBookItemHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店场景预订删除
       *
       * @param request DeleteHotelSceneBookItemRequest
       * @return DeleteHotelSceneBookItemResponse
       */
      Models::DeleteHotelSceneBookItemResponse deleteHotelSceneBookItem(const Models::DeleteHotelSceneBookItemRequest &request);

      /**
       * @summary 删除定制配置
       *
       * @param request DeleteHotelSettingRequest
       * @param headers DeleteHotelSettingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHotelSettingResponse
       */
      Models::DeleteHotelSettingResponse deleteHotelSettingWithOptions(const Models::DeleteHotelSettingRequest &request, const Models::DeleteHotelSettingHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除定制配置
       *
       * @param request DeleteHotelSettingRequest
       * @return DeleteHotelSettingResponse
       */
      Models::DeleteHotelSettingResponse deleteHotelSetting(const Models::DeleteHotelSettingRequest &request);

      /**
       * @summary 删除消息通知模板
       *
       * @param request DeleteMessageTemplateRequest
       * @param headers DeleteMessageTemplateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMessageTemplateResponse
       */
      Models::DeleteMessageTemplateResponse deleteMessageTemplateWithOptions(const Models::DeleteMessageTemplateRequest &request, const Models::DeleteMessageTemplateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除消息通知模板
       *
       * @param request DeleteMessageTemplateRequest
       * @return DeleteMessageTemplateResponse
       */
      Models::DeleteMessageTemplateResponse deleteMessageTemplate(const Models::DeleteMessageTemplateRequest &request);

      /**
       * @summary 删除酒店自定义rcu场景
       *
       * @param request DeleteRcuSceneRequest
       * @param headers DeleteRcuSceneHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRcuSceneResponse
       */
      Models::DeleteRcuSceneResponse deleteRcuSceneWithOptions(const Models::DeleteRcuSceneRequest &request, const Models::DeleteRcuSceneHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除酒店自定义rcu场景
       *
       * @param request DeleteRcuSceneRequest
       * @return DeleteRcuSceneResponse
       */
      Models::DeleteRcuSceneResponse deleteRcuScene(const Models::DeleteRcuSceneRequest &request);

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
       * @summary 控制房间场景
       *
       * @param request ExecuteSceneRequest
       * @param headers ExecuteSceneHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteSceneResponse
       */
      Models::ExecuteSceneResponse executeSceneWithOptions(const Models::ExecuteSceneRequest &request, const Models::ExecuteSceneHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 控制房间场景
       *
       * @param request ExecuteSceneRequest
       * @return ExecuteSceneResponse
       */
      Models::ExecuteSceneResponse executeScene(const Models::ExecuteSceneRequest &request);

      /**
       * @summary 获取基础信息问答
       *
       * @param request GetBasicInfoQARequest
       * @param headers GetBasicInfoQAHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBasicInfoQAResponse
       */
      Models::GetBasicInfoQAResponse getBasicInfoQAWithOptions(const Models::GetBasicInfoQARequest &request, const Models::GetBasicInfoQAHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取基础信息问答
       *
       * @param request GetBasicInfoQARequest
       * @return GetBasicInfoQAResponse
       */
      Models::GetBasicInfoQAResponse getBasicInfoQA(const Models::GetBasicInfoQARequest &request);

      /**
       * @summary 查询动画
       *
       * @param request GetCartoonRequest
       * @param headers GetCartoonHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCartoonResponse
       */
      Models::GetCartoonResponse getCartoonWithOptions(const Models::GetCartoonRequest &request, const Models::GetCartoonHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询动画
       *
       * @param request GetCartoonRequest
       * @return GetCartoonResponse
       */
      Models::GetCartoonResponse getCartoon(const Models::GetCartoonRequest &request);

      /**
       * @summary 获取当前设备的通话信息
       *
       * @param tmpReq GetHotelContactByGenieDeviceRequest
       * @param headers GetHotelContactByGenieDeviceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotelContactByGenieDeviceResponse
       */
      Models::GetHotelContactByGenieDeviceResponse getHotelContactByGenieDeviceWithOptions(const Models::GetHotelContactByGenieDeviceRequest &tmpReq, const Models::GetHotelContactByGenieDeviceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取当前设备的通话信息
       *
       * @param request GetHotelContactByGenieDeviceRequest
       * @return GetHotelContactByGenieDeviceResponse
       */
      Models::GetHotelContactByGenieDeviceResponse getHotelContactByGenieDevice(const Models::GetHotelContactByGenieDeviceRequest &request);

      /**
       * @summary 根据号码获取酒店联系人
       *
       * @param tmpReq GetHotelContactByNumberRequest
       * @param headers GetHotelContactByNumberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotelContactByNumberResponse
       */
      Models::GetHotelContactByNumberResponse getHotelContactByNumberWithOptions(const Models::GetHotelContactByNumberRequest &tmpReq, const Models::GetHotelContactByNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据号码获取酒店联系人
       *
       * @param request GetHotelContactByNumberRequest
       * @return GetHotelContactByNumberResponse
       */
      Models::GetHotelContactByNumberResponse getHotelContactByNumber(const Models::GetHotelContactByNumberRequest &request);

      /**
       * @summary 获取酒店联系人
       *
       * @param tmpReq GetHotelContactsRequest
       * @param headers GetHotelContactsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotelContactsResponse
       */
      Models::GetHotelContactsResponse getHotelContactsWithOptions(const Models::GetHotelContactsRequest &tmpReq, const Models::GetHotelContactsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取酒店联系人
       *
       * @param request GetHotelContactsRequest
       * @return GetHotelContactsResponse
       */
      Models::GetHotelContactsResponse getHotelContacts(const Models::GetHotelContactsRequest &request);

      /**
       * @summary 获取首页背景图和场景模式
       *
       * @param tmpReq GetHotelHomeBackImageAndModesRequest
       * @param headers GetHotelHomeBackImageAndModesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotelHomeBackImageAndModesResponse
       */
      Models::GetHotelHomeBackImageAndModesResponse getHotelHomeBackImageAndModesWithOptions(const Models::GetHotelHomeBackImageAndModesRequest &tmpReq, const Models::GetHotelHomeBackImageAndModesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取首页背景图和场景模式
       *
       * @param request GetHotelHomeBackImageAndModesRequest
       * @return GetHotelHomeBackImageAndModesResponse
       */
      Models::GetHotelHomeBackImageAndModesResponse getHotelHomeBackImageAndModes(const Models::GetHotelHomeBackImageAndModesRequest &request);

      /**
       * @summary 获取酒店通知
       *
       * @param tmpReq GetHotelNoticeRequest
       * @param headers GetHotelNoticeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotelNoticeResponse
       */
      Models::GetHotelNoticeResponse getHotelNoticeWithOptions(const Models::GetHotelNoticeRequest &tmpReq, const Models::GetHotelNoticeHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取酒店通知
       *
       * @param request GetHotelNoticeRequest
       * @return GetHotelNoticeResponse
       */
      Models::GetHotelNoticeResponse getHotelNotice(const Models::GetHotelNoticeRequest &request);

      /**
       * @summary 获取酒店通知
       *
       * @param tmpReq GetHotelNoticeV2Request
       * @param headers GetHotelNoticeV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotelNoticeV2Response
       */
      Models::GetHotelNoticeV2Response getHotelNoticeV2WithOptions(const Models::GetHotelNoticeV2Request &tmpReq, const Models::GetHotelNoticeV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取酒店通知
       *
       * @param request GetHotelNoticeV2Request
       * @return GetHotelNoticeV2Response
       */
      Models::GetHotelNoticeV2Response getHotelNoticeV2(const Models::GetHotelNoticeV2Request &request);

      /**
       * @summary 获取酒店订单详情
       *
       * @param tmpReq GetHotelOrderDetailRequest
       * @param headers GetHotelOrderDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotelOrderDetailResponse
       */
      Models::GetHotelOrderDetailResponse getHotelOrderDetailWithOptions(const Models::GetHotelOrderDetailRequest &tmpReq, const Models::GetHotelOrderDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取酒店订单详情
       *
       * @param request GetHotelOrderDetailRequest
       * @return GetHotelOrderDetailResponse
       */
      Models::GetHotelOrderDetailResponse getHotelOrderDetail(const Models::GetHotelOrderDetailRequest &request);

      /**
       * @summary 获取酒店房间猫精设备信息
       *
       * @param request GetHotelRoomDeviceRequest
       * @param headers GetHotelRoomDeviceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotelRoomDeviceResponse
       */
      Models::GetHotelRoomDeviceResponse getHotelRoomDeviceWithOptions(const Models::GetHotelRoomDeviceRequest &request, const Models::GetHotelRoomDeviceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取酒店房间猫精设备信息
       *
       * @param request GetHotelRoomDeviceRequest
       * @return GetHotelRoomDeviceResponse
       */
      Models::GetHotelRoomDeviceResponse getHotelRoomDevice(const Models::GetHotelRoomDeviceRequest &request);

      /**
       * @summary 获取推荐语料
       *
       * @param tmpReq GetHotelSampleUtterancesRequest
       * @param headers GetHotelSampleUtterancesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotelSampleUtterancesResponse
       */
      Models::GetHotelSampleUtterancesResponse getHotelSampleUtterancesWithOptions(const Models::GetHotelSampleUtterancesRequest &tmpReq, const Models::GetHotelSampleUtterancesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取推荐语料
       *
       * @param request GetHotelSampleUtterancesRequest
       * @return GetHotelSampleUtterancesResponse
       */
      Models::GetHotelSampleUtterancesResponse getHotelSampleUtterances(const Models::GetHotelSampleUtterancesRequest &request);

      /**
       * @summary 酒店场景详情
       *
       * @param request GetHotelSceneItemDetailRequest
       * @param headers GetHotelSceneItemDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotelSceneItemDetailResponse
       */
      Models::GetHotelSceneItemDetailResponse getHotelSceneItemDetailWithOptions(const Models::GetHotelSceneItemDetailRequest &request, const Models::GetHotelSceneItemDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店场景详情
       *
       * @param request GetHotelSceneItemDetailRequest
       * @return GetHotelSceneItemDetailResponse
       */
      Models::GetHotelSceneItemDetailResponse getHotelSceneItemDetail(const Models::GetHotelSceneItemDetailRequest &request);

      /**
       * @summary 获取酒店屏保
       *
       * @param tmpReq GetHotelScreenSaverRequest
       * @param headers GetHotelScreenSaverHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotelScreenSaverResponse
       */
      Models::GetHotelScreenSaverResponse getHotelScreenSaverWithOptions(const Models::GetHotelScreenSaverRequest &tmpReq, const Models::GetHotelScreenSaverHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取酒店屏保
       *
       * @param request GetHotelScreenSaverRequest
       * @return GetHotelScreenSaverResponse
       */
      Models::GetHotelScreenSaverResponse getHotelScreenSaver(const Models::GetHotelScreenSaverRequest &request);

      /**
       * @summary 获取屏保列表
       *
       * @param request GetHotelScreenSaverStyleRequest
       * @param headers GetHotelScreenSaverStyleHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotelScreenSaverStyleResponse
       */
      Models::GetHotelScreenSaverStyleResponse getHotelScreenSaverStyleWithOptions(const Models::GetHotelScreenSaverStyleRequest &request, const Models::GetHotelScreenSaverStyleHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取屏保列表
       *
       * @param request GetHotelScreenSaverStyleRequest
       * @return GetHotelScreenSaverStyleResponse
       */
      Models::GetHotelScreenSaverStyleResponse getHotelScreenSaverStyle(const Models::GetHotelScreenSaverStyleRequest &request);

      /**
       * @summary 查询定制配置
       *
       * @param request GetHotelSettingRequest
       * @param headers GetHotelSettingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotelSettingResponse
       */
      Models::GetHotelSettingResponse getHotelSettingWithOptions(const Models::GetHotelSettingRequest &request, const Models::GetHotelSettingHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询定制配置
       *
       * @param request GetHotelSettingRequest
       * @return GetHotelSettingResponse
       */
      Models::GetHotelSettingResponse getHotelSetting(const Models::GetHotelSettingRequest &request);

      /**
       * @summary 关联产品列表查看
       *
       * @param headers GetRelationProductListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRelationProductListResponse
       */
      Models::GetRelationProductListResponse getRelationProductListWithOptions(const Models::GetRelationProductListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关联产品列表查看
       *
       * @return GetRelationProductListResponse
       */
      Models::GetRelationProductListResponse getRelationProductList();

      /**
       * @summary 获取组织下unionId列表
       *
       * @param request GetUnionIdRequest
       * @param headers GetUnionIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUnionIdResponse
       */
      Models::GetUnionIdResponse getUnionIdWithOptions(const Models::GetUnionIdRequest &request, const Models::GetUnionIdHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取组织下unionId列表
       *
       * @param request GetUnionIdRequest
       * @return GetUnionIdResponse
       */
      Models::GetUnionIdResponse getUnionId(const Models::GetUnionIdRequest &request);

      /**
       * @summary 查询欢迎语信息
       *
       * @param request GetWelcomeTextAndMusicRequest
       * @param headers GetWelcomeTextAndMusicHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWelcomeTextAndMusicResponse
       */
      Models::GetWelcomeTextAndMusicResponse getWelcomeTextAndMusicWithOptions(const Models::GetWelcomeTextAndMusicRequest &request, const Models::GetWelcomeTextAndMusicHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询欢迎语信息
       *
       * @param request GetWelcomeTextAndMusicRequest
       * @return GetWelcomeTextAndMusicResponse
       */
      Models::GetWelcomeTextAndMusicResponse getWelcomeTextAndMusic(const Models::GetWelcomeTextAndMusicRequest &request);

      /**
       * @summary 酒店带屏设备扫码绑定
       *
       * @param request HotelQrBindRequest
       * @param headers HotelQrBindHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelQrBindResponse
       */
      Models::HotelQrBindResponse hotelQrBindWithOptions(const Models::HotelQrBindRequest &request, const Models::HotelQrBindHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店带屏设备扫码绑定
       *
       * @param request HotelQrBindRequest
       * @return HotelQrBindResponse
       */
      Models::HotelQrBindResponse hotelQrBind(const Models::HotelQrBindRequest &request);

      /**
       * @summary 批量导入酒店配置
       *
       * @param tmpReq ImportHotelConfigRequest
       * @param headers ImportHotelConfigHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportHotelConfigResponse
       */
      Models::ImportHotelConfigResponse importHotelConfigWithOptions(const Models::ImportHotelConfigRequest &tmpReq, const Models::ImportHotelConfigHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量导入酒店配置
       *
       * @param request ImportHotelConfigRequest
       * @return ImportHotelConfigResponse
       */
      Models::ImportHotelConfigResponse importHotelConfig(const Models::ImportHotelConfigRequest &request);

      /**
       * @summary 批量导入设备（同时补充房型）
       *
       * @param tmpReq ImportRoomControlDevicesRequest
       * @param headers ImportRoomControlDevicesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportRoomControlDevicesResponse
       */
      Models::ImportRoomControlDevicesResponse importRoomControlDevicesWithOptions(const Models::ImportRoomControlDevicesRequest &tmpReq, const Models::ImportRoomControlDevicesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量导入设备（同时补充房型）
       *
       * @param request ImportRoomControlDevicesRequest
       * @return ImportRoomControlDevicesResponse
       */
      Models::ImportRoomControlDevicesResponse importRoomControlDevices(const Models::ImportRoomControlDevicesRequest &request);

      /**
       * @summary 导入房间内精灵场景
       *
       * @param tmpReq ImportRoomGenieScenesRequest
       * @param headers ImportRoomGenieScenesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportRoomGenieScenesResponse
       */
      Models::ImportRoomGenieScenesResponse importRoomGenieScenesWithOptions(const Models::ImportRoomGenieScenesRequest &tmpReq, const Models::ImportRoomGenieScenesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入房间内精灵场景
       *
       * @param request ImportRoomGenieScenesRequest
       * @return ImportRoomGenieScenesResponse
       */
      Models::ImportRoomGenieScenesResponse importRoomGenieScenes(const Models::ImportRoomGenieScenesRequest &request);

      /**
       * @summary 酒店场景预订新增
       *
       * @param tmpReq InsertHotelSceneBookItemRequest
       * @param headers InsertHotelSceneBookItemHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertHotelSceneBookItemResponse
       */
      Models::InsertHotelSceneBookItemResponse insertHotelSceneBookItemWithOptions(const Models::InsertHotelSceneBookItemRequest &tmpReq, const Models::InsertHotelSceneBookItemHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店场景预订新增
       *
       * @param request InsertHotelSceneBookItemRequest
       * @return InsertHotelSceneBookItemResponse
       */
      Models::InsertHotelSceneBookItemResponse insertHotelSceneBookItem(const Models::InsertHotelSceneBookItemRequest &request);

      /**
       * @summary 机器人服务，消息推送
       *
       * @param request InvokeRobotPushRequest
       * @param headers InvokeRobotPushHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeRobotPushResponse
       */
      Models::InvokeRobotPushResponse invokeRobotPushWithOptions(const Models::InvokeRobotPushRequest &request, const Models::InvokeRobotPushHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机器人服务，消息推送
       *
       * @param request InvokeRobotPushRequest
       * @return InvokeRobotPushResponse
       */
      Models::InvokeRobotPushResponse invokeRobotPush(const Models::InvokeRobotPushRequest &request);

      /**
       * @summary 查询省份
       *
       * @param headers ListAllProvincesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllProvincesResponse
       */
      Models::ListAllProvincesResponse listAllProvincesWithOptions(const Models::ListAllProvincesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询省份
       *
       * @return ListAllProvincesResponse
       */
      Models::ListAllProvincesResponse listAllProvinces();

      /**
       * @summary 查询城市
       *
       * @param request ListCitiesByProvinceRequest
       * @param headers ListCitiesByProvinceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCitiesByProvinceResponse
       */
      Models::ListCitiesByProvinceResponse listCitiesByProvinceWithOptions(const Models::ListCitiesByProvinceRequest &request, const Models::ListCitiesByProvinceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询城市
       *
       * @param request ListCitiesByProvinceRequest
       * @return ListCitiesByProvinceResponse
       */
      Models::ListCitiesByProvinceResponse listCitiesByProvince(const Models::ListCitiesByProvinceRequest &request);

      /**
       * @summary 查询自定义问答列表
       *
       * @param tmpReq ListCustomQARequest
       * @param headers ListCustomQAHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomQAResponse
       */
      Models::ListCustomQAResponse listCustomQAWithOptions(const Models::ListCustomQARequest &tmpReq, const Models::ListCustomQAHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询自定义问答列表
       *
       * @param request ListCustomQARequest
       * @return ListCustomQAResponse
       */
      Models::ListCustomQAResponse listCustomQA(const Models::ListCustomQARequest &request);

      /**
       * @summary 酒店场景对话模板
       *
       * @param request ListDialogueTemplateRequest
       * @param headers ListDialogueTemplateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDialogueTemplateResponse
       */
      Models::ListDialogueTemplateResponse listDialogueTemplateWithOptions(const Models::ListDialogueTemplateRequest &request, const Models::ListDialogueTemplateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店场景对话模板
       *
       * @param request ListDialogueTemplateRequest
       * @return ListDialogueTemplateResponse
       */
      Models::ListDialogueTemplateResponse listDialogueTemplate(const Models::ListDialogueTemplateRequest &request);

      /**
       * @summary 查询酒店闹钟
       *
       * @param tmpReq ListHotelAlarmRequest
       * @param headers ListHotelAlarmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotelAlarmResponse
       */
      Models::ListHotelAlarmResponse listHotelAlarmWithOptions(const Models::ListHotelAlarmRequest &tmpReq, const Models::ListHotelAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询酒店闹钟
       *
       * @param request ListHotelAlarmRequest
       * @return ListHotelAlarmResponse
       */
      Models::ListHotelAlarmResponse listHotelAlarm(const Models::ListHotelAlarmRequest &request);

      /**
       * @summary 酒店设备列表
       *
       * @param tmpReq ListHotelControlDeviceRequest
       * @param headers ListHotelControlDeviceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotelControlDeviceResponse
       */
      Models::ListHotelControlDeviceResponse listHotelControlDeviceWithOptions(const Models::ListHotelControlDeviceRequest &tmpReq, const Models::ListHotelControlDeviceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店设备列表
       *
       * @param request ListHotelControlDeviceRequest
       * @return ListHotelControlDeviceResponse
       */
      Models::ListHotelControlDeviceResponse listHotelControlDevice(const Models::ListHotelControlDeviceRequest &request);

      /**
       * @summary 获取酒店列表
       *
       * @param headers ListHotelInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotelInfoResponse
       */
      Models::ListHotelInfoResponse listHotelInfoWithOptions(const Models::ListHotelInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取酒店列表
       *
       * @return ListHotelInfoResponse
       */
      Models::ListHotelInfoResponse listHotelInfo();

      /**
       * @summary 获取消息模板
       *
       * @param headers ListHotelMessageTemplateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotelMessageTemplateResponse
       */
      Models::ListHotelMessageTemplateResponse listHotelMessageTemplateWithOptions(const Models::ListHotelMessageTemplateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取消息模板
       *
       * @return ListHotelMessageTemplateResponse
       */
      Models::ListHotelMessageTemplateResponse listHotelMessageTemplate();

      /**
       * @summary 酒店订单列表
       *
       * @param tmpReq ListHotelOrderRequest
       * @param headers ListHotelOrderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotelOrderResponse
       */
      Models::ListHotelOrderResponse listHotelOrderWithOptions(const Models::ListHotelOrderRequest &tmpReq, const Models::ListHotelOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店订单列表
       *
       * @param request ListHotelOrderRequest
       * @return ListHotelOrderResponse
       */
      Models::ListHotelOrderResponse listHotelOrder(const Models::ListHotelOrderRequest &request);

      /**
       * @summary 获取酒店的所有房间
       *
       * @param tmpReq ListHotelRoomsRequest
       * @param headers ListHotelRoomsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotelRoomsResponse
       */
      Models::ListHotelRoomsResponse listHotelRoomsWithOptions(const Models::ListHotelRoomsRequest &tmpReq, const Models::ListHotelRoomsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取酒店的所有房间
       *
       * @param request ListHotelRoomsRequest
       * @return ListHotelRoomsResponse
       */
      Models::ListHotelRoomsResponse listHotelRooms(const Models::ListHotelRoomsRequest &request);

      /**
       * @summary 酒店场景预订列表（餐饮/SPA休闲/打车）
       *
       * @param tmpReq ListHotelSceneBookItemsRequest
       * @param headers ListHotelSceneBookItemsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotelSceneBookItemsResponse
       */
      Models::ListHotelSceneBookItemsResponse listHotelSceneBookItemsWithOptions(const Models::ListHotelSceneBookItemsRequest &tmpReq, const Models::ListHotelSceneBookItemsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店场景预订列表（餐饮/SPA休闲/打车）
       *
       * @param request ListHotelSceneBookItemsRequest
       * @return ListHotelSceneBookItemsResponse
       */
      Models::ListHotelSceneBookItemsResponse listHotelSceneBookItems(const Models::ListHotelSceneBookItemsRequest &request);

      /**
       * @summary 服务项目
       *
       * @param tmpReq ListHotelSceneItemRequest
       * @param headers ListHotelSceneItemHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotelSceneItemResponse
       */
      Models::ListHotelSceneItemResponse listHotelSceneItemWithOptions(const Models::ListHotelSceneItemRequest &tmpReq, const Models::ListHotelSceneItemHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 服务项目
       *
       * @param request ListHotelSceneItemRequest
       * @return ListHotelSceneItemResponse
       */
      Models::ListHotelSceneItemResponse listHotelSceneItem(const Models::ListHotelSceneItemRequest &request);

      /**
       * @summary 酒店场景列表（物品/服务/维修）
       *
       * @param tmpReq ListHotelSceneItemsRequest
       * @param headers ListHotelSceneItemsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotelSceneItemsResponse
       */
      Models::ListHotelSceneItemsResponse listHotelSceneItemsWithOptions(const Models::ListHotelSceneItemsRequest &tmpReq, const Models::ListHotelSceneItemsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店场景列表（物品/服务/维修）
       *
       * @param request ListHotelSceneItemsRequest
       * @return ListHotelSceneItemsResponse
       */
      Models::ListHotelSceneItemsResponse listHotelSceneItems(const Models::ListHotelSceneItemsRequest &request);

      /**
       * @summary 服务分类列表
       *
       * @param tmpReq ListHotelServiceCategoryRequest
       * @param headers ListHotelServiceCategoryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotelServiceCategoryResponse
       */
      Models::ListHotelServiceCategoryResponse listHotelServiceCategoryWithOptions(const Models::ListHotelServiceCategoryRequest &tmpReq, const Models::ListHotelServiceCategoryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 服务分类列表
       *
       * @param request ListHotelServiceCategoryRequest
       * @return ListHotelServiceCategoryResponse
       */
      Models::ListHotelServiceCategoryResponse listHotelServiceCategory(const Models::ListHotelServiceCategoryRequest &request);

      /**
       * @summary 酒店列表(待审批/已拒绝/已通过)
       *
       * @param tmpReq ListHotelsRequest
       * @param headers ListHotelsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotelsResponse
       */
      Models::ListHotelsResponse listHotelsWithOptions(const Models::ListHotelsRequest &tmpReq, const Models::ListHotelsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店列表(待审批/已拒绝/已通过)
       *
       * @param request ListHotelsRequest
       * @return ListHotelsResponse
       */
      Models::ListHotelsResponse listHotels(const Models::ListHotelsRequest &request);

      /**
       * @summary 查询红外品牌列表
       *
       * @param request ListInfraredDeviceBrandsRequest
       * @param headers ListInfraredDeviceBrandsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInfraredDeviceBrandsResponse
       */
      Models::ListInfraredDeviceBrandsResponse listInfraredDeviceBrandsWithOptions(const Models::ListInfraredDeviceBrandsRequest &request, const Models::ListInfraredDeviceBrandsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询红外品牌列表
       *
       * @param request ListInfraredDeviceBrandsRequest
       * @return ListInfraredDeviceBrandsResponse
       */
      Models::ListInfraredDeviceBrandsResponse listInfraredDeviceBrands(const Models::ListInfraredDeviceBrandsRequest &request);

      /**
       * @summary 查询红外码库列表
       *
       * @param request ListInfraredRemoteControllersRequest
       * @param headers ListInfraredRemoteControllersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInfraredRemoteControllersResponse
       */
      Models::ListInfraredRemoteControllersResponse listInfraredRemoteControllersWithOptions(const Models::ListInfraredRemoteControllersRequest &request, const Models::ListInfraredRemoteControllersHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询红外码库列表
       *
       * @param request ListInfraredRemoteControllersRequest
       * @return ListInfraredRemoteControllersResponse
       */
      Models::ListInfraredRemoteControllersResponse listInfraredRemoteControllers(const Models::ListInfraredRemoteControllersRequest &request);

      /**
       * @summary 查询服务提供商
       *
       * @param request ListSTBServiceProvidersRequest
       * @param headers ListSTBServiceProvidersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSTBServiceProvidersResponse
       */
      Models::ListSTBServiceProvidersResponse listSTBServiceProvidersWithOptions(const Models::ListSTBServiceProvidersRequest &request, const Models::ListSTBServiceProvidersHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务提供商
       *
       * @param request ListSTBServiceProvidersRequest
       * @return ListSTBServiceProvidersResponse
       */
      Models::ListSTBServiceProvidersResponse listSTBServiceProviders(const Models::ListSTBServiceProvidersRequest &request);

      /**
       * @summary 酒店场景分类
       *
       * @param request ListSceneCategoryRequest
       * @param headers ListSceneCategoryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSceneCategoryResponse
       */
      Models::ListSceneCategoryResponse listSceneCategoryWithOptions(const Models::ListSceneCategoryRequest &request, const Models::ListSceneCategoryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店场景分类
       *
       * @param request ListSceneCategoryRequest
       * @return ListSceneCategoryResponse
       */
      Models::ListSceneCategoryResponse listSceneCategory(const Models::ListSceneCategoryRequest &request);

      /**
       * @summary 查询服务设施问答列表
       *
       * @param tmpReq ListServiceQARequest
       * @param headers ListServiceQAHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceQAResponse
       */
      Models::ListServiceQAResponse listServiceQAWithOptions(const Models::ListServiceQARequest &tmpReq, const Models::ListServiceQAHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务设施问答列表
       *
       * @param request ListServiceQARequest
       * @return ListServiceQAResponse
       */
      Models::ListServiceQAResponse listServiceQA(const Models::ListServiceQARequest &request);

      /**
       * @summary 查询工单列表
       *
       * @param tmpReq ListTicketsRequest
       * @param headers ListTicketsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTicketsResponse
       */
      Models::ListTicketsResponse listTicketsWithOptions(const Models::ListTicketsRequest &tmpReq, const Models::ListTicketsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询工单列表
       *
       * @param request ListTicketsRequest
       * @return ListTicketsResponse
       */
      Models::ListTicketsResponse listTickets(const Models::ListTicketsRequest &request);

      /**
       * @summary 分页查询酒店房间主控设备
       *
       * @param request PageGetHotelRoomDevicesRequest
       * @param headers PageGetHotelRoomDevicesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PageGetHotelRoomDevicesResponse
       */
      Models::PageGetHotelRoomDevicesResponse pageGetHotelRoomDevicesWithOptions(const Models::PageGetHotelRoomDevicesRequest &request, const Models::PageGetHotelRoomDevicesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询酒店房间主控设备
       *
       * @param request PageGetHotelRoomDevicesRequest
       * @return PageGetHotelRoomDevicesResponse
       */
      Models::PageGetHotelRoomDevicesResponse pageGetHotelRoomDevices(const Models::PageGetHotelRoomDevicesRequest &request);

      /**
       * @summary pms事件上报
       *
       * @param request PmsEventReportRequest
       * @param headers PmsEventReportHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PmsEventReportResponse
       */
      Models::PmsEventReportResponse pmsEventReportWithOptions(const Models::PmsEventReportRequest &request, const Models::PmsEventReportHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary pms事件上报
       *
       * @param request PmsEventReportRequest
       * @return PmsEventReportResponse
       */
      Models::PmsEventReportResponse pmsEventReport(const Models::PmsEventReportRequest &request);

      /**
       * @summary 推送酒店消息
       *
       * @param tmpReq PushHotelMessageRequest
       * @param headers PushHotelMessageHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushHotelMessageResponse
       */
      Models::PushHotelMessageResponse pushHotelMessageWithOptions(const Models::PushHotelMessageRequest &tmpReq, const Models::PushHotelMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送酒店消息
       *
       * @param request PushHotelMessageRequest
       * @return PushHotelMessageResponse
       */
      Models::PushHotelMessageResponse pushHotelMessage(const Models::PushHotelMessageRequest &request);

      /**
       * @summary 推送音箱指令
       *
       * @param tmpReq PushVoiceBoxCommandsRequest
       * @param headers PushVoiceBoxCommandsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushVoiceBoxCommandsResponse
       */
      Models::PushVoiceBoxCommandsResponse pushVoiceBoxCommandsWithOptions(const Models::PushVoiceBoxCommandsRequest &tmpReq, const Models::PushVoiceBoxCommandsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送音箱指令
       *
       * @param request PushVoiceBoxCommandsRequest
       * @return PushVoiceBoxCommandsResponse
       */
      Models::PushVoiceBoxCommandsResponse pushVoiceBoxCommands(const Models::PushVoiceBoxCommandsRequest &request);

      /**
       * @summary 直接推送欢迎语
       *
       * @param request PushWelcomeRequest
       * @param headers PushWelcomeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushWelcomeResponse
       */
      Models::PushWelcomeResponse pushWelcomeWithOptions(const Models::PushWelcomeRequest &request, const Models::PushWelcomeHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 直接推送欢迎语
       *
       * @param request PushWelcomeRequest
       * @return PushWelcomeResponse
       */
      Models::PushWelcomeResponse pushWelcome(const Models::PushWelcomeRequest &request);

      /**
       * @summary 推送欢迎语
       *
       * @param tmpReq PushWelcomeTextAndMusicRequest
       * @param headers PushWelcomeTextAndMusicHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushWelcomeTextAndMusicResponse
       */
      Models::PushWelcomeTextAndMusicResponse pushWelcomeTextAndMusicWithOptions(const Models::PushWelcomeTextAndMusicRequest &tmpReq, const Models::PushWelcomeTextAndMusicHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送欢迎语
       *
       * @param request PushWelcomeTextAndMusicRequest
       * @return PushWelcomeTextAndMusicResponse
       */
      Models::PushWelcomeTextAndMusicResponse pushWelcomeTextAndMusic(const Models::PushWelcomeTextAndMusicRequest &request);

      /**
       * @summary 查询酒店设备状态/模式状态查询
       *
       * @param tmpReq QueryDeviceStatusRequest
       * @param headers QueryDeviceStatusHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDeviceStatusResponse
       */
      Models::QueryDeviceStatusResponse queryDeviceStatusWithOptions(const Models::QueryDeviceStatusRequest &tmpReq, const Models::QueryDeviceStatusHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询酒店设备状态/模式状态查询
       *
       * @param request QueryDeviceStatusRequest
       * @return QueryDeviceStatusResponse
       */
      Models::QueryDeviceStatusResponse queryDeviceStatus(const Models::QueryDeviceStatusRequest &request);

      /**
       * @summary 查询房间详细信息
       *
       * @param request QueryHotelRoomDetailRequest
       * @param headers QueryHotelRoomDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryHotelRoomDetailResponse
       */
      Models::QueryHotelRoomDetailResponse queryHotelRoomDetailWithOptions(const Models::QueryHotelRoomDetailRequest &request, const Models::QueryHotelRoomDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询房间详细信息
       *
       * @param request QueryHotelRoomDetailRequest
       * @return QueryHotelRoomDetailResponse
       */
      Models::QueryHotelRoomDetailResponse queryHotelRoomDetail(const Models::QueryHotelRoomDetailRequest &request);

      /**
       * @summary 查询酒店房间客控设备
       *
       * @param request QueryRoomControlDevicesRequest
       * @param headers QueryRoomControlDevicesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRoomControlDevicesResponse
       */
      Models::QueryRoomControlDevicesResponse queryRoomControlDevicesWithOptions(const Models::QueryRoomControlDevicesRequest &request, const Models::QueryRoomControlDevicesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询酒店房间客控设备
       *
       * @param request QueryRoomControlDevicesRequest
       * @return QueryRoomControlDevicesResponse
       */
      Models::QueryRoomControlDevicesResponse queryRoomControlDevices(const Models::QueryRoomControlDevicesRequest &request);

      /**
       * @summary 查询房间被控设备包含设备状态
       *
       * @param request QueryRoomControlDevicesAndStatusRequest
       * @param headers QueryRoomControlDevicesAndStatusHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRoomControlDevicesAndStatusResponse
       */
      Models::QueryRoomControlDevicesAndStatusResponse queryRoomControlDevicesAndStatusWithOptions(const Models::QueryRoomControlDevicesAndStatusRequest &request, const Models::QueryRoomControlDevicesAndStatusHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询房间被控设备包含设备状态
       *
       * @param request QueryRoomControlDevicesAndStatusRequest
       * @return QueryRoomControlDevicesAndStatusResponse
       */
      Models::QueryRoomControlDevicesAndStatusResponse queryRoomControlDevicesAndStatus(const Models::QueryRoomControlDevicesAndStatusRequest &request);

      /**
       * @summary 查询房态信息
       *
       * @param request QueryRoomStatusRequest
       * @param headers QueryRoomStatusHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRoomStatusResponse
       */
      Models::QueryRoomStatusResponse queryRoomStatusWithOptions(const Models::QueryRoomStatusRequest &request, const Models::QueryRoomStatusHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询房态信息
       *
       * @param request QueryRoomStatusRequest
       * @return QueryRoomStatusResponse
       */
      Models::QueryRoomStatusResponse queryRoomStatus(const Models::QueryRoomStatusRequest &request);

      /**
       * @summary 查询酒店场景列表
       *
       * @param tmpReq QuerySceneListRequest
       * @param headers QuerySceneListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySceneListResponse
       */
      Models::QuerySceneListResponse querySceneListWithOptions(const Models::QuerySceneListRequest &tmpReq, const Models::QuerySceneListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询酒店场景列表
       *
       * @param request QuerySceneListRequest
       * @return QuerySceneListResponse
       */
      Models::QuerySceneListResponse querySceneList(const Models::QuerySceneListRequest &request);

      /**
       * @summary 删除子账号授权
       *
       * @param request RemoveChildAccountAuthRequest
       * @param headers RemoveChildAccountAuthHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveChildAccountAuthResponse
       */
      Models::RemoveChildAccountAuthResponse removeChildAccountAuthWithOptions(const Models::RemoveChildAccountAuthRequest &request, const Models::RemoveChildAccountAuthHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除子账号授权
       *
       * @param request RemoveChildAccountAuthRequest
       * @return RemoveChildAccountAuthResponse
       */
      Models::RemoveChildAccountAuthResponse removeChildAccountAuth(const Models::RemoveChildAccountAuthRequest &request);

      /**
       * @summary 删除酒店项目
       *
       * @param request RemoveHotelRequest
       * @param headers RemoveHotelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveHotelResponse
       */
      Models::RemoveHotelResponse removeHotelWithOptions(const Models::RemoveHotelRequest &request, const Models::RemoveHotelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除酒店项目
       *
       * @param request RemoveHotelRequest
       * @return RemoveHotelResponse
       */
      Models::RemoveHotelResponse removeHotel(const Models::RemoveHotelRequest &request);

      /**
       * @summary 重置欢迎语信息
       *
       * @param request ResetWelcomeTextAndMusicRequest
       * @param headers ResetWelcomeTextAndMusicHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetWelcomeTextAndMusicResponse
       */
      Models::ResetWelcomeTextAndMusicResponse resetWelcomeTextAndMusicWithOptions(const Models::ResetWelcomeTextAndMusicRequest &request, const Models::ResetWelcomeTextAndMusicHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置欢迎语信息
       *
       * @param request ResetWelcomeTextAndMusicRequest
       * @return ResetWelcomeTextAndMusicResponse
       */
      Models::ResetWelcomeTextAndMusicResponse resetWelcomeTextAndMusic(const Models::ResetWelcomeTextAndMusicRequest &request);

      /**
       * @summary 退房
       *
       * @param tmpReq RoomCheckOutRequest
       * @param headers RoomCheckOutHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RoomCheckOutResponse
       */
      Models::RoomCheckOutResponse roomCheckOutWithOptions(const Models::RoomCheckOutRequest &tmpReq, const Models::RoomCheckOutHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 退房
       *
       * @param request RoomCheckOutRequest
       * @return RoomCheckOutResponse
       */
      Models::RoomCheckOutResponse roomCheckOut(const Models::RoomCheckOutRequest &request);

      /**
       * @summary 提交酒店订单
       *
       * @param tmpReq SubmitHotelOrderRequest
       * @param headers SubmitHotelOrderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitHotelOrderResponse
       */
      Models::SubmitHotelOrderResponse submitHotelOrderWithOptions(const Models::SubmitHotelOrderRequest &tmpReq, const Models::SubmitHotelOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交酒店订单
       *
       * @param request SubmitHotelOrderRequest
       * @return SubmitHotelOrderResponse
       */
      Models::SubmitHotelOrderResponse submitHotelOrder(const Models::SubmitHotelOrderRequest &request);

      /**
       * @summary 同步客控设备状态到主控设备
       *
       * @param request SyncDeviceStatusWithAkRequest
       * @param headers SyncDeviceStatusWithAkHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncDeviceStatusWithAkResponse
       */
      Models::SyncDeviceStatusWithAkResponse syncDeviceStatusWithAkWithOptions(const Models::SyncDeviceStatusWithAkRequest &request, const Models::SyncDeviceStatusWithAkHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步客控设备状态到主控设备
       *
       * @param request SyncDeviceStatusWithAkRequest
       * @return SyncDeviceStatusWithAkResponse
       */
      Models::SyncDeviceStatusWithAkResponse syncDeviceStatusWithAk(const Models::SyncDeviceStatusWithAkRequest &request);

      /**
       * @summary 修改基础信息问答
       *
       * @param request UpdateBasicInfoQARequest
       * @param headers UpdateBasicInfoQAHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBasicInfoQAResponse
       */
      Models::UpdateBasicInfoQAResponse updateBasicInfoQAWithOptions(const Models::UpdateBasicInfoQARequest &request, const Models::UpdateBasicInfoQAHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改基础信息问答
       *
       * @param request UpdateBasicInfoQARequest
       * @return UpdateBasicInfoQAResponse
       */
      Models::UpdateBasicInfoQAResponse updateBasicInfoQA(const Models::UpdateBasicInfoQARequest &request);

      /**
       * @summary 修改自定义问答
       *
       * @param tmpReq UpdateCustomQARequest
       * @param headers UpdateCustomQAHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomQAResponse
       */
      Models::UpdateCustomQAResponse updateCustomQAWithOptions(const Models::UpdateCustomQARequest &tmpReq, const Models::UpdateCustomQAHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改自定义问答
       *
       * @param request UpdateCustomQARequest
       * @return UpdateCustomQAResponse
       */
      Models::UpdateCustomQAResponse updateCustomQA(const Models::UpdateCustomQARequest &request);

      /**
       * @summary 修改酒店项目
       *
       * @param tmpReq UpdateHotelRequest
       * @param headers UpdateHotelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHotelResponse
       */
      Models::UpdateHotelResponse updateHotelWithOptions(const Models::UpdateHotelRequest &tmpReq, const Models::UpdateHotelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改酒店项目
       *
       * @param request UpdateHotelRequest
       * @return UpdateHotelResponse
       */
      Models::UpdateHotelResponse updateHotel(const Models::UpdateHotelRequest &request);

      /**
       * @summary 修改酒店闹钟
       *
       * @param tmpReq UpdateHotelAlarmRequest
       * @param headers UpdateHotelAlarmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHotelAlarmResponse
       */
      Models::UpdateHotelAlarmResponse updateHotelAlarmWithOptions(const Models::UpdateHotelAlarmRequest &tmpReq, const Models::UpdateHotelAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改酒店闹钟
       *
       * @param request UpdateHotelAlarmRequest
       * @return UpdateHotelAlarmResponse
       */
      Models::UpdateHotelAlarmResponse updateHotelAlarm(const Models::UpdateHotelAlarmRequest &request);

      /**
       * @summary 酒店场景预订编辑
       *
       * @param tmpReq UpdateHotelSceneBookItemRequest
       * @param headers UpdateHotelSceneBookItemHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHotelSceneBookItemResponse
       */
      Models::UpdateHotelSceneBookItemResponse updateHotelSceneBookItemWithOptions(const Models::UpdateHotelSceneBookItemRequest &tmpReq, const Models::UpdateHotelSceneBookItemHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店场景预订编辑
       *
       * @param request UpdateHotelSceneBookItemRequest
       * @return UpdateHotelSceneBookItemResponse
       */
      Models::UpdateHotelSceneBookItemResponse updateHotelSceneBookItem(const Models::UpdateHotelSceneBookItemRequest &request);

      /**
       * @summary 酒店场景修改（开启/关闭/编辑）
       *
       * @param tmpReq UpdateHotelSceneItemRequest
       * @param headers UpdateHotelSceneItemHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHotelSceneItemResponse
       */
      Models::UpdateHotelSceneItemResponse updateHotelSceneItemWithOptions(const Models::UpdateHotelSceneItemRequest &tmpReq, const Models::UpdateHotelSceneItemHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店场景修改（开启/关闭/编辑）
       *
       * @param request UpdateHotelSceneItemRequest
       * @return UpdateHotelSceneItemResponse
       */
      Models::UpdateHotelSceneItemResponse updateHotelSceneItem(const Models::UpdateHotelSceneItemRequest &request);

      /**
       * @summary 更新消息通知模板
       *
       * @param request UpdateMessageTemplateRequest
       * @param headers UpdateMessageTemplateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMessageTemplateResponse
       */
      Models::UpdateMessageTemplateResponse updateMessageTemplateWithOptions(const Models::UpdateMessageTemplateRequest &request, const Models::UpdateMessageTemplateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新消息通知模板
       *
       * @param request UpdateMessageTemplateRequest
       * @return UpdateMessageTemplateResponse
       */
      Models::UpdateMessageTemplateResponse updateMessageTemplate(const Models::UpdateMessageTemplateRequest &request);

      /**
       * @summary 修改酒店自定义rcu场景
       *
       * @param tmpReq UpdateRcuSceneRequest
       * @param headers UpdateRcuSceneHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRcuSceneResponse
       */
      Models::UpdateRcuSceneResponse updateRcuSceneWithOptions(const Models::UpdateRcuSceneRequest &tmpReq, const Models::UpdateRcuSceneHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改酒店自定义rcu场景
       *
       * @param request UpdateRcuSceneRequest
       * @return UpdateRcuSceneResponse
       */
      Models::UpdateRcuSceneResponse updateRcuScene(const Models::UpdateRcuSceneRequest &request);

      /**
       * @summary 修改服务设施问答
       *
       * @param request UpdateServiceQARequest
       * @param headers UpdateServiceQAHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceQAResponse
       */
      Models::UpdateServiceQAResponse updateServiceQAWithOptions(const Models::UpdateServiceQARequest &request, const Models::UpdateServiceQAHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改服务设施问答
       *
       * @param request UpdateServiceQARequest
       * @return UpdateServiceQAResponse
       */
      Models::UpdateServiceQAResponse updateServiceQA(const Models::UpdateServiceQARequest &request);

      /**
       * @summary 修改工单
       *
       * @param request UpdateTicketRequest
       * @param headers UpdateTicketHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTicketResponse
       */
      Models::UpdateTicketResponse updateTicketWithOptions(const Models::UpdateTicketRequest &request, const Models::UpdateTicketHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改工单
       *
       * @param request UpdateTicketRequest
       * @return UpdateTicketResponse
       */
      Models::UpdateTicketResponse updateTicket(const Models::UpdateTicketRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
