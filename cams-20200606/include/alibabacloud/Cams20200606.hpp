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
       * @summary Signs up for a Viber account.
       *
       * @param tmpReq AddAuditViberOpenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAuditViberOpenResponse
       */
      Models::AddAuditViberOpenResponse addAuditViberOpenWithOptions(const Models::AddAuditViberOpenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Signs up for a Viber account.
       *
       * @param request AddAuditViberOpenRequest
       * @return AddAuditViberOpenResponse
       */
      Models::AddAuditViberOpenResponse addAuditViberOpen(const Models::AddAuditViberOpenRequest &request);

      /**
       * @summary Creates an IM group.
       *
       * @description >Notice: 
       * Creating IM groups via the API is a feature in closed beta testing by Meta. Please contact your account manager to be added to the allowlist.
       * - You can only create an IM group by calling this API.
       * - After creating an IM group, you can call the [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) API to generate an invite link.
       * - For the WhatsApp channel type, an IM group is limited to eight members.
       *
       * @param request AddChatGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddChatGroupResponse
       */
      Models::AddChatGroupResponse addChatGroupWithOptions(const Models::AddChatGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IM group.
       *
       * @description >Notice: 
       * Creating IM groups via the API is a feature in closed beta testing by Meta. Please contact your account manager to be added to the allowlist.
       * - You can only create an IM group by calling this API.
       * - After creating an IM group, you can call the [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) API to generate an invite link.
       * - For the WhatsApp channel type, an IM group is limited to eight members.
       *
       * @param request AddChatGroupRequest
       * @return AddChatGroupResponse
       */
      Models::AddChatGroupResponse addChatGroup(const Models::AddChatGroupRequest &request);

      /**
       * @summary Adds an invite link for an Instant Messaging (IM) group.
       *
       * @description >Notice: 
       * The API for adding invite links to IM groups is in beta testing on Meta. Contact your account manager to add your account to the allowlist.
       * - Before you call this operation, make sure that an IM group has been created.
       * - If you do not have an IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) operation to create one.
       * - After you add an invite link by calling this operation, you can use the link to invite members to the group.
       * - Currently, members can join an IM group only using an invite link.
       * - A WhatsApp group can have a maximum of 8 members.
       *
       * @param request AddChatGroupInviteLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddChatGroupInviteLinkResponse
       */
      Models::AddChatGroupInviteLinkResponse addChatGroupInviteLinkWithOptions(const Models::AddChatGroupInviteLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an invite link for an Instant Messaging (IM) group.
       *
       * @description >Notice: 
       * The API for adding invite links to IM groups is in beta testing on Meta. Contact your account manager to add your account to the allowlist.
       * - Before you call this operation, make sure that an IM group has been created.
       * - If you do not have an IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) operation to create one.
       * - After you add an invite link by calling this operation, you can use the link to invite members to the group.
       * - Currently, members can join an IM group only using an invite link.
       * - A WhatsApp group can have a maximum of 8 members.
       *
       * @param request AddChatGroupInviteLinkRequest
       * @return AddChatGroupInviteLinkResponse
       */
      Models::AddChatGroupInviteLinkResponse addChatGroupInviteLink(const Models::AddChatGroupInviteLinkRequest &request);

      /**
       * @summary Adds a phone number to a WhatsApp Business Account (WABA).
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request AddChatappPhoneNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddChatappPhoneNumberResponse
       */
      Models::AddChatappPhoneNumberResponse addChatappPhoneNumberWithOptions(const Models::AddChatappPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a phone number to a WhatsApp Business Account (WABA).
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
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
       * @summary Adds users to a custom audience.
       *
       * @description After users are submitted to a custom audience, Meta matches them. If fewer than 100 users are matched, Meta discards the data. This prevents phone numbers from being linked directly to user tokens. Each API call supports up to 10,000 user records.
       *
       * @param tmpReq AddCustomAudienceUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomAudienceUserResponse
       */
      Models::AddCustomAudienceUserResponse addCustomAudienceUserWithOptions(const Models::AddCustomAudienceUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds users to a custom audience.
       *
       * @description After users are submitted to a custom audience, Meta matches them. If fewer than 100 users are matched, Meta discards the data. This prevents phone numbers from being linked directly to user tokens. Each API call supports up to 10,000 user records.
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
       * @summary Binds a WhatsApp Business Account (WABA).
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request ChatappBindWabaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappBindWabaResponse
       */
      Models::ChatappBindWabaResponse chatappBindWabaWithOptions(const Models::ChatappBindWabaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a WhatsApp Business Account (WABA).
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
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
       * @summary Verifies a phone number for migration.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request ChatappMigrationVerifiedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappMigrationVerifiedResponse
       */
      Models::ChatappMigrationVerifiedResponse chatappMigrationVerifiedWithOptions(const Models::ChatappMigrationVerifiedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies a phone number for migration.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request ChatappMigrationVerifiedRequest
       * @return ChatappMigrationVerifiedResponse
       */
      Models::ChatappMigrationVerifiedResponse chatappMigrationVerified(const Models::ChatappMigrationVerifiedRequest &request);

      /**
       * @summary Deregisters a phone number from a WhatsApp Business Account (WABA).
       *
       * @description This API is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. Call this API at a reasonable rate.
       *
       * @param request ChatappPhoneNumberDeregisterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappPhoneNumberDeregisterResponse
       */
      Models::ChatappPhoneNumberDeregisterResponse chatappPhoneNumberDeregisterWithOptions(const Models::ChatappPhoneNumberDeregisterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deregisters a phone number from a WhatsApp Business Account (WABA).
       *
       * @description This API is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. Call this API at a reasonable rate.
       *
       * @param request ChatappPhoneNumberDeregisterRequest
       * @return ChatappPhoneNumberDeregisterResponse
       */
      Models::ChatappPhoneNumberDeregisterResponse chatappPhoneNumberDeregister(const Models::ChatappPhoneNumberDeregisterRequest &request);

      /**
       * @summary Registers a phone number.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request ChatappPhoneNumberRegisterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappPhoneNumberRegisterResponse
       */
      Models::ChatappPhoneNumberRegisterResponse chatappPhoneNumberRegisterWithOptions(const Models::ChatappPhoneNumberRegisterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a phone number.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request ChatappPhoneNumberRegisterRequest
       * @return ChatappPhoneNumberRegisterResponse
       */
      Models::ChatappPhoneNumberRegisterResponse chatappPhoneNumberRegister(const Models::ChatappPhoneNumberRegisterRequest &request);

      /**
       * @summary Synchronizes phone numbers.
       *
       * @description This operation allows a maximum of 10 requests per second (RPS) per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request ChatappSyncPhoneNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappSyncPhoneNumberResponse
       */
      Models::ChatappSyncPhoneNumberResponse chatappSyncPhoneNumberWithOptions(const Models::ChatappSyncPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes phone numbers.
       *
       * @description This operation allows a maximum of 10 requests per second (RPS) per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request ChatappSyncPhoneNumberRequest
       * @return ChatappSyncPhoneNumberResponse
       */
      Models::ChatappSyncPhoneNumberResponse chatappSyncPhoneNumber(const Models::ChatappSyncPhoneNumberRequest &request);

      /**
       * @summary Associates a phone number with a WhatsApp Business account (WABA).
       *
       * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request ChatappVerifyAndRegisterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappVerifyAndRegisterResponse
       */
      Models::ChatappVerifyAndRegisterResponse chatappVerifyAndRegisterWithOptions(const Models::ChatappVerifyAndRegisterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a phone number with a WhatsApp Business account (WABA).
       *
       * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request ChatappVerifyAndRegisterRequest
       * @return ChatappVerifyAndRegisterResponse
       */
      Models::ChatappVerifyAndRegisterResponse chatappVerifyAndRegister(const Models::ChatappVerifyAndRegisterRequest &request);

      /**
       * @summary Validates direct message content for WhatsApp.
       *
       * @param tmpReq CheckDirectSendMessageSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDirectSendMessageSampleResponse
       */
      Models::CheckDirectSendMessageSampleResponse checkDirectSendMessageSampleWithOptions(const Models::CheckDirectSendMessageSampleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates direct message content for WhatsApp.
       *
       * @param request CheckDirectSendMessageSampleRequest
       * @return CheckDirectSendMessageSampleResponse
       */
      Models::CheckDirectSendMessageSampleResponse checkDirectSendMessageSample(const Models::CheckDirectSendMessageSampleRequest &request);

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
       * @summary 创建Chatflow
       *
       * @param tmpReq CreateChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatFlowResponse
       */
      Models::CreateChatFlowResponse createChatFlowWithOptions(const Models::CreateChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Chatflow
       *
       * @param request CreateChatFlowRequest
       * @return CreateChatFlowResponse
       */
      Models::CreateChatFlowResponse createChatFlow(const Models::CreateChatFlowRequest &request);

      /**
       * @summary 导入并创建flow
       *
       * @param tmpReq CreateChatFlowByImportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatFlowByImportResponse
       */
      Models::CreateChatFlowByImportResponse createChatFlowByImportWithOptions(const Models::CreateChatFlowByImportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入并创建flow
       *
       * @param request CreateChatFlowByImportRequest
       * @return CreateChatFlowByImportResponse
       */
      Models::CreateChatFlowByImportResponse createChatFlowByImport(const Models::CreateChatFlowByImportRequest &request);

      /**
       * @summary 创建chatFlow日志设置
       *
       * @param request CreateChatFlowLogSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatFlowLogSettingResponse
       */
      Models::CreateChatFlowLogSettingResponse createChatFlowLogSettingWithOptions(const Models::CreateChatFlowLogSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建chatFlow日志设置
       *
       * @param request CreateChatFlowLogSettingRequest
       * @return CreateChatFlowLogSettingResponse
       */
      Models::CreateChatFlowLogSettingResponse createChatFlowLogSetting(const Models::CreateChatFlowLogSettingRequest &request);

      /**
       * @summary Initiates the migration of a phone number.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request CreateChatappMigrationInitiateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatappMigrationInitiateResponse
       */
      Models::CreateChatappMigrationInitiateResponse createChatappMigrationInitiateWithOptions(const Models::CreateChatappMigrationInitiateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates the migration of a phone number.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request CreateChatappMigrationInitiateRequest
       * @return CreateChatappMigrationInitiateResponse
       */
      Models::CreateChatappMigrationInitiateResponse createChatappMigrationInitiate(const Models::CreateChatappMigrationInitiateRequest &request);

      /**
       * @summary Creates a message template. After a template is approved, you can use it to send messages.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this API operation is 50 for a single user. If you exceed the limit, API calls are rate-limited, which may affect your business. We recommend that you call this operation at a reasonable frequency.
       * ### Status change
       * You can monitor template status and quality changes using Message Service (MNS) or HTTP. For more information, see [Message receipts](https://help.aliyun.com/document_detail/421545.html).
       *
       * @param tmpReq CreateChatappTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatappTemplateResponse
       */
      Models::CreateChatappTemplateResponse createChatappTemplateWithOptions(const Models::CreateChatappTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a message template. After a template is approved, you can use it to send messages.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this API operation is 50 for a single user. If you exceed the limit, API calls are rate-limited, which may affect your business. We recommend that you call this operation at a reasonable frequency.
       * ### Status change
       * You can monitor template status and quality changes using Message Service (MNS) or HTTP. For more information, see [Message receipts](https://help.aliyun.com/document_detail/421545.html).
       *
       * @param request CreateChatappTemplateRequest
       * @return CreateChatappTemplateResponse
       */
      Models::CreateChatappTemplateResponse createChatappTemplate(const Models::CreateChatappTemplateRequest &request);

      /**
       * @summary Creates a custom audience.
       *
       * @param request CreateCustomAudienceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomAudienceResponse
       */
      Models::CreateCustomAudienceResponse createCustomAudienceWithOptions(const Models::CreateCustomAudienceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom audience.
       *
       * @param request CreateCustomAudienceRequest
       * @return CreateCustomAudienceResponse
       */
      Models::CreateCustomAudienceResponse createCustomAudience(const Models::CreateCustomAudienceRequest &request);

      /**
       * @summary Creates a flow.
       *
       * @description The queries per second (QPS) limit for this operation is 5 for each user. API calls that exceed this limit are throttled. Because throttling may affect your business, we recommend that you call this operation at a reasonable rate.
       *
       * @param tmpReq CreateFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlowWithOptions(const Models::CreateFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a flow.
       *
       * @description The queries per second (QPS) limit for this operation is 5 for each user. API calls that exceed this limit are throttled. Because throttling may affect your business, we recommend that you call this operation at a reasonable rate.
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
       * @summary Creates an instance.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates a budget.
       *
       * @param request CreateMessageCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMessageCampaignResponse
       */
      Models::CreateMessageCampaignResponse createMessageCampaignWithOptions(const Models::CreateMessageCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a budget.
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
       * @summary Creates a message QR code.
       *
       * @description - After a QR code is created, users can scan it with WhatsApp to start a chat with your business number.
       * - Before calling this API, make sure you have a WhatsApp channel.
       * - If you do not have a WhatsApp channel, create one on the
       *   <props="china">[Channel Management](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[Channel Management](https://chatapp.console.alibabacloud.com/CustomerList) page.
       * #### QPS limit
       * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request CreatePhoneMessageQrdlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhoneMessageQrdlResponse
       */
      Models::CreatePhoneMessageQrdlResponse createPhoneMessageQrdlWithOptions(const Models::CreatePhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a message QR code.
       *
       * @description - After a QR code is created, users can scan it with WhatsApp to start a chat with your business number.
       * - Before calling this API, make sure you have a WhatsApp channel.
       * - If you do not have a WhatsApp channel, create one on the
       *   <props="china">[Channel Management](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[Channel Management](https://chatapp.console.alibabacloud.com/CustomerList) page.
       * #### QPS limit
       * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
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
       * @summary 删除流程
       *
       * @param tmpReq DeleteChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatFlowResponse
       */
      Models::DeleteChatFlowResponse deleteChatFlowWithOptions(const Models::DeleteChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除流程
       *
       * @param request DeleteChatFlowRequest
       * @return DeleteChatFlowResponse
       */
      Models::DeleteChatFlowResponse deleteChatFlow(const Models::DeleteChatFlowRequest &request);

      /**
       * @summary Deletes an Instant Messaging (IM) group.
       *
       * @description >Notice: 
       * This API is in beta testing for Meta. Contact your account manager to be added to the allowlist before using this endpoint.
       * - Before you call this API, ensure that you have created an IM group.
       * - If you have not created one, create one by calling the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) operation.
       * - After an IM group is deleted, it cannot be recovered. Proceed with caution.
       *
       * @param request DeleteChatGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatGroupResponse
       */
      Models::DeleteChatGroupResponse deleteChatGroupWithOptions(const Models::DeleteChatGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Instant Messaging (IM) group.
       *
       * @description >Notice: 
       * This API is in beta testing for Meta. Contact your account manager to be added to the allowlist before using this endpoint.
       * - Before you call this API, ensure that you have created an IM group.
       * - If you have not created one, create one by calling the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) operation.
       * - After an IM group is deleted, it cannot be recovered. Proceed with caution.
       *
       * @param request DeleteChatGroupRequest
       * @return DeleteChatGroupResponse
       */
      Models::DeleteChatGroupResponse deleteChatGroup(const Models::DeleteChatGroupRequest &request);

      /**
       * @summary Deletes an IM group invitation link.
       *
       * @description >Notice: 
       * Deleting an IM group invitation link via the API is a feature in beta testing for Meta. To use this feature, contact your account manager to be added to the allowlist.
       * - Before calling this operation, ensure an invitation link has been added to your IM group.
       * - If you do not have an IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations to create one and add an invitation link.
       * - After deleting the invitation link, you can no longer invite members to the IM group. Proceed with caution.
       *
       * @param request DeleteChatGroupInviteLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatGroupInviteLinkResponse
       */
      Models::DeleteChatGroupInviteLinkResponse deleteChatGroupInviteLinkWithOptions(const Models::DeleteChatGroupInviteLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IM group invitation link.
       *
       * @description >Notice: 
       * Deleting an IM group invitation link via the API is a feature in beta testing for Meta. To use this feature, contact your account manager to be added to the allowlist.
       * - Before calling this operation, ensure an invitation link has been added to your IM group.
       * - If you do not have an IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations to create one and add an invitation link.
       * - After deleting the invitation link, you can no longer invite members to the IM group. Proceed with caution.
       *
       * @param request DeleteChatGroupInviteLinkRequest
       * @return DeleteChatGroupInviteLinkResponse
       */
      Models::DeleteChatGroupInviteLinkResponse deleteChatGroupInviteLink(const Models::DeleteChatGroupInviteLinkRequest &request);

      /**
       * @summary Removes members from an IM group.
       *
       * @description >Notice: 
       * This operation is a beta feature from Meta. Contact your account manager to add your account to the allowlist before use.
       * - This operation requires an existing IM group that members have joined via an invitation link.
       * - To create an IM group and add an invitation link, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations.
       * - Removed members no longer receive messages from the group. Use this operation with caution.
       *
       * @param tmpReq DeleteChatGroupParticipantsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatGroupParticipantsResponse
       */
      Models::DeleteChatGroupParticipantsResponse deleteChatGroupParticipantsWithOptions(const Models::DeleteChatGroupParticipantsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes members from an IM group.
       *
       * @description >Notice: 
       * This operation is a beta feature from Meta. Contact your account manager to add your account to the allowlist before use.
       * - This operation requires an existing IM group that members have joined via an invitation link.
       * - To create an IM group and add an invitation link, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations.
       * - Removed members no longer receive messages from the group. Use this operation with caution.
       *
       * @param request DeleteChatGroupParticipantsRequest
       * @return DeleteChatGroupParticipantsResponse
       */
      Models::DeleteChatGroupParticipantsResponse deleteChatGroupParticipants(const Models::DeleteChatGroupParticipantsRequest &request);

      /**
       * @summary Deletes a message template.
       *
       * @description ### QPS limit
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
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
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
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
       * @summary Deletes a WhatsApp flow. Only flows in the draft state can be deleted.
       *
       * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param request DeleteFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlowWithOptions(const Models::DeleteFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a WhatsApp flow. Only flows in the draft state can be deleted.
       *
       * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param request DeleteFlowRequest
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlow(const Models::DeleteFlowRequest &request);

      /**
       * @summary 删除流程版本
       *
       * @param tmpReq DeleteFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowVersionResponse
       */
      Models::DeleteFlowVersionResponse deleteFlowVersionWithOptions(const Models::DeleteFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除流程版本
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
       * @summary Deletes the specified instance.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified instance.
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
       * @summary Deletes the budget for a marketing campaign.
       *
       * @param request DeleteMessageCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMessageCampaignResponse
       */
      Models::DeleteMessageCampaignResponse deleteMessageCampaignWithOptions(const Models::DeleteMessageCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the budget for a marketing campaign.
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
       * @summary Deletes a message QR code.
       *
       * @description - After a message QR code is deleted, users can no longer scan the QR code to start a chat with your business number. Proceed with caution.
       * - If you have not created a message QR code, call the [CreatePhoneMessageQrdl](https://help.aliyun.com/document_detail/2638749.html) API to create one.
       * #### QPS limits
       * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request DeletePhoneMessageQrdlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePhoneMessageQrdlResponse
       */
      Models::DeletePhoneMessageQrdlResponse deletePhoneMessageQrdlWithOptions(const Models::DeletePhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a message QR code.
       *
       * @description - After a message QR code is deleted, users can no longer scan the QR code to start a chat with your business number. Proceed with caution.
       * - If you have not created a message QR code, call the [CreatePhoneMessageQrdl](https://help.aliyun.com/document_detail/2638749.html) API to create one.
       * #### QPS limits
       * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request DeletePhoneMessageQrdlRequest
       * @return DeletePhoneMessageQrdlResponse
       */
      Models::DeletePhoneMessageQrdlResponse deletePhoneMessageQrdl(const Models::DeletePhoneMessageQrdlRequest &request);

      /**
       * @summary Deprecates a WhatsApp flow.
       *
       * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param request DeprecateFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeprecateFlowResponse
       */
      Models::DeprecateFlowResponse deprecateFlowWithOptions(const Models::DeprecateFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deprecates a WhatsApp flow.
       *
       * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param request DeprecateFlowRequest
       * @return DeprecateFlowResponse
       */
      Models::DeprecateFlowResponse deprecateFlow(const Models::DeprecateFlowRequest &request);

      /**
       * @summary Enables statistics for WhatsApp metrics.
       *
       * @description - Before retrieving metrics for messages sent through WhatsApp channels or for Marketing templates, call this operation to enable statistics for WhatsApp Return on Investment (ROI) metrics.
       * - After you enable statistics for WhatsApp ROI metrics, it takes at least one day for data to become available. Metrics for messages sent and for Marketing templates used before you enabled this feature are not collected.
       * - After you enable it, you can call the [GetChatappPhoneNumberMetric](https://help.aliyun.com/document_detail/2557788.html) operation to query metrics for messages sent from a phone number, or the [GetChatappTemplateMetric](https://help.aliyun.com/document_detail/2557790.html) operation to query metrics for Marketing templates.
       * ### QPS limit
       * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request EnableWhatsappROIMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableWhatsappROIMetricResponse
       */
      Models::EnableWhatsappROIMetricResponse enableWhatsappROIMetricWithOptions(const Models::EnableWhatsappROIMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables statistics for WhatsApp metrics.
       *
       * @description - Before retrieving metrics for messages sent through WhatsApp channels or for Marketing templates, call this operation to enable statistics for WhatsApp Return on Investment (ROI) metrics.
       * - After you enable statistics for WhatsApp ROI metrics, it takes at least one day for data to become available. Metrics for messages sent and for Marketing templates used before you enabled this feature are not collected.
       * - After you enable it, you can call the [GetChatappPhoneNumberMetric](https://help.aliyun.com/document_detail/2557788.html) operation to query metrics for messages sent from a phone number, or the [GetChatappTemplateMetric](https://help.aliyun.com/document_detail/2557790.html) operation to query metrics for Marketing templates.
       * ### QPS limit
       * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request EnableWhatsappROIMetricRequest
       * @return EnableWhatsappROIMetricResponse
       */
      Models::EnableWhatsappROIMetricResponse enableWhatsappROIMetric(const Models::EnableWhatsappROIMetricRequest &request);

      /**
       * @summary flow绑定号码
       *
       * @param tmpReq FlowBindPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlowBindPhoneResponse
       */
      Models::FlowBindPhoneResponse flowBindPhoneWithOptions(const Models::FlowBindPhoneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary flow绑定号码
       *
       * @param request FlowBindPhoneRequest
       * @return FlowBindPhoneResponse
       */
      Models::FlowBindPhoneResponse flowBindPhone(const Models::FlowBindPhoneRequest &request);

      /**
       * @summary flow重绑定手机号
       *
       * @param tmpReq FlowRebindPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlowRebindPhoneResponse
       */
      Models::FlowRebindPhoneResponse flowRebindPhoneWithOptions(const Models::FlowRebindPhoneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary flow重绑定手机号
       *
       * @param request FlowRebindPhoneRequest
       * @return FlowRebindPhoneResponse
       */
      Models::FlowRebindPhoneResponse flowRebindPhone(const Models::FlowRebindPhoneRequest &request);

      /**
       * @summary flow解绑手机号
       *
       * @param tmpReq FlowUnbindPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlowUnbindPhoneResponse
       */
      Models::FlowUnbindPhoneResponse flowUnbindPhoneWithOptions(const Models::FlowUnbindPhoneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary flow解绑手机号
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
       * @summary Retrieves auto-generated templates.
       *
       * @param request GetAutoGeneratedTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoGeneratedTemplateResponse
       */
      Models::GetAutoGeneratedTemplateResponse getAutoGeneratedTemplateWithOptions(const Models::GetAutoGeneratedTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves auto-generated templates.
       *
       * @param request GetAutoGeneratedTemplateRequest
       * @return GetAutoGeneratedTemplateResponse
       */
      Models::GetAutoGeneratedTemplateResponse getAutoGeneratedTemplate(const Models::GetAutoGeneratedTemplateRequest &request);

      /**
       * @summary 获取ChatFlow运行数据
       *
       * @param tmpReq GetChatFlowMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatFlowMetricResponse
       */
      Models::GetChatFlowMetricResponse getChatFlowMetricWithOptions(const Models::GetChatFlowMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取ChatFlow运行数据
       *
       * @param request GetChatFlowMetricRequest
       * @return GetChatFlowMetricResponse
       */
      Models::GetChatFlowMetricResponse getChatFlowMetric(const Models::GetChatFlowMetricRequest &request);

      /**
       * @summary 查询chatFlow模板
       *
       * @param request GetChatFlowTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatFlowTemplateResponse
       */
      Models::GetChatFlowTemplateResponse getChatFlowTemplateWithOptions(const Models::GetChatFlowTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询chatFlow模板
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
       * @summary Queries the message sending metrics for a phone number in a WhatsApp channel.
       *
       * @description - You can call this operation to query message sending metrics. Alternatively, you can query the metrics in the ChatApp console by choosing <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Daily Statistics Reports for Customers**.
       * - Before you call this operation, call the [EnableWhatsAppROIMetric](https://help.aliyun.com/document_detail/2557789.html) operation to enable return on investment (ROI) metric collection for WhatsApp. Statistics are available at least one day after you enable this feature. Message sending metrics generated before you enable the feature are not collected.
       * - After you enable ROI metric collection for WhatsApp, make sure that messages are successfully sent from your channel. To send messages, go to the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page, select a WhatsApp channel, and choose **Message Sending**. You can also call [SendChatappMessage](https://help.aliyun.com/document_detail/432208.html) or [SendChatappMassMessage](https://help.aliyun.com/document_detail/447926.html).
       * ### QPS limit
       * This operation allows a maximum of 50 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request GetChatappPhoneNumberMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappPhoneNumberMetricResponse
       */
      Models::GetChatappPhoneNumberMetricResponse getChatappPhoneNumberMetricWithOptions(const Models::GetChatappPhoneNumberMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the message sending metrics for a phone number in a WhatsApp channel.
       *
       * @description - You can call this operation to query message sending metrics. Alternatively, you can query the metrics in the ChatApp console by choosing <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Daily Statistics Reports for Customers**.
       * - Before you call this operation, call the [EnableWhatsAppROIMetric](https://help.aliyun.com/document_detail/2557789.html) operation to enable return on investment (ROI) metric collection for WhatsApp. Statistics are available at least one day after you enable this feature. Message sending metrics generated before you enable the feature are not collected.
       * - After you enable ROI metric collection for WhatsApp, make sure that messages are successfully sent from your channel. To send messages, go to the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page, select a WhatsApp channel, and choose **Message Sending**. You can also call [SendChatappMessage](https://help.aliyun.com/document_detail/432208.html) or [SendChatappMassMessage](https://help.aliyun.com/document_detail/447926.html).
       * ### QPS limit
       * This operation allows a maximum of 50 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
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
       * @summary Queries the details of a message template.
       *
       * @description ### QPS limit
       * This operation allows a maximum of 5 requests per second (RPS) per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request GetChatappTemplateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappTemplateDetailResponse
       */
      Models::GetChatappTemplateDetailResponse getChatappTemplateDetailWithOptions(const Models::GetChatappTemplateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a message template.
       *
       * @description ### QPS limit
       * This operation allows a maximum of 5 requests per second (RPS) per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request GetChatappTemplateDetailRequest
       * @return GetChatappTemplateDetailResponse
       */
      Models::GetChatappTemplateDetailResponse getChatappTemplateDetail(const Models::GetChatappTemplateDetailRequest &request);

      /**
       * @summary Queries the metrics for a marketing template.
       *
       * @description - This API queries metrics only for marketing templates of WhatsApp channels.
       * - Before you call this operation, call [EnableWhatsAppROIMetric](https://help.aliyun.com/document_detail/2557789.html) to enable metric statistics for WhatsApp Return on Investment (ROI). It takes at least one day for the data to become available after you enable this feature. Metrics are not collected for marketing templates that were used before this feature was enabled.
       * - After you enable metric statistics for WhatsApp ROI, ensure that messages have been sent using the marketing templates of your channels. To send messages, go to the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page, select a WhatsApp channel, and choose **Message Sending**. You can also call [SendChatappMessage](https://help.aliyun.com/document_detail/432208.html) or [SendChatappMassMessage](https://help.aliyun.com/document_detail/447926.html).
       * ### QPS limits
       * This API is limited to 50 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request GetChatappTemplateMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappTemplateMetricResponse
       */
      Models::GetChatappTemplateMetricResponse getChatappTemplateMetricWithOptions(const Models::GetChatappTemplateMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metrics for a marketing template.
       *
       * @description - This API queries metrics only for marketing templates of WhatsApp channels.
       * - Before you call this operation, call [EnableWhatsAppROIMetric](https://help.aliyun.com/document_detail/2557789.html) to enable metric statistics for WhatsApp Return on Investment (ROI). It takes at least one day for the data to become available after you enable this feature. Metrics are not collected for marketing templates that were used before this feature was enabled.
       * - After you enable metric statistics for WhatsApp ROI, ensure that messages have been sent using the marketing templates of your channels. To send messages, go to the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page, select a WhatsApp channel, and choose **Message Sending**. You can also call [SendChatappMessage](https://help.aliyun.com/document_detail/432208.html) or [SendChatappMassMessage](https://help.aliyun.com/document_detail/447926.html).
       * ### QPS limits
       * This API is limited to 50 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request GetChatappTemplateMetricRequest
       * @return GetChatappTemplateMetricResponse
       */
      Models::GetChatappTemplateMetricResponse getChatappTemplateMetric(const Models::GetChatappTemplateMetricRequest &request);

      /**
       * @summary Obtains the authentication information that is used to upload a file.
       *
       * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request GetChatappUploadAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappUploadAuthorizationResponse
       */
      Models::GetChatappUploadAuthorizationResponse getChatappUploadAuthorizationWithOptions(const Models::GetChatappUploadAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the authentication information that is used to upload a file.
       *
       * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request GetChatappUploadAuthorizationRequest
       * @return GetChatappUploadAuthorizationResponse
       */
      Models::GetChatappUploadAuthorizationResponse getChatappUploadAuthorization(const Models::GetChatappUploadAuthorizationRequest &request);

      /**
       * @summary Requests a verification code to be sent to the specified phone number.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request GetChatappVerifyCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappVerifyCodeResponse
       */
      Models::GetChatappVerifyCodeResponse getChatappVerifyCodeWithOptions(const Models::GetChatappVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Requests a verification code to be sent to the specified phone number.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request GetChatappVerifyCodeRequest
       * @return GetChatappVerifyCodeResponse
       */
      Models::GetChatappVerifyCodeResponse getChatappVerifyCode(const Models::GetChatappVerifyCodeRequest &request);

      /**
       * @summary Queries the business settings of a phone number.
       *
       * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request GetCommerceSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCommerceSettingResponse
       */
      Models::GetCommerceSettingResponse getCommerceSettingWithOptions(const Models::GetCommerceSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the business settings of a phone number.
       *
       * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request GetCommerceSettingRequest
       * @return GetCommerceSettingResponse
       */
      Models::GetCommerceSettingResponse getCommerceSetting(const Models::GetCommerceSettingRequest &request);

      /**
       * @summary Queries the conversational automation settings for a phone number.
       *
       * @description ### [](#qps-)QPS limit
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       * This operation retrieves data directly from Meta. Meta imposes its own rate limits on the total number of calls. Stay within the specified limit.
       *
       * @param request GetConversationalAutomationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConversationalAutomationResponse
       */
      Models::GetConversationalAutomationResponse getConversationalAutomationWithOptions(const Models::GetConversationalAutomationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the conversational automation settings for a phone number.
       *
       * @description ### [](#qps-)QPS limit
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       * This operation retrieves data directly from Meta. Meta imposes its own rate limits on the total number of calls. Stay within the specified limit.
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
       * @summary Queries the details of a WhatsApp flow, including its status, name, categories, and preview URL.
       *
       * @description - Before calling this operation, make sure that you have created a WhatsApp flow.
       * - If you have not created a WhatsApp flow, call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) API to create one.
       * #### QPS limit
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param request GetFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlowResponse
       */
      Models::GetFlowResponse getFlowWithOptions(const Models::GetFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a WhatsApp flow, including its status, name, categories, and preview URL.
       *
       * @description - Before calling this operation, make sure that you have created a WhatsApp flow.
       * - If you have not created a WhatsApp flow, call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) API to create one.
       * #### QPS limit
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param request GetFlowRequest
       * @return GetFlowResponse
       */
      Models::GetFlowResponse getFlow(const Models::GetFlowRequest &request);

      /**
       * @summary Queries the JSON content of a WhatsApp flow.
       *
       * @description - Before calling this operation, make sure that you have created a WhatsApp flow.
       * - If you have not created a WhatsApp flow, call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) API to create one.
       * #### QPS limit
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param request GetFlowJSONAssestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlowJSONAssestResponse
       */
      Models::GetFlowJSONAssestResponse getFlowJSONAssestWithOptions(const Models::GetFlowJSONAssestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the JSON content of a WhatsApp flow.
       *
       * @description - Before calling this operation, make sure that you have created a WhatsApp flow.
       * - If you have not created a WhatsApp flow, call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) API to create one.
       * #### QPS limit
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param request GetFlowJSONAssestRequest
       * @return GetFlowJSONAssestResponse
       */
      Models::GetFlowJSONAssestResponse getFlowJSONAssest(const Models::GetFlowJSONAssestRequest &request);

      /**
       * @summary Generates a temporary preview URL for a WhatsApp flow.
       *
       * @description - After you create a WhatsApp flow, call this operation to generate a temporary preview URL for the flow.
       * - Before you call this operation, make sure that you have created a WhatsApp flow.
       * - If you do not have a WhatsApp flow, you can call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) API to create one.
       * #### QPS limit
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param request GetFlowPreviewUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlowPreviewUrlResponse
       */
      Models::GetFlowPreviewUrlResponse getFlowPreviewUrlWithOptions(const Models::GetFlowPreviewUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a temporary preview URL for a WhatsApp flow.
       *
       * @description - After you create a WhatsApp flow, call this operation to generate a temporary preview URL for the flow.
       * - Before you call this operation, make sure that you have created a WhatsApp flow.
       * - If you do not have a WhatsApp flow, you can call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) API to create one.
       * #### QPS limit
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
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
       * @summary Retrieves campaign metrics.
       *
       * @param request GetMessageCampaignInsightsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageCampaignInsightsResponse
       */
      Models::GetMessageCampaignInsightsResponse getMessageCampaignInsightsWithOptions(const Models::GetMessageCampaignInsightsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves campaign metrics.
       *
       * @param request GetMessageCampaignInsightsRequest
       * @return GetMessageCampaignInsightsResponse
       */
      Models::GetMessageCampaignInsightsResponse getMessageCampaignInsights(const Models::GetMessageCampaignInsightsRequest &request);

      /**
       * @summary Gets the verification code for phone number migration.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request GetMigrationVerifyCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMigrationVerifyCodeResponse
       */
      Models::GetMigrationVerifyCodeResponse getMigrationVerifyCodeWithOptions(const Models::GetMigrationVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the verification code for phone number migration.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request GetMigrationVerifyCodeRequest
       * @return GetMigrationVerifyCodeResponse
       */
      Models::GetMigrationVerifyCodeResponse getMigrationVerifyCode(const Models::GetMigrationVerifyCodeRequest &request);

      /**
       * @summary Gets permissions using the code obtained from the embeded signup flow.
       *
       * @description This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param tmpReq GetPermissionByCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPermissionByCodeResponse
       */
      Models::GetPermissionByCodeResponse getPermissionByCodeWithOptions(const Models::GetPermissionByCodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets permissions using the code obtained from the embeded signup flow.
       *
       * @description This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request GetPermissionByCodeRequest
       * @return GetPermissionByCodeResponse
       */
      Models::GetPermissionByCodeResponse getPermissionByCode(const Models::GetPermissionByCodeRequest &request);

      /**
       * @summary Retrieves the public key for a phone number.
       *
       * @description - Before calling this API, make sure that you have added a verified phone number to your WhatsApp Business Account (WABA).
       * - If no phone number is added to your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) APIs to get a verification code to register and verify the phone number.
       * #### QPS limit
       * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request GetPhoneEncryptionPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhoneEncryptionPublicKeyResponse
       */
      Models::GetPhoneEncryptionPublicKeyResponse getPhoneEncryptionPublicKeyWithOptions(const Models::GetPhoneEncryptionPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the public key for a phone number.
       *
       * @description - Before calling this API, make sure that you have added a verified phone number to your WhatsApp Business Account (WABA).
       * - If no phone number is added to your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) APIs to get a verification code to register and verify the phone number.
       * #### QPS limit
       * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request GetPhoneEncryptionPublicKeyRequest
       * @return GetPhoneEncryptionPublicKeyResponse
       */
      Models::GetPhoneEncryptionPublicKeyResponse getPhoneEncryptionPublicKey(const Models::GetPhoneEncryptionPublicKeyRequest &request);

      /**
       * @summary Retrieves the verification status of a phone number.
       *
       * @description - You can call this operation to retrieve the verification status of a phone number. You can also view the status on the <props="china">[Channel Management](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **WABA Management** > **Phone Number Management** page.
       * - Before calling this operation, add a phone number to your WhatsApp Business Account (WABA) and submit it for verification.
       * - If you have not added a phone number to your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) APIs to obtain a verification code and register the number.
       * This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request GetPhoneNumberVerificationStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhoneNumberVerificationStatusResponse
       */
      Models::GetPhoneNumberVerificationStatusResponse getPhoneNumberVerificationStatusWithOptions(const Models::GetPhoneNumberVerificationStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the verification status of a phone number.
       *
       * @description - You can call this operation to retrieve the verification status of a phone number. You can also view the status on the <props="china">[Channel Management](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **WABA Management** > **Phone Number Management** page.
       * - Before calling this operation, add a phone number to your WhatsApp Business Account (WABA) and submit it for verification.
       * - If you have not added a phone number to your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) APIs to obtain a verification code and register the number.
       * This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
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
       * @summary Gets the ID for a pre-validated phone number. Use this ID to select the number in the Embedded Signup flow without obtaining a new verification code.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request GetPreValidatePhoneIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPreValidatePhoneIdResponse
       */
      Models::GetPreValidatePhoneIdResponse getPreValidatePhoneIdWithOptions(const Models::GetPreValidatePhoneIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the ID for a pre-validated phone number. Use this ID to select the number in the Embedded Signup flow without obtaining a new verification code.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request GetPreValidatePhoneIdRequest
       * @return GetPreValidatePhoneIdResponse
       */
      Models::GetPreValidatePhoneIdResponse getPreValidatePhoneId(const Models::GetPreValidatePhoneIdRequest &request);

      /**
       * @summary Retrieves the application by its requestNo.
       *
       * @param request GetViberByRequestNoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetViberByRequestNoResponse
       */
      Models::GetViberByRequestNoResponse getViberByRequestNoWithOptions(const Models::GetViberByRequestNoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the application by its requestNo.
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
       * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request GetWhatsappConnectionCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWhatsappConnectionCatalogResponse
       */
      Models::GetWhatsappConnectionCatalogResponse getWhatsappConnectionCatalogWithOptions(const Models::GetWhatsappConnectionCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the product catalogs that are associated with a WhatsApp Business account (WABA).
       *
       * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
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
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       * This operation retrieves data directly from Meta. Meta imposes its own rate limits on the total number of calls. Stay within the specified limit.
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
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       * This operation retrieves data directly from Meta. Meta imposes its own rate limits on the total number of calls. Stay within the specified limit.
       *
       * @param request GetWhatsappHealthStatusRequest
       * @return GetWhatsappHealthStatusResponse
       */
      Models::GetWhatsappHealthStatusResponse getWhatsappHealthStatus(const Models::GetWhatsappHealthStatusRequest &request);

      /**
       * @summary Gets the App ID for an Independent Software Vendor (ISV).
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request IsvGetAppIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IsvGetAppIdResponse
       */
      Models::IsvGetAppIdResponse isvGetAppIdWithOptions(const Models::IsvGetAppIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the App ID for an Independent Software Vendor (ISV).
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
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
       * @summary 根据flowCode查询已绑定列表
       *
       * @param request ListBindingRelationsForFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindingRelationsForFlowVersionResponse
       */
      Models::ListBindingRelationsForFlowVersionResponse listBindingRelationsForFlowVersionWithOptions(const Models::ListBindingRelationsForFlowVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据flowCode查询已绑定列表
       *
       * @param request ListBindingRelationsForFlowVersionRequest
       * @return ListBindingRelationsForFlowVersionResponse
       */
      Models::ListBindingRelationsForFlowVersionResponse listBindingRelationsForFlowVersion(const Models::ListBindingRelationsForFlowVersionRequest &request);

      /**
       * @summary 列举流程
       *
       * @param tmpReq ListChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatFlowResponse
       */
      Models::ListChatFlowResponse listChatFlowWithOptions(const Models::ListChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举流程
       *
       * @param request ListChatFlowRequest
       * @return ListChatFlowResponse
       */
      Models::ListChatFlowResponse listChatFlow(const Models::ListChatFlowRequest &request);

      /**
       * @summary chatFlow模板列表
       *
       * @param request ListChatFlowTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatFlowTemplateResponse
       */
      Models::ListChatFlowTemplateResponse listChatFlowTemplateWithOptions(const Models::ListChatFlowTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary chatFlow模板列表
       *
       * @param request ListChatFlowTemplateRequest
       * @return ListChatFlowTemplateResponse
       */
      Models::ListChatFlowTemplateResponse listChatFlowTemplate(const Models::ListChatFlowTemplateRequest &request);

      /**
       * @summary Retrieves a list of IM groups.
       *
       * @description >Notice: 
       * Retrieving the IM group list via the API is a beta feature. Contact your account manager to be added to the allowlist.
       * - You must have an IM group before you call this operation.
       * - If you do not have an IM group, you can only create one by calling the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) API.
       * - The optional parameters for this operation filter the IM group list. If you do not specify any filters, the operation returns the complete IM group list.
       *
       * @param tmpReq ListChatGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatGroupResponse
       */
      Models::ListChatGroupResponse listChatGroupWithOptions(const Models::ListChatGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of IM groups.
       *
       * @description >Notice: 
       * Retrieving the IM group list via the API is a beta feature. Contact your account manager to be added to the allowlist.
       * - You must have an IM group before you call this operation.
       * - If you do not have an IM group, you can only create one by calling the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) API.
       * - The optional parameters for this operation filter the IM group list. If you do not specify any filters, the operation returns the complete IM group list.
       *
       * @param request ListChatGroupRequest
       * @return ListChatGroupResponse
       */
      Models::ListChatGroupResponse listChatGroup(const Models::ListChatGroupRequest &request);

      /**
       * @summary Lists the members of an IM group.
       *
       * @description >Notice: 
       * This operation is an internal preview feature. Contact your account manager to request access.
       * - Before calling this operation, ensure you have created an IM group with an invitation link, and that members have joined by using that link.
       * - To create an IM group and add an invitation link, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations.
       *
       * @param tmpReq ListChatGroupParticipantsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatGroupParticipantsResponse
       */
      Models::ListChatGroupParticipantsResponse listChatGroupParticipantsWithOptions(const Models::ListChatGroupParticipantsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the members of an IM group.
       *
       * @description >Notice: 
       * This operation is an internal preview feature. Contact your account manager to request access.
       * - Before calling this operation, ensure you have created an IM group with an invitation link, and that members have joined by using that link.
       * - To create an IM group and add an invitation link, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations.
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
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
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
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request ListChatappTemplateRequest
       * @return ListChatappTemplateResponse
       */
      Models::ListChatappTemplateResponse listChatappTemplate(const Models::ListChatappTemplateRequest &request);

      /**
       * @summary Queries a list of custom audiences.
       *
       * @param tmpReq ListCustomAudienceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAudienceResponse
       */
      Models::ListCustomAudienceResponse listCustomAudienceWithOptions(const Models::ListCustomAudienceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of custom audiences.
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
       * @summary Retrieves a list of WhatsApp flows.
       *
       * @description This operation allows a maximum of 5 requests per second (RPS) per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param tmpReq ListFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowResponse
       */
      Models::ListFlowResponse listFlowWithOptions(const Models::ListFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of WhatsApp flows.
       *
       * @description This operation allows a maximum of 5 requests per second (RPS) per account. Excess requests are throttled and may result in service interruptions.
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
       * @summary 列举流程版本
       *
       * @param tmpReq ListFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowVersionResponse
       */
      Models::ListFlowVersionResponse listFlowVersionWithOptions(const Models::ListFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举流程版本
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
       * @summary Lists instances.
       *
       * @param request ListInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstanceWithOptions(const Models::ListInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists instances.
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
       * @summary Retrieves a list of budgets.
       *
       * @param tmpReq ListMessageCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageCampaignResponse
       */
      Models::ListMessageCampaignResponse listMessageCampaignWithOptions(const Models::ListMessageCampaignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of budgets.
       *
       * @param request ListMessageCampaignRequest
       * @return ListMessageCampaignResponse
       */
      Models::ListMessageCampaignResponse listMessageCampaign(const Models::ListMessageCampaignRequest &request);

      /**
       * @summary Queries custom audiences and subscription tokens.
       *
       * @param request ListMessengerSubscriptionTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessengerSubscriptionTokenResponse
       */
      Models::ListMessengerSubscriptionTokenResponse listMessengerSubscriptionTokenWithOptions(const Models::ListMessengerSubscriptionTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom audiences and subscription tokens.
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
       * @summary Queries message QR codes.
       *
       * @description This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request ListPhoneMessageQrdlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPhoneMessageQrdlResponse
       */
      Models::ListPhoneMessageQrdlResponse listPhoneMessageQrdlWithOptions(const Models::ListPhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries message QR codes.
       *
       * @description This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request ListPhoneMessageQrdlRequest
       * @return ListPhoneMessageQrdlResponse
       */
      Models::ListPhoneMessageQrdlResponse listPhoneMessageQrdl(const Models::ListPhoneMessageQrdlRequest &request);

      /**
       * @summary Retrieves products in a catalog.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request ListProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductResponse
       */
      Models::ListProductResponse listProductWithOptions(const Models::ListProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves products in a catalog.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request ListProductRequest
       * @return ListProductResponse
       */
      Models::ListProductResponse listProduct(const Models::ListProductRequest &request);

      /**
       * @summary Queries the product catalogs on the Business Manager platform of Meta.
       *
       * @description This operation allows a maximum of 10 requests per second (RPS) per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request ListProductCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductCatalogResponse
       */
      Models::ListProductCatalogResponse listProductCatalogWithOptions(const Models::ListProductCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the product catalogs on the Business Manager platform of Meta.
       *
       * @description This operation allows a maximum of 10 requests per second (RPS) per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
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
       * @summary Lists message templates.
       *
       * @param request ListWhatAppTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWhatAppTemplateResponse
       */
      Models::ListWhatAppTemplateResponse listWhatAppTemplateWithOptions(const Models::ListWhatAppTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists message templates.
       *
       * @param request ListWhatAppTemplateRequest
       * @return ListWhatAppTemplateResponse
       */
      Models::ListWhatAppTemplateResponse listWhatAppTemplate(const Models::ListWhatAppTemplateRequest &request);

      /**
       * @summary Modifies a message template. You can modify only templates that are unreviewed or have been rejected.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit for this API is 50 calls per second for each user. If you exceed this limit, your API calls are subject to rate limiting. This may affect your business. Make sure that you call this API within the specified limit.
       * ### Status changes
       * You can monitor changes in template status and quality through MNS or HTTP. For more information, see [Receipt messages](https://help.aliyun.com/document_detail/421545.html).
       *
       * @param tmpReq ModifyChatappTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyChatappTemplateResponse
       */
      Models::ModifyChatappTemplateResponse modifyChatappTemplateWithOptions(const Models::ModifyChatappTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a message template. You can modify only templates that are unreviewed or have been rejected.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit for this API is 50 calls per second for each user. If you exceed this limit, your API calls are subject to rate limiting. This may affect your business. Make sure that you call this API within the specified limit.
       * ### Status changes
       * You can monitor changes in template status and quality through MNS or HTTP. For more information, see [Receipt messages](https://help.aliyun.com/document_detail/421545.html).
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
       * @summary Modifies a flow.
       *
       * @description This API is limited to 5 queries per second (QPS) per account. Calls that exceed this limit trigger flow control, which can affect your business. Plan your API calls accordingly.
       *
       * @param tmpReq ModifyFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFlowResponse
       */
      Models::ModifyFlowResponse modifyFlowWithOptions(const Models::ModifyFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a flow.
       *
       * @description This API is limited to 5 queries per second (QPS) per account. Calls that exceed this limit trigger flow control, which can affect your business. Plan your API calls accordingly.
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
       * @summary 下线流程版本
       *
       * @param tmpReq OfflineFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineFlowVersionResponse
       */
      Models::OfflineFlowVersionResponse offlineFlowVersionWithOptions(const Models::OfflineFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下线流程版本
       *
       * @param request OfflineFlowVersionRequest
       * @return OfflineFlowVersionResponse
       */
      Models::OfflineFlowVersionResponse offlineFlowVersion(const Models::OfflineFlowVersionRequest &request);

      /**
       * @summary 上线流程版本
       *
       * @param tmpReq OnlineFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineFlowVersionResponse
       */
      Models::OnlineFlowVersionResponse onlineFlowVersionWithOptions(const Models::OnlineFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上线流程版本
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
       * @summary Publishes a WhatsApp flow.
       *
       * @description - Before you call this operation, ensure that you have created a WhatsApp flow.
       * - If you have not created a WhatsApp flow, call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) operation to create one.
       * #### QPS limit
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param request PublishFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishFlowResponse
       */
      Models::PublishFlowResponse publishFlowWithOptions(const Models::PublishFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a WhatsApp flow.
       *
       * @description - Before you call this operation, ensure that you have created a WhatsApp flow.
       * - If you have not created a WhatsApp flow, call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) operation to create one.
       * #### QPS limit
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param request PublishFlowRequest
       * @return PublishFlowResponse
       */
      Models::PublishFlowResponse publishFlow(const Models::PublishFlowRequest &request);

      /**
       * @summary Queries the WhatsApp Business Account (WABA) that is bound to a customer account.
       *
       * @description This API has a per-user QPS limit of 10. Calls that exceed this limit are subject to flow control, which may impact your business. Make API calls at a reasonable rate.
       *
       * @param request QueryChatappBindWabaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryChatappBindWabaResponse
       */
      Models::QueryChatappBindWabaResponse queryChatappBindWabaWithOptions(const Models::QueryChatappBindWabaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the WhatsApp Business Account (WABA) that is bound to a customer account.
       *
       * @description This API has a per-user QPS limit of 10. Calls that exceed this limit are subject to flow control, which may impact your business. Make API calls at a reasonable rate.
       *
       * @param request QueryChatappBindWabaRequest
       * @return QueryChatappBindWabaResponse
       */
      Models::QueryChatappBindWabaResponse queryChatappBindWaba(const Models::QueryChatappBindWabaRequest &request);

      /**
       * @summary Queries all phone numbers used for sending messages and their statuses for a customer.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request QueryChatappPhoneNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryChatappPhoneNumbersResponse
       */
      Models::QueryChatappPhoneNumbersResponse queryChatappPhoneNumbersWithOptions(const Models::QueryChatappPhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all phone numbers used for sending messages and their statuses for a customer.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request QueryChatappPhoneNumbersRequest
       * @return QueryChatappPhoneNumbersResponse
       */
      Models::QueryChatappPhoneNumbersResponse queryChatappPhoneNumbers(const Models::QueryChatappPhoneNumbersRequest &request);

      /**
       * @summary Gets the details of a specified instance.
       *
       * @param request QueryInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstanceResponse
       */
      Models::QueryInstanceResponse queryInstanceWithOptions(const Models::QueryInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a specified instance.
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
       * @summary Queries the business information of a phone number.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request QueryPhoneBusinessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPhoneBusinessProfileResponse
       */
      Models::QueryPhoneBusinessProfileResponse queryPhoneBusinessProfileWithOptions(const Models::QueryPhoneBusinessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the business information of a phone number.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request QueryPhoneBusinessProfileRequest
       * @return QueryPhoneBusinessProfileResponse
       */
      Models::QueryPhoneBusinessProfileResponse queryPhoneBusinessProfile(const Models::QueryPhoneBusinessProfileRequest &request);

      /**
       * @summary Queries the business information about the WhatsApp Business account (WABA).
       *
       * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request QueryWabaBusinessInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryWabaBusinessInfoResponse
       */
      Models::QueryWabaBusinessInfoResponse queryWabaBusinessInfoWithOptions(const Models::QueryWabaBusinessInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the business information about the WhatsApp Business account (WABA).
       *
       * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request QueryWabaBusinessInfoRequest
       * @return QueryWabaBusinessInfoResponse
       */
      Models::QueryWabaBusinessInfoResponse queryWabaBusinessInfo(const Models::QueryWabaBusinessInfoRequest &request);

      /**
       * @summary 获取流程
       *
       * @param tmpReq ReadChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadChatFlowResponse
       */
      Models::ReadChatFlowResponse readChatFlowWithOptions(const Models::ReadChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流程
       *
       * @param request ReadChatFlowRequest
       * @return ReadChatFlowResponse
       */
      Models::ReadChatFlowResponse readChatFlow(const Models::ReadChatFlowRequest &request);

      /**
       * @summary 查看chatFlow日志设置
       *
       * @param request ReadChatFlowLogSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadChatFlowLogSettingResponse
       */
      Models::ReadChatFlowLogSettingResponse readChatFlowLogSettingWithOptions(const Models::ReadChatFlowLogSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看chatFlow日志设置
       *
       * @param request ReadChatFlowLogSettingRequest
       * @return ReadChatFlowLogSettingResponse
       */
      Models::ReadChatFlowLogSettingResponse readChatFlowLogSetting(const Models::ReadChatFlowLogSettingRequest &request);

      /**
       * @summary 获取流程版本
       *
       * @param tmpReq ReadFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadFlowVersionResponse
       */
      Models::ReadFlowVersionResponse readFlowVersionWithOptions(const Models::ReadFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流程版本
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
       * @summary Sends a request to the WhatsApp Conversions API.
       *
       * @description The China-specific QPS limit for a single user of this API operation is 100 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param tmpReq RequestWhatsappConversionApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RequestWhatsappConversionApiResponse
       */
      Models::RequestWhatsappConversionApiResponse requestWhatsappConversionApiWithOptions(const Models::RequestWhatsappConversionApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a request to the WhatsApp Conversions API.
       *
       * @description The China-specific QPS limit for a single user of this API operation is 100 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request RequestWhatsappConversionApiRequest
       * @return RequestWhatsappConversionApiResponse
       */
      Models::RequestWhatsappConversionApiResponse requestWhatsappConversionApi(const Models::RequestWhatsappConversionApiRequest &request);

      /**
       * @summary Sends bulk messages to multiple recipients.
       *
       * @description - You can call this operation to send messages in bulk. You can also send messages in the console. To do so, go to the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList), click a channel, and then choose **Message Sending**.
       * - Before you call this operation, make sure that you have created a channel and have an approved template.
       * - For a WhatsApp channel, you must [register and bind a WABA](t2012827.xdita#) and [add a phone number](t2012827.xdita#).
       * - For a Messenger channel, you must [connect to a Facebook Page](t2746072.xdita#).
       * - For an Instagram channel, you must [connect to an Instagram professional account](t2746079.xdita#).
       * <props="intl">
       * - For a Viber channel, you must [connect to an Instagram professional account](t2746079.xdita#).
       * ### QPS limits
       * - This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       * - A single request supports a maximum of 1,000 numbers.
       * ### Status changes
       * Message sending status can be monitored via Simple Message Service or HTTP callback. For details, see [Message receipts](https://help.aliyun.com/document_detail/421545.html).
       *
       * @param tmpReq SendChatappMassMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendChatappMassMessageResponse
       */
      Models::SendChatappMassMessageResponse sendChatappMassMessageWithOptions(const Models::SendChatappMassMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends bulk messages to multiple recipients.
       *
       * @description - You can call this operation to send messages in bulk. You can also send messages in the console. To do so, go to the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList), click a channel, and then choose **Message Sending**.
       * - Before you call this operation, make sure that you have created a channel and have an approved template.
       * - For a WhatsApp channel, you must [register and bind a WABA](t2012827.xdita#) and [add a phone number](t2012827.xdita#).
       * - For a Messenger channel, you must [connect to a Facebook Page](t2746072.xdita#).
       * - For an Instagram channel, you must [connect to an Instagram professional account](t2746079.xdita#).
       * <props="intl">
       * - For a Viber channel, you must [connect to an Instagram professional account](t2746079.xdita#).
       * ### QPS limits
       * - This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       * - A single request supports a maximum of 1,000 numbers.
       * ### Status changes
       * Message sending status can be monitored via Simple Message Service or HTTP callback. For details, see [Message receipts](https://help.aliyun.com/document_detail/421545.html).
       *
       * @param request SendChatappMassMessageRequest
       * @return SendChatappMassMessageResponse
       */
      Models::SendChatappMassMessageResponse sendChatappMassMessage(const Models::SendChatappMassMessageRequest &request);

      /**
       * @summary Sends a ChatApp message.
       *
       * @description - Call this operation to send messages. You can also send messages manually in the console at <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Message Sending**.
       * - Before calling this operation, you must create a channel and have an approved template.
       * - For a WhatsApp channel, you must [register and bind a WABA](https://help.aliyun.com/document_detail/172335.html) and [add a phone number](https://help.aliyun.com/document_detail/2656131.html).
       * - For a Messenger channel, you must [connect to a Facebook Page](https://help.aliyun.com/document_detail/2837713.html).
       * - For an Instagram channel, you must [connect to an Instagram professional account](https://help.aliyun.com/document_detail/2837720.html).
       * <props="intl">
       * - For a Viber channel, you must [apply for a service ID](https://help.aliyun.com/document_detail/2807995.html).
       * ### QPS limit
       * The QPS limit for this operation is 250 per user. API calls that exceed this limit are throttled. To prevent service disruptions, ensure your calls stay within this limit.
       * ### Status changes
       * You can receive notifications about message status changes by using MNS or HTTP callbacks. For more information, see [message receipts](https://help.aliyun.com/document_detail/421545.html).
       *
       * @param tmpReq SendChatappMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendChatappMessageResponse
       */
      Models::SendChatappMessageResponse sendChatappMessageWithOptions(const Models::SendChatappMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a ChatApp message.
       *
       * @description - Call this operation to send messages. You can also send messages manually in the console at <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Message Sending**.
       * - Before calling this operation, you must create a channel and have an approved template.
       * - For a WhatsApp channel, you must [register and bind a WABA](https://help.aliyun.com/document_detail/172335.html) and [add a phone number](https://help.aliyun.com/document_detail/2656131.html).
       * - For a Messenger channel, you must [connect to a Facebook Page](https://help.aliyun.com/document_detail/2837713.html).
       * - For an Instagram channel, you must [connect to an Instagram professional account](https://help.aliyun.com/document_detail/2837720.html).
       * <props="intl">
       * - For a Viber channel, you must [apply for a service ID](https://help.aliyun.com/document_detail/2807995.html).
       * ### QPS limit
       * The QPS limit for this operation is 250 per user. API calls that exceed this limit are throttled. To prevent service disruptions, ensure your calls stay within this limit.
       * ### Status changes
       * You can receive notifications about message status changes by using MNS or HTTP callbacks. For more information, see [message receipts](https://help.aliyun.com/document_detail/421545.html).
       *
       * @param request SendChatappMessageRequest
       * @return SendChatappMessageResponse
       */
      Models::SendChatappMessageResponse sendChatappMessage(const Models::SendChatappMessageRequest &request);

      /**
       * @summary Submits the result of a verification code check.
       *
       * @param request SubmitVerifyCodeResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVerifyCodeResultResponse
       */
      Models::SubmitVerifyCodeResultResponse submitVerifyCodeResultWithOptions(const Models::SubmitVerifyCodeResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits the result of a verification code check.
       *
       * @param request SubmitVerifyCodeResultRequest
       * @return SubmitVerifyCodeResultResponse
       */
      Models::SubmitVerifyCodeResultResponse submitVerifyCodeResult(const Models::SubmitVerifyCodeResultRequest &request);

      /**
       * @summary Synchronizes the business app history.
       *
       * @description - Before you call this operation, you must configure a webhook for messages and receipts by calling [UpdatePhoneWebhook](https://help.aliyun.com/document_detail/600763.html) and [UpdateAccountWebhook](https://help.aliyun.com/document_detail/600765.html). Otherwise, history synchronization will fail because the system cannot find the configured webhook URL.
       * - This is a one-time operation. Subsequent calls have no effect.
       *
       * @param request SyncBusinessAppHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncBusinessAppHistoryResponse
       */
      Models::SyncBusinessAppHistoryResponse syncBusinessAppHistoryWithOptions(const Models::SyncBusinessAppHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes the business app history.
       *
       * @description - Before you call this operation, you must configure a webhook for messages and receipts by calling [UpdatePhoneWebhook](https://help.aliyun.com/document_detail/600763.html) and [UpdateAccountWebhook](https://help.aliyun.com/document_detail/600765.html). Otherwise, history synchronization will fail because the system cannot find the configured webhook URL.
       * - This is a one-time operation. Subsequent calls have no effect.
       *
       * @param request SyncBusinessAppHistoryRequest
       * @return SyncBusinessAppHistoryResponse
       */
      Models::SyncBusinessAppHistoryResponse syncBusinessAppHistory(const Models::SyncBusinessAppHistoryRequest &request);

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
       * @summary Synchronously queries the budget.
       *
       * @param request SyncMessageCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncMessageCampaignResponse
       */
      Models::SyncMessageCampaignResponse syncMessageCampaignWithOptions(const Models::SyncMessageCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronously queries the budget.
       *
       * @param request SyncMessageCampaignRequest
       * @return SyncMessageCampaignResponse
       */
      Models::SyncMessageCampaignResponse syncMessageCampaign(const Models::SyncMessageCampaignRequest &request);

      /**
       * @summary Retrieves the Messenger subscription token.
       *
       * @param request SyncMessengerSubscriptionTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncMessengerSubscriptionTokenResponse
       */
      Models::SyncMessengerSubscriptionTokenResponse syncMessengerSubscriptionTokenWithOptions(const Models::SyncMessengerSubscriptionTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the Messenger subscription token.
       *
       * @param request SyncMessengerSubscriptionTokenRequest
       * @return SyncMessengerSubscriptionTokenResponse
       */
      Models::SyncMessengerSubscriptionTokenResponse syncMessengerSubscriptionToken(const Models::SyncMessengerSubscriptionTokenRequest &request);

      /**
       * @summary Triggers an online chat flow that has a manual trigger.
       *
       * @description - You can call this operation to trigger a published version of a flow that has a manual trigger. You can also trigger the flow from the [Marketing Campaign Management](https://chatapp.console.aliyun.com/MarketingActivityManagement) page if the flow is associated with a marketing campaign.
       * - Before you call this operation, make sure that the flow has a manual trigger and is published.
       * - If a flow with a manual trigger does not have a published version, you must publish it. In [Chat Flow](https://chatapp.console.aliyun.com/ChatFlowBuilder), you can click the flow name to open the canvas and publish the version. Alternatively, you can call the [OnlineFlowVersion](https://help.aliyun.com/document_detail/2937203.html) API to publish the version.
       * - If your flow contains components that incur costs, such as message sending or function invocations, make sure that you understand the billing methods and pricing for these products before you trigger the flow.
       *
       * @param tmpReq TriggerChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerChatFlowResponse
       */
      Models::TriggerChatFlowResponse triggerChatFlowWithOptions(const Models::TriggerChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers an online chat flow that has a manual trigger.
       *
       * @description - You can call this operation to trigger a published version of a flow that has a manual trigger. You can also trigger the flow from the [Marketing Campaign Management](https://chatapp.console.aliyun.com/MarketingActivityManagement) page if the flow is associated with a marketing campaign.
       * - Before you call this operation, make sure that the flow has a manual trigger and is published.
       * - If a flow with a manual trigger does not have a published version, you must publish it. In [Chat Flow](https://chatapp.console.aliyun.com/ChatFlowBuilder), you can click the flow name to open the canvas and publish the version. Alternatively, you can call the [OnlineFlowVersion](https://help.aliyun.com/document_detail/2937203.html) API to publish the version.
       * - If your flow contains components that incur costs, such as message sending or function invocations, make sure that you understand the billing methods and pricing for these products before you trigger the flow.
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
       * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request UpdateAccountWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAccountWebhookResponse
       */
      Models::UpdateAccountWebhookResponse updateAccountWebhookWithOptions(const Models::UpdateAccountWebhookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the callback URL of an account.
       *
       * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       *
       * @param request UpdateAccountWebhookRequest
       * @return UpdateAccountWebhookResponse
       */
      Models::UpdateAccountWebhookResponse updateAccountWebhook(const Models::UpdateAccountWebhookRequest &request);

      /**
       * @summary Modifies a Viber application.
       *
       * @param tmpReq UpdateAuditRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuditRequestResponse
       */
      Models::UpdateAuditRequestResponse updateAuditRequestWithOptions(const Models::UpdateAuditRequestRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a Viber application.
       *
       * @param request UpdateAuditRequestRequest
       * @return UpdateAuditRequestResponse
       */
      Models::UpdateAuditRequestResponse updateAuditRequest(const Models::UpdateAuditRequestRequest &request);

      /**
       * @summary 获取流程
       *
       * @param tmpReq UpdateChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChatFlowResponse
       */
      Models::UpdateChatFlowResponse updateChatFlowWithOptions(const Models::UpdateChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流程
       *
       * @param request UpdateChatFlowRequest
       * @return UpdateChatFlowResponse
       */
      Models::UpdateChatFlowResponse updateChatFlow(const Models::UpdateChatFlowRequest &request);

      /**
       * @summary 修改chatFlow日志设置
       *
       * @param request UpdateChatFlowLogSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChatFlowLogSettingResponse
       */
      Models::UpdateChatFlowLogSettingResponse updateChatFlowLogSettingWithOptions(const Models::UpdateChatFlowLogSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改chatFlow日志设置
       *
       * @param request UpdateChatFlowLogSettingRequest
       * @return UpdateChatFlowLogSettingResponse
       */
      Models::UpdateChatFlowLogSettingResponse updateChatFlowLogSetting(const Models::UpdateChatFlowLogSettingRequest &request);

      /**
       * @summary Updates the information for an Instant Messaging (IM) group.
       *
       * @description >Notice: 
       * This operation is in beta testing for Meta. Contact your account manager to be added to the allowlist before using this endpoint.
       * - Before you call this operation, ensure that you have created an IM group.
       * - If you do not have an IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) operation to create one.
       *
       * @param request UpdateChatGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChatGroupResponse
       */
      Models::UpdateChatGroupResponse updateChatGroupWithOptions(const Models::UpdateChatGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information for an Instant Messaging (IM) group.
       *
       * @description >Notice: 
       * This operation is in beta testing for Meta. Contact your account manager to be added to the allowlist before using this endpoint.
       * - Before you call this operation, ensure that you have created an IM group.
       * - If you do not have an IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) operation to create one.
       *
       * @param request UpdateChatGroupRequest
       * @return UpdateChatGroupResponse
       */
      Models::UpdateChatGroupResponse updateChatGroup(const Models::UpdateChatGroupRequest &request);

      /**
       * @summary Updates the commerce settings for a phone number.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request UpdateCommerceSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCommerceSettingResponse
       */
      Models::UpdateCommerceSettingResponse updateCommerceSettingWithOptions(const Models::UpdateCommerceSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the commerce settings for a phone number.
       *
       * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
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
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       * This operation retrieves data directly from Meta. Meta imposes its own rate limits on the total number of calls. Stay within the specified limit.
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
       * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
       * This operation retrieves data directly from Meta. Meta imposes its own rate limits on the total number of calls. Stay within the specified limit.
       *
       * @param request UpdateConversationalAutomationRequest
       * @return UpdateConversationalAutomationResponse
       */
      Models::UpdateConversationalAutomationResponse updateConversationalAutomation(const Models::UpdateConversationalAutomationRequest &request);

      /**
       * @summary Updates the content of a WhatsApp flow by using a JSON definition.
       *
       * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param request UpdateFlowJSONAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowJSONAssetResponse
       */
      Models::UpdateFlowJSONAssetResponse updateFlowJSONAssetWithOptions(const Models::UpdateFlowJSONAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the content of a WhatsApp flow by using a JSON definition.
       *
       * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
       *
       * @param request UpdateFlowJSONAssetRequest
       * @return UpdateFlowJSONAssetResponse
       */
      Models::UpdateFlowJSONAssetResponse updateFlowJSONAsset(const Models::UpdateFlowJSONAssetRequest &request);

      /**
       * @summary 更新流程版本，用于画布更新流程dsl
       *
       * @param tmpReq UpdateFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowVersionResponse
       */
      Models::UpdateFlowVersionResponse updateFlowVersionWithOptions(const Models::UpdateFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新流程版本，用于画布更新流程dsl
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
       * @summary Updates the specified instance.
       *
       * @param request UpdateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the specified instance.
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
       * @summary Updates the encryption key for a phone number.
       *
       * @description - Before you call this API, you must add and verify a phone number for your WhatsApp Business Account (WABA).
       * - If you do not have a phone number for your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) APIs to obtain a verification code and verifythe phone number.
       * #### QPS limit
       * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request UpdatePhoneEncryptionPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePhoneEncryptionPublicKeyResponse
       */
      Models::UpdatePhoneEncryptionPublicKeyResponse updatePhoneEncryptionPublicKeyWithOptions(const Models::UpdatePhoneEncryptionPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the encryption key for a phone number.
       *
       * @description - Before you call this API, you must add and verify a phone number for your WhatsApp Business Account (WABA).
       * - If you do not have a phone number for your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) APIs to obtain a verification code and verifythe phone number.
       * #### QPS limit
       * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request UpdatePhoneEncryptionPublicKeyRequest
       * @return UpdatePhoneEncryptionPublicKeyResponse
       */
      Models::UpdatePhoneEncryptionPublicKeyResponse updatePhoneEncryptionPublicKey(const Models::UpdatePhoneEncryptionPublicKeyRequest &request);

      /**
       * @summary Updates a message QR code.
       *
       * @description - After you update a message QR code, users can no longer scan the original QR code to start a chat with the associated business phone number. Use this operation with caution.
       * - If you have not created a message QR code, call the [CreatePhoneMessageQrdl](https://help.aliyun.com/document_detail/2638749.html) API to create one.
       * #### QPS limit
       * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request UpdatePhoneMessageQrdlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePhoneMessageQrdlResponse
       */
      Models::UpdatePhoneMessageQrdlResponse updatePhoneMessageQrdlWithOptions(const Models::UpdatePhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a message QR code.
       *
       * @description - After you update a message QR code, users can no longer scan the original QR code to start a chat with the associated business phone number. Use this operation with caution.
       * - If you have not created a message QR code, call the [CreatePhoneMessageQrdl](https://help.aliyun.com/document_detail/2638749.html) API to create one.
       * #### QPS limit
       * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
       *
       * @param request UpdatePhoneMessageQrdlRequest
       * @return UpdatePhoneMessageQrdlResponse
       */
      Models::UpdatePhoneMessageQrdlResponse updatePhoneMessageQrdl(const Models::UpdatePhoneMessageQrdlRequest &request);

      /**
       * @summary The HTTP status code returned.
       * \\\\* A value of OK indicates that the call is successful.
       * \\\\* Other values indicate that the call fails. For more information, see \\[Error codes]\\\\(~~196974~~).
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
       * \\\\* A value of OK indicates that the call is successful.
       * \\\\* Other values indicate that the call fails. For more information, see \\[Error codes]\\\\(~~196974~~).
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

      /**
       * @summary Places, answers, or ends WhatsApp voice calls.
       *
       * @param tmpReq WhatsappCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WhatsappCallResponse
       */
      Models::WhatsappCallResponse whatsappCallWithOptions(const Models::WhatsappCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Places, answers, or ends WhatsApp voice calls.
       *
       * @param request WhatsappCallRequest
       * @return WhatsappCallResponse
       */
      Models::WhatsappCallResponse whatsappCall(const Models::WhatsappCallRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
