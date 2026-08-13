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
  this->_endpointRule = "";
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
 * @summary 服务健康检查
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
 * @summary 服务健康检查
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
 * @summary 创建会话
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
 * @summary 创建会话
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
 * @summary 注册纯自定义组织
 *
 * @description 注册一个纯自定义组织，用于后续通过 syncOrgStructure 推送部门树。
 *     注册逻辑：
 *     1. 校验 corpId 格式（小写字母/数字开头，3-64 位，允许中划线）
 *     2. 委托 OrgSyncAuthorizedService 执行注册（内含权限校验 + 租户内唯一性检查）
 *     3. 返回注册结果
 *     注意：纯自定义组织仅支持部门树同步，不支持成员关系同步。
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
 * @summary 注册纯自定义组织
 *
 * @description 注册一个纯自定义组织，用于后续通过 syncOrgStructure 推送部门树。
 *     注册逻辑：
 *     1. 校验 corpId 格式（小写字母/数字开头，3-64 位，允许中划线）
 *     2. 委托 OrgSyncAuthorizedService 执行注册（内含权限校验 + 租户内唯一性检查）
 *     3. 返回注册结果
 *     注意：纯自定义组织仅支持部门树同步，不支持成员关系同步。
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
 * @summary 将阿里钉在线文档上传到企业知识库，需管理权限。
 *
 * @description ## 请求说明
 * - 该接口用于将阿里钉在线文档添加到指定的企业知识库中。
 * - 调用者必须具备`DEVELOPMENT_KB_MANAGE`功能权限。
 * - `source_type`固定为`ONLINE_DOC`，`platform`固定为`ALI_DING`，`scope`固定为`TENANT`。
 * - 如果不提供`directoryId`，则默认绑定到当前数字员工的根目录；若提供，则必须是当前租户下的有效目录ID。
 * - `filePublicUrl`参数是必需的，表示要上传的阿里钉在线文档的公开访问URL。
 * - 可选参数包括`operatingObjectName`（数字员工名称）、`description`（资源描述）、`knowledgeId`（知识库ID）和`sourceTags`（资源标签）等。
 * - 成功响应会返回新创建资源的相关信息，如`sourceId`、`name`、`status`、`directoryId`及创建时间等。
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
 * @summary 将阿里钉在线文档上传到企业知识库，需管理权限。
 *
 * @description ## 请求说明
 * - 该接口用于将阿里钉在线文档添加到指定的企业知识库中。
 * - 调用者必须具备`DEVELOPMENT_KB_MANAGE`功能权限。
 * - `source_type`固定为`ONLINE_DOC`，`platform`固定为`ALI_DING`，`scope`固定为`TENANT`。
 * - 如果不提供`directoryId`，则默认绑定到当前数字员工的根目录；若提供，则必须是当前租户下的有效目录ID。
 * - `filePublicUrl`参数是必需的，表示要上传的阿里钉在线文档的公开访问URL。
 * - 可选参数包括`operatingObjectName`（数字员工名称）、`description`（资源描述）、`knowledgeId`（知识库ID）和`sourceTags`（资源标签）等。
 * - 成功响应会返回新创建资源的相关信息，如`sourceId`、`name`、`status`、`directoryId`及创建时间等。
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
 * @summary 用于在企业知识库中创建新的分类目录。
 *
 * @description ## 请求说明
 * - 该接口允许具有`DEVELOPMENT_KB_MANAGE`权限的用户为企业知识库创建新的分类。
 * - 创建时可指定父分类ID，若未指定，则新分类将直接挂载于企业知识库根目录下。
 * - 系统会自动检查同名冲突及目录深度限制等问题。
 * - `tenant_id`和`user_id`仅通过鉴权身份获取，请求体中即使提供也会被忽略。
 * - 需要确保提供的`parentDirectoryId`（如果有的话）属于当前租户。
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
 * @summary 用于在企业知识库中创建新的分类目录。
 *
 * @description ## 请求说明
 * - 该接口允许具有`DEVELOPMENT_KB_MANAGE`权限的用户为企业知识库创建新的分类。
 * - 创建时可指定父分类ID，若未指定，则新分类将直接挂载于企业知识库根目录下。
 * - 系统会自动检查同名冲突及目录深度限制等问题。
 * - `tenant_id`和`user_id`仅通过鉴权身份获取，请求体中即使提供也会被忽略。
 * - 需要确保提供的`parentDirectoryId`（如果有的话）属于当前租户。
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
 * @summary 将指定文件上传至企业知识库，需具备管理权限。
 *
 * @description ## 请求说明
 * - 该接口用于向企业知识库中上传文件。
 * - 需要拥有`DEVELOPMENT_KB_MANAGE`功能权限才能调用此API。
 * - 文件上传时必须提供文件的OSS持久化地址(`filePath`)。
 * - 可选参数包括文件公开访问URL、原始文件名等，以增强文件信息的完整性。
 * - 如果指定了`directoryId`，则文件会被放置在对应的企业知识库目录下；否则，默认绑定到当前数字员工默认根目录。
 * - 支持通过`sourceTags`为资源添加标签，便于后续管理和检索。
 * - 本操作会启动计费账单（UNSTRUCTURED_PARSE），请确保账户余额充足。
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
 * @summary 将指定文件上传至企业知识库，需具备管理权限。
 *
 * @description ## 请求说明
 * - 该接口用于向企业知识库中上传文件。
 * - 需要拥有`DEVELOPMENT_KB_MANAGE`功能权限才能调用此API。
 * - 文件上传时必须提供文件的OSS持久化地址(`filePath`)。
 * - 可选参数包括文件公开访问URL、原始文件名等，以增强文件信息的完整性。
 * - 如果指定了`directoryId`，则文件会被放置在对应的企业知识库目录下；否则，默认绑定到当前数字员工默认根目录。
 * - 支持通过`sourceTags`为资源添加标签，便于后续管理和检索。
 * - 本操作会启动计费账单（UNSTRUCTURED_PARSE），请确保账户余额充足。
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
 * @summary 将纯文本内容添加至指定的企业知识库中。
 *
 * @description ## 请求说明
 * - 该API用于向企业知识库上传纯文本信息，要求调用者具备相应的管理权限。
 * - `textContent`字段为必填项，代表要上传的纯文本内容。
 * - 可选参数包括数字员工名称(`operatingObjectName`)、资源描述(`description`)等，允许用户自定义更多细节。
 * - 如果提供了`directoryId`，则会将上传的文本绑定到指定的知识库目录下；若未提供，则默认绑定到当前数字员工的根目录。
 * - 支持通过`sourceTags`给资源打标签，方便后续管理和检索。
 * - 调用此接口前，请确保已正确配置身份验证方式（支持AK、BearerToken及APP认证）并拥有`DEVELOPMENT_KB_MANAGE`权限。
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
 * @summary 将纯文本内容添加至指定的企业知识库中。
 *
 * @description ## 请求说明
 * - 该API用于向企业知识库上传纯文本信息，要求调用者具备相应的管理权限。
 * - `textContent`字段为必填项，代表要上传的纯文本内容。
 * - 可选参数包括数字员工名称(`operatingObjectName`)、资源描述(`description`)等，允许用户自定义更多细节。
 * - 如果提供了`directoryId`，则会将上传的文本绑定到指定的知识库目录下；若未提供，则默认绑定到当前数字员工的根目录。
 * - 支持通过`sourceTags`给资源打标签，方便后续管理和检索。
 * - 调用此接口前，请确保已正确配置身份验证方式（支持AK、BearerToken及APP认证）并拥有`DEVELOPMENT_KB_MANAGE`权限。
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
 * @summary 将阿里钉会议文件上传至当前数字员工的个人资源库。
 *
 * @description ## 请求说明
 * - 该API用于将阿里钉会议相关资料（如音视频、闪记链接等）上传至指定数字员工的“我的资源”中。
 * - `source_type` 固定为 `ALI_DING_MEETING`，且作用范围 `scope` 固定为 `PERSONAL`。
 * - 必须提供公开的音视频OSS地址 (`ossUrl`) 和原始的闪记链接 (`shanjiUrl`)。
 * - 可选地，可以指定目标个人目录ID (`directoryId`)；若未指定，则自动绑定到当前数字员工默认根目录。
 * - 支持添加资源描述 (`description`) 和会议笔记内容 (`notes`)，其中会议笔记可用于辅助分析。
 * - 此操作需要相应的权限认证，支持AK、BearerToken和APP三种认证方式之一。
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
 * @summary 将阿里钉会议文件上传至当前数字员工的个人资源库。
 *
 * @description ## 请求说明
 * - 该API用于将阿里钉会议相关资料（如音视频、闪记链接等）上传至指定数字员工的“我的资源”中。
 * - `source_type` 固定为 `ALI_DING_MEETING`，且作用范围 `scope` 固定为 `PERSONAL`。
 * - 必须提供公开的音视频OSS地址 (`ossUrl`) 和原始的闪记链接 (`shanjiUrl`)。
 * - 可选地，可以指定目标个人目录ID (`directoryId`)；若未指定，则自动绑定到当前数字员工默认根目录。
 * - 支持添加资源描述 (`description`) 和会议笔记内容 (`notes`)，其中会议笔记可用于辅助分析。
 * - 此操作需要相应的权限认证，支持AK、BearerToken和APP三种认证方式之一。
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
 * @summary 将阿里钉在线文档上传至当前数字员工的个人资源中。
 *
 * @description ## 请求说明
 * - 该API用于将阿里钉在线文档添加到指定数字员工的"我的资源"中。
 * - 固定参数包括 `source_type=ONLINE_DOC`、`platform=ALI_DING` 和 `scope=PERSONAL`。
 * - 如果未提供`directoryId`，则默认绑定到当前数字员工的根目录；若提供了，则需确保该目录属于当前用户且在当前数字员工下存在。
 * - 调用过程中会启动计量并记录相关操作日志。
 * - 安全性方面，`tenant_id`和`user_id`仅从鉴权身份获取，调用方提供的这些字段值将被忽略。
 * - 任何校验或执行失败都会通过服务抛出异常，并转换为POP错误码返回给调用者。
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
 * @summary 将阿里钉在线文档上传至当前数字员工的个人资源中。
 *
 * @description ## 请求说明
 * - 该API用于将阿里钉在线文档添加到指定数字员工的"我的资源"中。
 * - 固定参数包括 `source_type=ONLINE_DOC`、`platform=ALI_DING` 和 `scope=PERSONAL`。
 * - 如果未提供`directoryId`，则默认绑定到当前数字员工的根目录；若提供了，则需确保该目录属于当前用户且在当前数字员工下存在。
 * - 调用过程中会启动计量并记录相关操作日志。
 * - 安全性方面，`tenant_id`和`user_id`仅从鉴权身份获取，调用方提供的这些字段值将被忽略。
 * - 任何校验或执行失败都会通过服务抛出异常，并转换为POP错误码返回给调用者。
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
 * @summary 将阿里钉整体知识库添加到当前数字员工的个人资源中。
 *
 * @description ## 请求说明
 * - 该API用于创建一个阿里钉知识库，并将其挂载到指定数字员工的个人资源目录下。
 * - `platform`固定为`ALI_DING`，`directory_type`固定为`PERSONAL`。
 * - 如果提供了`directoryId`，则会验证该目录是否存在且属于当前租户和个人类型。
 * - 创建过程中会初始化知识库根目录（状态设置为`RUNNING`），并根据提供的同步配置派发后台任务以拉取远程目录树和创建子节点。
 * - 安全性方面，`tenant_id`与`user_id`仅从鉴权身份获取，请求体中的这些字段会被忽略。
 * - 同步配置可选，若启用需提供cron表达式；未传或禁用时，默认不进行定时同步。
 * - 知识库名称可以自定义，如果不提供，则会在后台同步后自动填充。
 * - 支持多值对象绑定，相关信息将被序列化并存储于知识库元数据中。
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
 * @summary 将阿里钉整体知识库添加到当前数字员工的个人资源中。
 *
 * @description ## 请求说明
 * - 该API用于创建一个阿里钉知识库，并将其挂载到指定数字员工的个人资源目录下。
 * - `platform`固定为`ALI_DING`，`directory_type`固定为`PERSONAL`。
 * - 如果提供了`directoryId`，则会验证该目录是否存在且属于当前租户和个人类型。
 * - 创建过程中会初始化知识库根目录（状态设置为`RUNNING`），并根据提供的同步配置派发后台任务以拉取远程目录树和创建子节点。
 * - 安全性方面，`tenant_id`与`user_id`仅从鉴权身份获取，请求体中的这些字段会被忽略。
 * - 同步配置可选，若启用需提供cron表达式；未传或禁用时，默认不进行定时同步。
 * - 知识库名称可以自定义，如果不提供，则会在后台同步后自动填充。
 * - 支持多值对象绑定，相关信息将被序列化并存储于知识库元数据中。
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
 * @summary 将钉钉会议上传至当前数字员工的个人资源库。
 *
 * @description ## 请求说明
 * - 该接口用于将钉钉会议作为资源上传到指定数字员工的“我的资源”中。
 * - `source_type` 固定为 `DINGTALK_MEETING`，`scope` 固定为 `PERSONAL`。
 * - 如果不提供 `credentialId`，则使用系统默认配置。
 * - 当未指定 `directoryId` 时，资源将自动绑定到当前数字员工的默认根目录下；若指定，则必须是调用者在该数字员工下的已有个人目录。
 * - 可选参数 `description` 和 `notes` 分别用于描述资源和记录会议笔记，其中 `notes` 会参与辅助分析。
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
 * @summary 将钉钉会议上传至当前数字员工的个人资源库。
 *
 * @description ## 请求说明
 * - 该接口用于将钉钉会议作为资源上传到指定数字员工的“我的资源”中。
 * - `source_type` 固定为 `DINGTALK_MEETING`，`scope` 固定为 `PERSONAL`。
 * - 如果不提供 `credentialId`，则使用系统默认配置。
 * - 当未指定 `directoryId` 时，资源将自动绑定到当前数字员工的默认根目录下；若指定，则必须是调用者在该数字员工下的已有个人目录。
 * - 可选参数 `description` 和 `notes` 分别用于描述资源和记录会议笔记，其中 `notes` 会参与辅助分析。
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
 * @summary 在我的资源下创建个人目录（分类）
 *
 * @description ## 请求说明
 * - 该 API 用于在“我的资源”下创建个人目录（分类）。
 * - 若未传 `parentDirectoryId`，系统将自动使用或创建当前数字员工的默认根目录作为父目录。
 * - 若传入 `parentDirectoryId`，则必须是当前用户在当前数字员工下的已有个人目录。
 * - `tenant_id` 和 `user_id` 仅来自鉴权身份，调用方在请求体中传入这些字段会被忽略。
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
 * @summary 在我的资源下创建个人目录（分类）
 *
 * @description ## 请求说明
 * - 该 API 用于在“我的资源”下创建个人目录（分类）。
 * - 若未传 `parentDirectoryId`，系统将自动使用或创建当前数字员工的默认根目录作为父目录。
 * - 若传入 `parentDirectoryId`，则必须是当前用户在当前数字员工下的已有个人目录。
 * - `tenant_id` 和 `user_id` 仅来自鉴权身份，调用方在请求体中传入这些字段会被忽略。
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
 * @summary 将飞书妙记会议文件上传至当前数字员工的个人资源库。
 *
 * @description ## 请求说明
 * 该 API 用于将飞书妙记中的会议记录上传至指定数字员工的"我的资源"中。通过提供必要的参数，如飞书妙记的唯一标识符（`minuteToken`）和凭证 ID（`credentialId`），可以实现会议内容的迁移与保存。若未指定目标目录，则默认绑定到当前数字员工下的根目录。
 * - `operatingObjectName`：执行操作的数字员工名称。
 * - `name`：上传后资源在系统内的显示名称。
 * - `minuteToken`：来自飞书妙记平台的会议唯一标识符。
 * - `credentialId`：关联到特定认证信息的ID，用于验证请求合法性。
 * - `directoryId`（可选）：指定要存放资源的目标个人目录ID；如果省略此字段，则资源将被自动放置于默认位置。
 * - `description`（可选）：对所上传资源的简短描述或备注。
 * 注意事项：
 * - 确保提供的 `minuteToken` 和 `credentialId` 的有效性。
 * - 当指定了 `directoryId` 时，请确认其属于调用者在当前数字员工环境下的可用个人目录之一。
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
 * @summary 将飞书妙记会议文件上传至当前数字员工的个人资源库。
 *
 * @description ## 请求说明
 * 该 API 用于将飞书妙记中的会议记录上传至指定数字员工的"我的资源"中。通过提供必要的参数，如飞书妙记的唯一标识符（`minuteToken`）和凭证 ID（`credentialId`），可以实现会议内容的迁移与保存。若未指定目标目录，则默认绑定到当前数字员工下的根目录。
 * - `operatingObjectName`：执行操作的数字员工名称。
 * - `name`：上传后资源在系统内的显示名称。
 * - `minuteToken`：来自飞书妙记平台的会议唯一标识符。
 * - `credentialId`：关联到特定认证信息的ID，用于验证请求合法性。
 * - `directoryId`（可选）：指定要存放资源的目标个人目录ID；如果省略此字段，则资源将被自动放置于默认位置。
 * - `description`（可选）：对所上传资源的简短描述或备注。
 * 注意事项：
 * - 确保提供的 `minuteToken` 和 `credentialId` 的有效性。
 * - 当指定了 `directoryId` 时，请确认其属于调用者在当前数字员工环境下的可用个人目录之一。
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
 * @summary 将文件上传至当前数字员工的个人资源库。
 *
 * @description ## 请求说明
 * - 该API用于将文件上传到指定数字员工的"我的资源"中。
 * - `source_type` 固定为 `FILE`，`scope` 固定为 `PERSONAL`，`platform` 固定为 `LOCAL`。
 * - 文件必须提供OSS持久化地址 (`filePath`)，其他如公开访问URL、原始文件名等信息可选提供。
 * - 如果不指定目标目录ID (`directoryId`)，则文件会被自动绑定到当前数字员工默认根目录下；如果指定，则需确保该目录属于调用者的个人目录。
 * - 支持通过多种认证方式（AK、BearerToken、APP）进行安全验证。
 * - 操作类型为写入(`write`)，并记录操作日志以供后续审计使用。
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
 * @summary 将文件上传至当前数字员工的个人资源库。
 *
 * @description ## 请求说明
 * - 该API用于将文件上传到指定数字员工的"我的资源"中。
 * - `source_type` 固定为 `FILE`，`scope` 固定为 `PERSONAL`，`platform` 固定为 `LOCAL`。
 * - 文件必须提供OSS持久化地址 (`filePath`)，其他如公开访问URL、原始文件名等信息可选提供。
 * - 如果不指定目标目录ID (`directoryId`)，则文件会被自动绑定到当前数字员工默认根目录下；如果指定，则需确保该目录属于调用者的个人目录。
 * - 支持通过多种认证方式（AK、BearerToken、APP）进行安全验证。
 * - 操作类型为写入(`write`)，并记录操作日志以供后续审计使用。
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
 * @summary 将纯文本内容上传至当前数字员工的个人资源库。
 *
 * @description ## 请求说明
 * - 该API用于向指定数字员工的个人资源中添加纯文本内容。
 * - `source_type` 固定为 `TEXT`，`scope` 固定为 `PERSONAL`。
 * - 如果不提供`directoryId`，则默认绑定到当前数字员工的根目录；若提供，则必须是调用者在该数字员工下的已有个人目录。
 * - `tenant_id` 和 `user_id` 只能来自鉴权身份信息，通过请求体传递这些参数将被忽略。
 * - 调用过程中会启动计量并生成相应的`billing_id`。
 * - 文本内容将被写入`unstructured_docs`，并生成初始资源记录。
 * - 任何校验或执行失败都将抛出`RobjectException`异常，并由全局中间件转换为POP错误码返回给调用方。
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
 * @summary 将纯文本内容上传至当前数字员工的个人资源库。
 *
 * @description ## 请求说明
 * - 该API用于向指定数字员工的个人资源中添加纯文本内容。
 * - `source_type` 固定为 `TEXT`，`scope` 固定为 `PERSONAL`。
 * - 如果不提供`directoryId`，则默认绑定到当前数字员工的根目录；若提供，则必须是调用者在该数字员工下的已有个人目录。
 * - `tenant_id` 和 `user_id` 只能来自鉴权身份信息，通过请求体传递这些参数将被忽略。
 * - 调用过程中会启动计量并生成相应的`billing_id`。
 * - 文本内容将被写入`unstructured_docs`，并生成初始资源记录。
 * - 任何校验或执行失败都将抛出`RobjectException`异常，并由全局中间件转换为POP错误码返回给调用方。
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
 * @summary 将离线会议音频文件上传至当前数字员工的个人资源中。
 *
 * @description ## 请求说明
 * - 该API用于将离线会议的音频文件上传到指定数字员工的“我的资源”中。
 * - `source_type`固定为`VOICE_MEETING`，`scope`固定为`PERSONAL`，且`voice_meeting_type`固定为`OFFLINE`。
 * - 如果请求体中未提供`directoryId`，则资源将自动绑定到默认根目录；若提供了`directoryId`，则必须是当前用户在当前数字员工下的已有个人目录。
 * - 调用此接口会启动一个后台流程来处理音频文件转写，并返回新建资源的相关信息。
 * - 安全性方面，`tenant_id`和`user_id`仅从鉴权身份获取，即使请求体中包含这些字段也会被忽略。
 * - 任何校验或执行失败都会抛出`RobjectException`，并通过全局中间件转换为POP错误码。
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
 * @summary 将离线会议音频文件上传至当前数字员工的个人资源中。
 *
 * @description ## 请求说明
 * - 该API用于将离线会议的音频文件上传到指定数字员工的“我的资源”中。
 * - `source_type`固定为`VOICE_MEETING`，`scope`固定为`PERSONAL`，且`voice_meeting_type`固定为`OFFLINE`。
 * - 如果请求体中未提供`directoryId`，则资源将自动绑定到默认根目录；若提供了`directoryId`，则必须是当前用户在当前数字员工下的已有个人目录。
 * - 调用此接口会启动一个后台流程来处理音频文件转写，并返回新建资源的相关信息。
 * - 安全性方面，`tenant_id`和`user_id`仅从鉴权身份获取，即使请求体中包含这些字段也会被忽略。
 * - 任何校验或执行失败都会抛出`RobjectException`，并通过全局中间件转换为POP错误码。
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
 * @summary 创建定时任务
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
 * @summary 创建定时任务
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
 * @summary 使用租户和用户信息创建企业知识库目录。
 *
 * @description ## 请求说明
 * - 该 API 用于在指定租户下创建新的企业知识库目录。
 * - 可以通过设置 `parentId` 参数来指定新目录的父目录，如果不传则默认创建为根目录。
 * - `path` 参数可选，不提供时系统会根据父目录自动计算路径。
 * - 调用此接口需要具备相应的权限，并且支持多种认证方式包括 AK、BearerToken 和 APP 认证。
 * - 创建成功后返回新目录的相关信息，如目录 ID、名称等。
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
 * @summary 使用租户和用户信息创建企业知识库目录。
 *
 * @description ## 请求说明
 * - 该 API 用于在指定租户下创建新的企业知识库目录。
 * - 可以通过设置 `parentId` 参数来指定新目录的父目录，如果不传则默认创建为根目录。
 * - `path` 参数可选，不提供时系统会根据父目录自动计算路径。
 * - 调用此接口需要具备相应的权限，并且支持多种认证方式包括 AK、BearerToken 和 APP 认证。
 * - 创建成功后返回新目录的相关信息，如目录 ID、名称等。
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
 * @summary 创建用户并加入租户
 *
 * @description OpenAPI 创建用户。
 *     业务编排：
 *     1. 解析 roleCodes → role_ids（系统角色枚举校验）
 *     2. 判断用户是否已存在（用于返回 isNewUser 标记）
 *     3. 调用 UserManagementService.add_tenant_member 完成创建/加入（密码由调用方强制传入 RSA 密文）
 *     4. 返回创建结果（含 isNewUser 标记）
 *     错误码：
 *     - ERR.User.DeactivatedInTenant: 用户在租户中已停用，请使用 updateUser 恢复
 *     - ERR.User.AlreadyInTenant: 用户已是租户活跃成员
 *     - ERR.User.DisplayNameDuplicateInTenant: 租户内显示名重复
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
 * @summary 创建用户并加入租户
 *
 * @description OpenAPI 创建用户。
 *     业务编排：
 *     1. 解析 roleCodes → role_ids（系统角色枚举校验）
 *     2. 判断用户是否已存在（用于返回 isNewUser 标记）
 *     3. 调用 UserManagementService.add_tenant_member 完成创建/加入（密码由调用方强制传入 RSA 密文）
 *     4. 返回创建结果（含 isNewUser 标记）
 *     错误码：
 *     - ERR.User.DeactivatedInTenant: 用户在租户中已停用，请使用 updateUser 恢复
 *     - ERR.User.AlreadyInTenant: 用户已是租户活跃成员
 *     - ERR.User.DisplayNameDuplicateInTenant: 租户内显示名重复
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
 * @summary 删除会话
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
 * @summary 删除会话
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
 * @summary 删除当前租户内的指定资源（知识）。
 *
 * @description ## 请求说明
 * - `tenantId` 仅来自鉴权身份；调用方传入会被忽略。
 * - `sourceId` 通过 body 传递，注册路径为扁平的 `/openapi/deleteSource`，不含 `{sourceId}` 路径模板；请勿以路径段形式追加资源 ID，网关按扁平 URI 精确路由，会回 `InvalidAction.NotFound`。
 * - 删除为不可逆操作，资源关联的解析结果与绑定关系会一并失效。
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
 * @summary 删除当前租户内的指定资源（知识）。
 *
 * @description ## 请求说明
 * - `tenantId` 仅来自鉴权身份；调用方传入会被忽略。
 * - `sourceId` 通过 body 传递，注册路径为扁平的 `/openapi/deleteSource`，不含 `{sourceId}` 路径模板；请勿以路径段形式追加资源 ID，网关按扁平 URI 精确路由，会回 `InvalidAction.NotFound`。
 * - 删除为不可逆操作，资源关联的解析结果与绑定关系会一并失效。
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
 * @summary 用于删除指定的企业知识库目录，支持不同删除模式。
 *
 * @description ## 请求说明
 * - 该API允许用户删除特定的企业知识库目录。
 * - 用户可以通过设置`deleteMode`参数来选择不同的删除策略，包括拒绝删除（reject）、递归删除（recursive）或将目录移动到根目录（move_to_root）。
 * - 如果不提供`deleteMode`，默认行为是拒绝删除。
 * - 删除操作前会校验企业目录边界。
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
 * @summary 用于删除指定的企业知识库目录，支持不同删除模式。
 *
 * @description ## 请求说明
 * - 该API允许用户删除特定的企业知识库目录。
 * - 用户可以通过设置`deleteMode`参数来选择不同的删除策略，包括拒绝删除（reject）、递归删除（recursive）或将目录移动到根目录（move_to_root）。
 * - 如果不提供`deleteMode`，默认行为是拒绝删除。
 * - 删除操作前会校验企业目录边界。
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
 * @summary 关闭 API Token
 *
 * @description 关闭用户的 INSTANCE Token。
 *     业务逻辑：
 *     1. 从 identity 取 user_id（强制 caller_type=user）
 *     2. 构造 AuthContext，委托 UserTokenAuthorizedService 完成权限校验
 *     3. 调用 disable_token（ACTIVE → INACTIVE）
 *     4. 返回 disabled=True
 *     幂等性：若当前无 ACTIVE Token，deactivate_all 影响 0 行，不报错。
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
 * @summary 关闭 API Token
 *
 * @description 关闭用户的 INSTANCE Token。
 *     业务逻辑：
 *     1. 从 identity 取 user_id（强制 caller_type=user）
 *     2. 构造 AuthContext，委托 UserTokenAuthorizedService 完成权限校验
 *     3. 调用 disable_token（ACTIVE → INACTIVE）
 *     4. 返回 disabled=True
 *     幂等性：若当前无 ACTIVE Token，deactivate_all 影响 0 行，不报错。
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
 * @summary 开启 API Token
 *
 * @description 开启用户的 INSTANCE Token（幂等）。
 *     业务逻辑：
 *     1. 从 identity 取 user_id（强制 caller_type=user）
 *     2. 构造 AuthContext，委托 UserTokenAuthorizedService 完成权限校验
 *     3. 调用 enable_token：
 *        - 已有 ACTIVE → 幂等返回（仅脱敏值，不重复下发明文）
 *        - 有 INACTIVE → 重新激活（返回明文）
 *        - 都没有 → 新建（返回明文）
 *     安全约束：Token 明文仅在首次开启时返回一次，后续幂等调用不再下发明文。
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
 * @summary 开启 API Token
 *
 * @description 开启用户的 INSTANCE Token（幂等）。
 *     业务逻辑：
 *     1. 从 identity 取 user_id（强制 caller_type=user）
 *     2. 构造 AuthContext，委托 UserTokenAuthorizedService 完成权限校验
 *     3. 调用 enable_token：
 *        - 已有 ACTIVE → 幂等返回（仅脱敏值，不重复下发明文）
 *        - 有 INACTIVE → 重新激活（返回明文）
 *        - 都没有 → 新建（返回明文）
 *     安全约束：Token 明文仅在首次开启时返回一次，后续幂等调用不再下发明文。
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
 * @summary 获取会话详情
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
 * @summary 获取会话详情
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
 * @summary 获取当前用户可读的 active Graph Schema
 *
 * @description 读取 active schema_content，并按 Token 用户的语义资源 READ 权限安全裁剪。
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
 * @summary 获取当前用户可读的 active Graph Schema
 *
 * @description 读取 active schema_content，并按 Token 用户的语义资源 READ 权限安全裁剪。
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
 * @summary 查询租户最新创建的标准包实例的过期时间。
 *
 * @description ## 请求说明
 * - 该API用于查询指定租户下最新创建的标准包实例的过期时间。
 * - 如果未找到相关标准包实例，`found` 字段将返回 `False`。
 * - 支持通过 `tenantId` 参数指定查询的租户ID，默认使用调用方的租户ID。
 * - 请求方法为 POST，且需要通过 HTTPS 协议进行调用。
 * - 需要提供有效的认证信息（如 AK、BearerToken 或 APP）以完成请求。
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
 * @summary 查询租户最新创建的标准包实例的过期时间。
 *
 * @description ## 请求说明
 * - 该API用于查询指定租户下最新创建的标准包实例的过期时间。
 * - 如果未找到相关标准包实例，`found` 字段将返回 `False`。
 * - 支持通过 `tenantId` 参数指定查询的租户ID，默认使用调用方的租户ID。
 * - 请求方法为 POST，且需要通过 HTTPS 协议进行调用。
 * - 需要提供有效的认证信息（如 AK、BearerToken 或 APP）以完成请求。
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
 * @summary 查询指定知识在企业知识库中的详细信息。
 *
 * @description ## 请求说明
 * - 该 API 用于获取企业知识库下特定知识的详情。
 * - 调用此接口需要具备 `DEVELOPMENT_KB_VIEW` 功能权限。
 * - 知识详情包括但不限于知识类型、名称、描述等。
 * - 请求时必须提供 `sourceId` 参数，标识要查询的知识。
 * - `tenantId` 是可选参数，默认使用调用方的租户ID。
 * - 支持通过 `AK`、`BearerToken` 或 `APP` 方式进行鉴权。
 * - 安全约束：`tenant_id` 和 `user_id` 只能来自鉴权身份。
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
 * @summary 查询指定知识在企业知识库中的详细信息。
 *
 * @description ## 请求说明
 * - 该 API 用于获取企业知识库下特定知识的详情。
 * - 调用此接口需要具备 `DEVELOPMENT_KB_VIEW` 功能权限。
 * - 知识详情包括但不限于知识类型、名称、描述等。
 * - 请求时必须提供 `sourceId` 参数，标识要查询的知识。
 * - `tenantId` 是可选参数，默认使用调用方的租户ID。
 * - 支持通过 `AK`、`BearerToken` 或 `APP` 方式进行鉴权。
 * - 安全约束：`tenant_id` 和 `user_id` 只能来自鉴权身份。
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
 * @summary 获取定时任务执行详情
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
 * @summary 获取定时任务执行详情
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
 * @summary 获取定时任务执行记录
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
 * @summary 获取定时任务执行记录
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
 * @summary 获取定时任务理解详情
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
 * @summary 获取定时任务理解详情
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
 * @summary 获取技能详情。
 *
 * @description ## 请求说明
 * 根据 SkillCode 或 SkillName 查询技能详情，包括元数据、入参 Schema、SKILL.md 摘要等。
 * - **TenantId**：可选公共参数，由网关透传到后端 Header；不传时使用当前调用方的默认租户。
 * - **SkillCode**：与 SkillName 二选一；同时传入时 SkillCode 优先。
 * - **SkillName**：与 SkillCode 二选一；租户内不唯一时返回 `ERR.SkillHub.SkillNameAmbiguous`。
 * - **ViewMode**：可选，`draft`（草稿/编辑视角）或 `published`（已发布视角，默认）。
 * - **IncludeSkillFiles**：可选，是否返回完整技能文件树（SKILL.md / scripts / templates），默认 `false`。
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
 * @summary 获取技能详情。
 *
 * @description ## 请求说明
 * 根据 SkillCode 或 SkillName 查询技能详情，包括元数据、入参 Schema、SKILL.md 摘要等。
 * - **TenantId**：可选公共参数，由网关透传到后端 Header；不传时使用当前调用方的默认租户。
 * - **SkillCode**：与 SkillName 二选一；同时传入时 SkillCode 优先。
 * - **SkillName**：与 SkillCode 二选一；租户内不唯一时返回 `ERR.SkillHub.SkillNameAmbiguous`。
 * - **ViewMode**：可选，`draft`（草稿/编辑视角）或 `published`（已发布视角，默认）。
 * - **IncludeSkillFiles**：可选，是否返回完整技能文件树（SKILL.md / scripts / templates），默认 `false`。
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
 * @summary 查询技能执行结果。
 *
 * @description ## 请求说明
 * 通过 `RunId` 查询异步任务的当前状态与结果。
 * - **状态机**：Running（PENDING/RUNNING）→ Succeeded / Failed / Cancelled
 * - **TenantId**：可选公共参数，由网关透传；后端会校验 RunId 必须属于当前租户，否则统一返回 `ERR.SkillHub.RunNotFound`（避免泄漏存在性）。
 * - **IncludeLogs**：可选，是否返回执行日志，默认 `false`。
 * 执行成功时 `Result.Content[]` 为 MCP 风格 Content 块数组（Text / File / Image）。
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
 * @summary 查询技能执行结果。
 *
 * @description ## 请求说明
 * 通过 `RunId` 查询异步任务的当前状态与结果。
 * - **状态机**：Running（PENDING/RUNNING）→ Succeeded / Failed / Cancelled
 * - **TenantId**：可选公共参数，由网关透传；后端会校验 RunId 必须属于当前租户，否则统一返回 `ERR.SkillHub.RunNotFound`（避免泄漏存在性）。
 * - **IncludeLogs**：可选，是否返回执行日志，默认 `false`。
 * 执行成功时 `Result.Content[]` 为 MCP 风格 Content 块数组（Text / File / Image）。
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
 * @summary 查询指定资源（知识）的详细信息，支持按需返回大体积明细字段。
 *
 * @description ## 请求说明
 * - `tenant_id` 仅来自鉴权身份；调用方在 body 中传入会被忽略。
 * - 出参不暴露 `creator` / `modifier` 等审计字段；`unstructured_docs[ ].content` 默认不返回，以避免大体积响应。
 * - 通过设置 `includeDetails` 参数为 `True` 可以获取包括 `settings`, `notes`, `structuredTables`, 和 `unstructuredDocs` 在内的更多细节信息。
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
 * @summary 查询指定资源（知识）的详细信息，支持按需返回大体积明细字段。
 *
 * @description ## 请求说明
 * - `tenant_id` 仅来自鉴权身份；调用方在 body 中传入会被忽略。
 * - 出参不暴露 `creator` / `modifier` 等审计字段；`unstructured_docs[ ].content` 默认不返回，以避免大体积响应。
 * - 通过设置 `includeDetails` 参数为 `True` 可以获取包括 `settings`, `notes`, `structuredTables`, 和 `unstructuredDocs` 在内的更多细节信息。
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
 * @summary 生成用于直接上传文件到OSS的签名URL。
 *
 * @description ## 请求说明
 * 该API允许调用方根据提供的文件名等信息，获取一个可用于直接上传文件至阿里云OSS（对象存储服务）的签名URL。通过此URL，用户可以将文件直接上传至指定的OSS位置而无需经过中间服务器转发，从而提高效率和安全性。
 * - **安全约束**：`tenant_id`/`user_id`仅来自鉴权身份，即使在请求体中提供也会被忽略。
 * - **默认值**：如果未指定`expires`参数，则默认过期时间为3600秒（即1小时）。
 * - **Content-Type**：如果不提供`contentType`，系统会尝试自动推断文件类型。
 * - **归属范围**：通过`scope`参数定义数据源是属于个人还是企业知识库，默认情况下可能不需要设置。
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
 * @summary 生成用于直接上传文件到OSS的签名URL。
 *
 * @description ## 请求说明
 * 该API允许调用方根据提供的文件名等信息，获取一个可用于直接上传文件至阿里云OSS（对象存储服务）的签名URL。通过此URL，用户可以将文件直接上传至指定的OSS位置而无需经过中间服务器转发，从而提高效率和安全性。
 * - **安全约束**：`tenant_id`/`user_id`仅来自鉴权身份，即使在请求体中提供也会被忽略。
 * - **默认值**：如果未指定`expires`参数，则默认过期时间为3600秒（即1小时）。
 * - **Content-Type**：如果不提供`contentType`，系统会尝试自动推断文件类型。
 * - **归属范围**：通过`scope`参数定义数据源是属于个人还是企业知识库，默认情况下可能不需要设置。
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
 * @summary 查询用户的 Token 状态
 *
 * @description 查询用户的 INSTANCE Token 状态。
 *     业务逻辑：
 *     1. 从 identity 取 user_id（强制 caller_type=user）
 *     2. 构造 AuthContext，委托 UserTokenAuthorizedService 完成权限校验
 *     3. 查询 ACTIVE INSTANCE Token
 *     4. 存在 → 返回 enabled=True + 脱敏值 + 创建时间
 *     5. 不存在 → 返回 enabled=False
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
 * @summary 查询用户的 Token 状态
 *
 * @description 查询用户的 INSTANCE Token 状态。
 *     业务逻辑：
 *     1. 从 identity 取 user_id（强制 caller_type=user）
 *     2. 构造 AuthContext，委托 UserTokenAuthorizedService 完成权限校验
 *     3. 查询 ACTIVE INSTANCE Token
 *     4. 存在 → 返回 enabled=True + 脱敏值 + 创建时间
 *     5. 不存在 → 返回 enabled=False
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
 * @summary 查询用户详情
 *
 * @description OpenAPI 查询用户详情。
 *     业务编排：
 *     1. 按 wnUserId 或 accountId 定位用户
 *     2. 查询用户在当前租户的映射信息（状态、加入时间、最后登录）
 *     3. 查询用户在当前租户的角色列表
 *     4. 查询用户在当前租户的用户组列表
 *     5. 组装响应
 *     错误码：
 *     - ERR.User.NotFound: 用户不存在
 *     - ERR.User.NotInTenant: 用户不在当前租户下
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
 * @summary 查询用户详情
 *
 * @description OpenAPI 查询用户详情。
 *     业务编排：
 *     1. 按 wnUserId 或 accountId 定位用户
 *     2. 查询用户在当前租户的映射信息（状态、加入时间、最后登录）
 *     3. 查询用户在当前租户的角色列表
 *     4. 查询用户在当前租户的用户组列表
 *     5. 组装响应
 *     错误码：
 *     - ERR.User.NotFound: 用户不存在
 *     - ERR.User.NotInTenant: 用户不在当前租户下
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
 * @summary 查询当前登录用户的实时信用消耗、限额及剩余情况。
 *
 * @description ## 请求说明
 * - 该API用于获取当前登录用户的信用使用详情，包括信用限额、已消耗的信用额度以及剩余信用额度。
 * - 数据来源于Redis实时缓存，确保了信息的即时性。
 * - 支持通过租户ID来指定查询特定租户下的用户信用使用情况，默认情况下将使用调用方的默认租户。
 * - 请求时可选择提供`RequestId`作为请求标识符，但这不是必需的。
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
 * @summary 查询当前登录用户的实时信用消耗、限额及剩余情况。
 *
 * @description ## 请求说明
 * - 该API用于获取当前登录用户的信用使用详情，包括信用限额、已消耗的信用额度以及剩余信用额度。
 * - 数据来源于Redis实时缓存，确保了信息的即时性。
 * - 支持通过租户ID来指定查询特定租户下的用户信用使用情况，默认情况下将使用调用方的默认租户。
 * - 请求时可选择提供`RequestId`作为请求标识符，但这不是必需的。
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
 * @summary 通过OpenAPI获取鉴权用户的完整信息，包括基本信息、租户列表等。
 *
 * @description ## 请求说明
 * - 该接口用于返回当前鉴权用户的详细信息。
 * - 当租户信息失效时，将返回对应的错误信息。
 * - `tenantId`为可选参数，若未提供，则使用调用方默认的租户ID。
 * - 支持多种认证方式：AK、BearerToken和APP认证。
 * - 返回的数据中包含了用户的个人资料（如用户名、头像链接）、角色偏好设置以及所属的所有租户详情。
 * - 特别注意，如果当前登录的租户是系统租户（即`tenantId=10000`），则会在响应中明确标识出来。
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
 * @summary 通过OpenAPI获取鉴权用户的完整信息，包括基本信息、租户列表等。
 *
 * @description ## 请求说明
 * - 该接口用于返回当前鉴权用户的详细信息。
 * - 当租户信息失效时，将返回对应的错误信息。
 * - `tenantId`为可选参数，若未提供，则使用调用方默认的租户ID。
 * - 支持多种认证方式：AK、BearerToken和APP认证。
 * - 返回的数据中包含了用户的个人资料（如用户名、头像链接）、角色偏好设置以及所属的所有租户详情。
 * - 特别注意，如果当前登录的租户是系统租户（即`tenantId=10000`），则会在响应中明确标识出来。
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
 * @summary 授权用户/用户组使用数字员工
 *
 * @description 授权用户或用户组使用指定数字员工。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 请求体互斥校验：userIds / userGroupIds 二选一
 *     3. 委托 AgentAuthorizationAuthorizedService.grant_authorization 执行
 *     4. 前置校验：MANAGE 权限 + agent 存在性（由 AuthorizedService 层执行，先鉴权后暴露存在性）
 *     5. 已存在的授权记录会被更新（expire_date / permissions）
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
 * @summary 授权用户/用户组使用数字员工
 *
 * @description 授权用户或用户组使用指定数字员工。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 请求体互斥校验：userIds / userGroupIds 二选一
 *     3. 委托 AgentAuthorizationAuthorizedService.grant_authorization 执行
 *     4. 前置校验：MANAGE 权限 + agent 存在性（由 AuthorizedService 层执行，先鉴权后暴露存在性）
 *     5. 已存在的授权记录会被更新（expire_date / permissions）
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
 * @summary 用于查询或下钻查看租户的企业知识库列表。
 *
 * @description ## 请求说明
 * - 该 API 支持两种模式：当 `directoryId` 为空或为 'root' 时，返回知识库的顶层列表；当 `directoryId` 有具体值时，则进行下钻操作，返回指定目录下的子目录和资源。
 * - `tenantId` 作为公共参数，若未提供则默认使用调用方的租户 ID。
 * - 在下钻模式下（即 `directoryId` 非空），可以通过 `sourceTypes` 参数来过滤特定类型的资源。
 * - 排序字段 (`sortField`) 和排序方向 (`sortOrder`) 可以自定义，但非法值将被重置为默认设置。
 * - 搜索功能仅在获取顶层列表时有效，并且只支持模糊匹配名称或描述。
 * - 安全性方面，`tenant_id` 严格从鉴权身份中获取，不允许通过请求体传递。
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
 * @summary 用于查询或下钻查看租户的企业知识库列表。
 *
 * @description ## 请求说明
 * - 该 API 支持两种模式：当 `directoryId` 为空或为 'root' 时，返回知识库的顶层列表；当 `directoryId` 有具体值时，则进行下钻操作，返回指定目录下的子目录和资源。
 * - `tenantId` 作为公共参数，若未提供则默认使用调用方的租户 ID。
 * - 在下钻模式下（即 `directoryId` 非空），可以通过 `sourceTypes` 参数来过滤特定类型的资源。
 * - 排序字段 (`sortField`) 和排序方向 (`sortOrder`) 可以自定义，但非法值将被重置为默认设置。
 * - 搜索功能仅在获取顶层列表时有效，并且只支持模糊匹配名称或描述。
 * - 安全性方面，`tenant_id` 严格从鉴权身份中获取，不允许通过请求体传递。
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
 * @summary 查询租户全量数字员工列表
 *
 * @description 查询租户下全部数字员工列表（含停用）。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 委托 AgentAuthorizationAuthorizedService.list_agents 完成权限校验（APPLICATION_AGENT_VIEW）
 *     3. 返回租户全量数字员工的富字段（operatingObjectName / displayName / authMode / isActive）
 *     4. 系统级 Token 通过 ctx.skip_permission 自动放行
 *     与 listAuthorizedAgents 区别：本接口返回租户全量（含停用、不做授权过滤），
 *     并携带 displayName / isActive 等富字段，供管理端展示。
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
 * @summary 查询租户全量数字员工列表
 *
 * @description 查询租户下全部数字员工列表（含停用）。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 委托 AgentAuthorizationAuthorizedService.list_agents 完成权限校验（APPLICATION_AGENT_VIEW）
 *     3. 返回租户全量数字员工的富字段（operatingObjectName / displayName / authMode / isActive）
 *     4. 系统级 Token 通过 ctx.skip_permission 自动放行
 *     与 listAuthorizedAgents 区别：本接口返回租户全量（含停用、不做授权过滤），
 *     并携带 displayName / isActive 等富字段，供管理端展示。
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
 * @summary 查询调用方有指定权限的数字员工名称列表
 *
 * @description 查询当前调用方（或指定目标用户）拥有指定权限（USE/MANAGE）的数字员工名称列表。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 委托 AgentAuthorizationAuthorizedService.list_authorized_agents 执行查询
 *     3. skip_permission=True 时返回租户全量活跃 agent
 *     4. 普通用户根据授权记录 + auth_mode 过滤
 *     5. 传入 targetUserId（代查他人）时需 APPLICATION_AGENT_VIEW 门控，查询限定本租户；
 *        目标用户非本租户成员时抛 USER_NOT_IN_TENANT（不静默返回空列表）
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
 * @summary 查询调用方有指定权限的数字员工名称列表
 *
 * @description 查询当前调用方（或指定目标用户）拥有指定权限（USE/MANAGE）的数字员工名称列表。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 委托 AgentAuthorizationAuthorizedService.list_authorized_agents 执行查询
 *     3. skip_permission=True 时返回租户全量活跃 agent
 *     4. 普通用户根据授权记录 + auth_mode 过滤
 *     5. 传入 targetUserId（代查他人）时需 APPLICATION_AGENT_VIEW 门控，查询限定本租户；
 *        目标用户非本租户成员时抛 USER_NOT_IN_TENANT（不静默返回空列表）
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
 * @summary 查询数字员工已授权的用户/用户组列表
 *
 * @description 查询某数字员工已授权的用户/用户组列表。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 委托 AgentAuthorizationAuthorizedService.list_authorized_users 执行查询
 *     3. 权限校验由 AuthorizedService 层 @require_permission(APPLICATION_AGENT_VIEW) 完成
 *     4. auth_mode=ALL_USERS 时仅展示有 MANAGE 权限的记录
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
 * @summary 查询数字员工已授权的用户/用户组列表
 *
 * @description 查询某数字员工已授权的用户/用户组列表。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 委托 AgentAuthorizationAuthorizedService.list_authorized_users 执行查询
 *     3. 权限校验由 AuthorizedService 层 @require_permission(APPLICATION_AGENT_VIEW) 完成
 *     4. auth_mode=ALL_USERS 时仅展示有 MANAGE 权限的记录
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
 * @summary 枚举可用的组织同步配置
 *
 * @description 枚举当前租户下所有可用的组织同步配置。
 *     返回统一格式的 configs 列表，涵盖四种平台类型：
 *     - **wecom**：从 SsoProviderRegistry 获取活跃的企微 SSO 配置
 *     - **saml**：从 SsoProviderRegistry 获取活跃的 SAML SSO 配置，corpId 取 idpEntityId
 *     - **oauth2**：从 SsoProviderRegistry 获取活跃的 OAuth2 SSO 配置，corpId 取 clientId
 *     - **custom**：从数据库查询该租户已注册的纯自定义组织
 *     客户端根据返回的 platformType 区分处理逻辑，corpId 为后续同步接口的必传参数。
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
 * @summary 枚举可用的组织同步配置
 *
 * @description 枚举当前租户下所有可用的组织同步配置。
 *     返回统一格式的 configs 列表，涵盖四种平台类型：
 *     - **wecom**：从 SsoProviderRegistry 获取活跃的企微 SSO 配置
 *     - **saml**：从 SsoProviderRegistry 获取活跃的 SAML SSO 配置，corpId 取 idpEntityId
 *     - **oauth2**：从 SsoProviderRegistry 获取活跃的 OAuth2 SSO 配置，corpId 取 clientId
 *     - **custom**：从数据库查询该租户已注册的纯自定义组织
 *     客户端根据返回的 platformType 区分处理逻辑，corpId 为后续同步接口的必传参数。
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
 * @summary 通过OpenAPI查询并筛选账单列表，支持多种条件过滤。
 *
 * @description ## 请求说明
 * - 该接口用于查询指定条件下的账单列表。
 * - 支持按租户、用户、操作类型、状态、时间范围、业务来源等条件进行筛选。
 * - 分页返回账单数据，默认每页显示20条记录。
 * - 可选择是否过滤掉credit消耗为0的账单，默认过滤。
 * - 请求时需提供必要的认证信息（如AK、BearerToken或APP认证）。
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
 * @summary 通过OpenAPI查询并筛选账单列表，支持多种条件过滤。
 *
 * @description ## 请求说明
 * - 该接口用于查询指定条件下的账单列表。
 * - 支持按租户、用户、操作类型、状态、时间范围、业务来源等条件进行筛选。
 * - 分页返回账单数据，默认每页显示20条记录。
 * - 可选择是否过滤掉credit消耗为0的账单，默认过滤。
 * - 请求时需提供必要的认证信息（如AK、BearerToken或APP认证）。
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
 * @summary 按创建时间倒序列出当前用户的聊天会话。
 *
 * @description ## 请求说明
 * - 该 API 支持通过多种参数进行过滤和排序，包括租户 ID、分页大小、分页令牌、关键词搜索、数字员工名称以及更新时间区间。
 * - 默认情况下，结果将按照 `UpdatedAt` 字段降序排列。
 * - 如果提供了无效的 `NextToken` 或者 `PageSize` 超出了允许范围（1-100），API 将返回 400 错误。
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
 * @summary 按创建时间倒序列出当前用户的聊天会话。
 *
 * @description ## 请求说明
 * - 该 API 支持通过多种参数进行过滤和排序，包括租户 ID、分页大小、分页令牌、关键词搜索、数字员工名称以及更新时间区间。
 * - 默认情况下，结果将按照 `UpdatedAt` 字段降序排列。
 * - 如果提供了无效的 `NextToken` 或者 `PageSize` 超出了允许范围（1-100），API 将返回 400 错误。
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
 * @summary 查询租户可用于语义查询的图谱列表
 *
 * @description 列出身份租户下的已发布图谱。
 *     CLI 映射为 ``winnexo graph list``；``tenantId`` 是必传公共参数，不进入请求体。
 *     返回的 ``graphName`` 可直接用于 ``querySemanticKnowledge``。该查询与现有前台
 *     图谱列表保持一致，不做数字员工权限过滤；具体语义查询仍会校验 agent USE 权限。
 *     数据库异常直接进入统一 5xx 错误处理，不会伪装为成功空列表。
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
 * @summary 查询租户可用于语义查询的图谱列表
 *
 * @description 列出身份租户下的已发布图谱。
 *     CLI 映射为 ``winnexo graph list``；``tenantId`` 是必传公共参数，不进入请求体。
 *     返回的 ``graphName`` 可直接用于 ``querySemanticKnowledge``。该查询与现有前台
 *     图谱列表保持一致，不做数字员工权限过滤；具体语义查询仍会校验 agent USE 权限。
 *     数据库异常直接进入统一 5xx 错误处理，不会伪装为成功空列表。
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
 * @summary 查询企业知识库的分类目录树，支持按指定字段排序。
 *
 * @description ## 请求说明
 * - 该 API 用于获取企业知识库的分类列表（子目录树），需要具备知识库查看权限。
 * - 如果未提供 `directoryId` 参数，则返回企业知识库根目录下的所有分类树；如果提供了 `directoryId`，则以该目录为根返回其子目录树。
 * - 支持通过 `sortField` 和 `sortOrder` 参数对结果进行排序，默认按照创建时间降序排列。
 * - 安全约束：`tenant_id` 和 `user_id` 仅来自鉴权身份，并且调用者必须拥有 `DEVELOPMENT_KB_VIEW` 功能权限。
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
 * @summary 查询企业知识库的分类目录树，支持按指定字段排序。
 *
 * @description ## 请求说明
 * - 该 API 用于获取企业知识库的分类列表（子目录树），需要具备知识库查看权限。
 * - 如果未提供 `directoryId` 参数，则返回企业知识库根目录下的所有分类树；如果提供了 `directoryId`，则以该目录为根返回其子目录树。
 * - 支持通过 `sortField` 和 `sortOrder` 参数对结果进行排序，默认按照创建时间降序排列。
 * - 安全约束：`tenant_id` 和 `user_id` 仅来自鉴权身份，并且调用者必须拥有 `DEVELOPMENT_KB_VIEW` 功能权限。
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
 * @summary 查询当前用户的产出列表，支持按条件过滤和分页。
 *
 * @description ## 请求说明
 * - 该API用于查询当前登录用户的产出列表。
 * - `tenantId`作为公共参数，缺省时使用调用方默认租户。
 * - 支持通过`operatingObjectName`、`itemType`、`keyword`等参数进行过滤查询。
 * - 可以设置`sharedOnly`为`true`来仅展示开启分享的产出。
 * - 分页信息通过`page`（页码）和`pageSize`（每页数量）控制，默认从第1页开始，每页显示20条记录。
 * - 默认按更新时间倒序排列。
 * - 调用者在请求体中传入的`tenant_id`或`user_id`将被忽略，这些信息仅来自鉴权身份。
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
 * @summary 查询当前用户的产出列表，支持按条件过滤和分页。
 *
 * @description ## 请求说明
 * - 该API用于查询当前登录用户的产出列表。
 * - `tenantId`作为公共参数，缺省时使用调用方默认租户。
 * - 支持通过`operatingObjectName`、`itemType`、`keyword`等参数进行过滤查询。
 * - 可以设置`sharedOnly`为`true`来仅展示开启分享的产出。
 * - 分页信息通过`page`（页码）和`pageSize`（每页数量）控制，默认从第1页开始，每页显示20条记录。
 * - 默认按更新时间倒序排列。
 * - 调用者在请求体中传入的`tenant_id`或`user_id`将被忽略，这些信息仅来自鉴权身份。
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
 * @summary 查询指定数字员工资源目录下的子目录与资源。
 *
 * @description ## 请求说明
 * - 该 API 用于下钻查询"我的资源"目录下的子目录与资源。
 * - 当 `directoryId` 设置为 'root' 时，服务将自动解析并返回当前数字员工默认根目录下的内容；若提供具体的目录 ID，则返回该目录下的子目录和资源。
 * - 安全约束：`tenant_id` 和 `user_id` 只能来自鉴权身份信息，调用方在请求体中提供的这些字段将被忽略。
 * - 支持通过 `sourceTypes` 参数筛选特定类型的资源，当此参数有值时，仅返回符合类型条件的资源而不包含子目录。
 * - 排序支持按名称 (`name`)、创建时间 (`gmt_create`) 或修改时间 (`gmt_modified`) 进行升序或降序排列。
 * - 分页功能允许用户自定义每页显示的数量（最大100）及当前查看的页码。
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
 * @summary 查询指定数字员工资源目录下的子目录与资源。
 *
 * @description ## 请求说明
 * - 该 API 用于下钻查询"我的资源"目录下的子目录与资源。
 * - 当 `directoryId` 设置为 'root' 时，服务将自动解析并返回当前数字员工默认根目录下的内容；若提供具体的目录 ID，则返回该目录下的子目录和资源。
 * - 安全约束：`tenant_id` 和 `user_id` 只能来自鉴权身份信息，调用方在请求体中提供的这些字段将被忽略。
 * - 支持通过 `sourceTypes` 参数筛选特定类型的资源，当此参数有值时，仅返回符合类型条件的资源而不包含子目录。
 * - 排序支持按名称 (`name`)、创建时间 (`gmt_create`) 或修改时间 (`gmt_modified`) 进行升序或降序排列。
 * - 分页功能允许用户自定义每页显示的数量（最大100）及当前查看的页码。
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
 * @summary 查询系统内置角色列表
 *
 * @description 查询系统内置角色列表。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 委托 UserManagementAuthorizedService.list_system_roles 完成权限校验（PLATFORM_USER_VIEW）
 *     3. 按请求 Accept-Language 渲染角色名称与说明
 *     4. 返回固定的 7 个系统内置角色
 *     返回字段 roleCode 可直接用于 createUser / updateUser 的 roleCodes 参数。
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
 * @summary 查询系统内置角色列表
 *
 * @description 查询系统内置角色列表。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 委托 UserManagementAuthorizedService.list_system_roles 完成权限校验（PLATFORM_USER_VIEW）
 *     3. 按请求 Accept-Language 渲染角色名称与说明
 *     4. 返回固定的 7 个系统内置角色
 *     返回字段 roleCode 可直接用于 createUser / updateUser 的 roleCodes 参数。
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
 * @summary 获取定时任务列表
 *
 * @param request ListScheduledTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScheduledTasksResponse
 */
ListScheduledTasksResponse Client::listScheduledTasksWithOptions(const ListScheduledTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollaborationGroupId()) {
    query["collaborationGroupId"] = request.getCollaborationGroupId();
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
 * @summary 获取定时任务列表
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
 * @summary 列出当前租户可见的技能。
 *
 * @description ## 请求说明
 * 该 API 用于获取当前租户下所有可见的技能列表。支持按数字员工绑定关系、技能来源、标签、关键词等条件进行过滤，并支持分页。
 * ### 入参
 * - **TenantId**：可选，公共参数，由网关透传到后端 Header；不传时使用当前调用方所属的默认租户。
 * - **FilterType**：可选，技能筛选维度。可选值：`ALL`(全部已发布)、`BUILTIN`(内置已发布)、`CUSTOM`(自定义已发布)、`DRAFT`(草稿箱，含未发布修改的已发布技能)。默认 `ALL`。
 * - **Tags**：可选，按标签过滤，数组任一命中即匹配。
 * - **Keyword**：可选，按技能名称或描述模糊匹配。
 * - **Page**：可选，页码，最小 1，默认 1。
 * - **PageSize**：可选，每页数量，范围 1~100，默认 20。
 * - **OperatingObjectName**：可选，数字员工名称，传入时按绑定关系过滤；必须配合 `BindStatus` 使用。
 * - **BindStatus**：可选，绑定状态。可选值：`BOUND`(已绑定)、`UNBOUND`(未绑定的全局技能)。
 * ### 出参
 * 响应包含技能列表 `items`、总数 `total`、当前页 `page` 与每页数量 `pageSize`。
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
 * @summary 列出当前租户可见的技能。
 *
 * @description ## 请求说明
 * 该 API 用于获取当前租户下所有可见的技能列表。支持按数字员工绑定关系、技能来源、标签、关键词等条件进行过滤，并支持分页。
 * ### 入参
 * - **TenantId**：可选，公共参数，由网关透传到后端 Header；不传时使用当前调用方所属的默认租户。
 * - **FilterType**：可选，技能筛选维度。可选值：`ALL`(全部已发布)、`BUILTIN`(内置已发布)、`CUSTOM`(自定义已发布)、`DRAFT`(草稿箱，含未发布修改的已发布技能)。默认 `ALL`。
 * - **Tags**：可选，按标签过滤，数组任一命中即匹配。
 * - **Keyword**：可选，按技能名称或描述模糊匹配。
 * - **Page**：可选，页码，最小 1，默认 1。
 * - **PageSize**：可选，每页数量，范围 1~100，默认 20。
 * - **OperatingObjectName**：可选，数字员工名称，传入时按绑定关系过滤；必须配合 `BindStatus` 使用。
 * - **BindStatus**：可选，绑定状态。可选值：`BOUND`(已绑定)、`UNBOUND`(未绑定的全局技能)。
 * ### 出参
 * 响应包含技能列表 `items`、总数 `total`、当前页 `page` 与每页数量 `pageSize`。
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
 * @summary 按管理端口径分页查询企业知识库目录与资源。
 *
 * @description ## 请求说明
 * - 该API用于分页查询企业知识库中的目录内容和资源。
 * - 支持通过多种参数进行过滤和排序，如`directoryId`、`page`、`pageSize`、`sortField`、`sortOrder`等。
 * - `sourceTypes`参数允许用户根据资源类型进行过滤，多个类型使用逗号分隔。
 * - 当不传或传入`root`作为`directoryId`时，默认查询知识库根目录列表。
 * - 默认的排序字段为`name`，默认排序方向为升序（`asc`）。
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
 * @summary 按管理端口径分页查询企业知识库目录与资源。
 *
 * @description ## 请求说明
 * - 该API用于分页查询企业知识库中的目录内容和资源。
 * - 支持通过多种参数进行过滤和排序，如`directoryId`、`page`、`pageSize`、`sortField`、`sortOrder`等。
 * - `sourceTypes`参数允许用户根据资源类型进行过滤，多个类型使用逗号分隔。
 * - 当不传或传入`root`作为`directoryId`时，默认查询知识库根目录列表。
 * - 默认的排序字段为`name`，默认排序方向为升序（`asc`）。
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
 * @summary 查询当前 OpenAPI 用户可见知识库目录内容。
 *
 * @description ## 请求说明
 * - 本接口按企业知识库前台口径返回指定目录的子目录和 READY 资源。
 * - 用户身份与目录可见范围均来自 OpenAPI 鉴权上下文。
 * - `sourceTypes` 有值时仅返回资源；`keyword` 仅搜索当前目录层级。
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
 * @summary 查询当前 OpenAPI 用户可见知识库目录内容。
 *
 * @description ## 请求说明
 * - 本接口按企业知识库前台口径返回指定目录的子目录和 READY 资源。
 * - 用户身份与目录可见范围均来自 OpenAPI 鉴权上下文。
 * - `sourceTypes` 有值时仅返回资源；`keyword` 仅搜索当前目录层级。
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
 * @summary 查询当前 OpenAPI 用户可见的企业知识库列表。
 *
 * @description ## 请求说明
 * - 本接口按 OpenAPI 鉴权身份映射的平台用户查询其可见企业知识库。
 * - 租户和用户身份均由鉴权上下文确定，调用方不能通过业务参数扩大可见范围。
 * - `tenantId` 为可选公共参数；`keyword` 可按知识库名称或描述过滤。
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
 * @summary 查询当前 OpenAPI 用户可见的企业知识库列表。
 *
 * @description ## 请求说明
 * - 本接口按 OpenAPI 鉴权身份映射的平台用户查询其可见企业知识库。
 * - 租户和用户身份均由鉴权上下文确定，调用方不能通过业务参数扩大可见范围。
 * - `tenantId` 为可选公共参数；`keyword` 可按知识库名称或描述过滤。
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
 * @summary 分页查询租户成员列表
 *
 * @description OpenAPI 分页查询租户成员列表。
 *     业务编排：
 *     1. 解析筛选条件（roleCodes → role_ids）
 *     2. 调用 UserTenantMappingRepository.query_paged_tenant_members 分页查询
 *     3. 将结果中的 role_id 转为 roleCode 并组装响应
 *     错误码：
 *     - 非法 roleCode 参数时抛出错误
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
 * @summary 分页查询租户成员列表
 *
 * @description OpenAPI 分页查询租户成员列表。
 *     业务编排：
 *     1. 解析筛选条件（roleCodes → role_ids）
 *     2. 调用 UserTenantMappingRepository.query_paged_tenant_members 分页查询
 *     3. 将结果中的 role_id 转为 roleCode 并组装响应
 *     错误码：
 *     - 非法 roleCode 参数时抛出错误
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
 * @summary 下钻查询指定数字员工可见的知识库目录下的子目录与资源。
 *
 * @description ## 请求说明
 * - 本接口用于查询特定数字员工在指定知识库目录下的所有子目录和资源。
 * - 用户需拥有对目标数字员工的USE权限，且该数字员工必须有权访问请求中指定的目录及其子目录。
 * - 请求时需要提供数字员工名称（`operatingObjectName`）及要查询的目录ID（`directoryId`），其他参数如分页信息、排序方式等为可选项。
 * - 接口返回结果包括目录下的子目录和资源列表，并支持按页码分页显示。
 * - `sourceStatus`字段固定过滤值为`READY`状态的资源。
 * - 安全性方面，`tenant_id`与`user_id`仅从鉴权身份获取，调用方即使在请求体中传递也会被忽略。
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
 * @summary 下钻查询指定数字员工可见的知识库目录下的子目录与资源。
 *
 * @description ## 请求说明
 * - 本接口用于查询特定数字员工在指定知识库目录下的所有子目录和资源。
 * - 用户需拥有对目标数字员工的USE权限，且该数字员工必须有权访问请求中指定的目录及其子目录。
 * - 请求时需要提供数字员工名称（`operatingObjectName`）及要查询的目录ID（`directoryId`），其他参数如分页信息、排序方式等为可选项。
 * - 接口返回结果包括目录下的子目录和资源列表，并支持按页码分页显示。
 * - `sourceStatus`字段固定过滤值为`READY`状态的资源。
 * - 安全性方面，`tenant_id`与`user_id`仅从鉴权身份获取，调用方即使在请求体中传递也会被忽略。
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
 * @summary 查询数字员工可访问的企业知识库顶层目录。
 *
 * @description ## 请求说明
 * - 该API用于获取指定数字员工（运营对象）在企业内可见的知识库顶层目录列表。
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
 * @summary 查询数字员工可访问的企业知识库顶层目录。
 *
 * @description ## 请求说明
 * - 该API用于获取指定数字员工（运营对象）在企业内可见的知识库顶层目录列表。
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
 * @summary 在企业知识库目录间移动指定资源，需具备管理权限。
 *
 * @description ## 请求说明
 * - **鉴权流程**：
 *   1. 基础鉴权由根 router 统一完成（`request.state.openapi_identity`）。
 *   2. 本 handler 校验 `DEVELOPMENT_KB_MANAGE` 功能权限。
 * - **操作步骤**：
 *   1. 检查源目录与目标目录不能相同。
 *   2. 确认目标目录存在。
 *   3. 验证待移动的资源确实位于源目录中。
 *   4. 更新资源的目录绑定关系。
 *   5. 尽力更新 `source.settings["knowledge_id"]` 为目标知识库 ID。
 *   6. 尽力通知 DocumentAgent 同步 `knowledge_id` 和 `update_time`。
 * - **安全约束**：
 *   - `tenant_id` 和 `user_id` 必须来自鉴权身份。
 *   - 调用者需要拥有 KB 管理权限。
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
 * @summary 在企业知识库目录间移动指定资源，需具备管理权限。
 *
 * @description ## 请求说明
 * - **鉴权流程**：
 *   1. 基础鉴权由根 router 统一完成（`request.state.openapi_identity`）。
 *   2. 本 handler 校验 `DEVELOPMENT_KB_MANAGE` 功能权限。
 * - **操作步骤**：
 *   1. 检查源目录与目标目录不能相同。
 *   2. 确认目标目录存在。
 *   3. 验证待移动的资源确实位于源目录中。
 *   4. 更新资源的目录绑定关系。
 *   5. 尽力更新 `source.settings["knowledge_id"]` 为目标知识库 ID。
 *   6. 尽力通知 DocumentAgent 同步 `knowledge_id` 和 `update_time`。
 * - **安全约束**：
 *   - `tenant_id` 和 `user_id` 必须来自鉴权身份。
 *   - 调用者需要拥有 KB 管理权限。
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
 * @summary 在用户的个人目录之间移动指定资源。
 *
 * @description ## 请求说明
 * - **源目录与目标目录不能相同**，否则将返回 `ERR.Robject.UserDirectory.InvalidOperation` 错误。
 * - **目标目录必须存在**，如果不存在则会返回 `ERR.Robject.UserDirectory.DirectoryNotFound` 错误。
 * - **待移动的资源必须存在于源目录中**，若不在源目录中，则会收到 `ERR.Robject.UserDirectory.ResourceNotInDirectory` 错误。
 * - 成功移动后，系统会尝试通知 DocumentAgent 更新资源的新路径 (`source_path`)，但此步骤为尽力而为（best-effort），即使失败也不会影响整体操作的成功状态，仅记录错误日志。
 * - 安全性方面，`tenant_id` 的值只能来源于鉴权身份信息。
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
 * @summary 在用户的个人目录之间移动指定资源。
 *
 * @description ## 请求说明
 * - **源目录与目标目录不能相同**，否则将返回 `ERR.Robject.UserDirectory.InvalidOperation` 错误。
 * - **目标目录必须存在**，如果不存在则会返回 `ERR.Robject.UserDirectory.DirectoryNotFound` 错误。
 * - **待移动的资源必须存在于源目录中**，若不在源目录中，则会收到 `ERR.Robject.UserDirectory.ResourceNotInDirectory` 错误。
 * - 成功移动后，系统会尝试通知 DocumentAgent 更新资源的新路径 (`source_path`)，但此步骤为尽力而为（best-effort），即使失败也不会影响整体操作的成功状态，仅记录错误日志。
 * - 安全性方面，`tenant_id` 的值只能来源于鉴权身份信息。
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
 * @summary 预览指定企业知识库下的知识内容
 *
 * @description ## 请求说明
 * - 该接口用于预览企业知识库下指定知识的内容。
 * - 需要具备`DEVELOPMENT_KB_VIEW`功能权限才能调用此API。
 * - `sourceId`是必需参数，用来标识要预览的知识条目。
 * - 可选参数`tenantId`允许指定租户ID；若未提供，则使用调用方默认的租户ID。
 * - 支持多种类型的预览，包括但不限于图片、音频、视频及文本等。
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
 * @summary 预览指定企业知识库下的知识内容
 *
 * @description ## 请求说明
 * - 该接口用于预览企业知识库下指定知识的内容。
 * - 需要具备`DEVELOPMENT_KB_VIEW`功能权限才能调用此API。
 * - `sourceId`是必需参数，用来标识要预览的知识条目。
 * - 可选参数`tenantId`允许指定租户ID；若未提供，则使用调用方默认的租户ID。
 * - 支持多种类型的预览，包括但不限于图片、音频、视频及文本等。
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
 * @summary 允许用户预览其个人目录下的指定知识内容。
 *
 * @description ## 请求说明
 * - 该接口仅允许用户预览属于自己的个人目录下的资源。
 * - 鉴权流程包括基础鉴权和数据源归属校验，确保请求者只能访问其个人目录中的知识。
 * - 请求时需提供知识的唯一标识 `sourceId`，系统将根据此ID及用户的租户信息查询并返回相应的预览信息。
 * - 支持多种类型的预览，如图片、音频、视频等，并根据不同类型返回对应的预览URL或直接的内容展示。
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
 * @summary 允许用户预览其个人目录下的指定知识内容。
 *
 * @description ## 请求说明
 * - 该接口仅允许用户预览属于自己的个人目录下的资源。
 * - 鉴权流程包括基础鉴权和数据源归属校验，确保请求者只能访问其个人目录中的知识。
 * - 请求时需提供知识的唯一标识 `sourceId`，系统将根据此ID及用户的租户信息查询并返回相应的预览信息。
 * - 支持多种类型的预览，如图片、音频、视频等，并根据不同类型返回对应的预览URL或直接的内容展示。
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
 * @summary 通过运营对象名称分页查询主对象数据，支持过滤和搜索。
 *
 * @description ## 请求说明
 * - 该API用于根据给定的运营对象名称（如 `customer_1`）分页查询相关的主对象数据。
 * - 支持通过关键字进行搜索，并且可以设置是否仅返回被标记为关注的对象。
 * - 可以使用复杂的过滤条件来进一步筛选结果，包括但不限于等于、不等于、大于、小于等逻辑操作符。
 * - 如果没有配置主对象类型，则会返回一个空的结果集。
 * - 请求中包含的数据将经过鉴权与过滤处理，确保安全性和准确性。
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
 * @summary 通过运营对象名称分页查询主对象数据，支持过滤和搜索。
 *
 * @description ## 请求说明
 * - 该API用于根据给定的运营对象名称（如 `customer_1`）分页查询相关的主对象数据。
 * - 支持通过关键字进行搜索，并且可以设置是否仅返回被标记为关注的对象。
 * - 可以使用复杂的过滤条件来进一步筛选结果，包括但不限于等于、不等于、大于、小于等逻辑操作符。
 * - 如果没有配置主对象类型，则会返回一个空的结果集。
 * - 请求中包含的数据将经过鉴权与过滤处理，确保安全性和准确性。
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
 * @summary 查询与用户问题相关的语义知识
 *
 * @description 仅开放 smart-query 的 schema_knowledge 语义召回能力。
 *     CLI 映射为 ``winnexo semantic query``。``tenantId`` 由公共参数传入，``userId``
 *     仅从 Token 身份读取，禁止请求体覆盖。服务会校验 ``graphName + agentName`` 归属、
 *     active graph、数字员工启用状态及当前用户 USE 权限；跨图同名 agent 会失败关闭，
 *     随后固定 ``outputs=[schema_knowledge]``。
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
 * @summary 查询与用户问题相关的语义知识
 *
 * @description 仅开放 smart-query 的 schema_knowledge 语义召回能力。
 *     CLI 映射为 ``winnexo semantic query``。``tenantId`` 由公共参数传入，``userId``
 *     仅从 Token 身份读取，禁止请求体覆盖。服务会校验 ``graphName + agentName`` 归属、
 *     active graph、数字员工启用状态及当前用户 USE 权限；跨图同名 agent 会失败关闭，
 *     随后固定 ``outputs=[schema_knowledge]``。
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
 * @summary 查询组织同步结果
 *
 * @description 根据 taskId 查询组织同步任务的执行状态和结果。
 *     任务状态流转：PENDING → RUNNING → COMPLETED / FAILED / TIMEOUT / CANCELED
 *     建议客户端轮询间隔：3-5 秒。
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
 * @summary 查询组织同步结果
 *
 * @description 根据 taskId 查询组织同步任务的执行状态和结果。
 *     任务状态流转：PENDING → RUNNING → COMPLETED / FAILED / TIMEOUT / CANCELED
 *     建议客户端轮询间隔：3-5 秒。
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
 * @summary 从租户移除用户
 *
 * @description OpenAPI 从租户移除用户。
 *     业务编排：
 *     1. 从 identity 获取 tenant_id
 *     2. 调用 delete_user_from_tenant（内部含最后超管保护）
 *     3. 返回成功
 *     该操作会：
 *     - 移除用户在租户下的所有角色关联
 *     - 移除用户在租户下的所有用户组关联
 *     - 撤销用户在租户下的全部数字员工使用授权
 *     - 删除用户-租户映射
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
 * @summary 从租户移除用户
 *
 * @description OpenAPI 从租户移除用户。
 *     业务编排：
 *     1. 从 identity 获取 tenant_id
 *     2. 调用 delete_user_from_tenant（内部含最后超管保护）
 *     3. 返回成功
 *     该操作会：
 *     - 移除用户在租户下的所有角色关联
 *     - 移除用户在租户下的所有用户组关联
 *     - 撤销用户在租户下的全部数字员工使用授权
 *     - 删除用户-租户映射
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
 * @summary 用于更改指定企业知识库内数据源的名称。
 *
 * @description ## 请求说明
 * - 该接口允许具有相应权限的用户修改企业知识库中的特定数据源名称。
 * - 需要提供待修改的数据源ID(``sourceId``)及新的名称(``newName``)。
 * - 修改操作仅更新数据源的名字字段，不会触发其他处理流程。
 * - 成功执行后，系统会发布``SOURCE_CHANGED``事件以供前端刷新显示，并尝试通知DocumentAgent同步最新的source_name信息，但此步骤失败不会影响主流程的完成状态。
 * - 如果提供的``sourceId``不存在，则返回错误码``ERR.Robject.Source.NotFound``。
 * - 此API调用需具备``DEVELOPMENT_KB_MANAGE``功能权限。
 * - 支持通过AK、BearerToken或APP方式进行身份验证。
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
 * @summary 用于更改指定企业知识库内数据源的名称。
 *
 * @description ## 请求说明
 * - 该接口允许具有相应权限的用户修改企业知识库中的特定数据源名称。
 * - 需要提供待修改的数据源ID(``sourceId``)及新的名称(``newName``)。
 * - 修改操作仅更新数据源的名字字段，不会触发其他处理流程。
 * - 成功执行后，系统会发布``SOURCE_CHANGED``事件以供前端刷新显示，并尝试通知DocumentAgent同步最新的source_name信息，但此步骤失败不会影响主流程的完成状态。
 * - 如果提供的``sourceId``不存在，则返回错误码``ERR.Robject.Source.NotFound``。
 * - 此API调用需具备``DEVELOPMENT_KB_MANAGE``功能权限。
 * - 支持通过AK、BearerToken或APP方式进行身份验证。
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
 * @summary 用于更改指定数据源的名称，支持轻量级操作。
 *
 * @description ## 请求说明
 * - 该 API 仅更新数据源的 `name` 字段，不会触发 `process_source`。
 * - 成功后会发布 `SOURCE_CHANGED` 事件供前端刷新显示。
 * - 将尽力通知 DocumentAgent 同步新的 `source_name`，即使同步失败也不会阻断主流程。
 * - 如果指定的数据源不存在，则抛出 `ERR.Robject.Source.NotFound` 错误，并由全局中间件统一转换为 POP 错误码。
 * - 安全约束：`tenant_id` 和 `user_id` 必须来自鉴权身份。
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
 * @summary 用于更改指定数据源的名称，支持轻量级操作。
 *
 * @description ## 请求说明
 * - 该 API 仅更新数据源的 `name` 字段，不会触发 `process_source`。
 * - 成功后会发布 `SOURCE_CHANGED` 事件供前端刷新显示。
 * - 将尽力通知 DocumentAgent 同步新的 `source_name`，即使同步失败也不会阻断主流程。
 * - 如果指定的数据源不存在，则抛出 `ERR.Robject.Source.NotFound` 错误，并由全局中间件统一转换为 POP 错误码。
 * - 安全约束：`tenant_id` 和 `user_id` 必须来自鉴权身份。
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
 * @summary 重新解析当前租户内的指定数据源。
 *
 * @description ## 请求说明
 * 该 API 用于重新解析指定的数据源，支持同步或异步执行。请求时需提供数据源 ID，并可选择是否同步等待解析完成，默认为异步入队处理。此外，可以通过 `tenantId` 参数指定租户ID，但此参数非必填。
 * - **forceSync**：若设置为 `true`，则会同步等待重新解析操作完成；默认值为 `false`，表示以异步方式处理请求。
 * - 当服务返回 `None` 时，将被转换成 `SourceNotFound` 异常；其他异常情况将由 OpenAPI 的全局异常链进行处理。
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
 * @summary 重新解析当前租户内的指定数据源。
 *
 * @description ## 请求说明
 * 该 API 用于重新解析指定的数据源，支持同步或异步执行。请求时需提供数据源 ID，并可选择是否同步等待解析完成，默认为异步入队处理。此外，可以通过 `tenantId` 参数指定租户ID，但此参数非必填。
 * - **forceSync**：若设置为 `true`，则会同步等待重新解析操作完成；默认值为 `false`，表示以异步方式处理请求。
 * - 当服务返回 `None` 时，将被转换成 `SourceNotFound` 异常；其他异常情况将由 OpenAPI 的全局异常链进行处理。
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
 * @summary 用于替换指定的企业知识库中的FILE资源并触发重新解析。
 *
 * @description ## 请求说明
 * 该API允许用户更新企业自建知识库中特定的FILE类型的数据源，并通过提供新的文件路径和公开访问URL来触发系统对该数据源的重新解析。支持同步或异步模式下的操作执行，其中同步模式下客户端将等待直到解析过程完成。
 * - **forceSync** 参数控制是否采用同步方式处理请求，默认为 `false`，即以异步方式进行。
 * - 当不提供 **fileName** 或其值为空时，新上传的文件将保留原有的文件名。
 * - 必须确保提供的 **filePath** 和 **filePublicUrl** 是有效的且指向同一个文件实体。
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
 * @summary 用于替换指定的企业知识库中的FILE资源并触发重新解析。
 *
 * @description ## 请求说明
 * 该API允许用户更新企业自建知识库中特定的FILE类型的数据源，并通过提供新的文件路径和公开访问URL来触发系统对该数据源的重新解析。支持同步或异步模式下的操作执行，其中同步模式下客户端将等待直到解析过程完成。
 * - **forceSync** 参数控制是否采用同步方式处理请求，默认为 `false`，即以异步方式进行。
 * - 当不提供 **fileName** 或其值为空时，新上传的文件将保留原有的文件名。
 * - 必须确保提供的 **filePath** 和 **filePublicUrl** 是有效的且指向同一个文件实体。
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
 * @summary 用于全量替换指定数据源下的对象绑定信息。
 *
 * @description ## 请求说明
 * 该 API 用于全量替换特定数据源的对象绑定（先删除现有绑定，再插入新的绑定）。如果传入空列表，则表示清空所有绑定。
 * - **安全约束**：`tenant_id` 和 `user_id` 必须来自鉴权身份。
 * - **错误处理**：若指定的数据源不存在，将抛出 `ERR.Robject.InvalidParameter` 错误，并由全局中间件转换为 POP 错误码。
 * - **同步通知**：替换成功后会尽力同步通知 DocumentAgent 更新 `semantics.object_bindings`，但失败仅记录日志，不会阻断主流程。
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
 * @summary 用于全量替换指定数据源下的对象绑定信息。
 *
 * @description ## 请求说明
 * 该 API 用于全量替换特定数据源的对象绑定（先删除现有绑定，再插入新的绑定）。如果传入空列表，则表示清空所有绑定。
 * - **安全约束**：`tenant_id` 和 `user_id` 必须来自鉴权身份。
 * - **错误处理**：若指定的数据源不存在，将抛出 `ERR.Robject.InvalidParameter` 错误，并由全局中间件转换为 POP 错误码。
 * - **同步通知**：替换成功后会尽力同步通知 DocumentAgent 更新 `semantics.object_bindings`，但失败仅记录日志，不会阻断主流程。
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
 * @summary 允许用户替换其创建的个人文件资源，并触发系统重新解析该文件。
 *
 * @description ## 请求说明
 * - 此 API 用于替换当前平台用户创建的个人 FILE 资源，并触发系统对该文件的重新解析。
 * - `tenant_id`、操作人和创建者约束只读取鉴权身份。缺少平台用户时请求将被拒绝，以防止绕过所有权校验。
 * - 如果服务端返回 `None`，则会被转换为 `NotFound` 异常；其他异常由 OpenAPI 全局异常链处理。
 * - 该接口支持同步或异步等待重新解析完成，默认为异步入队（通过设置 `forceSync` 参数控制）。
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
 * @summary 允许用户替换其创建的个人文件资源，并触发系统重新解析该文件。
 *
 * @description ## 请求说明
 * - 此 API 用于替换当前平台用户创建的个人 FILE 资源，并触发系统对该文件的重新解析。
 * - `tenant_id`、操作人和创建者约束只读取鉴权身份。缺少平台用户时请求将被拒绝，以防止绕过所有权校验。
 * - 如果服务端返回 `None`，则会被转换为 `NotFound` 异常；其他异常由 OpenAPI 全局异常链处理。
 * - 该接口支持同步或异步等待重新解析完成，默认为异步入队（通过设置 `forceSync` 参数控制）。
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
 * @summary 重置用户密码
 *
 * @description OpenAPI 重置用户密码。
 *     业务编排：
 *     1. 调用 UserManagementService.reset_member_password 传入 password_encrypted（必填）
 *        → service 内部完成 RSA 解密 + 复杂度校验 + bcrypt hash + 写入
 *     2. 返回重置结果
 *     错误码：
 *     - ERR.User.NotFound: 用户不存在
 *     - ERR.User.NotInTenant: 用户不在当前租户下
 *     - ERR.User.WinnexoPasswordRequired: 用户无密码凭证（非 WINNEXO 类型）
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
 * @summary 重置用户密码
 *
 * @description OpenAPI 重置用户密码。
 *     业务编排：
 *     1. 调用 UserManagementService.reset_member_password 传入 password_encrypted（必填）
 *        → service 内部完成 RSA 解密 + 复杂度校验 + bcrypt hash + 写入
 *     2. 返回重置结果
 *     错误码：
 *     - ERR.User.NotFound: 用户不存在
 *     - ERR.User.NotInTenant: 用户不在当前租户下
 *     - ERR.User.WinnexoPasswordRequired: 用户无密码凭证（非 WINNEXO 类型）
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
 * @summary 重置 API Token
 *
 * @description 重置用户的 INSTANCE Token。
 *     业务逻辑：
 *     1. 从 identity 取 user_id（强制 caller_type=user）
 *     2. 构造 AuthContext，委托 UserTokenAuthorizedService 完成权限校验
 *     3. 调用 reset_token：
 *        - 旧 ACTIVE Token → RESET（永久失效）
 *        - 生成新 ACTIVE Token
 *     4. 返回新 Token 明文 + 脱敏值
 *     注意：重置后旧 Token 永久失效且不可恢复。新 Token 明文仅在本次响应中返回。
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
 * @summary 重置 API Token
 *
 * @description 重置用户的 INSTANCE Token。
 *     业务逻辑：
 *     1. 从 identity 取 user_id（强制 caller_type=user）
 *     2. 构造 AuthContext，委托 UserTokenAuthorizedService 完成权限校验
 *     3. 调用 reset_token：
 *        - 旧 ACTIVE Token → RESET（永久失效）
 *        - 生成新 ACTIVE Token
 *     4. 返回新 Token 明文 + 脱敏值
 *     注意：重置后旧 Token 永久失效且不可恢复。新 Token 明文仅在本次响应中返回。
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
 * @summary 批量重试指定目录及其子目录下的所有失败数据源。
 *
 * @description ## 请求说明
 * 该API用于获取并重试指定用户个人目录（包括其所有子目录）中状态为FAILED的数据源。请求将立即返回，实际的重试任务将在后台异步执行。请注意，只有当前登录用户有权访问且属于其创建的资源才能被重试。
 * ### 安全与权限
 * - 此操作需要适当的RAM权限。
 * - 只能对当前用户所属租户内的资源进行操作。
 * - 确保`tenantId`和`userId`来自经过验证的身份信息。
 * ### 注意事项
 * - `directoryId`是必需参数，指定了要检查和重试失败数据源的目标目录。
 * - 如果没有提供`tenantId`，则默认使用调用方的租户ID。
 * - API支持多种认证方式，包括AK、BearerToken以及APP认证。
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
 * @summary 批量重试指定目录及其子目录下的所有失败数据源。
 *
 * @description ## 请求说明
 * 该API用于获取并重试指定用户个人目录（包括其所有子目录）中状态为FAILED的数据源。请求将立即返回，实际的重试任务将在后台异步执行。请注意，只有当前登录用户有权访问且属于其创建的资源才能被重试。
 * ### 安全与权限
 * - 此操作需要适当的RAM权限。
 * - 只能对当前用户所属租户内的资源进行操作。
 * - 确保`tenantId`和`userId`来自经过验证的身份信息。
 * ### 注意事项
 * - `directoryId`是必需参数，指定了要检查和重试失败数据源的目标目录。
 * - 如果没有提供`tenantId`，则默认使用调用方的租户ID。
 * - API支持多种认证方式，包括AK、BearerToken以及APP认证。
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
 * @summary 批量重试指定目录下所有失败状态的数据源
 *
 * @description ## 请求说明
 * 该API用于获取并重试指定企业知识库目录（包括其子目录）下的所有处于FAILED状态的数据源。请求将立即返回，实际的重试操作将在后台异步执行。
 * - **鉴权**：除了基础鉴权外，还需具备`DEVELOPMENT_KB_MANAGE`权限。
 * - **安全约束**：仅允许具有相应租户和用户身份的调用者访问，并且需要KB管理权限；管理员可以对任何用户的失败资源发起重试。
 * - **参数**：
 *   - `directoryId` (必填)：指定要检查和重试失败数据源的企业知识库目录ID。
 *   - `tenantId` (可选)：指定租户ID，默认使用调用方的默认租户。
 * - **响应**：成功时返回已入队等待重试的数据源数量及详情等信息。
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
 * @summary 批量重试指定目录下所有失败状态的数据源
 *
 * @description ## 请求说明
 * 该API用于获取并重试指定企业知识库目录（包括其子目录）下的所有处于FAILED状态的数据源。请求将立即返回，实际的重试操作将在后台异步执行。
 * - **鉴权**：除了基础鉴权外，还需具备`DEVELOPMENT_KB_MANAGE`权限。
 * - **安全约束**：仅允许具有相应租户和用户身份的调用者访问，并且需要KB管理权限；管理员可以对任何用户的失败资源发起重试。
 * - **参数**：
 *   - `directoryId` (必填)：指定要检查和重试失败数据源的企业知识库目录ID。
 *   - `tenantId` (可选)：指定租户ID，默认使用调用方的默认租户。
 * - **响应**：成功时返回已入队等待重试的数据源数量及详情等信息。
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
 * @summary 撤销用户/用户组的数字员工使用权限
 *
 * @description 撤销用户或用户组对指定数字员工的使用权限。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 请求体互斥校验：userIds / userGroupIds 二选一
 *     3. 委托 AgentAuthorizationAuthorizedService.revoke_authorization 执行
 *     4. 前置校验：MANAGE 权限 + agent 存在性（由 AuthorizedService 层执行，先鉴权后暴露存在性）
 *     5. 撤销用户直接授权后，用户可能仍通过用户组获得授权
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
 * @summary 撤销用户/用户组的数字员工使用权限
 *
 * @description 撤销用户或用户组对指定数字员工的使用权限。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 请求体互斥校验：userIds / userGroupIds 二选一
 *     3. 委托 AgentAuthorizationAuthorizedService.revoke_authorization 执行
 *     4. 前置校验：MANAGE 权限 + agent 存在性（由 AuthorizedService 层执行，先鉴权后暴露存在性）
 *     5. 撤销用户直接授权后，用户可能仍通过用户组获得授权
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
 * @summary 异步触发技能执行，立即返回 RunId。
 *
 * @description ## 请求说明
 * 本接口仅支持异步模式：提交后立即返回 `RunId` 和 `Status=Running`，客户端通过 `GetSkillRun` 轮询最终结果。
 * - **TenantId**：可选公共参数，由网关透传到后端 Header。
 * - **SkillCode** / **SkillName**：二选一；SkillCode 优先；SkillName 不唯一时返回 `ERR.SkillHub.SkillNameAmbiguous`。
 * - **Arguments**：必填，技能入参对象，结构由 `GetSkill` 返回的 inputConfig 描述。
 * - **ClientToken**：可选幂等键；当前版本仅记录到任务元数据，不做强幂等去重。
 * 注意：同步模式（Async=false）、Stream、CallbackUrl 一期不支持，将在后续版本提供。
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
 * @summary 异步触发技能执行，立即返回 RunId。
 *
 * @description ## 请求说明
 * 本接口仅支持异步模式：提交后立即返回 `RunId` 和 `Status=Running`，客户端通过 `GetSkillRun` 轮询最终结果。
 * - **TenantId**：可选公共参数，由网关透传到后端 Header。
 * - **SkillCode** / **SkillName**：二选一；SkillCode 优先；SkillName 不唯一时返回 `ERR.SkillHub.SkillNameAmbiguous`。
 * - **Arguments**：必填，技能入参对象，结构由 `GetSkill` 返回的 inputConfig 描述。
 * - **ClientToken**：可选幂等键；当前版本仅记录到任务元数据，不做强幂等去重。
 * 注意：同步模式（Async=false）、Stream、CallbackUrl 一期不支持，将在后续版本提供。
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
 * @summary 将产出明细批量保存为个人资源，支持链接或复制模式。
 *
 * @description ## 请求说明
 * - 该API用于将一批产出明细保存为用户的个人资源。
 * - 支持两种保存方式：`link`（链接）和`copy`（复制）。选择`link`时，编辑产出会同步到资源；选择`copy`则创建快照，不限次数。
 * - `tenant_id` 和 `user_id` 仅来自鉴权身份。
 * - 如果批内 `operating_object` 不一致且未传 `directoryId`，则整批请求前置失败。
 * - 单条记录的处理结果不会影响其他记录的结果，单条失败信息会在响应中返回。
 * - 批量操作最多支持50条记录。
 * - 整批前置失败的情况由全局异常中间件统一返回POP兼容错误格式。
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
 * @summary 将产出明细批量保存为个人资源，支持链接或复制模式。
 *
 * @description ## 请求说明
 * - 该API用于将一批产出明细保存为用户的个人资源。
 * - 支持两种保存方式：`link`（链接）和`copy`（复制）。选择`link`时，编辑产出会同步到资源；选择`copy`则创建快照，不限次数。
 * - `tenant_id` 和 `user_id` 仅来自鉴权身份。
 * - 如果批内 `operating_object` 不一致且未传 `directoryId`，则整批请求前置失败。
 * - 单条记录的处理结果不会影响其他记录的结果，单条失败信息会在响应中返回。
 * - 批量操作最多支持50条记录。
 * - 整批前置失败的情况由全局异常中间件统一返回POP兼容错误格式。
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
 * @summary 异步发送会话消息
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
 * @summary 异步发送会话消息
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
 * @summary 发送消息
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
 * @summary 发送消息
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
 * @summary 发送消息
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
 * @summary 停止对话生成
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
 * @summary 停止对话生成
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
 * @summary 订阅会话消息流
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
 * @summary 订阅会话消息流
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
 * @summary 订阅会话消息流
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
 * @summary 推送组织架构同步
 *
 * @description 接收客户端推送的部门树和成员关系，创建异步同步任务。
 *     处理流程：
 *     1. 校验 platformType（仅允许 saml / oauth2 / custom）
 *     2. 校验数据量限制（departments + members <= 50000）
 *     3. 校验 syncMembers 与 platformType 的兼容性
 *     4. SAML/OAuth2 场景：解析或自动推导 ssoSettingsId
 *     5. Custom 场景：校验 corpId 已通过 createCustomOrg 注册
 *     6. 委托 OrgSyncAuthorizedService 创建任务（内含权限校验）
 *     7. 返回 taskId 供轮询
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
 * @summary 推送组织架构同步
 *
 * @description 接收客户端推送的部门树和成员关系，创建异步同步任务。
 *     处理流程：
 *     1. 校验 platformType（仅允许 saml / oauth2 / custom）
 *     2. 校验数据量限制（departments + members <= 50000）
 *     3. 校验 syncMembers 与 platformType 的兼容性
 *     4. SAML/OAuth2 场景：解析或自动推导 ssoSettingsId
 *     5. Custom 场景：校验 corpId 已通过 createCustomOrg 注册
 *     6. 委托 OrgSyncAuthorizedService 创建任务（内含权限校验）
 *     7. 返回 taskId 供轮询
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
 * @summary 通过此API可以对指定的主对象执行关注或取消关注操作。
 *
 * @description ## 请求说明
 * - **Precheck**:
 *   1. 添加关注时：系统会检查是否已对该主对象进行了关注以防止重复，并且会验证该主对象是否存在。
 *   2. 取消关注时：这是一个幂等操作，无论用户之前是否已经关注了该对象，都会返回 `success=true`。
 * - **安全性**：支持AK、BearerToken和APP三种认证方式。
 * - **请求频率限制**：每秒最多可发送100次请求。
 * - **响应日志**：开启响应日志记录功能。
 * - **租户相关性**：此API与特定租户相关联，默认使用调用方的租户ID。
 * - **操作类型**：属于写入型操作。
 * - **后端服务**：请求将被转发至内部服务进行处理，超时时间为3秒。
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
 * @summary 通过此API可以对指定的主对象执行关注或取消关注操作。
 *
 * @description ## 请求说明
 * - **Precheck**:
 *   1. 添加关注时：系统会检查是否已对该主对象进行了关注以防止重复，并且会验证该主对象是否存在。
 *   2. 取消关注时：这是一个幂等操作，无论用户之前是否已经关注了该对象，都会返回 `success=true`。
 * - **安全性**：支持AK、BearerToken和APP三种认证方式。
 * - **请求频率限制**：每秒最多可发送100次请求。
 * - **响应日志**：开启响应日志记录功能。
 * - **租户相关性**：此API与特定租户相关联，默认使用调用方的租户ID。
 * - **操作类型**：属于写入型操作。
 * - **后端服务**：请求将被转发至内部服务进行处理，超时时间为3秒。
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
 * @summary 更新数字员工使用权限授权模式
 *
 * @description 切换数字员工的使用权限授权模式。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 委托 AgentAuthorizationAuthorizedService.update_auth_mode 执行
 *     3. 前置校验：MANAGE 权限 + agent 存在性（由 AuthorizedService 层执行，先鉴权后暴露存在性）
 *     4. SPECIFIED_USERS：需显式授权才能使用
 *     5. ALL_USERS：所有用户无需授权即可使用（管理权限不受影响）
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
 * @summary 更新数字员工使用权限授权模式
 *
 * @description 切换数字员工的使用权限授权模式。
 *     业务逻辑：
 *     1. 从 identity 构造 AuthContext
 *     2. 委托 AgentAuthorizationAuthorizedService.update_auth_mode 执行
 *     3. 前置校验：MANAGE 权限 + agent 存在性（由 AuthorizedService 层执行，先鉴权后暴露存在性）
 *     4. SPECIFIED_USERS：需显式授权才能使用
 *     5. ALL_USERS：所有用户无需授权即可使用（管理权限不受影响）
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
 * @summary 更新会话
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
 * @summary 更新会话
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
 * @summary 用于更新用户的个人目录基础信息。
 *
 * @description ## 请求说明
 * 该 API 用于更新指定用户的个人目录信息，包括名称、描述、父目录等。请求时需确保提供的 `directoryId` 对应的目录存在且属于当前用户。此外，如果更改了目录的 `name` 或 `path`，系统将自动递归更新所有子目录的路径以保持一致性。特别注意，在调整父目录时，必须保证新父目录的有效性（即非自身或不会导致循环引用）。
 * - **安全约束**：`tenant_id` 和 `user_id` 必须来自于鉴权身份。
 * - **权限要求**：执行此操作需要相应的 RAM 权限。
 * - **输入参数**：
 *   - `directoryId`：必填，表示要更新的目录唯一标识。
 *   - `name`：选填，设置新的目录名称。
 *   - `description`：选填，提供新的目录描述。
 *   - `parentId`：选填，指定新的父目录ID。
 *   - `path`：选填，当传入时会级联更新当前及所有子目录的路径。
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
 * @summary 用于更新用户的个人目录基础信息。
 *
 * @description ## 请求说明
 * 该 API 用于更新指定用户的个人目录信息，包括名称、描述、父目录等。请求时需确保提供的 `directoryId` 对应的目录存在且属于当前用户。此外，如果更改了目录的 `name` 或 `path`，系统将自动递归更新所有子目录的路径以保持一致性。特别注意，在调整父目录时，必须保证新父目录的有效性（即非自身或不会导致循环引用）。
 * - **安全约束**：`tenant_id` 和 `user_id` 必须来自于鉴权身份。
 * - **权限要求**：执行此操作需要相应的 RAM 权限。
 * - **输入参数**：
 *   - `directoryId`：必填，表示要更新的目录唯一标识。
 *   - `name`：选填，设置新的目录名称。
 *   - `description`：选填，提供新的目录描述。
 *   - `parentId`：选填，指定新的父目录ID。
 *   - `path`：选填，当传入时会级联更新当前及所有子目录的路径。
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
 * @summary 更新指定的企业知识库分类信息，包括名称、描述及父目录。
 *
 * @description ## 请求说明
 * - 该接口用于修改企业知识库中的某个分类。
 * - 需要具有`DEVELOPMENT_KB_MANAGE`功能权限才能调用此API。
 * - `tenantId`参数为可选，若未提供，则默认使用调用者的租户ID。
 * - 必须提供待修改的`directoryId`，而`name`、`description`和`parentDirectoryId`均为可选项，不提供则表示这些字段保持不变。
 * - 当指定了新的`parentDirectoryId`时，系统会检查新父目录是否属于当前租户，并且不会导致循环引用问题。
 * - 安全性方面，本API支持多种认证方式（AK、BearerToken、APP），并启用了RAM权限控制与操作审计。
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
 * @summary 更新指定的企业知识库分类信息，包括名称、描述及父目录。
 *
 * @description ## 请求说明
 * - 该接口用于修改企业知识库中的某个分类。
 * - 需要具有`DEVELOPMENT_KB_MANAGE`功能权限才能调用此API。
 * - `tenantId`参数为可选，若未提供，则默认使用调用者的租户ID。
 * - 必须提供待修改的`directoryId`，而`name`、`description`和`parentDirectoryId`均为可选项，不提供则表示这些字段保持不变。
 * - 当指定了新的`parentDirectoryId`时，系统会检查新父目录是否属于当前租户，并且不会导致循环引用问题。
 * - 安全性方面，本API支持多种认证方式（AK、BearerToken、APP），并启用了RAM权限控制与操作审计。
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
 * @summary 用于编辑企业自建知识库中的资源正文并触发重新解析。
 *
 * @description ## 请求说明
 * 本接口允许用户更新指定的企业知识库数据源的正文内容，并可选择是否同步等待解析完成。通过设置`forceSync`参数，可以控制解析过程是同步还是异步执行，默认为异步处理。
 * - **注意**：当`content`字段为空字符串时，表示清空原有内容。
 * - **权限要求**：调用此接口需要具备相应的RAM操作权限（`winnexo:UpdateKnowledgeBaseSourceContent`）。
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
 * @summary 用于编辑企业自建知识库中的资源正文并触发重新解析。
 *
 * @description ## 请求说明
 * 本接口允许用户更新指定的企业知识库数据源的正文内容，并可选择是否同步等待解析完成。通过设置`forceSync`参数，可以控制解析过程是同步还是异步执行，默认为异步处理。
 * - **注意**：当`content`字段为空字符串时，表示清空原有内容。
 * - **权限要求**：调用此接口需要具备相应的RAM操作权限（`winnexo:UpdateKnowledgeBaseSourceContent`）。
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
 * @summary 更新指定企业知识库数据源的资源标签。
 *
 * @description ## 请求说明
 * - 该接口用于更新企业知识库中特定数据源的标签。
 * - 需要具备知识库管理权限才能调用此接口。
 * - `sourceTags` 参数接受 JSON 字符串列表形式，例如 `["tagA", "tagB"]`；若传入 `null` 则表示清空所有现有标签。
 * - 更新操作仅影响 `sourceTags` 和 `gmt_modified` 字段，并不会触发 `process_source` 流程。
 * - 如果指定的数据源不存在，则会抛出 `ERR.Robject.Source.NotFound` 错误。
 * - 接口支持通过 AK、BearerToken 或 APP 方式进行身份验证。
 * - 调用时需确保 `tenant_id` 和 `user_id` 来自有效的鉴权身份信息。
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
 * @summary 更新指定企业知识库数据源的资源标签。
 *
 * @description ## 请求说明
 * - 该接口用于更新企业知识库中特定数据源的标签。
 * - 需要具备知识库管理权限才能调用此接口。
 * - `sourceTags` 参数接受 JSON 字符串列表形式，例如 `["tagA", "tagB"]`；若传入 `null` 则表示清空所有现有标签。
 * - 更新操作仅影响 `sourceTags` 和 `gmt_modified` 字段，并不会触发 `process_source` 流程。
 * - 如果指定的数据源不存在，则会抛出 `ERR.Robject.Source.NotFound` 错误。
 * - 接口支持通过 AK、BearerToken 或 APP 方式进行身份验证。
 * - 调用时需确保 `tenant_id` 和 `user_id` 来自有效的鉴权身份信息。
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
 * @summary 更新定时任务
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
 * @summary 更新定时任务
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
 * @summary 更新租户内可编辑数据源的正文并触发重新解析。
 *
 * @description ## 请求说明
 * - 该API用于更新指定租户内的数据源内容，并根据需要触发同步或异步的数据源重新解析。
 * - `tenant_id` 和 `user_id` 仅用于鉴权，不参与实际业务逻辑处理。
 * - 当提供的正文为空字符串时，系统将按照现有服务契约执行操作。
 * - 如果指定的数据源不存在，则返回标准的NotFound错误；其他异常情况则由全局异常链处理。
 * - 可通过设置`forceSync`参数来决定是否等待解析过程完成（默认为异步入队）。
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
 * @summary 更新租户内可编辑数据源的正文并触发重新解析。
 *
 * @description ## 请求说明
 * - 该API用于更新指定租户内的数据源内容，并根据需要触发同步或异步的数据源重新解析。
 * - `tenant_id` 和 `user_id` 仅用于鉴权，不参与实际业务逻辑处理。
 * - 当提供的正文为空字符串时，系统将按照现有服务契约执行操作。
 * - 如果指定的数据源不存在，则返回标准的NotFound错误；其他异常情况则由全局异常链处理。
 * - 可通过设置`forceSync`参数来决定是否等待解析过程完成（默认为异步入队）。
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
 * @summary 用于更新指定的企业知识库目录信息。
 *
 * @description ## 请求说明
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
 * @summary 用于更新指定的企业知识库目录信息。
 *
 * @description ## 请求说明
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
 * @summary 修改用户信息（含启停用）
 *
 * @description OpenAPI 修改用户信息。
 *     业务编排：
 *     1. 解析 roleCodes → role_ids
 *     2. 若 isActive 有变更，先执行状态切换（含最后超管保护）
 *     3. 调用 update_tenant_member 修改其他字段（displayName / roleCodes / userGroupIds）
 *     4. 全部成功返回 HTTP 200
 *     执行顺序说明：
 *     - isActive 状态变更先于其他字段写入。两步不在同一事务中。
 *     - 校验失败（如最后超管保护）→ 抛出异常，后续步骤不执行。
 *     - 若 isActive 变更已落库但后续步骤异常，isActive 不会回滚。
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
 * @summary 修改用户信息（含启停用）
 *
 * @description OpenAPI 修改用户信息。
 *     业务编排：
 *     1. 解析 roleCodes → role_ids
 *     2. 若 isActive 有变更，先执行状态切换（含最后超管保护）
 *     3. 调用 update_tenant_member 修改其他字段（displayName / roleCodes / userGroupIds）
 *     4. 全部成功返回 HTTP 200
 *     执行顺序说明：
 *     - isActive 状态变更先于其他字段写入。两步不在同一事务中。
 *     - 校验失败（如最后超管保护）→ 抛出异常，后续步骤不执行。
 *     - 若 isActive 变更已落库但后续步骤异常，isActive 不会回滚。
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
 * @summary 支持部分字段更新当前用户信息，并返回完整用户信息。
 *
 * @description ## 请求说明
 * - 该API允许调用者更新指定用户的部分或全部可选字段，未提供的字段将保持原有值。
 * - 支持通过`tenantId`参数指定租户ID；若省略，则默认使用调用方的默认租户。
 * - 更新成功后，响应体中会包含完整的用户信息对象。
 * - 此接口要求认证，支持AK、BearerToken和APP三种安全方案。
 * - 接口消费类型为JSON格式，且仅在HTTPS协议下可用。
 * - 特别注意：`profileRoleInfo`字段仅当用户角色设置为Others时有效，用于描述用户的具体角色信息。
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
 * @summary 支持部分字段更新当前用户信息，并返回完整用户信息。
 *
 * @description ## 请求说明
 * - 该API允许调用者更新指定用户的部分或全部可选字段，未提供的字段将保持原有值。
 * - 支持通过`tenantId`参数指定租户ID；若省略，则默认使用调用方的默认租户。
 * - 更新成功后，响应体中会包含完整的用户信息对象。
 * - 此接口要求认证，支持AK、BearerToken和APP三种安全方案。
 * - 接口消费类型为JSON格式，且仅在HTTPS协议下可用。
 * - 特别注意：`profileRoleInfo`字段仅当用户角色设置为Others时有效，用于描述用户的具体角色信息。
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
 * @summary 会话上传本地文件
 *
 * @description ## 请求说明
 * 该 API 用于上传会话临时文件，采用**文件中转上传**模式（`fileTransfer`）：文件二进制不经本 API 的请求体传输，而是先落到 OSS，再把 OSS 地址通过 `FileUrl` 入参交给后端；后端从该地址取回字节并写入自己的 OSS，创建会话临时文件记录。
 * ### 调用方式
 * - **推荐**：使用 SDK 生成的 `UploadChatFileAdvance` 方法，传入本地文件流，SDK 自动完成中转上传并回填 `FileUrl`。
 * - **直传**：自行将文件上传到可被服务端访问的 OSS 地址，然后直接调用本 API 并传入 `FileUrl`。
 * ### 入参
 * - **FileUrl**：必填，文件的 OSS 地址。使用 Advance 方法时由 SDK 自动回填，无需手动赋值。
 * - **FileName**：必填，原始文件名（含后缀，如 `report.pdf`）。中转生成的 OSS 地址不携带原始文件名，后端据此确定文件后缀与展示名，因此必须显式传入。
 * - **ContentType**：可选，文件 MIME 类型；不传时按 `application/octet-stream` 处理。
 * - **OperatingObjectName**：可选，Agent 命名空间标识，决定文件入库路径。
 * ### 出参
 * 返回 OSS 对象路径 `objectName`、入库地址 `fileUrl`、公开访问地址 `filePublicUrl`（有效期 1 小时）、文件记录 ID `fileRecordId` 等；`uploadSignatureUrl` 在本模式下恒为空。
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
 * @summary 会话上传本地文件
 *
 * @description ## 请求说明
 * 该 API 用于上传会话临时文件，采用**文件中转上传**模式（`fileTransfer`）：文件二进制不经本 API 的请求体传输，而是先落到 OSS，再把 OSS 地址通过 `FileUrl` 入参交给后端；后端从该地址取回字节并写入自己的 OSS，创建会话临时文件记录。
 * ### 调用方式
 * - **推荐**：使用 SDK 生成的 `UploadChatFileAdvance` 方法，传入本地文件流，SDK 自动完成中转上传并回填 `FileUrl`。
 * - **直传**：自行将文件上传到可被服务端访问的 OSS 地址，然后直接调用本 API 并传入 `FileUrl`。
 * ### 入参
 * - **FileUrl**：必填，文件的 OSS 地址。使用 Advance 方法时由 SDK 自动回填，无需手动赋值。
 * - **FileName**：必填，原始文件名（含后缀，如 `report.pdf`）。中转生成的 OSS 地址不携带原始文件名，后端据此确定文件后缀与展示名，因此必须显式传入。
 * - **ContentType**：可选，文件 MIME 类型；不传时按 `application/octet-stream` 处理。
 * - **OperatingObjectName**：可选，Agent 命名空间标识，决定文件入库路径。
 * ### 出参
 * 返回 OSS 对象路径 `objectName`、入库地址 `fileUrl`、公开访问地址 `filePublicUrl`（有效期 1 小时）、文件记录 ID `fileRecordId` 等；`uploadSignatureUrl` 在本模式下恒为空。
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