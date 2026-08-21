#include <darabonba/Core.hpp>
#include <alibabacloud/WinNexo20260512.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/encode/Encoder.hpp>
#include <alibabacloud/credentials/Client.hpp>
#include <darabonba/http/FileField.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using namespace AlibabaCloud::Credentials::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::WinNexo20260512::Models;
namespace AlibabaCloud
{
namespace WinNexo20260512
{

AlibabaCloud::WinNexo20260512::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("winnexo", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}



string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Performs a service health check.
 *
 * @param request CheckHealthRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckHealthResponse
 */
CheckHealthResponse Client::checkHealthWithOptions(const CheckHealthRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckHealth"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/checkHealth")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckHealthResponse>();
}

/**
 * @summary Performs a service health check.
 *
 * @param request CheckHealthRequest
 * @return CheckHealthResponse
 */
CheckHealthResponse Client::checkHealth(const CheckHealthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkHealthWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a session.
 *
 * @param tmpReq CreateConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConversationResponse
 */
CreateConversationResponse Client::createConversationWithOptions(const CreateConversationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateConversationShrinkRequest request = CreateConversationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOperatingObjectName()) {
    request.setOperatingObjectNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOperatingObjectName(), "operatingObjectName", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasMetadata()) {
    body["metadata"] = request.getMetadata();
  }

  if (!!request.hasObjectId()) {
    body["objectId"] = request.getObjectId();
  }

  if (!!request.hasOperatingObjectNameShrink()) {
    body["operatingObjectName"] = request.getOperatingObjectNameShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConversation"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createConversation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConversationResponse>();
}

/**
 * @summary Creates a session.
 *
 * @param request CreateConversationRequest
 * @return CreateConversationResponse
 */
CreateConversationResponse Client::createConversation(const CreateConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createConversationWithOptions(request, headers, runtime);
}

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
CreateCustomOrgResponse Client::createCustomOrgWithOptions(const CreateCustomOrgRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCorpId()) {
    body["corpId"] = request.getCorpId();
  }

  if (!!request.hasCorpName()) {
    body["corpName"] = request.getCorpName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCustomOrg"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createCustomOrg")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomOrgResponse>();
}

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
CreateCustomOrgResponse Client::createCustomOrg(const CreateCustomOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCustomOrgWithOptions(request, headers, runtime);
}

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
CreateGroupAliDingChatResponse Client::createGroupAliDingChatWithOptions(const CreateGroupAliDingChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateGroupAliDingChatShrinkRequest request = CreateGroupAliDingChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateFrequency()) {
    request.setUpdateFrequencyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateFrequency(), "updateFrequency", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasChatName()) {
    body["chatName"] = request.getChatName();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    body["groupId"] = request.getGroupId();
  }

  if (!!request.hasHistoryStartTime()) {
    body["historyStartTime"] = request.getHistoryStartTime();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasUpdateFrequencyShrink()) {
    body["updateFrequency"] = request.getUpdateFrequencyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGroupAliDingChat"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createGroupAliDingChat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupAliDingChatResponse>();
}

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
CreateGroupAliDingChatResponse Client::createGroupAliDingChat(const CreateGroupAliDingChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGroupAliDingChatWithOptions(request, headers, runtime);
}

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
CreateKnowledgeBaseAliDingDocResponse Client::createKnowledgeBaseAliDingDocWithOptions(const CreateKnowledgeBaseAliDingDocRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasKnowledgeId()) {
    body["knowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBaseAliDingDoc"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createKnowledgeBaseAlidingDoc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseAliDingDocResponse>();
}

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
CreateKnowledgeBaseAliDingDocResponse Client::createKnowledgeBaseAliDingDoc(const CreateKnowledgeBaseAliDingDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseAliDingDocWithOptions(request, headers, runtime);
}

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
CreateKnowledgeBaseDirectoryResponse Client::createKnowledgeBaseDirectoryWithOptions(const CreateKnowledgeBaseDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParentDirectoryId()) {
    body["parentDirectoryId"] = request.getParentDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBaseDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createKnowledgeBaseDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseDirectoryResponse>();
}

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
CreateKnowledgeBaseDirectoryResponse Client::createKnowledgeBaseDirectory(const CreateKnowledgeBaseDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseDirectoryWithOptions(request, headers, runtime);
}

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
CreateKnowledgeBaseFileResponse Client::createKnowledgeBaseFileWithOptions(const CreateKnowledgeBaseFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFileExt()) {
    body["fileExt"] = request.getFileExt();
  }

  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasFilePath()) {
    body["filePath"] = request.getFilePath();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasFileRecordId()) {
    body["fileRecordId"] = request.getFileRecordId();
  }

  if (!!request.hasKnowledgeId()) {
    body["knowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBaseFile"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createKnowledgeBaseFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseFileResponse>();
}

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
CreateKnowledgeBaseFileResponse Client::createKnowledgeBaseFile(const CreateKnowledgeBaseFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseFileWithOptions(request, headers, runtime);
}

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
CreateKnowledgeBaseTextResponse Client::createKnowledgeBaseTextWithOptions(const CreateKnowledgeBaseTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasKnowledgeId()) {
    body["knowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasTextContent()) {
    body["textContent"] = request.getTextContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBaseText"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createKnowledgeBaseText")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseTextResponse>();
}

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
CreateKnowledgeBaseTextResponse Client::createKnowledgeBaseText(const CreateKnowledgeBaseTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseTextWithOptions(request, headers, runtime);
}

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
CreatePersonalAliDingChatResponse Client::createPersonalAliDingChatWithOptions(const CreatePersonalAliDingChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePersonalAliDingChatShrinkRequest request = CreatePersonalAliDingChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateFrequency()) {
    request.setUpdateFrequencyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateFrequency(), "updateFrequency", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasChatName()) {
    body["chatName"] = request.getChatName();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasHistoryStartTime()) {
    body["historyStartTime"] = request.getHistoryStartTime();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasUpdateFrequencyShrink()) {
    body["updateFrequency"] = request.getUpdateFrequencyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalAliDingChat"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalAliDingChat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalAliDingChatResponse>();
}

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
CreatePersonalAliDingChatResponse Client::createPersonalAliDingChat(const CreatePersonalAliDingChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalAliDingChatWithOptions(request, headers, runtime);
}

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
CreatePersonalAliDingMeetingResponse Client::createPersonalAliDingMeetingWithOptions(const CreatePersonalAliDingMeetingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasShanjiUrl()) {
    body["shanjiUrl"] = request.getShanjiUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalAliDingMeeting"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalAliDingMeeting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalAliDingMeetingResponse>();
}

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
CreatePersonalAliDingMeetingResponse Client::createPersonalAliDingMeeting(const CreatePersonalAliDingMeetingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalAliDingMeetingWithOptions(request, headers, runtime);
}

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
CreatePersonalAlidingDocResponse Client::createPersonalAlidingDocWithOptions(const CreatePersonalAlidingDocRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalAlidingDoc"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalAliDingDoc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalAlidingDocResponse>();
}

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
CreatePersonalAlidingDocResponse Client::createPersonalAlidingDoc(const CreatePersonalAlidingDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalAlidingDocWithOptions(request, headers, runtime);
}

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
CreatePersonalAlidingKnowledgeBaseResponse Client::createPersonalAlidingKnowledgeBaseWithOptions(const CreatePersonalAlidingKnowledgeBaseRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePersonalAlidingKnowledgeBaseShrinkRequest request = CreatePersonalAlidingKnowledgeBaseShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectBindings()) {
    request.setObjectBindingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectBindings(), "objectBindings", "json"));
  }

  if (!!tmpReq.hasSyncConfig()) {
    request.setSyncConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSyncConfig(), "syncConfig", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasKbName()) {
    body["kbName"] = request.getKbName();
  }

  if (!!request.hasKbUrl()) {
    body["kbUrl"] = request.getKbUrl();
  }

  if (!!request.hasObjectBindingsShrink()) {
    body["objectBindings"] = request.getObjectBindingsShrink();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSyncConfigShrink()) {
    body["syncConfig"] = request.getSyncConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalAlidingKnowledgeBase"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalAliDingKnowledgeBase")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalAlidingKnowledgeBaseResponse>();
}

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
CreatePersonalAlidingKnowledgeBaseResponse Client::createPersonalAlidingKnowledgeBase(const CreatePersonalAlidingKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalAlidingKnowledgeBaseWithOptions(request, headers, runtime);
}

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
CreatePersonalDingtalkMeetingResponse Client::createPersonalDingtalkMeetingWithOptions(const CreatePersonalDingtalkMeetingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCredentialId()) {
    body["credentialId"] = request.getCredentialId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasRoomCode()) {
    body["roomCode"] = request.getRoomCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalDingtalkMeeting"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalDingtalkMeeting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalDingtalkMeetingResponse>();
}

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
CreatePersonalDingtalkMeetingResponse Client::createPersonalDingtalkMeeting(const CreatePersonalDingtalkMeetingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalDingtalkMeetingWithOptions(request, headers, runtime);
}

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
CreatePersonalDingtalkMinutesResponse Client::createPersonalDingtalkMinutesWithOptions(const CreatePersonalDingtalkMinutesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasShanjiUrl()) {
    body["shanjiUrl"] = request.getShanjiUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalDingtalkMinutes"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalDingtalkMinutes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalDingtalkMinutesResponse>();
}

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
CreatePersonalDingtalkMinutesResponse Client::createPersonalDingtalkMinutes(const CreatePersonalDingtalkMinutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalDingtalkMinutesWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a personal folder (category) under My Resources.
 *
 * @description ## Request description
 * - This API is used to create a personal folder (category) under "My Resources".
 * - If `parentDirectoryId` is not specified, the system automatically uses or creates the default root folder of the current digital human as the parent folder.
 * - If `parentDirectoryId` is specified, it must be an existing personal folder of the current user under the current digital human.
 * - `tenant_id` and `user_id` are derived from the authentication identity only. These fields are ignored if included in the request body.
 *
 * @param request CreatePersonalDirectoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalDirectoryResponse
 */
CreatePersonalDirectoryResponse Client::createPersonalDirectoryWithOptions(const CreatePersonalDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasParentDirectoryId()) {
    body["parentDirectoryId"] = request.getParentDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalDirectoryResponse>();
}

/**
 * @summary Creates a personal folder (category) under My Resources.
 *
 * @description ## Request description
 * - This API is used to create a personal folder (category) under "My Resources".
 * - If `parentDirectoryId` is not specified, the system automatically uses or creates the default root folder of the current digital human as the parent folder.
 * - If `parentDirectoryId` is specified, it must be an existing personal folder of the current user under the current digital human.
 * - `tenant_id` and `user_id` are derived from the authentication identity only. These fields are ignored if included in the request body.
 *
 * @param request CreatePersonalDirectoryRequest
 * @return CreatePersonalDirectoryResponse
 */
CreatePersonalDirectoryResponse Client::createPersonalDirectory(const CreatePersonalDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalDirectoryWithOptions(request, headers, runtime);
}

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
CreatePersonalFeishuChatResponse Client::createPersonalFeishuChatWithOptions(const CreatePersonalFeishuChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePersonalFeishuChatShrinkRequest request = CreatePersonalFeishuChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateFrequency()) {
    request.setUpdateFrequencyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateFrequency(), "updateFrequency", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasHistoryStartTime()) {
    body["historyStartTime"] = request.getHistoryStartTime();
  }

  if (!!request.hasNotes()) {
    body["notes"] = request.getNotes();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  if (!!request.hasUpdateFrequencyShrink()) {
    body["updateFrequency"] = request.getUpdateFrequencyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalFeishuChat"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalFeishuChat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalFeishuChatResponse>();
}

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
CreatePersonalFeishuChatResponse Client::createPersonalFeishuChat(const CreatePersonalFeishuChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalFeishuChatWithOptions(request, headers, runtime);
}

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
CreatePersonalFeishuMinuteResponse Client::createPersonalFeishuMinuteWithOptions(const CreatePersonalFeishuMinuteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCredentialId()) {
    body["credentialId"] = request.getCredentialId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasMinuteToken()) {
    body["minuteToken"] = request.getMinuteToken();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalFeishuMinute"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalFeishuMinute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalFeishuMinuteResponse>();
}

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
CreatePersonalFeishuMinuteResponse Client::createPersonalFeishuMinute(const CreatePersonalFeishuMinuteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalFeishuMinuteWithOptions(request, headers, runtime);
}

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
CreatePersonalFileResponse Client::createPersonalFileWithOptions(const CreatePersonalFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFileExt()) {
    body["fileExt"] = request.getFileExt();
  }

  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasFilePath()) {
    body["filePath"] = request.getFilePath();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasFileRecordId()) {
    body["fileRecordId"] = request.getFileRecordId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalFile"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalFileResponse>();
}

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
CreatePersonalFileResponse Client::createPersonalFile(const CreatePersonalFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalFileWithOptions(request, headers, runtime);
}

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
CreatePersonalTextResponse Client::createPersonalTextWithOptions(const CreatePersonalTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasTextContent()) {
    body["textContent"] = request.getTextContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalText"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalText")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalTextResponse>();
}

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
CreatePersonalTextResponse Client::createPersonalText(const CreatePersonalTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPersonalTextWithOptions(request, headers, runtime);
}

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
CreatePersonalVoiceMeetingResponse Client::createPersonalVoiceMeetingWithOptions(const CreatePersonalVoiceMeetingRequest &request, const CreatePersonalVoiceMeetingHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFileUrl()) {
    body["fileUrl"] = request.getFileUrl();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasRequestId()) {
    realHeaders["requestId"] = Darabonba::Convert::stringVal(headers.getRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalVoiceMeeting"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createPersonalVoiceMeeting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalVoiceMeetingResponse>();
}

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
CreatePersonalVoiceMeetingResponse Client::createPersonalVoiceMeeting(const CreatePersonalVoiceMeetingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreatePersonalVoiceMeetingHeaders headers = CreatePersonalVoiceMeetingHeaders();
  return createPersonalVoiceMeetingWithOptions(request, headers, runtime);
}

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
CreateScheduledTaskResponse Client::createScheduledTaskWithOptions(const CreateScheduledTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateScheduledTaskShrinkRequest request = CreateScheduledTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDescription()) {
    request.setDescriptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDescription(), "description", "json"));
  }

  if (!!tmpReq.hasDigitalEmployeeName()) {
    request.setDigitalEmployeeNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDigitalEmployeeName(), "digitalEmployeeName", "json"));
  }

  if (!!tmpReq.hasSegments()) {
    request.setSegmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSegments(), "segments", "json"));
  }

  if (!!tmpReq.hasTaskDetail()) {
    request.setTaskDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskDetail(), "taskDetail", "json"));
  }

  if (!!tmpReq.hasTriggerConfig()) {
    request.setTriggerConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTriggerConfig(), "triggerConfig", "json"));
  }

  if (!!tmpReq.hasVisibleMemberUserIds()) {
    request.setVisibleMemberUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVisibleMemberUserIds(), "visibleMemberUserIds", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCollaborationGroupId()) {
    body["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasDescriptionShrink()) {
    body["description"] = request.getDescriptionShrink();
  }

  if (!!request.hasDigitalEmployeeNameShrink()) {
    body["digitalEmployeeName"] = request.getDigitalEmployeeNameShrink();
  }

  if (!!request.hasIsOpen()) {
    body["isOpen"] = request.getIsOpen();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasSegmentsShrink()) {
    body["segments"] = request.getSegmentsShrink();
  }

  if (!!request.hasTaskDetailShrink()) {
    body["taskDetail"] = request.getTaskDetailShrink();
  }

  if (!!request.hasTriggerConfigShrink()) {
    body["triggerConfig"] = request.getTriggerConfigShrink();
  }

  if (!!request.hasVisibility()) {
    body["visibility"] = request.getVisibility();
  }

  if (!!request.hasVisibleMemberUserIdsShrink()) {
    body["visibleMemberUserIds"] = request.getVisibleMemberUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateScheduledTask"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createScheduledTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduledTaskResponse>();
}

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
CreateScheduledTaskResponse Client::createScheduledTask(const CreateScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createScheduledTaskWithOptions(request, headers, runtime);
}

/**
 * @summary Adds a knowledge base and knowledge base categories.
 *
 * @description ## Request description
 * - This API is used to create a new enterprise knowledge base directory under a specified tenant.
 * - You can specify the parent directory of the new directory by setting the `parentId` parameter. If this parameter is not specified, the directory is created as a root directory by default.
 * - The `path` parameter is optional. If this parameter is not specified, the system automatically calculates the path based on the parent directory.
 * - Calling this operation requires the corresponding permissions. Multiple authentication methods are supported, including AK, BearerToken, and APP authentication.
 * - After the directory is created, the related information of the new directory is returned, such as the directory ID and name.
 *
 * @param request CreateTenantDirectoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTenantDirectoryResponse
 */
CreateTenantDirectoryResponse Client::createTenantDirectoryWithOptions(const CreateTenantDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParentId()) {
    body["parentId"] = request.getParentId();
  }

  if (!!request.hasPath()) {
    body["path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTenantDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createTenantDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTenantDirectoryResponse>();
}

/**
 * @summary Adds a knowledge base and knowledge base categories.
 *
 * @description ## Request description
 * - This API is used to create a new enterprise knowledge base directory under a specified tenant.
 * - You can specify the parent directory of the new directory by setting the `parentId` parameter. If this parameter is not specified, the directory is created as a root directory by default.
 * - The `path` parameter is optional. If this parameter is not specified, the system automatically calculates the path based on the parent directory.
 * - Calling this operation requires the corresponding permissions. Multiple authentication methods are supported, including AK, BearerToken, and APP authentication.
 * - After the directory is created, the related information of the new directory is returned, such as the directory ID and name.
 *
 * @param request CreateTenantDirectoryRequest
 * @return CreateTenantDirectoryResponse
 */
CreateTenantDirectoryResponse Client::createTenantDirectory(const CreateTenantDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTenantDirectoryWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a user and adds the user to a tenant.
 *
 * @description Creates a user by using OpenAPI.
 *     Business orchestration:
 *     1. Parses roleCodes → role_ids (validates against system role enumerations).
 *     2. Checks whether the user already exists (used to return the isNewUser flag).
 *     3. Calls UserManagementService.add_tenant_member to create or add the user (the password must be passed in as an RSA ciphertext by the caller).
 *     4. Returns the creation result (including the isNewUser flag).
 *     Error codes:
 *     - ERR.User.DeactivatedInTenant: The user is deactivated in the tenant. Use updateUser to resume the user.
 *     - ERR.User.AlreadyInTenant: The user is already an active member of the tenant.
 *     - ERR.User.DisplayNameDuplicateInTenant: The display name is duplicate within the tenant.
 *
 * @param tmpReq CreateUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUserShrinkRequest request = CreateUserShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoleCodes()) {
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoleCodes(), "roleCodes", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasPasswordEncrypted()) {
    body["passwordEncrypted"] = request.getPasswordEncrypted();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["roleCodes"] = request.getRoleCodesShrink();
  }

  if (!!request.hasWnAccountId()) {
    body["wnAccountId"] = request.getWnAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/createUser")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserResponse>();
}

/**
 * @summary Creates a user and adds the user to a tenant.
 *
 * @description Creates a user by using OpenAPI.
 *     Business orchestration:
 *     1. Parses roleCodes → role_ids (validates against system role enumerations).
 *     2. Checks whether the user already exists (used to return the isNewUser flag).
 *     3. Calls UserManagementService.add_tenant_member to create or add the user (the password must be passed in as an RSA ciphertext by the caller).
 *     4. Returns the creation result (including the isNewUser flag).
 *     Error codes:
 *     - ERR.User.DeactivatedInTenant: The user is deactivated in the tenant. Use updateUser to resume the user.
 *     - ERR.User.AlreadyInTenant: The user is already an active member of the tenant.
 *     - ERR.User.DisplayNameDuplicateInTenant: The display name is duplicate within the tenant.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createUserWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a session.
 *
 * @description ## Request description
 * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
 * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
 * - If the target directory ID (`directoryId`) is not specified, the file is automatically attached to the default root directory of the current digital employee. If specified, ensure that the directory belongs to the personal directory of the caller.
 * - Security authentication is supported through multiple methods (AK, BearerToken, APP).
 * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
 *
 * @param request DeleteChatSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChatSessionResponse
 */
DeleteChatSessionResponse Client::deleteChatSessionWithOptions(const DeleteChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChatSession"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/deleteChatSession")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChatSessionResponse>();
}

/**
 * @summary Deletes a session.
 *
 * @description ## Request description
 * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
 * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
 * - If the target directory ID (`directoryId`) is not specified, the file is automatically attached to the default root directory of the current digital employee. If specified, ensure that the directory belongs to the personal directory of the caller.
 * - Security authentication is supported through multiple methods (AK, BearerToken, APP).
 * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
 *
 * @param request DeleteChatSessionRequest
 * @return DeleteChatSessionResponse
 */
DeleteChatSessionResponse Client::deleteChatSession(const DeleteChatSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteChatSessionWithOptions(request, headers, runtime);
}

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
DeleteSourceResponse Client::deleteSourceWithOptions(const DeleteSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/deleteSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSourceResponse>();
}

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
DeleteSourceResponse Client::deleteSource(const DeleteSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSourceWithOptions(request, headers, runtime);
}

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
DeleteTenantDirectoryResponse Client::deleteTenantDirectoryWithOptions(const DeleteTenantDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDeleteMode()) {
    body["deleteMode"] = request.getDeleteMode();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteTenantDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/deleteTenantDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTenantDirectoryResponse>();
}

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
DeleteTenantDirectoryResponse Client::deleteTenantDirectory(const DeleteTenantDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTenantDirectoryWithOptions(request, headers, runtime);
}

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
DisableTokenResponse Client::disableTokenWithOptions(const DisableTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DisableToken"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/disableToken")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableTokenResponse>();
}

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
DisableTokenResponse Client::disableToken(const DisableTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableTokenWithOptions(request, headers, runtime);
}

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
EnableTokenResponse Client::enableTokenWithOptions(const EnableTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnableToken"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/enableToken")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableTokenResponse>();
}

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
EnableTokenResponse Client::enableToken(const EnableTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableTokenWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves session details.
 *
 * @description ## Request description
 * - This API uploads a file to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
 * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
 * - If no target folder ID (`directoryId`) is specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the invoker\\"s personal folder.
 * - Security verification is supported through multiple authenticate methods (AK, BearerToken, APP).
 * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
 *
 * @param request GetChatSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatSessionResponse
 */
GetChatSessionResponse Client::getChatSessionWithOptions(const GetChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLimit()) {
    query["limit"] = request.getLimit();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatSession"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getChatSession")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatSessionResponse>();
}

/**
 * @summary Retrieves session details.
 *
 * @description ## Request description
 * - This API uploads a file to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
 * - The file must include an OSS persistent address (`filePath`). Other information such as the public access URL and original file name is optional.
 * - If no target folder ID (`directoryId`) is specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the invoker\\"s personal folder.
 * - Security verification is supported through multiple authenticate methods (AK, BearerToken, APP).
 * - The operation type is write (`write`), and operation logs are recorded for subsequent auditing.
 *
 * @param request GetChatSessionRequest
 * @return GetChatSessionResponse
 */
GetChatSessionResponse Client::getChatSession(const GetChatSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getChatSessionWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the active Graph Schema that is readable by the current user.
 *
 * @description Reads the active schema_content and securely trims it based on the token user\\"s semantic resource READ permissions.
 *
 * @param request GetGraphSchemaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGraphSchemaResponse
 */
GetGraphSchemaResponse Client::getGraphSchemaWithOptions(const GetGraphSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetGraphSchema"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getGraphSchema")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGraphSchemaResponse>();
}

/**
 * @summary Retrieves the active Graph Schema that is readable by the current user.
 *
 * @description Reads the active schema_content and securely trims it based on the token user\\"s semantic resource READ permissions.
 *
 * @param request GetGraphSchemaRequest
 * @return GetGraphSchemaResponse
 */
GetGraphSchemaResponse Client::getGraphSchema(const GetGraphSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGraphSchemaWithOptions(request, headers, runtime);
}

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
GetInstanceExpireTimeResponse Client::getInstanceExpireTimeWithOptions(const GetInstanceExpireTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceExpireTime"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getInstanceExpireTime")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceExpireTimeResponse>();
}

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
GetInstanceExpireTimeResponse Client::getInstanceExpireTime(const GetInstanceExpireTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceExpireTimeWithOptions(request, headers, runtime);
}

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
GetKnowledgeBaseSourceResponse Client::getKnowledgeBaseSourceWithOptions(const GetKnowledgeBaseSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetKnowledgeBaseSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getKnowledgeBaseSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKnowledgeBaseSourceResponse>();
}

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
GetKnowledgeBaseSourceResponse Client::getKnowledgeBaseSource(const GetKnowledgeBaseSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKnowledgeBaseSourceWithOptions(request, headers, runtime);
}

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
GetScheduledTaskExecutionDetailResponse Client::getScheduledTaskExecutionDetailWithOptions(const GetScheduledTaskExecutionDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExecutionId()) {
    query["executionId"] = request.getExecutionId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScheduledTaskExecutionDetail"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getScheduledTaskExecutionDetail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScheduledTaskExecutionDetailResponse>();
}

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
GetScheduledTaskExecutionDetailResponse Client::getScheduledTaskExecutionDetail(const GetScheduledTaskExecutionDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getScheduledTaskExecutionDetailWithOptions(request, headers, runtime);
}

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
GetScheduledTaskExecutionRecordsResponse Client::getScheduledTaskExecutionRecordsWithOptions(const GetScheduledTaskExecutionRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollaborationGroupId()) {
    query["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasInitiatorUserId()) {
    query["initiatorUserId"] = request.getInitiatorUserId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScheduledTaskExecutionRecords"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getScheduledTaskExecutionRecords")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScheduledTaskExecutionRecordsResponse>();
}

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
GetScheduledTaskExecutionRecordsResponse Client::getScheduledTaskExecutionRecords(const GetScheduledTaskExecutionRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getScheduledTaskExecutionRecordsWithOptions(request, headers, runtime);
}

/**
 * @deprecated OpenAPI GetScheduledTaskUnderstandDetail is deprecated
 *
 * @summary Retrieves the details of scheduled task understanding.
 *
 * @description ## Request description
 * - This operation uploads a file to the enterprise knowledge base.
 * - You must have the `DEVELOPMENT_KB_MANAGE` permission to call this API operation.
 * - You must provide the OSS persistent address (`filePath`) of the file when uploading.
 * - Optional parameters include the public access URL of the file and the original file name to enhance the completeness of file information.
 * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee by default.
 * - You can add tags to the resource by using `sourceTags` for subsequent management and retrieval.
 * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Ensure that your account balance is sufficient.
 *
 * @param tmpReq GetScheduledTaskUnderstandDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScheduledTaskUnderstandDetailResponse
 */
GetScheduledTaskUnderstandDetailResponse Client::getScheduledTaskUnderstandDetailWithOptions(const GetScheduledTaskUnderstandDetailRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetScheduledTaskUnderstandDetailShrinkRequest request = GetScheduledTaskUnderstandDetailShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDigitalEmployeeName()) {
    request.setDigitalEmployeeNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDigitalEmployeeName(), "digitalEmployeeName", "json"));
  }

  if (!!tmpReq.hasSegments()) {
    request.setSegmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSegments(), "segments", "json"));
  }

  json query = {};
  if (!!request.hasCollaborationGroupId()) {
    query["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasDigitalEmployeeNameShrink()) {
    query["digitalEmployeeName"] = request.getDigitalEmployeeNameShrink();
  }

  if (!!request.hasSegmentsShrink()) {
    query["segments"] = request.getSegmentsShrink();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasUserInput()) {
    query["userInput"] = request.getUserInput();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScheduledTaskUnderstandDetail"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getScheduledTaskUnderstandDetail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScheduledTaskUnderstandDetailResponse>();
}

/**
 * @deprecated OpenAPI GetScheduledTaskUnderstandDetail is deprecated
 *
 * @summary Retrieves the details of scheduled task understanding.
 *
 * @description ## Request description
 * - This operation uploads a file to the enterprise knowledge base.
 * - You must have the `DEVELOPMENT_KB_MANAGE` permission to call this API operation.
 * - You must provide the OSS persistent address (`filePath`) of the file when uploading.
 * - Optional parameters include the public access URL of the file and the original file name to enhance the completeness of file information.
 * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee by default.
 * - You can add tags to the resource by using `sourceTags` for subsequent management and retrieval.
 * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Ensure that your account balance is sufficient.
 *
 * @param request GetScheduledTaskUnderstandDetailRequest
 * @return GetScheduledTaskUnderstandDetailResponse
 */
GetScheduledTaskUnderstandDetailResponse Client::getScheduledTaskUnderstandDetail(const GetScheduledTaskUnderstandDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getScheduledTaskUnderstandDetailWithOptions(request, headers, runtime);
}

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
GetSkillResponse Client::getSkillWithOptions(const GetSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasIncludeSkillFiles()) {
    body["includeSkillFiles"] = request.getIncludeSkillFiles();
  }

  if (!!request.hasSkillCode()) {
    body["skillCode"] = request.getSkillCode();
  }

  if (!!request.hasSkillName()) {
    body["skillName"] = request.getSkillName();
  }

  if (!!request.hasViewMode()) {
    body["viewMode"] = request.getViewMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSkill"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getSkill")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillResponse>();
}

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
GetSkillResponse Client::getSkill(const GetSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSkillWithOptions(request, headers, runtime);
}

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
GetSkillRunResponse Client::getSkillRunWithOptions(const GetSkillRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasIncludeLogs()) {
    body["includeLogs"] = request.getIncludeLogs();
  }

  if (!!request.hasRunId()) {
    body["runId"] = request.getRunId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSkillRun"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getSkillRun")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillRunResponse>();
}

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
GetSkillRunResponse Client::getSkillRun(const GetSkillRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSkillRunWithOptions(request, headers, runtime);
}

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
GetSourceResponse Client::getSourceWithOptions(const GetSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasIncludeDetails()) {
    body["includeDetails"] = request.getIncludeDetails();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSourceResponse>();
}

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
GetSourceResponse Client::getSource(const GetSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSourceWithOptions(request, headers, runtime);
}

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
GetSourceUploadSignatureResponse Client::getSourceUploadSignatureWithOptions(const GetSourceUploadSignatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasExpires()) {
    body["expires"] = request.getExpires();
  }

  if (!!request.hasFilename()) {
    body["filename"] = request.getFilename();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.getScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSourceUploadSignature"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getSourceUploadSignature")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSourceUploadSignatureResponse>();
}

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
GetSourceUploadSignatureResponse Client::getSourceUploadSignature(const GetSourceUploadSignatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSourceUploadSignatureWithOptions(request, headers, runtime);
}

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
GetTokenInfoResponse Client::getTokenInfoWithOptions(const GetTokenInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTokenInfo"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getTokenInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenInfoResponse>();
}

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
GetTokenInfoResponse Client::getTokenInfo(const GetTokenInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTokenInfoWithOptions(request, headers, runtime);
}

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
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasWnAccountId()) {
    query["wnAccountId"] = request.getWnAccountId();
  }

  if (!!request.hasWnUserId()) {
    query["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getUser")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

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
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserWithOptions(request, headers, runtime);
}

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
GetUserCreditUsageResponse Client::getUserCreditUsageWithOptions(const GetUserCreditUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserCreditUsage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getUserCreditUsage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserCreditUsageResponse>();
}

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
GetUserCreditUsageResponse Client::getUserCreditUsage(const GetUserCreditUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserCreditUsageWithOptions(request, headers, runtime);
}

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
GetUserInfoResponse Client::getUserInfoWithOptions(const GetUserInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserInfo"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/getUserInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserInfoResponse>();
}

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
GetUserInfoResponse Client::getUserInfo(const GetUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserInfoWithOptions(request, headers, runtime);
}

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
GrantAgentUsersResponse Client::grantAgentUsersWithOptions(const GrantAgentUsersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GrantAgentUsersShrinkRequest request = GrantAgentUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPermissions()) {
    request.setPermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPermissions(), "permissions", "json"));
  }

  if (!!tmpReq.hasUserGroupIds()) {
    request.setUserGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserGroupIds(), "userGroupIds", "json"));
  }

  if (!!tmpReq.hasUserIds()) {
    request.setUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserIds(), "userIds", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasExpireDate()) {
    body["expireDate"] = request.getExpireDate();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPermissionsShrink()) {
    body["permissions"] = request.getPermissionsShrink();
  }

  if (!!request.hasUserGroupIdsShrink()) {
    body["userGroupIds"] = request.getUserGroupIdsShrink();
  }

  if (!!request.hasUserIdsShrink()) {
    body["userIds"] = request.getUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GrantAgentUsers"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/grantAgentUsers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantAgentUsersResponse>();
}

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
GrantAgentUsersResponse Client::grantAgentUsers(const GrantAgentUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return grantAgentUsersWithOptions(request, headers, runtime);
}

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
ListAdminKnowledgeBasesResponse Client::listAdminKnowledgeBasesWithOptions(const ListAdminKnowledgeBasesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAdminKnowledgeBasesShrinkRequest request = ListAdminKnowledgeBasesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSourceTypes()) {
    request.setSourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceTypes(), "sourceTypes", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  if (!!request.hasSourceTypesShrink()) {
    body["sourceTypes"] = request.getSourceTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAdminKnowledgeBases"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAdminKnowledgeBases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAdminKnowledgeBasesResponse>();
}

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
ListAdminKnowledgeBasesResponse Client::listAdminKnowledgeBases(const ListAdminKnowledgeBasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAdminKnowledgeBasesWithOptions(request, headers, runtime);
}

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
ListAgentsResponse Client::listAgentsWithOptions(const ListAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgents"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAgents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentsResponse>();
}

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
ListAgentsResponse Client::listAgents(const ListAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentsWithOptions(request, headers, runtime);
}

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
ListAuthorizedAgentsResponse Client::listAuthorizedAgentsWithOptions(const ListAuthorizedAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasPermission()) {
    body["permission"] = request.getPermission();
  }

  if (!!request.hasTargetUserId()) {
    body["targetUserId"] = request.getTargetUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAuthorizedAgents"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAuthorizedAgents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizedAgentsResponse>();
}

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
ListAuthorizedAgentsResponse Client::listAuthorizedAgents(const ListAuthorizedAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAuthorizedAgentsWithOptions(request, headers, runtime);
}

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
ListAuthorizedUsersResponse Client::listAuthorizedUsersWithOptions(const ListAuthorizedUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasGranteeType()) {
    body["granteeType"] = request.getGranteeType();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPermission()) {
    body["permission"] = request.getPermission();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAuthorizedUsers"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAuthorizedUsers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizedUsersResponse>();
}

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
ListAuthorizedUsersResponse Client::listAuthorizedUsers(const ListAuthorizedUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAuthorizedUsersWithOptions(request, headers, runtime);
}

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
ListAvailableConfigsResponse Client::listAvailableConfigsWithOptions(const ListAvailableConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAvailableConfigs"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listAvailableConfigs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvailableConfigsResponse>();
}

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
ListAvailableConfigsResponse Client::listAvailableConfigs(const ListAvailableConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAvailableConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries and filters the bill list through OpenAPI with support for multiple filter conditions.
 *
 * @description ## Operation description
 * - This operation queries the bill list based on specified conditions.
 * - Supports filtering by tenant, user, operation type, status, time range, business source, and other conditions.
 * - Returns bill data in pages. The default page size is 20 records.
 * - You can choose whether to filter out bills with zero credit consumption. By default, such bills are filtered out.
 * - Authentication information (such as AK, BearerToken, or APP authentication) is required in the request.
 *
 * @param request ListBillingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBillingResponse
 */
ListBillingResponse Client::listBillingWithOptions(const ListBillingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasBizId()) {
    body["bizId"] = request.getBizId();
  }

  if (!!request.hasBizType()) {
    body["bizType"] = request.getBizType();
  }

  if (!!request.hasEndTime()) {
    body["endTime"] = request.getEndTime();
  }

  if (!!request.hasIgnoreZero()) {
    body["ignoreZero"] = request.getIgnoreZero();
  }

  if (!!request.hasOperation()) {
    body["operation"] = request.getOperation();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListBilling"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listBilling")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBillingResponse>();
}

/**
 * @summary Queries and filters the bill list through OpenAPI with support for multiple filter conditions.
 *
 * @description ## Operation description
 * - This operation queries the bill list based on specified conditions.
 * - Supports filtering by tenant, user, operation type, status, time range, business source, and other conditions.
 * - Returns bill data in pages. The default page size is 20 records.
 * - You can choose whether to filter out bills with zero credit consumption. By default, such bills are filtered out.
 * - Authentication information (such as AK, BearerToken, or APP authentication) is required in the request.
 *
 * @param request ListBillingRequest
 * @return ListBillingResponse
 */
ListBillingResponse Client::listBilling(const ListBillingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listBillingWithOptions(request, headers, runtime);
}

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
ListChatSessionsResponse Client::listChatSessionsWithOptions(const ListChatSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDigitalEmployeeName()) {
    query["digitalEmployeeName"] = request.getDigitalEmployeeName();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChatSessions"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listChatSessions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChatSessionsResponse>();
}

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
ListChatSessionsResponse Client::listChatSessions(const ListChatSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listChatSessionsWithOptions(request, headers, runtime);
}

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
ListGraphsResponse Client::listGraphsWithOptions(const ListGraphsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGraphs"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listGraphs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGraphsResponse>();
}

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
ListGraphsResponse Client::listGraphs(const ListGraphsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGraphsWithOptions(request, headers, runtime);
}

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
ListKnowledgeBaseDirectoriesResponse Client::listKnowledgeBaseDirectoriesWithOptions(const ListKnowledgeBaseDirectoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListKnowledgeBaseDirectories"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listKnowledgeBaseDirectories")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKnowledgeBaseDirectoriesResponse>();
}

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
ListKnowledgeBaseDirectoriesResponse Client::listKnowledgeBaseDirectories(const ListKnowledgeBaseDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKnowledgeBaseDirectoriesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the output list of the current user with support for conditional filtering and pagination.
 *
 * @description ## Operation description
 * - This API operation queries the output list of the current logon user.
 * - `tenantId` is a common parameter. If this parameter is not specified, the default tenant of the caller is used.
 * - You can filter results by using parameters such as `operatingObjectName`, `itemType`, and `keyword`.
 * - Set `sharedOnly` to `true` to display only shared outputs.
 * - Pagination is controlled by `page` (page number) and `pageSize` (number of entries per page). By default, the first page is returned with 20 records per page.
 * - Results are sorted by update time in descending order by default.
 * - The `tenant_id` or `user_id` values passed in the request body are ignored. This information is obtained only from the authenticated identity.
 *
 * @param request ListOutputFilesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOutputFilesResponse
 */
ListOutputFilesResponse Client::listOutputFilesWithOptions(const ListOutputFilesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasItemType()) {
    body["itemType"] = request.getItemType();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSharedOnly()) {
    body["sharedOnly"] = request.getSharedOnly();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListOutputFiles"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listOutputFiles")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOutputFilesResponse>();
}

/**
 * @summary Queries the output list of the current user with support for conditional filtering and pagination.
 *
 * @description ## Operation description
 * - This API operation queries the output list of the current logon user.
 * - `tenantId` is a common parameter. If this parameter is not specified, the default tenant of the caller is used.
 * - You can filter results by using parameters such as `operatingObjectName`, `itemType`, and `keyword`.
 * - Set `sharedOnly` to `true` to display only shared outputs.
 * - Pagination is controlled by `page` (page number) and `pageSize` (number of entries per page). By default, the first page is returned with 20 records per page.
 * - Results are sorted by update time in descending order by default.
 * - The `tenant_id` or `user_id` values passed in the request body are ignored. This information is obtained only from the authenticated identity.
 *
 * @param request ListOutputFilesRequest
 * @return ListOutputFilesResponse
 */
ListOutputFilesResponse Client::listOutputFiles(const ListOutputFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOutputFilesWithOptions(request, headers, runtime);
}

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
ListPersonalDirectoryContentsResponse Client::listPersonalDirectoryContentsWithOptions(const ListPersonalDirectoryContentsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPersonalDirectoryContentsShrinkRequest request = ListPersonalDirectoryContentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSourceTypes()) {
    request.setSourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceTypes(), "sourceTypes", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  if (!!request.hasSourceTypesShrink()) {
    body["sourceTypes"] = request.getSourceTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPersonalDirectoryContents"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listPersonalDirectoryContents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPersonalDirectoryContentsResponse>();
}

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
ListPersonalDirectoryContentsResponse Client::listPersonalDirectoryContents(const ListPersonalDirectoryContentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPersonalDirectoryContentsWithOptions(request, headers, runtime);
}

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
ListRolesResponse Client::listRolesWithOptions(const ListRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoles"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listRoles")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRolesResponse>();
}

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
ListRolesResponse Client::listRoles(const ListRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRolesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of scheduled tasks.
 *
 * @description ## Operation description
 * - This operation uploads a file to an enterprise knowledge base.
 * - The `DEVELOPMENT_KB_MANAGE` permission is required to call this API.
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
ListScheduledTasksResponse Client::listScheduledTasksWithOptions(const ListScheduledTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListScheduledTasksShrinkRequest request = ListScheduledTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVisibilities()) {
    request.setVisibilitiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVisibilities(), "visibilities", "json"));
  }

  json query = {};
  if (!!request.hasCollaborationGroupId()) {
    query["collaborationGroupId"] = request.getCollaborationGroupId();
  }

  if (!!request.hasCreatorOnly()) {
    query["creatorOnly"] = request.getCreatorOnly();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasVisibilitiesShrink()) {
    query["visibilities"] = request.getVisibilitiesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScheduledTasks"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listScheduledTasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScheduledTasksResponse>();
}

/**
 * @summary Retrieves a list of scheduled tasks.
 *
 * @description ## Operation description
 * - This operation uploads a file to an enterprise knowledge base.
 * - The `DEVELOPMENT_KB_MANAGE` permission is required to call this API.
 * - You must provide the OSS persistent address (`filePath`) of the file when uploading.
 * - Optional parameters include the public access URL and original file name to enhance the completeness of file information.
 * - If `directoryId` is specified, the file is placed in the corresponding enterprise knowledge base directory. Otherwise, the file is bound to the default root directory of the current digital employee.
 * - You can add tags to the resource by using `sourceTags` for subsequent management and retrieval.
 * - This operation initiates a billing item (UNSTRUCTURED_PARSE). Make sure your account balance is sufficient.
 *
 * @param request ListScheduledTasksRequest
 * @return ListScheduledTasksResponse
 */
ListScheduledTasksResponse Client::listScheduledTasks(const ListScheduledTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listScheduledTasksWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the skills visible to the current tenant.
 *
 * @description ## Request description
 * This API retrieves all visible skills under the current tenant. It supports filtering by digital employee binding relationship, skill source, tags, keywords, and other conditions, and supports pagination.
 * ### Request parameters
 * - **TenantId**: Optional. A common parameter passed through by the gateway to the backend header. If not specified, the default tenant of the current caller is used.
 * - **FilterType**: Optional. The skill filtering dimension. Valid values: `ALL` (all published), `BUILTIN` (built-in published), `CUSTOM` (custom published), `DRAFT` (drafts, including published skills with unpublished modifications). Default value: `ALL`.
 * - **Tags**: Optional. Filters by tags. A match occurs if any tag in the array is hit.
 * - **Keyword**: Optional. Performs fuzzy matching by skill name or description.
 * - **Page**: Optional. The page number. Minimum value: 1. Default value: 1.
 * - **PageSize**: Optional. The number of entries per page. Value range: 1 to 100. Default value: 20.
 * - **OperatingObjectName**: Optional. The digital employee name. If specified, filters by binding relationship. Must be used together with `BindStatus`.
 * - **BindStatus**: Optional. The binding status. Valid values: `BOUND` (bound), `UNBOUND` (unbound global skills).
 * ### Response parameters
 * The response contains the skill list `items`, total count `total`, current page `page`, and page size `pageSize`.
 *
 * @param tmpReq ListSkillsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkillsWithOptions(const ListSkillsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSkillsShrinkRequest request = ListSkillsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "tags", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasBindStatus()) {
    body["bindStatus"] = request.getBindStatus();
  }

  if (!!request.hasFilterType()) {
    body["filterType"] = request.getFilterType();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasTagsShrink()) {
    body["tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSkills"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listSkills")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillsResponse>();
}

/**
 * @summary Lists the skills visible to the current tenant.
 *
 * @description ## Request description
 * This API retrieves all visible skills under the current tenant. It supports filtering by digital employee binding relationship, skill source, tags, keywords, and other conditions, and supports pagination.
 * ### Request parameters
 * - **TenantId**: Optional. A common parameter passed through by the gateway to the backend header. If not specified, the default tenant of the current caller is used.
 * - **FilterType**: Optional. The skill filtering dimension. Valid values: `ALL` (all published), `BUILTIN` (built-in published), `CUSTOM` (custom published), `DRAFT` (drafts, including published skills with unpublished modifications). Default value: `ALL`.
 * - **Tags**: Optional. Filters by tags. A match occurs if any tag in the array is hit.
 * - **Keyword**: Optional. Performs fuzzy matching by skill name or description.
 * - **Page**: Optional. The page number. Minimum value: 1. Default value: 1.
 * - **PageSize**: Optional. The number of entries per page. Value range: 1 to 100. Default value: 20.
 * - **OperatingObjectName**: Optional. The digital employee name. If specified, filters by binding relationship. Must be used together with `BindStatus`.
 * - **BindStatus**: Optional. The binding status. Valid values: `BOUND` (bound), `UNBOUND` (unbound global skills).
 * ### Response parameters
 * The response contains the skill list `items`, total count `total`, current page `page`, and page size `pageSize`.
 *
 * @param request ListSkillsRequest
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkills(const ListSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSkillsWithOptions(request, headers, runtime);
}

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
ListTenantDirectoryResponse Client::listTenantDirectoryWithOptions(const ListTenantDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  if (!!request.hasSourceTypes()) {
    body["sourceTypes"] = request.getSourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTenantDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listTenantDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTenantDirectoryResponse>();
}

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
ListTenantDirectoryResponse Client::listTenantDirectory(const ListTenantDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTenantDirectoryWithOptions(request, headers, runtime);
}

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
ListUserVisibleKnowledgeBaseContentsResponse Client::listUserVisibleKnowledgeBaseContentsWithOptions(const ListUserVisibleKnowledgeBaseContentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  if (!!request.hasSourceTypes()) {
    body["sourceTypes"] = request.getSourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListUserVisibleKnowledgeBaseContents"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listUserVisibleKnowledgeBaseContents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserVisibleKnowledgeBaseContentsResponse>();
}

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
ListUserVisibleKnowledgeBaseContentsResponse Client::listUserVisibleKnowledgeBaseContents(const ListUserVisibleKnowledgeBaseContentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserVisibleKnowledgeBaseContentsWithOptions(request, headers, runtime);
}

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
ListUserVisibleKnowledgeBasesResponse Client::listUserVisibleKnowledgeBasesWithOptions(const ListUserVisibleKnowledgeBasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListUserVisibleKnowledgeBases"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listUserVisibleKnowledgeBases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserVisibleKnowledgeBasesResponse>();
}

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
ListUserVisibleKnowledgeBasesResponse Client::listUserVisibleKnowledgeBases(const ListUserVisibleKnowledgeBasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserVisibleKnowledgeBasesWithOptions(request, headers, runtime);
}

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
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListUsersShrinkRequest request = ListUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccountIds()) {
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAccountIds(), "accountIds", "json"));
  }

  if (!!tmpReq.hasRoleCodes()) {
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoleCodes(), "roleCodes", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAccountIdsShrink()) {
    body["accountIds"] = request.getAccountIdsShrink();
  }

  if (!!request.hasIsActive()) {
    body["isActive"] = request.getIsActive();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["roleCodes"] = request.getRoleCodesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listUsers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

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
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUsersWithOptions(request, headers, runtime);
}

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
ListVisibleKnowledgeBaseContentsResponse Client::listVisibleKnowledgeBaseContentsWithOptions(const ListVisibleKnowledgeBaseContentsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListVisibleKnowledgeBaseContentsShrinkRequest request = ListVisibleKnowledgeBaseContentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSourceTypes()) {
    request.setSourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceTypes(), "sourceTypes", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortField()) {
    body["sortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["sortOrder"] = request.getSortOrder();
  }

  if (!!request.hasSourceTypesShrink()) {
    body["sourceTypes"] = request.getSourceTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListVisibleKnowledgeBaseContents"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listVisibleKnowledgeBaseContents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVisibleKnowledgeBaseContentsResponse>();
}

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
ListVisibleKnowledgeBaseContentsResponse Client::listVisibleKnowledgeBaseContents(const ListVisibleKnowledgeBaseContentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVisibleKnowledgeBaseContentsWithOptions(request, headers, runtime);
}

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
ListVisibleKnowledgeBasesResponse Client::listVisibleKnowledgeBasesWithOptions(const ListVisibleKnowledgeBasesRequest &request, const ListVisibleKnowledgeBasesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasRequestId()) {
    realHeaders["requestId"] = Darabonba::Convert::stringVal(headers.getRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListVisibleKnowledgeBases"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/listVisibleKnowledgeBases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVisibleKnowledgeBasesResponse>();
}

/**
 * @summary Queries the top-level directories of enterprise knowledge bases accessible to a digital employee.
 *
 * @description ## Request description
 * - This API operation retrieves the list of top-level knowledge base directories visible to a specified digital employee (operating object) within the enterprise.
 *
 * @param request ListVisibleKnowledgeBasesRequest
 * @return ListVisibleKnowledgeBasesResponse
 */
ListVisibleKnowledgeBasesResponse Client::listVisibleKnowledgeBases(const ListVisibleKnowledgeBasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListVisibleKnowledgeBasesHeaders headers = ListVisibleKnowledgeBasesHeaders();
  return listVisibleKnowledgeBasesWithOptions(request, headers, runtime);
}

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
MoveKnowledgeBaseResourceResponse Client::moveKnowledgeBaseResourceWithOptions(const MoveKnowledgeBaseResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["knowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasSourceDirectoryId()) {
    body["sourceDirectoryId"] = request.getSourceDirectoryId();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  if (!!request.hasTargetDirectoryId()) {
    body["targetDirectoryId"] = request.getTargetDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MoveKnowledgeBaseResource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/moveKnowledgeBaseResource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveKnowledgeBaseResourceResponse>();
}

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
MoveKnowledgeBaseResourceResponse Client::moveKnowledgeBaseResource(const MoveKnowledgeBaseResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return moveKnowledgeBaseResourceWithOptions(request, headers, runtime);
}

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
MoveResourceResponse Client::moveResourceWithOptions(const MoveResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSourceDirectoryId()) {
    body["sourceDirectoryId"] = request.getSourceDirectoryId();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  if (!!request.hasTargetDirectoryId()) {
    body["targetDirectoryId"] = request.getTargetDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MoveResource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/moveResource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceResponse>();
}

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
MoveResourceResponse Client::moveResource(const MoveResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return moveResourceWithOptions(request, headers, runtime);
}

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
PreviewKnowledgeBaseSourceResponse Client::previewKnowledgeBaseSourceWithOptions(const PreviewKnowledgeBaseSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PreviewKnowledgeBaseSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/previewKnowledgeBaseSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewKnowledgeBaseSourceResponse>();
}

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
PreviewKnowledgeBaseSourceResponse Client::previewKnowledgeBaseSource(const PreviewKnowledgeBaseSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return previewKnowledgeBaseSourceWithOptions(request, headers, runtime);
}

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
PreviewPersonalSourceResponse Client::previewPersonalSourceWithOptions(const PreviewPersonalSourceRequest &request, const PreviewPersonalSourceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasRequestId()) {
    realHeaders["requestId"] = Darabonba::Convert::stringVal(headers.getRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PreviewPersonalSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/previewPersonalSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewPersonalSourceResponse>();
}

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
PreviewPersonalSourceResponse Client::previewPersonalSource(const PreviewPersonalSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PreviewPersonalSourceHeaders headers = PreviewPersonalSourceHeaders();
  return previewPersonalSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Queries primary object data by operating object name with paging support, including filtering and search.
 *
 * @description ## Operation description
 * - This API queries primary object data by a specified operating object name (such as `customer_1`) with paging.
 * - Keyword-based search is supported. You can set whether to return only objects marked as favorites in Settings.
 * - Complex filter conditions can be used to further narrow results, including but not limited to equal to, not equal to, greater than, and less than operators.
 * - If no primary object type is configured, an empty result set is returned.
 * - Data in the request undergoes authentication and filtering to ensure security and accuracy.
 *
 * @param request QueryPrimaryObjectDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPrimaryObjectDataResponse
 */
QueryPrimaryObjectDataResponse Client::queryPrimaryObjectDataWithOptions(const QueryPrimaryObjectDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasKeyword()) {
    body["keyword"] = request.getKeyword();
  }

  if (!!request.hasOnlyFavorites()) {
    body["onlyFavorites"] = request.getOnlyFavorites();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryPrimaryObjectData"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/queryPrimaryObjectData")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPrimaryObjectDataResponse>();
}

/**
 * @summary Queries primary object data by operating object name with paging support, including filtering and search.
 *
 * @description ## Operation description
 * - This API queries primary object data by a specified operating object name (such as `customer_1`) with paging.
 * - Keyword-based search is supported. You can set whether to return only objects marked as favorites in Settings.
 * - Complex filter conditions can be used to further narrow results, including but not limited to equal to, not equal to, greater than, and less than operators.
 * - If no primary object type is configured, an empty result set is returned.
 * - Data in the request undergoes authentication and filtering to ensure security and accuracy.
 *
 * @param request QueryPrimaryObjectDataRequest
 * @return QueryPrimaryObjectDataResponse
 */
QueryPrimaryObjectDataResponse Client::queryPrimaryObjectData(const QueryPrimaryObjectDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryPrimaryObjectDataWithOptions(request, headers, runtime);
}

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
QuerySemanticKnowledgeResponse Client::querySemanticKnowledgeWithOptions(const QuerySemanticKnowledgeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAgentName()) {
    body["agentName"] = request.getAgentName();
  }

  if (!!request.hasGraphName()) {
    body["graphName"] = request.getGraphName();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QuerySemanticKnowledge"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/querySemanticKnowledge")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySemanticKnowledgeResponse>();
}

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
QuerySemanticKnowledgeResponse Client::querySemanticKnowledge(const QuerySemanticKnowledgeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return querySemanticKnowledgeWithOptions(request, headers, runtime);
}

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
QuerySyncResultResponse Client::querySyncResultWithOptions(const QuerySyncResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QuerySyncResult"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/querySyncResult")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySyncResultResponse>();
}

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
QuerySyncResultResponse Client::querySyncResult(const QuerySyncResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return querySyncResultWithOptions(request, headers, runtime);
}

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
RecommendNextActionsResponse Client::recommendNextActionsWithOptions(const RecommendNextActionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCustomPrompt()) {
    body["customPrompt"] = request.getCustomPrompt();
  }

  if (!!request.hasOutputType()) {
    body["outputType"] = request.getOutputType();
  }

  if (!!request.hasRecentMessageCount()) {
    body["recentMessageCount"] = request.getRecentMessageCount();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RecommendNextActions"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/recommendNextActions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecommendNextActionsResponse>();
}

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
RecommendNextActionsResponse Client::recommendNextActions(const RecommendNextActionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return recommendNextActionsWithOptions(request, headers, runtime);
}

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
RemoveUserResponse Client::removeUserWithOptions(const RemoveUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasWnUserId()) {
    query["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUser"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/removeUser")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUserResponse>();
}

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
RemoveUserResponse Client::removeUser(const RemoveUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeUserWithOptions(request, headers, runtime);
}

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
RenameKnowledgeBaseSourceResponse Client::renameKnowledgeBaseSourceWithOptions(const RenameKnowledgeBaseSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasNewName()) {
    body["newName"] = request.getNewName();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RenameKnowledgeBaseSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/renameKnowledgeBaseSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenameKnowledgeBaseSourceResponse>();
}

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
RenameKnowledgeBaseSourceResponse Client::renameKnowledgeBaseSource(const RenameKnowledgeBaseSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renameKnowledgeBaseSourceWithOptions(request, headers, runtime);
}

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
RenameSourceResponse Client::renameSourceWithOptions(const RenameSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasNewName()) {
    body["newName"] = request.getNewName();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RenameSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/renameSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenameSourceResponse>();
}

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
RenameSourceResponse Client::renameSource(const RenameSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renameSourceWithOptions(request, headers, runtime);
}

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
ReparseSourceResponse Client::reparseSourceWithOptions(const ReparseSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasForceSync()) {
    body["forceSync"] = request.getForceSync();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReparseSource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/reparseSource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReparseSourceResponse>();
}

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
ReparseSourceResponse Client::reparseSource(const ReparseSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reparseSourceWithOptions(request, headers, runtime);
}

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
ReplaceKnowledgeBaseSourceFileResponse Client::replaceKnowledgeBaseSourceFileWithOptions(const ReplaceKnowledgeBaseSourceFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasFilePath()) {
    body["filePath"] = request.getFilePath();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasFileRecordId()) {
    body["fileRecordId"] = request.getFileRecordId();
  }

  if (!!request.hasForceSync()) {
    body["forceSync"] = request.getForceSync();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReplaceKnowledgeBaseSourceFile"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/replaceKnowledgeBaseSourceFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceKnowledgeBaseSourceFileResponse>();
}

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
ReplaceKnowledgeBaseSourceFileResponse Client::replaceKnowledgeBaseSourceFile(const ReplaceKnowledgeBaseSourceFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return replaceKnowledgeBaseSourceFileWithOptions(request, headers, runtime);
}

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
ReplaceObjectBindingsResponse Client::replaceObjectBindingsWithOptions(const ReplaceObjectBindingsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReplaceObjectBindingsShrinkRequest request = ReplaceObjectBindingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectBindings()) {
    request.setObjectBindingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectBindings(), "objectBindings", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasObjectBindingsShrink()) {
    body["objectBindings"] = request.getObjectBindingsShrink();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReplaceObjectBindings"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/replaceObjectBindings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceObjectBindingsResponse>();
}

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
ReplaceObjectBindingsResponse Client::replaceObjectBindings(const ReplaceObjectBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return replaceObjectBindingsWithOptions(request, headers, runtime);
}

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
ReplaceSourceFileResponse Client::replaceSourceFileWithOptions(const ReplaceSourceFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasFilePath()) {
    body["filePath"] = request.getFilePath();
  }

  if (!!request.hasFilePublicUrl()) {
    body["filePublicUrl"] = request.getFilePublicUrl();
  }

  if (!!request.hasFileRecordId()) {
    body["fileRecordId"] = request.getFileRecordId();
  }

  if (!!request.hasForceSync()) {
    body["forceSync"] = request.getForceSync();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReplaceSourceFile"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/replaceSourceFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceSourceFileResponse>();
}

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
ReplaceSourceFileResponse Client::replaceSourceFile(const ReplaceSourceFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return replaceSourceFileWithOptions(request, headers, runtime);
}

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
ResetPasswordResponse Client::resetPasswordWithOptions(const ResetPasswordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasPasswordEncrypted()) {
    body["passwordEncrypted"] = request.getPasswordEncrypted();
  }

  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResetPassword"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/resetPassword")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetPasswordResponse>();
}

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
ResetPasswordResponse Client::resetPassword(const ResetPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resetPasswordWithOptions(request, headers, runtime);
}

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
ResetTokenResponse Client::resetTokenWithOptions(const ResetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResetToken"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/resetToken")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetTokenResponse>();
}

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
ResetTokenResponse Client::resetToken(const ResetTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resetTokenWithOptions(request, headers, runtime);
}

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
 * - If `tenantId` is not provided, the tenant ID of the caller is used by default.
 * - The API supports multiple authentication methods, including AccessKey, BearerToken, and APP authentication.
 *
 * @param request RetryDirectoryFailedSourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryDirectoryFailedSourcesResponse
 */
RetryDirectoryFailedSourcesResponse Client::retryDirectoryFailedSourcesWithOptions(const RetryDirectoryFailedSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RetryDirectoryFailedSources"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/retryDirectoryFailedSources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryDirectoryFailedSourcesResponse>();
}

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
 * - If `tenantId` is not provided, the tenant ID of the caller is used by default.
 * - The API supports multiple authentication methods, including AccessKey, BearerToken, and APP authentication.
 *
 * @param request RetryDirectoryFailedSourcesRequest
 * @return RetryDirectoryFailedSourcesResponse
 */
RetryDirectoryFailedSourcesResponse Client::retryDirectoryFailedSources(const RetryDirectoryFailedSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retryDirectoryFailedSourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Retries all data sources in failed status under a specified directory in batch.
 *
 * @description ## Request description
 * This API retrieves and retries all data sources in FAILED status under a specified enterprise knowledge base directory (including its subdirectories). The request returns immediately, and the actual retry operations are executed asynchronously in the background.
 * - **Authentication**: In addition to basic authentication, the `DEVELOPMENT_KB_MANAGE` permission is required.
 * - **Security constraints**: Only callers with the corresponding tenant and user identity are allowed access, and KB management permission is required. Administrators can initiate retries for failed resources of any user.
 * - **Parameters**:
 *   - `directoryId` (required): The ID of the enterprise knowledge base directory for which to check and retry failed data sources.
 *   - `tenantId` (optional): The tenant ID. The default tenant of the caller is used if this parameter is not specified.
 * - **Response**: On success, returns the number of data sources enqueued for retry and related details.
 *
 * @param request RetryKnowledgeBaseFailedSourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryKnowledgeBaseFailedSourcesResponse
 */
RetryKnowledgeBaseFailedSourcesResponse Client::retryKnowledgeBaseFailedSourcesWithOptions(const RetryKnowledgeBaseFailedSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RetryKnowledgeBaseFailedSources"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/retryKnowledgeBaseFailedSources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryKnowledgeBaseFailedSourcesResponse>();
}

/**
 * @summary Retries all data sources in failed status under a specified directory in batch.
 *
 * @description ## Request description
 * This API retrieves and retries all data sources in FAILED status under a specified enterprise knowledge base directory (including its subdirectories). The request returns immediately, and the actual retry operations are executed asynchronously in the background.
 * - **Authentication**: In addition to basic authentication, the `DEVELOPMENT_KB_MANAGE` permission is required.
 * - **Security constraints**: Only callers with the corresponding tenant and user identity are allowed access, and KB management permission is required. Administrators can initiate retries for failed resources of any user.
 * - **Parameters**:
 *   - `directoryId` (required): The ID of the enterprise knowledge base directory for which to check and retry failed data sources.
 *   - `tenantId` (optional): The tenant ID. The default tenant of the caller is used if this parameter is not specified.
 * - **Response**: On success, returns the number of data sources enqueued for retry and related details.
 *
 * @param request RetryKnowledgeBaseFailedSourcesRequest
 * @return RetryKnowledgeBaseFailedSourcesResponse
 */
RetryKnowledgeBaseFailedSourcesResponse Client::retryKnowledgeBaseFailedSources(const RetryKnowledgeBaseFailedSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retryKnowledgeBaseFailedSourcesWithOptions(request, headers, runtime);
}

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
RevokeAgentUsersResponse Client::revokeAgentUsersWithOptions(const RevokeAgentUsersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RevokeAgentUsersShrinkRequest request = RevokeAgentUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserGroupIds()) {
    request.setUserGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserGroupIds(), "userGroupIds", "json"));
  }

  if (!!tmpReq.hasUserIds()) {
    request.setUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserIds(), "userIds", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasUserGroupIdsShrink()) {
    body["userGroupIds"] = request.getUserGroupIdsShrink();
  }

  if (!!request.hasUserIdsShrink()) {
    body["userIds"] = request.getUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RevokeAgentUsers"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/revokeAgentUsers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeAgentUsersResponse>();
}

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
RevokeAgentUsersResponse Client::revokeAgentUsers(const RevokeAgentUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revokeAgentUsersWithOptions(request, headers, runtime);
}

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
RunSkillResponse Client::runSkillWithOptions(const RunSkillRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunSkillShrinkRequest request = RunSkillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasArguments()) {
    request.setArgumentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getArguments(), "arguments", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasArgumentsShrink()) {
    body["arguments"] = request.getArgumentsShrink();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  if (!!request.hasSkillCode()) {
    body["skillCode"] = request.getSkillCode();
  }

  if (!!request.hasSkillName()) {
    body["skillName"] = request.getSkillName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunSkill"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/runSkill")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunSkillResponse>();
}

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
RunSkillResponse Client::runSkill(const RunSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runSkillWithOptions(request, headers, runtime);
}

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
SaveOutputFileToResourceResponse Client::saveOutputFileToResourceWithOptions(const SaveOutputFileToResourceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveOutputFileToResourceShrinkRequest request = SaveOutputFileToResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasItemIds()) {
    request.setItemIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getItemIds(), "itemIds", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasItemIdsShrink()) {
    body["itemIds"] = request.getItemIdsShrink();
  }

  if (!!request.hasMode()) {
    body["mode"] = request.getMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveOutputFileToResource"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/saveOutputFileToResource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveOutputFileToResourceResponse>();
}

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
SaveOutputFileToResourceResponse Client::saveOutputFileToResource(const SaveOutputFileToResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return saveOutputFileToResourceWithOptions(request, headers, runtime);
}

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
SendAsyncChatMessageResponse Client::sendAsyncChatMessageWithOptions(const SendAsyncChatMessageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendAsyncChatMessageShrinkRequest request = SendAsyncChatMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDigitalEmployeeName()) {
    request.setDigitalEmployeeNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDigitalEmployeeName(), "digitalEmployeeName", "json"));
  }

  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "files", "json"));
  }

  if (!!tmpReq.hasTaskExecution()) {
    request.setTaskExecutionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskExecution(), "taskExecution", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasDigitalEmployeeNameShrink()) {
    body["digitalEmployeeName"] = request.getDigitalEmployeeNameShrink();
  }

  if (!!request.hasDirectChat()) {
    body["directChat"] = request.getDirectChat();
  }

  if (!!request.hasFilesShrink()) {
    body["files"] = request.getFilesShrink();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasReuseLastSession()) {
    body["reuseLastSession"] = request.getReuseLastSession();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTaskExecutionShrink()) {
    body["taskExecution"] = request.getTaskExecutionShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendAsyncChatMessage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/sendAsyncChatMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendAsyncChatMessageResponse>();
}

/**
 * @summary Asynchronously sends a session message.
 *
 * @description Asynchronously sends a session message.
 *
 * @param request SendAsyncChatMessageRequest
 * @return SendAsyncChatMessageResponse
 */
SendAsyncChatMessageResponse Client::sendAsyncChatMessage(const SendAsyncChatMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendAsyncChatMessageWithOptions(request, headers, runtime);
}

/**
 * @summary Sends a message.
 *
 * @description ## Operation description
 * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
 * - A persistent OSS address (`filePath`) must be provided for the file. Other information such as the public access URL and original file name is optional.
 * - If the target folder ID (`directoryId`) is not specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the invoker\\"s personal folder.
 * - Multiple authentication methods (AK, BearerToken, APP) are supported to authenticate requests.
 * - The operation type is write, and operation logs are recorded for subsequent auditing.
 *
 * @param tmpReq SendChatMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendChatMessageResponse
 */
FutureGenerator<SendChatMessageResponse> Client::sendChatMessageWithSSE(const SendChatMessageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendChatMessageShrinkRequest request = SendChatMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDigitalEmployeeName()) {
    request.setDigitalEmployeeNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDigitalEmployeeName(), "digitalEmployeeName", "json"));
  }

  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "files", "json"));
  }

  if (!!tmpReq.hasTaskExecution()) {
    request.setTaskExecutionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskExecution(), "taskExecution", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasDigitalEmployeeNameShrink()) {
    body["digitalEmployeeName"] = request.getDigitalEmployeeNameShrink();
  }

  if (!!request.hasDirectChat()) {
    body["directChat"] = request.getDirectChat();
  }

  if (!!request.hasFilesShrink()) {
    body["files"] = request.getFilesShrink();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasReuseLastSession()) {
    body["reuseLastSession"] = request.getReuseLastSession();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTaskExecutionShrink()) {
    body["taskExecution"] = request.getTaskExecutionShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendChatMessage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/sendChatMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<SendChatMessageResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Sends a message.
 *
 * @description ## Operation description
 * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
 * - A persistent OSS address (`filePath`) must be provided for the file. Other information such as the public access URL and original file name is optional.
 * - If the target folder ID (`directoryId`) is not specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the invoker\\"s personal folder.
 * - Multiple authentication methods (AK, BearerToken, APP) are supported to authenticate requests.
 * - The operation type is write, and operation logs are recorded for subsequent auditing.
 *
 * @param tmpReq SendChatMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendChatMessageResponse
 */
SendChatMessageResponse Client::sendChatMessageWithOptions(const SendChatMessageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendChatMessageShrinkRequest request = SendChatMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDigitalEmployeeName()) {
    request.setDigitalEmployeeNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDigitalEmployeeName(), "digitalEmployeeName", "json"));
  }

  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "files", "json"));
  }

  if (!!tmpReq.hasTaskExecution()) {
    request.setTaskExecutionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskExecution(), "taskExecution", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasDigitalEmployeeNameShrink()) {
    body["digitalEmployeeName"] = request.getDigitalEmployeeNameShrink();
  }

  if (!!request.hasDirectChat()) {
    body["directChat"] = request.getDirectChat();
  }

  if (!!request.hasFilesShrink()) {
    body["files"] = request.getFilesShrink();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasReuseLastSession()) {
    body["reuseLastSession"] = request.getReuseLastSession();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTaskExecutionShrink()) {
    body["taskExecution"] = request.getTaskExecutionShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendChatMessage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/sendChatMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendChatMessageResponse>();
}

/**
 * @summary Sends a message.
 *
 * @description ## Operation description
 * - This API is used to upload a file to the "My Resources" section of a specified digital employee.
 * - `source_type` is fixed to `FILE`, `scope` is fixed to `PERSONAL`, and `platform` is fixed to `LOCAL`.
 * - A persistent OSS address (`filePath`) must be provided for the file. Other information such as the public access URL and original file name is optional.
 * - If the target folder ID (`directoryId`) is not specified, the file is automatically attached to the default root folder of the current digital employee. If specified, ensure that the folder belongs to the invoker\\"s personal folder.
 * - Multiple authentication methods (AK, BearerToken, APP) are supported to authenticate requests.
 * - The operation type is write, and operation logs are recorded for subsequent auditing.
 *
 * @param request SendChatMessageRequest
 * @return SendChatMessageResponse
 */
SendChatMessageResponse Client::sendChatMessage(const SendChatMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendChatMessageWithOptions(request, headers, runtime);
}

/**
 * @summary Stops conversation generation.
 *
 * @param request StopChatMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopChatMessageResponse
 */
StopChatMessageResponse Client::stopChatMessageWithOptions(const StopChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopChatMessage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/stopChatMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopChatMessageResponse>();
}

/**
 * @summary Stops conversation generation.
 *
 * @param request StopChatMessageRequest
 * @return StopChatMessageResponse
 */
StopChatMessageResponse Client::stopChatMessage(const StopChatMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopChatMessageWithOptions(request, headers, runtime);
}

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
FutureGenerator<StreamChatMessageResponse> Client::streamChatMessageWithSSE(const string &messageId, const StreamChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLastEventId()) {
    query["lastEventId"] = request.getLastEventId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StreamChatMessage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/streamChatMessage/" , Darabonba::Encode::Encoder::percentEncode(messageId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<StreamChatMessageResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

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
StreamChatMessageResponse Client::streamChatMessageWithOptions(const string &messageId, const StreamChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLastEventId()) {
    query["lastEventId"] = request.getLastEventId();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StreamChatMessage"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/streamChatMessage/" , Darabonba::Encode::Encoder::percentEncode(messageId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StreamChatMessageResponse>();
}

/**
 * @summary Subscribes to a conversation message stream.
 *
 * @description Subscribes to a conversation message stream.
 *
 * @param request StreamChatMessageRequest
 * @return StreamChatMessageResponse
 */
StreamChatMessageResponse Client::streamChatMessage(const string &messageId, const StreamChatMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return streamChatMessageWithOptions(messageId, request, headers, runtime);
}

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
SyncOrgStructureResponse Client::syncOrgStructureWithOptions(const SyncOrgStructureRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SyncOrgStructureShrinkRequest request = SyncOrgStructureShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDepartments()) {
    request.setDepartmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDepartments(), "departments", "json"));
  }

  if (!!tmpReq.hasMembers()) {
    request.setMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMembers(), "members", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasCorpId()) {
    body["corpId"] = request.getCorpId();
  }

  if (!!request.hasDepartmentsShrink()) {
    body["departments"] = request.getDepartmentsShrink();
  }

  if (!!request.hasMembersShrink()) {
    body["members"] = request.getMembersShrink();
  }

  if (!!request.hasPlatformType()) {
    body["platformType"] = request.getPlatformType();
  }

  if (!!request.hasSsoSettingsId()) {
    body["ssoSettingsId"] = request.getSsoSettingsId();
  }

  if (!!request.hasSyncMembers()) {
    body["syncMembers"] = request.getSyncMembers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SyncOrgStructure"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/syncOrgStructure")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncOrgStructureResponse>();
}

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
SyncOrgStructureResponse Client::syncOrgStructure(const SyncOrgStructureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return syncOrgStructureWithOptions(request, headers, runtime);
}

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
TogglePrimaryObjectFavoriteResponse Client::togglePrimaryObjectFavoriteWithOptions(const TogglePrimaryObjectFavoriteRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TogglePrimaryObjectFavoriteShrinkRequest request = TogglePrimaryObjectFavoriteShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectIds()) {
    request.setObjectIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectIds(), "objectIds", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasObjectIdsShrink()) {
    body["objectIds"] = request.getObjectIdsShrink();
  }

  if (!!request.hasObjectType()) {
    body["objectType"] = request.getObjectType();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TogglePrimaryObjectFavorite"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/togglePrimaryObjectFavorite")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TogglePrimaryObjectFavoriteResponse>();
}

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
TogglePrimaryObjectFavoriteResponse Client::togglePrimaryObjectFavorite(const TogglePrimaryObjectFavoriteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return togglePrimaryObjectFavoriteWithOptions(request, headers, runtime);
}

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
UpdateAgentAuthModeResponse Client::updateAgentAuthModeWithOptions(const UpdateAgentAuthModeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAuthMode()) {
    body["authMode"] = request.getAuthMode();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgentAuthMode"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateAgentAuthMode")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentAuthModeResponse>();
}

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
UpdateAgentAuthModeResponse Client::updateAgentAuthMode(const UpdateAgentAuthModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAgentAuthModeWithOptions(request, headers, runtime);
}

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
UpdateChatSessionResponse Client::updateChatSessionWithOptions(const UpdateChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateChatSession"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateChatSession")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateChatSessionResponse>();
}

/**
 * @summary Updates a session.
 *
 * @description Updates a session.
 *
 * @param request UpdateChatSessionRequest
 * @return UpdateChatSessionResponse
 */
UpdateChatSessionResponse Client::updateChatSession(const UpdateChatSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateChatSessionWithOptions(request, headers, runtime);
}

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
UpdateDirectoryResponse Client::updateDirectoryWithOptions(const UpdateDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParentId()) {
    body["parentId"] = request.getParentId();
  }

  if (!!request.hasPath()) {
    body["path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDirectoryResponse>();
}

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
UpdateDirectoryResponse Client::updateDirectory(const UpdateDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDirectoryWithOptions(request, headers, runtime);
}

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
UpdateKnowledgeBaseDirectoryResponse Client::updateKnowledgeBaseDirectoryWithOptions(const UpdateKnowledgeBaseDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParentDirectoryId()) {
    body["parentDirectoryId"] = request.getParentDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBaseDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateKnowledgeBaseDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseDirectoryResponse>();
}

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
UpdateKnowledgeBaseDirectoryResponse Client::updateKnowledgeBaseDirectory(const UpdateKnowledgeBaseDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseDirectoryWithOptions(request, headers, runtime);
}

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
UpdateKnowledgeBaseSourceContentResponse Client::updateKnowledgeBaseSourceContentWithOptions(const UpdateKnowledgeBaseSourceContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasForceSync()) {
    body["forceSync"] = request.getForceSync();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBaseSourceContent"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateKnowledgeBaseSourceContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseSourceContentResponse>();
}

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
UpdateKnowledgeBaseSourceContentResponse Client::updateKnowledgeBaseSourceContent(const UpdateKnowledgeBaseSourceContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseSourceContentWithOptions(request, headers, runtime);
}

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
UpdateKnowledgeBaseSourceTagsResponse Client::updateKnowledgeBaseSourceTagsWithOptions(const UpdateKnowledgeBaseSourceTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  if (!!request.hasSourceTags()) {
    body["sourceTags"] = request.getSourceTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBaseSourceTags"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateKnowledgeBaseSourceTags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseSourceTagsResponse>();
}

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
UpdateKnowledgeBaseSourceTagsResponse Client::updateKnowledgeBaseSourceTags(const UpdateKnowledgeBaseSourceTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseSourceTagsWithOptions(request, headers, runtime);
}

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
UpdateScheduledTaskResponse Client::updateScheduledTaskWithOptions(const UpdateScheduledTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateScheduledTaskShrinkRequest request = UpdateScheduledTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDescription()) {
    request.setDescriptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDescription(), "description", "json"));
  }

  if (!!tmpReq.hasDigitalEmployeeName()) {
    request.setDigitalEmployeeNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDigitalEmployeeName(), "digitalEmployeeName", "json"));
  }

  if (!!tmpReq.hasSegments()) {
    request.setSegmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSegments(), "segments", "json"));
  }

  if (!!tmpReq.hasTaskDetail()) {
    request.setTaskDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskDetail(), "taskDetail", "json"));
  }

  if (!!tmpReq.hasTriggerConfig()) {
    request.setTriggerConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTriggerConfig(), "triggerConfig", "json"));
  }

  if (!!tmpReq.hasVisibleMemberUserIds()) {
    request.setVisibleMemberUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVisibleMemberUserIds(), "visibleMemberUserIds", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescriptionShrink()) {
    body["description"] = request.getDescriptionShrink();
  }

  if (!!request.hasDigitalEmployeeNameShrink()) {
    body["digitalEmployeeName"] = request.getDigitalEmployeeNameShrink();
  }

  if (!!request.hasIsOpen()) {
    body["isOpen"] = request.getIsOpen();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasSegmentsShrink()) {
    body["segments"] = request.getSegmentsShrink();
  }

  if (!!request.hasTaskDetailShrink()) {
    body["taskDetail"] = request.getTaskDetailShrink();
  }

  if (!!request.hasTaskId()) {
    body["taskId"] = request.getTaskId();
  }

  if (!!request.hasTriggerConfigShrink()) {
    body["triggerConfig"] = request.getTriggerConfigShrink();
  }

  if (!!request.hasVisibility()) {
    body["visibility"] = request.getVisibility();
  }

  if (!!request.hasVisibleMemberUserIdsShrink()) {
    body["visibleMemberUserIds"] = request.getVisibleMemberUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateScheduledTask"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateScheduledTask")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScheduledTaskResponse>();
}

/**
 * @summary Updates a scheduled task.
 *
 * @description Updates a scheduled task.
 *
 * @param request UpdateScheduledTaskRequest
 * @return UpdateScheduledTaskResponse
 */
UpdateScheduledTaskResponse Client::updateScheduledTask(const UpdateScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateScheduledTaskWithOptions(request, headers, runtime);
}

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
UpdateSourceContentResponse Client::updateSourceContentWithOptions(const UpdateSourceContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasForceSync()) {
    body["forceSync"] = request.getForceSync();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSourceContent"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateSourceContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSourceContentResponse>();
}

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
UpdateSourceContentResponse Client::updateSourceContent(const UpdateSourceContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSourceContentWithOptions(request, headers, runtime);
}

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
UpdateTenantDirectoryResponse Client::updateTenantDirectoryWithOptions(const UpdateTenantDirectoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParentId()) {
    body["parentId"] = request.getParentId();
  }

  if (!!request.hasPath()) {
    body["path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTenantDirectory"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateTenantDirectory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTenantDirectoryResponse>();
}

/**
 * @summary Modifies knowledge base folder information.
 *
 * @description Modifies knowledge base folder information.
 *
 * @param request UpdateTenantDirectoryRequest
 * @return UpdateTenantDirectoryResponse
 */
UpdateTenantDirectoryResponse Client::updateTenantDirectory(const UpdateTenantDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTenantDirectoryWithOptions(request, headers, runtime);
}

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
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateUserShrinkRequest request = UpdateUserShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoleCodes()) {
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoleCodes(), "roleCodes", "json"));
  }

  if (!!tmpReq.hasUserGroupIds()) {
    request.setUserGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserGroupIds(), "userGroupIds", "json"));
  }

  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasIsActive()) {
    body["isActive"] = request.getIsActive();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["roleCodes"] = request.getRoleCodesShrink();
  }

  if (!!request.hasUserGroupIdsShrink()) {
    body["userGroupIds"] = request.getUserGroupIdsShrink();
  }

  if (!!request.hasWnUserId()) {
    body["wnUserId"] = request.getWnUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateUser")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserResponse>();
}

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
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateUserWithOptions(request, headers, runtime);
}

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
UpdateUserInfoResponse Client::updateUserInfoWithOptions(const UpdateUserInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasAvatar()) {
    body["avatar"] = request.getAvatar();
  }

  if (!!request.hasLanguagePreference()) {
    body["languagePreference"] = request.getLanguagePreference();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOffering()) {
    body["offering"] = request.getOffering();
  }

  if (!!request.hasProfileRoleInfo()) {
    body["profileRoleInfo"] = request.getProfileRoleInfo();
  }

  if (!!request.hasSelfIntroduction()) {
    body["selfIntroduction"] = request.getSelfIntroduction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUserInfo"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/updateUserInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserInfoResponse>();
}

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
UpdateUserInfoResponse Client::updateUserInfo(const UpdateUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateUserInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads a local file in a session.
 *
 * @description ## Operation description
 * This API is used to upload a session temporary file by using the **file transfer upload** mode (`fileTransfer`). The file binary data is not transmitted through the request body of this API. Instead, the file is first uploaded to Object Storage Service (OSS), and then the OSS address is passed to the backend through the `FileUrl` parameter. The backend retrieves the bytes from that address, writes them to its own OSS, and creates a session temporary file record.
 * ### Call methods
 * - **Recommended**: Use the `UploadChatFileAdvance` method generated by the SDK. Pass in the local file stream, and the SDK automatically completes the transfer upload and populates `FileUrl`.
 * - **Direct upload**: Upload the file to an OSS address accessible by the server, and then directly call this API with the `FileUrl` parameter.
 * ### Request parameters
 * - **FileUrl**: Required. The OSS address of the file. When you use the Advance method, the SDK automatically populates this parameter. You do not need to manually assign a value.
 * - **FileName**: Required. The original file name including the extension, such as `report.pdf`. The OSS address generated during transfer does not carry the original file name. The backend uses this parameter to determine the file extension and display name. Therefore, you must explicitly pass in this parameter.
 * - **ContentType**: Optional. The MIME type of the file. If this parameter is not specified, `application/octet-stream` is used.
 * - **OperatingObjectName**: Optional. The Agent namespace identifier that determines the file storage path.
 * ### Response parameters
 * The response includes the OSS object path `objectName`, the storage address `fileUrl`, the public access address `filePublicUrl` (valid for 1 hour), and the file record ID `fileRecordId`. The `uploadSignatureUrl` parameter is always empty in this mode.
 *
 * @param request UploadChatFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadChatFileResponse
 */
UploadChatFileResponse Client::uploadChatFileWithOptions(const UploadChatFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    body["fileUrl"] = request.getFileUrl();
  }

  if (!!request.hasOperatingObjectName()) {
    body["operatingObjectName"] = request.getOperatingObjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadChatFile"},
    {"version" , "2026-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/uploadChatFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadChatFileResponse>();
}

/**
 * @summary Uploads a local file in a session.
 *
 * @description ## Operation description
 * This API is used to upload a session temporary file by using the **file transfer upload** mode (`fileTransfer`). The file binary data is not transmitted through the request body of this API. Instead, the file is first uploaded to Object Storage Service (OSS), and then the OSS address is passed to the backend through the `FileUrl` parameter. The backend retrieves the bytes from that address, writes them to its own OSS, and creates a session temporary file record.
 * ### Call methods
 * - **Recommended**: Use the `UploadChatFileAdvance` method generated by the SDK. Pass in the local file stream, and the SDK automatically completes the transfer upload and populates `FileUrl`.
 * - **Direct upload**: Upload the file to an OSS address accessible by the server, and then directly call this API with the `FileUrl` parameter.
 * ### Request parameters
 * - **FileUrl**: Required. The OSS address of the file. When you use the Advance method, the SDK automatically populates this parameter. You do not need to manually assign a value.
 * - **FileName**: Required. The original file name including the extension, such as `report.pdf`. The OSS address generated during transfer does not carry the original file name. The backend uses this parameter to determine the file extension and display name. Therefore, you must explicitly pass in this parameter.
 * - **ContentType**: Optional. The MIME type of the file. If this parameter is not specified, `application/octet-stream` is used.
 * - **OperatingObjectName**: Optional. The Agent namespace identifier that determines the file storage path.
 * ### Response parameters
 * The response includes the OSS object path `objectName`, the storage address `fileUrl`, the public access address `filePublicUrl` (valid for 1 hour), and the file record ID `fileRecordId`. The `uploadSignatureUrl` parameter is always empty in this mode.
 *
 * @param request UploadChatFileRequest
 * @return UploadChatFileResponse
 */
UploadChatFileResponse Client::uploadChatFile(const UploadChatFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uploadChatFileWithOptions(request, headers, runtime);
}

UploadChatFileResponse Client::uploadChatFileAdvance(const UploadChatFileAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "WinNexo"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  UploadChatFileRequest uploadChatFileReq = UploadChatFileRequest();
  Utils::Utils::convert(request, uploadChatFileReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType)},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    uploadChatFileReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  UploadChatFileResponse uploadChatFileResp = uploadChatFileWithOptions(uploadChatFileReq, headers, runtime);
  return uploadChatFileResp;
}
} // namespace AlibabaCloud
} // namespace WinNexo20260512