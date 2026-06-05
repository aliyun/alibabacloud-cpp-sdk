#include <darabonba/Core.hpp>
#include <alibabacloud/ModelStudio20260210.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::ModelStudio20260210::Models;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{

AlibabaCloud::ModelStudio20260210::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("modelstudio", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建ApiKey
 *
 * @param request CreateApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApiKeyResponse
 */
CreateApiKeyResponse Client::createApiKeyWithOptions(const CreateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasAuth()) {
    body["auth"] = request.getAuth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApiKeyResponse>();
}

/**
 * @summary 创建ApiKey
 *
 * @param request CreateApiKeyRequest
 * @return CreateApiKeyResponse
 */
CreateApiKeyResponse Client::createApiKey(const CreateApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createApiKeyWithOptions(request, headers, runtime);
}

/**
 * @summary 创建业务空间
 *
 * @param request CreateWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspaceWithOptions(const CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceSite()) {
    query["serviceSite"] = request.getServiceSite();
  }

  if (!!request.hasWorkspaceName()) {
    query["workspaceName"] = request.getWorkspaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWorkspace"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/workspaces")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkspaceResponse>();
}

/**
 * @summary 创建业务空间
 *
 * @param request CreateWorkspaceRequest
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspace(const CreateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkspaceWithOptions(request, headers, runtime);
}

/**
 * @summary 删除apiKey
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApiKeyResponse
 */
DeleteApiKeyResponse Client::deleteApiKeyWithOptions(const string &apiKeyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApiKeyResponse>();
}

/**
 * @summary 删除apiKey
 *
 * @return DeleteApiKeyResponse
 */
DeleteApiKeyResponse Client::deleteApiKey(const string &apiKeyId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteApiKeyWithOptions(apiKeyId, headers, runtime);
}

/**
 * @summary 删除业务空间
 *
 * @param request DeleteWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspaceWithOptions(const string &workspaceId, const DeleteWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkspace"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkspaceResponse>();
}

/**
 * @summary 删除业务空间
 *
 * @param request DeleteWorkspaceRequest
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspace(const string &workspaceId, const DeleteWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkspaceWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 禁用API Key
 *
 * @param request DisableApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApiKeyResponse
 */
DisableApiKeyResponse Client::disableApiKeyWithOptions(const string &apiKeyId, const DisableApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyId) , "/disable")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApiKeyResponse>();
}

/**
 * @summary 禁用API Key
 *
 * @param request DisableApiKeyRequest
 * @return DisableApiKeyResponse
 */
DisableApiKeyResponse Client::disableApiKey(const string &apiKeyId, const DisableApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableApiKeyWithOptions(apiKeyId, request, headers, runtime);
}

/**
 * @summary 启用API Key
 *
 * @param request EnableApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApiKeyResponse
 */
EnableApiKeyResponse Client::enableApiKeyWithOptions(const string &apiKeyId, const EnableApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyId) , "/enable")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApiKeyResponse>();
}

/**
 * @summary 启用API Key
 *
 * @param request EnableApiKeyRequest
 * @return EnableApiKeyResponse
 */
EnableApiKeyResponse Client::enableApiKey(const string &apiKeyId, const EnableApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableApiKeyWithOptions(apiKeyId, request, headers, runtime);
}

/**
 * @summary 查询ApiKey详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApiKeyResponse
 */
GetApiKeyResponse Client::getApiKeyWithOptions(const string &apiKeyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApiKeyResponse>();
}

/**
 * @summary 查询ApiKey详情
 *
 * @return GetApiKeyResponse
 */
GetApiKeyResponse Client::getApiKey(const string &apiKeyId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getApiKeyWithOptions(apiKeyId, headers, runtime);
}

/**
 * @summary 获取ApiKey列表
 *
 * @param request ListApiKeysRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiKeysResponse
 */
ListApiKeysResponse Client::listApiKeysWithOptions(const ListApiKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApiKeys"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiKeysResponse>();
}

/**
 * @summary 获取ApiKey列表
 *
 * @param request ListApiKeysRequest
 * @return ListApiKeysResponse
 */
ListApiKeysResponse Client::listApiKeys(const ListApiKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApiKeysWithOptions(request, headers, runtime);
}

/**
 * @summary 业务空间列表
 *
 * @param request ListWorkspacesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspacesWithOptions(const ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceName()) {
    query["workspaceName"] = request.getWorkspaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaces"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/workspaces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspacesResponse>();
}

/**
 * @summary 业务空间列表
 *
 * @param request ListWorkspacesRequest
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspaces(const ListWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkspacesWithOptions(request, headers, runtime);
}

/**
 * @summary 重置API Key
 *
 * @param request ResetApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetApiKeyResponse
 */
ResetApiKeyResponse Client::resetApiKeyWithOptions(const string &apiKeyId, const ResetApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyId) , "/reset")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetApiKeyResponse>();
}

/**
 * @summary 重置API Key
 *
 * @param request ResetApiKeyRequest
 * @return ResetApiKeyResponse
 */
ResetApiKeyResponse Client::resetApiKey(const string &apiKeyId, const ResetApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resetApiKeyWithOptions(apiKeyId, request, headers, runtime);
}

/**
 * @summary 编辑apiKey的描述
 *
 * @param request UpdateApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApiKeyResponse
 */
UpdateApiKeyResponse Client::updateApiKeyWithOptions(const string &apiKeyId, const UpdateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  json body = {};
  if (!!request.hasAuth()) {
    body["auth"] = request.getAuth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApiKeyResponse>();
}

/**
 * @summary 编辑apiKey的描述
 *
 * @param request UpdateApiKeyRequest
 * @return UpdateApiKeyResponse
 */
UpdateApiKeyResponse Client::updateApiKey(const string &apiKeyId, const UpdateApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApiKeyWithOptions(apiKeyId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace ModelStudio20260210