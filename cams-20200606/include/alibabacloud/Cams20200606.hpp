// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CAMS20200606_HPP_
#define ALIBABACLOUD_CAMS20200606_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cams20200606Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cams20200606.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 申请：变更目的地/恢复/暂停
       *
       * @param tmpReq AddAddressRecoverSuspendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAddressRecoverSuspendResponse
       */
      Models::AddAddressRecoverSuspendResponse addAddressRecoverSuspendWithOptions(const Models::AddAddressRecoverSuspendRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请：变更目的地/恢复/暂停
       *
       * @param request AddAddressRecoverSuspendRequest
       * @return AddAddressRecoverSuspendResponse
       */
      Models::AddAddressRecoverSuspendResponse addAddressRecoverSuspend(const Models::AddAddressRecoverSuspendRequest &request);

      /**
       * @summary 注册viber账号，开户
       *
       * @param tmpReq AddAuditViberOpenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAuditViberOpenResponse
       */
      Models::AddAuditViberOpenResponse addAuditViberOpenWithOptions(const Models::AddAuditViberOpenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 注册viber账号，开户
       *
       * @param request AddAuditViberOpenRequest
       * @return AddAuditViberOpenResponse
       */
      Models::AddAuditViberOpenResponse addAuditViberOpen(const Models::AddAuditViberOpenRequest &request);

      /**
       * @summary AddChatGroup
       *
       * @param request AddChatGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddChatGroupResponse
       */
      Models::AddChatGroupResponse addChatGroupWithOptions(const Models::AddChatGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AddChatGroup
       *
       * @param request AddChatGroupRequest
       * @return AddChatGroupResponse
       */
      Models::AddChatGroupResponse addChatGroup(const Models::AddChatGroupRequest &request);

      /**
       * @summary AddChatGroupInviteLink
       *
       * @param request AddChatGroupInviteLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddChatGroupInviteLinkResponse
       */
      Models::AddChatGroupInviteLinkResponse addChatGroupInviteLinkWithOptions(const Models::AddChatGroupInviteLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AddChatGroupInviteLink
       *
       * @param request AddChatGroupInviteLinkRequest
       * @return AddChatGroupInviteLinkResponse
       */
      Models::AddChatGroupInviteLinkResponse addChatGroupInviteLink(const Models::AddChatGroupInviteLinkRequest &request);

      /**
       * @summary Adds a phone number for a WhatsApp Business account (WABA).
       *
       * @param request AddChatappPhoneNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddChatappPhoneNumberResponse
       */
      Models::AddChatappPhoneNumberResponse addChatappPhoneNumberWithOptions(const Models::AddChatappPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a phone number for a WhatsApp Business account (WABA).
       *
       * @param request AddChatappPhoneNumberRequest
       * @return AddChatappPhoneNumberResponse
       */
      Models::AddChatappPhoneNumberResponse addChatappPhoneNumber(const Models::AddChatappPhoneNumberRequest &request);

      /**
       * @summary 编辑联系人-新增联系人
       *
       * @param tmpReq AddContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddContactsResponse
       */
      Models::AddContactsResponse addContactsWithOptions(const Models::AddContactsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑联系人-新增联系人
       *
       * @param request AddContactsRequest
       * @return AddContactsResponse
       */
      Models::AddContactsResponse addContacts(const Models::AddContactsRequest &request);

      /**
       * @summary 增加自定义受众(这个接口需要从镇元直接配置）
       *
       * @param tmpReq AddCustomAudienceUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomAudienceUserResponse
       */
      Models::AddCustomAudienceUserResponse addCustomAudienceUserWithOptions(const Models::AddCustomAudienceUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增加自定义受众(这个接口需要从镇元直接配置）
       *
       * @param request AddCustomAudienceUserRequest
       * @return AddCustomAudienceUserResponse
       */
      Models::AddCustomAudienceUserResponse addCustomAudienceUser(const Models::AddCustomAudienceUserRequest &request);

      /**
       * @summary 添加群组
       *
       * @param tmpReq AddGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGroupResponse
       */
      Models::AddGroupResponse addGroupWithOptions(const Models::AddGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加群组
       *
       * @param request AddGroupRequest
       * @return AddGroupResponse
       */
      Models::AddGroupResponse addGroup(const Models::AddGroupRequest &request);

      /**
       * @summary 新增营销活动
       *
       * @param tmpReq AddMarketingFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMarketingFlowResponse
       */
      Models::AddMarketingFlowResponse addMarketingFlowWithOptions(const Models::AddMarketingFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增营销活动
       *
       * @param request AddMarketingFlowRequest
       * @return AddMarketingFlowResponse
       */
      Models::AddMarketingFlowResponse addMarketingFlow(const Models::AddMarketingFlowRequest &request);

      /**
       * @summary 绑定DM账号
       *
       * @param tmpReq BindDmAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindDmAccountResponse
       */
      Models::BindDmAccountResponse bindDmAccountWithOptions(const Models::BindDmAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定DM账号
       *
       * @param request BindDmAccountRequest
       * @return BindDmAccountResponse
       */
      Models::BindDmAccountResponse bindDmAccount(const Models::BindDmAccountRequest &request);

      /**
       * @summary 绑定ins的page
       *
       * @param request BindInstagramPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindInstagramPageResponse
       */
      Models::BindInstagramPageResponse bindInstagramPageWithOptions(const Models::BindInstagramPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定ins的page
       *
       * @param request BindInstagramPageRequest
       * @return BindInstagramPageResponse
       */
      Models::BindInstagramPageResponse bindInstagramPage(const Models::BindInstagramPageRequest &request);

      /**
       * @summary 绑定选择的pageId
       *
       * @param request BindMessengerPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindMessengerPageResponse
       */
      Models::BindMessengerPageResponse bindMessengerPageWithOptions(const Models::BindMessengerPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定选择的pageId
       *
       * @param request BindMessengerPageRequest
       * @return BindMessengerPageResponse
       */
      Models::BindMessengerPageResponse bindMessengerPage(const Models::BindMessengerPageRequest &request);

      /**
       * @summary 资源转组
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 资源转组
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Binds the WhatsApp Business account with ChatApp.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ChatappBindWabaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappBindWabaResponse
       */
      Models::ChatappBindWabaResponse chatappBindWabaWithOptions(const Models::ChatappBindWabaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds the WhatsApp Business account with ChatApp.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ChatappBindWabaRequest
       * @return ChatappBindWabaResponse
       */
      Models::ChatappBindWabaResponse chatappBindWaba(const Models::ChatappBindWabaRequest &request);

      /**
       * @summary Registers a phone number for migration.
       *
       * @description The space ID of the RAM user within the independent software vendor (ISV) account.
       *
       * @param request ChatappMigrationRegisterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappMigrationRegisterResponse
       */
      Models::ChatappMigrationRegisterResponse chatappMigrationRegisterWithOptions(const Models::ChatappMigrationRegisterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a phone number for migration.
       *
       * @description The space ID of the RAM user within the independent software vendor (ISV) account.
       *
       * @param request ChatappMigrationRegisterRequest
       * @return ChatappMigrationRegisterResponse
       */
      Models::ChatappMigrationRegisterResponse chatappMigrationRegister(const Models::ChatappMigrationRegisterRequest &request);

      /**
       * @summary Verifies a specified phone number for migration.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ChatappMigrationVerifiedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappMigrationVerifiedResponse
       */
      Models::ChatappMigrationVerifiedResponse chatappMigrationVerifiedWithOptions(const Models::ChatappMigrationVerifiedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies a specified phone number for migration.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ChatappMigrationVerifiedRequest
       * @return ChatappMigrationVerifiedResponse
       */
      Models::ChatappMigrationVerifiedResponse chatappMigrationVerified(const Models::ChatappMigrationVerifiedRequest &request);

      /**
       * @summary Deregisters a phone number from a WhatsApp Business account (WABA).
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ChatappPhoneNumberDeregisterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappPhoneNumberDeregisterResponse
       */
      Models::ChatappPhoneNumberDeregisterResponse chatappPhoneNumberDeregisterWithOptions(const Models::ChatappPhoneNumberDeregisterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deregisters a phone number from a WhatsApp Business account (WABA).
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ChatappPhoneNumberDeregisterRequest
       * @return ChatappPhoneNumberDeregisterResponse
       */
      Models::ChatappPhoneNumberDeregisterResponse chatappPhoneNumberDeregister(const Models::ChatappPhoneNumberDeregisterRequest &request);

      /**
       * @summary Registers a phone number.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ChatappPhoneNumberRegisterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappPhoneNumberRegisterResponse
       */
      Models::ChatappPhoneNumberRegisterResponse chatappPhoneNumberRegisterWithOptions(const Models::ChatappPhoneNumberRegisterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a phone number.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ChatappPhoneNumberRegisterRequest
       * @return ChatappPhoneNumberRegisterResponse
       */
      Models::ChatappPhoneNumberRegisterResponse chatappPhoneNumberRegister(const Models::ChatappPhoneNumberRegisterRequest &request);

      /**
       * @summary Synchronizes phone numbers.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ChatappSyncPhoneNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappSyncPhoneNumberResponse
       */
      Models::ChatappSyncPhoneNumberResponse chatappSyncPhoneNumberWithOptions(const Models::ChatappSyncPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes phone numbers.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ChatappSyncPhoneNumberRequest
       * @return ChatappSyncPhoneNumberResponse
       */
      Models::ChatappSyncPhoneNumberResponse chatappSyncPhoneNumber(const Models::ChatappSyncPhoneNumberRequest &request);

      /**
       * @summary Associates a phone number with a WhatsApp Business account (WABA).
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ChatappVerifyAndRegisterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappVerifyAndRegisterResponse
       */
      Models::ChatappVerifyAndRegisterResponse chatappVerifyAndRegisterWithOptions(const Models::ChatappVerifyAndRegisterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a phone number with a WhatsApp Business account (WABA).
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ChatappVerifyAndRegisterRequest
       * @return ChatappVerifyAndRegisterResponse
       */
      Models::ChatappVerifyAndRegisterResponse chatappVerifyAndRegister(const Models::ChatappVerifyAndRegisterRequest &request);

      /**
       * @summary 复制模板
       *
       * @param request CopyTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyTemplateResponse
       */
      Models::CopyTemplateResponse copyTemplateWithOptions(const Models::CopyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 复制模板
       *
       * @param request CopyTemplateRequest
       * @return CopyTemplateResponse
       */
      Models::CopyTemplateResponse copyTemplate(const Models::CopyTemplateRequest &request);

      /**
       * @summary Create Chatflow
       *
       * @param tmpReq CreateChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatFlowResponse
       */
      Models::CreateChatFlowResponse createChatFlowWithOptions(const Models::CreateChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Chatflow
       *
       * @param request CreateChatFlowRequest
       * @return CreateChatFlowResponse
       */
      Models::CreateChatFlowResponse createChatFlow(const Models::CreateChatFlowRequest &request);

      /**
       * @summary Import and create flow
       *
       * @param tmpReq CreateChatFlowByImportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatFlowByImportResponse
       */
      Models::CreateChatFlowByImportResponse createChatFlowByImportWithOptions(const Models::CreateChatFlowByImportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Import and create flow
       *
       * @param request CreateChatFlowByImportRequest
       * @return CreateChatFlowByImportResponse
       */
      Models::CreateChatFlowByImportResponse createChatFlowByImport(const Models::CreateChatFlowByImportRequest &request);

      /**
       * @summary Create chatFlow log setting
       *
       * @param request CreateChatFlowLogSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatFlowLogSettingResponse
       */
      Models::CreateChatFlowLogSettingResponse createChatFlowLogSettingWithOptions(const Models::CreateChatFlowLogSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create chatFlow log setting
       *
       * @param request CreateChatFlowLogSettingRequest
       * @return CreateChatFlowLogSettingResponse
       */
      Models::CreateChatFlowLogSettingResponse createChatFlowLogSetting(const Models::CreateChatFlowLogSettingRequest &request);

      /**
       * @summary The ID of the number.
       *
       * @description The status of the phone number.
       *
       * @param request CreateChatappMigrationInitiateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatappMigrationInitiateResponse
       */
      Models::CreateChatappMigrationInitiateResponse createChatappMigrationInitiateWithOptions(const Models::CreateChatappMigrationInitiateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the number.
       *
       * @description The status of the phone number.
       *
       * @param request CreateChatappMigrationInitiateRequest
       * @return CreateChatappMigrationInitiateResponse
       */
      Models::CreateChatappMigrationInitiateResponse createChatappMigrationInitiate(const Models::CreateChatappMigrationInitiateRequest &request);

      /**
       * @summary The HTTP status code.
       * \\\\\\\\*   Example: OK. This parameter indicates that the request is successful.
       * \\\\\\\\*   Other values indicate that the request fails. For more information, see \\\\\\[Error codes]\\\\\\(https://www.alibabacloud.com/help/zh/cams/latest/api-error-codes).
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param tmpReq CreateChatappTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatappTemplateResponse
       */
      Models::CreateChatappTemplateResponse createChatappTemplateWithOptions(const Models::CreateChatappTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The HTTP status code.
       * \\\\\\\\*   Example: OK. This parameter indicates that the request is successful.
       * \\\\\\\\*   Other values indicate that the request fails. For more information, see \\\\\\[Error codes]\\\\\\(https://www.alibabacloud.com/help/zh/cams/latest/api-error-codes).
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateChatappTemplateRequest
       * @return CreateChatappTemplateResponse
       */
      Models::CreateChatappTemplateResponse createChatappTemplate(const Models::CreateChatappTemplateRequest &request);

      /**
       * @summary 创建自定义受众
       *
       * @param request CreateCustomAudienceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomAudienceResponse
       */
      Models::CreateCustomAudienceResponse createCustomAudienceWithOptions(const Models::CreateCustomAudienceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义受众
       *
       * @param request CreateCustomAudienceRequest
       * @return CreateCustomAudienceResponse
       */
      Models::CreateCustomAudienceResponse createCustomAudience(const Models::CreateCustomAudienceRequest &request);

      /**
       * @summary Creates a Flow.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param tmpReq CreateFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlowWithOptions(const Models::CreateFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Flow.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateFlowRequest
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlow(const Models::CreateFlowRequest &request);

      /**
       * @summary CreateFlowVersion
       *
       * @param tmpReq CreateFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowVersionResponse
       */
      Models::CreateFlowVersionResponse createFlowVersionWithOptions(const Models::CreateFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateFlowVersion
       *
       * @param request CreateFlowVersionRequest
       * @return CreateFlowVersionResponse
       */
      Models::CreateFlowVersionResponse createFlowVersion(const Models::CreateFlowVersionRequest &request);

      /**
       * @summary 新建实例
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建实例
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary 创建预算
       *
       * @param request CreateMessageCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMessageCampaignResponse
       */
      Models::CreateMessageCampaignResponse createMessageCampaignWithOptions(const Models::CreateMessageCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建预算
       *
       * @param request CreateMessageCampaignRequest
       * @return CreateMessageCampaignResponse
       */
      Models::CreateMessageCampaignResponse createMessageCampaign(const Models::CreateMessageCampaignRequest &request);

      /**
       * @summary 嵌入式授权messenger
       *
       * @param tmpReq CreateMessengerPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMessengerPageResponse
       */
      Models::CreateMessengerPageResponse createMessengerPageWithOptions(const Models::CreateMessengerPageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 嵌入式授权messenger
       *
       * @param request CreateMessengerPageRequest
       * @return CreateMessengerPageResponse
       */
      Models::CreateMessengerPageResponse createMessengerPage(const Models::CreateMessengerPageRequest &request);

      /**
       * @summary Creates a quick-response (QR) code that contains a message.
       *
       * @param request CreatePhoneMessageQrdlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhoneMessageQrdlResponse
       */
      Models::CreatePhoneMessageQrdlResponse createPhoneMessageQrdlWithOptions(const Models::CreatePhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quick-response (QR) code that contains a message.
       *
       * @param request CreatePhoneMessageQrdlRequest
       * @return CreatePhoneMessageQrdlResponse
       */
      Models::CreatePhoneMessageQrdlResponse createPhoneMessageQrdl(const Models::CreatePhoneMessageQrdlRequest &request);

      /**
       * @summary 根据嵌入式code获取pageId入库
       *
       * @param tmpReq CreateWhatsappConversionApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWhatsappConversionApiResponse
       */
      Models::CreateWhatsappConversionApiResponse createWhatsappConversionApiWithOptions(const Models::CreateWhatsappConversionApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据嵌入式code获取pageId入库
       *
       * @param request CreateWhatsappConversionApiRequest
       * @return CreateWhatsappConversionApiResponse
       */
      Models::CreateWhatsappConversionApiResponse createWhatsappConversionApi(const Models::CreateWhatsappConversionApiRequest &request);

      /**
       * @summary Delete Process
       *
       * @param tmpReq DeleteChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatFlowResponse
       */
      Models::DeleteChatFlowResponse deleteChatFlowWithOptions(const Models::DeleteChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Process
       *
       * @param request DeleteChatFlowRequest
       * @return DeleteChatFlowResponse
       */
      Models::DeleteChatFlowResponse deleteChatFlow(const Models::DeleteChatFlowRequest &request);

      /**
       * @summary DeleteChatGroup
       *
       * @param request DeleteChatGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatGroupResponse
       */
      Models::DeleteChatGroupResponse deleteChatGroupWithOptions(const Models::DeleteChatGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteChatGroup
       *
       * @param request DeleteChatGroupRequest
       * @return DeleteChatGroupResponse
       */
      Models::DeleteChatGroupResponse deleteChatGroup(const Models::DeleteChatGroupRequest &request);

      /**
       * @summary DeleteChatGroupInviteLink
       *
       * @param request DeleteChatGroupInviteLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatGroupInviteLinkResponse
       */
      Models::DeleteChatGroupInviteLinkResponse deleteChatGroupInviteLinkWithOptions(const Models::DeleteChatGroupInviteLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteChatGroupInviteLink
       *
       * @param request DeleteChatGroupInviteLinkRequest
       * @return DeleteChatGroupInviteLinkResponse
       */
      Models::DeleteChatGroupInviteLinkResponse deleteChatGroupInviteLink(const Models::DeleteChatGroupInviteLinkRequest &request);

      /**
       * @summary DeleteChatGroupParticipants
       *
       * @param tmpReq DeleteChatGroupParticipantsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatGroupParticipantsResponse
       */
      Models::DeleteChatGroupParticipantsResponse deleteChatGroupParticipantsWithOptions(const Models::DeleteChatGroupParticipantsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteChatGroupParticipants
       *
       * @param request DeleteChatGroupParticipantsRequest
       * @return DeleteChatGroupParticipantsResponse
       */
      Models::DeleteChatGroupParticipantsResponse deleteChatGroupParticipants(const Models::DeleteChatGroupParticipantsRequest &request);

      /**
       * @summary Deletes a message template.
       *
       * @description ### QPS limit
       * You can call this operation up to five times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteChatappTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatappTemplateResponse
       */
      Models::DeleteChatappTemplateResponse deleteChatappTemplateWithOptions(const Models::DeleteChatappTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a message template.
       *
       * @description ### QPS limit
       * You can call this operation up to five times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteChatappTemplateRequest
       * @return DeleteChatappTemplateResponse
       */
      Models::DeleteChatappTemplateResponse deleteChatappTemplate(const Models::DeleteChatappTemplateRequest &request);

      /**
       * @summary 编辑联系人-删除联系人
       *
       * @param tmpReq DeleteContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactsResponse
       */
      Models::DeleteContactsResponse deleteContactsWithOptions(const Models::DeleteContactsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑联系人-删除联系人
       *
       * @param request DeleteContactsRequest
       * @return DeleteContactsResponse
       */
      Models::DeleteContactsResponse deleteContacts(const Models::DeleteContactsRequest &request);

      /**
       * @summary 删除联系人(选择后删除)
       *
       * @param request DeleteContactsByIdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactsByIdsResponse
       */
      Models::DeleteContactsByIdsResponse deleteContactsByIdsWithOptions(const Models::DeleteContactsByIdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除联系人(选择后删除)
       *
       * @param request DeleteContactsByIdsRequest
       * @return DeleteContactsByIdsResponse
       */
      Models::DeleteContactsByIdsResponse deleteContactsByIds(const Models::DeleteContactsByIdsRequest &request);

      /**
       * @summary Deletes a Flow. Only Flows in the DRAFT state can be deleted.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlowWithOptions(const Models::DeleteFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Flow. Only Flows in the DRAFT state can be deleted.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteFlowRequest
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlow(const Models::DeleteFlowRequest &request);

      /**
       * @summary Delete Flow Version
       *
       * @param tmpReq DeleteFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowVersionResponse
       */
      Models::DeleteFlowVersionResponse deleteFlowVersionWithOptions(const Models::DeleteFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Flow Version
       *
       * @param request DeleteFlowVersionRequest
       * @return DeleteFlowVersionResponse
       */
      Models::DeleteFlowVersionResponse deleteFlowVersion(const Models::DeleteFlowVersionRequest &request);

      /**
       * @summary 删除群组
       *
       * @param request DeleteGroupByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupByIdResponse
       */
      Models::DeleteGroupByIdResponse deleteGroupByIdWithOptions(const Models::DeleteGroupByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除群组
       *
       * @param request DeleteGroupByIdRequest
       * @return DeleteGroupByIdResponse
       */
      Models::DeleteGroupByIdResponse deleteGroupById(const Models::DeleteGroupByIdRequest &request);

      /**
       * @summary 删除ins的page
       *
       * @param request DeleteInstagramPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstagramPageResponse
       */
      Models::DeleteInstagramPageResponse deleteInstagramPageWithOptions(const Models::DeleteInstagramPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除ins的page
       *
       * @param request DeleteInstagramPageRequest
       * @return DeleteInstagramPageResponse
       */
      Models::DeleteInstagramPageResponse deleteInstagramPage(const Models::DeleteInstagramPageRequest &request);

      /**
       * @summary 删除实例
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除实例
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary 删除营销活动
       *
       * @param request DeleteMarketingFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMarketingFlowResponse
       */
      Models::DeleteMarketingFlowResponse deleteMarketingFlowWithOptions(const Models::DeleteMarketingFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除营销活动
       *
       * @param request DeleteMarketingFlowRequest
       * @return DeleteMarketingFlowResponse
       */
      Models::DeleteMarketingFlowResponse deleteMarketingFlow(const Models::DeleteMarketingFlowRequest &request);

      /**
       * @summary 删除预算
       *
       * @param request DeleteMessageCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMessageCampaignResponse
       */
      Models::DeleteMessageCampaignResponse deleteMessageCampaignWithOptions(const Models::DeleteMessageCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除预算
       *
       * @param request DeleteMessageCampaignRequest
       * @return DeleteMessageCampaignResponse
       */
      Models::DeleteMessageCampaignResponse deleteMessageCampaign(const Models::DeleteMessageCampaignRequest &request);

      /**
       * @summary 删除messenger的page
       *
       * @param request DeleteMessengerPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMessengerPageResponse
       */
      Models::DeleteMessengerPageResponse deleteMessengerPageWithOptions(const Models::DeleteMessengerPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除messenger的page
       *
       * @param request DeleteMessengerPageRequest
       * @return DeleteMessengerPageResponse
       */
      Models::DeleteMessengerPageResponse deleteMessengerPage(const Models::DeleteMessengerPageRequest &request);

      /**
       * @summary Deletes a quick-response (QR) code that contains a message.
       *
       * @param request DeletePhoneMessageQrdlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePhoneMessageQrdlResponse
       */
      Models::DeletePhoneMessageQrdlResponse deletePhoneMessageQrdlWithOptions(const Models::DeletePhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quick-response (QR) code that contains a message.
       *
       * @param request DeletePhoneMessageQrdlRequest
       * @return DeletePhoneMessageQrdlResponse
       */
      Models::DeletePhoneMessageQrdlResponse deletePhoneMessageQrdl(const Models::DeletePhoneMessageQrdlRequest &request);

      /**
       * @summary Deprecates a Flow.
       *
       * @param request DeprecateFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeprecateFlowResponse
       */
      Models::DeprecateFlowResponse deprecateFlowWithOptions(const Models::DeprecateFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deprecates a Flow.
       *
       * @param request DeprecateFlowRequest
       * @return DeprecateFlowResponse
       */
      Models::DeprecateFlowResponse deprecateFlow(const Models::DeprecateFlowRequest &request);

      /**
       * @summary Enables the statistics on the metrics that are related to WhatsApp.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request EnableWhatsappROIMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableWhatsappROIMetricResponse
       */
      Models::EnableWhatsappROIMetricResponse enableWhatsappROIMetricWithOptions(const Models::EnableWhatsappROIMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the statistics on the metrics that are related to WhatsApp.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request EnableWhatsappROIMetricRequest
       * @return EnableWhatsappROIMetricResponse
       */
      Models::EnableWhatsappROIMetricResponse enableWhatsappROIMetric(const Models::EnableWhatsappROIMetricRequest &request);

      /**
       * @summary Bind phone numbers to flow
       *
       * @param tmpReq FlowBindPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlowBindPhoneResponse
       */
      Models::FlowBindPhoneResponse flowBindPhoneWithOptions(const Models::FlowBindPhoneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Bind phone numbers to flow
       *
       * @param request FlowBindPhoneRequest
       * @return FlowBindPhoneResponse
       */
      Models::FlowBindPhoneResponse flowBindPhone(const Models::FlowBindPhoneRequest &request);

      /**
       * @summary Rebind phone number for flow
       *
       * @param tmpReq FlowRebindPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlowRebindPhoneResponse
       */
      Models::FlowRebindPhoneResponse flowRebindPhoneWithOptions(const Models::FlowRebindPhoneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebind phone number for flow
       *
       * @param request FlowRebindPhoneRequest
       * @return FlowRebindPhoneResponse
       */
      Models::FlowRebindPhoneResponse flowRebindPhone(const Models::FlowRebindPhoneRequest &request);

      /**
       * @summary Unbind phone number from flow
       *
       * @param tmpReq FlowUnbindPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlowUnbindPhoneResponse
       */
      Models::FlowUnbindPhoneResponse flowUnbindPhoneWithOptions(const Models::FlowUnbindPhoneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbind phone number from flow
       *
       * @param request FlowUnbindPhoneRequest
       * @return FlowUnbindPhoneResponse
       */
      Models::FlowUnbindPhoneResponse flowUnbindPhone(const Models::FlowUnbindPhoneRequest &request);

      /**
       * @summary 获取临时的URL
       *
       * @param request GeneratePresignedUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GeneratePresignedUrlResponse
       */
      Models::GeneratePresignedUrlResponse generatePresignedUrlWithOptions(const Models::GeneratePresignedUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取临时的URL
       *
       * @param request GeneratePresignedUrlRequest
       * @return GeneratePresignedUrlResponse
       */
      Models::GeneratePresignedUrlResponse generatePresignedUrl(const Models::GeneratePresignedUrlRequest &request);

      /**
       * @summary 通过类型查询出个人待审核的单子
       *
       * @param request GetAuditRequestByTypeUnAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuditRequestByTypeUnAuditResponse
       */
      Models::GetAuditRequestByTypeUnAuditResponse getAuditRequestByTypeUnAuditWithOptions(const Models::GetAuditRequestByTypeUnAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过类型查询出个人待审核的单子
       *
       * @param request GetAuditRequestByTypeUnAuditRequest
       * @return GetAuditRequestByTypeUnAuditResponse
       */
      Models::GetAuditRequestByTypeUnAuditResponse getAuditRequestByTypeUnAudit(const Models::GetAuditRequestByTypeUnAuditRequest &request);

      /**
       * @summary Get ChatFlow Runtime Data
       *
       * @param tmpReq GetChatFlowMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatFlowMetricResponse
       */
      Models::GetChatFlowMetricResponse getChatFlowMetricWithOptions(const Models::GetChatFlowMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get ChatFlow Runtime Data
       *
       * @param request GetChatFlowMetricRequest
       * @return GetChatFlowMetricResponse
       */
      Models::GetChatFlowMetricResponse getChatFlowMetric(const Models::GetChatFlowMetricRequest &request);

      /**
       * @summary Query chatFlow template
       *
       * @param request GetChatFlowTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatFlowTemplateResponse
       */
      Models::GetChatFlowTemplateResponse getChatFlowTemplateWithOptions(const Models::GetChatFlowTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query chatFlow template
       *
       * @param request GetChatFlowTemplateRequest
       * @return GetChatFlowTemplateResponse
       */
      Models::GetChatFlowTemplateResponse getChatFlowTemplate(const Models::GetChatFlowTemplateRequest &request);

      /**
       * @summary 查询ChatApp开通状态
       *
       * @param request GetChatappOpenStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappOpenStatusResponse
       */
      Models::GetChatappOpenStatusResponse getChatappOpenStatusWithOptions(const Models::GetChatappOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询ChatApp开通状态
       *
       * @param request GetChatappOpenStatusRequest
       * @return GetChatappOpenStatusResponse
       */
      Models::GetChatappOpenStatusResponse getChatappOpenStatus(const Models::GetChatappOpenStatusRequest &request);

      /**
       * @summary Queries the number of messages that are sent by using a phone number by a specific metric.
       *
       * @description You can call this operation up to 50 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetChatappPhoneNumberMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappPhoneNumberMetricResponse
       */
      Models::GetChatappPhoneNumberMetricResponse getChatappPhoneNumberMetricWithOptions(const Models::GetChatappPhoneNumberMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of messages that are sent by using a phone number by a specific metric.
       *
       * @description You can call this operation up to 50 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetChatappPhoneNumberMetricRequest
       * @return GetChatappPhoneNumberMetricResponse
       */
      Models::GetChatappPhoneNumberMetricResponse getChatappPhoneNumberMetric(const Models::GetChatappPhoneNumberMetricRequest &request);

      /**
       * @summary 获取Chatapp号码其它控制
       *
       * @param request GetChatappPhoneNumberSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappPhoneNumberSettingResponse
       */
      Models::GetChatappPhoneNumberSettingResponse getChatappPhoneNumberSettingWithOptions(const Models::GetChatappPhoneNumberSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Chatapp号码其它控制
       *
       * @param request GetChatappPhoneNumberSettingRequest
       * @return GetChatappPhoneNumberSettingResponse
       */
      Models::GetChatappPhoneNumberSettingResponse getChatappPhoneNumberSetting(const Models::GetChatappPhoneNumberSettingRequest &request);

      /**
       * @summary Queries the information of a message template.
       *
       * @description ### QPS limit
       * You can call this API operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetChatappTemplateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappTemplateDetailResponse
       */
      Models::GetChatappTemplateDetailResponse getChatappTemplateDetailWithOptions(const Models::GetChatappTemplateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a message template.
       *
       * @description ### QPS limit
       * You can call this API operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetChatappTemplateDetailRequest
       * @return GetChatappTemplateDetailResponse
       */
      Models::GetChatappTemplateDetailResponse getChatappTemplateDetail(const Models::GetChatappTemplateDetailRequest &request);

      /**
       * @summary Queries the metrics about a marketing template.
       *
       * @description You can call this operation up to 50 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetChatappTemplateMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappTemplateMetricResponse
       */
      Models::GetChatappTemplateMetricResponse getChatappTemplateMetricWithOptions(const Models::GetChatappTemplateMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metrics about a marketing template.
       *
       * @description You can call this operation up to 50 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetChatappTemplateMetricRequest
       * @return GetChatappTemplateMetricResponse
       */
      Models::GetChatappTemplateMetricResponse getChatappTemplateMetric(const Models::GetChatappTemplateMetricRequest &request);

      /**
       * @summary Obtains the authentication information that is used to upload a file.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetChatappUploadAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappUploadAuthorizationResponse
       */
      Models::GetChatappUploadAuthorizationResponse getChatappUploadAuthorizationWithOptions(const Models::GetChatappUploadAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the authentication information that is used to upload a file.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetChatappUploadAuthorizationRequest
       * @return GetChatappUploadAuthorizationResponse
       */
      Models::GetChatappUploadAuthorizationResponse getChatappUploadAuthorization(const Models::GetChatappUploadAuthorizationRequest &request);

      /**
       * @summary Obtains a verification code.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetChatappVerifyCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappVerifyCodeResponse
       */
      Models::GetChatappVerifyCodeResponse getChatappVerifyCodeWithOptions(const Models::GetChatappVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a verification code.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetChatappVerifyCodeRequest
       * @return GetChatappVerifyCodeResponse
       */
      Models::GetChatappVerifyCodeResponse getChatappVerifyCode(const Models::GetChatappVerifyCodeRequest &request);

      /**
       * @summary Queries the business settings of a phone number.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetCommerceSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCommerceSettingResponse
       */
      Models::GetCommerceSettingResponse getCommerceSettingWithOptions(const Models::GetCommerceSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the business settings of a phone number.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetCommerceSettingRequest
       * @return GetCommerceSettingResponse
       */
      Models::GetCommerceSettingResponse getCommerceSetting(const Models::GetCommerceSettingRequest &request);

      /**
       * @summary Configures welcoming messages, opening remarks, and commands.
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * This operation will directly obtain data from Facebook, which sets an upper limit on the total number of calls for operations. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetConversationalAutomationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConversationalAutomationResponse
       */
      Models::GetConversationalAutomationResponse getConversationalAutomationWithOptions(const Models::GetConversationalAutomationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures welcoming messages, opening remarks, and commands.
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * This operation will directly obtain data from Facebook, which sets an upper limit on the total number of calls for operations. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetConversationalAutomationRequest
       * @return GetConversationalAutomationResponse
       */
      Models::GetConversationalAutomationResponse getConversationalAutomation(const Models::GetConversationalAutomationRequest &request);

      /**
       * @summary 查询客户来源站点
       *
       * @param request GetCustomerSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerSiteResponse
       */
      Models::GetCustomerSiteResponse getCustomerSiteWithOptions(const Models::GetCustomerSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询客户来源站点
       *
       * @param request GetCustomerSiteRequest
       * @return GetCustomerSiteResponse
       */
      Models::GetCustomerSiteResponse getCustomerSite(const Models::GetCustomerSiteRequest &request);

      /**
       * @summary 下载excel数据
       *
       * @param tmpReq GetDownloadExcelListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDownloadExcelListResponse
       */
      Models::GetDownloadExcelListResponse getDownloadExcelListWithOptions(const Models::GetDownloadExcelListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下载excel数据
       *
       * @param request GetDownloadExcelListRequest
       * @return GetDownloadExcelListResponse
       */
      Models::GetDownloadExcelListResponse getDownloadExcelList(const Models::GetDownloadExcelListRequest &request);

      /**
       * @summary 获取ins的page列表
       *
       * @param request GetFbInstagramPagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFbInstagramPagesResponse
       */
      Models::GetFbInstagramPagesResponse getFbInstagramPagesWithOptions(const Models::GetFbInstagramPagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取ins的page列表
       *
       * @param request GetFbInstagramPagesRequest
       * @return GetFbInstagramPagesResponse
       */
      Models::GetFbInstagramPagesResponse getFbInstagramPages(const Models::GetFbInstagramPagesRequest &request);

      /**
       * @summary 获取facebook的pageId列表
       *
       * @param request GetFbMessengerPagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFbMessengerPagesResponse
       */
      Models::GetFbMessengerPagesResponse getFbMessengerPagesWithOptions(const Models::GetFbMessengerPagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取facebook的pageId列表
       *
       * @param request GetFbMessengerPagesRequest
       * @return GetFbMessengerPagesResponse
       */
      Models::GetFbMessengerPagesResponse getFbMessengerPages(const Models::GetFbMessengerPagesRequest &request);

      /**
       * @summary Queries the information about a Flow.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlowResponse
       */
      Models::GetFlowResponse getFlowWithOptions(const Models::GetFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a Flow.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetFlowRequest
       * @return GetFlowResponse
       */
      Models::GetFlowResponse getFlow(const Models::GetFlowRequest &request);

      /**
       * @summary Queries the JSON content of a Flow.
       *
       * @param request GetFlowJSONAssestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlowJSONAssestResponse
       */
      Models::GetFlowJSONAssestResponse getFlowJSONAssestWithOptions(const Models::GetFlowJSONAssestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the JSON content of a Flow.
       *
       * @param request GetFlowJSONAssestRequest
       * @return GetFlowJSONAssestResponse
       */
      Models::GetFlowJSONAssestResponse getFlowJSONAssest(const Models::GetFlowJSONAssestRequest &request);

      /**
       * @summary Obtains the preview URL of a Flow.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetFlowPreviewUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlowPreviewUrlResponse
       */
      Models::GetFlowPreviewUrlResponse getFlowPreviewUrlWithOptions(const Models::GetFlowPreviewUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the preview URL of a Flow.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetFlowPreviewUrlRequest
       * @return GetFlowPreviewUrlResponse
       */
      Models::GetFlowPreviewUrlResponse getFlowPreviewUrl(const Models::GetFlowPreviewUrlRequest &request);

      /**
       * @summary 查询群组是否重名
       *
       * @param tmpReq GetGroupExistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupExistResponse
       */
      Models::GetGroupExistResponse getGroupExistWithOptions(const Models::GetGroupExistRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询群组是否重名
       *
       * @param request GetGroupExistRequest
       * @return GetGroupExistResponse
       */
      Models::GetGroupExistResponse getGroupExist(const Models::GetGroupExistRequest &request);

      /**
       * @summary 查询预算指标
       *
       * @param request GetMessageCampaignInsightsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageCampaignInsightsResponse
       */
      Models::GetMessageCampaignInsightsResponse getMessageCampaignInsightsWithOptions(const Models::GetMessageCampaignInsightsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询预算指标
       *
       * @param request GetMessageCampaignInsightsRequest
       * @return GetMessageCampaignInsightsResponse
       */
      Models::GetMessageCampaignInsightsResponse getMessageCampaignInsights(const Models::GetMessageCampaignInsightsRequest &request);

      /**
       * @summary Obtain the verification code for the migration number.
       *
       * @description The single user QPS limit for this interface is 10 times per second. Exceeding the limit may result in restricted API calls, which may affect your business. Please make reasonable calls.
       *
       * @param request GetMigrationVerifyCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMigrationVerifyCodeResponse
       */
      Models::GetMigrationVerifyCodeResponse getMigrationVerifyCodeWithOptions(const Models::GetMigrationVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the verification code for the migration number.
       *
       * @description The single user QPS limit for this interface is 10 times per second. Exceeding the limit may result in restricted API calls, which may affect your business. Please make reasonable calls.
       *
       * @param request GetMigrationVerifyCodeRequest
       * @return GetMigrationVerifyCodeResponse
       */
      Models::GetMigrationVerifyCodeResponse getMigrationVerifyCode(const Models::GetMigrationVerifyCodeRequest &request);

      /**
       * @summary Obtains permissions based on the authorization code obtained from embedded signup.
       *
       * @param tmpReq GetPermissionByCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPermissionByCodeResponse
       */
      Models::GetPermissionByCodeResponse getPermissionByCodeWithOptions(const Models::GetPermissionByCodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains permissions based on the authorization code obtained from embedded signup.
       *
       * @param request GetPermissionByCodeRequest
       * @return GetPermissionByCodeResponse
       */
      Models::GetPermissionByCodeResponse getPermissionByCode(const Models::GetPermissionByCodeRequest &request);

      /**
       * @summary Queries the encryption public key of a phone number.
       *
       * @param request GetPhoneEncryptionPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhoneEncryptionPublicKeyResponse
       */
      Models::GetPhoneEncryptionPublicKeyResponse getPhoneEncryptionPublicKeyWithOptions(const Models::GetPhoneEncryptionPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the encryption public key of a phone number.
       *
       * @param request GetPhoneEncryptionPublicKeyRequest
       * @return GetPhoneEncryptionPublicKeyResponse
       */
      Models::GetPhoneEncryptionPublicKeyResponse getPhoneEncryptionPublicKey(const Models::GetPhoneEncryptionPublicKeyRequest &request);

      /**
       * @summary Obtains the verification status of a phone number.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetPhoneNumberVerificationStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhoneNumberVerificationStatusResponse
       */
      Models::GetPhoneNumberVerificationStatusResponse getPhoneNumberVerificationStatusWithOptions(const Models::GetPhoneNumberVerificationStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the verification status of a phone number.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetPhoneNumberVerificationStatusRequest
       * @return GetPhoneNumberVerificationStatusResponse
       */
      Models::GetPhoneNumberVerificationStatusResponse getPhoneNumberVerificationStatus(const Models::GetPhoneNumberVerificationStatusRequest &request);

      /**
       * @summary 下载保证函模板的地址
       *
       * @param request GetPledgeTemplateAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPledgeTemplateAddressResponse
       */
      Models::GetPledgeTemplateAddressResponse getPledgeTemplateAddressWithOptions(const Models::GetPledgeTemplateAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下载保证函模板的地址
       *
       * @param request GetPledgeTemplateAddressRequest
       * @return GetPledgeTemplateAddressResponse
       */
      Models::GetPledgeTemplateAddressResponse getPledgeTemplateAddress(const Models::GetPledgeTemplateAddressRequest &request);

      /**
       * @summary Obtains the ID of a pre-registered phone number used for embedded signup without the need to re-obtain a verification code.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetPreValidatePhoneIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPreValidatePhoneIdResponse
       */
      Models::GetPreValidatePhoneIdResponse getPreValidatePhoneIdWithOptions(const Models::GetPreValidatePhoneIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the ID of a pre-registered phone number used for embedded signup without the need to re-obtain a verification code.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetPreValidatePhoneIdRequest
       * @return GetPreValidatePhoneIdResponse
       */
      Models::GetPreValidatePhoneIdResponse getPreValidatePhoneId(const Models::GetPreValidatePhoneIdRequest &request);

      /**
       * @summary 通过requestNo查询申请单
       *
       * @param request GetViberByRequestNoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetViberByRequestNoResponse
       */
      Models::GetViberByRequestNoResponse getViberByRequestNoWithOptions(const Models::GetViberByRequestNoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过requestNo查询申请单
       *
       * @param request GetViberByRequestNoRequest
       * @return GetViberByRequestNoResponse
       */
      Models::GetViberByRequestNoResponse getViberByRequestNo(const Models::GetViberByRequestNoRequest &request);

      /**
       * @summary 可以申请暂停的次数
       *
       * @param request GetViberPauseTimesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetViberPauseTimesResponse
       */
      Models::GetViberPauseTimesResponse getViberPauseTimesWithOptions(const Models::GetViberPauseTimesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 可以申请暂停的次数
       *
       * @param request GetViberPauseTimesRequest
       * @return GetViberPauseTimesResponse
       */
      Models::GetViberPauseTimesResponse getViberPauseTimes(const Models::GetViberPauseTimesRequest &request);

      /**
       * @summary Queries the product catalogs that are associated with a WhatsApp Business account (WABA).
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetWhatsappConnectionCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWhatsappConnectionCatalogResponse
       */
      Models::GetWhatsappConnectionCatalogResponse getWhatsappConnectionCatalogWithOptions(const Models::GetWhatsappConnectionCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the product catalogs that are associated with a WhatsApp Business account (WABA).
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetWhatsappConnectionCatalogRequest
       * @return GetWhatsappConnectionCatalogResponse
       */
      Models::GetWhatsappConnectionCatalogResponse getWhatsappConnectionCatalog(const Models::GetWhatsappConnectionCatalogRequest &request);

      /**
       * @summary 获取嵌入式授权page
       *
       * @param request GetWhatsappConversionApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWhatsappConversionApiResponse
       */
      Models::GetWhatsappConversionApiResponse getWhatsappConversionApiWithOptions(const Models::GetWhatsappConversionApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取嵌入式授权page
       *
       * @param request GetWhatsappConversionApiRequest
       * @return GetWhatsappConversionApiResponse
       */
      Models::GetWhatsappConversionApiResponse getWhatsappConversionApi(const Models::GetWhatsappConversionApiRequest &request);

      /**
       * @summary Queries the messaging health status of different types of nodes.
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * This operation will directly obtain data from Facebook, which sets an upper limit on the total number of calls for operations. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetWhatsappHealthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWhatsappHealthStatusResponse
       */
      Models::GetWhatsappHealthStatusResponse getWhatsappHealthStatusWithOptions(const Models::GetWhatsappHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the messaging health status of different types of nodes.
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * This operation will directly obtain data from Facebook, which sets an upper limit on the total number of calls for operations. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetWhatsappHealthStatusRequest
       * @return GetWhatsappHealthStatusResponse
       */
      Models::GetWhatsappHealthStatusResponse getWhatsappHealthStatus(const Models::GetWhatsappHealthStatusRequest &request);

      /**
       * @summary Obtains the application ID under the ISV account.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request IsvGetAppIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IsvGetAppIdResponse
       */
      Models::IsvGetAppIdResponse isvGetAppIdWithOptions(const Models::IsvGetAppIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the application ID under the ISV account.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request IsvGetAppIdRequest
       * @return IsvGetAppIdResponse
       */
      Models::IsvGetAppIdResponse isvGetAppId(const Models::IsvGetAppIdRequest &request);

      /**
       * @summary 查询群组列表
       *
       * @param tmpReq ListAllGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllGroupsResponse
       */
      Models::ListAllGroupsResponse listAllGroupsWithOptions(const Models::ListAllGroupsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询群组列表
       *
       * @param request ListAllGroupsRequest
       * @return ListAllGroupsResponse
       */
      Models::ListAllGroupsResponse listAllGroups(const Models::ListAllGroupsRequest &request);

      /**
       * @summary 查询绑定的dm账号
       *
       * @param request ListBindDmAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindDmAccountResponse
       */
      Models::ListBindDmAccountResponse listBindDmAccountWithOptions(const Models::ListBindDmAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询绑定的dm账号
       *
       * @param request ListBindDmAccountRequest
       * @return ListBindDmAccountResponse
       */
      Models::ListBindDmAccountResponse listBindDmAccount(const Models::ListBindDmAccountRequest &request);

      /**
       * @summary Query Bound List Based on flowCode
       *
       * @description - You can call this interface to query the list of phone numbers or merchant account IDs bound to a process, or you can view the list in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder) > **Settings** interface.
       * - Before calling this interface, make sure that the process you created has already been bound to a phone number or merchant account ID.
       * - If the process you created is not bound to a phone number or merchant account ID, you can manually bind a phone number or merchant account ID in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder) > **Settings** interface, or bind it through the [FlowBindPhone](https://help.aliyun.com/document_detail/2937190.html) interface.
       *
       * @param request ListBindingRelationsForFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindingRelationsForFlowVersionResponse
       */
      Models::ListBindingRelationsForFlowVersionResponse listBindingRelationsForFlowVersionWithOptions(const Models::ListBindingRelationsForFlowVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Bound List Based on flowCode
       *
       * @description - You can call this interface to query the list of phone numbers or merchant account IDs bound to a process, or you can view the list in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder) > **Settings** interface.
       * - Before calling this interface, make sure that the process you created has already been bound to a phone number or merchant account ID.
       * - If the process you created is not bound to a phone number or merchant account ID, you can manually bind a phone number or merchant account ID in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder) > **Settings** interface, or bind it through the [FlowBindPhone](https://help.aliyun.com/document_detail/2937190.html) interface.
       *
       * @param request ListBindingRelationsForFlowVersionRequest
       * @return ListBindingRelationsForFlowVersionResponse
       */
      Models::ListBindingRelationsForFlowVersionResponse listBindingRelationsForFlowVersion(const Models::ListBindingRelationsForFlowVersionRequest &request);

      /**
       * @summary List Flows
       *
       * @param tmpReq ListChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatFlowResponse
       */
      Models::ListChatFlowResponse listChatFlowWithOptions(const Models::ListChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Flows
       *
       * @param request ListChatFlowRequest
       * @return ListChatFlowResponse
       */
      Models::ListChatFlowResponse listChatFlow(const Models::ListChatFlowRequest &request);

      /**
       * @summary ChatFlow Template List
       *
       * @param request ListChatFlowTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatFlowTemplateResponse
       */
      Models::ListChatFlowTemplateResponse listChatFlowTemplateWithOptions(const Models::ListChatFlowTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ChatFlow Template List
       *
       * @param request ListChatFlowTemplateRequest
       * @return ListChatFlowTemplateResponse
       */
      Models::ListChatFlowTemplateResponse listChatFlowTemplate(const Models::ListChatFlowTemplateRequest &request);

      /**
       * @summary ListChatGroup
       *
       * @param tmpReq ListChatGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatGroupResponse
       */
      Models::ListChatGroupResponse listChatGroupWithOptions(const Models::ListChatGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListChatGroup
       *
       * @param request ListChatGroupRequest
       * @return ListChatGroupResponse
       */
      Models::ListChatGroupResponse listChatGroup(const Models::ListChatGroupRequest &request);

      /**
       * @summary ListChatGroupParticipants
       *
       * @param tmpReq ListChatGroupParticipantsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatGroupParticipantsResponse
       */
      Models::ListChatGroupParticipantsResponse listChatGroupParticipantsWithOptions(const Models::ListChatGroupParticipantsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListChatGroupParticipants
       *
       * @param request ListChatGroupParticipantsRequest
       * @return ListChatGroupParticipantsResponse
       */
      Models::ListChatGroupParticipantsResponse listChatGroupParticipants(const Models::ListChatGroupParticipantsRequest &request);

      /**
       * @summary 查询消息列表
       *
       * @param tmpReq ListChatappMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatappMessageResponse
       */
      Models::ListChatappMessageResponse listChatappMessageWithOptions(const Models::ListChatappMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询消息列表
       *
       * @param request ListChatappMessageRequest
       * @return ListChatappMessageResponse
       */
      Models::ListChatappMessageResponse listChatappMessage(const Models::ListChatappMessageRequest &request);

      /**
       * @summary Queries message templates.
       *
       * @description ### QPS limit
       * You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param tmpReq ListChatappTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatappTemplateResponse
       */
      Models::ListChatappTemplateResponse listChatappTemplateWithOptions(const Models::ListChatappTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries message templates.
       *
       * @description ### QPS limit
       * You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListChatappTemplateRequest
       * @return ListChatappTemplateResponse
       */
      Models::ListChatappTemplateResponse listChatappTemplate(const Models::ListChatappTemplateRequest &request);

      /**
       * @summary 查询自定义受众组列表
       *
       * @param tmpReq ListCustomAudienceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAudienceResponse
       */
      Models::ListCustomAudienceResponse listCustomAudienceWithOptions(const Models::ListCustomAudienceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询自定义受众组列表
       *
       * @param request ListCustomAudienceRequest
       * @return ListCustomAudienceResponse
       */
      Models::ListCustomAudienceResponse listCustomAudience(const Models::ListCustomAudienceRequest &request);

      /**
       * @summary 查询账号下的Dm账号
       *
       * @param request ListDmAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDmAccountResponse
       */
      Models::ListDmAccountResponse listDmAccountWithOptions(const Models::ListDmAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询账号下的Dm账号
       *
       * @param request ListDmAccountRequest
       * @return ListDmAccountResponse
       */
      Models::ListDmAccountResponse listDmAccount(const Models::ListDmAccountRequest &request);

      /**
       * @summary 查询DM的tag
       *
       * @param request ListDmTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDmTagResponse
       */
      Models::ListDmTagResponse listDmTagWithOptions(const Models::ListDmTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询DM的tag
       *
       * @param request ListDmTagRequest
       * @return ListDmTagResponse
       */
      Models::ListDmTagResponse listDmTag(const Models::ListDmTagRequest &request);

      /**
       * @summary 查询facebook帖子列表
       *
       * @param request ListFacebookPostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFacebookPostsResponse
       */
      Models::ListFacebookPostsResponse listFacebookPostsWithOptions(const Models::ListFacebookPostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询facebook帖子列表
       *
       * @param request ListFacebookPostsRequest
       * @return ListFacebookPostsResponse
       */
      Models::ListFacebookPostsResponse listFacebookPosts(const Models::ListFacebookPostsRequest &request);

      /**
       * @summary Queries a list of Flows.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param tmpReq ListFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowResponse
       */
      Models::ListFlowResponse listFlowWithOptions(const Models::ListFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Flows.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListFlowRequest
       * @return ListFlowResponse
       */
      Models::ListFlowResponse listFlow(const Models::ListFlowRequest &request);

      /**
       * @summary ListFlowNodeGroup
       *
       * @param request ListFlowNodeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowNodeGroupResponse
       */
      Models::ListFlowNodeGroupResponse listFlowNodeGroupWithOptions(const Models::ListFlowNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListFlowNodeGroup
       *
       * @param request ListFlowNodeGroupRequest
       * @return ListFlowNodeGroupResponse
       */
      Models::ListFlowNodeGroupResponse listFlowNodeGroup(const Models::ListFlowNodeGroupRequest &request);

      /**
       * @summary ListFlowNodePrototypeV2
       *
       * @param request ListFlowNodePrototypeV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowNodePrototypeV2Response
       */
      Models::ListFlowNodePrototypeV2Response listFlowNodePrototypeV2WithOptions(const Models::ListFlowNodePrototypeV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListFlowNodePrototypeV2
       *
       * @param request ListFlowNodePrototypeV2Request
       * @return ListFlowNodePrototypeV2Response
       */
      Models::ListFlowNodePrototypeV2Response listFlowNodePrototypeV2(const Models::ListFlowNodePrototypeV2Request &request);

      /**
       * @summary List Flow Versions
       *
       * @param tmpReq ListFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowVersionResponse
       */
      Models::ListFlowVersionResponse listFlowVersionWithOptions(const Models::ListFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Flow Versions
       *
       * @param request ListFlowVersionRequest
       * @return ListFlowVersionResponse
       */
      Models::ListFlowVersionResponse listFlowVersion(const Models::ListFlowVersionRequest &request);

      /**
       * @summary 获取ins的page
       *
       * @param request ListInstagramPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstagramPageResponse
       */
      Models::ListInstagramPageResponse listInstagramPageWithOptions(const Models::ListInstagramPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取ins的page
       *
       * @param request ListInstagramPageRequest
       * @return ListInstagramPageResponse
       */
      Models::ListInstagramPageResponse listInstagramPage(const Models::ListInstagramPageRequest &request);

      /**
       * @summary 查询instagram帖子列表
       *
       * @param request ListInstagramPostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstagramPostsResponse
       */
      Models::ListInstagramPostsResponse listInstagramPostsWithOptions(const Models::ListInstagramPostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询instagram帖子列表
       *
       * @param request ListInstagramPostsRequest
       * @return ListInstagramPostsResponse
       */
      Models::ListInstagramPostsResponse listInstagramPosts(const Models::ListInstagramPostsRequest &request);

      /**
       * @summary 查询实例列表
       *
       * @param request ListInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstanceWithOptions(const Models::ListInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例列表
       *
       * @param request ListInstanceRequest
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstance(const Models::ListInstanceRequest &request);

      /**
       * @summary 查询活动列表
       *
       * @param tmpReq ListMarketingFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMarketingFlowResponse
       */
      Models::ListMarketingFlowResponse listMarketingFlowWithOptions(const Models::ListMarketingFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询活动列表
       *
       * @param request ListMarketingFlowRequest
       * @return ListMarketingFlowResponse
       */
      Models::ListMarketingFlowResponse listMarketingFlow(const Models::ListMarketingFlowRequest &request);

      /**
       * @summary 查询预算列表
       *
       * @param tmpReq ListMessageCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageCampaignResponse
       */
      Models::ListMessageCampaignResponse listMessageCampaignWithOptions(const Models::ListMessageCampaignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询预算列表
       *
       * @param request ListMessageCampaignRequest
       * @return ListMessageCampaignResponse
       */
      Models::ListMessageCampaignResponse listMessageCampaign(const Models::ListMessageCampaignRequest &request);

      /**
       * @summary 查询订阅token
       *
       * @param request ListMessengerSubscriptionTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessengerSubscriptionTokenResponse
       */
      Models::ListMessengerSubscriptionTokenResponse listMessengerSubscriptionTokenWithOptions(const Models::ListMessengerSubscriptionTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询订阅token
       *
       * @param request ListMessengerSubscriptionTokenRequest
       * @return ListMessengerSubscriptionTokenResponse
       */
      Models::ListMessengerSubscriptionTokenResponse listMessengerSubscriptionToken(const Models::ListMessengerSubscriptionTokenRequest &request);

      /**
       * @summary 查询Page绑定的广告账户列表
       *
       * @param request ListPageAdAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPageAdAccountResponse
       */
      Models::ListPageAdAccountResponse listPageAdAccountWithOptions(const Models::ListPageAdAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Page绑定的广告账户列表
       *
       * @param request ListPageAdAccountRequest
       * @return ListPageAdAccountResponse
       */
      Models::ListPageAdAccountResponse listPageAdAccount(const Models::ListPageAdAccountRequest &request);

      /**
       * @summary Queries the information about a list of quick-response (QR) codes that contain messages.
       *
       * @param request ListPhoneMessageQrdlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPhoneMessageQrdlResponse
       */
      Models::ListPhoneMessageQrdlResponse listPhoneMessageQrdlWithOptions(const Models::ListPhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a list of quick-response (QR) codes that contain messages.
       *
       * @param request ListPhoneMessageQrdlRequest
       * @return ListPhoneMessageQrdlResponse
       */
      Models::ListPhoneMessageQrdlResponse listPhoneMessageQrdl(const Models::ListPhoneMessageQrdlRequest &request);

      /**
       * @summary Queries products in a product catalog.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductResponse
       */
      Models::ListProductResponse listProductWithOptions(const Models::ListProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries products in a product catalog.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListProductRequest
       * @return ListProductResponse
       */
      Models::ListProductResponse listProduct(const Models::ListProductRequest &request);

      /**
       * @summary Queries the product catalogs on the Business Manager platform of Meta.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListProductCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductCatalogResponse
       */
      Models::ListProductCatalogResponse listProductCatalogWithOptions(const Models::ListProductCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the product catalogs on the Business Manager platform of Meta.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListProductCatalogRequest
       * @return ListProductCatalogResponse
       */
      Models::ListProductCatalogResponse listProductCatalog(const Models::ListProductCatalogRequest &request);

      /**
       * @summary 展示viber申请单服务号卡片
       *
       * @param request ListViberServiceMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListViberServiceMessageResponse
       */
      Models::ListViberServiceMessageResponse listViberServiceMessageWithOptions(const Models::ListViberServiceMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 展示viber申请单服务号卡片
       *
       * @param request ListViberServiceMessageRequest
       * @return ListViberServiceMessageResponse
       */
      Models::ListViberServiceMessageResponse listViberServiceMessage(const Models::ListViberServiceMessageRequest &request);

      /**
       * @summary The code of the message template.
       *
       * @description The name of the message template.
       *
       * @param tmpReq ModifyChatappTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyChatappTemplateResponse
       */
      Models::ModifyChatappTemplateResponse modifyChatappTemplateWithOptions(const Models::ModifyChatappTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The code of the message template.
       *
       * @description The name of the message template.
       *
       * @param request ModifyChatappTemplateRequest
       * @return ModifyChatappTemplateResponse
       */
      Models::ModifyChatappTemplateResponse modifyChatappTemplate(const Models::ModifyChatappTemplateRequest &request);

      /**
       * @summary 修改模板上的一些属性
       *
       * @param request ModifyChatappTemplatePropertiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyChatappTemplatePropertiesResponse
       */
      Models::ModifyChatappTemplatePropertiesResponse modifyChatappTemplatePropertiesWithOptions(const Models::ModifyChatappTemplatePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改模板上的一些属性
       *
       * @param request ModifyChatappTemplatePropertiesRequest
       * @return ModifyChatappTemplatePropertiesResponse
       */
      Models::ModifyChatappTemplatePropertiesResponse modifyChatappTemplateProperties(const Models::ModifyChatappTemplatePropertiesRequest &request);

      /**
       * @summary Modifies the basic information about a Flow.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param tmpReq ModifyFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFlowResponse
       */
      Models::ModifyFlowResponse modifyFlowWithOptions(const Models::ModifyFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic information about a Flow.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyFlowRequest
       * @return ModifyFlowResponse
       */
      Models::ModifyFlowResponse modifyFlow(const Models::ModifyFlowRequest &request);

      /**
       * @summary The ID of the request.
       *
       * @description ModifyPhoneBusinessProfile
       *
       * @param tmpReq ModifyPhoneBusinessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPhoneBusinessProfileResponse
       */
      Models::ModifyPhoneBusinessProfileResponse modifyPhoneBusinessProfileWithOptions(const Models::ModifyPhoneBusinessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the request.
       *
       * @description ModifyPhoneBusinessProfile
       *
       * @param request ModifyPhoneBusinessProfileRequest
       * @return ModifyPhoneBusinessProfileResponse
       */
      Models::ModifyPhoneBusinessProfileResponse modifyPhoneBusinessProfile(const Models::ModifyPhoneBusinessProfileRequest &request);

      /**
       * @summary 联系人变更群组
       *
       * @param tmpReq MoveContactToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveContactToGroupResponse
       */
      Models::MoveContactToGroupResponse moveContactToGroupWithOptions(const Models::MoveContactToGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 联系人变更群组
       *
       * @param request MoveContactToGroupRequest
       * @return MoveContactToGroupResponse
       */
      Models::MoveContactToGroupResponse moveContactToGroup(const Models::MoveContactToGroupRequest &request);

      /**
       * @summary Offline Flow Version
       *
       * @param tmpReq OfflineFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineFlowVersionResponse
       */
      Models::OfflineFlowVersionResponse offlineFlowVersionWithOptions(const Models::OfflineFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Offline Flow Version
       *
       * @param request OfflineFlowVersionRequest
       * @return OfflineFlowVersionResponse
       */
      Models::OfflineFlowVersionResponse offlineFlowVersion(const Models::OfflineFlowVersionRequest &request);

      /**
       * @summary Online Flow Version
       *
       * @param tmpReq OnlineFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineFlowVersionResponse
       */
      Models::OnlineFlowVersionResponse onlineFlowVersionWithOptions(const Models::OnlineFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Online Flow Version
       *
       * @param request OnlineFlowVersionRequest
       * @return OnlineFlowVersionResponse
       */
      Models::OnlineFlowVersionResponse onlineFlowVersion(const Models::OnlineFlowVersionRequest &request);

      /**
       * @summary 开通Chatapp服务
       *
       * @param request OpenChatappServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenChatappServiceResponse
       */
      Models::OpenChatappServiceResponse openChatappServiceWithOptions(const Models::OpenChatappServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通Chatapp服务
       *
       * @param request OpenChatappServiceRequest
       * @return OpenChatappServiceResponse
       */
      Models::OpenChatappServiceResponse openChatappService(const Models::OpenChatappServiceRequest &request);

      /**
       * @summary 暂停服务
       *
       * @param request PauseMarketingFLowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseMarketingFLowResponse
       */
      Models::PauseMarketingFLowResponse pauseMarketingFLowWithOptions(const Models::PauseMarketingFLowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停服务
       *
       * @param request PauseMarketingFLowRequest
       * @return PauseMarketingFLowResponse
       */
      Models::PauseMarketingFLowResponse pauseMarketingFLow(const Models::PauseMarketingFLowRequest &request);

      /**
       * @summary Publishes a Flow.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PublishFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishFlowResponse
       */
      Models::PublishFlowResponse publishFlowWithOptions(const Models::PublishFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a Flow.
       *
       * @description You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PublishFlowRequest
       * @return PublishFlowResponse
       */
      Models::PublishFlowResponse publishFlow(const Models::PublishFlowRequest &request);

      /**
       * @summary Query the WhatsApp Business account you associate with ChatApp.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryChatappBindWabaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryChatappBindWabaResponse
       */
      Models::QueryChatappBindWabaResponse queryChatappBindWabaWithOptions(const Models::QueryChatappBindWabaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the WhatsApp Business account you associate with ChatApp.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryChatappBindWabaRequest
       * @return QueryChatappBindWabaResponse
       */
      Models::QueryChatappBindWabaResponse queryChatappBindWaba(const Models::QueryChatappBindWabaRequest &request);

      /**
       * @summary Queries phone numbers that receive messages and statuses of these numbers under a specified user.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryChatappPhoneNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryChatappPhoneNumbersResponse
       */
      Models::QueryChatappPhoneNumbersResponse queryChatappPhoneNumbersWithOptions(const Models::QueryChatappPhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries phone numbers that receive messages and statuses of these numbers under a specified user.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryChatappPhoneNumbersRequest
       * @return QueryChatappPhoneNumbersResponse
       */
      Models::QueryChatappPhoneNumbersResponse queryChatappPhoneNumbers(const Models::QueryChatappPhoneNumbersRequest &request);

      /**
       * @summary 查询实例
       *
       * @param request QueryInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstanceResponse
       */
      Models::QueryInstanceResponse queryInstanceWithOptions(const Models::QueryInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例
       *
       * @param request QueryInstanceRequest
       * @return QueryInstanceResponse
       */
      Models::QueryInstanceResponse queryInstance(const Models::QueryInstanceRequest &request);

      /**
       * @summary 查询营销消息是否生效
       *
       * @param request QueryMMLActiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMMLActiveResponse
       */
      Models::QueryMMLActiveResponse queryMMLActiveWithOptions(const Models::QueryMMLActiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询营销消息是否生效
       *
       * @param request QueryMMLActiveRequest
       * @return QueryMMLActiveResponse
       */
      Models::QueryMMLActiveResponse queryMMLActive(const Models::QueryMMLActiveRequest &request);

      /**
       * @summary Queries the business information of the account to which a specified phone number is bound.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryPhoneBusinessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPhoneBusinessProfileResponse
       */
      Models::QueryPhoneBusinessProfileResponse queryPhoneBusinessProfileWithOptions(const Models::QueryPhoneBusinessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the business information of the account to which a specified phone number is bound.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryPhoneBusinessProfileRequest
       * @return QueryPhoneBusinessProfileResponse
       */
      Models::QueryPhoneBusinessProfileResponse queryPhoneBusinessProfile(const Models::QueryPhoneBusinessProfileRequest &request);

      /**
       * @summary Queries the business information about the WhatsApp Business account (WABA).
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryWabaBusinessInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryWabaBusinessInfoResponse
       */
      Models::QueryWabaBusinessInfoResponse queryWabaBusinessInfoWithOptions(const Models::QueryWabaBusinessInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the business information about the WhatsApp Business account (WABA).
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryWabaBusinessInfoRequest
       * @return QueryWabaBusinessInfoResponse
       */
      Models::QueryWabaBusinessInfoResponse queryWabaBusinessInfo(const Models::QueryWabaBusinessInfoRequest &request);

      /**
       * @summary Retrieve Flow
       *
       * @param tmpReq ReadChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadChatFlowResponse
       */
      Models::ReadChatFlowResponse readChatFlowWithOptions(const Models::ReadChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve Flow
       *
       * @param request ReadChatFlowRequest
       * @return ReadChatFlowResponse
       */
      Models::ReadChatFlowResponse readChatFlow(const Models::ReadChatFlowRequest &request);

      /**
       * @summary View chatFlow log settings
       *
       * @param request ReadChatFlowLogSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadChatFlowLogSettingResponse
       */
      Models::ReadChatFlowLogSettingResponse readChatFlowLogSettingWithOptions(const Models::ReadChatFlowLogSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View chatFlow log settings
       *
       * @param request ReadChatFlowLogSettingRequest
       * @return ReadChatFlowLogSettingResponse
       */
      Models::ReadChatFlowLogSettingResponse readChatFlowLogSetting(const Models::ReadChatFlowLogSettingRequest &request);

      /**
       * @summary Get Flow Version
       *
       * @param tmpReq ReadFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadFlowVersionResponse
       */
      Models::ReadFlowVersionResponse readFlowVersionWithOptions(const Models::ReadFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Flow Version
       *
       * @param request ReadFlowVersionRequest
       * @return ReadFlowVersionResponse
       */
      Models::ReadFlowVersionResponse readFlowVersion(const Models::ReadFlowVersionRequest &request);

      /**
       * @summary 当前群组移除单个联系人
       *
       * @param request RemoveContactByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveContactByIdResponse
       */
      Models::RemoveContactByIdResponse removeContactByIdWithOptions(const Models::RemoveContactByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 当前群组移除单个联系人
       *
       * @param request RemoveContactByIdRequest
       * @return RemoveContactByIdResponse
       */
      Models::RemoveContactByIdResponse removeContactById(const Models::RemoveContactByIdRequest &request);

      /**
       * @summary 请求Whatsapp Conversion api
       *
       * @param tmpReq RequestWhatsappConversionApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RequestWhatsappConversionApiResponse
       */
      Models::RequestWhatsappConversionApiResponse requestWhatsappConversionApiWithOptions(const Models::RequestWhatsappConversionApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 请求Whatsapp Conversion api
       *
       * @param request RequestWhatsappConversionApiRequest
       * @return RequestWhatsappConversionApiResponse
       */
      Models::RequestWhatsappConversionApiResponse requestWhatsappConversionApi(const Models::RequestWhatsappConversionApiRequest &request);

      /**
       * @summary Sends a message to multiple phone numbers by using ChatAPP at a time.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * You can send messages to up to 1,000 phone numbers in a single request.
       *
       * @param tmpReq SendChatappMassMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendChatappMassMessageResponse
       */
      Models::SendChatappMassMessageResponse sendChatappMassMessageWithOptions(const Models::SendChatappMassMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message to multiple phone numbers by using ChatAPP at a time.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * You can send messages to up to 1,000 phone numbers in a single request.
       *
       * @param request SendChatappMassMessageRequest
       * @return SendChatappMassMessageResponse
       */
      Models::SendChatappMassMessageResponse sendChatappMassMessage(const Models::SendChatappMassMessageRequest &request);

      /**
       * @summary Sends messages by using ChatAPP.
       *
       * @description You can call this operation up to 200 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param tmpReq SendChatappMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendChatappMessageResponse
       */
      Models::SendChatappMessageResponse sendChatappMessageWithOptions(const Models::SendChatappMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends messages by using ChatAPP.
       *
       * @description You can call this operation up to 200 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request SendChatappMessageRequest
       * @return SendChatappMessageResponse
       */
      Models::SendChatappMessageResponse sendChatappMessage(const Models::SendChatappMessageRequest &request);

      /**
       * @summary 同步flow
       *
       * @param request SyncFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncFlowResponse
       */
      Models::SyncFlowResponse syncFlowWithOptions(const Models::SyncFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步flow
       *
       * @param request SyncFlowRequest
       * @return SyncFlowResponse
       */
      Models::SyncFlowResponse syncFlow(const Models::SyncFlowRequest &request);

      /**
       * @summary 同步查询预算
       *
       * @param request SyncMessageCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncMessageCampaignResponse
       */
      Models::SyncMessageCampaignResponse syncMessageCampaignWithOptions(const Models::SyncMessageCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步查询预算
       *
       * @param request SyncMessageCampaignRequest
       * @return SyncMessageCampaignResponse
       */
      Models::SyncMessageCampaignResponse syncMessageCampaign(const Models::SyncMessageCampaignRequest &request);

      /**
       * @summary 查询Messenger订阅token
       *
       * @param request SyncMessengerSubscriptionTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncMessengerSubscriptionTokenResponse
       */
      Models::SyncMessengerSubscriptionTokenResponse syncMessengerSubscriptionTokenWithOptions(const Models::SyncMessengerSubscriptionTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Messenger订阅token
       *
       * @param request SyncMessengerSubscriptionTokenRequest
       * @return SyncMessengerSubscriptionTokenResponse
       */
      Models::SyncMessengerSubscriptionTokenResponse syncMessengerSubscriptionToken(const Models::SyncMessengerSubscriptionTokenRequest &request);

      /**
       * @summary Trigger an Online ChatFlow
       *
       * @description After triggering an online flow, if your flow contains components that incur costs for cloud products, such as message sending or function calls, please ensure you fully understand the billing methods and prices of the related products before using this interface.
       *
       * @param tmpReq TriggerChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerChatFlowResponse
       */
      Models::TriggerChatFlowResponse triggerChatFlowWithOptions(const Models::TriggerChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Trigger an Online ChatFlow
       *
       * @description After triggering an online flow, if your flow contains components that incur costs for cloud products, such as message sending or function calls, please ensure you fully understand the billing methods and prices of the related products before using this interface.
       *
       * @param request TriggerChatFlowRequest
       * @return TriggerChatFlowResponse
       */
      Models::TriggerChatFlowResponse triggerChatFlow(const Models::TriggerChatFlowRequest &request);

      /**
       * @summary 解绑邮件账号
       *
       * @param request UnbindDmAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindDmAccountResponse
       */
      Models::UnbindDmAccountResponse unbindDmAccountWithOptions(const Models::UnbindDmAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑邮件账号
       *
       * @param request UnbindDmAccountRequest
       * @return UnbindDmAccountResponse
       */
      Models::UnbindDmAccountResponse unbindDmAccount(const Models::UnbindDmAccountRequest &request);

      /**
       * @summary Modifies the callback URL of an account.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UpdateAccountWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAccountWebhookResponse
       */
      Models::UpdateAccountWebhookResponse updateAccountWebhookWithOptions(const Models::UpdateAccountWebhookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the callback URL of an account.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UpdateAccountWebhookRequest
       * @return UpdateAccountWebhookResponse
       */
      Models::UpdateAccountWebhookResponse updateAccountWebhook(const Models::UpdateAccountWebhookRequest &request);

      /**
       * @summary 修改viber申请单
       *
       * @param tmpReq UpdateAuditRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuditRequestResponse
       */
      Models::UpdateAuditRequestResponse updateAuditRequestWithOptions(const Models::UpdateAuditRequestRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改viber申请单
       *
       * @param request UpdateAuditRequestRequest
       * @return UpdateAuditRequestResponse
       */
      Models::UpdateAuditRequestResponse updateAuditRequest(const Models::UpdateAuditRequestRequest &request);

      /**
       * @summary Get Process
       *
       * @param tmpReq UpdateChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChatFlowResponse
       */
      Models::UpdateChatFlowResponse updateChatFlowWithOptions(const Models::UpdateChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Process
       *
       * @param request UpdateChatFlowRequest
       * @return UpdateChatFlowResponse
       */
      Models::UpdateChatFlowResponse updateChatFlow(const Models::UpdateChatFlowRequest &request);

      /**
       * @summary Modify chatFlow log settings
       *
       * @param request UpdateChatFlowLogSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChatFlowLogSettingResponse
       */
      Models::UpdateChatFlowLogSettingResponse updateChatFlowLogSettingWithOptions(const Models::UpdateChatFlowLogSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify chatFlow log settings
       *
       * @param request UpdateChatFlowLogSettingRequest
       * @return UpdateChatFlowLogSettingResponse
       */
      Models::UpdateChatFlowLogSettingResponse updateChatFlowLogSetting(const Models::UpdateChatFlowLogSettingRequest &request);

      /**
       * @summary UpdateChatGroup
       *
       * @param request UpdateChatGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChatGroupResponse
       */
      Models::UpdateChatGroupResponse updateChatGroupWithOptions(const Models::UpdateChatGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UpdateChatGroup
       *
       * @param request UpdateChatGroupRequest
       * @return UpdateChatGroupResponse
       */
      Models::UpdateChatGroupResponse updateChatGroup(const Models::UpdateChatGroupRequest &request);

      /**
       * @summary Modifies the business settings of a phone number.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UpdateCommerceSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCommerceSettingResponse
       */
      Models::UpdateCommerceSettingResponse updateCommerceSettingWithOptions(const Models::UpdateCommerceSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the business settings of a phone number.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UpdateCommerceSettingRequest
       * @return UpdateCommerceSettingResponse
       */
      Models::UpdateCommerceSettingResponse updateCommerceSetting(const Models::UpdateCommerceSettingRequest &request);

      /**
       * @summary 修改联系人
       *
       * @param tmpReq UpdateContactByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContactByIdResponse
       */
      Models::UpdateContactByIdResponse updateContactByIdWithOptions(const Models::UpdateContactByIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改联系人
       *
       * @param request UpdateContactByIdRequest
       * @return UpdateContactByIdResponse
       */
      Models::UpdateContactByIdResponse updateContactById(const Models::UpdateContactByIdRequest &request);

      /**
       * @summary Modifies welcoming messages, opening remarks, and commands for a phone number.
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * This operation will directly obtain data from Facebook, which sets an upper limit on the total number of calls for operations. We recommend that you take note of the limit when you call this operation.
       *
       * @param tmpReq UpdateConversationalAutomationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConversationalAutomationResponse
       */
      Models::UpdateConversationalAutomationResponse updateConversationalAutomationWithOptions(const Models::UpdateConversationalAutomationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies welcoming messages, opening remarks, and commands for a phone number.
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to five times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * This operation will directly obtain data from Facebook, which sets an upper limit on the total number of calls for operations. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UpdateConversationalAutomationRequest
       * @return UpdateConversationalAutomationResponse
       */
      Models::UpdateConversationalAutomationResponse updateConversationalAutomation(const Models::UpdateConversationalAutomationRequest &request);

      /**
       * @summary Updates a Flow by using JSON content.
       *
       * @param request UpdateFlowJSONAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowJSONAssetResponse
       */
      Models::UpdateFlowJSONAssetResponse updateFlowJSONAssetWithOptions(const Models::UpdateFlowJSONAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Flow by using JSON content.
       *
       * @param request UpdateFlowJSONAssetRequest
       * @return UpdateFlowJSONAssetResponse
       */
      Models::UpdateFlowJSONAssetResponse updateFlowJSONAsset(const Models::UpdateFlowJSONAssetRequest &request);

      /**
       * @summary Update flow version, used for updating the flow DSL on the canvas
       *
       * @param tmpReq UpdateFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowVersionResponse
       */
      Models::UpdateFlowVersionResponse updateFlowVersionWithOptions(const Models::UpdateFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update flow version, used for updating the flow DSL on the canvas
       *
       * @param request UpdateFlowVersionRequest
       * @return UpdateFlowVersionResponse
       */
      Models::UpdateFlowVersionResponse updateFlowVersion(const Models::UpdateFlowVersionRequest &request);

      /**
       * @summary 群组改名
       *
       * @param request UpdateGroupNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGroupNameResponse
       */
      Models::UpdateGroupNameResponse updateGroupNameWithOptions(const Models::UpdateGroupNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 群组改名
       *
       * @param request UpdateGroupNameRequest
       * @return UpdateGroupNameResponse
       */
      Models::UpdateGroupNameResponse updateGroupName(const Models::UpdateGroupNameRequest &request);

      /**
       * @summary 修改实例
       *
       * @param request UpdateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary 修改营销活动
       *
       * @param tmpReq UpdateMarketingFLowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMarketingFLowResponse
       */
      Models::UpdateMarketingFLowResponse updateMarketingFLowWithOptions(const Models::UpdateMarketingFLowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改营销活动
       *
       * @param request UpdateMarketingFLowRequest
       * @return UpdateMarketingFLowResponse
       */
      Models::UpdateMarketingFLowResponse updateMarketingFLow(const Models::UpdateMarketingFLowRequest &request);

      /**
       * @summary Updates the encryption public key of a phone number.
       *
       * @param request UpdatePhoneEncryptionPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePhoneEncryptionPublicKeyResponse
       */
      Models::UpdatePhoneEncryptionPublicKeyResponse updatePhoneEncryptionPublicKeyWithOptions(const Models::UpdatePhoneEncryptionPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the encryption public key of a phone number.
       *
       * @param request UpdatePhoneEncryptionPublicKeyRequest
       * @return UpdatePhoneEncryptionPublicKeyResponse
       */
      Models::UpdatePhoneEncryptionPublicKeyResponse updatePhoneEncryptionPublicKey(const Models::UpdatePhoneEncryptionPublicKeyRequest &request);

      /**
       * @summary Modifies a quick-response (QR) code that contains a message.
       *
       * @param request UpdatePhoneMessageQrdlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePhoneMessageQrdlResponse
       */
      Models::UpdatePhoneMessageQrdlResponse updatePhoneMessageQrdlWithOptions(const Models::UpdatePhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a quick-response (QR) code that contains a message.
       *
       * @param request UpdatePhoneMessageQrdlRequest
       * @return UpdatePhoneMessageQrdlResponse
       */
      Models::UpdatePhoneMessageQrdlResponse updatePhoneMessageQrdl(const Models::UpdatePhoneMessageQrdlRequest &request);

      /**
       * @summary The HTTP status code returned.
       * \\*   A value of OK indicates that the call is successful.
       * \\*   Other values indicate that the call fails. For more information, see [Error codes]\\(~~196974~~).
       *
       * @description The error message returned.
       *
       * @param request UpdatePhoneWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePhoneWebhookResponse
       */
      Models::UpdatePhoneWebhookResponse updatePhoneWebhookWithOptions(const Models::UpdatePhoneWebhookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The HTTP status code returned.
       * \\*   A value of OK indicates that the call is successful.
       * \\*   Other values indicate that the call fails. For more information, see [Error codes]\\(~~196974~~).
       *
       * @description The error message returned.
       *
       * @param request UpdatePhoneWebhookRequest
       * @return UpdatePhoneWebhookResponse
       */
      Models::UpdatePhoneWebhookResponse updatePhoneWebhook(const Models::UpdatePhoneWebhookRequest &request);

      /**
       * @summary 更新waba的mml状态
       *
       * @param request UpdateWabaMmlStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWabaMmlStatusResponse
       */
      Models::UpdateWabaMmlStatusResponse updateWabaMmlStatusWithOptions(const Models::UpdateWabaMmlStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新waba的mml状态
       *
       * @param request UpdateWabaMmlStatusRequest
       * @return UpdateWabaMmlStatusResponse
       */
      Models::UpdateWabaMmlStatusResponse updateWabaMmlStatus(const Models::UpdateWabaMmlStatusRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
