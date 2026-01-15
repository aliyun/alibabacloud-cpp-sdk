#include <darabonba/Core.hpp>
#include <alibabacloud/PolardbAI20251013.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::PolardbAI20251013::Models;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{

AlibabaCloud::PolardbAI20251013::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("polardbai", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建chatbi配置表
 *
 * @param request ChatBIConfigCreateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIConfigCreateResponse
 */
ChatBIConfigCreateResponse Client::chatBIConfigCreateWithOptions(const ChatBIConfigCreateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIConfigCreate"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIConfigCreateResponse>();
}

/**
 * @summary 创建chatbi配置表
 *
 * @param request ChatBIConfigCreateRequest
 * @return ChatBIConfigCreateResponse
 */
ChatBIConfigCreateResponse Client::chatBIConfigCreate(const ChatBIConfigCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIConfigCreateWithOptions(request, runtime);
}

/**
 * @summary 删除chatbi配置表
 *
 * @param request ChatBIConfigDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIConfigDeleteResponse
 */
ChatBIConfigDeleteResponse Client::chatBIConfigDeleteWithOptions(const ChatBIConfigDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIConfigDelete"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIConfigDeleteResponse>();
}

/**
 * @summary 删除chatbi配置表
 *
 * @param request ChatBIConfigDeleteRequest
 * @return ChatBIConfigDeleteResponse
 */
ChatBIConfigDeleteResponse Client::chatBIConfigDelete(const ChatBIConfigDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIConfigDeleteWithOptions(request, runtime);
}

/**
 * @summary 查询chatbi问题模板表内容
 *
 * @param request ChatBIConfigDeleteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIConfigDeleteEntryResponse
 */
ChatBIConfigDeleteEntryResponse Client::chatBIConfigDeleteEntryWithOptions(const ChatBIConfigDeleteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIConfigDeleteEntry"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIConfigDeleteEntryResponse>();
}

/**
 * @summary 查询chatbi问题模板表内容
 *
 * @param request ChatBIConfigDeleteEntryRequest
 * @return ChatBIConfigDeleteEntryResponse
 */
ChatBIConfigDeleteEntryResponse Client::chatBIConfigDeleteEntry(const ChatBIConfigDeleteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIConfigDeleteEntryWithOptions(request, runtime);
}

/**
 * @summary 查询chatbi配置表内容
 *
 * @param request ChatBIConfigQueryEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIConfigQueryEntriesResponse
 */
ChatBIConfigQueryEntriesResponse Client::chatBIConfigQueryEntriesWithOptions(const ChatBIConfigQueryEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIConfigQueryEntries"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIConfigQueryEntriesResponse>();
}

/**
 * @summary 查询chatbi配置表内容
 *
 * @param request ChatBIConfigQueryEntriesRequest
 * @return ChatBIConfigQueryEntriesResponse
 */
ChatBIConfigQueryEntriesResponse Client::chatBIConfigQueryEntries(const ChatBIConfigQueryEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIConfigQueryEntriesWithOptions(request, runtime);
}

/**
 * @summary 查询客户chatbi配置表名
 *
 * @param request ChatBIConfigQueryTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIConfigQueryTablesResponse
 */
ChatBIConfigQueryTablesResponse Client::chatBIConfigQueryTablesWithOptions(const ChatBIConfigQueryTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInputField()) {
    query["InputField"] = request.getInputField();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIConfigQueryTables"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIConfigQueryTablesResponse>();
}

/**
 * @summary 查询客户chatbi配置表名
 *
 * @param request ChatBIConfigQueryTablesRequest
 * @return ChatBIConfigQueryTablesResponse
 */
ChatBIConfigQueryTablesResponse Client::chatBIConfigQueryTables(const ChatBIConfigQueryTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIConfigQueryTablesWithOptions(request, runtime);
}

/**
 * @summary 修改chatbi配置表内容
 *
 * @param request ChatBIConfigUpdateEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIConfigUpdateEntryResponse
 */
ChatBIConfigUpdateEntryResponse Client::chatBIConfigUpdateEntryWithOptions(const ChatBIConfigUpdateEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasFormulaFunction()) {
    query["FormulaFunction"] = request.getFormulaFunction();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasIsFunctional()) {
    query["IsFunctional"] = request.getIsFunctional();
  }

  if (!!request.hasQueryFunction()) {
    query["QueryFunction"] = request.getQueryFunction();
  }

  if (!!request.hasSqlCondition()) {
    query["SqlCondition"] = request.getSqlCondition();
  }

  if (!!request.hasSqlFunction()) {
    query["SqlFunction"] = request.getSqlFunction();
  }

  if (!!request.hasTextCondition()) {
    query["TextCondition"] = request.getTextCondition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIConfigUpdateEntry"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIConfigUpdateEntryResponse>();
}

/**
 * @summary 修改chatbi配置表内容
 *
 * @param request ChatBIConfigUpdateEntryRequest
 * @return ChatBIConfigUpdateEntryResponse
 */
ChatBIConfigUpdateEntryResponse Client::chatBIConfigUpdateEntry(const ChatBIConfigUpdateEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIConfigUpdateEntryWithOptions(request, runtime);
}

/**
 * @summary 创建chatbi问题模板表
 *
 * @param request ChatBIFileTemplateDownloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIFileTemplateDownloadResponse
 */
ChatBIFileTemplateDownloadResponse Client::chatBIFileTemplateDownloadWithOptions(const ChatBIFileTemplateDownloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasTableType()) {
    query["TableType"] = request.getTableType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIFileTemplateDownload"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIFileTemplateDownloadResponse>();
}

/**
 * @summary 创建chatbi问题模板表
 *
 * @param request ChatBIFileTemplateDownloadRequest
 * @return ChatBIFileTemplateDownloadResponse
 */
ChatBIFileTemplateDownloadResponse Client::chatBIFileTemplateDownload(const ChatBIFileTemplateDownloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIFileTemplateDownloadWithOptions(request, runtime);
}

/**
 * @summary 创建chatbi问题模板表
 *
 * @param request ChatBIFileUploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIFileUploadResponse
 */
ChatBIFileUploadResponse Client::chatBIFileUploadWithOptions(const ChatBIFileUploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIFileUpload"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIFileUploadResponse>();
}

/**
 * @summary 创建chatbi问题模板表
 *
 * @param request ChatBIFileUploadRequest
 * @return ChatBIFileUploadResponse
 */
ChatBIFileUploadResponse Client::chatBIFileUpload(const ChatBIFileUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIFileUploadWithOptions(request, runtime);
}

/**
 * @summary 创建chatbi问题模板表
 *
 * @param request ChatBIFileUploadCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIFileUploadCallbackResponse
 */
ChatBIFileUploadCallbackResponse Client::chatBIFileUploadCallbackWithOptions(const ChatBIFileUploadCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasCharacterSetName()) {
    query["CharacterSetName"] = request.getCharacterSetName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTableType()) {
    query["TableType"] = request.getTableType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIFileUploadCallback"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIFileUploadCallbackResponse>();
}

/**
 * @summary 创建chatbi问题模板表
 *
 * @param request ChatBIFileUploadCallbackRequest
 * @return ChatBIFileUploadCallbackResponse
 */
ChatBIFileUploadCallbackResponse Client::chatBIFileUploadCallback(const ChatBIFileUploadCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIFileUploadCallbackWithOptions(request, runtime);
}

/**
 * @summary 创建chatbi问题模板表
 *
 * @param request ChatBIPatternCreateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIPatternCreateResponse
 */
ChatBIPatternCreateResponse Client::chatBIPatternCreateWithOptions(const ChatBIPatternCreateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasTableNameSuffix()) {
    query["TableNameSuffix"] = request.getTableNameSuffix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIPatternCreate"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIPatternCreateResponse>();
}

/**
 * @summary 创建chatbi问题模板表
 *
 * @param request ChatBIPatternCreateRequest
 * @return ChatBIPatternCreateResponse
 */
ChatBIPatternCreateResponse Client::chatBIPatternCreate(const ChatBIPatternCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIPatternCreateWithOptions(request, runtime);
}

/**
 * @summary 删除chatbi问题模板表
 *
 * @param request ChatBIPatternDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIPatternDeleteResponse
 */
ChatBIPatternDeleteResponse Client::chatBIPatternDeleteWithOptions(const ChatBIPatternDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIPatternDelete"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIPatternDeleteResponse>();
}

/**
 * @summary 删除chatbi问题模板表
 *
 * @param request ChatBIPatternDeleteRequest
 * @return ChatBIPatternDeleteResponse
 */
ChatBIPatternDeleteResponse Client::chatBIPatternDelete(const ChatBIPatternDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIPatternDeleteWithOptions(request, runtime);
}

/**
 * @summary 查询chatbi问题模板表内容
 *
 * @param request ChatBIPatternDeleteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIPatternDeleteEntryResponse
 */
ChatBIPatternDeleteEntryResponse Client::chatBIPatternDeleteEntryWithOptions(const ChatBIPatternDeleteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIPatternDeleteEntry"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIPatternDeleteEntryResponse>();
}

/**
 * @summary 查询chatbi问题模板表内容
 *
 * @param request ChatBIPatternDeleteEntryRequest
 * @return ChatBIPatternDeleteEntryResponse
 */
ChatBIPatternDeleteEntryResponse Client::chatBIPatternDeleteEntry(const ChatBIPatternDeleteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIPatternDeleteEntryWithOptions(request, runtime);
}

/**
 * @summary 创建chatbi检索索引表
 *
 * @param request ChatBIPatternIndexCreateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIPatternIndexCreateResponse
 */
ChatBIPatternIndexCreateResponse Client::chatBIPatternIndexCreateWithOptions(const ChatBIPatternIndexCreateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPatternTableName()) {
    query["PatternTableName"] = request.getPatternTableName();
  }

  if (!!request.hasTableNameSuffix()) {
    query["TableNameSuffix"] = request.getTableNameSuffix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIPatternIndexCreate"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIPatternIndexCreateResponse>();
}

/**
 * @summary 创建chatbi检索索引表
 *
 * @param request ChatBIPatternIndexCreateRequest
 * @return ChatBIPatternIndexCreateResponse
 */
ChatBIPatternIndexCreateResponse Client::chatBIPatternIndexCreate(const ChatBIPatternIndexCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIPatternIndexCreateWithOptions(request, runtime);
}

/**
 * @summary 删除检索索引表
 *
 * @param request ChatBIPatternIndexDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIPatternIndexDeleteResponse
 */
ChatBIPatternIndexDeleteResponse Client::chatBIPatternIndexDeleteWithOptions(const ChatBIPatternIndexDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIPatternIndexDelete"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIPatternIndexDeleteResponse>();
}

/**
 * @summary 删除检索索引表
 *
 * @param request ChatBIPatternIndexDeleteRequest
 * @return ChatBIPatternIndexDeleteResponse
 */
ChatBIPatternIndexDeleteResponse Client::chatBIPatternIndexDelete(const ChatBIPatternIndexDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIPatternIndexDeleteWithOptions(request, runtime);
}

/**
 * @summary 查询检索索引表名
 *
 * @param request ChatBIPatternIndexQueryTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIPatternIndexQueryTablesResponse
 */
ChatBIPatternIndexQueryTablesResponse Client::chatBIPatternIndexQueryTablesWithOptions(const ChatBIPatternIndexQueryTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInputField()) {
    query["InputField"] = request.getInputField();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIPatternIndexQueryTables"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIPatternIndexQueryTablesResponse>();
}

/**
 * @summary 查询检索索引表名
 *
 * @param request ChatBIPatternIndexQueryTablesRequest
 * @return ChatBIPatternIndexQueryTablesResponse
 */
ChatBIPatternIndexQueryTablesResponse Client::chatBIPatternIndexQueryTables(const ChatBIPatternIndexQueryTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIPatternIndexQueryTablesWithOptions(request, runtime);
}

/**
 * @summary 查询chatbi问题模板表内容
 *
 * @param request ChatBIPatternQueryEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIPatternQueryEntriesResponse
 */
ChatBIPatternQueryEntriesResponse Client::chatBIPatternQueryEntriesWithOptions(const ChatBIPatternQueryEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIPatternQueryEntries"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIPatternQueryEntriesResponse>();
}

/**
 * @summary 查询chatbi问题模板表内容
 *
 * @param request ChatBIPatternQueryEntriesRequest
 * @return ChatBIPatternQueryEntriesResponse
 */
ChatBIPatternQueryEntriesResponse Client::chatBIPatternQueryEntries(const ChatBIPatternQueryEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIPatternQueryEntriesWithOptions(request, runtime);
}

/**
 * @summary 查询chatbi问题模板表名
 *
 * @param request ChatBIPatternQueryTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIPatternQueryTablesResponse
 */
ChatBIPatternQueryTablesResponse Client::chatBIPatternQueryTablesWithOptions(const ChatBIPatternQueryTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInputField()) {
    query["InputField"] = request.getInputField();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIPatternQueryTables"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIPatternQueryTablesResponse>();
}

/**
 * @summary 查询chatbi问题模板表名
 *
 * @param request ChatBIPatternQueryTablesRequest
 * @return ChatBIPatternQueryTablesResponse
 */
ChatBIPatternQueryTablesResponse Client::chatBIPatternQueryTables(const ChatBIPatternQueryTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIPatternQueryTablesWithOptions(request, runtime);
}

/**
 * @summary 修改chatbi问题模板表内容
 *
 * @param request ChatBIPatternUpdateEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIPatternUpdateEntryResponse
 */
ChatBIPatternUpdateEntryResponse Client::chatBIPatternUpdateEntryWithOptions(const ChatBIPatternUpdateEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPatternDescription()) {
    query["PatternDescription"] = request.getPatternDescription();
  }

  if (!!request.hasPatternParams()) {
    query["PatternParams"] = request.getPatternParams();
  }

  if (!!request.hasPatternQuestion()) {
    query["PatternQuestion"] = request.getPatternQuestion();
  }

  if (!!request.hasPatternSql()) {
    query["PatternSql"] = request.getPatternSql();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIPatternUpdateEntry"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIPatternUpdateEntryResponse>();
}

/**
 * @summary 修改chatbi问题模板表内容
 *
 * @param request ChatBIPatternUpdateEntryRequest
 * @return ChatBIPatternUpdateEntryResponse
 */
ChatBIPatternUpdateEntryResponse Client::chatBIPatternUpdateEntry(const ChatBIPatternUpdateEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIPatternUpdateEntryWithOptions(request, runtime);
}

/**
 * @summary 流式返回
 *
 * @param tmpReq ChatBIPredictSseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIPredictSseResponse
 */
FutureGenerator<ChatBIPredictSseResponse> Client::chatBIPredictSseWithSSE(const ChatBIPredictSseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatBIPredictSseShrinkRequest request = ChatBIPredictSseShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasGenerateChart()) {
    query["GenerateChart"] = request.getGenerateChart();
  }

  if (!!request.hasGenerateSummary()) {
    query["GenerateSummary"] = request.getGenerateSummary();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasPatternIndexTableName()) {
    query["PatternIndexTableName"] = request.getPatternIndexTableName();
  }

  if (!!request.hasQuestion()) {
    query["Question"] = request.getQuestion();
  }

  if (!!request.hasSchemaIndexTableName()) {
    query["SchemaIndexTableName"] = request.getSchemaIndexTableName();
  }

  if (!!request.hasSelectData()) {
    query["SelectData"] = request.getSelectData();
  }

  if (!!request.hasThinkingMode()) {
    query["ThinkingMode"] = request.getThinkingMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIPredictSse"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<ChatBIPredictSseResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 流式返回
 *
 * @param tmpReq ChatBIPredictSseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIPredictSseResponse
 */
ChatBIPredictSseResponse Client::chatBIPredictSseWithOptions(const ChatBIPredictSseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatBIPredictSseShrinkRequest request = ChatBIPredictSseShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasGenerateChart()) {
    query["GenerateChart"] = request.getGenerateChart();
  }

  if (!!request.hasGenerateSummary()) {
    query["GenerateSummary"] = request.getGenerateSummary();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasPatternIndexTableName()) {
    query["PatternIndexTableName"] = request.getPatternIndexTableName();
  }

  if (!!request.hasQuestion()) {
    query["Question"] = request.getQuestion();
  }

  if (!!request.hasSchemaIndexTableName()) {
    query["SchemaIndexTableName"] = request.getSchemaIndexTableName();
  }

  if (!!request.hasSelectData()) {
    query["SelectData"] = request.getSelectData();
  }

  if (!!request.hasThinkingMode()) {
    query["ThinkingMode"] = request.getThinkingMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIPredictSse"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIPredictSseResponse>();
}

/**
 * @summary 流式返回
 *
 * @param request ChatBIPredictSseRequest
 * @return ChatBIPredictSseResponse
 */
ChatBIPredictSseResponse Client::chatBIPredictSse(const ChatBIPredictSseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIPredictSseWithOptions(request, runtime);
}

/**
 * @summary 创建chatbi检索索引表
 *
 * @param request ChatBISchemaIndexCreateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBISchemaIndexCreateResponse
 */
ChatBISchemaIndexCreateResponse Client::chatBISchemaIndexCreateWithOptions(const ChatBISchemaIndexCreateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasColumnsExcluded()) {
    query["ColumnsExcluded"] = request.getColumnsExcluded();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasTableNameSuffix()) {
    query["TableNameSuffix"] = request.getTableNameSuffix();
  }

  if (!!request.hasTablesIncluded()) {
    query["TablesIncluded"] = request.getTablesIncluded();
  }

  if (!!request.hasToSample()) {
    query["ToSample"] = request.getToSample();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBISchemaIndexCreate"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBISchemaIndexCreateResponse>();
}

/**
 * @summary 创建chatbi检索索引表
 *
 * @param request ChatBISchemaIndexCreateRequest
 * @return ChatBISchemaIndexCreateResponse
 */
ChatBISchemaIndexCreateResponse Client::chatBISchemaIndexCreate(const ChatBISchemaIndexCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBISchemaIndexCreateWithOptions(request, runtime);
}

/**
 * @summary 删除检索索引表
 *
 * @param request ChatBISchemaIndexDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBISchemaIndexDeleteResponse
 */
ChatBISchemaIndexDeleteResponse Client::chatBISchemaIndexDeleteWithOptions(const ChatBISchemaIndexDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBISchemaIndexDelete"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBISchemaIndexDeleteResponse>();
}

/**
 * @summary 删除检索索引表
 *
 * @param request ChatBISchemaIndexDeleteRequest
 * @return ChatBISchemaIndexDeleteResponse
 */
ChatBISchemaIndexDeleteResponse Client::chatBISchemaIndexDelete(const ChatBISchemaIndexDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBISchemaIndexDeleteWithOptions(request, runtime);
}

/**
 * @summary 查询检索索引表名
 *
 * @param request ChatBISchemaIndexQueryTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBISchemaIndexQueryTablesResponse
 */
ChatBISchemaIndexQueryTablesResponse Client::chatBISchemaIndexQueryTablesWithOptions(const ChatBISchemaIndexQueryTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInputField()) {
    query["InputField"] = request.getInputField();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBISchemaIndexQueryTables"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBISchemaIndexQueryTablesResponse>();
}

/**
 * @summary 查询检索索引表名
 *
 * @param request ChatBISchemaIndexQueryTablesRequest
 * @return ChatBISchemaIndexQueryTablesResponse
 */
ChatBISchemaIndexQueryTablesResponse Client::chatBISchemaIndexQueryTables(const ChatBISchemaIndexQueryTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBISchemaIndexQueryTablesWithOptions(request, runtime);
}

/**
 * @summary 查询chatbi问题模板表内容
 *
 * @param request ChatBIUpdateTableValidationColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatBIUpdateTableValidationColumnsResponse
 */
ChatBIUpdateTableValidationColumnsResponse Client::chatBIUpdateTableValidationColumnsWithOptions(const ChatBIUpdateTableValidationColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTableType()) {
    query["TableType"] = request.getTableType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatBIUpdateTableValidationColumns"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatBIUpdateTableValidationColumnsResponse>();
}

/**
 * @summary 查询chatbi问题模板表内容
 *
 * @param request ChatBIUpdateTableValidationColumnsRequest
 * @return ChatBIUpdateTableValidationColumnsResponse
 */
ChatBIUpdateTableValidationColumnsResponse Client::chatBIUpdateTableValidationColumns(const ChatBIUpdateTableValidationColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatBIUpdateTableValidationColumnsWithOptions(request, runtime);
}

/**
 * @summary 查询多模态数据集列表
 *
 * @param request CreateMultimodalDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMultimodalDatasetResponse
 */
CreateMultimodalDatasetResponse Client::createMultimodalDatasetWithOptions(const CreateMultimodalDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDatasetDescription()) {
    query["DatasetDescription"] = request.getDatasetDescription();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMultimodalDataset"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMultimodalDatasetResponse>();
}

/**
 * @summary 查询多模态数据集列表
 *
 * @param request CreateMultimodalDatasetRequest
 * @return CreateMultimodalDatasetResponse
 */
CreateMultimodalDatasetResponse Client::createMultimodalDataset(const CreateMultimodalDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMultimodalDatasetWithOptions(request, runtime);
}

/**
 * @summary 创建Embedding
 *
 * @param request CreateMultimodalDatasetEmbeddingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMultimodalDatasetEmbeddingResponse
 */
CreateMultimodalDatasetEmbeddingResponse Client::createMultimodalDatasetEmbeddingWithOptions(const CreateMultimodalDatasetEmbeddingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasModelMode()) {
    query["ModelMode"] = request.getModelMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMultimodalDatasetEmbedding"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMultimodalDatasetEmbeddingResponse>();
}

/**
 * @summary 创建Embedding
 *
 * @param request CreateMultimodalDatasetEmbeddingRequest
 * @return CreateMultimodalDatasetEmbeddingResponse
 */
CreateMultimodalDatasetEmbeddingResponse Client::createMultimodalDatasetEmbedding(const CreateMultimodalDatasetEmbeddingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMultimodalDatasetEmbeddingWithOptions(request, runtime);
}

/**
 * @summary 创建SearchTask
 *
 * @param tmpReq CreateMultimodalSearchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMultimodalSearchTaskResponse
 */
CreateMultimodalSearchTaskResponse Client::createMultimodalSearchTaskWithOptions(const CreateMultimodalSearchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMultimodalSearchTaskShrinkRequest request = CreateMultimodalSearchTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDatasetIds()) {
    request.setDatasetIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDatasetIds(), "DatasetIds", "json"));
  }

  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDatasetIdsShrink()) {
    query["DatasetIds"] = request.getDatasetIdsShrink();
  }

  if (!!request.hasEmbeddingModel()) {
    query["EmbeddingModel"] = request.getEmbeddingModel();
  }

  if (!!request.hasModelMode()) {
    query["ModelMode"] = request.getModelMode();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSearchModel()) {
    query["SearchModel"] = request.getSearchModel();
  }

  if (!!request.hasTopK()) {
    query["TopK"] = request.getTopK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMultimodalSearchTask"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMultimodalSearchTaskResponse>();
}

/**
 * @summary 创建SearchTask
 *
 * @param request CreateMultimodalSearchTaskRequest
 * @return CreateMultimodalSearchTaskResponse
 */
CreateMultimodalSearchTaskResponse Client::createMultimodalSearchTask(const CreateMultimodalSearchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMultimodalSearchTaskWithOptions(request, runtime);
}

/**
 * @summary 删除多模态数据集
 *
 * @param request DeleteMultimodalDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMultimodalDatasetResponse
 */
DeleteMultimodalDatasetResponse Client::deleteMultimodalDatasetWithOptions(const DeleteMultimodalDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMultimodalDataset"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMultimodalDatasetResponse>();
}

/**
 * @summary 删除多模态数据集
 *
 * @param request DeleteMultimodalDatasetRequest
 * @return DeleteMultimodalDatasetResponse
 */
DeleteMultimodalDatasetResponse Client::deleteMultimodalDataset(const DeleteMultimodalDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMultimodalDatasetWithOptions(request, runtime);
}

/**
 * @summary 删除多模态数据集embedding
 *
 * @param request DeleteMultimodalEmbeddingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMultimodalEmbeddingResponse
 */
DeleteMultimodalEmbeddingResponse Client::deleteMultimodalEmbeddingWithOptions(const DeleteMultimodalEmbeddingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEmbedding()) {
    query["Embedding"] = request.getEmbedding();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMultimodalEmbedding"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMultimodalEmbeddingResponse>();
}

/**
 * @summary 删除多模态数据集embedding
 *
 * @param request DeleteMultimodalEmbeddingRequest
 * @return DeleteMultimodalEmbeddingResponse
 */
DeleteMultimodalEmbeddingResponse Client::deleteMultimodalEmbedding(const DeleteMultimodalEmbeddingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMultimodalEmbeddingWithOptions(request, runtime);
}

/**
 * @summary 下载Search任务的结果元数据
 *
 * @param request DownloadMultimodalSearchTaskResultMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadMultimodalSearchTaskResultMetadataResponse
 */
DownloadMultimodalSearchTaskResultMetadataResponse Client::downloadMultimodalSearchTaskResultMetadataWithOptions(const DownloadMultimodalSearchTaskResultMetadataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadMultimodalSearchTaskResultMetadata"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadMultimodalSearchTaskResultMetadataResponse>();
}

/**
 * @summary 下载Search任务的结果元数据
 *
 * @param request DownloadMultimodalSearchTaskResultMetadataRequest
 * @return DownloadMultimodalSearchTaskResultMetadataResponse
 */
DownloadMultimodalSearchTaskResultMetadataResponse Client::downloadMultimodalSearchTaskResultMetadata(const DownloadMultimodalSearchTaskResultMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadMultimodalSearchTaskResultMetadataWithOptions(request, runtime);
}

/**
 * @summary 获得鉴权token
 *
 * @param request GetUserTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserTokenResponse
 */
GetUserTokenResponse Client::getUserTokenWithOptions(const GetUserTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserToken"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserTokenResponse>();
}

/**
 * @summary 获得鉴权token
 *
 * @param request GetUserTokenRequest
 * @return GetUserTokenResponse
 */
GetUserTokenResponse Client::getUserToken(const GetUserTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserTokenWithOptions(request, runtime);
}

/**
 * @summary 查询多模态数据集列表
 *
 * @param request ListMultimodalDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultimodalDatasetResponse
 */
ListMultimodalDatasetResponse Client::listMultimodalDatasetWithOptions(const ListMultimodalDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasInputField()) {
    query["InputField"] = request.getInputField();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMultimodalDataset"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMultimodalDatasetResponse>();
}

/**
 * @summary 查询多模态数据集列表
 *
 * @param request ListMultimodalDatasetRequest
 * @return ListMultimodalDatasetResponse
 */
ListMultimodalDatasetResponse Client::listMultimodalDataset(const ListMultimodalDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMultimodalDatasetWithOptions(request, runtime);
}

/**
 * @summary 查询模型列表
 *
 * @param request ListMultimodalEmbeddingModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultimodalEmbeddingModelResponse
 */
ListMultimodalEmbeddingModelResponse Client::listMultimodalEmbeddingModelWithOptions(const ListMultimodalEmbeddingModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMultimodalEmbeddingModel"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMultimodalEmbeddingModelResponse>();
}

/**
 * @summary 查询模型列表
 *
 * @param request ListMultimodalEmbeddingModelRequest
 * @return ListMultimodalEmbeddingModelResponse
 */
ListMultimodalEmbeddingModelResponse Client::listMultimodalEmbeddingModel(const ListMultimodalEmbeddingModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMultimodalEmbeddingModelWithOptions(request, runtime);
}

/**
 * @summary 查询模型mode可选列表
 *
 * @param request ListMultimodalEmbeddingModelModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultimodalEmbeddingModelModeResponse
 */
ListMultimodalEmbeddingModelModeResponse Client::listMultimodalEmbeddingModelModeWithOptions(const ListMultimodalEmbeddingModelModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMultimodalEmbeddingModelMode"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMultimodalEmbeddingModelModeResponse>();
}

/**
 * @summary 查询模型mode可选列表
 *
 * @param request ListMultimodalEmbeddingModelModeRequest
 * @return ListMultimodalEmbeddingModelModeResponse
 */
ListMultimodalEmbeddingModelModeResponse Client::listMultimodalEmbeddingModelMode(const ListMultimodalEmbeddingModelModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMultimodalEmbeddingModelModeWithOptions(request, runtime);
}

/**
 * @summary 查询search模型列表
 *
 * @param request ListMultimodalSearchModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultimodalSearchModelResponse
 */
ListMultimodalSearchModelResponse Client::listMultimodalSearchModelWithOptions(const ListMultimodalSearchModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMultimodalSearchModel"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMultimodalSearchModelResponse>();
}

/**
 * @summary 查询search模型列表
 *
 * @param request ListMultimodalSearchModelRequest
 * @return ListMultimodalSearchModelResponse
 */
ListMultimodalSearchModelResponse Client::listMultimodalSearchModel(const ListMultimodalSearchModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMultimodalSearchModelWithOptions(request, runtime);
}

/**
 * @summary 查询search task列表
 *
 * @param request ListMultimodalSearchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultimodalSearchTaskResponse
 */
ListMultimodalSearchTaskResponse Client::listMultimodalSearchTaskWithOptions(const ListMultimodalSearchTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMultimodalSearchTask"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMultimodalSearchTaskResponse>();
}

/**
 * @summary 查询search task列表
 *
 * @param request ListMultimodalSearchTaskRequest
 * @return ListMultimodalSearchTaskResponse
 */
ListMultimodalSearchTaskResponse Client::listMultimodalSearchTask(const ListMultimodalSearchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMultimodalSearchTaskWithOptions(request, runtime);
}

/**
 * @summary 查询search task结果列表
 *
 * @param request ListMultimodalSearchTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultimodalSearchTaskResultResponse
 */
ListMultimodalSearchTaskResultResponse Client::listMultimodalSearchTaskResultWithOptions(const ListMultimodalSearchTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMultimodalSearchTaskResult"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMultimodalSearchTaskResultResponse>();
}

/**
 * @summary 查询search task结果列表
 *
 * @param request ListMultimodalSearchTaskResultRequest
 * @return ListMultimodalSearchTaskResultResponse
 */
ListMultimodalSearchTaskResultResponse Client::listMultimodalSearchTaskResult(const ListMultimodalSearchTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMultimodalSearchTaskResultWithOptions(request, runtime);
}

/**
 * @summary 更新数据集信息
 *
 * @param request UpdateMultimodalDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMultimodalDatasetResponse
 */
UpdateMultimodalDatasetResponse Client::updateMultimodalDatasetWithOptions(const UpdateMultimodalDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDatasetDescription()) {
    query["DatasetDescription"] = request.getDatasetDescription();
  }

  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMultimodalDataset"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMultimodalDatasetResponse>();
}

/**
 * @summary 更新数据集信息
 *
 * @param request UpdateMultimodalDatasetRequest
 * @return UpdateMultimodalDatasetResponse
 */
UpdateMultimodalDatasetResponse Client::updateMultimodalDataset(const UpdateMultimodalDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMultimodalDatasetWithOptions(request, runtime);
}

/**
 * @summary 导入OSS数据集
 *
 * @param request UploadOSSMultimodalDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadOSSMultimodalDatasetResponse
 */
UploadOSSMultimodalDatasetResponse Client::uploadOSSMultimodalDatasetWithOptions(const UploadOSSMultimodalDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasOssUrl()) {
    query["OssUrl"] = request.getOssUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadOSSMultimodalDataset"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadOSSMultimodalDatasetResponse>();
}

/**
 * @summary 导入OSS数据集
 *
 * @param request UploadOSSMultimodalDatasetRequest
 * @return UploadOSSMultimodalDatasetResponse
 */
UploadOSSMultimodalDatasetResponse Client::uploadOSSMultimodalDataset(const UploadOSSMultimodalDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadOSSMultimodalDatasetWithOptions(request, runtime);
}

/**
 * @summary 预检验鉴权token
 *
 * @param request ValidateDatabaseUserTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateDatabaseUserTokenResponse
 */
ValidateDatabaseUserTokenResponse Client::validateDatabaseUserTokenWithOptions(const ValidateDatabaseUserTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ValidateDatabaseUserToken"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateDatabaseUserTokenResponse>();
}

/**
 * @summary 预检验鉴权token
 *
 * @param request ValidateDatabaseUserTokenRequest
 * @return ValidateDatabaseUserTokenResponse
 */
ValidateDatabaseUserTokenResponse Client::validateDatabaseUserToken(const ValidateDatabaseUserTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateDatabaseUserTokenWithOptions(request, runtime);
}

/**
 * @summary 预检验鉴权token
 *
 * @param request ValidateUserTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateUserTokenResponse
 */
ValidateUserTokenResponse Client::validateUserTokenWithOptions(const ValidateUserTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMessage()) {
    query["AuthMessage"] = request.getAuthMessage();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ValidateUserToken"},
    {"version" , "2025-10-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateUserTokenResponse>();
}

/**
 * @summary 预检验鉴权token
 *
 * @param request ValidateUserTokenRequest
 * @return ValidateUserTokenResponse
 */
ValidateUserTokenResponse Client::validateUserToken(const ValidateUserTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateUserTokenWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace PolardbAI20251013