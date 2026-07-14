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
       * @summary Submits a request to change the destination, resume, or pause.
       *
       * @param tmpReq AddAddressRecoverSuspendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAddressRecoverSuspendResponse
       */
      Models::AddAddressRecoverSuspendResponse addAddressRecoverSuspendWithOptions(const Models::AddAddressRecoverSuspendRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a request to change the destination, resume, or pause.
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
       * @summary Adds an invite link for an IM group.
       *
       * @description >Notice: Adding IM group invite links through the API is a Meta beta feature. Contact your account manager to apply for access.
       * - Before calling this operation, make sure that you have a successfully created IM group.
       * - If you do not have a successfully created IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) operation to create one.
       * - After you call this operation to add an IM group invite link, you can use the link to invite members to join the IM group.
       * - Currently, members can join an IM group only through an invite link.
       * - The maximum number of members in a WhatsApp group is 8.
       *
       * @param request AddChatGroupInviteLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddChatGroupInviteLinkResponse
       */
      Models::AddChatGroupInviteLinkResponse addChatGroupInviteLinkWithOptions(const Models::AddChatGroupInviteLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an invite link for an IM group.
       *
       * @description >Notice: Adding IM group invite links through the API is a Meta beta feature. Contact your account manager to apply for access.
       * - Before calling this operation, make sure that you have a successfully created IM group.
       * - If you do not have a successfully created IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) operation to create one.
       * - After you call this operation to add an IM group invite link, you can use the link to invite members to join the IM group.
       * - Currently, members can join an IM group only through an invite link.
       * - The maximum number of members in a WhatsApp group is 8.
       *
       * @param request AddChatGroupInviteLinkRequest
       * @return AddChatGroupInviteLinkResponse
       */
      Models::AddChatGroupInviteLinkResponse addChatGroupInviteLink(const Models::AddChatGroupInviteLinkRequest &request);

      /**
       * @summary Adds a phone number to a WABA.
       *
       * @description The China site (Chinese mainland) QPS limit for a single user on this API is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddChatappPhoneNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddChatappPhoneNumberResponse
       */
      Models::AddChatappPhoneNumberResponse addChatappPhoneNumberWithOptions(const Models::AddChatappPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a phone number to a WABA.
       *
       * @description The China site (Chinese mainland) QPS limit for a single user on this API is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddChatappPhoneNumberRequest
       * @return AddChatappPhoneNumberResponse
       */
      Models::AddChatappPhoneNumberResponse addChatappPhoneNumber(const Models::AddChatappPhoneNumberRequest &request);

      /**
       * @summary Edits a contact - add contact.
       *
       * @param tmpReq AddContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddContactsResponse
       */
      Models::AddContactsResponse addContactsWithOptions(const Models::AddContactsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a contact - add contact.
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
       * @summary Adds a group.
       *
       * @param tmpReq AddGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGroupResponse
       */
      Models::AddGroupResponse addGroupWithOptions(const Models::AddGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a group.
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
       * @summary Archives a Chat App Message Service template. Currently, only WhatsApp templates support archiving.
       *
       * @param tmpReq ArchiveChatappTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ArchiveChatappTemplateResponse
       */
      Models::ArchiveChatappTemplateResponse archiveChatappTemplateWithOptions(const Models::ArchiveChatappTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Archives a Chat App Message Service template. Currently, only WhatsApp templates support archiving.
       *
       * @param request ArchiveChatappTemplateRequest
       * @return ArchiveChatappTemplateResponse
       */
      Models::ArchiveChatappTemplateResponse archiveChatappTemplate(const Models::ArchiveChatappTemplateRequest &request);

      /**
       * @summary Associates a DM account.
       *
       * @param tmpReq BindDmAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindDmAccountResponse
       */
      Models::BindDmAccountResponse bindDmAccountWithOptions(const Models::BindDmAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a DM account.
       *
       * @param request BindDmAccountRequest
       * @return BindDmAccountResponse
       */
      Models::BindDmAccountResponse bindDmAccount(const Models::BindDmAccountRequest &request);

      /**
       * @summary Associates a page with an instance.
       *
       * @param request BindInstagramPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindInstagramPageResponse
       */
      Models::BindInstagramPageResponse bindInstagramPageWithOptions(const Models::BindInstagramPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a page with an instance.
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
       * @summary Binds a WhatsApp Business Account (WABA) through the northbound interface.
       *
       * @description The per-user QPS limit for this API is 10 calls per second. If this limit is exceeded, API calls will be throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request ChatappBindWabaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappBindWabaResponse
       */
      Models::ChatappBindWabaResponse chatappBindWabaWithOptions(const Models::ChatappBindWabaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a WhatsApp Business Account (WABA) through the northbound interface.
       *
       * @description The per-user QPS limit for this API is 10 calls per second. If this limit is exceeded, API calls will be throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request ChatappBindWabaRequest
       * @return ChatappBindWabaResponse
       */
      Models::ChatappBindWabaResponse chatappBindWaba(const Models::ChatappBindWabaRequest &request);

      /**
       * @summary Migrates a phone number registration.
       *
       * @description The queries per second (QPS) limit for this operation is 10 calls per second per user. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request ChatappMigrationRegisterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappMigrationRegisterResponse
       */
      Models::ChatappMigrationRegisterResponse chatappMigrationRegisterWithOptions(const Models::ChatappMigrationRegisterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates a phone number registration.
       *
       * @description The queries per second (QPS) limit for this operation is 10 calls per second per user. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request ChatappMigrationRegisterRequest
       * @return ChatappMigrationRegisterResponse
       */
      Models::ChatappMigrationRegisterResponse chatappMigrationRegister(const Models::ChatappMigrationRegisterRequest &request);

      /**
       * @summary Verifies a phone number for migration.
       *
       * @description The China Message Service API has a single-user QPS limit of 10 calls per second. If this limit is exceeded, throttling is triggered, which may affect your business. Manage your calls appropriately.
       *
       * @param request ChatappMigrationVerifiedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappMigrationVerifiedResponse
       */
      Models::ChatappMigrationVerifiedResponse chatappMigrationVerifiedWithOptions(const Models::ChatappMigrationVerifiedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies a phone number for migration.
       *
       * @description The China Message Service API has a single-user QPS limit of 10 calls per second. If this limit is exceeded, throttling is triggered, which may affect your business. Manage your calls appropriately.
       *
       * @param request ChatappMigrationVerifiedRequest
       * @return ChatappMigrationVerifiedResponse
       */
      Models::ChatappMigrationVerifiedResponse chatappMigrationVerified(const Models::ChatappMigrationVerifiedRequest &request);

      /**
       * @summary Deregisters a phone number from WABA.
       *
       * @description The China Mainland site (Chinese) QPS limit for a single user for this API is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Manage your calls appropriately.
       *
       * @param request ChatappPhoneNumberDeregisterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappPhoneNumberDeregisterResponse
       */
      Models::ChatappPhoneNumberDeregisterResponse chatappPhoneNumberDeregisterWithOptions(const Models::ChatappPhoneNumberDeregisterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deregisters a phone number from WABA.
       *
       * @description The China Mainland site (Chinese) QPS limit for a single user for this API is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Manage your calls appropriately.
       *
       * @param request ChatappPhoneNumberDeregisterRequest
       * @return ChatappPhoneNumberDeregisterResponse
       */
      Models::ChatappPhoneNumberDeregisterResponse chatappPhoneNumberDeregister(const Models::ChatappPhoneNumberDeregisterRequest &request);

      /**
       * @summary Registers a phone number through the northbound interface.
       *
       * @description The China Mainland Messaging API has a single-user QPS limit of 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ChatappPhoneNumberRegisterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappPhoneNumberRegisterResponse
       */
      Models::ChatappPhoneNumberRegisterResponse chatappPhoneNumberRegisterWithOptions(const Models::ChatappPhoneNumberRegisterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a phone number through the northbound interface.
       *
       * @description The China Mainland Messaging API has a single-user QPS limit of 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ChatappPhoneNumberRegisterRequest
       * @return ChatappPhoneNumberRegisterResponse
       */
      Models::ChatappPhoneNumberRegisterResponse chatappPhoneNumberRegister(const Models::ChatappPhoneNumberRegisterRequest &request);

      /**
       * @summary Synchronizes phone number information.
       *
       * @description The China-specific QPS limit for this API is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request ChatappSyncPhoneNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappSyncPhoneNumberResponse
       */
      Models::ChatappSyncPhoneNumberResponse chatappSyncPhoneNumberWithOptions(const Models::ChatappSyncPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes phone number information.
       *
       * @description The China-specific QPS limit for this API is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request ChatappSyncPhoneNumberRequest
       * @return ChatappSyncPhoneNumberResponse
       */
      Models::ChatappSyncPhoneNumberResponse chatappSyncPhoneNumber(const Models::ChatappSyncPhoneNumberRequest &request);

      /**
       * @summary Verifies a verification code and registers through the northbound interface.
       *
       * @description The queries per second (QPS) limit for this API is 10 calls per second per user. If this limit is exceeded, API calls are throttled, which may affect your business. Call this API appropriately.
       *
       * @param request ChatappVerifyAndRegisterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatappVerifyAndRegisterResponse
       */
      Models::ChatappVerifyAndRegisterResponse chatappVerifyAndRegisterWithOptions(const Models::ChatappVerifyAndRegisterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies a verification code and registers through the northbound interface.
       *
       * @description The queries per second (QPS) limit for this API is 10 calls per second per user. If this limit is exceeded, API calls are throttled, which may affect your business. Call this API appropriately.
       *
       * @param request ChatappVerifyAndRegisterRequest
       * @return ChatappVerifyAndRegisterResponse
       */
      Models::ChatappVerifyAndRegisterResponse chatappVerifyAndRegister(const Models::ChatappVerifyAndRegisterRequest &request);

      /**
       * @summary Validates the content of a WhatsApp direct-send template.
       *
       * @param tmpReq CheckDirectSendMessageSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDirectSendMessageSampleResponse
       */
      Models::CheckDirectSendMessageSampleResponse checkDirectSendMessageSampleWithOptions(const Models::CheckDirectSendMessageSampleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates the content of a WhatsApp direct-send template.
       *
       * @param request CheckDirectSendMessageSampleRequest
       * @return CheckDirectSendMessageSampleResponse
       */
      Models::CheckDirectSendMessageSampleResponse checkDirectSendMessageSample(const Models::CheckDirectSendMessageSampleRequest &request);

      /**
       * @summary Copies a template.
       *
       * @param request CopyTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyTemplateResponse
       */
      Models::CopyTemplateResponse copyTemplateWithOptions(const Models::CopyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies a template.
       *
       * @param request CopyTemplateRequest
       * @return CopyTemplateResponse
       */
      Models::CopyTemplateResponse copyTemplate(const Models::CopyTemplateRequest &request);

      /**
       * @summary Creates a flow.
       *
       * @description - This API operation creates a flow. You can also create a flow manually in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) interface.
       * - After you create a flow, you can orchestrate the canvas. For more information, see [Flow Editor components](https://help.aliyun.com/document_detail/2836818.html).
       *
       * @param tmpReq CreateChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatFlowResponse
       */
      Models::CreateChatFlowResponse createChatFlowWithOptions(const Models::CreateChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a flow.
       *
       * @description - This API operation creates a flow. You can also create a flow manually in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) interface.
       * - After you create a flow, you can orchestrate the canvas. For more information, see [Flow Editor components](https://help.aliyun.com/document_detail/2836818.html).
       *
       * @param request CreateChatFlowRequest
       * @return CreateChatFlowResponse
       */
      Models::CreateChatFlowResponse createChatFlow(const Models::CreateChatFlowRequest &request);

      /**
       * @summary Creates and imports a flow.
       *
       * @description - You can call this operation to create and import a flow. You can also create and import a flow manually in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - Before you call this operation, ensure that you have exported the Domain-Specific Language (DSL) data for the flow.
       * - If you do not have the exported DSL data for a flow, go to the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder). Click a flow name to open the canvas. Arrange the components on the canvas, save the flow, and then export it as a JSON data file.
       *
       * @param tmpReq CreateChatFlowByImportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatFlowByImportResponse
       */
      Models::CreateChatFlowByImportResponse createChatFlowByImportWithOptions(const Models::CreateChatFlowByImportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and imports a flow.
       *
       * @description - You can call this operation to create and import a flow. You can also create and import a flow manually in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - Before you call this operation, ensure that you have exported the Domain-Specific Language (DSL) data for the flow.
       * - If you do not have the exported DSL data for a flow, go to the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder). Click a flow name to open the canvas. Arrange the components on the canvas, save the flow, and then export it as a JSON data file.
       *
       * @param request CreateChatFlowByImportRequest
       * @return CreateChatFlowByImportResponse
       */
      Models::CreateChatFlowByImportResponse createChatFlowByImport(const Models::CreateChatFlowByImportRequest &request);

      /**
       * @summary Creates log settings for a flow.
       *
       * @description - To update the log settings for a flow using the API, you must first create the log settings. After the settings are created, call the [ReadChatFlowLogSetting](https://help.aliyun.com/document_detail/2937212.html) operation to view the log settings. Then, call the [UpdateChatFlowLogSetting](https://help.aliyun.com/document_detail/2937210.html) operation to update the settings.
       * - If you do not need to update the log settings using the API, you can manually update the log settings on the Log page. In the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder), choose **Settings** > **Log**.
       * - Before you call this operation, make sure that you have successfully created a flow.
       * - If you do not have a successfully created flow, you can create one manually in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) or by calling the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) operation.
       *
       * @param request CreateChatFlowLogSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatFlowLogSettingResponse
       */
      Models::CreateChatFlowLogSettingResponse createChatFlowLogSettingWithOptions(const Models::CreateChatFlowLogSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates log settings for a flow.
       *
       * @description - To update the log settings for a flow using the API, you must first create the log settings. After the settings are created, call the [ReadChatFlowLogSetting](https://help.aliyun.com/document_detail/2937212.html) operation to view the log settings. Then, call the [UpdateChatFlowLogSetting](https://help.aliyun.com/document_detail/2937210.html) operation to update the settings.
       * - If you do not need to update the log settings using the API, you can manually update the log settings on the Log page. In the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder), choose **Settings** > **Log**.
       * - Before you call this operation, make sure that you have successfully created a flow.
       * - If you do not have a successfully created flow, you can create one manually in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) or by calling the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) operation.
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
       * @summary Creates a Flow.
       *
       * @description The China Message Service (Chinese SMS) API has a single-user QPS limit of 5 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param tmpReq CreateFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlowWithOptions(const Models::CreateFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Flow.
       *
       * @description The China Message Service (Chinese SMS) API has a single-user QPS limit of 5 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateFlowRequest
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlow(const Models::CreateFlowRequest &request);

      /**
       * @summary Creates a new version of a flow by copying an existing version.
       *
       * @description - You can call this operation to create a new flow version. You can also manually copy a flow version from the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder). To do this, click a flow name to open the orchestration canvas and then copy the version.
       * - Before you call this operation, make sure that you have created a flow.
       * - If you have not created a flow, you can create one manually in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) or by calling the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) operation.
       *
       * @param tmpReq CreateFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowVersionResponse
       */
      Models::CreateFlowVersionResponse createFlowVersionWithOptions(const Models::CreateFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new version of a flow by copying an existing version.
       *
       * @description - You can call this operation to create a new flow version. You can also manually copy a flow version from the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder). To do this, click a flow name to open the orchestration canvas and then copy the version.
       * - Before you call this operation, make sure that you have created a flow.
       * - If you have not created a flow, you can create one manually in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) or by calling the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) operation.
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
       * @description - After the QR code is created, users can scan it with WhatsApp to quickly open the corresponding business phone number.
       * - Before calling this operation, make sure that you have a successfully created WhatsApp message channel.
       * - If you do not have a successfully created WhatsApp message channel, manually create one on the
       * <props="china">[Channel Management](https://chatapp.console.aliyun.com/ChannelsManagement)
       * <props="intl">[Channel Management](https://chatapp.console.alibabacloud.com/CustomerList)
       * page.
       * #### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreatePhoneMessageQrdlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhoneMessageQrdlResponse
       */
      Models::CreatePhoneMessageQrdlResponse createPhoneMessageQrdlWithOptions(const Models::CreatePhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a message QR code.
       *
       * @description - After the QR code is created, users can scan it with WhatsApp to quickly open the corresponding business phone number.
       * - Before calling this operation, make sure that you have a successfully created WhatsApp message channel.
       * - If you do not have a successfully created WhatsApp message channel, manually create one on the
       * <props="china">[Channel Management](https://chatapp.console.aliyun.com/ChannelsManagement)
       * <props="intl">[Channel Management](https://chatapp.console.alibabacloud.com/CustomerList)
       * page.
       * #### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
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
       * @summary Deletes a flow.
       *
       * @description - You can call this operation to delete a flow. You can also manually delete a flow in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - Before you delete a flow, make sure its status is Unpublished.
       * - Deleted flows cannot be recovered. Proceed with caution.
       *
       * @param tmpReq DeleteChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatFlowResponse
       */
      Models::DeleteChatFlowResponse deleteChatFlowWithOptions(const Models::DeleteChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a flow.
       *
       * @description - You can call this operation to delete a flow. You can also manually delete a flow in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - Before you delete a flow, make sure its status is Unpublished.
       * - Deleted flows cannot be recovered. Proceed with caution.
       *
       * @param request DeleteChatFlowRequest
       * @return DeleteChatFlowResponse
       */
      Models::DeleteChatFlowResponse deleteChatFlow(const Models::DeleteChatFlowRequest &request);

      /**
       * @summary Deletes a successfully created IM group.
       *
       * @description >Notice: The API-based IM group deletion feature is a Meta beta feature. Contact your account manager to apply for access.
       * - Before calling this operation, make sure that you have a successfully created IM group.
       * - If you do not have a successfully created IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) operation to create one.
       * - A deleted IM group cannot be recovered. Proceed with caution.
       *
       * @param request DeleteChatGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatGroupResponse
       */
      Models::DeleteChatGroupResponse deleteChatGroupWithOptions(const Models::DeleteChatGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a successfully created IM group.
       *
       * @description >Notice: The API-based IM group deletion feature is a Meta beta feature. Contact your account manager to apply for access.
       * - Before calling this operation, make sure that you have a successfully created IM group.
       * - If you do not have a successfully created IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) operation to create one.
       * - A deleted IM group cannot be recovered. Proceed with caution.
       *
       * @param request DeleteChatGroupRequest
       * @return DeleteChatGroupResponse
       */
      Models::DeleteChatGroupResponse deleteChatGroup(const Models::DeleteChatGroupRequest &request);

      /**
       * @summary Deletes an IM group invitation link.
       *
       * @description >Notice: The ability to delete IM group invitation links through the API is a Meta beta feature. Contact your account manager to request access.
       * - Before calling this operation, make sure that the IM group you created already has an IM group invitation link added.
       * - If you do not have an existing IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations to create an IM group and add an invitation link.
       * - After you delete an IM group invitation link, the IM group can no longer invite members to join. Proceed with caution.
       *
       * @param request DeleteChatGroupInviteLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatGroupInviteLinkResponse
       */
      Models::DeleteChatGroupInviteLinkResponse deleteChatGroupInviteLinkWithOptions(const Models::DeleteChatGroupInviteLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IM group invitation link.
       *
       * @description >Notice: The ability to delete IM group invitation links through the API is a Meta beta feature. Contact your account manager to request access.
       * - Before calling this operation, make sure that the IM group you created already has an IM group invitation link added.
       * - If you do not have an existing IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations to create an IM group and add an invitation link.
       * - After you delete an IM group invitation link, the IM group can no longer invite members to join. Proceed with caution.
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
       * @summary Deletes contacts by selecting and removing them.
       *
       * @param request DeleteContactsByIdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactsByIdsResponse
       */
      Models::DeleteContactsByIdsResponse deleteContactsByIdsWithOptions(const Models::DeleteContactsByIdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes contacts by selecting and removing them.
       *
       * @param request DeleteContactsByIdsRequest
       * @return DeleteContactsByIdsResponse
       */
      Models::DeleteContactsByIdsResponse deleteContactsByIds(const Models::DeleteContactsByIdsRequest &request);

      /**
       * @summary Deletes a Flow (only Flows in DRAFT status can be deleted).
       *
       * @description The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlowWithOptions(const Models::DeleteFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Flow (only Flows in DRAFT status can be deleted).
       *
       * @description The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteFlowRequest
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlow(const Models::DeleteFlowRequest &request);

      /**
       * @summary Deletes a flow version.
       *
       * @description - You can call this operation to delete a flow version, or click a flow name in the [flow editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) to go to the canvas orchestration page and manually delete the flow version.
       * - Before calling this operation, make sure that the flow version is in the offline state and that at least two flow versions exist.
       * - If the flow version is in the online state, click the flow name in the [flow editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) to go to the canvas orchestration page and manually take the flow version offline, or call the [OfflineFlowVersion](https://help.aliyun.com/document_detail/2937198.html) operation to take the flow version offline.
       * - After a flow version is deleted, the canvas flow that you orchestrated cannot be recovered. Proceed with caution.
       *
       * @param tmpReq DeleteFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowVersionResponse
       */
      Models::DeleteFlowVersionResponse deleteFlowVersionWithOptions(const Models::DeleteFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a flow version.
       *
       * @description - You can call this operation to delete a flow version, or click a flow name in the [flow editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) to go to the canvas orchestration page and manually delete the flow version.
       * - Before calling this operation, make sure that the flow version is in the offline state and that at least two flow versions exist.
       * - If the flow version is in the online state, click the flow name in the [flow editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) to go to the canvas orchestration page and manually take the flow version offline, or call the [OfflineFlowVersion](https://help.aliyun.com/document_detail/2937198.html) operation to take the flow version offline.
       * - After a flow version is deleted, the canvas flow that you orchestrated cannot be recovered. Proceed with caution.
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
       * @summary Deletes a marketing campaign.
       *
       * @param request DeleteMarketingFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMarketingFlowResponse
       */
      Models::DeleteMarketingFlowResponse deleteMarketingFlowWithOptions(const Models::DeleteMarketingFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a marketing campaign.
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
       * @description - After you delete a message QR code, users can no longer open the corresponding business phone number by scanning the original QR code. Proceed with caution.
       * - Before calling this operation, make sure that you have a successfully created message QR code.
       * - If you do not have a successfully created message QR code, call the [CreatePhoneMessageQrdl](https://help.aliyun.com/document_detail/2638749.html) operation to create one first.
       * #### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request DeletePhoneMessageQrdlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePhoneMessageQrdlResponse
       */
      Models::DeletePhoneMessageQrdlResponse deletePhoneMessageQrdlWithOptions(const Models::DeletePhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a message QR code.
       *
       * @description - After you delete a message QR code, users can no longer open the corresponding business phone number by scanning the original QR code. Proceed with caution.
       * - Before calling this operation, make sure that you have a successfully created message QR code.
       * - If you do not have a successfully created message QR code, call the [CreatePhoneMessageQrdl](https://help.aliyun.com/document_detail/2638749.html) operation to create one first.
       * #### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request DeletePhoneMessageQrdlRequest
       * @return DeletePhoneMessageQrdlResponse
       */
      Models::DeletePhoneMessageQrdlResponse deletePhoneMessageQrdl(const Models::DeletePhoneMessageQrdlRequest &request);

      /**
       * @summary Deletes the WhatsApp user name for a business phone number.
       *
       * @param request DeleteWhatsappUserNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWhatsappUserNameResponse
       */
      Models::DeleteWhatsappUserNameResponse deleteWhatsappUserNameWithOptions(const Models::DeleteWhatsappUserNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the WhatsApp user name for a business phone number.
       *
       * @param request DeleteWhatsappUserNameRequest
       * @return DeleteWhatsappUserNameResponse
       */
      Models::DeleteWhatsappUserNameResponse deleteWhatsappUserName(const Models::DeleteWhatsappUserNameRequest &request);

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
       * @summary Enables WhatsApp-related metric collection.
       *
       * @description - Before you retrieve metrics for the message sending volume of WhatsApp-type channels or metrics related to Marketing-type templates by calling API operations, call this operation to enable WhatsApp ROI metric collection.
       * - After you enable WhatsApp ROI metric collection, at least one day is required before metric data becomes available. Message sending volume metrics and Marketing-type template metrics for messages sent before the feature is enabled are not collected.
       * - After you enable WhatsApp ROI metric collection, you can call the [GetChatappPhoneNumberMetric](https://help.aliyun.com/document_detail/2557788.html) operation to query the sending volume metrics of a phone number, or call the [GetChatappTemplateMetric](https://help.aliyun.com/document_detail/2557790.html) operation to query metrics related to Marketing-type templates.
       * ### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request EnableWhatsappROIMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableWhatsappROIMetricResponse
       */
      Models::EnableWhatsappROIMetricResponse enableWhatsappROIMetricWithOptions(const Models::EnableWhatsappROIMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables WhatsApp-related metric collection.
       *
       * @description - Before you retrieve metrics for the message sending volume of WhatsApp-type channels or metrics related to Marketing-type templates by calling API operations, call this operation to enable WhatsApp ROI metric collection.
       * - After you enable WhatsApp ROI metric collection, at least one day is required before metric data becomes available. Message sending volume metrics and Marketing-type template metrics for messages sent before the feature is enabled are not collected.
       * - After you enable WhatsApp ROI metric collection, you can call the [GetChatappPhoneNumberMetric](https://help.aliyun.com/document_detail/2557788.html) operation to query the sending volume metrics of a phone number, or call the [GetChatappTemplateMetric](https://help.aliyun.com/document_detail/2557790.html) operation to query metrics related to Marketing-type templates.
       * ### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request EnableWhatsappROIMetricRequest
       * @return EnableWhatsappROIMetricResponse
       */
      Models::EnableWhatsappROIMetricResponse enableWhatsappROIMetric(const Models::EnableWhatsappROIMetricRequest &request);

      /**
       * @summary Attaches a phone number or a business account ID to a flow.
       *
       * @description - Call this API operation to attach a phone number or a business account ID to a flow. You can also manually attach them on the **Settings** page in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - Before you call this API operation, make sure that you have created a flow and a message channel of the corresponding type.
       * - For a WhatsApp channel, you must have completed [WhatsApp Business Account (WABA) registration and binding](https://help.aliyun.com/document_detail/172335.html) and [added a phone number](https://help.aliyun.com/document_detail/2656131.html).
       * - For a Messenger channel, you must have [connected a public homepage account](https://help.aliyun.com/document_detail/2837713.html).
       * - For an Instagram channel, you must have [connected a professional account](https://help.aliyun.com/document_detail/2837720.html).
       * <props="intl">
       * - For a Viber channel, you must have [requested a service number](https://help.aliyun.com/document_detail/2807995.html).
       *
       * @param tmpReq FlowBindPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlowBindPhoneResponse
       */
      Models::FlowBindPhoneResponse flowBindPhoneWithOptions(const Models::FlowBindPhoneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a phone number or a business account ID to a flow.
       *
       * @description - Call this API operation to attach a phone number or a business account ID to a flow. You can also manually attach them on the **Settings** page in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - Before you call this API operation, make sure that you have created a flow and a message channel of the corresponding type.
       * - For a WhatsApp channel, you must have completed [WhatsApp Business Account (WABA) registration and binding](https://help.aliyun.com/document_detail/172335.html) and [added a phone number](https://help.aliyun.com/document_detail/2656131.html).
       * - For a Messenger channel, you must have [connected a public homepage account](https://help.aliyun.com/document_detail/2837713.html).
       * - For an Instagram channel, you must have [connected a professional account](https://help.aliyun.com/document_detail/2837720.html).
       * <props="intl">
       * - For a Viber channel, you must have [requested a service number](https://help.aliyun.com/document_detail/2807995.html).
       *
       * @param request FlowBindPhoneRequest
       * @return FlowBindPhoneResponse
       */
      Models::FlowBindPhoneResponse flowBindPhone(const Models::FlowBindPhoneRequest &request);

      /**
       * @summary Rebinds a phone number or merchant account ID to a flow.
       *
       * @description - You can call this operation to rebind a phone number or merchant account ID to a flow that already has a binding. You can also manually rebind on the [**Flow Builder**](https://chatapp.console.aliyun.com/ChatFlowBuilder) > **Settings** page.
       * - Before calling this operation, make sure that your flow already has a phone number or merchant account ID bound to it.
       * - If you are binding a phone number or merchant account ID to a flow for the first time, use the [FlowBindPhone](https://help.aliyun.com/document_detail/2937190.html) operation.
       *
       * @param tmpReq FlowRebindPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlowRebindPhoneResponse
       */
      Models::FlowRebindPhoneResponse flowRebindPhoneWithOptions(const Models::FlowRebindPhoneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebinds a phone number or merchant account ID to a flow.
       *
       * @description - You can call this operation to rebind a phone number or merchant account ID to a flow that already has a binding. You can also manually rebind on the [**Flow Builder**](https://chatapp.console.aliyun.com/ChatFlowBuilder) > **Settings** page.
       * - Before calling this operation, make sure that your flow already has a phone number or merchant account ID bound to it.
       * - If you are binding a phone number or merchant account ID to a flow for the first time, use the [FlowBindPhone](https://help.aliyun.com/document_detail/2937190.html) operation.
       *
       * @param request FlowRebindPhoneRequest
       * @return FlowRebindPhoneResponse
       */
      Models::FlowRebindPhoneResponse flowRebindPhone(const Models::FlowRebindPhoneRequest &request);

      /**
       * @summary Unbinds a phone number or business account ID from a flow.
       *
       * @description - Before you call this operation, ensure that the flow is unpublished. If the flow is published, you can unpublish it manually in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) by clicking the flow name to open the orchestration canvas. Alternatively, you can call the [OfflineFlowVersion](https://help.aliyun.com/document_detail/2937198.html) operation to unpublish the flow.
       * - You can call this operation to unbind a phone number or business account ID from a flow. You can also perform this action manually on the **Settings** page in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - Before you call this operation, ensure that a phone number or business account ID is bound to the flow.
       * - If no phone number or business account ID is bound to the flow, you can bind one manually on the **Settings** page in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder) or call the [FlowBindPhone](https://help.aliyun.com/document_detail/2937190.html) operation.
       * - After a phone number or business account ID is unbound from a flow, the flow cannot be published. You must bind a new phone number or business account ID to the flow before you can publish it.
       *
       * @param tmpReq FlowUnbindPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlowUnbindPhoneResponse
       */
      Models::FlowUnbindPhoneResponse flowUnbindPhoneWithOptions(const Models::FlowUnbindPhoneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a phone number or business account ID from a flow.
       *
       * @description - Before you call this operation, ensure that the flow is unpublished. If the flow is published, you can unpublish it manually in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) by clicking the flow name to open the orchestration canvas. Alternatively, you can call the [OfflineFlowVersion](https://help.aliyun.com/document_detail/2937198.html) operation to unpublish the flow.
       * - You can call this operation to unbind a phone number or business account ID from a flow. You can also perform this action manually on the **Settings** page in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - Before you call this operation, ensure that a phone number or business account ID is bound to the flow.
       * - If no phone number or business account ID is bound to the flow, you can bind one manually on the **Settings** page in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder) or call the [FlowBindPhone](https://help.aliyun.com/document_detail/2937190.html) operation.
       * - After a phone number or business account ID is unbound from a flow, the flow cannot be published. You must bind a new phone number or business account ID to the flow before you can publish it.
       *
       * @param request FlowUnbindPhoneRequest
       * @return FlowUnbindPhoneResponse
       */
      Models::FlowUnbindPhoneResponse flowUnbindPhone(const Models::FlowUnbindPhoneRequest &request);

      /**
       * @summary Retrieves a temporary URL.
       *
       * @param request GeneratePresignedUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GeneratePresignedUrlResponse
       */
      Models::GeneratePresignedUrlResponse generatePresignedUrlWithOptions(const Models::GeneratePresignedUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a temporary URL.
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
       * @summary Retrieves ChatFlow runtime data.
       *
       * @description - Before calling this operation, make sure that the flow you created is online and has been triggered.
       * - If your flow is not online, go to the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) page, click the flow name to open the canvas, and manually bring the flow online. Alternatively, call the [OnlineFlowVersion](https://help.aliyun.com/document_detail/2937203.html) operation to bring the flow online.
       * - For flows with a manual trigger type, call the [TriggerChatFlow](https://help.aliyun.com/document_detail/2859101.html) operation to trigger the flow, or go to the [Marketing Activity Management](https://chatapp.console.aliyun.com/MarketingActivityManagement) page and trigger the flow by associating it with a campaign.
       * - For flows with a non-manual trigger type, you do not need to manually trigger the flow. The flow is automatically triggered when a message is sent to the bound business account.
       *
       * @param tmpReq GetChatFlowMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatFlowMetricResponse
       */
      Models::GetChatFlowMetricResponse getChatFlowMetricWithOptions(const Models::GetChatFlowMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves ChatFlow runtime data.
       *
       * @description - Before calling this operation, make sure that the flow you created is online and has been triggered.
       * - If your flow is not online, go to the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) page, click the flow name to open the canvas, and manually bring the flow online. Alternatively, call the [OnlineFlowVersion](https://help.aliyun.com/document_detail/2937203.html) operation to bring the flow online.
       * - For flows with a manual trigger type, call the [TriggerChatFlow](https://help.aliyun.com/document_detail/2859101.html) operation to trigger the flow, or go to the [Marketing Activity Management](https://chatapp.console.aliyun.com/MarketingActivityManagement) page and trigger the flow by associating it with a campaign.
       * - For flows with a non-manual trigger type, you do not need to manually trigger the flow. The flow is automatically triggered when a message is sent to the bound business account.
       *
       * @param request GetChatFlowMetricRequest
       * @return GetChatFlowMetricResponse
       */
      Models::GetChatFlowMetricResponse getChatFlowMetric(const Models::GetChatFlowMetricRequest &request);

      /**
       * @summary Queries the details of a flow template.
       *
       * @description - You can call this operation to query the details of a flow template. You can also go to the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder) > **View Templates** page and click a template name to view its details.
       * - After you view the details of a template on the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder) > **View Templates** page, you can use the template to create a flow.
       *
       * @param request GetChatFlowTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatFlowTemplateResponse
       */
      Models::GetChatFlowTemplateResponse getChatFlowTemplateWithOptions(const Models::GetChatFlowTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a flow template.
       *
       * @description - You can call this operation to query the details of a flow template. You can also go to the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder) > **View Templates** page and click a template name to view its details.
       * - After you view the details of a template on the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder) > **View Templates** page, you can use the template to create a flow.
       *
       * @param request GetChatFlowTemplateRequest
       * @return GetChatFlowTemplateResponse
       */
      Models::GetChatFlowTemplateResponse getChatFlowTemplate(const Models::GetChatFlowTemplateRequest &request);

      /**
       * @summary Queries the activation status of ChatApp.
       *
       * @param request GetChatappOpenStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappOpenStatusResponse
       */
      Models::GetChatappOpenStatusResponse getChatappOpenStatusWithOptions(const Models::GetChatappOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the activation status of ChatApp.
       *
       * @param request GetChatappOpenStatusRequest
       * @return GetChatappOpenStatusResponse
       */
      Models::GetChatappOpenStatusResponse getChatappOpenStatus(const Models::GetChatappOpenStatusRequest &request);

      /**
       * @summary Queries the message sending volume metrics for a WhatsApp channel phone number.
       *
       * @description - This operation can only query the sending volume metrics for phone numbers on WhatsApp channels.
       * - You can call this operation to query phone number sending volume metrics, or view them in the <props="china">[**Channels Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channels Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Customer Statistics Daily Report** page.
       * - Before calling this operation, call the [EnableWhatsAppROIMetric](https://help.aliyun.com/document_detail/2557789.html) operation to enable WhatsApp ROI metric collection. After enabling, at least one day is required before statistics become available. Message sending volume metrics for messages sent before enabling are not collected.
       * - After enabling WhatsApp ROI metric collection, ensure that your channel has successfully sent messages. You can send messages on the <props="china">[**Channels Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channels Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Send Message** page, or by calling the [SendChatappMessage](https://help.aliyun.com/document_detail/432208.html) or [SendChatappMassMessage](https://help.aliyun.com/document_detail/447926.html) operation.
       * ### QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. Requests that exceed this limit are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request GetChatappPhoneNumberMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappPhoneNumberMetricResponse
       */
      Models::GetChatappPhoneNumberMetricResponse getChatappPhoneNumberMetricWithOptions(const Models::GetChatappPhoneNumberMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the message sending volume metrics for a WhatsApp channel phone number.
       *
       * @description - This operation can only query the sending volume metrics for phone numbers on WhatsApp channels.
       * - You can call this operation to query phone number sending volume metrics, or view them in the <props="china">[**Channels Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channels Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Customer Statistics Daily Report** page.
       * - Before calling this operation, call the [EnableWhatsAppROIMetric](https://help.aliyun.com/document_detail/2557789.html) operation to enable WhatsApp ROI metric collection. After enabling, at least one day is required before statistics become available. Message sending volume metrics for messages sent before enabling are not collected.
       * - After enabling WhatsApp ROI metric collection, ensure that your channel has successfully sent messages. You can send messages on the <props="china">[**Channels Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channels Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Send Message** page, or by calling the [SendChatappMessage](https://help.aliyun.com/document_detail/432208.html) or [SendChatappMassMessage](https://help.aliyun.com/document_detail/447926.html) operation.
       * ### QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. Requests that exceed this limit are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request GetChatappPhoneNumberMetricRequest
       * @return GetChatappPhoneNumberMetricResponse
       */
      Models::GetChatappPhoneNumberMetricResponse getChatappPhoneNumberMetric(const Models::GetChatappPhoneNumberMetricRequest &request);

      /**
       * @summary Retrieves other controls for a ChatApp phone number.
       *
       * @param request GetChatappPhoneNumberSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappPhoneNumberSettingResponse
       */
      Models::GetChatappPhoneNumberSettingResponse getChatappPhoneNumberSettingWithOptions(const Models::GetChatappPhoneNumberSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves other controls for a ChatApp phone number.
       *
       * @param request GetChatappPhoneNumberSettingRequest
       * @return GetChatappPhoneNumberSettingResponse
       */
      Models::GetChatappPhoneNumberSettingResponse getChatappPhoneNumberSetting(const Models::GetChatappPhoneNumberSettingRequest &request);

      /**
       * @summary Retrieves the details of a Chat App Message Service message template.
       *
       * @description ### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request GetChatappTemplateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappTemplateDetailResponse
       */
      Models::GetChatappTemplateDetailResponse getChatappTemplateDetailWithOptions(const Models::GetChatappTemplateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a Chat App Message Service message template.
       *
       * @description ### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request GetChatappTemplateDetailRequest
       * @return GetChatappTemplateDetailResponse
       */
      Models::GetChatappTemplateDetailResponse getChatappTemplateDetail(const Models::GetChatappTemplateDetailRequest &request);

      /**
       * @summary Retrieves metrics related to marketing-type templates.
       *
       * @description - This operation can only query metrics for marketing templates of WhatsApp channels.
       * - Before calling this operation, call the [EnableWhatsAppROIMetric](https://help.aliyun.com/document_detail/2557789.html) operation to enable WhatsApp ROI metric collection. After enabling, statistical data requires at least one day to become available. Metrics for marketing templates sent before enabling are not collected.
       * - After enabling WhatsApp ROI metric collection, make sure that the marketing templates of your created channels have successfully sent messages. You can send messages on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Send Message** page, or by calling the [SendChatappMessage](https://help.aliyun.com/document_detail/432208.html) or [SendChatappMassMessage](https://help.aliyun.com/document_detail/447926.html) operation.
       * ### QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. Requests that exceed this limit are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request GetChatappTemplateMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatappTemplateMetricResponse
       */
      Models::GetChatappTemplateMetricResponse getChatappTemplateMetricWithOptions(const Models::GetChatappTemplateMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves metrics related to marketing-type templates.
       *
       * @description - This operation can only query metrics for marketing templates of WhatsApp channels.
       * - Before calling this operation, call the [EnableWhatsAppROIMetric](https://help.aliyun.com/document_detail/2557789.html) operation to enable WhatsApp ROI metric collection. After enabling, statistical data requires at least one day to become available. Metrics for marketing templates sent before enabling are not collected.
       * - After enabling WhatsApp ROI metric collection, make sure that the marketing templates of your created channels have successfully sent messages. You can send messages on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Send Message** page, or by calling the [SendChatappMessage](https://help.aliyun.com/document_detail/432208.html) or [SendChatappMassMessage](https://help.aliyun.com/document_detail/447926.html) operation.
       * ### QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. Requests that exceed this limit are throttled, which may affect your business. Call this operation as appropriate.
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
       * @summary Queries the source site of a customer.
       *
       * @param request GetCustomerSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerSiteResponse
       */
      Models::GetCustomerSiteResponse getCustomerSiteWithOptions(const Models::GetCustomerSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the source site of a customer.
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
       * @summary Retrieves the verification code for a migration phone number.
       *
       * @description The China Message Service API has a single-user QPS limit of 10 calls per second. If this limit is exceeded, throttling is triggered, which may affect your business. Adjust your call frequency accordingly.
       *
       * @param request GetMigrationVerifyCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMigrationVerifyCodeResponse
       */
      Models::GetMigrationVerifyCodeResponse getMigrationVerifyCodeWithOptions(const Models::GetMigrationVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the verification code for a migration phone number.
       *
       * @description The China Message Service API has a single-user QPS limit of 10 calls per second. If this limit is exceeded, throttling is triggered, which may affect your business. Adjust your call frequency accordingly.
       *
       * @param request GetMigrationVerifyCodeRequest
       * @return GetMigrationVerifyCodeResponse
       */
      Models::GetMigrationVerifyCodeResponse getMigrationVerifyCode(const Models::GetMigrationVerifyCodeRequest &request);

      /**
       * @summary Obtains authorization permissions by using the code obtained from the embedded integration.
       *
       * @description The China Message Service API has a single-user QPS limit of 5 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param tmpReq GetPermissionByCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPermissionByCodeResponse
       */
      Models::GetPermissionByCodeResponse getPermissionByCodeWithOptions(const Models::GetPermissionByCodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains authorization permissions by using the code obtained from the embedded integration.
       *
       * @description The China Message Service API has a single-user QPS limit of 5 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request GetPermissionByCodeRequest
       * @return GetPermissionByCodeResponse
       */
      Models::GetPermissionByCodeResponse getPermissionByCode(const Models::GetPermissionByCodeRequest &request);

      /**
       * @summary Retrieves the encryption public key of a phone number.
       *
       * @description - Before calling this operation, make sure that a phone number has been added under your WABA and has passed phone number verification.
       * - If no phone number has been added under your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) operations to obtain a verification code and register the phone number.
       * #### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request GetPhoneEncryptionPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhoneEncryptionPublicKeyResponse
       */
      Models::GetPhoneEncryptionPublicKeyResponse getPhoneEncryptionPublicKeyWithOptions(const Models::GetPhoneEncryptionPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the encryption public key of a phone number.
       *
       * @description - Before calling this operation, make sure that a phone number has been added under your WABA and has passed phone number verification.
       * - If no phone number has been added under your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) operations to obtain a verification code and register the phone number.
       * #### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
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
       * @summary Retrieves the download URL for the letter of guarantee template.
       *
       * @param request GetPledgeTemplateAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPledgeTemplateAddressResponse
       */
      Models::GetPledgeTemplateAddressResponse getPledgeTemplateAddressWithOptions(const Models::GetPledgeTemplateAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download URL for the letter of guarantee template.
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
       * @summary Retrieves the WhatsApp username for a business phone number.
       *
       * @param request GetWhatsappUserNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWhatsappUserNameResponse
       */
      Models::GetWhatsappUserNameResponse getWhatsappUserNameWithOptions(const Models::GetWhatsappUserNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the WhatsApp username for a business phone number.
       *
       * @param request GetWhatsappUserNameRequest
       * @return GetWhatsappUserNameResponse
       */
      Models::GetWhatsappUserNameResponse getWhatsappUserName(const Models::GetWhatsappUserNameRequest &request);

      /**
       * @summary Retrieves the suggested user name for a WhatsApp business phone number.
       *
       * @param request GetWhatsappUserNameSuggestionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWhatsappUserNameSuggestionsResponse
       */
      Models::GetWhatsappUserNameSuggestionsResponse getWhatsappUserNameSuggestionsWithOptions(const Models::GetWhatsappUserNameSuggestionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the suggested user name for a WhatsApp business phone number.
       *
       * @param request GetWhatsappUserNameSuggestionsRequest
       * @return GetWhatsappUserNameSuggestionsResponse
       */
      Models::GetWhatsappUserNameSuggestionsResponse getWhatsappUserNameSuggestions(const Models::GetWhatsappUserNameSuggestionsRequest &request);

      /**
       * @summary Retrieves the App ID for an ISV.
       *
       * @description The QPS limit for a single user of this API is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API at a reasonable frequency.
       *
       * @param request IsvGetAppIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IsvGetAppIdResponse
       */
      Models::IsvGetAppIdResponse isvGetAppIdWithOptions(const Models::IsvGetAppIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the App ID for an ISV.
       *
       * @description The QPS limit for a single user of this API is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API at a reasonable frequency.
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
       * @summary Queries the phone numbers or business account IDs attached to a flow.
       *
       * @description - You can call this operation to query the phone numbers or business account IDs attached to a flow. You can also view this information on the **Settings** page in the **Flow Editor**.
       * - Before you call this operation, ensure that a phone number or business account ID is attached to your flow.
       * - If a phone number or business account ID is not attached to your flow, you can attach one manually on the **Settings** page in the **Flow Editor** or by calling the [FlowBindPhone](https://help.aliyun.com/document_detail/2937190.html) operation.
       *
       * @param request ListBindingRelationsForFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindingRelationsForFlowVersionResponse
       */
      Models::ListBindingRelationsForFlowVersionResponse listBindingRelationsForFlowVersionWithOptions(const Models::ListBindingRelationsForFlowVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the phone numbers or business account IDs attached to a flow.
       *
       * @description - You can call this operation to query the phone numbers or business account IDs attached to a flow. You can also view this information on the **Settings** page in the **Flow Editor**.
       * - Before you call this operation, ensure that a phone number or business account ID is attached to your flow.
       * - If a phone number or business account ID is not attached to your flow, you can attach one manually on the **Settings** page in the **Flow Editor** or by calling the [FlowBindPhone](https://help.aliyun.com/document_detail/2937190.html) operation.
       *
       * @param request ListBindingRelationsForFlowVersionRequest
       * @return ListBindingRelationsForFlowVersionResponse
       */
      Models::ListBindingRelationsForFlowVersionResponse listBindingRelationsForFlowVersion(const Models::ListBindingRelationsForFlowVersionRequest &request);

      /**
       * @summary Lists flows.
       *
       * @description - You can call this operation to query flows, or manually query flows in the [Flow Builder](https://chatapp.console.aliyun.com/ChatFlowBuilder) console.
       * - Before calling this operation, make sure that you have successfully created flows.
       * - If you do not have any successfully created flows, manually create a flow in the [Flow Builder](https://chatapp.console.aliyun.com/ChatFlowBuilder) console or call the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) operation to create a flow.
       * - The optional parameters in this operation are filter conditions for querying flows. If you do not specify these parameters, all flows are returned.
       *
       * @param tmpReq ListChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatFlowResponse
       */
      Models::ListChatFlowResponse listChatFlowWithOptions(const Models::ListChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists flows.
       *
       * @description - You can call this operation to query flows, or manually query flows in the [Flow Builder](https://chatapp.console.aliyun.com/ChatFlowBuilder) console.
       * - Before calling this operation, make sure that you have successfully created flows.
       * - If you do not have any successfully created flows, manually create a flow in the [Flow Builder](https://chatapp.console.aliyun.com/ChatFlowBuilder) console or call the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) operation to create a flow.
       * - The optional parameters in this operation are filter conditions for querying flows. If you do not specify these parameters, all flows are returned.
       *
       * @param request ListChatFlowRequest
       * @return ListChatFlowResponse
       */
      Models::ListChatFlowResponse listChatFlow(const Models::ListChatFlowRequest &request);

      /**
       * @summary Lists flow templates.
       *
       * @description - You can call this operation to list flow templates. You can also view the list of templates on the **View Templates** page in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - You can use the optional parameters in this operation to filter the list of templates. If you do not specify any filter conditions, all templates are returned.
       *
       * @param request ListChatFlowTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatFlowTemplateResponse
       */
      Models::ListChatFlowTemplateResponse listChatFlowTemplateWithOptions(const Models::ListChatFlowTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists flow templates.
       *
       * @description - You can call this operation to list flow templates. You can also view the list of templates on the **View Templates** page in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - You can use the optional parameters in this operation to filter the list of templates. If you do not specify any filter conditions, all templates are returned.
       *
       * @param request ListChatFlowTemplateRequest
       * @return ListChatFlowTemplateResponse
       */
      Models::ListChatFlowTemplateResponse listChatFlowTemplate(const Models::ListChatFlowTemplateRequest &request);

      /**
       * @summary Retrieves the list of IM groups.
       *
       * @description >Notice: The feature of retrieving IM group lists through API is a Meta beta feature. Contact your account manager to apply for access.
       * - Before calling this operation, make sure you have successfully created IM groups.
       * - If you do not have any created IM groups, you can only create IM groups through the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) operation.
       * - The optional parameters of this operation are filter conditions for the IM group list. If you do not specify them, all IM groups are returned.
       *
       * @param tmpReq ListChatGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatGroupResponse
       */
      Models::ListChatGroupResponse listChatGroupWithOptions(const Models::ListChatGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of IM groups.
       *
       * @description >Notice: The feature of retrieving IM group lists through API is a Meta beta feature. Contact your account manager to apply for access.
       * - Before calling this operation, make sure you have successfully created IM groups.
       * - If you do not have any created IM groups, you can only create IM groups through the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) operation.
       * - The optional parameters of this operation are filter conditions for the IM group list. If you do not specify them, all IM groups are returned.
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
       * @summary Queries the message list.
       *
       * @description - You can call this operation to query the message list. You can also view the message list in the [**Channel Management**](https://chatapp.console.aliyun.com/CustomerList) > **Management** > **Message List** console.
       * - This operation only supports querying the message list for WhatsApp<props="intl"> and Viber channel types.
       * - Before calling this operation, make sure that you have created a WhatsApp<props="intl"> or Viber channel, bound a phone number or merchant account ID, created a template that has passed the review, and sent messages through the channel.
       *
       * @param tmpReq ListChatappMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatappMessageResponse
       */
      Models::ListChatappMessageResponse listChatappMessageWithOptions(const Models::ListChatappMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the message list.
       *
       * @description - You can call this operation to query the message list. You can also view the message list in the [**Channel Management**](https://chatapp.console.aliyun.com/CustomerList) > **Management** > **Message List** console.
       * - This operation only supports querying the message list for WhatsApp<props="intl"> and Viber channel types.
       * - Before calling this operation, make sure that you have created a WhatsApp<props="intl"> or Viber channel, bound a phone number or merchant account ID, created a template that has passed the review, and sent messages through the channel.
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
       * @summary Queries the DirectMail accounts under your Alibaba Cloud account.
       *
       * @param request ListDmAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDmAccountResponse
       */
      Models::ListDmAccountResponse listDmAccountWithOptions(const Models::ListDmAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the DirectMail accounts under your Alibaba Cloud account.
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
       * @summary Queries the list of Facebook posts.
       *
       * @param request ListFacebookPostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFacebookPostsResponse
       */
      Models::ListFacebookPostsResponse listFacebookPostsWithOptions(const Models::ListFacebookPostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Facebook posts.
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
       * @summary Lists flow component groups.
       *
       * @param request ListFlowNodeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowNodeGroupResponse
       */
      Models::ListFlowNodeGroupResponse listFlowNodeGroupWithOptions(const Models::ListFlowNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists flow component groups.
       *
       * @param request ListFlowNodeGroupRequest
       * @return ListFlowNodeGroupResponse
       */
      Models::ListFlowNodeGroupResponse listFlowNodeGroup(const Models::ListFlowNodeGroupRequest &request);

      /**
       * @summary Lists flow component prototypes.
       *
       * @description - You can call this API operation to query flow component prototypes. You can also view the prototypes on the orchestration canvas in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) by clicking a flow name.
       * - You can use the optional parameters for this operation to filter flow component prototypes. If you do not specify any optional parameters, all flow component prototypes are returned.
       *
       * @param request ListFlowNodePrototypeV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowNodePrototypeV2Response
       */
      Models::ListFlowNodePrototypeV2Response listFlowNodePrototypeV2WithOptions(const Models::ListFlowNodePrototypeV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists flow component prototypes.
       *
       * @description - You can call this API operation to query flow component prototypes. You can also view the prototypes on the orchestration canvas in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) by clicking a flow name.
       * - You can use the optional parameters for this operation to filter flow component prototypes. If you do not specify any optional parameters, all flow component prototypes are returned.
       *
       * @param request ListFlowNodePrototypeV2Request
       * @return ListFlowNodePrototypeV2Response
       */
      Models::ListFlowNodePrototypeV2Response listFlowNodePrototypeV2(const Models::ListFlowNodePrototypeV2Request &request);

      /**
       * @summary Lists flow versions.
       *
       * @description - You can call this API operation to query flow versions. You can also view flow versions in the [flow editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) by clicking a flow name to open the orchestration canvas.
       * - Before calling this API operation, make sure that you have created one or more flows.
       * - If you have not created any flows, create a flow in the [flow editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) or call the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) API operation.
       * - The optional parameters for this API operation are filter conditions. If you do not specify any optional parameters, all flow versions are returned.
       *
       * @param tmpReq ListFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowVersionResponse
       */
      Models::ListFlowVersionResponse listFlowVersionWithOptions(const Models::ListFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists flow versions.
       *
       * @description - You can call this API operation to query flow versions. You can also view flow versions in the [flow editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) by clicking a flow name to open the orchestration canvas.
       * - Before calling this API operation, make sure that you have created one or more flows.
       * - If you have not created any flows, create a flow in the [flow editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) or call the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) API operation.
       * - The optional parameters for this API operation are filter conditions. If you do not specify any optional parameters, all flow versions are returned.
       *
       * @param request ListFlowVersionRequest
       * @return ListFlowVersionResponse
       */
      Models::ListFlowVersionResponse listFlowVersion(const Models::ListFlowVersionRequest &request);

      /**
       * @summary Retrieves the Instagram pages associated with an instance.
       *
       * @param request ListInstagramPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstagramPageResponse
       */
      Models::ListInstagramPageResponse listInstagramPageWithOptions(const Models::ListInstagramPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the Instagram pages associated with an instance.
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
       * @summary Queries a list of marketing campaigns.
       *
       * @param tmpReq ListMarketingFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMarketingFlowResponse
       */
      Models::ListMarketingFlowResponse listMarketingFlowWithOptions(const Models::ListMarketingFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of marketing campaigns.
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
       * @summary Queries the list of ad accounts bound to a page.
       *
       * @param request ListPageAdAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPageAdAccountResponse
       */
      Models::ListPageAdAccountResponse listPageAdAccountWithOptions(const Models::ListPageAdAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of ad accounts bound to a page.
       *
       * @param request ListPageAdAccountRequest
       * @return ListPageAdAccountResponse
       */
      Models::ListPageAdAccountResponse listPageAdAccount(const Models::ListPageAdAccountRequest &request);

      /**
       * @summary Queries the list of message QR codes.
       *
       * @description The queries per second (QPS) limit for this operation is 5 per user. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request ListPhoneMessageQrdlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPhoneMessageQrdlResponse
       */
      Models::ListPhoneMessageQrdlResponse listPhoneMessageQrdlWithOptions(const Models::ListPhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of message QR codes.
       *
       * @description The queries per second (QPS) limit for this operation is 5 per user. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate.
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
       * @summary Queries the catalog list of the Meta Business platform.
       *
       * @description The China (Hangzhou) region is used as an example. The China (Hangzhou) region is used as an example. The China (Hangzhou) region is used as an example. The per-user QPS limit for this API is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ListProductCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductCatalogResponse
       */
      Models::ListProductCatalogResponse listProductCatalogWithOptions(const Models::ListProductCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the catalog list of the Meta Business platform.
       *
       * @description The China (Hangzhou) region is used as an example. The China (Hangzhou) region is used as an example. The China (Hangzhou) region is used as an example. The per-user QPS limit for this API is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
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
       * @summary Modifies a message template. Only templates that have not been reviewed or that failed the review can be modified.
       *
       * @description ### QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       * ### Status changes
       * Changes to the template status and quality can be monitored through MNS or HTTP. For more information, see [Receipt messages](https://help.aliyun.com/document_detail/421545.html).
       *
       * @param tmpReq ModifyChatappTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyChatappTemplateResponse
       */
      Models::ModifyChatappTemplateResponse modifyChatappTemplateWithOptions(const Models::ModifyChatappTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a message template. Only templates that have not been reviewed or that failed the review can be modified.
       *
       * @description ### QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       * ### Status changes
       * Changes to the template status and quality can be monitored through MNS or HTTP. For more information, see [Receipt messages](https://help.aliyun.com/document_detail/421545.html).
       *
       * @param request ModifyChatappTemplateRequest
       * @return ModifyChatappTemplateResponse
       */
      Models::ModifyChatappTemplateResponse modifyChatappTemplate(const Models::ModifyChatappTemplateRequest &request);

      /**
       * @summary Modifies some properties of a template.
       *
       * @param request ModifyChatappTemplatePropertiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyChatappTemplatePropertiesResponse
       */
      Models::ModifyChatappTemplatePropertiesResponse modifyChatappTemplatePropertiesWithOptions(const Models::ModifyChatappTemplatePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies some properties of a template.
       *
       * @param request ModifyChatappTemplatePropertiesRequest
       * @return ModifyChatappTemplatePropertiesResponse
       */
      Models::ModifyChatappTemplatePropertiesResponse modifyChatappTemplateProperties(const Models::ModifyChatappTemplatePropertiesRequest &request);

      /**
       * @summary Modifies the basic information of a flow.
       *
       * @description The China Short Message Service (China SMS) API has a single-user QPS limit of 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param tmpReq ModifyFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFlowResponse
       */
      Models::ModifyFlowResponse modifyFlowWithOptions(const Models::ModifyFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic information of a flow.
       *
       * @description The China Short Message Service (China SMS) API has a single-user QPS limit of 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ModifyFlowRequest
       * @return ModifyFlowResponse
       */
      Models::ModifyFlowResponse modifyFlow(const Models::ModifyFlowRequest &request);

      /**
       * @summary Modifies the commercial information of a phone number.
       *
       * @description The China Message Service (China) API has a single-user QPS limit of 10 calls per second. If this limit is exceeded, throttling is triggered, which may affect your business. Manage your calls appropriately.
       *
       * @param tmpReq ModifyPhoneBusinessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPhoneBusinessProfileResponse
       */
      Models::ModifyPhoneBusinessProfileResponse modifyPhoneBusinessProfileWithOptions(const Models::ModifyPhoneBusinessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the commercial information of a phone number.
       *
       * @description The China Message Service (China) API has a single-user QPS limit of 10 calls per second. If this limit is exceeded, throttling is triggered, which may affect your business. Manage your calls appropriately.
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
       * @summary Unpublishes a flow version.
       *
       * @description - You can call this operation to unpublish a flow version. You can also manually unpublish a flow version in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) by clicking the flow name to open the orchestration canvas.
       * - Before calling this operation, make sure that the flow is published.
       * - If a flow is not published, you can publish it manually from the orchestration canvas in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder), or by calling the [OnlineFlowVersion](https://help.aliyun.com/document_detail/2937203.html) operation.
       * - After a flow version is unpublished, the orchestrated flow stops running. This may affect your business. Proceed with caution.
       *
       * @param tmpReq OfflineFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineFlowVersionResponse
       */
      Models::OfflineFlowVersionResponse offlineFlowVersionWithOptions(const Models::OfflineFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unpublishes a flow version.
       *
       * @description - You can call this operation to unpublish a flow version. You can also manually unpublish a flow version in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) by clicking the flow name to open the orchestration canvas.
       * - Before calling this operation, make sure that the flow is published.
       * - If a flow is not published, you can publish it manually from the orchestration canvas in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder), or by calling the [OnlineFlowVersion](https://help.aliyun.com/document_detail/2937203.html) operation.
       * - After a flow version is unpublished, the orchestrated flow stops running. This may affect your business. Proceed with caution.
       *
       * @param request OfflineFlowVersionRequest
       * @return OfflineFlowVersionResponse
       */
      Models::OfflineFlowVersionResponse offlineFlowVersion(const Models::OfflineFlowVersionRequest &request);

      /**
       * @summary Publishes a flow version.
       *
       * @description - You can call this operation to publish a flow version. You can also manually publish a flow version in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) by clicking the flow name to open the orchestration canvas.
       * - Before you call this operation, make sure that you have created a flow and attached it to a phone number or a business account ID.
       * - If you have not created a flow, you can create one manually in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) and attach a phone number or business account ID. Alternatively, you can call the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) and [FlowBindPhone](https://help.aliyun.com/document_detail/2937190.html) operations to create a flow and attach a phone number or business account ID.
       * - After a flow with a non-manual trigger is published, it is triggered when the attached phone number or business account sends a message to the business. If your flow contains components that incur fees, such as message sending or function invocations, make sure you understand the billing methods and pricing of the related products before you call this operation.
       *
       * @param tmpReq OnlineFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineFlowVersionResponse
       */
      Models::OnlineFlowVersionResponse onlineFlowVersionWithOptions(const Models::OnlineFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a flow version.
       *
       * @description - You can call this operation to publish a flow version. You can also manually publish a flow version in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) by clicking the flow name to open the orchestration canvas.
       * - Before you call this operation, make sure that you have created a flow and attached it to a phone number or a business account ID.
       * - If you have not created a flow, you can create one manually in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) and attach a phone number or business account ID. Alternatively, you can call the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) and [FlowBindPhone](https://help.aliyun.com/document_detail/2937190.html) operations to create a flow and attach a phone number or business account ID.
       * - After a flow with a non-manual trigger is published, it is triggered when the attached phone number or business account sends a message to the business. If your flow contains components that incur fees, such as message sending or function invocations, make sure you understand the billing methods and pricing of the related products before you call this operation.
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
       * @description - Before calling this operation, make sure that you have a successfully created WhatsApp Flow.
       * - If you do not have a successfully created WhatsApp Flow, create one by calling the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) operation.
       * #### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request PublishFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishFlowResponse
       */
      Models::PublishFlowResponse publishFlowWithOptions(const Models::PublishFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a Flow.
       *
       * @description - Before calling this operation, make sure that you have a successfully created WhatsApp Flow.
       * - If you do not have a successfully created WhatsApp Flow, create one by calling the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) operation.
       * #### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
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
       * @description The queries per second (QPS) limit for this operation is 10 per user. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request QueryPhoneBusinessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPhoneBusinessProfileResponse
       */
      Models::QueryPhoneBusinessProfileResponse queryPhoneBusinessProfileWithOptions(const Models::QueryPhoneBusinessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the business information of a phone number.
       *
       * @description The queries per second (QPS) limit for this operation is 10 per user. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
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
       * @summary Retrieves the details of a flow.
       *
       * @description - You can call this API operation to retrieve the details of a flow. You can also view the flow details in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - Before you call this operation, make sure that you have created a flow.
       * - If you have not created a flow, you can create one in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) or by calling the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) operation.
       *
       * @param tmpReq ReadChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadChatFlowResponse
       */
      Models::ReadChatFlowResponse readChatFlowWithOptions(const Models::ReadChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a flow.
       *
       * @description - You can call this API operation to retrieve the details of a flow. You can also view the flow details in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - Before you call this operation, make sure that you have created a flow.
       * - If you have not created a flow, you can create one in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) or by calling the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) operation.
       *
       * @param request ReadChatFlowRequest
       * @return ReadChatFlowResponse
       */
      Models::ReadChatFlowResponse readChatFlow(const Models::ReadChatFlowRequest &request);

      /**
       * @summary Views the log settings for a flow.
       *
       * @description - Before you call this operation, ensure that log settings are configured for the flow.
       * - If log settings are not configured for the flow, call the [CreateChatFlowLogSetting](https://help.aliyun.com/document_detail/2937211.html) operation to configure them.
       * - You can use the unique ID returned by this operation to call the [UpdateChatFlowLogSetting](https://help.aliyun.com/document_detail/2937210.html) operation to update the log settings.
       *
       * @param request ReadChatFlowLogSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadChatFlowLogSettingResponse
       */
      Models::ReadChatFlowLogSettingResponse readChatFlowLogSettingWithOptions(const Models::ReadChatFlowLogSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Views the log settings for a flow.
       *
       * @description - Before you call this operation, ensure that log settings are configured for the flow.
       * - If log settings are not configured for the flow, call the [CreateChatFlowLogSetting](https://help.aliyun.com/document_detail/2937211.html) operation to configure them.
       * - You can use the unique ID returned by this operation to call the [UpdateChatFlowLogSetting](https://help.aliyun.com/document_detail/2937210.html) operation to update the log settings.
       *
       * @param request ReadChatFlowLogSettingRequest
       * @return ReadChatFlowLogSettingResponse
       */
      Models::ReadChatFlowLogSettingResponse readChatFlowLogSetting(const Models::ReadChatFlowLogSettingRequest &request);

      /**
       * @summary Retrieves a flow version.
       *
       * @description - You can call this operation to query a flow version. You can also click a flow name on the [flow editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) page to go to the canvas orchestration page and view the flow version.
       * - Before calling this operation, make sure that you have successfully created a flow.
       * - If you do not have a successfully created flow, you can manually create a flow on the [flow editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) page or create a flow by calling [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html).
       *
       * @param tmpReq ReadFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadFlowVersionResponse
       */
      Models::ReadFlowVersionResponse readFlowVersionWithOptions(const Models::ReadFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a flow version.
       *
       * @description - You can call this operation to query a flow version. You can also click a flow name on the [flow editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) page to go to the canvas orchestration page and view the flow version.
       * - Before calling this operation, make sure that you have successfully created a flow.
       * - If you do not have a successfully created flow, you can manually create a flow on the [flow editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) page or create a flow by calling [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html).
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
       * @summary Sends Chat App messages in batches.
       *
       * @description - You can call this operation to send messages in batches. You can also manually send messages in batches on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Message Sending** page.
       * - Before calling this operation, make sure that you have created a channel and have an approved template.
       * - For WhatsApp channels, complete [WABA registration and bindng](https://help.aliyun.com/document_detail/172335.html) and [add a phone number](https://help.aliyun.com/document_detail/2656131.html).
       * - For Messenger channels, complete [connecting a public page account](https://help.aliyun.com/document_detail/2837713.html).
       * - For Instagram channels, complete [connecting a professional account](https://help.aliyun.com/document_detail/2837720.html).
       * <props="intl">- For Viber channels, complete [applying for a service ID](https://help.aliyun.com/document_detail/2807995.html).
       * ### QPS limit
       * - The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate.
       * - A maximum of 1,000 phone numbers are supported per request.
       * ### Status changes
       * You can monitor message sending status through MNS or HTTP. For more information, see [Receipt messages](https://help.aliyun.com/document_detail/421545.html).
       *
       * @param tmpReq SendChatappMassMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendChatappMassMessageResponse
       */
      Models::SendChatappMassMessageResponse sendChatappMassMessageWithOptions(const Models::SendChatappMassMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends Chat App messages in batches.
       *
       * @description - You can call this operation to send messages in batches. You can also manually send messages in batches on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Message Sending** page.
       * - Before calling this operation, make sure that you have created a channel and have an approved template.
       * - For WhatsApp channels, complete [WABA registration and bindng](https://help.aliyun.com/document_detail/172335.html) and [add a phone number](https://help.aliyun.com/document_detail/2656131.html).
       * - For Messenger channels, complete [connecting a public page account](https://help.aliyun.com/document_detail/2837713.html).
       * - For Instagram channels, complete [connecting a professional account](https://help.aliyun.com/document_detail/2837720.html).
       * <props="intl">- For Viber channels, complete [applying for a service ID](https://help.aliyun.com/document_detail/2807995.html).
       * ### QPS limit
       * - The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate.
       * - A maximum of 1,000 phone numbers are supported per request.
       * ### Status changes
       * You can monitor message sending status through MNS or HTTP. For more information, see [Receipt messages](https://help.aliyun.com/document_detail/421545.html).
       *
       * @param request SendChatappMassMessageRequest
       * @return SendChatappMassMessageResponse
       */
      Models::SendChatappMassMessageResponse sendChatappMassMessage(const Models::SendChatappMassMessageRequest &request);

      /**
       * @summary Sends a Chat App Message Service message.
       *
       * @description - You can call this operation to send a message, or manually send a message on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Send Message** page.
       * - Before calling this operation, make sure that you have created a channel and have an approved template.
       * - For the WhatsApp channel type, you must complete [WABA registration and bindng](https://help.aliyun.com/document_detail/172335.html) and [add a phone number](https://help.aliyun.com/document_detail/2656131.html).
       * - For the Messenger channel type, you must complete [connecting a public page account](https://help.aliyun.com/document_detail/2837713.html).
       * - For the Instagram channel type, you must complete [connecting a professional account](https://help.aliyun.com/document_detail/2837720.html).
       * <props="intl">- For the Viber channel type, you must complete [applying for a service ID](https://help.aliyun.com/document_detail/2807995.html).
       * ### QPS limit
       * The single-user QPS limit for this operation is 250 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       * ### Status changes
       * You can monitor message delivery status through MNS or HTTP. For more information, see [Receipt messages](https://help.aliyun.com/document_detail/421545.html).
       *
       * @param tmpReq SendChatappMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendChatappMessageResponse
       */
      Models::SendChatappMessageResponse sendChatappMessageWithOptions(const Models::SendChatappMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a Chat App Message Service message.
       *
       * @description - You can call this operation to send a message, or manually send a message on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Send Message** page.
       * - Before calling this operation, make sure that you have created a channel and have an approved template.
       * - For the WhatsApp channel type, you must complete [WABA registration and bindng](https://help.aliyun.com/document_detail/172335.html) and [add a phone number](https://help.aliyun.com/document_detail/2656131.html).
       * - For the Messenger channel type, you must complete [connecting a public page account](https://help.aliyun.com/document_detail/2837713.html).
       * - For the Instagram channel type, you must complete [connecting a professional account](https://help.aliyun.com/document_detail/2837720.html).
       * <props="intl">- For the Viber channel type, you must complete [applying for a service ID](https://help.aliyun.com/document_detail/2807995.html).
       * ### QPS limit
       * The single-user QPS limit for this operation is 250 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       * ### Status changes
       * You can monitor message delivery status through MNS or HTTP. For more information, see [Receipt messages](https://help.aliyun.com/document_detail/421545.html).
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
       * @summary Synchronizes business app historical records.
       *
       * @description - Before calling this operation, configure the webhooks for messages and receipts by using [UpdatePhoneWebhook](https://help.aliyun.com/document_detail/600763.html) and [UpdateAccountWebhook](https://help.aliyun.com/document_detail/600765.html). Otherwise, the webhook address cannot be found during historical message synchronization, which causes the synchronization to fail.
       * - This operation takes effect only once. After the first call, subsequent calls do not trigger historical message pushes.
       *
       * @param request SyncBusinessAppHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncBusinessAppHistoryResponse
       */
      Models::SyncBusinessAppHistoryResponse syncBusinessAppHistoryWithOptions(const Models::SyncBusinessAppHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes business app historical records.
       *
       * @description - Before calling this operation, configure the webhooks for messages and receipts by using [UpdatePhoneWebhook](https://help.aliyun.com/document_detail/600763.html) and [UpdateAccountWebhook](https://help.aliyun.com/document_detail/600765.html). Otherwise, the webhook address cannot be found during historical message synchronization, which causes the synchronization to fail.
       * - This operation takes effect only once. After the first call, subsequent calls do not trigger historical message pushes.
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
       * @summary Queries the Messenger subscription token.
       *
       * @param request SyncMessengerSubscriptionTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncMessengerSubscriptionTokenResponse
       */
      Models::SyncMessengerSubscriptionTokenResponse syncMessengerSubscriptionTokenWithOptions(const Models::SyncMessengerSubscriptionTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Messenger subscription token.
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
       * @summary Updates the basic information of a flow based on the flow code.
       *
       * @description - You can call this operation to update the basic information of a flow, or update it manually on the **Basic Information** page under **Settings** in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - Before calling this operation, make sure that you have created a flow.
       * - If you have not created a flow, go to the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder) and click **Create Flow** to create one.
       *
       * @param tmpReq UpdateChatFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChatFlowResponse
       */
      Models::UpdateChatFlowResponse updateChatFlowWithOptions(const Models::UpdateChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information of a flow based on the flow code.
       *
       * @description - You can call this operation to update the basic information of a flow, or update it manually on the **Basic Information** page under **Settings** in the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder).
       * - Before calling this operation, make sure that you have created a flow.
       * - If you have not created a flow, go to the [**Flow Editor**](https://chatapp.console.aliyun.com/ChatFlowBuilder) and click **Create Flow** to create one.
       *
       * @param request UpdateChatFlowRequest
       * @return UpdateChatFlowResponse
       */
      Models::UpdateChatFlowResponse updateChatFlow(const Models::UpdateChatFlowRequest &request);

      /**
       * @summary Updates the flow log settings.
       *
       * @description - You can call this operation to update flow log settings, or manually update them in [**Flow Builder**](https://chatapp.console.aliyun.com/ChatFlowBuilder) > **Settings** > **Log**.
       * - Before calling this operation, make sure that you have activated [Simple Log Service](https://sls.console.aliyun.com/lognext/open) and created flow log settings.
       * - If you have not created flow log settings for the flow, first create them by calling the [CreateChatFlowLogSetting](https://help.aliyun.com/document_detail/2937211.html) operation.
       * - Updating flow log settings may affect your business. Proceed with caution.
       *
       * @param request UpdateChatFlowLogSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChatFlowLogSettingResponse
       */
      Models::UpdateChatFlowLogSettingResponse updateChatFlowLogSettingWithOptions(const Models::UpdateChatFlowLogSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the flow log settings.
       *
       * @description - You can call this operation to update flow log settings, or manually update them in [**Flow Builder**](https://chatapp.console.aliyun.com/ChatFlowBuilder) > **Settings** > **Log**.
       * - Before calling this operation, make sure that you have activated [Simple Log Service](https://sls.console.aliyun.com/lognext/open) and created flow log settings.
       * - If you have not created flow log settings for the flow, first create them by calling the [CreateChatFlowLogSetting](https://help.aliyun.com/document_detail/2937211.html) operation.
       * - Updating flow log settings may affect your business. Proceed with caution.
       *
       * @param request UpdateChatFlowLogSettingRequest
       * @return UpdateChatFlowLogSettingResponse
       */
      Models::UpdateChatFlowLogSettingResponse updateChatFlowLogSetting(const Models::UpdateChatFlowLogSettingRequest &request);

      /**
       * @summary Modifies the information of an IM group.
       *
       * @description >Notice: Modifying IM group information through API is a Meta beta feature. Contact your account manager to request allowlisting.
       * - Creating WhatsApp groups through API is a Meta beta feature. Contact your account manager to request allowlisting.
       * - Before calling this operation, make sure that you have an IM group that has been created.
       * - If you do not have a created IM group, create one by calling the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) operation.
       *
       * @param request UpdateChatGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChatGroupResponse
       */
      Models::UpdateChatGroupResponse updateChatGroupWithOptions(const Models::UpdateChatGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of an IM group.
       *
       * @description >Notice: Modifying IM group information through API is a Meta beta feature. Contact your account manager to request allowlisting.
       * - Creating WhatsApp groups through API is a Meta beta feature. Contact your account manager to request allowlisting.
       * - Before calling this operation, make sure that you have an IM group that has been created.
       * - If you do not have a created IM group, create one by calling the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) operation.
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
       * @summary Modifies the welcome message, conversation starters, and commands for a phone number.
       *
       * @description ### QPS limit 
       * The single-user QPS limit for this API is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this API appropriately.
       * This API directly retrieves data from Facebook. Facebook imposes a limit on the total number of API calls. Use this API appropriately.
       *
       * @param tmpReq UpdateConversationalAutomationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConversationalAutomationResponse
       */
      Models::UpdateConversationalAutomationResponse updateConversationalAutomationWithOptions(const Models::UpdateConversationalAutomationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the welcome message, conversation starters, and commands for a phone number.
       *
       * @description ### QPS limit 
       * The single-user QPS limit for this API is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this API appropriately.
       * This API directly retrieves data from Facebook. Facebook imposes a limit on the total number of API calls. Use this API appropriately.
       *
       * @param request UpdateConversationalAutomationRequest
       * @return UpdateConversationalAutomationResponse
       */
      Models::UpdateConversationalAutomationResponse updateConversationalAutomation(const Models::UpdateConversationalAutomationRequest &request);

      /**
       * @summary Updates the content of a flow by using JSON.
       *
       * @description The China Mobile (China) QPS limit for this API is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Manage your calls appropriately.
       *
       * @param request UpdateFlowJSONAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowJSONAssetResponse
       */
      Models::UpdateFlowJSONAssetResponse updateFlowJSONAssetWithOptions(const Models::UpdateFlowJSONAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the content of a flow by using JSON.
       *
       * @description The China Mobile (China) QPS limit for this API is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Manage your calls appropriately.
       *
       * @param request UpdateFlowJSONAssetRequest
       * @return UpdateFlowJSONAssetResponse
       */
      Models::UpdateFlowJSONAssetResponse updateFlowJSONAsset(const Models::UpdateFlowJSONAssetRequest &request);

      /**
       * @summary Updates the Domain-Specific Language (DSL) data of a flow version on the canvas.
       *
       * @description - You can call this operation to update the DSL data of a flow version. You can also update the DSL data on the orchestration canvas in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder). To access the canvas, click the name of the flow.
       * - Before calling this operation, make sure that you have created a flow and its status is Unpublished.
       * - If you have not created a flow, you can manually create one in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) or call the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) operation.
       *
       * @param tmpReq UpdateFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowVersionResponse
       */
      Models::UpdateFlowVersionResponse updateFlowVersionWithOptions(const Models::UpdateFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the Domain-Specific Language (DSL) data of a flow version on the canvas.
       *
       * @description - You can call this operation to update the DSL data of a flow version. You can also update the DSL data on the orchestration canvas in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder). To access the canvas, click the name of the flow.
       * - Before calling this operation, make sure that you have created a flow and its status is Unpublished.
       * - If you have not created a flow, you can manually create one in the [Flow Editor](https://chatapp.console.aliyun.com/ChatFlowBuilder) or call the [CreateChatFlow](https://help.aliyun.com/document_detail/2937204.html) operation.
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
       * @summary Modifies campaign information.
       *
       * @param tmpReq UpdateMarketingFLowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMarketingFLowResponse
       */
      Models::UpdateMarketingFLowResponse updateMarketingFLowWithOptions(const Models::UpdateMarketingFLowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies campaign information.
       *
       * @param request UpdateMarketingFLowRequest
       * @return UpdateMarketingFLowResponse
       */
      Models::UpdateMarketingFLowResponse updateMarketingFLow(const Models::UpdateMarketingFLowRequest &request);

      /**
       * @summary Updates the encryption public key of a phone number.
       *
       * @description - Before calling this operation, make sure that a phone number has been added under your WABA and has passed phone number verification.
       * - If no phone number has been added under your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) operations to obtain a verification code and register a phone number.
       * #### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request UpdatePhoneEncryptionPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePhoneEncryptionPublicKeyResponse
       */
      Models::UpdatePhoneEncryptionPublicKeyResponse updatePhoneEncryptionPublicKeyWithOptions(const Models::UpdatePhoneEncryptionPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the encryption public key of a phone number.
       *
       * @description - Before calling this operation, make sure that a phone number has been added under your WABA and has passed phone number verification.
       * - If no phone number has been added under your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) operations to obtain a verification code and register a phone number.
       * #### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request UpdatePhoneEncryptionPublicKeyRequest
       * @return UpdatePhoneEncryptionPublicKeyResponse
       */
      Models::UpdatePhoneEncryptionPublicKeyResponse updatePhoneEncryptionPublicKey(const Models::UpdatePhoneEncryptionPublicKeyRequest &request);

      /**
       * @summary Modifies a message QR code.
       *
       * @description - After you modify a message QR code, users can no longer open the corresponding business phone number by scanning the original QR code. Proceed with caution.
       * - Before calling this operation, make sure that you have created a message QR code.
       * - If you have not created a message QR code, call the [CreatePhoneMessageQrdl](https://help.aliyun.com/document_detail/2638749.html) operation to create one first.
       * #### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request UpdatePhoneMessageQrdlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePhoneMessageQrdlResponse
       */
      Models::UpdatePhoneMessageQrdlResponse updatePhoneMessageQrdlWithOptions(const Models::UpdatePhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a message QR code.
       *
       * @description - After you modify a message QR code, users can no longer open the corresponding business phone number by scanning the original QR code. Proceed with caution.
       * - Before calling this operation, make sure that you have created a message QR code.
       * - If you have not created a message QR code, call the [CreatePhoneMessageQrdl](https://help.aliyun.com/document_detail/2638749.html) operation to create one first.
       * #### QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request UpdatePhoneMessageQrdlRequest
       * @return UpdatePhoneMessageQrdlResponse
       */
      Models::UpdatePhoneMessageQrdlResponse updatePhoneMessageQrdl(const Models::UpdatePhoneMessageQrdlRequest &request);

      /**
       * @summary Modifies the callback URL information for a phone number.
       *
       * @description The per-user QPS limit for this API is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Call this API at a reasonable frequency.
       *
       * @param request UpdatePhoneWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePhoneWebhookResponse
       */
      Models::UpdatePhoneWebhookResponse updatePhoneWebhookWithOptions(const Models::UpdatePhoneWebhookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the callback URL information for a phone number.
       *
       * @description The per-user QPS limit for this API is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Call this API at a reasonable frequency.
       *
       * @param request UpdatePhoneWebhookRequest
       * @return UpdatePhoneWebhookResponse
       */
      Models::UpdatePhoneWebhookResponse updatePhoneWebhook(const Models::UpdatePhoneWebhookRequest &request);

      /**
       * @summary Updates the MML status of a WABA.
       *
       * @param request UpdateWabaMmlStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWabaMmlStatusResponse
       */
      Models::UpdateWabaMmlStatusResponse updateWabaMmlStatusWithOptions(const Models::UpdateWabaMmlStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the MML status of a WABA.
       *
       * @param request UpdateWabaMmlStatusRequest
       * @return UpdateWabaMmlStatusResponse
       */
      Models::UpdateWabaMmlStatusResponse updateWabaMmlStatus(const Models::UpdateWabaMmlStatusRequest &request);

      /**
       * @summary Updates the WhatsApp username for a business phone number.
       *
       * @param request UpdateWhatsappUserNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWhatsappUserNameResponse
       */
      Models::UpdateWhatsappUserNameResponse updateWhatsappUserNameWithOptions(const Models::UpdateWhatsappUserNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the WhatsApp username for a business phone number.
       *
       * @param request UpdateWhatsappUserNameRequest
       * @return UpdateWhatsappUserNameResponse
       */
      Models::UpdateWhatsappUserNameResponse updateWhatsappUserName(const Models::UpdateWhatsappUserNameRequest &request);

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
