// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_WINNEXO20260512_HPP_
#define ALIBABACLOUD_WINNEXO20260512_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/WinNexo20260512Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/WinNexo20260512.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds multiple tenant members to a specified user group in a single request.
       *
       * @description ## Request description
       * - This operation supports batch addition of members by providing a user group ID and one or more user IDs.
       * - Duplicate entries in the user ID list do not cause errors. The system automatically handles duplicates to ensure each user is added only once.
       * - The caller must have the required permissions to perform this operation.
       * - This operation is applicable to scenarios that require quick team structure management or access control policy adjustments.
       *
       * @param tmpReq AddUserGroupMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserGroupMembersResponse
       */
      Models::AddUserGroupMembersResponse addUserGroupMembersWithOptions(const Models::AddUserGroupMembersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds multiple tenant members to a specified user group in a single request.
       *
       * @description ## Request description
       * - This operation supports batch addition of members by providing a user group ID and one or more user IDs.
       * - Duplicate entries in the user ID list do not cause errors. The system automatically handles duplicates to ensure each user is added only once.
       * - The caller must have the required permissions to perform this operation.
       * - This operation is applicable to scenarios that require quick team structure management or access control policy adjustments.
       *
       * @param request AddUserGroupMembersRequest
       * @return AddUserGroupMembersResponse
       */
      Models::AddUserGroupMembersResponse addUserGroupMembers(const Models::AddUserGroupMembersRequest &request);

      /**
       * @summary Batch cancels digital employee favorites for specific object types.
       *
       * @description Idempotently cancels favorites across three independent dimensions: graphName, operatingObjectName, and objectType. The input array accepts 1 to 200 items per request. Each item must be a non-empty string with a maximum length of 128 characters. The server validates and deduplicates items while preserving order. Non-string values, values that exceed the length limit, or arrays that exceed the size limit are rejected. Deletion, per-item status updates, and remaining valid count are completed within a single transaction. To safely cancel all favorites, you must also call ClearOperatingObjectFavorites to clean up historical records, MISSING records, or permission-hidden records that are not visible in the list. Then read back the result to confirm that total is 0.
       *
       * @param tmpReq BatchRemoveOperatingObjectFavoritesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchRemoveOperatingObjectFavoritesResponse
       */
      Models::BatchRemoveOperatingObjectFavoritesResponse batchRemoveOperatingObjectFavoritesWithOptions(const Models::BatchRemoveOperatingObjectFavoritesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch cancels digital employee favorites for specific object types.
       *
       * @description Idempotently cancels favorites across three independent dimensions: graphName, operatingObjectName, and objectType. The input array accepts 1 to 200 items per request. Each item must be a non-empty string with a maximum length of 128 characters. The server validates and deduplicates items while preserving order. Non-string values, values that exceed the length limit, or arrays that exceed the size limit are rejected. Deletion, per-item status updates, and remaining valid count are completed within a single transaction. To safely cancel all favorites, you must also call ClearOperatingObjectFavorites to clean up historical records, MISSING records, or permission-hidden records that are not visible in the list. Then read back the result to confirm that total is 0.
       *
       * @param request BatchRemoveOperatingObjectFavoritesRequest
       * @return BatchRemoveOperatingObjectFavoritesResponse
       */
      Models::BatchRemoveOperatingObjectFavoritesResponse batchRemoveOperatingObjectFavorites(const Models::BatchRemoveOperatingObjectFavoritesRequest &request);

      /**
       * @summary Performs a service health check.
       *
       * @param request CheckHealthRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckHealthResponse
       */
      Models::CheckHealthResponse checkHealthWithOptions(const Models::CheckHealthRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a service health check.
       *
       * @param request CheckHealthRequest
       * @return CheckHealthResponse
       */
      Models::CheckHealthResponse checkHealth(const Models::CheckHealthRequest &request);

      /**
       * @summary Clears all follows of a specific object type for a digital employee.
       *
       * @description Clears all persisted follows for the current calling user across three independent dimensions: graphName, operatingObjectName, and objectType. This includes historical records, MISSING records, and permission-hidden records that are not visible in the list. The operation does not return invisible object IDs and verifies that the remaining physical record count is zero within the same transaction.
       *
       * @param request ClearOperatingObjectFavoritesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearOperatingObjectFavoritesResponse
       */
      Models::ClearOperatingObjectFavoritesResponse clearOperatingObjectFavoritesWithOptions(const Models::ClearOperatingObjectFavoritesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears all follows of a specific object type for a digital employee.
       *
       * @description Clears all persisted follows for the current calling user across three independent dimensions: graphName, operatingObjectName, and objectType. This includes historical records, MISSING records, and permission-hidden records that are not visible in the list. The operation does not return invisible object IDs and verifies that the remaining physical record count is zero within the same transaction.
       *
       * @param request ClearOperatingObjectFavoritesRequest
       * @return ClearOperatingObjectFavoritesResponse
       */
      Models::ClearOperatingObjectFavoritesResponse clearOperatingObjectFavorites(const Models::ClearOperatingObjectFavoritesRequest &request);

      /**
       * @summary Creates a service notice.
       *
       * @description ## Request description
       * Creates a service notice. The caller must be mapped to a real platform user in the system O&M tenant and must have announcement management permissions.
       * - `priority`: The importance level of the notice. Valid values: URGENT, IMPORTANT, and GENERAL.
       * - `targetTenantIds` / `targetRoleCodes`: Used only when the corresponding target mode is set to SPECIFIED. Pass values as a JSON array.
       * - `effectiveStart` / `effectiveEnd`: ISO 8601 time with time zone.
       * - `publishNow`: If set to true, the notice is published immediately after creation. Otherwise, it is saved as a draft.
       *
       * @param tmpReq CreateAnnouncementRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAnnouncementResponse
       */
      Models::CreateAnnouncementResponse createAnnouncementWithOptions(const Models::CreateAnnouncementRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service notice.
       *
       * @description ## Request description
       * Creates a service notice. The caller must be mapped to a real platform user in the system O&M tenant and must have announcement management permissions.
       * - `priority`: The importance level of the notice. Valid values: URGENT, IMPORTANT, and GENERAL.
       * - `targetTenantIds` / `targetRoleCodes`: Used only when the corresponding target mode is set to SPECIFIED. Pass values as a JSON array.
       * - `effectiveStart` / `effectiveEnd`: ISO 8601 time with time zone.
       * - `publishNow`: If set to true, the notice is published immediately after creation. Otherwise, it is saved as a draft.
       *
       * @param request CreateAnnouncementRequest
       * @return CreateAnnouncementResponse
       */
      Models::CreateAnnouncementResponse createAnnouncement(const Models::CreateAnnouncementRequest &request);

      /**
       * @summary Creates a session.
       *
       * @param tmpReq CreateConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConversationResponse
       */
      Models::CreateConversationResponse createConversationWithOptions(const Models::CreateConversationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a session.
       *
       * @param request CreateConversationRequest
       * @return CreateConversationResponse
       */
      Models::CreateConversationResponse createConversation(const Models::CreateConversationRequest &request);

      /**
       * @summary Registers a custom-only organization.
       *
       * @description Registers a custom-only organization for subsequent department tree push through syncOrgStructure.
       *     Registration logic:
       *     1. Validates the corpId format (must start with a lowercase letter or digit, 3-64 characters, hyphens allowed).
       *     2. Delegates to OrgSyncAuthorizedService to execute registration (includes permission verification and tenant-level uniqueness check).
       *     3. Returns the registration result.
       *     Note: Custom-only organizations support only department tree synchronization. Member relationship synchronization is not supported.
       *
       * @param request CreateCustomOrgRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomOrgResponse
       */
      Models::CreateCustomOrgResponse createCustomOrgWithOptions(const Models::CreateCustomOrgRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a custom-only organization.
       *
       * @description Registers a custom-only organization for subsequent department tree push through syncOrgStructure.
       *     Registration logic:
       *     1. Validates the corpId format (must start with a lowercase letter or digit, 3-64 characters, hyphens allowed).
       *     2. Delegates to OrgSyncAuthorizedService to execute registration (includes permission verification and tenant-level uniqueness check).
       *     3. Returns the registration result.
       *     Note: Custom-only organizations support only department tree synchronization. Member relationship synchronization is not supported.
       *
       * @param request CreateCustomOrgRequest
       * @return CreateCustomOrgResponse
       */
      Models::CreateCustomOrgResponse createCustomOrg(const Models::CreateCustomOrgRequest &request);

      /**
       * @summary Creates a DingTalk group chat knowledge resource in a group.
       *
       * @description ## Operation description
       * - Connects a specified DingTalk group chat to a group knowledge base that the caller has joined.
       * - The resource type is fixed to ALI_DING, the scope is fixed to GROUP, and the owning user is resolved from the gateway authentication identity.
       * - groupId, chatId, and historyStartTime are required.
       * - updateFrequency can be configured by using a preset or a five-field cron expression for subsequent synchronization frequency.
       * - The server verifies the caller\\"s group membership, the target group directory permissions, and the uniqueness of chatId within the scope.
       *
       * @param tmpReq CreateGroupAliDingChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupAliDingChatResponse
       */
      Models::CreateGroupAliDingChatResponse createGroupAliDingChatWithOptions(const Models::CreateGroupAliDingChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a DingTalk group chat knowledge resource in a group.
       *
       * @description ## Operation description
       * - Connects a specified DingTalk group chat to a group knowledge base that the caller has joined.
       * - The resource type is fixed to ALI_DING, the scope is fixed to GROUP, and the owning user is resolved from the gateway authentication identity.
       * - groupId, chatId, and historyStartTime are required.
       * - updateFrequency can be configured by using a preset or a five-field cron expression for subsequent synchronization frequency.
       * - The server verifies the caller\\"s group membership, the target group directory permissions, and the uniqueness of chatId within the scope.
       *
       * @param request CreateGroupAliDingChatRequest
       * @return CreateGroupAliDingChatResponse
       */
      Models::CreateGroupAliDingChatResponse createGroupAliDingChat(const Models::CreateGroupAliDingChatRequest &request);

      /**
       * @summary Creates knowledge from a standard DingTalk group chat for a group.
       *
       * @description ## Request description
       * - Connects a specified standard DingTalk group chat to the group knowledge base that the caller has joined.
       * - The resource type is fixed to DINGTALK, the scope is fixed to GROUP, and the owning user is parsed from the gateway authentication identity.
       * - groupId, chatId, and historyStartTime are required.
       * - updateFrequency can be configured through preset or a five-segment cron expression for subsequent synchronization frequency.
       * - The server verifies the caller\\"s group member identity and target group directory permissions. The same group chat can be created as different Sources.
       *
       * @param tmpReq CreateGroupDingtalkChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupDingtalkChatResponse
       */
      Models::CreateGroupDingtalkChatResponse createGroupDingtalkChatWithOptions(const Models::CreateGroupDingtalkChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates knowledge from a standard DingTalk group chat for a group.
       *
       * @description ## Request description
       * - Connects a specified standard DingTalk group chat to the group knowledge base that the caller has joined.
       * - The resource type is fixed to DINGTALK, the scope is fixed to GROUP, and the owning user is parsed from the gateway authentication identity.
       * - groupId, chatId, and historyStartTime are required.
       * - updateFrequency can be configured through preset or a five-segment cron expression for subsequent synchronization frequency.
       * - The server verifies the caller\\"s group member identity and target group directory permissions. The same group chat can be created as different Sources.
       *
       * @param request CreateGroupDingtalkChatRequest
       * @return CreateGroupDingtalkChatResponse
       */
      Models::CreateGroupDingtalkChatResponse createGroupDingtalkChat(const Models::CreateGroupDingtalkChatRequest &request);

      /**
       * @summary Creates a group knowledge resource from a single Lark online document using the current user\\"s Lark authorization.
       *
       * @description ## Request description\\n\\nFixed as `ONLINE_DOC + FEISHU + GROUP`. `groupId` is required. If `directoryId` is omitted, the root directory of the group knowledge base is used. Group membership and directory write permissions are verified by the backend.
       *
       * @param tmpReq CreateGroupFeishuDocRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupFeishuDocResponse
       */
      Models::CreateGroupFeishuDocResponse createGroupFeishuDocWithOptions(const Models::CreateGroupFeishuDocRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a group knowledge resource from a single Lark online document using the current user\\"s Lark authorization.
       *
       * @description ## Request description\\n\\nFixed as `ONLINE_DOC + FEISHU + GROUP`. `groupId` is required. If `directoryId` is omitted, the root directory of the group knowledge base is used. Group membership and directory write permissions are verified by the backend.
       *
       * @param request CreateGroupFeishuDocRequest
       * @return CreateGroupFeishuDocResponse
       */
      Models::CreateGroupFeishuDocResponse createGroupFeishuDoc(const Models::CreateGroupFeishuDocRequest &request);

      /**
       * @summary Uploads an AliDing online document to the enterprise knowledge base. Management permissions are required.
       *
       * @description ## Request description
       * - This operation adds an AliDing online document to a specified enterprise knowledge base.
       * - The caller must have the `DEVELOPMENT_KB_MANAGE` permission.
       * - `source_type` is fixed to `ONLINE_DOC`, `platform` is fixed to `ALI_DING`, and `scope` is fixed to `TENANT`.
       * - If `directoryId` is not provided, the document is bound to the root directory of the current digital employee by default. If provided, it must be a valid directory ID under the current tenant.
       * - The `filePublicUrl` parameter is required and specifies the publicly accessible URL of the AliDing online document to upload.
       * - Optional parameters include `operatingObjectName` (digital employee name), `description` (resource description), `knowledgeId` (knowledge base ID), and `sourceTags` (resource tags).
       * - A successful response returns information about the newly created resource, such as `sourceId`, `name`, `status`, `directoryId`, and creation time.
       *
       * @param request CreateKnowledgeBaseAliDingDocRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKnowledgeBaseAliDingDocResponse
       */
      Models::CreateKnowledgeBaseAliDingDocResponse createKnowledgeBaseAliDingDocWithOptions(const Models::CreateKnowledgeBaseAliDingDocRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads an AliDing online document to the enterprise knowledge base. Management permissions are required.
       *
       * @description ## Request description
       * - This operation adds an AliDing online document to a specified enterprise knowledge base.
       * - The caller must have the `DEVELOPMENT_KB_MANAGE` permission.
       * - `source_type` is fixed to `ONLINE_DOC`, `platform` is fixed to `ALI_DING`, and `scope` is fixed to `TENANT`.
       * - If `directoryId` is not provided, the document is bound to the root directory of the current digital employee by default. If provided, it must be a valid directory ID under the current tenant.
       * - The `filePublicUrl` parameter is required and specifies the publicly accessible URL of the AliDing online document to upload.
       * - Optional parameters include `operatingObjectName` (digital employee name), `description` (resource description), `knowledgeId` (knowledge base ID), and `sourceTags` (resource tags).
       * - A successful response returns information about the newly created resource, such as `sourceId`, `name`, `status`, `directoryId`, and creation time.
       *
       * @param request CreateKnowledgeBaseAliDingDocRequest
       * @return CreateKnowledgeBaseAliDingDocResponse
       */
      Models::CreateKnowledgeBaseAliDingDocResponse createKnowledgeBaseAliDingDoc(const Models::CreateKnowledgeBaseAliDingDocRequest &request);

      /**
       * @summary Creates a category directory in the enterprise knowledge base.
       *
       * @description ## Request description
       * - This operation allows users with the `DEVELOPMENT_KB_MANAGE` permission to create a category for the enterprise knowledge base.
       * - You can specify a parent category ID when creating a category. If no parent category ID is specified, the new category is mounted directly under the root directory of the enterprise knowledge base.
       * - The system automatically checks for name conflicts and directory depth limits.
       * - `tenant_id` and `user_id` are obtained only through authentication. These parameters are ignored even if they are provided in the request body.
       * - Ensure that the specified `parentDirectoryId` (if any) belongs to the current tenant.
       *
       * @param request CreateKnowledgeBaseDirectoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKnowledgeBaseDirectoryResponse
       */
      Models::CreateKnowledgeBaseDirectoryResponse createKnowledgeBaseDirectoryWithOptions(const Models::CreateKnowledgeBaseDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a category directory in the enterprise knowledge base.
       *
       * @description ## Request description
       * - This operation allows users with the `DEVELOPMENT_KB_MANAGE` permission to create a category for the enterprise knowledge base.
       * - You can specify a parent category ID when creating a category. If no parent category ID is specified, the new category is mounted directly under the root directory of the enterprise knowledge base.
       * - The system automatically checks for name conflicts and directory depth limits.
       * - `tenant_id` and `user_id` are obtained only through authentication. These parameters are ignored even if they are provided in the request body.
       * - Ensure that the specified `parentDirectoryId` (if any) belongs to the current tenant.
       *
       * @param request CreateKnowledgeBaseDirectoryRequest
       * @return CreateKnowledgeBaseDirectoryResponse
       */
      Models::CreateKnowledgeBaseDirectoryResponse createKnowledgeBaseDirectory(const Models::CreateKnowledgeBaseDirectoryRequest &request);

      /**
       * @summary Creates a single Lark online document in the enterprise knowledge base using the current user\\"s Lark authorization.
       *
       * @description ## Request description\\n\\nFixed as `ONLINE_DOC + FEISHU + TENANT`. `directoryId` is required. The invoker must have the enterprise knowledge base feature permission and knowledge base management permission on the target knowledge base.
       *
       * @param tmpReq CreateKnowledgeBaseFeishuDocRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKnowledgeBaseFeishuDocResponse
       */
      Models::CreateKnowledgeBaseFeishuDocResponse createKnowledgeBaseFeishuDocWithOptions(const Models::CreateKnowledgeBaseFeishuDocRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a single Lark online document in the enterprise knowledge base using the current user\\"s Lark authorization.
       *
       * @description ## Request description\\n\\nFixed as `ONLINE_DOC + FEISHU + TENANT`. `directoryId` is required. The invoker must have the enterprise knowledge base feature permission and knowledge base management permission on the target knowledge base.
       *
       * @param request CreateKnowledgeBaseFeishuDocRequest
       * @return CreateKnowledgeBaseFeishuDocResponse
       */
      Models::CreateKnowledgeBaseFeishuDocResponse createKnowledgeBaseFeishuDoc(const Models::CreateKnowledgeBaseFeishuDocRequest &request);

      /**
       * @summary Uploads a specified file to the enterprise knowledge base. Management permissions are required.
       *
       * @description ## Operation description
       * - This operation uploads a file to the enterprise knowledge base.
       * - The `DEVELOPMENT_KB_MANAGE` permission is required to call this operation.
       * - You must provide the Object Storage Service (OSS) persistent address (`filePath`) of the file when uploading.
       * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
       * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
       * - You can use `sourceTags` to add labels to resources for subsequent management and retrieval.
       * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Ensure that your account balance is sufficient.
       *
       * @param request CreateKnowledgeBaseFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKnowledgeBaseFileResponse
       */
      Models::CreateKnowledgeBaseFileResponse createKnowledgeBaseFileWithOptions(const Models::CreateKnowledgeBaseFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a specified file to the enterprise knowledge base. Management permissions are required.
       *
       * @description ## Operation description
       * - This operation uploads a file to the enterprise knowledge base.
       * - The `DEVELOPMENT_KB_MANAGE` permission is required to call this operation.
       * - You must provide the Object Storage Service (OSS) persistent address (`filePath`) of the file when uploading.
       * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
       * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
       * - You can use `sourceTags` to add labels to resources for subsequent management and retrieval.
       * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Ensure that your account balance is sufficient.
       *
       * @param request CreateKnowledgeBaseFileRequest
       * @return CreateKnowledgeBaseFileResponse
       */
      Models::CreateKnowledgeBaseFileResponse createKnowledgeBaseFile(const Models::CreateKnowledgeBaseFileRequest &request);

      /**
       * @summary Adds plain text content to a specified enterprise knowledge base.
       *
       * @description ## Operation description
       * - This API is used to upload plain text information to an enterprise knowledge base. The caller must have the required management permissions.
       * - The `textContent` field is required and represents the plain text content to upload.
       * - Optional parameters include the digital employee name (`operatingObjectName`) and resource description (`description`), which allow users to customize additional details.
       * - If `directoryId` is provided, the uploaded text is attached to the specified knowledge base folder. If not provided, the text is attached to the root folder of the current digital employee by default.
       * - You can use `sourceTags` to add labels to resources for easier management and retrieval.
       * - Before invoking this operation, make sure that you have correctly configured the authentication method (AK, BearerToken, and APP authentication are supported) and have the `DEVELOPMENT_KB_MANAGE` permission.
       *
       * @param request CreateKnowledgeBaseTextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKnowledgeBaseTextResponse
       */
      Models::CreateKnowledgeBaseTextResponse createKnowledgeBaseTextWithOptions(const Models::CreateKnowledgeBaseTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds plain text content to a specified enterprise knowledge base.
       *
       * @description ## Operation description
       * - This API is used to upload plain text information to an enterprise knowledge base. The caller must have the required management permissions.
       * - The `textContent` field is required and represents the plain text content to upload.
       * - Optional parameters include the digital employee name (`operatingObjectName`) and resource description (`description`), which allow users to customize additional details.
       * - If `directoryId` is provided, the uploaded text is attached to the specified knowledge base folder. If not provided, the text is attached to the root folder of the current digital employee by default.
       * - You can use `sourceTags` to add labels to resources for easier management and retrieval.
       * - Before invoking this operation, make sure that you have correctly configured the authentication method (AK, BearerToken, and APP authentication are supported) and have the `DEVELOPMENT_KB_MANAGE` permission.
       *
       * @param request CreateKnowledgeBaseTextRequest
       * @return CreateKnowledgeBaseTextResponse
       */
      Models::CreateKnowledgeBaseTextResponse createKnowledgeBaseText(const Models::CreateKnowledgeBaseTextRequest &request);

      /**
       * @summary Creates a personal AliDing group chat knowledge resource.
       *
       * @description ## Request description
       * - Connects the specified AliDing group chat to the current user\\"s personal knowledge base.
       * - The resource type is fixed to ALI_DING, the scope is fixed to PERSONAL, and the owning user is parsed from the gateway authentication identity.
       * - historyStartTime is required and supports YYYY-MM-DD or YYYY-MM-DD HH:MM:SS format.
       * - updateFrequency can be configured with a preset or a five-field cron expression for subsequent synchronization frequency.
       * - chatId must be unique within the target personal scope.
       *
       * @param tmpReq CreatePersonalAliDingChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalAliDingChatResponse
       */
      Models::CreatePersonalAliDingChatResponse createPersonalAliDingChatWithOptions(const Models::CreatePersonalAliDingChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a personal AliDing group chat knowledge resource.
       *
       * @description ## Request description
       * - Connects the specified AliDing group chat to the current user\\"s personal knowledge base.
       * - The resource type is fixed to ALI_DING, the scope is fixed to PERSONAL, and the owning user is parsed from the gateway authentication identity.
       * - historyStartTime is required and supports YYYY-MM-DD or YYYY-MM-DD HH:MM:SS format.
       * - updateFrequency can be configured with a preset or a five-field cron expression for subsequent synchronization frequency.
       * - chatId must be unique within the target personal scope.
       *
       * @param request CreatePersonalAliDingChatRequest
       * @return CreatePersonalAliDingChatResponse
       */
      Models::CreatePersonalAliDingChatResponse createPersonalAliDingChat(const Models::CreatePersonalAliDingChatRequest &request);

      /**
       * @summary Uploads an AliDing meeting file to the personal resource library of the current digital employee.
       *
       * @description ## Request description
       * - This API uploads AliDing meeting materials (such as audio/video files and Shanji links) to the "My Resources" section of a specified digital employee.
       * - The `source_type` is fixed to `ALI_DING_MEETING`, and the `scope` is fixed to `PERSONAL`.
       * - You must provide a public audio/video OSS URL (`ossUrl`) and the original Shanji link (`shanjiUrl`).
       * - Optionally, you can specify a target personal directory ID (`directoryId`). If not specified, the resource is automatically bound to the default root directory of the current digital employee.
       * - You can add a resource description (`description`) and meeting notes (`notes`). The meeting notes can be used for auxiliary analysis.
       * - This operation requires authentication. AK, BearerToken, and APP authentication methods are supported.
       *
       * @param request CreatePersonalAliDingMeetingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalAliDingMeetingResponse
       */
      Models::CreatePersonalAliDingMeetingResponse createPersonalAliDingMeetingWithOptions(const Models::CreatePersonalAliDingMeetingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads an AliDing meeting file to the personal resource library of the current digital employee.
       *
       * @description ## Request description
       * - This API uploads AliDing meeting materials (such as audio/video files and Shanji links) to the "My Resources" section of a specified digital employee.
       * - The `source_type` is fixed to `ALI_DING_MEETING`, and the `scope` is fixed to `PERSONAL`.
       * - You must provide a public audio/video OSS URL (`ossUrl`) and the original Shanji link (`shanjiUrl`).
       * - Optionally, you can specify a target personal directory ID (`directoryId`). If not specified, the resource is automatically bound to the default root directory of the current digital employee.
       * - You can add a resource description (`description`) and meeting notes (`notes`). The meeting notes can be used for auxiliary analysis.
       * - This operation requires authentication. AK, BearerToken, and APP authentication methods are supported.
       *
       * @param request CreatePersonalAliDingMeetingRequest
       * @return CreatePersonalAliDingMeetingResponse
       */
      Models::CreatePersonalAliDingMeetingResponse createPersonalAliDingMeeting(const Models::CreatePersonalAliDingMeetingRequest &request);

      /**
       * @summary Uploads an AliDing online document to the personal resources of the current digital employee.
       *
       * @description ## Request description
       * - This API is used to add an AliDing online document to the "My Resources" section of a specified digital employee.
       * - Fixed parameters include `source_type=ONLINE_DOC`, `platform=ALI_DING`, and `scope=PERSONAL`.
       * - If `directoryId` is not provided, the document is attached to the root folder of the current digital employee by default. If provided, ensure that the folder belongs to the current user and exists under the current digital employee.
       * - During the invoke process, metering is started and related operation logs are recorded.
       * - For security purposes, `tenant_id` and `user_id` are obtained only from the authentication identity. Values provided by the caller for these fields are ignored.
       * - Any validation or execute failure is thrown as an exception by the service and transformed into a POP error code returned to the caller.
       *
       * @param request CreatePersonalAlidingDocRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalAlidingDocResponse
       */
      Models::CreatePersonalAlidingDocResponse createPersonalAlidingDocWithOptions(const Models::CreatePersonalAlidingDocRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads an AliDing online document to the personal resources of the current digital employee.
       *
       * @description ## Request description
       * - This API is used to add an AliDing online document to the "My Resources" section of a specified digital employee.
       * - Fixed parameters include `source_type=ONLINE_DOC`, `platform=ALI_DING`, and `scope=PERSONAL`.
       * - If `directoryId` is not provided, the document is attached to the root folder of the current digital employee by default. If provided, ensure that the folder belongs to the current user and exists under the current digital employee.
       * - During the invoke process, metering is started and related operation logs are recorded.
       * - For security purposes, `tenant_id` and `user_id` are obtained only from the authentication identity. Values provided by the caller for these fields are ignored.
       * - Any validation or execute failure is thrown as an exception by the service and transformed into a POP error code returned to the caller.
       *
       * @param request CreatePersonalAlidingDocRequest
       * @return CreatePersonalAlidingDocResponse
       */
      Models::CreatePersonalAlidingDocResponse createPersonalAlidingDoc(const Models::CreatePersonalAlidingDocRequest &request);

      /**
       * @summary Adds an AliDing knowledge base to the personal resources of the current digital employee.
       *
       * @description ## Request description
       * - This API creates an AliDing knowledge base and mounts it to the personal resource directory of the specified digital employee.
       * - `platform` is fixed to `ALI_DING`, and `directory_type` is fixed to `PERSONAL`.
       * - If `directoryId` is provided, the system verifies that the directory exists and belongs to the current tenant and is of the personal type.
       * - During creation, the knowledge base root directory is initialized (with the status set to `RUNNING`), and background tasks are dispatched based on the provided synchronization configuration to pull the remote directory tree and create child nodes.
       * - For security purposes, `tenant_id` and `user_id` are obtained only from the authenticated identity. These fields in the request body are ignored.
       * - The synchronization configuration is optional. If enabled, a cron expression must be provided. If not provided or disabled, scheduled synchronization is not performed by default.
       * - The knowledge base name can be customized. If not provided, it is automatically populated after background synchronization.
       * - Multi-value object binding is supported. Related information is serialized and stored in the knowledge base metadata.
       *
       * @param tmpReq CreatePersonalAlidingKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalAlidingKnowledgeBaseResponse
       */
      Models::CreatePersonalAlidingKnowledgeBaseResponse createPersonalAlidingKnowledgeBaseWithOptions(const Models::CreatePersonalAlidingKnowledgeBaseRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an AliDing knowledge base to the personal resources of the current digital employee.
       *
       * @description ## Request description
       * - This API creates an AliDing knowledge base and mounts it to the personal resource directory of the specified digital employee.
       * - `platform` is fixed to `ALI_DING`, and `directory_type` is fixed to `PERSONAL`.
       * - If `directoryId` is provided, the system verifies that the directory exists and belongs to the current tenant and is of the personal type.
       * - During creation, the knowledge base root directory is initialized (with the status set to `RUNNING`), and background tasks are dispatched based on the provided synchronization configuration to pull the remote directory tree and create child nodes.
       * - For security purposes, `tenant_id` and `user_id` are obtained only from the authenticated identity. These fields in the request body are ignored.
       * - The synchronization configuration is optional. If enabled, a cron expression must be provided. If not provided or disabled, scheduled synchronization is not performed by default.
       * - The knowledge base name can be customized. If not provided, it is automatically populated after background synchronization.
       * - Multi-value object binding is supported. Related information is serialized and stored in the knowledge base metadata.
       *
       * @param request CreatePersonalAlidingKnowledgeBaseRequest
       * @return CreatePersonalAlidingKnowledgeBaseResponse
       */
      Models::CreatePersonalAlidingKnowledgeBaseResponse createPersonalAlidingKnowledgeBase(const Models::CreatePersonalAlidingKnowledgeBaseRequest &request);

      /**
       * @summary Creates a personal DingTalk group chat knowledge source.
       *
       * @description ## Operation description
       * - Connects a specified DingTalk group chat to the personal knowledge base of the current user.
       * - The resource type is fixed to DINGTALK, the scope is fixed to PERSONAL, and the owning user is parsed from the gateway authentication identity.
       * - historyStartTime is required and supports YYYY-MM-DD or YYYY-MM-DD HH:MM:SS format.
       * - updateFrequency can be configured with a preset or a five-field cron expression for subsequent synchronization frequency.
       * - The same group chat can be created as different sources. Each source is isolated by sourceId.
       *
       * @param tmpReq CreatePersonalDingtalkChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalDingtalkChatResponse
       */
      Models::CreatePersonalDingtalkChatResponse createPersonalDingtalkChatWithOptions(const Models::CreatePersonalDingtalkChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a personal DingTalk group chat knowledge source.
       *
       * @description ## Operation description
       * - Connects a specified DingTalk group chat to the personal knowledge base of the current user.
       * - The resource type is fixed to DINGTALK, the scope is fixed to PERSONAL, and the owning user is parsed from the gateway authentication identity.
       * - historyStartTime is required and supports YYYY-MM-DD or YYYY-MM-DD HH:MM:SS format.
       * - updateFrequency can be configured with a preset or a five-field cron expression for subsequent synchronization frequency.
       * - The same group chat can be created as different sources. Each source is isolated by sourceId.
       *
       * @param request CreatePersonalDingtalkChatRequest
       * @return CreatePersonalDingtalkChatResponse
       */
      Models::CreatePersonalDingtalkChatResponse createPersonalDingtalkChat(const Models::CreatePersonalDingtalkChatRequest &request);

      /**
       * @deprecated OpenAPI CreatePersonalDingtalkMeeting is deprecated
       *
       * @summary Uploads a DingTalk meeting to the personal resource library of the current digital employee.
       *
       * @description ## Request description
       * - This operation uploads a DingTalk meeting as a resource to the "My Resources" section of a specified digital employee.
       * - `source_type` is fixed to `DINGTALK_MEETING`, and `scope` is fixed to `PERSONAL`.
       * - If `credentialId` is not provided, the system default configurations are used.
       * - If `directoryId` is not specified, the resource is automatically attached to the default root folder of the current digital employee. If specified, it must be an existing personal folder of the invoker under the digital employee.
       * - The optional parameters `description` and `notes` are used to describe the resource and record meeting notes, respectively. The `notes` value is used for auxiliary analysis.
       *
       * @param request CreatePersonalDingtalkMeetingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalDingtalkMeetingResponse
       */
      Models::CreatePersonalDingtalkMeetingResponse createPersonalDingtalkMeetingWithOptions(const Models::CreatePersonalDingtalkMeetingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreatePersonalDingtalkMeeting is deprecated
       *
       * @summary Uploads a DingTalk meeting to the personal resource library of the current digital employee.
       *
       * @description ## Request description
       * - This operation uploads a DingTalk meeting as a resource to the "My Resources" section of a specified digital employee.
       * - `source_type` is fixed to `DINGTALK_MEETING`, and `scope` is fixed to `PERSONAL`.
       * - If `credentialId` is not provided, the system default configurations are used.
       * - If `directoryId` is not specified, the resource is automatically attached to the default root folder of the current digital employee. If specified, it must be an existing personal folder of the invoker under the digital employee.
       * - The optional parameters `description` and `notes` are used to describe the resource and record meeting notes, respectively. The `notes` value is used for auxiliary analysis.
       *
       * @param request CreatePersonalDingtalkMeetingRequest
       * @return CreatePersonalDingtalkMeetingResponse
       */
      Models::CreatePersonalDingtalkMeetingResponse createPersonalDingtalkMeeting(const Models::CreatePersonalDingtalkMeetingRequest &request);

      /**
       * @summary Uploads a meeting to the current user\\"s personal knowledge base by using a standard DingTalk Shanji URL.
       *
       * @description ## Request description
       * - This API creates a meeting resource by using a standard DingTalk Shanji link. The collection method is fixed to the DWS corresponding to personal OAuth.
       * - `source_type` is fixed to `DINGTALK_MEETING`, and `scope` is fixed to `PERSONAL`.
       * - You must provide a standard DingTalk Shanji link or taskUuid (`shanjiUrl`).
       * - Optionally specify a target personal directory ID (`directoryId`). If not specified, the default root directory of the current digital employee is used.
       * - You can add a resource description (`description`) and meeting notes (`notes`).
       * - This operation supports one of the following authentication methods: AK, BearerToken, or APP.
       *
       * @param request CreatePersonalDingtalkMinutesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalDingtalkMinutesResponse
       */
      Models::CreatePersonalDingtalkMinutesResponse createPersonalDingtalkMinutesWithOptions(const Models::CreatePersonalDingtalkMinutesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a meeting to the current user\\"s personal knowledge base by using a standard DingTalk Shanji URL.
       *
       * @description ## Request description
       * - This API creates a meeting resource by using a standard DingTalk Shanji link. The collection method is fixed to the DWS corresponding to personal OAuth.
       * - `source_type` is fixed to `DINGTALK_MEETING`, and `scope` is fixed to `PERSONAL`.
       * - You must provide a standard DingTalk Shanji link or taskUuid (`shanjiUrl`).
       * - Optionally specify a target personal directory ID (`directoryId`). If not specified, the default root directory of the current digital employee is used.
       * - You can add a resource description (`description`) and meeting notes (`notes`).
       * - This operation supports one of the following authentication methods: AK, BearerToken, or APP.
       *
       * @param request CreatePersonalDingtalkMinutesRequest
       * @return CreatePersonalDingtalkMinutesResponse
       */
      Models::CreatePersonalDingtalkMinutesResponse createPersonalDingtalkMinutes(const Models::CreatePersonalDingtalkMinutesRequest &request);

      /**
       * @summary Creates a personal folder (category) under My Resources.
       *
       * @description ## Request description
       * - This API is used to create a personal folder (category) under "My Resources".
       * - If `parentDirectoryId` is not specified, the system automatically uses or creates the default root folder of the current digital employee as the parent folder.
       * - If `parentDirectoryId` is specified, it must be an existing personal folder of the current user under the current digital employee.
       * - `tenant_id` and `user_id` are derived from the authenticated identity only. These fields are ignored if passed in the request body.
       *
       * @param request CreatePersonalDirectoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalDirectoryResponse
       */
      Models::CreatePersonalDirectoryResponse createPersonalDirectoryWithOptions(const Models::CreatePersonalDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a personal folder (category) under My Resources.
       *
       * @description ## Request description
       * - This API is used to create a personal folder (category) under "My Resources".
       * - If `parentDirectoryId` is not specified, the system automatically uses or creates the default root folder of the current digital employee as the parent folder.
       * - If `parentDirectoryId` is specified, it must be an existing personal folder of the current user under the current digital employee.
       * - `tenant_id` and `user_id` are derived from the authenticated identity only. These fields are ignored if passed in the request body.
       *
       * @param request CreatePersonalDirectoryRequest
       * @return CreatePersonalDirectoryResponse
       */
      Models::CreatePersonalDirectoryResponse createPersonalDirectory(const Models::CreatePersonalDirectoryRequest &request);

      /**
       * @summary Creates a personal knowledge resource from a single Lark group chat using the current user\\"s Lark authorization.
       *
       * @description ## Request description
       * This API uses the Lark application connection managed by the user corresponding to the current OpenAPI identity. It pulls the name and historical messages of the specified group chat through the built-in CLI of the project and creates a knowledge resource in the user\\"s personal knowledge base.
       * - `chatId`: The Lark group chat ID. Must start with `oc_`.
       * - `directoryId` (optional): The target personal directory ID. If omitted, the current user\\"s default personal root directory is used.
       * - `historyStartTime` (optional): The start time for historical messages. Supports `YYYY-MM-DD` or `YYYY-MM-DD HH:MM:SS`.
       * - `updateFrequency` (optional): The Source-level scheduled synchronization configuration. Supports preset frequencies or five-field cron expressions.
       * - `description`, `operatingObjectName`, `notes`, `sourceTags`: Optional Source metadata.
       * Security constraints: The Source Type is fixed to FEISHU, and the knowledge scope is fixed to PERSONAL. The Lark connector user is determined by the POP trusted identity. Credentials or user IDs passed by the caller are not accepted.
       *
       * @param tmpReq CreatePersonalFeishuChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalFeishuChatResponse
       */
      Models::CreatePersonalFeishuChatResponse createPersonalFeishuChatWithOptions(const Models::CreatePersonalFeishuChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a personal knowledge resource from a single Lark group chat using the current user\\"s Lark authorization.
       *
       * @description ## Request description
       * This API uses the Lark application connection managed by the user corresponding to the current OpenAPI identity. It pulls the name and historical messages of the specified group chat through the built-in CLI of the project and creates a knowledge resource in the user\\"s personal knowledge base.
       * - `chatId`: The Lark group chat ID. Must start with `oc_`.
       * - `directoryId` (optional): The target personal directory ID. If omitted, the current user\\"s default personal root directory is used.
       * - `historyStartTime` (optional): The start time for historical messages. Supports `YYYY-MM-DD` or `YYYY-MM-DD HH:MM:SS`.
       * - `updateFrequency` (optional): The Source-level scheduled synchronization configuration. Supports preset frequencies or five-field cron expressions.
       * - `description`, `operatingObjectName`, `notes`, `sourceTags`: Optional Source metadata.
       * Security constraints: The Source Type is fixed to FEISHU, and the knowledge scope is fixed to PERSONAL. The Lark connector user is determined by the POP trusted identity. Credentials or user IDs passed by the caller are not accepted.
       *
       * @param request CreatePersonalFeishuChatRequest
       * @return CreatePersonalFeishuChatResponse
       */
      Models::CreatePersonalFeishuChatResponse createPersonalFeishuChat(const Models::CreatePersonalFeishuChatRequest &request);

      /**
       * @summary Creates a personal knowledge resource from a single Lark online document using the current user\\"s Lark authorization.
       *
       * @description ## Request description\\n\\nFixed as `ONLINE_DOC + FEISHU + PERSONAL`. The Lark connector user is determined by the trusted OpenAPI identity. If `directoryId` is omitted, the current user\\"s default personal root directory is used.
       *
       * @param tmpReq CreatePersonalFeishuDocRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalFeishuDocResponse
       */
      Models::CreatePersonalFeishuDocResponse createPersonalFeishuDocWithOptions(const Models::CreatePersonalFeishuDocRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a personal knowledge resource from a single Lark online document using the current user\\"s Lark authorization.
       *
       * @description ## Request description\\n\\nFixed as `ONLINE_DOC + FEISHU + PERSONAL`. The Lark connector user is determined by the trusted OpenAPI identity. If `directoryId` is omitted, the current user\\"s default personal root directory is used.
       *
       * @param request CreatePersonalFeishuDocRequest
       * @return CreatePersonalFeishuDocResponse
       */
      Models::CreatePersonalFeishuDocResponse createPersonalFeishuDoc(const Models::CreatePersonalFeishuDocRequest &request);

      /**
       * @summary Uploads a Lark Minutes meeting file to the personal resource library of the current digital employee.
       *
       * @description ## Request description
       * This API uploads a meeting record from Lark Minutes to the "My Resources" section of a specified digital employee. By providing the required parameters, such as the unique identifier of the Lark Minutes record (`minuteToken`) and the credential ID (`credentialId`), you can migrate and save meeting content. If no target directory is specified, the resource is bound to the root directory of the current digital employee by default.
       * - `operatingObjectName`: The name of the digital employee that performs the operation.
       * - `name`: The display name of the uploaded resource in the system.
       * - `minuteToken`: The unique identifier of the meeting from the Lark Minutes platform.
       * - `credentialId`: The ID associated with specific authentication information, used to verify the validity of the request.
       * - `directoryId` (optional): The ID of the target personal directory where the resource is stored. If this field is omitted, the resource is automatically placed in the default location.
       * - `description` (optional): A brief description or note about the uploaded resource.
       * Precautions:
       * - Ensure that the provided `minuteToken` and `credentialId` are valid.
       * - If `directoryId` is specified, confirm that it belongs to one of the available personal directories of the caller in the current digital employee environment.
       *
       * @param request CreatePersonalFeishuMinuteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalFeishuMinuteResponse
       */
      Models::CreatePersonalFeishuMinuteResponse createPersonalFeishuMinuteWithOptions(const Models::CreatePersonalFeishuMinuteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a Lark Minutes meeting file to the personal resource library of the current digital employee.
       *
       * @description ## Request description
       * This API uploads a meeting record from Lark Minutes to the "My Resources" section of a specified digital employee. By providing the required parameters, such as the unique identifier of the Lark Minutes record (`minuteToken`) and the credential ID (`credentialId`), you can migrate and save meeting content. If no target directory is specified, the resource is bound to the root directory of the current digital employee by default.
       * - `operatingObjectName`: The name of the digital employee that performs the operation.
       * - `name`: The display name of the uploaded resource in the system.
       * - `minuteToken`: The unique identifier of the meeting from the Lark Minutes platform.
       * - `credentialId`: The ID associated with specific authentication information, used to verify the validity of the request.
       * - `directoryId` (optional): The ID of the target personal directory where the resource is stored. If this field is omitted, the resource is automatically placed in the default location.
       * - `description` (optional): A brief description or note about the uploaded resource.
       * Precautions:
       * - Ensure that the provided `minuteToken` and `credentialId` are valid.
       * - If `directoryId` is specified, confirm that it belongs to one of the available personal directories of the caller in the current digital employee environment.
       *
       * @param request CreatePersonalFeishuMinuteRequest
       * @return CreatePersonalFeishuMinuteResponse
       */
      Models::CreatePersonalFeishuMinuteResponse createPersonalFeishuMinute(const Models::CreatePersonalFeishuMinuteRequest &request);

      /**
       * @summary Uploads a file to the personal resource library of the current digital employee.
       *
       * @description ## Request description
       * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
       * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
       * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
       * - If the target folder ID (`directoryId`) is not specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the personal folder of the caller.
       * - Security authentication is supported through multiple authentication methods (AK, BearerToken, and APP) to authenticate requests.
       * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
       * To invoke this operation, you can use AK, BearerToken, or APP authentication.
       *
       * @param request CreatePersonalFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalFileResponse
       */
      Models::CreatePersonalFileResponse createPersonalFileWithOptions(const Models::CreatePersonalFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a file to the personal resource library of the current digital employee.
       *
       * @description ## Request description
       * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
       * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
       * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
       * - If the target folder ID (`directoryId`) is not specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the personal folder of the caller.
       * - Security authentication is supported through multiple authentication methods (AK, BearerToken, and APP) to authenticate requests.
       * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
       * To invoke this operation, you can use AK, BearerToken, or APP authentication.
       *
       * @param request CreatePersonalFileRequest
       * @return CreatePersonalFileResponse
       */
      Models::CreatePersonalFileResponse createPersonalFile(const Models::CreatePersonalFileRequest &request);

      /**
       * @summary Uploads plain text content to the personal resource library of the current digital employee.
       *
       * @description ## Operation description
       * - This API is used to add plain text content to the personal resources of a specified digital employee.
       * - `source_type` is fixed to `TEXT`, and `scope` is fixed to `PERSONAL`.
       * - If `directoryId` is not provided, the content is bound to the root directory of the current digital employee by default. If provided, it must be an existing personal directory of the caller under the digital employee.
       * - `tenant_id` and `user_id` can only be obtained from the authentication identity information. These parameters are ignored if passed in the request body.
       * - The call initiates metering and generates a corresponding `billing_id`.
       * - The text content is written to `unstructured_docs`, and an initial resource record is generated.
       * - Any validation or execution failure throws a `RobjectException`, which is converted to a POP error code by the global middleware and returned to the caller.
       *
       * @param request CreatePersonalTextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalTextResponse
       */
      Models::CreatePersonalTextResponse createPersonalTextWithOptions(const Models::CreatePersonalTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads plain text content to the personal resource library of the current digital employee.
       *
       * @description ## Operation description
       * - This API is used to add plain text content to the personal resources of a specified digital employee.
       * - `source_type` is fixed to `TEXT`, and `scope` is fixed to `PERSONAL`.
       * - If `directoryId` is not provided, the content is bound to the root directory of the current digital employee by default. If provided, it must be an existing personal directory of the caller under the digital employee.
       * - `tenant_id` and `user_id` can only be obtained from the authentication identity information. These parameters are ignored if passed in the request body.
       * - The call initiates metering and generates a corresponding `billing_id`.
       * - The text content is written to `unstructured_docs`, and an initial resource record is generated.
       * - Any validation or execution failure throws a `RobjectException`, which is converted to a POP error code by the global middleware and returned to the caller.
       *
       * @param request CreatePersonalTextRequest
       * @return CreatePersonalTextResponse
       */
      Models::CreatePersonalTextResponse createPersonalText(const Models::CreatePersonalTextRequest &request);

      /**
       * @summary Uploads an offline meeting audio file to the personal resources of the current digital employee.
       *
       * @description ## Operation description
       * - This API operation uploads an offline meeting audio file to the "My Resources" section of a specified digital employee.
       * - `source_type` is fixed to `VOICE_MEETING`, `scope` is fixed to `PERSONAL`, and `voice_meeting_type` is fixed to `OFFLINE`.
       * - If `directoryId` is not provided in the request body, the resource is automatically bound to the default root directory. If `directoryId` is provided, it must be an existing personal directory of the current user under the current digital employee.
       * - Calling this operation starts a background process to transcribe the audio file and returns information about the newly created resource.
       * - For security purposes, `tenant_id` and `user_id` are obtained only from the authenticated identity. These fields are ignored even if they are included in the request body.
       * - Any validation or execution failure throws a `RobjectException`, which is converted to a POP error code through the global middleware.
       *
       * @param request CreatePersonalVoiceMeetingRequest
       * @param headers CreatePersonalVoiceMeetingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePersonalVoiceMeetingResponse
       */
      Models::CreatePersonalVoiceMeetingResponse createPersonalVoiceMeetingWithOptions(const Models::CreatePersonalVoiceMeetingRequest &request, const Models::CreatePersonalVoiceMeetingHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads an offline meeting audio file to the personal resources of the current digital employee.
       *
       * @description ## Operation description
       * - This API operation uploads an offline meeting audio file to the "My Resources" section of a specified digital employee.
       * - `source_type` is fixed to `VOICE_MEETING`, `scope` is fixed to `PERSONAL`, and `voice_meeting_type` is fixed to `OFFLINE`.
       * - If `directoryId` is not provided in the request body, the resource is automatically bound to the default root directory. If `directoryId` is provided, it must be an existing personal directory of the current user under the current digital employee.
       * - Calling this operation starts a background process to transcribe the audio file and returns information about the newly created resource.
       * - For security purposes, `tenant_id` and `user_id` are obtained only from the authenticated identity. These fields are ignored even if they are included in the request body.
       * - Any validation or execution failure throws a `RobjectException`, which is converted to a POP error code through the global middleware.
       *
       * @param request CreatePersonalVoiceMeetingRequest
       * @return CreatePersonalVoiceMeetingResponse
       */
      Models::CreatePersonalVoiceMeetingResponse createPersonalVoiceMeeting(const Models::CreatePersonalVoiceMeetingRequest &request);

      /**
       * @summary Creates a scheduled task.
       *
       * @description ## Operation description
       * - This operation is used to upload files to an enterprise knowledge base.
       * - You must have the `DEVELOPMENT_KB_MANAGE` permission to call this API operation.
       * - You must provide the OSS persistent address (`filePath`) of the file when uploading.
       * - Optional parameters include the public access URL of the file and the original file name to enhance the completeness of file information.
       * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee by default.
       * - You can add tags to resources by using `sourceTags` for subsequent management and retrieval.
       * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Make sure that your account balance is sufficient.
       *
       * @param tmpReq CreateScheduledTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTaskWithOptions(const Models::CreateScheduledTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled task.
       *
       * @description ## Operation description
       * - This operation is used to upload files to an enterprise knowledge base.
       * - You must have the `DEVELOPMENT_KB_MANAGE` permission to call this API operation.
       * - You must provide the OSS persistent address (`filePath`) of the file when uploading.
       * - Optional parameters include the public access URL of the file and the original file name to enhance the completeness of file information.
       * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee by default.
       * - You can add tags to resources by using `sourceTags` for subsequent management and retrieval.
       * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Make sure that your account balance is sufficient.
       *
       * @param request CreateScheduledTaskRequest
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTask(const Models::CreateScheduledTaskRequest &request);

      /**
       * @summary Adds a knowledge base and knowledge base categories.
       *
       * @description ## Request description
       * - This API is used to create a new enterprise knowledge base folder under a specified tenant.
       * - You can set the `parentId` parameter to specify the parent folder of the new folder. If this parameter is not specified, the folder is created as a root folder by default.
       * - The `path` parameter is optional. If this parameter is not specified, the system automatically calculates the path based on the parent folder.
       * - Calling this operation requires the corresponding permissions. Multiple authentication methods are supported, including AK, BearerToken, and APP authentication.
       * - After the folder is created, the related information about the new folder is returned, such as the folder ID and name.
       *
       * @param request CreateTenantDirectoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTenantDirectoryResponse
       */
      Models::CreateTenantDirectoryResponse createTenantDirectoryWithOptions(const Models::CreateTenantDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a knowledge base and knowledge base categories.
       *
       * @description ## Request description
       * - This API is used to create a new enterprise knowledge base folder under a specified tenant.
       * - You can set the `parentId` parameter to specify the parent folder of the new folder. If this parameter is not specified, the folder is created as a root folder by default.
       * - The `path` parameter is optional. If this parameter is not specified, the system automatically calculates the path based on the parent folder.
       * - Calling this operation requires the corresponding permissions. Multiple authentication methods are supported, including AK, BearerToken, and APP authentication.
       * - After the folder is created, the related information about the new folder is returned, such as the folder ID and name.
       *
       * @param request CreateTenantDirectoryRequest
       * @return CreateTenantDirectoryResponse
       */
      Models::CreateTenantDirectoryResponse createTenantDirectory(const Models::CreateTenantDirectoryRequest &request);

      /**
       * @summary Creates a user and adds the user to a tenant.
       *
       * @description Creates a user by using OpenAPI.
       *     Business orchestration:
       *     1. Parses roleCodes into role_ids (validates against system role enumerations).
       *     2. Checks whether the user already exists (used to return the isNewUser flag).
       *     3. Calls UserManagementService.add_tenant_member to create or add the user (the password must be passed by the caller as an RSA ciphertext).
       *     4. Returns the creation result (including the isNewUser flag).
       *     Error codes:
       *     - ERR.User.DeactivatedInTenant: The user is deactivated in the tenant. Use updateUser to restore the user.
       *     - ERR.User.AlreadyInTenant: The user is already an active member of the tenant.
       *     - ERR.User.DisplayNameDuplicateInTenant: The display name is duplicate within the tenant.
       *
       * @param tmpReq CreateUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user and adds the user to a tenant.
       *
       * @description Creates a user by using OpenAPI.
       *     Business orchestration:
       *     1. Parses roleCodes into role_ids (validates against system role enumerations).
       *     2. Checks whether the user already exists (used to return the isNewUser flag).
       *     3. Calls UserManagementService.add_tenant_member to create or add the user (the password must be passed by the caller as an RSA ciphertext).
       *     4. Returns the creation result (including the isNewUser flag).
       *     Error codes:
       *     - ERR.User.DeactivatedInTenant: The user is deactivated in the tenant. Use updateUser to restore the user.
       *     - ERR.User.AlreadyInTenant: The user is already an active member of the tenant.
       *     - ERR.User.DisplayNameDuplicateInTenant: The display name is duplicate within the tenant.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @summary Creates a user group under the tenant to which the authenticated identity belongs.
       *
       * @description WinNexo user management OpenAPI: Creates a user group. The tenant identity is derived from the authentication context.
       *
       * @param request CreateUserGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroupWithOptions(const Models::CreateUserGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user group under the tenant to which the authenticated identity belongs.
       *
       * @description WinNexo user management OpenAPI: Creates a user group. The tenant identity is derived from the authentication context.
       *
       * @param request CreateUserGroupRequest
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroup(const Models::CreateUserGroupRequest &request);

      /**
       * @summary Creates a WINNEXO user in the current tenant and assigns roles and user groups to the user.
       *
       * @description ## Request description
       * - This operation creates a WINNEXO user under a specified tenant and optionally assigns system roles and user groups to the user.
       * - The `accountId` parameter serves as the logon account for the user and must be unique.
       * - The `displayName` parameter specifies the display name of the user, which must also be unique within the tenant and cannot exceed 100 characters in length.
       * - The optional `roleCodes` parameter specifies a list of roles for the user. By default, the `APPLICATION_USER` role is assigned.
       * - The `userGroupIds` parameter allows you to add up to 100 user group IDs to the new user. Make sure that all specified user groups belong to the same tenant.
       * - The password must be encrypted by using the RSA-OAEP-SHA256 algorithm and submitted in Base64 format.
       * - This operation supports calls over HTTPS and requires the request body in JSON format.
       * - For security authentication, AK, BearerToken, and APP are supported.
       *
       * @param tmpReq CreateUserWithGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserWithGroupsResponse
       */
      Models::CreateUserWithGroupsResponse createUserWithGroupsWithOptions(const Models::CreateUserWithGroupsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a WINNEXO user in the current tenant and assigns roles and user groups to the user.
       *
       * @description ## Request description
       * - This operation creates a WINNEXO user under a specified tenant and optionally assigns system roles and user groups to the user.
       * - The `accountId` parameter serves as the logon account for the user and must be unique.
       * - The `displayName` parameter specifies the display name of the user, which must also be unique within the tenant and cannot exceed 100 characters in length.
       * - The optional `roleCodes` parameter specifies a list of roles for the user. By default, the `APPLICATION_USER` role is assigned.
       * - The `userGroupIds` parameter allows you to add up to 100 user group IDs to the new user. Make sure that all specified user groups belong to the same tenant.
       * - The password must be encrypted by using the RSA-OAEP-SHA256 algorithm and submitted in Base64 format.
       * - This operation supports calls over HTTPS and requires the request body in JSON format.
       * - For security authentication, AK, BearerToken, and APP are supported.
       *
       * @param request CreateUserWithGroupsRequest
       * @return CreateUserWithGroupsResponse
       */
      Models::CreateUserWithGroupsResponse createUserWithGroups(const Models::CreateUserWithGroupsRequest &request);

      /**
       * @summary Deletes a session.
       *
       * @description ## Request description
       * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
       * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
       * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
       * - If the target directory ID (`directoryId`) is not specified, the file is automatically bound to the default root directory of the current digital employee. If specified, ensure that the directory belongs to the caller\\"s personal directory.
       * - Multiple authentication methods (AK, BearerToken, APP) are supported for security authentication.
       * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
       *
       * @param request DeleteChatSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatSessionResponse
       */
      Models::DeleteChatSessionResponse deleteChatSessionWithOptions(const Models::DeleteChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a session.
       *
       * @description ## Request description
       * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
       * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
       * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
       * - If the target directory ID (`directoryId`) is not specified, the file is automatically bound to the default root directory of the current digital employee. If specified, ensure that the directory belongs to the caller\\"s personal directory.
       * - Multiple authentication methods (AK, BearerToken, APP) are supported for security authentication.
       * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
       *
       * @param request DeleteChatSessionRequest
       * @return DeleteChatSessionResponse
       */
      Models::DeleteChatSessionResponse deleteChatSession(const Models::DeleteChatSessionRequest &request);

      /**
       * @summary Deletes a specified source.
       *
       * @description ## Operation description
       * - `tenantId` is derived from the authenticated identity only. Any value passed by the caller is ignored.
       * - `sourceId` is passed through the request body. The registration path is the flat URI `/openapi/deleteSource` and does not contain a `{sourceId}` path template. Do not append the resource ID as a path segment. The gateway performs exact routing based on the flat URI and returns `InvalidAction.NotFound` if the path does not match.
       * - Deletion is irreversible. The parsing results and bindings associated with the resource are invalidated.
       *
       * @param request DeleteSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSourceResponse
       */
      Models::DeleteSourceResponse deleteSourceWithOptions(const Models::DeleteSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified source.
       *
       * @description ## Operation description
       * - `tenantId` is derived from the authenticated identity only. Any value passed by the caller is ignored.
       * - `sourceId` is passed through the request body. The registration path is the flat URI `/openapi/deleteSource` and does not contain a `{sourceId}` path template. Do not append the resource ID as a path segment. The gateway performs exact routing based on the flat URI and returns `InvalidAction.NotFound` if the path does not match.
       * - Deletion is irreversible. The parsing results and bindings associated with the resource are invalidated.
       *
       * @param request DeleteSourceRequest
       * @return DeleteSourceResponse
       */
      Models::DeleteSourceResponse deleteSource(const Models::DeleteSourceRequest &request);

      /**
       * @summary Deletes an enterprise knowledge base and its subdirectories.
       *
       * @description ## Request description
       * - This API allows you to delete a specific enterprise knowledge base directory.
       * - Set the `deleteMode` parameter to select different deletion strategies, including reject deletion (reject), recursive deletion (recursive), or move the directory to the root directory (move_to_root).
       * - If `deleteMode` is not provided, the default behavior is to reject deletion.
       * - The enterprise directory boundary is validated before the deletion operation.
       *
       * @param request DeleteTenantDirectoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTenantDirectoryResponse
       */
      Models::DeleteTenantDirectoryResponse deleteTenantDirectoryWithOptions(const Models::DeleteTenantDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an enterprise knowledge base and its subdirectories.
       *
       * @description ## Request description
       * - This API allows you to delete a specific enterprise knowledge base directory.
       * - Set the `deleteMode` parameter to select different deletion strategies, including reject deletion (reject), recursive deletion (recursive), or move the directory to the root directory (move_to_root).
       * - If `deleteMode` is not provided, the default behavior is to reject deletion.
       * - The enterprise directory boundary is validated before the deletion operation.
       *
       * @param request DeleteTenantDirectoryRequest
       * @return DeleteTenantDirectoryResponse
       */
      Models::DeleteTenantDirectoryResponse deleteTenantDirectory(const Models::DeleteTenantDirectoryRequest &request);

      /**
       * @summary Disables an API token.
       *
       * @description Disables the INSTANCE token of a user.
       *     Business logic:
       *     1. Retrieves user_id from identity (caller_type=user is enforced).
       *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
       *     3. Calls disable_token (ACTIVE → INACTIVE).
       *     4. Returns disabled=True.
       *     Idempotence: If no ACTIVE token exists, deactivate_all affects 0 rows and does not return an error.
       *
       * @param request DisableTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableTokenResponse
       */
      Models::DisableTokenResponse disableTokenWithOptions(const Models::DisableTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an API token.
       *
       * @description Disables the INSTANCE token of a user.
       *     Business logic:
       *     1. Retrieves user_id from identity (caller_type=user is enforced).
       *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
       *     3. Calls disable_token (ACTIVE → INACTIVE).
       *     4. Returns disabled=True.
       *     Idempotence: If no ACTIVE token exists, deactivate_all affects 0 rows and does not return an error.
       *
       * @param request DisableTokenRequest
       * @return DisableTokenResponse
       */
      Models::DisableTokenResponse disableToken(const Models::DisableTokenRequest &request);

      /**
       * @summary Enables an API token.
       *
       * @description Enables the INSTANCE token for a user (idempotent).
       *     Business logic:
       *     1. Retrieves user_id from identity (caller_type=user is required).
       *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
       *     3. Calls enable_token:
       *        - If an ACTIVE token exists, returns idempotently (only the masked value is returned, and the plaintext is not issued again).
       *        - If an INACTIVE token exists, reactivates it (returns the plaintext).
       *        - If no token exists, creates one (returns the plaintext).
       *     Security constraint: The token plaintext is returned only once when the token is first enabled. Subsequent idempotent calls do not return the plaintext.
       *
       * @param request EnableTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableTokenResponse
       */
      Models::EnableTokenResponse enableTokenWithOptions(const Models::EnableTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an API token.
       *
       * @description Enables the INSTANCE token for a user (idempotent).
       *     Business logic:
       *     1. Retrieves user_id from identity (caller_type=user is required).
       *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
       *     3. Calls enable_token:
       *        - If an ACTIVE token exists, returns idempotently (only the masked value is returned, and the plaintext is not issued again).
       *        - If an INACTIVE token exists, reactivates it (returns the plaintext).
       *        - If no token exists, creates one (returns the plaintext).
       *     Security constraint: The token plaintext is returned only once when the token is first enabled. Subsequent idempotent calls do not return the plaintext.
       *
       * @param request EnableTokenRequest
       * @return EnableTokenResponse
       */
      Models::EnableTokenResponse enableToken(const Models::EnableTokenRequest &request);

      /**
       * @summary Retrieves session details.
       *
       * @description ## Request description
       * - This API uploads a file to the "My Resources" section of a specified digital employee.
       * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
       * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
       * - If no target folder ID (`directoryId`) is specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the invoker\\"s personal folder.
       * - Multiple authentication methods (AK, BearerToken, APP) are supported to authenticate requests.
       * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
       *
       * @param request GetChatSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatSessionResponse
       */
      Models::GetChatSessionResponse getChatSessionWithOptions(const Models::GetChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves session details.
       *
       * @description ## Request description
       * - This API uploads a file to the "My Resources" section of a specified digital employee.
       * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
       * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
       * - If no target folder ID (`directoryId`) is specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the invoker\\"s personal folder.
       * - Multiple authentication methods (AK, BearerToken, APP) are supported to authenticate requests.
       * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
       *
       * @param request GetChatSessionRequest
       * @return GetChatSessionResponse
       */
      Models::GetChatSessionResponse getChatSession(const Models::GetChatSessionRequest &request);

      /**
       * @summary Retrieves the active Graph Schema readable by the current user.
       *
       * @description Reads the active schema_content and securely trims it based on the token user\\"s semantic resource READ permissions.
       *
       * @param request GetGraphSchemaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGraphSchemaResponse
       */
      Models::GetGraphSchemaResponse getGraphSchemaWithOptions(const Models::GetGraphSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the active Graph Schema readable by the current user.
       *
       * @description Reads the active schema_content and securely trims it based on the token user\\"s semantic resource READ permissions.
       *
       * @param request GetGraphSchemaRequest
       * @return GetGraphSchemaResponse
       */
      Models::GetGraphSchemaResponse getGraphSchema(const Models::GetGraphSchemaRequest &request);

      /**
       * @summary Queries the expiration time of the most recently created standard package instance for a tenant.
       *
       * @description ## Operation description
       * - This API operation queries the expiration time of the most recently created standard package instance for a specified tenant.
       * - If no standard package instance is found, the `found` field returns `False`.
       * - You can use the `tenantId` parameter to specify the tenant ID. By default, the tenant ID of the caller is used.
       * - The request method is POST and must be called over HTTPS.
       * - Valid authentication information (such as AK, BearerToken, or APP) is required to complete the request.
       *
       * @param request GetInstanceExpireTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceExpireTimeResponse
       */
      Models::GetInstanceExpireTimeResponse getInstanceExpireTimeWithOptions(const Models::GetInstanceExpireTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the expiration time of the most recently created standard package instance for a tenant.
       *
       * @description ## Operation description
       * - This API operation queries the expiration time of the most recently created standard package instance for a specified tenant.
       * - If no standard package instance is found, the `found` field returns `False`.
       * - You can use the `tenantId` parameter to specify the tenant ID. By default, the tenant ID of the caller is used.
       * - The request method is POST and must be called over HTTPS.
       * - Valid authentication information (such as AK, BearerToken, or APP) is required to complete the request.
       *
       * @param request GetInstanceExpireTimeRequest
       * @return GetInstanceExpireTimeResponse
       */
      Models::GetInstanceExpireTimeResponse getInstanceExpireTime(const Models::GetInstanceExpireTimeRequest &request);

      /**
       * @summary Queries the details of a specified knowledge item in the enterprise knowledge base.
       *
       * @description ## Operation description
       * - This API operation retrieves the details of a specific knowledge item in the enterprise knowledge base.
       * - Calling this operation requires the `DEVELOPMENT_KB_VIEW` feature permission.
       * - Knowledge details include but are not limited to the knowledge type, name, and description.
       * - The `sourceId` parameter is required to identify the knowledge item to query.
       * - `tenantId` is an optional parameter. The tenant ID of the caller is used by default.
       * - Authentication is supported through `AK`, `BearerToken`, or `APP` methods.
       * - Security constraint: `tenant_id` and `user_id` can only be derived from the authenticated identity.
       *
       * @param request GetKnowledgeBaseSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKnowledgeBaseSourceResponse
       */
      Models::GetKnowledgeBaseSourceResponse getKnowledgeBaseSourceWithOptions(const Models::GetKnowledgeBaseSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified knowledge item in the enterprise knowledge base.
       *
       * @description ## Operation description
       * - This API operation retrieves the details of a specific knowledge item in the enterprise knowledge base.
       * - Calling this operation requires the `DEVELOPMENT_KB_VIEW` feature permission.
       * - Knowledge details include but are not limited to the knowledge type, name, and description.
       * - The `sourceId` parameter is required to identify the knowledge item to query.
       * - `tenantId` is an optional parameter. The tenant ID of the caller is used by default.
       * - Authentication is supported through `AK`, `BearerToken`, or `APP` methods.
       * - Security constraint: `tenant_id` and `user_id` can only be derived from the authenticated identity.
       *
       * @param request GetKnowledgeBaseSourceRequest
       * @return GetKnowledgeBaseSourceResponse
       */
      Models::GetKnowledgeBaseSourceResponse getKnowledgeBaseSource(const Models::GetKnowledgeBaseSourceRequest &request);

      /**
       * @summary Retrieves the execution details of a scheduled task.
       *
       * @description ## Operation description
       * - This operation uploads a file to an enterprise knowledge base.
       * - You must have the `DEVELOPMENT_KB_MANAGE` permission to call this API operation.
       * - You must provide the OSS persistent address (`filePath`) of the file when uploading.
       * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
       * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
       * - You can add tags to the resource by using `sourceTags` for subsequent management and retrieval.
       * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Make sure your account balance is sufficient.
       *
       * @param request GetScheduledTaskExecutionDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledTaskExecutionDetailResponse
       */
      Models::GetScheduledTaskExecutionDetailResponse getScheduledTaskExecutionDetailWithOptions(const Models::GetScheduledTaskExecutionDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the execution details of a scheduled task.
       *
       * @description ## Operation description
       * - This operation uploads a file to an enterprise knowledge base.
       * - You must have the `DEVELOPMENT_KB_MANAGE` permission to call this API operation.
       * - You must provide the OSS persistent address (`filePath`) of the file when uploading.
       * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
       * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
       * - You can add tags to the resource by using `sourceTags` for subsequent management and retrieval.
       * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Make sure your account balance is sufficient.
       *
       * @param request GetScheduledTaskExecutionDetailRequest
       * @return GetScheduledTaskExecutionDetailResponse
       */
      Models::GetScheduledTaskExecutionDetailResponse getScheduledTaskExecutionDetail(const Models::GetScheduledTaskExecutionDetailRequest &request);

      /**
       * @summary Retrieves execution records of scheduled tasks.
       *
       * @description ## Operation description
       * - This operation uploads a file to the enterprise knowledge base.
       * - The `DEVELOPMENT_KB_MANAGE` feature permission is required to call this API.
       * - You must provide the OSS persistent address (`filePath`) of the file when uploading.
       * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
       * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
       * - You can add tags to the resource by using `sourceTags` for subsequent management and retrieval.
       * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Ensure that your account balance is sufficient.
       *
       * @param request GetScheduledTaskExecutionRecordsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledTaskExecutionRecordsResponse
       */
      Models::GetScheduledTaskExecutionRecordsResponse getScheduledTaskExecutionRecordsWithOptions(const Models::GetScheduledTaskExecutionRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves execution records of scheduled tasks.
       *
       * @description ## Operation description
       * - This operation uploads a file to the enterprise knowledge base.
       * - The `DEVELOPMENT_KB_MANAGE` feature permission is required to call this API.
       * - You must provide the OSS persistent address (`filePath`) of the file when uploading.
       * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
       * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
       * - You can add tags to the resource by using `sourceTags` for subsequent management and retrieval.
       * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Ensure that your account balance is sufficient.
       *
       * @param request GetScheduledTaskExecutionRecordsRequest
       * @return GetScheduledTaskExecutionRecordsResponse
       */
      Models::GetScheduledTaskExecutionRecordsResponse getScheduledTaskExecutionRecords(const Models::GetScheduledTaskExecutionRecordsRequest &request);

      /**
       * @summary Retrieves the push configuration options for scheduled tasks.
       *
       * @description Queries the channels and methods available to the current user for scheduled task push notifications.
       *
       * @param request GetScheduledTaskPushOptionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledTaskPushOptionsResponse
       */
      Models::GetScheduledTaskPushOptionsResponse getScheduledTaskPushOptionsWithOptions(const Models::GetScheduledTaskPushOptionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the push configuration options for scheduled tasks.
       *
       * @description Queries the channels and methods available to the current user for scheduled task push notifications.
       *
       * @param request GetScheduledTaskPushOptionsRequest
       * @return GetScheduledTaskPushOptionsResponse
       */
      Models::GetScheduledTaskPushOptionsResponse getScheduledTaskPushOptions(const Models::GetScheduledTaskPushOptionsRequest &request);

      /**
       * @deprecated OpenAPI GetScheduledTaskUnderstandDetail is deprecated
       *
       * @summary Retrieves the details of scheduled task understanding.
       *
       * @description ## Operation description
       * - This operation uploads a file to the enterprise knowledge base.
       * - The `DEVELOPMENT_KB_MANAGE` feature permission is required to call this API.
       * - The OSS persistent address (`filePath`) of the file must be provided during upload.
       * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
       * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
       * - You can add tags to the resource by using `sourceTags` for subsequent management and retrieval.
       * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Ensure that your account balance is sufficient.
       *
       * @param tmpReq GetScheduledTaskUnderstandDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledTaskUnderstandDetailResponse
       */
      Models::GetScheduledTaskUnderstandDetailResponse getScheduledTaskUnderstandDetailWithOptions(const Models::GetScheduledTaskUnderstandDetailRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetScheduledTaskUnderstandDetail is deprecated
       *
       * @summary Retrieves the details of scheduled task understanding.
       *
       * @description ## Operation description
       * - This operation uploads a file to the enterprise knowledge base.
       * - The `DEVELOPMENT_KB_MANAGE` feature permission is required to call this API.
       * - The OSS persistent address (`filePath`) of the file must be provided during upload.
       * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
       * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
       * - You can add tags to the resource by using `sourceTags` for subsequent management and retrieval.
       * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Ensure that your account balance is sufficient.
       *
       * @param request GetScheduledTaskUnderstandDetailRequest
       * @return GetScheduledTaskUnderstandDetailResponse
       */
      Models::GetScheduledTaskUnderstandDetailResponse getScheduledTaskUnderstandDetail(const Models::GetScheduledTaskUnderstandDetailRequest &request);

      /**
       * @summary Retrieves skill details.
       *
       * @description ## Request description
       * Queries skill details by SkillCode or SkillName, including metadata, input parameter schema, and SKILL.md summary.
       * - **TenantId**: Optional common parameter passed through by the gateway to the backend header. If not specified, the default tenant of the current caller is used.
       * - **SkillCode**: Mutually exclusive with SkillName. If both are specified, SkillCode takes precedence.
       * - **SkillName**: Mutually exclusive with SkillCode. If the name is not unique within the tenant, `ERR.SkillHub.SkillNameAmbiguous` is returned.
       * - **ViewMode**: Optional. Valid values: `draft` (draft/editing view) or `published` (published view, default).
       * - **IncludeSkillFiles**: Optional. Specifies whether to return the complete skill file tree (SKILL.md / scripts / templates). Default value: `false`.
       *
       * @param request GetSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkillWithOptions(const Models::GetSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves skill details.
       *
       * @description ## Request description
       * Queries skill details by SkillCode or SkillName, including metadata, input parameter schema, and SKILL.md summary.
       * - **TenantId**: Optional common parameter passed through by the gateway to the backend header. If not specified, the default tenant of the current caller is used.
       * - **SkillCode**: Mutually exclusive with SkillName. If both are specified, SkillCode takes precedence.
       * - **SkillName**: Mutually exclusive with SkillCode. If the name is not unique within the tenant, `ERR.SkillHub.SkillNameAmbiguous` is returned.
       * - **ViewMode**: Optional. Valid values: `draft` (draft/editing view) or `published` (published view, default).
       * - **IncludeSkillFiles**: Optional. Specifies whether to return the complete skill file tree (SKILL.md / scripts / templates). Default value: `false`.
       *
       * @param request GetSkillRequest
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkill(const Models::GetSkillRequest &request);

      /**
       * @summary Queries the execution result of a skill.
       *
       * @description ## Request description
       * Queries the current status and result of an asynchronous task by `RunId`.
       * - **State machine**: Running (PENDING/RUNNING) → Succeeded / Failed / Cancelled
       * - **TenantId**: An optional common parameter passed through by the gateway. The backend verifies that the RunId belongs to the current tenant. Otherwise, `ERR.SkillHub.RunNotFound` is returned to avoid exposing existence information.
       * - **IncludeLogs**: Optional. Specifies whether to return execution logs. Default value: `false`.
       * When execution succeeds, `Result.Content[]` is an MCP-style Content block array (Text / File / Image).
       *
       * @param request GetSkillRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillRunResponse
       */
      Models::GetSkillRunResponse getSkillRunWithOptions(const Models::GetSkillRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution result of a skill.
       *
       * @description ## Request description
       * Queries the current status and result of an asynchronous task by `RunId`.
       * - **State machine**: Running (PENDING/RUNNING) → Succeeded / Failed / Cancelled
       * - **TenantId**: An optional common parameter passed through by the gateway. The backend verifies that the RunId belongs to the current tenant. Otherwise, `ERR.SkillHub.RunNotFound` is returned to avoid exposing existence information.
       * - **IncludeLogs**: Optional. Specifies whether to return execution logs. Default value: `false`.
       * When execution succeeds, `Result.Content[]` is an MCP-style Content block array (Text / File / Image).
       *
       * @param request GetSkillRunRequest
       * @return GetSkillRunResponse
       */
      Models::GetSkillRunResponse getSkillRun(const Models::GetSkillRunRequest &request);

      /**
       * @summary Queries the details of a specified resource (knowledge), with support for returning large detail fields on demand.
       *
       * @description ## Operation description
       * - `tenant_id` is derived from the authenticated identity only. Any value passed in the body is ignored.
       * - Response parameters do not expose audit fields such as `creator` or `modifier`. The `unstructured_docs[ ].content` field is not returned by default to avoid large responses.
       * - Set the `includeDetails` parameter to `True` to retrieve additional details including `settings`, `notes`, `structuredTables`, and `unstructuredDocs`.
       *
       * @param request GetSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSourceResponse
       */
      Models::GetSourceResponse getSourceWithOptions(const Models::GetSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified resource (knowledge), with support for returning large detail fields on demand.
       *
       * @description ## Operation description
       * - `tenant_id` is derived from the authenticated identity only. Any value passed in the body is ignored.
       * - Response parameters do not expose audit fields such as `creator` or `modifier`. The `unstructured_docs[ ].content` field is not returned by default to avoid large responses.
       * - Set the `includeDetails` parameter to `True` to retrieve additional details including `settings`, `notes`, `structuredTables`, and `unstructuredDocs`.
       *
       * @param request GetSourceRequest
       * @return GetSourceResponse
       */
      Models::GetSourceResponse getSource(const Models::GetSourceRequest &request);

      /**
       * @summary Generates a signed URL for directly uploading files to OSS.
       *
       * @description ## Operation description
       * This API allows callers to obtain a signed URL for directly uploading files to Alibaba Cloud Object Storage Service (OSS) based on the provided file name and other information. With this URL, users can upload files directly to the specified OSS location without routing through an intermediate server, which improves efficiency and security.
       * - **Security constraint**: `tenant_id`/`user_id` are derived only from the authenticated identity. Values provided in the request body are ignored.
       * - **Default value**: If the `expires` parameter is not specified, the default expiration time is 3600 seconds (1 hour).
       * - **Content-Type**: If `contentType` is not provided, the system attempts to automatically infer the file type.
       * - **Scope**: The `scope` parameter defines whether the data source belongs to a personal or enterprise knowledge base. In most cases, this does not need to be set.
       *
       * @param request GetSourceUploadSignatureRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSourceUploadSignatureResponse
       */
      Models::GetSourceUploadSignatureResponse getSourceUploadSignatureWithOptions(const Models::GetSourceUploadSignatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a signed URL for directly uploading files to OSS.
       *
       * @description ## Operation description
       * This API allows callers to obtain a signed URL for directly uploading files to Alibaba Cloud Object Storage Service (OSS) based on the provided file name and other information. With this URL, users can upload files directly to the specified OSS location without routing through an intermediate server, which improves efficiency and security.
       * - **Security constraint**: `tenant_id`/`user_id` are derived only from the authenticated identity. Values provided in the request body are ignored.
       * - **Default value**: If the `expires` parameter is not specified, the default expiration time is 3600 seconds (1 hour).
       * - **Content-Type**: If `contentType` is not provided, the system attempts to automatically infer the file type.
       * - **Scope**: The `scope` parameter defines whether the data source belongs to a personal or enterprise knowledge base. In most cases, this does not need to be set.
       *
       * @param request GetSourceUploadSignatureRequest
       * @return GetSourceUploadSignatureResponse
       */
      Models::GetSourceUploadSignatureResponse getSourceUploadSignature(const Models::GetSourceUploadSignatureRequest &request);

      /**
       * @summary Retrieves an API token and ensures that it is active.
       *
       * @description Retrieves the INSTANCE token for a user and ensures that it is in an active state (idempotent).
       *     Business logic:
       *     1. Obtains user_id from identity (caller_type=user is enforced).
       *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
       *     3. Calls ensure_active_token:
       *        - If an ACTIVE token exists, returns the token in plaintext as-is (no reset, no key rotation).
       *        - If an INACTIVE token exists, automatically re-enables it and returns the plaintext.
       *        - If no token exists (or only expired RESET records exist), creates a new token and returns the plaintext.
       *     Difference from EnableToken: When an ACTIVE token already exists, EnableToken returns only the masked value. This operation guarantees that a usable plaintext credential is returned without destroying the existing token.
       *
       * @param request GetTokenEnsureEnableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenEnsureEnableResponse
       */
      Models::GetTokenEnsureEnableResponse getTokenEnsureEnableWithOptions(const Models::GetTokenEnsureEnableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an API token and ensures that it is active.
       *
       * @description Retrieves the INSTANCE token for a user and ensures that it is in an active state (idempotent).
       *     Business logic:
       *     1. Obtains user_id from identity (caller_type=user is enforced).
       *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
       *     3. Calls ensure_active_token:
       *        - If an ACTIVE token exists, returns the token in plaintext as-is (no reset, no key rotation).
       *        - If an INACTIVE token exists, automatically re-enables it and returns the plaintext.
       *        - If no token exists (or only expired RESET records exist), creates a new token and returns the plaintext.
       *     Difference from EnableToken: When an ACTIVE token already exists, EnableToken returns only the masked value. This operation guarantees that a usable plaintext credential is returned without destroying the existing token.
       *
       * @param request GetTokenEnsureEnableRequest
       * @return GetTokenEnsureEnableResponse
       */
      Models::GetTokenEnsureEnableResponse getTokenEnsureEnable(const Models::GetTokenEnsureEnableRequest &request);

      /**
       * @summary Queries the token status of a user.
       *
       * @description Queries the INSTANCE token status of a user.
       *     Business logic:
       *     1. Retrieves user_id from identity (caller_type=user is required).
       *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
       *     3. Queries the ACTIVE INSTANCE token.
       *     4. If the token exists, returns enabled=True with the masked value and creation time.
       *     5. If the token does not exist, returns enabled=False.
       *
       * @param request GetTokenInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenInfoResponse
       */
      Models::GetTokenInfoResponse getTokenInfoWithOptions(const Models::GetTokenInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the token status of a user.
       *
       * @description Queries the INSTANCE token status of a user.
       *     Business logic:
       *     1. Retrieves user_id from identity (caller_type=user is required).
       *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
       *     3. Queries the ACTIVE INSTANCE token.
       *     4. If the token exists, returns enabled=True with the masked value and creation time.
       *     5. If the token does not exist, returns enabled=False.
       *
       * @param request GetTokenInfoRequest
       * @return GetTokenInfoResponse
       */
      Models::GetTokenInfoResponse getTokenInfo(const Models::GetTokenInfoRequest &request);

      /**
       * @summary Queries user details.
       *
       * @description Queries user details through OpenAPI.
       *     Business orchestration:
       *     1. Locate the user by wnUserId or accountId.
       *     2. Query the user mapping information in the current tenant (status, join time, and last logon time).
       *     3. Query the role list of the user in the current tenant.
       *     4. Query the user group list of the user in the current tenant.
       *     5. Assemble the response.
       *     Error codes:
       *     - ERR.User.NotFound: The user does not exist.
       *     - ERR.User.NotInTenant: The user does not belong to the current tenant.
       *
       * @param request GetUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user details.
       *
       * @description Queries user details through OpenAPI.
       *     Business orchestration:
       *     1. Locate the user by wnUserId or accountId.
       *     2. Query the user mapping information in the current tenant (status, join time, and last logon time).
       *     3. Query the role list of the user in the current tenant.
       *     4. Query the user group list of the user in the current tenant.
       *     5. Assemble the response.
       *     Error codes:
       *     - ERR.User.NotFound: The user does not exist.
       *     - ERR.User.NotInTenant: The user does not belong to the current tenant.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary Queries the real-time credit consumption, limit, and remaining balance of the current logged-on user.
       *
       * @description ## Request description
       * - This API is used to retrieve the credit usage details of the current logged-on user, including the credit limit, consumed credits, and remaining credits.
       * - Data is sourced from a real-time Redis cache, ensuring information immediacy.
       * - You can specify a tenant ID to query the credit usage of a user under a specific tenant. By default, the caller\\"s default tenant is used.
       * - You can optionally provide a `RequestId` as a request identifier, but this is not required.
       *
       * @param request GetUserCreditUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserCreditUsageResponse
       */
      Models::GetUserCreditUsageResponse getUserCreditUsageWithOptions(const Models::GetUserCreditUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time credit consumption, limit, and remaining balance of the current logged-on user.
       *
       * @description ## Request description
       * - This API is used to retrieve the credit usage details of the current logged-on user, including the credit limit, consumed credits, and remaining credits.
       * - Data is sourced from a real-time Redis cache, ensuring information immediacy.
       * - You can specify a tenant ID to query the credit usage of a user under a specific tenant. By default, the caller\\"s default tenant is used.
       * - You can optionally provide a `RequestId` as a request identifier, but this is not required.
       *
       * @param request GetUserCreditUsageRequest
       * @return GetUserCreditUsageResponse
       */
      Models::GetUserCreditUsageResponse getUserCreditUsage(const Models::GetUserCreditUsageRequest &request);

      /**
       * @summary Queries the details of a specified user group, including its parent group, child groups, and members.
       *
       * @description ## Operation description
       * - This operation retrieves the details of a specified user group, including the basic information of the user group, parent user group information, direct child user group list, and direct member list.
       * - `userGroupId` is a required parameter that must be provided in the request body.
       * - `tenantId` is an optional parameter that can be passed through the query string.
       * - The operation supports multiple authentication methods, including AK, BearerToken, and APP authentication.
       * - The content type for both requests and responses is `application/json`.
       * - Ensure that you have the required permissions (such as `winnexo:GetUserGroup`) before calling this operation.
       *
       * @param request GetUserGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserGroupResponse
       */
      Models::GetUserGroupResponse getUserGroupWithOptions(const Models::GetUserGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified user group, including its parent group, child groups, and members.
       *
       * @description ## Operation description
       * - This operation retrieves the details of a specified user group, including the basic information of the user group, parent user group information, direct child user group list, and direct member list.
       * - `userGroupId` is a required parameter that must be provided in the request body.
       * - `tenantId` is an optional parameter that can be passed through the query string.
       * - The operation supports multiple authentication methods, including AK, BearerToken, and APP authentication.
       * - The content type for both requests and responses is `application/json`.
       * - Ensure that you have the required permissions (such as `winnexo:GetUserGroup`) before calling this operation.
       *
       * @param request GetUserGroupRequest
       * @return GetUserGroupResponse
       */
      Models::GetUserGroupResponse getUserGroup(const Models::GetUserGroupRequest &request);

      /**
       * @summary Retrieves the complete information of the authenticated user through OpenAPI, including basic information and tenant list.
       *
       * @description ## Request description
       * - This operation returns the detailed information of the current authenticated user.
       * - If the tenant information is invalid, the corresponding error message is returned.
       * - `tenantId` is an optional parameter. If not provided, the default tenant ID of the caller is used.
       * - Multiple authentication methods are supported: AK, BearerToken, and APP authentication.
       * - The returned data includes the user profile (such as username and profile picture URL), role preference settings, and details of all tenants to which the user belongs.
       * - If the current logon tenant is the system tenant (that is, `tenantId=10000`), this is explicitly indicated in the response.
       *
       * @param request GetUserInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserInfoResponse
       */
      Models::GetUserInfoResponse getUserInfoWithOptions(const Models::GetUserInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the complete information of the authenticated user through OpenAPI, including basic information and tenant list.
       *
       * @description ## Request description
       * - This operation returns the detailed information of the current authenticated user.
       * - If the tenant information is invalid, the corresponding error message is returned.
       * - `tenantId` is an optional parameter. If not provided, the default tenant ID of the caller is used.
       * - Multiple authentication methods are supported: AK, BearerToken, and APP authentication.
       * - The returned data includes the user profile (such as username and profile picture URL), role preference settings, and details of all tenants to which the user belongs.
       * - If the current logon tenant is the system tenant (that is, `tenantId=10000`), this is explicitly indicated in the response.
       *
       * @param request GetUserInfoRequest
       * @return GetUserInfoResponse
       */
      Models::GetUserInfoResponse getUserInfo(const Models::GetUserInfoRequest &request);

      /**
       * @summary Grants authorization to authorized users or user groups to use a digital human.
       *
       * @description Grants authorization to authorized users or user groups to use a specified digital human.
       *     Business logic:
       *     1. Constructs an AuthContext from identity.
       *     2. Performs mutual exclusion validation on the request body: specify either userIds or userGroupIds.
       *     3. Delegates to AgentAuthorizationAuthorizedService.grant_authorization to execute.
       *     4. Pre-validation: verifies MANAGE permission and agent existence (performed at the AuthorizedService layer, which performs authentication first before it exposes existence).
       *     5. Existing authorization records are updated (expire_date / permissions).
       *
       * @param tmpReq GrantAgentUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantAgentUsersResponse
       */
      Models::GrantAgentUsersResponse grantAgentUsersWithOptions(const Models::GrantAgentUsersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants authorization to authorized users or user groups to use a digital human.
       *
       * @description Grants authorization to authorized users or user groups to use a specified digital human.
       *     Business logic:
       *     1. Constructs an AuthContext from identity.
       *     2. Performs mutual exclusion validation on the request body: specify either userIds or userGroupIds.
       *     3. Delegates to AgentAuthorizationAuthorizedService.grant_authorization to execute.
       *     4. Pre-validation: verifies MANAGE permission and agent existence (performed at the AuthorizedService layer, which performs authentication first before it exposes existence).
       *     5. Existing authorization records are updated (expire_date / permissions).
       *
       * @param request GrantAgentUsersRequest
       * @return GrantAgentUsersResponse
       */
      Models::GrantAgentUsersResponse grantAgentUsers(const Models::GrantAgentUsersRequest &request);

      /**
       * @summary Queries currently effective service notices.
       *
       * @description ## Operation description
       * Performs a paging query for published platform announcements that are effective within the current database time window. The caller must be a real user in the system O&M tenant who has the permission to view announcements.
       *
       * @param request ListActiveAnnouncementsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListActiveAnnouncementsResponse
       */
      Models::ListActiveAnnouncementsResponse listActiveAnnouncementsWithOptions(const Models::ListActiveAnnouncementsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries currently effective service notices.
       *
       * @description ## Operation description
       * Performs a paging query for published platform announcements that are effective within the current database time window. The caller must be a real user in the system O&M tenant who has the permission to view announcements.
       *
       * @param request ListActiveAnnouncementsRequest
       * @return ListActiveAnnouncementsResponse
       */
      Models::ListActiveAnnouncementsResponse listActiveAnnouncements(const Models::ListActiveAnnouncementsRequest &request);

      /**
       * @summary Queries or drills down into the enterprise knowledge base list of a tenant.
       *
       * @description ## Operation description
       * - This API supports two modes: when `directoryId` is empty or set to \\"root\\", the top-level knowledge base list is returned. When `directoryId` has a specific value, a drill-down operation is performed to return subdirectories and resources under the specified directory.
       * - `tenantId` is a common parameter. If not provided, the caller\\"s tenant ID is used by default.
       * - In drill-down mode (when `directoryId` is not empty), use the `sourceTypes` parameter to filter resources by specific types.
       * - The sort field (`sortField`) and sort order (`sortOrder`) can be customized. Invalid values are reset to default settings.
       * - The search feature is only effective when retrieving the top-level list and supports only fuzzy matching on names or descriptions.
       * - For security purposes, `tenant_id` is strictly obtained from the authenticated identity and cannot be passed through the request body.
       *
       * @param tmpReq ListAdminKnowledgeBasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAdminKnowledgeBasesResponse
       */
      Models::ListAdminKnowledgeBasesResponse listAdminKnowledgeBasesWithOptions(const Models::ListAdminKnowledgeBasesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries or drills down into the enterprise knowledge base list of a tenant.
       *
       * @description ## Operation description
       * - This API supports two modes: when `directoryId` is empty or set to \\"root\\", the top-level knowledge base list is returned. When `directoryId` has a specific value, a drill-down operation is performed to return subdirectories and resources under the specified directory.
       * - `tenantId` is a common parameter. If not provided, the caller\\"s tenant ID is used by default.
       * - In drill-down mode (when `directoryId` is not empty), use the `sourceTypes` parameter to filter resources by specific types.
       * - The sort field (`sortField`) and sort order (`sortOrder`) can be customized. Invalid values are reset to default settings.
       * - The search feature is only effective when retrieving the top-level list and supports only fuzzy matching on names or descriptions.
       * - For security purposes, `tenant_id` is strictly obtained from the authenticated identity and cannot be passed through the request body.
       *
       * @param request ListAdminKnowledgeBasesRequest
       * @return ListAdminKnowledgeBasesResponse
       */
      Models::ListAdminKnowledgeBasesResponse listAdminKnowledgeBases(const Models::ListAdminKnowledgeBasesRequest &request);

      /**
       * @summary Queries the full list of digital employees for a tenant.
       *
       * @description Queries the full list of digital employees under a tenant, including deactivated ones.
       *     Business logic:
       *     1. Constructs AuthContext from identity.
       *     2. Delegates to AgentAuthorizationAuthorizedService.list_agents to complete permission verification (APPLICATION_AGENT_VIEW).
       *     3. Returns rich fields for all digital employees of the tenant (operatingObjectName / displayName / authMode / isActive).
       *     4. System-level tokens are automatically allowed through ctx.skip_permission.
       *     Difference from listAuthorizedAgents: This operation returns all digital employees of the tenant (including deactivated ones, without authorization filtering) and includes rich fields such as displayName and isActive for management console display.
       *
       * @param request ListAgentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgentsWithOptions(const Models::ListAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the full list of digital employees for a tenant.
       *
       * @description Queries the full list of digital employees under a tenant, including deactivated ones.
       *     Business logic:
       *     1. Constructs AuthContext from identity.
       *     2. Delegates to AgentAuthorizationAuthorizedService.list_agents to complete permission verification (APPLICATION_AGENT_VIEW).
       *     3. Returns rich fields for all digital employees of the tenant (operatingObjectName / displayName / authMode / isActive).
       *     4. System-level tokens are automatically allowed through ctx.skip_permission.
       *     Difference from listAuthorizedAgents: This operation returns all digital employees of the tenant (including deactivated ones, without authorization filtering) and includes rich fields such as displayName and isActive for management console display.
       *
       * @param request ListAgentsRequest
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgents(const Models::ListAgentsRequest &request);

      /**
       * @summary Queries the list of digital human names for which the caller has specified permissions.
       *
       * @description Queries the list of digital human names for which the current caller (or a specified target user) has specified permissions (USE/MANAGE).
       *     Business logic:
       *     1. Constructs an AuthContext from the identity.
       *     2. Delegates to AgentAuthorizationAuthorizedService.list_authorized_agents to execute the query.
       *     3. When skip_permission=True, returns all active agents for the tenant.
       *     4. Regular users are filtered based on authorization records and auth_mode.
       *     5. When targetUserId is specified (querying on behalf of another user), the APPLICATION_AGENT_VIEW gate is required, and the query is restricted to the current tenant. If the target user is not a member of the current tenant, a USER_NOT_IN_TENANT error is thrown (an empty list is not silently returned).
       *
       * @param request ListAuthorizedAgentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedAgentsResponse
       */
      Models::ListAuthorizedAgentsResponse listAuthorizedAgentsWithOptions(const Models::ListAuthorizedAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of digital human names for which the caller has specified permissions.
       *
       * @description Queries the list of digital human names for which the current caller (or a specified target user) has specified permissions (USE/MANAGE).
       *     Business logic:
       *     1. Constructs an AuthContext from the identity.
       *     2. Delegates to AgentAuthorizationAuthorizedService.list_authorized_agents to execute the query.
       *     3. When skip_permission=True, returns all active agents for the tenant.
       *     4. Regular users are filtered based on authorization records and auth_mode.
       *     5. When targetUserId is specified (querying on behalf of another user), the APPLICATION_AGENT_VIEW gate is required, and the query is restricted to the current tenant. If the target user is not a member of the current tenant, a USER_NOT_IN_TENANT error is thrown (an empty list is not silently returned).
       *
       * @param request ListAuthorizedAgentsRequest
       * @return ListAuthorizedAgentsResponse
       */
      Models::ListAuthorizedAgentsResponse listAuthorizedAgents(const Models::ListAuthorizedAgentsRequest &request);

      /**
       * @summary Queries the list of authorized users or user groups for a digital employee.
       *
       * @description Queries the list of authorized users or user groups for a specified digital employee.
       *     Business logic:
       *     1. Constructs an AuthContext from the identity.
       *     2. Delegates to AgentAuthorizationAuthorizedService.list_authorized_users to execute the query.
       *     3. Permission verification is performed at the AuthorizedService layer by @require_permission(APPLICATION_AGENT_VIEW).
       *     4. When auth_mode=ALL_USERS, only records with MANAGE permissions are displayed.
       *
       * @param request ListAuthorizedUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedUsersResponse
       */
      Models::ListAuthorizedUsersResponse listAuthorizedUsersWithOptions(const Models::ListAuthorizedUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of authorized users or user groups for a digital employee.
       *
       * @description Queries the list of authorized users or user groups for a specified digital employee.
       *     Business logic:
       *     1. Constructs an AuthContext from the identity.
       *     2. Delegates to AgentAuthorizationAuthorizedService.list_authorized_users to execute the query.
       *     3. Permission verification is performed at the AuthorizedService layer by @require_permission(APPLICATION_AGENT_VIEW).
       *     4. When auth_mode=ALL_USERS, only records with MANAGE permissions are displayed.
       *
       * @param request ListAuthorizedUsersRequest
       * @return ListAuthorizedUsersResponse
       */
      Models::ListAuthorizedUsersResponse listAuthorizedUsers(const Models::ListAuthorizedUsersRequest &request);

      /**
       * @summary Enumerates available organization synchronization configurations.
       *
       * @description Enumerates all available organization synchronization configurations under the current tenant.
       *     Returns a unified configs list covering four platform types:
       *     - **wecom**: Retrieves active WeCom SSO configurations from SsoProviderRegistry.
       *     - **saml**: Retrieves active SAML SSO configurations from SsoProviderRegistry. The corpId is set to idpEntityId.
       *     - **oauth2**: Retrieves active OAuth2 SSO configurations from SsoProviderRegistry. The corpId is set to clientId.
       *     - **custom**: Queries the database for pure custom organizations registered under the tenant.
       *     The client distinguishes processing logic based on the returned platformType. The corpId is a required parameter for subsequent synchronization operations.
       *
       * @param request ListAvailableConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableConfigsResponse
       */
      Models::ListAvailableConfigsResponse listAvailableConfigsWithOptions(const Models::ListAvailableConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enumerates available organization synchronization configurations.
       *
       * @description Enumerates all available organization synchronization configurations under the current tenant.
       *     Returns a unified configs list covering four platform types:
       *     - **wecom**: Retrieves active WeCom SSO configurations from SsoProviderRegistry.
       *     - **saml**: Retrieves active SAML SSO configurations from SsoProviderRegistry. The corpId is set to idpEntityId.
       *     - **oauth2**: Retrieves active OAuth2 SSO configurations from SsoProviderRegistry. The corpId is set to clientId.
       *     - **custom**: Queries the database for pure custom organizations registered under the tenant.
       *     The client distinguishes processing logic based on the returned platformType. The corpId is a required parameter for subsequent synchronization operations.
       *
       * @param request ListAvailableConfigsRequest
       * @return ListAvailableConfigsResponse
       */
      Models::ListAvailableConfigsResponse listAvailableConfigs(const Models::ListAvailableConfigsRequest &request);

      /**
       * @summary Queries and filters the bill list through OpenAPI with support for multiple filter conditions.
       *
       * @description ## Request description
       * - This operation queries the bill list based on specified conditions.
       * - Supports filtering by tenant, user, operation type, status, time range, business source, and other conditions.
       * - Returns bill data in pages. The default page size is 20 records.
       * - You can choose whether to filter out bills with zero credit consumption. By default, such bills are filtered out.
       * - Authentication information (such as AK, BearerToken, or APP authentication) is required for the request.
       *
       * @param request ListBillingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBillingResponse
       */
      Models::ListBillingResponse listBillingWithOptions(const Models::ListBillingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries and filters the bill list through OpenAPI with support for multiple filter conditions.
       *
       * @description ## Request description
       * - This operation queries the bill list based on specified conditions.
       * - Supports filtering by tenant, user, operation type, status, time range, business source, and other conditions.
       * - Returns bill data in pages. The default page size is 20 records.
       * - You can choose whether to filter out bills with zero credit consumption. By default, such bills are filtered out.
       * - Authentication information (such as AK, BearerToken, or APP authentication) is required for the request.
       *
       * @param request ListBillingRequest
       * @return ListBillingResponse
       */
      Models::ListBillingResponse listBilling(const Models::ListBillingRequest &request);

      /**
       * @summary Lists chat sessions of the current user in reverse chronological order by creation time.
       *
       * @description ## Operation description
       * - This API supports filtering and sorting by multiple parameters, including tenant ID, page size, pagination token, keyword search, digital employee name, and update time range.
       * - By default, results are sorted in descending order by the `UpdatedAt` field.
       * - If an invalid `NextToken` is provided or `PageSize` exceeds the allowed range (1-100), the API returns a 400 error.
       *
       * @param request ListChatSessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatSessionsResponse
       */
      Models::ListChatSessionsResponse listChatSessionsWithOptions(const Models::ListChatSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists chat sessions of the current user in reverse chronological order by creation time.
       *
       * @description ## Operation description
       * - This API supports filtering and sorting by multiple parameters, including tenant ID, page size, pagination token, keyword search, digital employee name, and update time range.
       * - By default, results are sorted in descending order by the `UpdatedAt` field.
       * - If an invalid `NextToken` is provided or `PageSize` exceeds the allowed range (1-100), the API returns a 400 error.
       *
       * @param request ListChatSessionsRequest
       * @return ListChatSessionsResponse
       */
      Models::ListChatSessionsResponse listChatSessions(const Models::ListChatSessionsRequest &request);

      /**
       * @summary Queries the list of knowledge graphs available for semantic queries under a tenant.
       *
       * @description Lists published knowledge graphs under an identity tenant.
       *     CLI mapping: ``winnexo graph list``. ``tenantId`` is a required common parameter and is not included in the request body.
       *     The returned ``graphName`` can be used directly in ``querySemanticKnowledge``. This query is consistent with the existing frontend knowledge graph list and does not apply digital worker permission filtering. Specific semantic queries still verify agent USE permissions.
       *     Database exceptions go directly into unified 5xx error handling and are not disguised as a successful empty list.
       *
       * @param request ListGraphsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGraphsResponse
       */
      Models::ListGraphsResponse listGraphsWithOptions(const Models::ListGraphsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of knowledge graphs available for semantic queries under a tenant.
       *
       * @description Lists published knowledge graphs under an identity tenant.
       *     CLI mapping: ``winnexo graph list``. ``tenantId`` is a required common parameter and is not included in the request body.
       *     The returned ``graphName`` can be used directly in ``querySemanticKnowledge``. This query is consistent with the existing frontend knowledge graph list and does not apply digital worker permission filtering. Specific semantic queries still verify agent USE permissions.
       *     Database exceptions go directly into unified 5xx error handling and are not disguised as a successful empty list.
       *
       * @param request ListGraphsRequest
       * @return ListGraphsResponse
       */
      Models::ListGraphsResponse listGraphs(const Models::ListGraphsRequest &request);

      /**
       * @summary Queries the category directory tree of an enterprise knowledge base, with support for sorting by a specified field.
       *
       * @description ## Request description
       * - This API retrieves the category list (subdirectory tree) of an enterprise knowledge base. You must have the knowledge base view permission.
       * - If the `directoryId` parameter is not provided, the API returns all category trees under the root directory of the enterprise knowledge base. If `directoryId` is provided, the API returns the subdirectory tree rooted at the specified directory.
       * - You can sort results by using the `sortField` and `sortOrder` parameters. By default, results are sorted by creation time in descending order.
       * - Security constraints: `tenant_id` and `user_id` are derived only from the authenticated identity, and the caller must have the `DEVELOPMENT_KB_VIEW` feature permission.
       *
       * @param request ListKnowledgeBaseDirectoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKnowledgeBaseDirectoriesResponse
       */
      Models::ListKnowledgeBaseDirectoriesResponse listKnowledgeBaseDirectoriesWithOptions(const Models::ListKnowledgeBaseDirectoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the category directory tree of an enterprise knowledge base, with support for sorting by a specified field.
       *
       * @description ## Request description
       * - This API retrieves the category list (subdirectory tree) of an enterprise knowledge base. You must have the knowledge base view permission.
       * - If the `directoryId` parameter is not provided, the API returns all category trees under the root directory of the enterprise knowledge base. If `directoryId` is provided, the API returns the subdirectory tree rooted at the specified directory.
       * - You can sort results by using the `sortField` and `sortOrder` parameters. By default, results are sorted by creation time in descending order.
       * - Security constraints: `tenant_id` and `user_id` are derived only from the authenticated identity, and the caller must have the `DEVELOPMENT_KB_VIEW` feature permission.
       *
       * @param request ListKnowledgeBaseDirectoriesRequest
       * @return ListKnowledgeBaseDirectoriesResponse
       */
      Models::ListKnowledgeBaseDirectoriesResponse listKnowledgeBaseDirectories(const Models::ListKnowledgeBaseDirectoriesRequest &request);

      /**
       * @summary Queries the precise object type follows of a digital employee by page.
       *
       * @description Queries follows by three independent dimensions: graphName, operatingObjectName, and objectType. Supports primary objects and explicit first-level associated objects. Uses opaque cursor pagination and is not limited by the 1000-item display window of the follow panel.
       *
       * @param request ListOperatingObjectFavoritesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperatingObjectFavoritesResponse
       */
      Models::ListOperatingObjectFavoritesResponse listOperatingObjectFavoritesWithOptions(const Models::ListOperatingObjectFavoritesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the precise object type follows of a digital employee by page.
       *
       * @description Queries follows by three independent dimensions: graphName, operatingObjectName, and objectType. Supports primary objects and explicit first-level associated objects. Uses opaque cursor pagination and is not limited by the 1000-item display window of the follow panel.
       *
       * @param request ListOperatingObjectFavoritesRequest
       * @return ListOperatingObjectFavoritesResponse
       */
      Models::ListOperatingObjectFavoritesResponse listOperatingObjectFavorites(const Models::ListOperatingObjectFavoritesRequest &request);

      /**
       * @summary Queries the output list of the current user, with support for conditional filtering and pagination.
       *
       * @description ## Operation description
       * - This API operation queries the output list of the current logged-in user.
       * - `tenantId` is a common parameter. If not specified, the default tenant of the caller is used.
       * - Supports filtering by parameters such as `operatingObjectName`, `itemType`, and `keyword`.
       * - Set `sharedOnly` to `true` to display only outputs with sharing enabled.
       * - Pagination is controlled by `page` (page number) and `pageSize` (number of items per page). By default, results start from page 1 with 20 records per page.
       * - Results are sorted by update time in descending order by default.
       * - The `tenant_id` or `user_id` passed in the request body by the caller is ignored. This information is derived only from the authenticated identity.
       *
       * @param request ListOutputFilesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOutputFilesResponse
       */
      Models::ListOutputFilesResponse listOutputFilesWithOptions(const Models::ListOutputFilesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the output list of the current user, with support for conditional filtering and pagination.
       *
       * @description ## Operation description
       * - This API operation queries the output list of the current logged-in user.
       * - `tenantId` is a common parameter. If not specified, the default tenant of the caller is used.
       * - Supports filtering by parameters such as `operatingObjectName`, `itemType`, and `keyword`.
       * - Set `sharedOnly` to `true` to display only outputs with sharing enabled.
       * - Pagination is controlled by `page` (page number) and `pageSize` (number of items per page). By default, results start from page 1 with 20 records per page.
       * - Results are sorted by update time in descending order by default.
       * - The `tenant_id` or `user_id` passed in the request body by the caller is ignored. This information is derived only from the authenticated identity.
       *
       * @param request ListOutputFilesRequest
       * @return ListOutputFilesResponse
       */
      Models::ListOutputFilesResponse listOutputFiles(const Models::ListOutputFilesRequest &request);

      /**
       * @summary Queries subdirectories and resources under a specified digital employee resource directory.
       *
       * @description ## Operation description
       * - This API is used to drill down and query subdirectories and resources under the "My Resources" directory.
       * - When `directoryId` is set to \\"root\\", the service automatically resolves and returns the content under the current digital employee\\"s default root directory. If a specific directory ID is provided, the subdirectories and resources under that directory are returned.
       * - Security constraint: `tenant_id` and `user_id` can only come from the authenticated identity information. These fields provided by the caller in the request body are ignored.
       * - You can use the `sourceTypes` parameter to filter resources of specific types. When this parameter has a value, only resources that match the type condition are returned, and subdirectories are not included.
       * - Sorting supports ascending or descending order by name (`name`), creation time (`gmt_create`), or modification time (`gmt_modified`).
       * - The pagination feature allows you to customize the number of items displayed per page (maximum 100) and the current page number.
       *
       * @param tmpReq ListPersonalDirectoryContentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPersonalDirectoryContentsResponse
       */
      Models::ListPersonalDirectoryContentsResponse listPersonalDirectoryContentsWithOptions(const Models::ListPersonalDirectoryContentsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries subdirectories and resources under a specified digital employee resource directory.
       *
       * @description ## Operation description
       * - This API is used to drill down and query subdirectories and resources under the "My Resources" directory.
       * - When `directoryId` is set to \\"root\\", the service automatically resolves and returns the content under the current digital employee\\"s default root directory. If a specific directory ID is provided, the subdirectories and resources under that directory are returned.
       * - Security constraint: `tenant_id` and `user_id` can only come from the authenticated identity information. These fields provided by the caller in the request body are ignored.
       * - You can use the `sourceTypes` parameter to filter resources of specific types. When this parameter has a value, only resources that match the type condition are returned, and subdirectories are not included.
       * - Sorting supports ascending or descending order by name (`name`), creation time (`gmt_create`), or modification time (`gmt_modified`).
       * - The pagination feature allows you to customize the number of items displayed per page (maximum 100) and the current page number.
       *
       * @param request ListPersonalDirectoryContentsRequest
       * @return ListPersonalDirectoryContentsResponse
       */
      Models::ListPersonalDirectoryContentsResponse listPersonalDirectoryContents(const Models::ListPersonalDirectoryContentsRequest &request);

      /**
       * @summary Queries the list of system built-in roles.
       *
       * @description Queries the list of system built-in roles.
       *     Business logic:
       *     1. Constructs AuthContext from identity.
       *     2. Delegates to UserManagementAuthorizedService.list_system_roles for permission verification (PLATFORM_USER_VIEW).
       *     3. Renders role names and descriptions based on the request Accept-Language header.
       *     4. Returns a fixed set of 7 system built-in roles.
       *     The returned roleCode field can be directly used as the roleCodes parameter for createUser or updateUser.
       *
       * @param request ListRolesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of system built-in roles.
       *
       * @description Queries the list of system built-in roles.
       *     Business logic:
       *     1. Constructs AuthContext from identity.
       *     2. Delegates to UserManagementAuthorizedService.list_system_roles for permission verification (PLATFORM_USER_VIEW).
       *     3. Renders role names and descriptions based on the request Accept-Language header.
       *     4. Returns a fixed set of 7 system built-in roles.
       *     The returned roleCode field can be directly used as the roleCodes parameter for createUser or updateUser.
       *
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @summary Retrieves a list of scheduled tasks.
       *
       * @description ## Operation description
       * - This operation uploads a file to an enterprise knowledge base.
       * - The DEVELOPMENT_KB_MANAGE permission is required to call this operation.
       * - You must provide the OSS persistent address (`filePath`) of the file when uploading.
       * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
       * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
       * - You can add tags to the resource by using `sourceTags` for subsequent management and retrieval.
       * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Make sure your account balance is sufficient.
       *
       * @param tmpReq ListScheduledTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduledTasksResponse
       */
      Models::ListScheduledTasksResponse listScheduledTasksWithOptions(const Models::ListScheduledTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of scheduled tasks.
       *
       * @description ## Operation description
       * - This operation uploads a file to an enterprise knowledge base.
       * - The DEVELOPMENT_KB_MANAGE permission is required to call this operation.
       * - You must provide the OSS persistent address (`filePath`) of the file when uploading.
       * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
       * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
       * - You can add tags to the resource by using `sourceTags` for subsequent management and retrieval.
       * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Make sure your account balance is sufficient.
       *
       * @param request ListScheduledTasksRequest
       * @return ListScheduledTasksResponse
       */
      Models::ListScheduledTasksResponse listScheduledTasks(const Models::ListScheduledTasksRequest &request);

      /**
       * @summary Lists the skills visible to the current tenant.
       *
       * @description ## Request description
       * This API retrieves all visible skills under the current tenant. It supports filtering by digital employee binding relationship, skill source, tags, and keywords, and supports pagination.
       * ### Request parameters
       * - **TenantId**: Optional. A common parameter passed through by the gateway to the backend header. If not specified, the default tenant of the current caller is used.
       * - **FilterType**: Optional. The skill filtering dimension. Valid values: `ALL` (all published), `BUILTIN` (built-in published), `CUSTOM` (custom published), `DRAFT` (drafts, including published skills with unpublished modifications). Default value: `ALL`.
       * - **Tags**: Optional. Filters by tags. A match is returned if any tag in the array is hit.
       * - **Keyword**: Optional. Performs a fuzzy match on the skill name or description.
       * - **Page**: Optional. The page number. Minimum value: 1. Default value: 1.
       * - **PageSize**: Optional. The number of entries per page. Valid values: 1 to 100. Default value: 20.
       * - **OperatingObjectName**: Optional. The digital employee name. If specified, results are filtered by binding relationship. Must be used together with `BindStatus`.
       * - **BindStatus**: Optional. The binding status. Valid values: `BOUND` (bound), `UNBOUND` (unbound global skills).
       * ### Response parameters
       * The response contains the skill list `items`, total count `total`, current page `page`, and page size `pageSize`.
       *
       * @param tmpReq ListSkillsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkillsWithOptions(const Models::ListSkillsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the skills visible to the current tenant.
       *
       * @description ## Request description
       * This API retrieves all visible skills under the current tenant. It supports filtering by digital employee binding relationship, skill source, tags, and keywords, and supports pagination.
       * ### Request parameters
       * - **TenantId**: Optional. A common parameter passed through by the gateway to the backend header. If not specified, the default tenant of the current caller is used.
       * - **FilterType**: Optional. The skill filtering dimension. Valid values: `ALL` (all published), `BUILTIN` (built-in published), `CUSTOM` (custom published), `DRAFT` (drafts, including published skills with unpublished modifications). Default value: `ALL`.
       * - **Tags**: Optional. Filters by tags. A match is returned if any tag in the array is hit.
       * - **Keyword**: Optional. Performs a fuzzy match on the skill name or description.
       * - **Page**: Optional. The page number. Minimum value: 1. Default value: 1.
       * - **PageSize**: Optional. The number of entries per page. Valid values: 1 to 100. Default value: 20.
       * - **OperatingObjectName**: Optional. The digital employee name. If specified, results are filtered by binding relationship. Must be used together with `BindStatus`.
       * - **BindStatus**: Optional. The binding status. Valid values: `BOUND` (bound), `UNBOUND` (unbound global skills).
       * ### Response parameters
       * The response contains the skill list `items`, total count `total`, current page `page`, and page size `pageSize`.
       *
       * @param request ListSkillsRequest
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkills(const Models::ListSkillsRequest &request);

      /**
       * @summary Retrieves the list of knowledge bases.
       *
       * @description ## Request description
       * - This API is used to perform a paging query on the folder content and resources in an enterprise knowledge base.
       * - Multiple parameters are supported for filtering and sorting, such as `directoryId`, `page`, `pageSize`, `sortField`, `sortOrder`, and others.
       * - The `sourceTypes` parameter allows you to filter by resource type. Separate multiple types with commas.
       * - When `directoryId` is not specified or set to `root`, the root folder list of the knowledge base is queried by default.
       * - The default sort field is `name`, and the default sort order is ascending (`asc`).
       *
       * @param request ListTenantDirectoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTenantDirectoryResponse
       */
      Models::ListTenantDirectoryResponse listTenantDirectoryWithOptions(const Models::ListTenantDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of knowledge bases.
       *
       * @description ## Request description
       * - This API is used to perform a paging query on the folder content and resources in an enterprise knowledge base.
       * - Multiple parameters are supported for filtering and sorting, such as `directoryId`, `page`, `pageSize`, `sortField`, `sortOrder`, and others.
       * - The `sourceTypes` parameter allows you to filter by resource type. Separate multiple types with commas.
       * - When `directoryId` is not specified or set to `root`, the root folder list of the knowledge base is queried by default.
       * - The default sort field is `name`, and the default sort order is ascending (`asc`).
       *
       * @param request ListTenantDirectoryRequest
       * @return ListTenantDirectoryResponse
       */
      Models::ListTenantDirectoryResponse listTenantDirectory(const Models::ListTenantDirectoryRequest &request);

      /**
       * @summary Returns the multi-level user group tree for the current tenant.
       *
       * @description ## Request description
       * This API is used to query the complete user group hierarchy under a specified tenant, including the basic information of each user group and its direct child user group list. Use the `tenantId` parameter to specify the tenant ID to query. If this parameter is not provided, the caller\\"s tenant ID is used by default.
       * ### Precautions
       * - This operation returns only the direct member count and direct child user group count. It does not include information about indirect members or child groups.
       * - The external synchronization status field is empty when data is normal. It is populated with relevant information only when data is out of sync between an external system (such as WeCom) and the internal system.
       *
       * @param request ListUserGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupsResponse
       */
      Models::ListUserGroupsResponse listUserGroupsWithOptions(const Models::ListUserGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the multi-level user group tree for the current tenant.
       *
       * @description ## Request description
       * This API is used to query the complete user group hierarchy under a specified tenant, including the basic information of each user group and its direct child user group list. Use the `tenantId` parameter to specify the tenant ID to query. If this parameter is not provided, the caller\\"s tenant ID is used by default.
       * ### Precautions
       * - This operation returns only the direct member count and direct child user group count. It does not include information about indirect members or child groups.
       * - The external synchronization status field is empty when data is normal. It is populated with relevant information only when data is out of sync between an external system (such as WeCom) and the internal system.
       *
       * @param request ListUserGroupsRequest
       * @return ListUserGroupsResponse
       */
      Models::ListUserGroupsResponse listUserGroups(const Models::ListUserGroupsRequest &request);

      /**
       * @summary Queries the knowledge base directory content visible to the current OpenAPI user.
       *
       * @description ## Operation description
       * - This operation returns subdirectories and READY resources under the specified directory based on the enterprise knowledge base frontend scope.
       * - The user identity and directory visibility scope are derived from the OpenAPI authentication context.
       * - When `sourceTypes` has a value, only resources are returned. `keyword` searches only the current directory level.
       *
       * @param request ListUserVisibleKnowledgeBaseContentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserVisibleKnowledgeBaseContentsResponse
       */
      Models::ListUserVisibleKnowledgeBaseContentsResponse listUserVisibleKnowledgeBaseContentsWithOptions(const Models::ListUserVisibleKnowledgeBaseContentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the knowledge base directory content visible to the current OpenAPI user.
       *
       * @description ## Operation description
       * - This operation returns subdirectories and READY resources under the specified directory based on the enterprise knowledge base frontend scope.
       * - The user identity and directory visibility scope are derived from the OpenAPI authentication context.
       * - When `sourceTypes` has a value, only resources are returned. `keyword` searches only the current directory level.
       *
       * @param request ListUserVisibleKnowledgeBaseContentsRequest
       * @return ListUserVisibleKnowledgeBaseContentsResponse
       */
      Models::ListUserVisibleKnowledgeBaseContentsResponse listUserVisibleKnowledgeBaseContents(const Models::ListUserVisibleKnowledgeBaseContentsRequest &request);

      /**
       * @summary Queries the list of enterprise knowledge bases visible to the current OpenAPI user.
       *
       * @description ## Operation description
       * - This operation queries the enterprise knowledge bases visible to the platform user mapped from the OpenAPI authentication identity.
       * - Both the tenant and user identities are determined by the authentication context. Callers cannot expand the visible scope through business parameters.
       * - `tenantId` is an optional common parameter. `keyword` can filter by knowledge base name or description.
       *
       * @param request ListUserVisibleKnowledgeBasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserVisibleKnowledgeBasesResponse
       */
      Models::ListUserVisibleKnowledgeBasesResponse listUserVisibleKnowledgeBasesWithOptions(const Models::ListUserVisibleKnowledgeBasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of enterprise knowledge bases visible to the current OpenAPI user.
       *
       * @description ## Operation description
       * - This operation queries the enterprise knowledge bases visible to the platform user mapped from the OpenAPI authentication identity.
       * - Both the tenant and user identities are determined by the authentication context. Callers cannot expand the visible scope through business parameters.
       * - `tenantId` is an optional common parameter. `keyword` can filter by knowledge base name or description.
       *
       * @param request ListUserVisibleKnowledgeBasesRequest
       * @return ListUserVisibleKnowledgeBasesResponse
       */
      Models::ListUserVisibleKnowledgeBasesResponse listUserVisibleKnowledgeBases(const Models::ListUserVisibleKnowledgeBasesRequest &request);

      /**
       * @summary Queries tenant members by paging.
       *
       * @description Queries a paged list of tenant members by using OpenAPI.
       *     Business orchestration:
       *     1. Parse filter conditions (roleCodes → role_ids).
       *     2. Call UserTenantMappingRepository.query_paged_tenant_members to perform a paged query.
       *     3. Convert role_id in the results to roleCode and assemble the response.
       *     Error codes:
       *     - An error is thrown when an invalid roleCode parameter is specified.
       *
       * @param tmpReq ListUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tenant members by paging.
       *
       * @description Queries a paged list of tenant members by using OpenAPI.
       *     Business orchestration:
       *     1. Parse filter conditions (roleCodes → role_ids).
       *     2. Call UserTenantMappingRepository.query_paged_tenant_members to perform a paged query.
       *     3. Convert role_id in the results to roleCode and assemble the response.
       *     Error codes:
       *     - An error is thrown when an invalid roleCode parameter is specified.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Drills down to query subdirectories and resources under a specified knowledge base directory visible to a specified digital employee.
       *
       * @description ## Operation description
       * - This operation queries all subdirectories and resources under a specified knowledge base directory for a specific digital employee.
       * - The user must have the USE permission on the target digital employee, and the digital employee must have access to the directory and its subdirectories specified in the request.
       * - You must provide the digital employee name (`operatingObjectName`) and the directory ID (`directoryId`) to query. Other parameters such as pagination information and sorting method are optional.
       * - The response includes the list of subdirectories and resources under the directory, and supports pagination.
       * - The `sourceStatus` field filters only resources in the `READY` state.
       * - For security purposes, `tenant_id` and `user_id` are obtained only from the authenticated identity. Values passed in the request body by the caller are ignored.
       *
       * @param tmpReq ListVisibleKnowledgeBaseContentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVisibleKnowledgeBaseContentsResponse
       */
      Models::ListVisibleKnowledgeBaseContentsResponse listVisibleKnowledgeBaseContentsWithOptions(const Models::ListVisibleKnowledgeBaseContentsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Drills down to query subdirectories and resources under a specified knowledge base directory visible to a specified digital employee.
       *
       * @description ## Operation description
       * - This operation queries all subdirectories and resources under a specified knowledge base directory for a specific digital employee.
       * - The user must have the USE permission on the target digital employee, and the digital employee must have access to the directory and its subdirectories specified in the request.
       * - You must provide the digital employee name (`operatingObjectName`) and the directory ID (`directoryId`) to query. Other parameters such as pagination information and sorting method are optional.
       * - The response includes the list of subdirectories and resources under the directory, and supports pagination.
       * - The `sourceStatus` field filters only resources in the `READY` state.
       * - For security purposes, `tenant_id` and `user_id` are obtained only from the authenticated identity. Values passed in the request body by the caller are ignored.
       *
       * @param request ListVisibleKnowledgeBaseContentsRequest
       * @return ListVisibleKnowledgeBaseContentsResponse
       */
      Models::ListVisibleKnowledgeBaseContentsResponse listVisibleKnowledgeBaseContents(const Models::ListVisibleKnowledgeBaseContentsRequest &request);

      /**
       * @summary Queries the top-level directories of enterprise knowledge bases accessible to a digital employee.
       *
       * @description ## Request description
       * - This API operation retrieves the list of top-level knowledge base directories visible to a specified digital employee (operating object) within the enterprise.
       *
       * @param request ListVisibleKnowledgeBasesRequest
       * @param headers ListVisibleKnowledgeBasesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVisibleKnowledgeBasesResponse
       */
      Models::ListVisibleKnowledgeBasesResponse listVisibleKnowledgeBasesWithOptions(const Models::ListVisibleKnowledgeBasesRequest &request, const Models::ListVisibleKnowledgeBasesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top-level directories of enterprise knowledge bases accessible to a digital employee.
       *
       * @description ## Request description
       * - This API operation retrieves the list of top-level knowledge base directories visible to a specified digital employee (operating object) within the enterprise.
       *
       * @param request ListVisibleKnowledgeBasesRequest
       * @return ListVisibleKnowledgeBasesResponse
       */
      Models::ListVisibleKnowledgeBasesResponse listVisibleKnowledgeBases(const Models::ListVisibleKnowledgeBasesRequest &request);

      /**
       * @summary Moves a specified resource between enterprise knowledge base directories. Management permissions are required.
       *
       * @description ## Operation description
       * - **Authentication flow**:
       *   1. Basic authentication is performed by the root router (`request.state.openapi_identity`).
       *   2. This handler checks the `DEVELOPMENT_KB_MANAGE` feature permission.
       * - **Procedure**:
       *   1. Check that the source directory and target directory are not the same.
       *   2. Confirm that the target directory exists.
       *   3. Verify that the resource to be moved is in the source directory.
       *   4. Update the directory binding of the resource.
       *   5. Best-effort update of `source.settings["knowledge_id"]` to the target knowledge base ID.
       *   6. Best-effort notification to DocumentAgent to sync `knowledge_id` and `update_time`.
       * - **Security constraints**:
       *   - `tenant_id` and `user_id` must come from the authenticated identity.
       *   - The caller must have KB management permissions.
       *
       * @param request MoveKnowledgeBaseResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveKnowledgeBaseResourceResponse
       */
      Models::MoveKnowledgeBaseResourceResponse moveKnowledgeBaseResourceWithOptions(const Models::MoveKnowledgeBaseResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a specified resource between enterprise knowledge base directories. Management permissions are required.
       *
       * @description ## Operation description
       * - **Authentication flow**:
       *   1. Basic authentication is performed by the root router (`request.state.openapi_identity`).
       *   2. This handler checks the `DEVELOPMENT_KB_MANAGE` feature permission.
       * - **Procedure**:
       *   1. Check that the source directory and target directory are not the same.
       *   2. Confirm that the target directory exists.
       *   3. Verify that the resource to be moved is in the source directory.
       *   4. Update the directory binding of the resource.
       *   5. Best-effort update of `source.settings["knowledge_id"]` to the target knowledge base ID.
       *   6. Best-effort notification to DocumentAgent to sync `knowledge_id` and `update_time`.
       * - **Security constraints**:
       *   - `tenant_id` and `user_id` must come from the authenticated identity.
       *   - The caller must have KB management permissions.
       *
       * @param request MoveKnowledgeBaseResourceRequest
       * @return MoveKnowledgeBaseResourceResponse
       */
      Models::MoveKnowledgeBaseResourceResponse moveKnowledgeBaseResource(const Models::MoveKnowledgeBaseResourceRequest &request);

      /**
       * @summary Moves a specified resource between personal directories of a user.
       *
       * @description ## Request description
       * - **The source directory and target directory cannot be the same**. Otherwise, the `ERR.Robject.UserDirectory.InvalidOperation` error is returned.
       * - **The target directory must exist**. If it does not exist, the `ERR.Robject.UserDirectory.DirectoryNotFound` error is returned.
       * - **The resource to be moved must exist in the source directory**. If it is not in the source directory, the `ERR.Robject.UserDirectory.ResourceNotInDirectory` error is returned.
       * - After a successful move, the system attempts to notify DocumentAgent to update the new path (`source_path`) of the resource. This step is best-effort. Even if it fails, the overall operation success status is not affected. Only an error log is recorded.
       * - For security purposes, the value of `tenant_id` can only be derived from the authenticated identity information.
       *
       * @param request MoveResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceResponse
       */
      Models::MoveResourceResponse moveResourceWithOptions(const Models::MoveResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a specified resource between personal directories of a user.
       *
       * @description ## Request description
       * - **The source directory and target directory cannot be the same**. Otherwise, the `ERR.Robject.UserDirectory.InvalidOperation` error is returned.
       * - **The target directory must exist**. If it does not exist, the `ERR.Robject.UserDirectory.DirectoryNotFound` error is returned.
       * - **The resource to be moved must exist in the source directory**. If it is not in the source directory, the `ERR.Robject.UserDirectory.ResourceNotInDirectory` error is returned.
       * - After a successful move, the system attempts to notify DocumentAgent to update the new path (`source_path`) of the resource. This step is best-effort. Even if it fails, the overall operation success status is not affected. Only an error log is recorded.
       * - For security purposes, the value of `tenant_id` can only be derived from the authenticated identity information.
       *
       * @param request MoveResourceRequest
       * @return MoveResourceResponse
       */
      Models::MoveResourceResponse moveResource(const Models::MoveResourceRequest &request);

      /**
       * @summary Takes a service notice offline.
       *
       * @description ## Operation description
       * Idempotently takes a platform announcement offline by announcement ID. Returns `changed=true` when a PUBLISHED announcement is taken offline for the first time. Returns `changed=false` when the announcement is already offline or expired.
       * The caller must belong to the system operations tenant and have announcement management permissions.
       *
       * @param request OfflineAnnouncementRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineAnnouncementResponse
       */
      Models::OfflineAnnouncementResponse offlineAnnouncementWithOptions(const Models::OfflineAnnouncementRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Takes a service notice offline.
       *
       * @description ## Operation description
       * Idempotently takes a platform announcement offline by announcement ID. Returns `changed=true` when a PUBLISHED announcement is taken offline for the first time. Returns `changed=false` when the announcement is already offline or expired.
       * The caller must belong to the system operations tenant and have announcement management permissions.
       *
       * @param request OfflineAnnouncementRequest
       * @return OfflineAnnouncementResponse
       */
      Models::OfflineAnnouncementResponse offlineAnnouncement(const Models::OfflineAnnouncementRequest &request);

      /**
       * @summary Previews the knowledge content in a specified enterprise knowledge base.
       *
       * @description ## Operation description
       * - This operation previews the content of a specified knowledge entry in an enterprise knowledge base.
       * - The `DEVELOPMENT_KB_VIEW` permission is required to call this API.
       * - `sourceId` is a required parameter that identifies the knowledge entry to preview.
       * - The optional parameter `tenantId` specifies the tenant ID. If not provided, the default tenant ID of the caller is used.
       * - Multiple preview types are supported, including but not limited to images, audio, video, and text.
       *
       * @param request PreviewKnowledgeBaseSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewKnowledgeBaseSourceResponse
       */
      Models::PreviewKnowledgeBaseSourceResponse previewKnowledgeBaseSourceWithOptions(const Models::PreviewKnowledgeBaseSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Previews the knowledge content in a specified enterprise knowledge base.
       *
       * @description ## Operation description
       * - This operation previews the content of a specified knowledge entry in an enterprise knowledge base.
       * - The `DEVELOPMENT_KB_VIEW` permission is required to call this API.
       * - `sourceId` is a required parameter that identifies the knowledge entry to preview.
       * - The optional parameter `tenantId` specifies the tenant ID. If not provided, the default tenant ID of the caller is used.
       * - Multiple preview types are supported, including but not limited to images, audio, video, and text.
       *
       * @param request PreviewKnowledgeBaseSourceRequest
       * @return PreviewKnowledgeBaseSourceResponse
       */
      Models::PreviewKnowledgeBaseSourceResponse previewKnowledgeBaseSource(const Models::PreviewKnowledgeBaseSourceRequest &request);

      /**
       * @summary Allows a user to preview specified knowledge content in their personal directory.
       *
       * @description ## Request description
       * - This operation only allows a user to preview resources in their own personal directory.
       * - The authentication process includes basic authentication and data source ownership verification to ensure that the requester can only access knowledge in their personal directory.
       * - You must provide the unique identifier `sourceId` of the knowledge content in the request. The system queries and returns the corresponding preview information based on this ID and the user\\"s tenant information.
       * - Multiple preview types are supported, such as image, audio, and video. The system returns the corresponding preview URL or direct content display based on the type.
       *
       * @param request PreviewPersonalSourceRequest
       * @param headers PreviewPersonalSourceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewPersonalSourceResponse
       */
      Models::PreviewPersonalSourceResponse previewPersonalSourceWithOptions(const Models::PreviewPersonalSourceRequest &request, const Models::PreviewPersonalSourceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Allows a user to preview specified knowledge content in their personal directory.
       *
       * @description ## Request description
       * - This operation only allows a user to preview resources in their own personal directory.
       * - The authentication process includes basic authentication and data source ownership verification to ensure that the requester can only access knowledge in their personal directory.
       * - You must provide the unique identifier `sourceId` of the knowledge content in the request. The system queries and returns the corresponding preview information based on this ID and the user\\"s tenant information.
       * - Multiple preview types are supported, such as image, audio, and video. The system returns the corresponding preview URL or direct content display based on the type.
       *
       * @param request PreviewPersonalSourceRequest
       * @return PreviewPersonalSourceResponse
       */
      Models::PreviewPersonalSourceResponse previewPersonalSource(const Models::PreviewPersonalSourceRequest &request);

      /**
       * @summary Queries primary object data by operating object name with pagination, and supports filtering and searching.
       *
       * @description ## Request description
       * - This API queries primary object data with pagination based on a specified operating object name (such as `customer_1`).
       * - Supports keyword-based searching and allows you to specify whether to return only objects marked as favorites.
       * - Complex filter conditions can be used to further refine results, including but not limited to logical operators such as equal to, not equal to, greater than, and less than.
       * - If no primary object type is configured, an empty result set is returned.
       * - Data included in the request undergoes authentication and filtering to ensure security and accuracy.
       *
       * @param request QueryPrimaryObjectDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPrimaryObjectDataResponse
       */
      Models::QueryPrimaryObjectDataResponse queryPrimaryObjectDataWithOptions(const Models::QueryPrimaryObjectDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries primary object data by operating object name with pagination, and supports filtering and searching.
       *
       * @description ## Request description
       * - This API queries primary object data with pagination based on a specified operating object name (such as `customer_1`).
       * - Supports keyword-based searching and allows you to specify whether to return only objects marked as favorites.
       * - Complex filter conditions can be used to further refine results, including but not limited to logical operators such as equal to, not equal to, greater than, and less than.
       * - If no primary object type is configured, an empty result set is returned.
       * - Data included in the request undergoes authentication and filtering to ensure security and accuracy.
       *
       * @param request QueryPrimaryObjectDataRequest
       * @return QueryPrimaryObjectDataResponse
       */
      Models::QueryPrimaryObjectDataResponse queryPrimaryObjectData(const Models::QueryPrimaryObjectDataRequest &request);

      /**
       * @summary Queries semantic knowledge related to a user question.
       *
       * @description Exposes only the schema_knowledge semantic recall capability of smart-query.
       *     CLI mapping: ``winnexo semantic query``. ``tenantId`` is passed through common parameters. ``userId``
       *     is read only from the Token identity and cannot be overridden by the request body. The service validates
       *     the ownership of ``graphName + agentName``, active graph status, digital human enablement status, and
       *     the current user\\"s USE permission. A cross-graph agent with the same name will fail and be closed.
       *     Then ``outputs=[schema_knowledge]`` is fixed.
       *
       * @param request QuerySemanticKnowledgeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySemanticKnowledgeResponse
       */
      Models::QuerySemanticKnowledgeResponse querySemanticKnowledgeWithOptions(const Models::QuerySemanticKnowledgeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries semantic knowledge related to a user question.
       *
       * @description Exposes only the schema_knowledge semantic recall capability of smart-query.
       *     CLI mapping: ``winnexo semantic query``. ``tenantId`` is passed through common parameters. ``userId``
       *     is read only from the Token identity and cannot be overridden by the request body. The service validates
       *     the ownership of ``graphName + agentName``, active graph status, digital human enablement status, and
       *     the current user\\"s USE permission. A cross-graph agent with the same name will fail and be closed.
       *     Then ``outputs=[schema_knowledge]`` is fixed.
       *
       * @param request QuerySemanticKnowledgeRequest
       * @return QuerySemanticKnowledgeResponse
       */
      Models::QuerySemanticKnowledgeResponse querySemanticKnowledge(const Models::QuerySemanticKnowledgeRequest &request);

      /**
       * @summary Queries the result of an organization synchronization task.
       *
       * @description Queries the execution status and result of an organization synchronization task based on the task ID.
       *     Task status transitions: PENDING → RUNNING → COMPLETED / FAILED / TIMEOUT / CANCELED
       *     Recommended client polling interval: 3 to 5 seconds.
       *
       * @param request QuerySyncResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySyncResultResponse
       */
      Models::QuerySyncResultResponse querySyncResultWithOptions(const Models::QuerySyncResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of an organization synchronization task.
       *
       * @description Queries the execution status and result of an organization synchronization task based on the task ID.
       *     Task status transitions: PENDING → RUNNING → COMPLETED / FAILED / TIMEOUT / CANCELED
       *     Recommended client polling interval: 3 to 5 seconds.
       *
       * @param request QuerySyncResultRequest
       * @return QuerySyncResultResponse
       */
      Models::QuerySyncResultResponse querySyncResult(const Models::QuerySyncResultRequest &request);

      /**
       * @summary Generates next-step recommendations for a session.
       *
       * @description ## Request description
       * Based on the most recent N messages in a session and the skills attached to the agent, this operation invokes an LLM to generate 0 to 3 next-step recommendations (follow-up questions or recommended skills to execute).
       * - `sessionId`: The session ID. Required. Only sessions that the currently authenticated user has permission to access are allowed.
       * - `recentMessageCount`: The number of recent messages used to assemble contextual information. Valid values: 1 to 30. Default value: 10 (approximately 5 rounds of user+assistant conversation).
       * - `customPrompt`: A custom recommendation instruction (up to 10,000 characters). This is injected into the default recommendation template as a custom instruction (before the output format constraints). The output is still subject to the JSON format and type constraints of the template.
       * - `outputType`: The output type filter. followUpOnly = follow-up recommendations only (default). skillOnly = skill recommendations only. both = generate both types.
       * Unlike internal endpoints, API calls are not restricted by the next-step recommendation toggle in user personal settings and always execute recommendation generation.
       *
       * @param request RecommendNextActionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecommendNextActionsResponse
       */
      Models::RecommendNextActionsResponse recommendNextActionsWithOptions(const Models::RecommendNextActionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates next-step recommendations for a session.
       *
       * @description ## Request description
       * Based on the most recent N messages in a session and the skills attached to the agent, this operation invokes an LLM to generate 0 to 3 next-step recommendations (follow-up questions or recommended skills to execute).
       * - `sessionId`: The session ID. Required. Only sessions that the currently authenticated user has permission to access are allowed.
       * - `recentMessageCount`: The number of recent messages used to assemble contextual information. Valid values: 1 to 30. Default value: 10 (approximately 5 rounds of user+assistant conversation).
       * - `customPrompt`: A custom recommendation instruction (up to 10,000 characters). This is injected into the default recommendation template as a custom instruction (before the output format constraints). The output is still subject to the JSON format and type constraints of the template.
       * - `outputType`: The output type filter. followUpOnly = follow-up recommendations only (default). skillOnly = skill recommendations only. both = generate both types.
       * Unlike internal endpoints, API calls are not restricted by the next-step recommendation toggle in user personal settings and always execute recommendation generation.
       *
       * @param request RecommendNextActionsRequest
       * @return RecommendNextActionsResponse
       */
      Models::RecommendNextActionsResponse recommendNextActions(const Models::RecommendNextActionsRequest &request);

      /**
       * @summary Removes a user from a tenant.
       *
       * @description Removes a user from a tenant.
       *     Business orchestration:
       *     1. Obtains tenant_id from identity.
       *     2. Calls delete_user_from_tenant (includes last admin protection).
       *     3. Returns success.
       *     This operation:
       *     - Removes all role associations of the user under the tenant.
       *     - Removes all user group associations of the user under the tenant.
       *     - Revokes all digital employee usage authorizations of the user under the tenant.
       *     - Deletes the user-tenant mapping.
       *
       * @param request RemoveUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserResponse
       */
      Models::RemoveUserResponse removeUserWithOptions(const Models::RemoveUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a user from a tenant.
       *
       * @description Removes a user from a tenant.
       *     Business orchestration:
       *     1. Obtains tenant_id from identity.
       *     2. Calls delete_user_from_tenant (includes last admin protection).
       *     3. Returns success.
       *     This operation:
       *     - Removes all role associations of the user under the tenant.
       *     - Removes all user group associations of the user under the tenant.
       *     - Revokes all digital employee usage authorizations of the user under the tenant.
       *     - Deletes the user-tenant mapping.
       *
       * @param request RemoveUserRequest
       * @return RemoveUserResponse
       */
      Models::RemoveUserResponse removeUser(const Models::RemoveUserRequest &request);

      /**
       * @summary Removes direct member relationships in bulk from a specified user group.
       *
       * @description ## Request description
       * - This operation supports batch removal of direct member relationships between users and a specified user group by providing the user group ID and one or more user IDs.
       * - The `userIds` parameter accepts an integer array that represents the list of platform user IDs to be removed.
       * - If a user you attempt to remove is not a direct member of the user group, the final result count is not affected.
       * - After a successful call, the response returns information such as the number of members actually removed and the number of members before the request was processed.
       * - This operation requires appropriate permission authentication and is recorded in operation logs.
       *
       * @param tmpReq RemoveUserGroupMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserGroupMembersResponse
       */
      Models::RemoveUserGroupMembersResponse removeUserGroupMembersWithOptions(const Models::RemoveUserGroupMembersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes direct member relationships in bulk from a specified user group.
       *
       * @description ## Request description
       * - This operation supports batch removal of direct member relationships between users and a specified user group by providing the user group ID and one or more user IDs.
       * - The `userIds` parameter accepts an integer array that represents the list of platform user IDs to be removed.
       * - If a user you attempt to remove is not a direct member of the user group, the final result count is not affected.
       * - After a successful call, the response returns information such as the number of members actually removed and the number of members before the request was processed.
       * - This operation requires appropriate permission authentication and is recorded in operation logs.
       *
       * @param request RemoveUserGroupMembersRequest
       * @return RemoveUserGroupMembersResponse
       */
      Models::RemoveUserGroupMembersResponse removeUserGroupMembers(const Models::RemoveUserGroupMembersRequest &request);

      /**
       * @summary Renames a data source in a specified enterprise knowledge base.
       *
       * @description ## Request description
       * - This operation allows users with the required permissions to modify the name of a specific data source in an enterprise knowledge base.
       * - You must provide the ID of the data source to be renamed (sourceId) and the new name (newName).
       * - The rename operation only updates the name field of the data source and does not trigger other processing flows.
       * - After successful execution, the system publishes a `SOURCE_CHANGED` event for frontend display refresh and attempts to notify DocumentAgent to synchronize the latest source_name information. However, if this step fails, it does not affect the completion status of the main flow.
       * - If the specified sourceId does not exist, the error code `ERR.Robject.Source.NotFound` is returned.
       * - To invoke this API, you must have the `DEVELOPMENT_KB_MANAGE` feature permission.
       * - Identity verification is supported through AccessKey, BearerToken, or APP methods to authenticate requests.
       *
       * @param request RenameKnowledgeBaseSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenameKnowledgeBaseSourceResponse
       */
      Models::RenameKnowledgeBaseSourceResponse renameKnowledgeBaseSourceWithOptions(const Models::RenameKnowledgeBaseSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renames a data source in a specified enterprise knowledge base.
       *
       * @description ## Request description
       * - This operation allows users with the required permissions to modify the name of a specific data source in an enterprise knowledge base.
       * - You must provide the ID of the data source to be renamed (sourceId) and the new name (newName).
       * - The rename operation only updates the name field of the data source and does not trigger other processing flows.
       * - After successful execution, the system publishes a `SOURCE_CHANGED` event for frontend display refresh and attempts to notify DocumentAgent to synchronize the latest source_name information. However, if this step fails, it does not affect the completion status of the main flow.
       * - If the specified sourceId does not exist, the error code `ERR.Robject.Source.NotFound` is returned.
       * - To invoke this API, you must have the `DEVELOPMENT_KB_MANAGE` feature permission.
       * - Identity verification is supported through AccessKey, BearerToken, or APP methods to authenticate requests.
       *
       * @param request RenameKnowledgeBaseSourceRequest
       * @return RenameKnowledgeBaseSourceResponse
       */
      Models::RenameKnowledgeBaseSourceResponse renameKnowledgeBaseSource(const Models::RenameKnowledgeBaseSourceRequest &request);

      /**
       * @summary Renames a specified data source. This is a lightweight operation.
       *
       * @description ## Operation description
       * - This API updates only the `name` field of the data source and does not trigger `process_source`.
       * - After a successful update, a `SOURCE_CHANGED` event is published for the frontend to refresh the display.
       * - The system makes a best-effort attempt to notify DocumentAgent to sync the new `source_name`. Even if the sync fails, the main process is not blocked.
       * - If the specified data source does not exist, the `ERR.Robject.Source.NotFound` error is returned. The global middleware converts this error into a POP error code.
       * - Security constraint: `tenant_id` and `user_id` must be derived from the authenticated identity.
       *
       * @param request RenameSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenameSourceResponse
       */
      Models::RenameSourceResponse renameSourceWithOptions(const Models::RenameSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renames a specified data source. This is a lightweight operation.
       *
       * @description ## Operation description
       * - This API updates only the `name` field of the data source and does not trigger `process_source`.
       * - After a successful update, a `SOURCE_CHANGED` event is published for the frontend to refresh the display.
       * - The system makes a best-effort attempt to notify DocumentAgent to sync the new `source_name`. Even if the sync fails, the main process is not blocked.
       * - If the specified data source does not exist, the `ERR.Robject.Source.NotFound` error is returned. The global middleware converts this error into a POP error code.
       * - Security constraint: `tenant_id` and `user_id` must be derived from the authenticated identity.
       *
       * @param request RenameSourceRequest
       * @return RenameSourceResponse
       */
      Models::RenameSourceResponse renameSource(const Models::RenameSourceRequest &request);

      /**
       * @summary Re-parses a resource.
       *
       * @description ## Operation description
       * This API operation re-parses a specified data source. You can choose synchronous or asynchronous execution. You must provide the data source ID in the request. You can optionally specify whether to synchronously wait for parsing to complete. By default, the request is processed asynchronously by being added to a queue. You can also use the `tenantId` parameter to specify a tenant ID, but this parameter is optional.
       * - **forceSync**: If set to `true`, the operation synchronously waits for the re-parsing to complete. Default value: `false`, which indicates that the request is processed asynchronously.
       * - When the service returns `None`, it is converted to a `SourceNotFound` exception. Other exceptions are handled by the OpenAPI global exception chain.
       *
       * @param request ReparseSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReparseSourceResponse
       */
      Models::ReparseSourceResponse reparseSourceWithOptions(const Models::ReparseSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-parses a resource.
       *
       * @description ## Operation description
       * This API operation re-parses a specified data source. You can choose synchronous or asynchronous execution. You must provide the data source ID in the request. You can optionally specify whether to synchronously wait for parsing to complete. By default, the request is processed asynchronously by being added to a queue. You can also use the `tenantId` parameter to specify a tenant ID, but this parameter is optional.
       * - **forceSync**: If set to `true`, the operation synchronously waits for the re-parsing to complete. Default value: `false`, which indicates that the request is processed asynchronously.
       * - When the service returns `None`, it is converted to a `SourceNotFound` exception. Other exceptions are handled by the OpenAPI global exception chain.
       *
       * @param request ReparseSourceRequest
       * @return ReparseSourceResponse
       */
      Models::ReparseSourceResponse reparseSource(const Models::ReparseSourceRequest &request);

      /**
       * @summary Replaces a FILE resource in a specified enterprise knowledge base and triggers re-parsing.
       *
       * @description ## Request description
       * This API allows you to update a specific FILE-type data source in a self-built enterprise knowledge base and trigger the system to re-parse the data source by providing a new file path and public access URL. Operations can be performed in synchronous or asynchronous mode. In synchronous mode, the client waits until the parsing process is complete.
       * - The **forceSync** parameter controls whether the request is processed synchronously. The default value is `false`, which indicates asynchronous processing.
       * - If **fileName** is not provided or its value is empty, the newly uploaded file retains the original file name.
       * - Ensure that the provided **filePath** and **filePublicUrl** are valid and point to the same file entity.
       *
       * @param request ReplaceKnowledgeBaseSourceFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceKnowledgeBaseSourceFileResponse
       */
      Models::ReplaceKnowledgeBaseSourceFileResponse replaceKnowledgeBaseSourceFileWithOptions(const Models::ReplaceKnowledgeBaseSourceFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces a FILE resource in a specified enterprise knowledge base and triggers re-parsing.
       *
       * @description ## Request description
       * This API allows you to update a specific FILE-type data source in a self-built enterprise knowledge base and trigger the system to re-parse the data source by providing a new file path and public access URL. Operations can be performed in synchronous or asynchronous mode. In synchronous mode, the client waits until the parsing process is complete.
       * - The **forceSync** parameter controls whether the request is processed synchronously. The default value is `false`, which indicates asynchronous processing.
       * - If **fileName** is not provided or its value is empty, the newly uploaded file retains the original file name.
       * - Ensure that the provided **filePath** and **filePublicUrl** are valid and point to the same file entity.
       *
       * @param request ReplaceKnowledgeBaseSourceFileRequest
       * @return ReplaceKnowledgeBaseSourceFileResponse
       */
      Models::ReplaceKnowledgeBaseSourceFileResponse replaceKnowledgeBaseSourceFile(const Models::ReplaceKnowledgeBaseSourceFileRequest &request);

      /**
       * @summary Replaces all object binding information under a specified data source.
       *
       * @description ## Operation description
       * This API performs a full replacement of object bindings for a specified data source (deletes existing bindings first, then inserts new bindings). If an empty list is passed, all bindings are cleared.
       * - **Security constraints**: `tenant_id` and `user_id` must come from the authenticated identity.
       * - **Error handling**: If the specified data source does not exist, an `ERR.Robject.InvalidParameter` error is thrown and converted to a POP error code by the global middleware.
       * - **Synchronous notification**: After a successful replacement, the system makes a best-effort synchronous notification to DocumentAgent to update `semantics.object_bindings`. However, failures are only logged and do not block the main process.
       *
       * @param tmpReq ReplaceObjectBindingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceObjectBindingsResponse
       */
      Models::ReplaceObjectBindingsResponse replaceObjectBindingsWithOptions(const Models::ReplaceObjectBindingsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces all object binding information under a specified data source.
       *
       * @description ## Operation description
       * This API performs a full replacement of object bindings for a specified data source (deletes existing bindings first, then inserts new bindings). If an empty list is passed, all bindings are cleared.
       * - **Security constraints**: `tenant_id` and `user_id` must come from the authenticated identity.
       * - **Error handling**: If the specified data source does not exist, an `ERR.Robject.InvalidParameter` error is thrown and converted to a POP error code by the global middleware.
       * - **Synchronous notification**: After a successful replacement, the system makes a best-effort synchronous notification to DocumentAgent to update `semantics.object_bindings`. However, failures are only logged and do not block the main process.
       *
       * @param request ReplaceObjectBindingsRequest
       * @return ReplaceObjectBindingsResponse
       */
      Models::ReplaceObjectBindingsResponse replaceObjectBindings(const Models::ReplaceObjectBindingsRequest &request);

      /**
       * @summary Allows a user to replace a personal file resource that they created and triggers the system to re-parse the file.
       *
       * @description ## Operation description
       * - This API operation replaces a personal FILE resource created by the current platform user and triggers the system to re-parse the file.
       * - The `tenant_id`, operator, and creator constraints are read only from the authenticated identity. Requests without a platform user are rejected to prevent bypassing ownership verification.
       * - If the server returns `None`, it is converted to a `NotFound` exception. Other exceptions are handled by the OpenAPI global exception chain.
       * - This operation supports synchronous or asynchronous waiting for re-parsing to complete. The default behavior is asynchronous queuing (controlled by the `forceSync` parameter).
       *
       * @param request ReplaceSourceFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceSourceFileResponse
       */
      Models::ReplaceSourceFileResponse replaceSourceFileWithOptions(const Models::ReplaceSourceFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Allows a user to replace a personal file resource that they created and triggers the system to re-parse the file.
       *
       * @description ## Operation description
       * - This API operation replaces a personal FILE resource created by the current platform user and triggers the system to re-parse the file.
       * - The `tenant_id`, operator, and creator constraints are read only from the authenticated identity. Requests without a platform user are rejected to prevent bypassing ownership verification.
       * - If the server returns `None`, it is converted to a `NotFound` exception. Other exceptions are handled by the OpenAPI global exception chain.
       * - This operation supports synchronous or asynchronous waiting for re-parsing to complete. The default behavior is asynchronous queuing (controlled by the `forceSync` parameter).
       *
       * @param request ReplaceSourceFileRequest
       * @return ReplaceSourceFileResponse
       */
      Models::ReplaceSourceFileResponse replaceSourceFile(const Models::ReplaceSourceFileRequest &request);

      /**
       * @summary Resets the password of a user.
       *
       * @description Resets the password of a user through OpenAPI.
       *     Business orchestration:
       *     1. Call UserManagementService.reset_member_password with password_encrypted (required).
       *        The service internally performs RSA decryption, complexity validation, bcrypt hashing, and writes the result.
       *     2. Returns the reset result.
       *     Error codes:
       *     - ERR.User.NotFound: The user does not exist.
       *     - ERR.User.NotInTenant: The user does not belong to the current tenant.
       *     - ERR.User.WinnexoPasswordRequired: The user does not have password credentials (non-WINNEXO type).
       *
       * @param request ResetPasswordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetPasswordResponse
       */
      Models::ResetPasswordResponse resetPasswordWithOptions(const Models::ResetPasswordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a user.
       *
       * @description Resets the password of a user through OpenAPI.
       *     Business orchestration:
       *     1. Call UserManagementService.reset_member_password with password_encrypted (required).
       *        The service internally performs RSA decryption, complexity validation, bcrypt hashing, and writes the result.
       *     2. Returns the reset result.
       *     Error codes:
       *     - ERR.User.NotFound: The user does not exist.
       *     - ERR.User.NotInTenant: The user does not belong to the current tenant.
       *     - ERR.User.WinnexoPasswordRequired: The user does not have password credentials (non-WINNEXO type).
       *
       * @param request ResetPasswordRequest
       * @return ResetPasswordResponse
       */
      Models::ResetPasswordResponse resetPassword(const Models::ResetPasswordRequest &request);

      /**
       * @summary Resets an API token.
       *
       * @description Resets the token of a user.
       *     Business logic:
       *     1. Retrieves user_id from identity (caller_type=user is required).
       *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
       *     3. Calls reset_token:
       *        - Changes the old ACTIVE token to RESET (permanently invalidated).
       *        - Generates a new ACTIVE token.
       *     4. Returns the new token in plaintext and the masked value.
       *     Note: After the reset, the old token is permanently invalidated and cannot be recovered. The new token in plaintext is returned only in this response.
       *
       * @param request ResetTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetTokenResponse
       */
      Models::ResetTokenResponse resetTokenWithOptions(const Models::ResetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets an API token.
       *
       * @description Resets the token of a user.
       *     Business logic:
       *     1. Retrieves user_id from identity (caller_type=user is required).
       *     2. Constructs an AuthContext and delegates permission verification to UserTokenAuthorizedService.
       *     3. Calls reset_token:
       *        - Changes the old ACTIVE token to RESET (permanently invalidated).
       *        - Generates a new ACTIVE token.
       *     4. Returns the new token in plaintext and the masked value.
       *     Note: After the reset, the old token is permanently invalidated and cannot be recovered. The new token in plaintext is returned only in this response.
       *
       * @param request ResetTokenRequest
       * @return ResetTokenResponse
       */
      Models::ResetTokenResponse resetToken(const Models::ResetTokenRequest &request);

      /**
       * @summary Retries all failed data sources in a specified folder and its subfolders in batch.
       *
       * @description ## Request description
       * This API retrieves and retries data sources with a FAILED status in the specified personal folder of a user (including all subfolders). The request returns immediately, and the actual retry tasks are executed asynchronously in the background. Only resources that the current logged-in user has access to and that were created by the user can be retried.
       * ### Security and permissions
       * - This operation requires appropriate RAM permissions.
       * - You can only operate on resources within the tenant to which the current user belongs.
       * - Ensure that `tenantId` and `userId` come from verified identity information.
       * ### Precautions
       * - `directoryId` is a required parameter that specifies the target folder in which to check and retry failed data sources.
       * - If `tenantId` is not provided, the caller\\"s tenant ID is used by default.
       * - The API supports multiple authentication methods, including AccessKey, BearerToken, and APP authentication.
       *
       * @param request RetryDirectoryFailedSourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryDirectoryFailedSourcesResponse
       */
      Models::RetryDirectoryFailedSourcesResponse retryDirectoryFailedSourcesWithOptions(const Models::RetryDirectoryFailedSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries all failed data sources in a specified folder and its subfolders in batch.
       *
       * @description ## Request description
       * This API retrieves and retries data sources with a FAILED status in the specified personal folder of a user (including all subfolders). The request returns immediately, and the actual retry tasks are executed asynchronously in the background. Only resources that the current logged-in user has access to and that were created by the user can be retried.
       * ### Security and permissions
       * - This operation requires appropriate RAM permissions.
       * - You can only operate on resources within the tenant to which the current user belongs.
       * - Ensure that `tenantId` and `userId` come from verified identity information.
       * ### Precautions
       * - `directoryId` is a required parameter that specifies the target folder in which to check and retry failed data sources.
       * - If `tenantId` is not provided, the caller\\"s tenant ID is used by default.
       * - The API supports multiple authentication methods, including AccessKey, BearerToken, and APP authentication.
       *
       * @param request RetryDirectoryFailedSourcesRequest
       * @return RetryDirectoryFailedSourcesResponse
       */
      Models::RetryDirectoryFailedSourcesResponse retryDirectoryFailedSources(const Models::RetryDirectoryFailedSourcesRequest &request);

      /**
       * @summary Retries all data sources in failed status under a specified directory in batches.
       *
       * @description ## Operation description
       * This API retrieves and retries all data sources in FAILED status under a specified enterprise knowledge base directory (including its subdirectories). The request returns immediately, and the actual retry operations are executed asynchronously in the background.
       * - **Authentication**: In addition to basic authentication, the `DEVELOPMENT_KB_MANAGE` permission is required.
       * - **Security constraints**: Only callers with the corresponding tenant and user identity are allowed access, and KB management permission is required. Administrators can initiate retries for failed resources of any user.
       * - **Parameters**:
       *   - `directoryId` (required): The ID of the enterprise knowledge base directory to check and retry failed data sources.
       *   - `tenantId` (optional): The tenant ID. The default tenant of the caller is used if this parameter is not specified.
       * - **Response**: On success, returns the number of data sources enqueued for retry and related details.
       *
       * @param request RetryKnowledgeBaseFailedSourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryKnowledgeBaseFailedSourcesResponse
       */
      Models::RetryKnowledgeBaseFailedSourcesResponse retryKnowledgeBaseFailedSourcesWithOptions(const Models::RetryKnowledgeBaseFailedSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries all data sources in failed status under a specified directory in batches.
       *
       * @description ## Operation description
       * This API retrieves and retries all data sources in FAILED status under a specified enterprise knowledge base directory (including its subdirectories). The request returns immediately, and the actual retry operations are executed asynchronously in the background.
       * - **Authentication**: In addition to basic authentication, the `DEVELOPMENT_KB_MANAGE` permission is required.
       * - **Security constraints**: Only callers with the corresponding tenant and user identity are allowed access, and KB management permission is required. Administrators can initiate retries for failed resources of any user.
       * - **Parameters**:
       *   - `directoryId` (required): The ID of the enterprise knowledge base directory to check and retry failed data sources.
       *   - `tenantId` (optional): The tenant ID. The default tenant of the caller is used if this parameter is not specified.
       * - **Response**: On success, returns the number of data sources enqueued for retry and related details.
       *
       * @param request RetryKnowledgeBaseFailedSourcesRequest
       * @return RetryKnowledgeBaseFailedSourcesResponse
       */
      Models::RetryKnowledgeBaseFailedSourcesResponse retryKnowledgeBaseFailedSources(const Models::RetryKnowledgeBaseFailedSourcesRequest &request);

      /**
       * @summary Revokes the usage permissions of a user or user group on a digital human.
       *
       * @description Revokes the usage permissions of a user or user group on a specified digital human.
       *     Business logic:
       *     1. Constructs an AuthContext from identity.
       *     2. Performs mutual exclusion validation on the request body: either userIds or userGroupIds must be specified.
       *     3. Delegates to AgentAuthorizationAuthorizedService.revoke_authorization for execution.
       *     4. Pre-validation: MANAGE permission + agent existence check (performed by the AuthorizedService layer, which authenticates before exposing existence).
       *     5. After direct user authorization is revoked, the user may still have access through user group authorization.
       *
       * @param tmpReq RevokeAgentUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeAgentUsersResponse
       */
      Models::RevokeAgentUsersResponse revokeAgentUsersWithOptions(const Models::RevokeAgentUsersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the usage permissions of a user or user group on a digital human.
       *
       * @description Revokes the usage permissions of a user or user group on a specified digital human.
       *     Business logic:
       *     1. Constructs an AuthContext from identity.
       *     2. Performs mutual exclusion validation on the request body: either userIds or userGroupIds must be specified.
       *     3. Delegates to AgentAuthorizationAuthorizedService.revoke_authorization for execution.
       *     4. Pre-validation: MANAGE permission + agent existence check (performed by the AuthorizedService layer, which authenticates before exposing existence).
       *     5. After direct user authorization is revoked, the user may still have access through user group authorization.
       *
       * @param request RevokeAgentUsersRequest
       * @return RevokeAgentUsersResponse
       */
      Models::RevokeAgentUsersResponse revokeAgentUsers(const Models::RevokeAgentUsersRequest &request);

      /**
       * @summary Asynchronously triggers skill execution and immediately returns a RunId.
       *
       * @description ## Request description
       * This operation supports only asynchronous mode. After submission, the operation immediately returns a `RunId` and `Status=Running`. The client polls for the final result by calling `GetSkillRun`.
       * - **TenantId**: An optional common parameter that the gateway passes through to the backend header.
       * - **SkillCode** / **SkillName**: Specify one of the two parameters. SkillCode takes priority. If SkillName is not unique, `ERR.SkillHub.SkillNameAmbiguous` is returned.
       * - **Arguments**: Required. The skill input parameter object. The structure is described by the inputConfig returned by `GetSkill`.
       * - **ClientToken**: An optional idempotency key. In the current version, this value is only recorded in the task metadata and is not used for strict idempotency deduplication.
       * Note: Synchronous mode (Async=false), Stream, and CallbackUrl are not supported in the first release and will be available in later versions.
       *
       * @param tmpReq RunSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSkillResponse
       */
      Models::RunSkillResponse runSkillWithOptions(const Models::RunSkillRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronously triggers skill execution and immediately returns a RunId.
       *
       * @description ## Request description
       * This operation supports only asynchronous mode. After submission, the operation immediately returns a `RunId` and `Status=Running`. The client polls for the final result by calling `GetSkillRun`.
       * - **TenantId**: An optional common parameter that the gateway passes through to the backend header.
       * - **SkillCode** / **SkillName**: Specify one of the two parameters. SkillCode takes priority. If SkillName is not unique, `ERR.SkillHub.SkillNameAmbiguous` is returned.
       * - **Arguments**: Required. The skill input parameter object. The structure is described by the inputConfig returned by `GetSkill`.
       * - **ClientToken**: An optional idempotency key. In the current version, this value is only recorded in the task metadata and is not used for strict idempotency deduplication.
       * Note: Synchronous mode (Async=false), Stream, and CallbackUrl are not supported in the first release and will be available in later versions.
       *
       * @param request RunSkillRequest
       * @return RunSkillResponse
       */
      Models::RunSkillResponse runSkill(const Models::RunSkillRequest &request);

      /**
       * @summary Saves group outputs in batches to the collaboration group repository.
       *
       * @description ## Request description
       * - Saves specified group outputs to the repository directory of the same collaboration group.
       * - Supports two modes: `link` (maintains output association) and `copy` (creates an independent snapshot).
       * - The caller must be a platform user and a member of the target group. The caller can archive group outputs visible to them, including outputs created by other members.
       * - If `directoryId` is not specified, the default repository directory of the target group is used.
       * - A maximum of 50 outputs can be processed per batch. All entries are validated before saving. If any entry does not exist, is not visible, or cannot be operated on, the entire batch fails.
       * - After unified validation passes, entries are saved one by one. The response results maintain the same order as `itemIds`. A failure of a single entry does not affect other entries.
       *
       * @param tmpReq SaveGroupOutputFileToGroupResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveGroupOutputFileToGroupResourceResponse
       */
      Models::SaveGroupOutputFileToGroupResourceResponse saveGroupOutputFileToGroupResourceWithOptions(const Models::SaveGroupOutputFileToGroupResourceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves group outputs in batches to the collaboration group repository.
       *
       * @description ## Request description
       * - Saves specified group outputs to the repository directory of the same collaboration group.
       * - Supports two modes: `link` (maintains output association) and `copy` (creates an independent snapshot).
       * - The caller must be a platform user and a member of the target group. The caller can archive group outputs visible to them, including outputs created by other members.
       * - If `directoryId` is not specified, the default repository directory of the target group is used.
       * - A maximum of 50 outputs can be processed per batch. All entries are validated before saving. If any entry does not exist, is not visible, or cannot be operated on, the entire batch fails.
       * - After unified validation passes, entries are saved one by one. The response results maintain the same order as `itemIds`. A failure of a single entry does not affect other entries.
       *
       * @param request SaveGroupOutputFileToGroupResourceRequest
       * @return SaveGroupOutputFileToGroupResourceResponse
       */
      Models::SaveGroupOutputFileToGroupResourceResponse saveGroupOutputFileToGroupResource(const Models::SaveGroupOutputFileToGroupResourceRequest &request);

      /**
       * @summary Batch saves group outputs to the current operator\\"s personal knowledge base.
       *
       * @description ## Request description
       * - Saves specified group outputs to the current operator\\"s personal knowledge base.
       * - Supports two modes: `link` (maintains output association) and `copy` (creates an independent snapshot).
       * - The caller must be a member of the target group who is associated with a platform user. Regular members can only archive outputs they created, while group administrators can archive visible outputs from other members. Personal ownership is always derived from the gateway authentication identity.
       * - If `directoryId` is not specified, the current operator\\"s default personal directory is used.
       * - A maximum of 50 outputs can be processed per batch. All entries are validated before saving. The entire batch fails if any entry does not exist, is not visible, or cannot be operated on.
       * - After unified validation passes, entries are saved one by one. The response results maintain the same order as `itemIds`. A failure to save a single entry does not affect other entries.
       *
       * @param tmpReq SaveGroupOutputFileToPersonalResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveGroupOutputFileToPersonalResourceResponse
       */
      Models::SaveGroupOutputFileToPersonalResourceResponse saveGroupOutputFileToPersonalResourceWithOptions(const Models::SaveGroupOutputFileToPersonalResourceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch saves group outputs to the current operator\\"s personal knowledge base.
       *
       * @description ## Request description
       * - Saves specified group outputs to the current operator\\"s personal knowledge base.
       * - Supports two modes: `link` (maintains output association) and `copy` (creates an independent snapshot).
       * - The caller must be a member of the target group who is associated with a platform user. Regular members can only archive outputs they created, while group administrators can archive visible outputs from other members. Personal ownership is always derived from the gateway authentication identity.
       * - If `directoryId` is not specified, the current operator\\"s default personal directory is used.
       * - A maximum of 50 outputs can be processed per batch. All entries are validated before saving. The entire batch fails if any entry does not exist, is not visible, or cannot be operated on.
       * - After unified validation passes, entries are saved one by one. The response results maintain the same order as `itemIds`. A failure to save a single entry does not affect other entries.
       *
       * @param request SaveGroupOutputFileToPersonalResourceRequest
       * @return SaveGroupOutputFileToPersonalResourceResponse
       */
      Models::SaveGroupOutputFileToPersonalResourceResponse saveGroupOutputFileToPersonalResource(const Models::SaveGroupOutputFileToPersonalResourceRequest &request);

      /**
       * @summary Saves output details in batch as personal resources. Supports link or copy mode.
       *
       * @description ## Operation description
       * - This API saves a batch of output details as personal resources for the user.
       * - Two save modes are supported: `link` and `copy`. When `link` is selected, edits to the output are synchronized to the resource. When `copy` is selected, a snapshot is created with no limit on the number of copies.
       * - `tenant_id` and `user_id` are derived only from the authenticated identity.
       * - If `operating_object` values are inconsistent within the batch and `directoryId` is not specified, the entire batch fails with a pre-check error.
       * - The processing result of a single record does not affect other records. Failure information for individual records is returned in the response.
       * - A maximum of 50 records are supported per batch operation.
       * - Batch-level pre-check failures are returned in a POP-compatible error format by the global exception middleware.
       *
       * @param tmpReq SaveOutputFileToResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveOutputFileToResourceResponse
       */
      Models::SaveOutputFileToResourceResponse saveOutputFileToResourceWithOptions(const Models::SaveOutputFileToResourceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves output details in batch as personal resources. Supports link or copy mode.
       *
       * @description ## Operation description
       * - This API saves a batch of output details as personal resources for the user.
       * - Two save modes are supported: `link` and `copy`. When `link` is selected, edits to the output are synchronized to the resource. When `copy` is selected, a snapshot is created with no limit on the number of copies.
       * - `tenant_id` and `user_id` are derived only from the authenticated identity.
       * - If `operating_object` values are inconsistent within the batch and `directoryId` is not specified, the entire batch fails with a pre-check error.
       * - The processing result of a single record does not affect other records. Failure information for individual records is returned in the response.
       * - A maximum of 50 records are supported per batch operation.
       * - Batch-level pre-check failures are returned in a POP-compatible error format by the global exception middleware.
       *
       * @param request SaveOutputFileToResourceRequest
       * @return SaveOutputFileToResourceResponse
       */
      Models::SaveOutputFileToResourceResponse saveOutputFileToResource(const Models::SaveOutputFileToResourceRequest &request);

      /**
       * @summary Asynchronously sends a session message.
       *
       * @description Asynchronously sends a session message.
       *
       * @param tmpReq SendAsyncChatMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendAsyncChatMessageResponse
       */
      Models::SendAsyncChatMessageResponse sendAsyncChatMessageWithOptions(const Models::SendAsyncChatMessageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronously sends a session message.
       *
       * @description Asynchronously sends a session message.
       *
       * @param request SendAsyncChatMessageRequest
       * @return SendAsyncChatMessageResponse
       */
      Models::SendAsyncChatMessageResponse sendAsyncChatMessage(const Models::SendAsyncChatMessageRequest &request);

      /**
       * @summary Sends a message.
       *
       * @description ## Request description
       * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
       * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
       * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
       * - If no target folder ID (`directoryId`) is specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the invoker\\"s personal folder.
       * - Multiple authentication methods (AK, BearerToken, APP) are supported to authenticate requests.
       * - The operation type is write, and operation logs are recorded for subsequent auditing.
       *
       * @param tmpReq SendChatMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendChatMessageResponse
       */
      FutureGenerator<Models::SendChatMessageResponse> sendChatMessageWithSSE(const Models::SendChatMessageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message.
       *
       * @description ## Request description
       * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
       * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
       * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
       * - If no target folder ID (`directoryId`) is specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the invoker\\"s personal folder.
       * - Multiple authentication methods (AK, BearerToken, APP) are supported to authenticate requests.
       * - The operation type is write, and operation logs are recorded for subsequent auditing.
       *
       * @param tmpReq SendChatMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendChatMessageResponse
       */
      Models::SendChatMessageResponse sendChatMessageWithOptions(const Models::SendChatMessageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message.
       *
       * @description ## Request description
       * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
       * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
       * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
       * - If no target folder ID (`directoryId`) is specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the invoker\\"s personal folder.
       * - Multiple authentication methods (AK, BearerToken, APP) are supported to authenticate requests.
       * - The operation type is write, and operation logs are recorded for subsequent auditing.
       *
       * @param request SendChatMessageRequest
       * @return SendChatMessageResponse
       */
      Models::SendChatMessageResponse sendChatMessage(const Models::SendChatMessageRequest &request);

      /**
       * @summary Stops conversation generation.
       *
       * @param request StopChatMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopChatMessageResponse
       */
      Models::StopChatMessageResponse stopChatMessageWithOptions(const Models::StopChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops conversation generation.
       *
       * @param request StopChatMessageRequest
       * @return StopChatMessageResponse
       */
      Models::StopChatMessageResponse stopChatMessage(const Models::StopChatMessageRequest &request);

      /**
       * @summary Subscribes to a conversation message stream.
       *
       * @description Subscribes to a conversation message stream.
       *
       * @param request StreamChatMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StreamChatMessageResponse
       */
      FutureGenerator<Models::StreamChatMessageResponse> streamChatMessageWithSSE(const string &messageId, const Models::StreamChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Subscribes to a conversation message stream.
       *
       * @description Subscribes to a conversation message stream.
       *
       * @param request StreamChatMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StreamChatMessageResponse
       */
      Models::StreamChatMessageResponse streamChatMessageWithOptions(const string &messageId, const Models::StreamChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Subscribes to a conversation message stream.
       *
       * @description Subscribes to a conversation message stream.
       *
       * @param request StreamChatMessageRequest
       * @return StreamChatMessageResponse
       */
      Models::StreamChatMessageResponse streamChatMessage(const string &messageId, const Models::StreamChatMessageRequest &request);

      /**
       * @summary Pushes organizational structure synchronization.
       *
       * @description Accepts a department tree and member relationships pushed from the client and creates an asynchronous synchronization task.
       *     Processing flow:
       *     1. Validates platformType (only saml, oauth2, or custom are allowed).
       *     2. Validates data volume limits (departments + members <= 50000).
       *     3. Validates the compatibility between syncMembers and platformType.
       *     4. SAML/OAuth2 scenario: Parses or automatically derives ssoSettingsId.
       *     5. Custom scenario: Validates that corpId has been registered through createCustomOrg.
       *     6. Delegates to OrgSyncAuthorizedService to create the task (which includes permission verification).
       *     7. Returns taskId for polling.
       *
       * @param tmpReq SyncOrgStructureRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncOrgStructureResponse
       */
      Models::SyncOrgStructureResponse syncOrgStructureWithOptions(const Models::SyncOrgStructureRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pushes organizational structure synchronization.
       *
       * @description Accepts a department tree and member relationships pushed from the client and creates an asynchronous synchronization task.
       *     Processing flow:
       *     1. Validates platformType (only saml, oauth2, or custom are allowed).
       *     2. Validates data volume limits (departments + members <= 50000).
       *     3. Validates the compatibility between syncMembers and platformType.
       *     4. SAML/OAuth2 scenario: Parses or automatically derives ssoSettingsId.
       *     5. Custom scenario: Validates that corpId has been registered through createCustomOrg.
       *     6. Delegates to OrgSyncAuthorizedService to create the task (which includes permission verification).
       *     7. Returns taskId for polling.
       *
       * @param request SyncOrgStructureRequest
       * @return SyncOrgStructureResponse
       */
      Models::SyncOrgStructureResponse syncOrgStructure(const Models::SyncOrgStructureRequest &request);

      /**
       * @summary Follows or unfollows a specified primary object.
       *
       * @description ## Request description
       * - **Precheck**:
       *   1. When adding a follow: The system checks whether the primary object is already followed to prevent duplicates, and authenticates that the primary object exists.
       *   2. When unfollowing: This is an idempotent operation. Regardless of whether the user has previously followed the object, `success=true` is returned.
       * - **Security**: Three authentication methods are supported: AK, BearerToken, and APP.
       * - **Request frequency limit**: A maximum of 100 requests can be send per second.
       * - **Response log**: The response log record feature is enabled.
       * - **Tenant relevance**: This API is associated with a specific tenant. The tenant ID of the invoker is used by default.
       * - **Operation type**: Write operation.
       * - **Backend service**: Requests are forwarded to an internal service for processing. The timeout period is 3 seconds.
       *
       * @param tmpReq TogglePrimaryObjectFavoriteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TogglePrimaryObjectFavoriteResponse
       */
      Models::TogglePrimaryObjectFavoriteResponse togglePrimaryObjectFavoriteWithOptions(const Models::TogglePrimaryObjectFavoriteRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Follows or unfollows a specified primary object.
       *
       * @description ## Request description
       * - **Precheck**:
       *   1. When adding a follow: The system checks whether the primary object is already followed to prevent duplicates, and authenticates that the primary object exists.
       *   2. When unfollowing: This is an idempotent operation. Regardless of whether the user has previously followed the object, `success=true` is returned.
       * - **Security**: Three authentication methods are supported: AK, BearerToken, and APP.
       * - **Request frequency limit**: A maximum of 100 requests can be send per second.
       * - **Response log**: The response log record feature is enabled.
       * - **Tenant relevance**: This API is associated with a specific tenant. The tenant ID of the invoker is used by default.
       * - **Operation type**: Write operation.
       * - **Backend service**: Requests are forwarded to an internal service for processing. The timeout period is 3 seconds.
       *
       * @param request TogglePrimaryObjectFavoriteRequest
       * @return TogglePrimaryObjectFavoriteResponse
       */
      Models::TogglePrimaryObjectFavoriteResponse togglePrimaryObjectFavorite(const Models::TogglePrimaryObjectFavoriteRequest &request);

      /**
       * @summary Updates the authorization mode for digital employee usage permissions.
       *
       * @description Switches the authorization mode for digital employee usage permissions.
       *     Business logic:
       *     1. Constructs an AuthContext from the identity.
       *     2. Delegates to AgentAuthorizationAuthorizedService.update_auth_mode for execution.
       *     3. Pre-validation: MANAGE permission + agent existence check (performed by the AuthorizedService layer, which authenticates before exposing existence).
       *     4. SPECIFIED_USERS: Explicit authorization is required before usage.
       *     5. ALL_USERS: All users can use the digital employee without authorization (management permissions are not affected).
       *
       * @param request UpdateAgentAuthModeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentAuthModeResponse
       */
      Models::UpdateAgentAuthModeResponse updateAgentAuthModeWithOptions(const Models::UpdateAgentAuthModeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the authorization mode for digital employee usage permissions.
       *
       * @description Switches the authorization mode for digital employee usage permissions.
       *     Business logic:
       *     1. Constructs an AuthContext from the identity.
       *     2. Delegates to AgentAuthorizationAuthorizedService.update_auth_mode for execution.
       *     3. Pre-validation: MANAGE permission + agent existence check (performed by the AuthorizedService layer, which authenticates before exposing existence).
       *     4. SPECIFIED_USERS: Explicit authorization is required before usage.
       *     5. ALL_USERS: All users can use the digital employee without authorization (management permissions are not affected).
       *
       * @param request UpdateAgentAuthModeRequest
       * @return UpdateAgentAuthModeResponse
       */
      Models::UpdateAgentAuthModeResponse updateAgentAuthMode(const Models::UpdateAgentAuthModeRequest &request);

      /**
       * @summary Updates a session.
       *
       * @description Updates a session.
       *
       * @param request UpdateChatSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChatSessionResponse
       */
      Models::UpdateChatSessionResponse updateChatSessionWithOptions(const Models::UpdateChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a session.
       *
       * @description Updates a session.
       *
       * @param request UpdateChatSessionRequest
       * @return UpdateChatSessionResponse
       */
      Models::UpdateChatSessionResponse updateChatSession(const Models::UpdateChatSessionRequest &request);

      /**
       * @summary Updates the basic information of a user\\"s personal directory.
       *
       * @description ## Operation description
       * This API operation updates the personal directory information of a specified user, including the name, description, and parent directory. Ensure that the directory corresponding to the provided `directoryId` exists and belongs to the current user. If the `name` or `path` of the directory is changed, the system automatically and recursively updates the paths of all subdirectories to maintain consistency. When adjusting the parent directory, ensure the validity of the new parent directory (that is, it is not the directory itself and does not cause a circular dependency).
       * - **Security constraints**: `tenant_id` and `user_id` must be derived from the authenticated identity.
       * - **Permission requirements**: Corresponding RAM permissions are required to perform this operation.
       * - **Input parameters**:
       *   - `directoryId`: Required. The unique identifier of the directory to update.
       *   - `name`: Optional. The new directory name.
       *   - `description`: Optional. The new directory description.
       *   - `parentId`: Optional. The ID of the new parent directory.
       *   - `path`: Optional. When specified, the system cascades the update to the paths of the current directory and all its subdirectories.
       *
       * @param request UpdateDirectoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDirectoryResponse
       */
      Models::UpdateDirectoryResponse updateDirectoryWithOptions(const Models::UpdateDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information of a user\\"s personal directory.
       *
       * @description ## Operation description
       * This API operation updates the personal directory information of a specified user, including the name, description, and parent directory. Ensure that the directory corresponding to the provided `directoryId` exists and belongs to the current user. If the `name` or `path` of the directory is changed, the system automatically and recursively updates the paths of all subdirectories to maintain consistency. When adjusting the parent directory, ensure the validity of the new parent directory (that is, it is not the directory itself and does not cause a circular dependency).
       * - **Security constraints**: `tenant_id` and `user_id` must be derived from the authenticated identity.
       * - **Permission requirements**: Corresponding RAM permissions are required to perform this operation.
       * - **Input parameters**:
       *   - `directoryId`: Required. The unique identifier of the directory to update.
       *   - `name`: Optional. The new directory name.
       *   - `description`: Optional. The new directory description.
       *   - `parentId`: Optional. The ID of the new parent directory.
       *   - `path`: Optional. When specified, the system cascades the update to the paths of the current directory and all its subdirectories.
       *
       * @param request UpdateDirectoryRequest
       * @return UpdateDirectoryResponse
       */
      Models::UpdateDirectoryResponse updateDirectory(const Models::UpdateDirectoryRequest &request);

      /**
       * @summary Updates the information of a specified enterprise knowledge base directory, including the name, description, and parent directory.
       *
       * @description ## Operation description
       * - This operation modifies a directory in the enterprise knowledge base.
       * - You must have the `DEVELOPMENT_KB_MANAGE` permission to call this API operation.
       * - The `tenantId` parameter is optional. If not provided, the tenant ID of the caller is used by default.
       * - You must specify the `directoryId` of the directory to modify. The `name`, `description`, and `parentDirectoryId` parameters are optional. If not provided, the corresponding fields remain unchanged.
       * - When a new `parentDirectoryId` is specified, the system checks whether the new parent directory belongs to the current tenant and does not cause a circular dependency.
       * - This API operation supports multiple authentication methods (AK, BearerToken, APP) and has RAM permission control and operation auditing enabled.
       *
       * @param request UpdateKnowledgeBaseDirectoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKnowledgeBaseDirectoryResponse
       */
      Models::UpdateKnowledgeBaseDirectoryResponse updateKnowledgeBaseDirectoryWithOptions(const Models::UpdateKnowledgeBaseDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a specified enterprise knowledge base directory, including the name, description, and parent directory.
       *
       * @description ## Operation description
       * - This operation modifies a directory in the enterprise knowledge base.
       * - You must have the `DEVELOPMENT_KB_MANAGE` permission to call this API operation.
       * - The `tenantId` parameter is optional. If not provided, the tenant ID of the caller is used by default.
       * - You must specify the `directoryId` of the directory to modify. The `name`, `description`, and `parentDirectoryId` parameters are optional. If not provided, the corresponding fields remain unchanged.
       * - When a new `parentDirectoryId` is specified, the system checks whether the new parent directory belongs to the current tenant and does not cause a circular dependency.
       * - This API operation supports multiple authentication methods (AK, BearerToken, APP) and has RAM permission control and operation auditing enabled.
       *
       * @param request UpdateKnowledgeBaseDirectoryRequest
       * @return UpdateKnowledgeBaseDirectoryResponse
       */
      Models::UpdateKnowledgeBaseDirectoryResponse updateKnowledgeBaseDirectory(const Models::UpdateKnowledgeBaseDirectoryRequest &request);

      /**
       * @summary Edits the body content of a resource in an enterprise self-built knowledge base and triggers re-parsing.
       *
       * @description ## Request description
       * This operation allows you to update the body content of a specified enterprise knowledge base data source and optionally wait synchronously for parsing to complete. By setting the `forceSync` parameter, you can control whether the parsing process is executed synchronously or asynchronously. The default is asynchronous processing.
       * - **Note**: When the `content` field is an empty string, the original content is cleared.
       * - **Permission requirement**: Calling this operation requires the corresponding RAM action permission (`winnexo:UpdateKnowledgeBaseSourceContent`).
       *
       * @param request UpdateKnowledgeBaseSourceContentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKnowledgeBaseSourceContentResponse
       */
      Models::UpdateKnowledgeBaseSourceContentResponse updateKnowledgeBaseSourceContentWithOptions(const Models::UpdateKnowledgeBaseSourceContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits the body content of a resource in an enterprise self-built knowledge base and triggers re-parsing.
       *
       * @description ## Request description
       * This operation allows you to update the body content of a specified enterprise knowledge base data source and optionally wait synchronously for parsing to complete. By setting the `forceSync` parameter, you can control whether the parsing process is executed synchronously or asynchronously. The default is asynchronous processing.
       * - **Note**: When the `content` field is an empty string, the original content is cleared.
       * - **Permission requirement**: Calling this operation requires the corresponding RAM action permission (`winnexo:UpdateKnowledgeBaseSourceContent`).
       *
       * @param request UpdateKnowledgeBaseSourceContentRequest
       * @return UpdateKnowledgeBaseSourceContentResponse
       */
      Models::UpdateKnowledgeBaseSourceContentResponse updateKnowledgeBaseSourceContent(const Models::UpdateKnowledgeBaseSourceContentRequest &request);

      /**
       * @summary Updates the resource tags of a specified data source in an enterprise knowledge base.
       *
       * @description ## Request description
       * - This operation updates the labels of a specific data source in an enterprise knowledge base.
       * - You must have knowledge base management permissions to invoke this operation.
       * - The `sourceTags` parameter accepts a JSON character string list, such as `["tagA", "tagB"]`. If you set this parameter to `null`, all existing labels are cleared.
       * - The update operation affects only the `sourceTags` and `gmt_modified` fields and does not trigger the `process_source` workflow.
       * - If the specified data source does not exist, the `ERR.Robject.Source.NotFound` fault is returned.
       * - This operation supports authentication through AccessKey, BearerToken, or APP methods.
       * - When you invoke this operation, make sure that `tenant_id` and `user_id` are from valid authentication identity information.
       *
       * @param request UpdateKnowledgeBaseSourceTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKnowledgeBaseSourceTagsResponse
       */
      Models::UpdateKnowledgeBaseSourceTagsResponse updateKnowledgeBaseSourceTagsWithOptions(const Models::UpdateKnowledgeBaseSourceTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the resource tags of a specified data source in an enterprise knowledge base.
       *
       * @description ## Request description
       * - This operation updates the labels of a specific data source in an enterprise knowledge base.
       * - You must have knowledge base management permissions to invoke this operation.
       * - The `sourceTags` parameter accepts a JSON character string list, such as `["tagA", "tagB"]`. If you set this parameter to `null`, all existing labels are cleared.
       * - The update operation affects only the `sourceTags` and `gmt_modified` fields and does not trigger the `process_source` workflow.
       * - If the specified data source does not exist, the `ERR.Robject.Source.NotFound` fault is returned.
       * - This operation supports authentication through AccessKey, BearerToken, or APP methods.
       * - When you invoke this operation, make sure that `tenant_id` and `user_id` are from valid authentication identity information.
       *
       * @param request UpdateKnowledgeBaseSourceTagsRequest
       * @return UpdateKnowledgeBaseSourceTagsResponse
       */
      Models::UpdateKnowledgeBaseSourceTagsResponse updateKnowledgeBaseSourceTags(const Models::UpdateKnowledgeBaseSourceTagsRequest &request);

      /**
       * @summary Updates a scheduled task.
       *
       * @description Updates a scheduled task.
       *
       * @param tmpReq UpdateScheduledTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScheduledTaskResponse
       */
      Models::UpdateScheduledTaskResponse updateScheduledTaskWithOptions(const Models::UpdateScheduledTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a scheduled task.
       *
       * @description Updates a scheduled task.
       *
       * @param request UpdateScheduledTaskRequest
       * @return UpdateScheduledTaskResponse
       */
      Models::UpdateScheduledTaskResponse updateScheduledTask(const Models::UpdateScheduledTaskRequest &request);

      /**
       * @summary Updates the content of an editable data source within a tenant and triggers re-parsing.
       *
       * @description ## Operation description
       * - This API operation updates the content of a data source within a specified tenant and triggers synchronous or asynchronous re-parsing of the data source as needed.
       * - `tenant_id` and `user_id` are used only for authentication and are not involved in actual business logic processing.
       * - When the provided content is an empty string, the system performs the operation according to the existing service contract.
       * - If the specified data source does not exist, a standard NotFound error is returned. Other exceptions are handled by the global exception chain.
       * - Set the `forceSync` parameter to determine whether to wait for the parsing process to complete. The default behavior is asynchronous queuing.
       *
       * @param request UpdateSourceContentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSourceContentResponse
       */
      Models::UpdateSourceContentResponse updateSourceContentWithOptions(const Models::UpdateSourceContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the content of an editable data source within a tenant and triggers re-parsing.
       *
       * @description ## Operation description
       * - This API operation updates the content of a data source within a specified tenant and triggers synchronous or asynchronous re-parsing of the data source as needed.
       * - `tenant_id` and `user_id` are used only for authentication and are not involved in actual business logic processing.
       * - When the provided content is an empty string, the system performs the operation according to the existing service contract.
       * - If the specified data source does not exist, a standard NotFound error is returned. Other exceptions are handled by the global exception chain.
       * - Set the `forceSync` parameter to determine whether to wait for the parsing process to complete. The default behavior is asynchronous queuing.
       *
       * @param request UpdateSourceContentRequest
       * @return UpdateSourceContentResponse
       */
      Models::UpdateSourceContentResponse updateSourceContent(const Models::UpdateSourceContentRequest &request);

      /**
       * @summary Modifies knowledge base folder information.
       *
       * @description Modifies knowledge base folder information.
       *
       * @param request UpdateTenantDirectoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTenantDirectoryResponse
       */
      Models::UpdateTenantDirectoryResponse updateTenantDirectoryWithOptions(const Models::UpdateTenantDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies knowledge base folder information.
       *
       * @description Modifies knowledge base folder information.
       *
       * @param request UpdateTenantDirectoryRequest
       * @return UpdateTenantDirectoryResponse
       */
      Models::UpdateTenantDirectoryResponse updateTenantDirectory(const Models::UpdateTenantDirectoryRequest &request);

      /**
       * @summary Modifies user information, including enabling or disabling the user.
       *
       * @description Modifies user information through OpenAPI.
       *     Business orchestration:
       *     1. Parse roleCodes → role_ids
       *     2. If isActive has changed, perform the status switch first (including last super admin protection)
       *     3. Call update_tenant_member to modify other fields (displayName / roleCodes / userGroupIds)
       *     4. Return HTTP 200 if all steps succeed
       *     Execution order notes:
       *     - The isActive status change is performed before other field writes. The two steps are not in the same transaction.
       *     - If validation fails (such as last super admin protection) → an exception is thrown and subsequent steps are not executed.
       *     - If the isActive change has been persisted but a subsequent step fails, the isActive change is not rolled back.
       *
       * @param tmpReq UpdateUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies user information, including enabling or disabling the user.
       *
       * @description Modifies user information through OpenAPI.
       *     Business orchestration:
       *     1. Parse roleCodes → role_ids
       *     2. If isActive has changed, perform the status switch first (including last super admin protection)
       *     3. Call update_tenant_member to modify other fields (displayName / roleCodes / userGroupIds)
       *     4. Return HTTP 200 if all steps succeed
       *     Execution order notes:
       *     - The isActive status change is performed before other field writes. The two steps are not in the same transaction.
       *     - If validation fails (such as last super admin protection) → an exception is thrown and subsequent steps are not executed.
       *     - If the isActive change has been persisted but a subsequent step fails, the isActive change is not rolled back.
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);

      /**
       * @summary Updates the name, description, and parent relationship of a specified user group.
       *
       * @description WinNexo user management OpenAPI: updates a user group. The tenant identity is obtained from the authentication context.
       *
       * @param request UpdateUserGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserGroupResponse
       */
      Models::UpdateUserGroupResponse updateUserGroupWithOptions(const Models::UpdateUserGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name, description, and parent relationship of a specified user group.
       *
       * @description WinNexo user management OpenAPI: updates a user group. The tenant identity is obtained from the authentication context.
       *
       * @param request UpdateUserGroupRequest
       * @return UpdateUserGroupResponse
       */
      Models::UpdateUserGroupResponse updateUserGroup(const Models::UpdateUserGroupRequest &request);

      /**
       * @summary Updates partial fields of the current user information and returns the complete user information.
       *
       * @description ## Request description
       * - This API allows the caller to update some or all optional fields of a specified user. Fields that are not provided retain their original values.
       * - Use the `tenantId` parameter to specify a tenant ID. If omitted, the default tenant of the caller is used.
       * - After a successful update, the response body contains the complete user information object.
       * - This operation requires authentication and supports AK, BearerToken, and APP security schemes.
       * - The request content type is JSON, and the operation is available only over HTTPS.
       * - Note: The `profileRoleInfo` field is valid only when the user role is set to Others. It describes the specific role information of the user.
       *
       * @param request UpdateUserInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserInfoResponse
       */
      Models::UpdateUserInfoResponse updateUserInfoWithOptions(const Models::UpdateUserInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates partial fields of the current user information and returns the complete user information.
       *
       * @description ## Request description
       * - This API allows the caller to update some or all optional fields of a specified user. Fields that are not provided retain their original values.
       * - Use the `tenantId` parameter to specify a tenant ID. If omitted, the default tenant of the caller is used.
       * - After a successful update, the response body contains the complete user information object.
       * - This operation requires authentication and supports AK, BearerToken, and APP security schemes.
       * - The request content type is JSON, and the operation is available only over HTTPS.
       * - Note: The `profileRoleInfo` field is valid only when the user role is set to Others. It describes the specific role information of the user.
       *
       * @param request UpdateUserInfoRequest
       * @return UpdateUserInfoResponse
       */
      Models::UpdateUserInfoResponse updateUserInfo(const Models::UpdateUserInfoRequest &request);

      /**
       * @summary Uploads a local file for a session.
       *
       * @description ## Operation description
       * This API operation uploads a temporary temporary file by using the **file transfer upload** mode (`fileTransfer`). The file binary data is not transmitted in the request body of this API operation. Instead, the file is first uploaded to Object Storage Service (OSS), and then the OSS address is passed to the backend through the `FileUrl` parameter. The backend retrieves the bytes from that address, writes them to its own OSS bucket, and creates a temporary temporary file record.
       * ### How to call
       * - **Recommended**: Use the `UploadChatFileAdvance` method generated by the SDK. Pass in the local file stream, and the SDK automatically completes the transfer upload and populates the `FileUrl` parameter.
       * - **Direct upload**: Upload the file to an OSS address accessible by the server, and then call this API operation directly with the `FileUrl` parameter.
       * ### Request parameters
       * - **FileUrl**: Required. The OSS address of the file. When you use the Advance method, the SDK automatically populates this parameter. You do not need to manually set it.
       * - **FileName**: Required. The original file name including the extension, such as `report.pdf`. The OSS address generated during the transfer does not carry the original file name. The backend uses this parameter to determine the file extension and display name. Therefore, you must explicitly pass in this parameter.
       * - **ContentType**: Optional. The MIME type of the file. If this parameter is not specified, `application/octet-stream` is used.
       * - **OperatingObjectName**: Optional. The agent namespace identifier that determines the file storage path.
       * ### Response parameters
       * The response includes the OSS object path `objectName`, the storage address `fileUrl`, the publicly accessible address `filePublicUrl` (valid for 1 hour), and the file record ID `fileRecordId`. The `uploadSignatureUrl` parameter is always empty in this mode.
       *
       * @param request UploadChatFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadChatFileResponse
       */
      Models::UploadChatFileResponse uploadChatFileWithOptions(const Models::UploadChatFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a local file for a session.
       *
       * @description ## Operation description
       * This API operation uploads a temporary temporary file by using the **file transfer upload** mode (`fileTransfer`). The file binary data is not transmitted in the request body of this API operation. Instead, the file is first uploaded to Object Storage Service (OSS), and then the OSS address is passed to the backend through the `FileUrl` parameter. The backend retrieves the bytes from that address, writes them to its own OSS bucket, and creates a temporary temporary file record.
       * ### How to call
       * - **Recommended**: Use the `UploadChatFileAdvance` method generated by the SDK. Pass in the local file stream, and the SDK automatically completes the transfer upload and populates the `FileUrl` parameter.
       * - **Direct upload**: Upload the file to an OSS address accessible by the server, and then call this API operation directly with the `FileUrl` parameter.
       * ### Request parameters
       * - **FileUrl**: Required. The OSS address of the file. When you use the Advance method, the SDK automatically populates this parameter. You do not need to manually set it.
       * - **FileName**: Required. The original file name including the extension, such as `report.pdf`. The OSS address generated during the transfer does not carry the original file name. The backend uses this parameter to determine the file extension and display name. Therefore, you must explicitly pass in this parameter.
       * - **ContentType**: Optional. The MIME type of the file. If this parameter is not specified, `application/octet-stream` is used.
       * - **OperatingObjectName**: Optional. The agent namespace identifier that determines the file storage path.
       * ### Response parameters
       * The response includes the OSS object path `objectName`, the storage address `fileUrl`, the publicly accessible address `filePublicUrl` (valid for 1 hour), and the file record ID `fileRecordId`. The `uploadSignatureUrl` parameter is always empty in this mode.
       *
       * @param request UploadChatFileRequest
       * @return UploadChatFileResponse
       */
      Models::UploadChatFileResponse uploadChatFile(const Models::UploadChatFileRequest &request);

      Models::UploadChatFileResponse uploadChatFileAdvance(const Models::UploadChatFileAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
