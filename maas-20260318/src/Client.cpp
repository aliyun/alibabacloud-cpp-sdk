#include <darabonba/Core.hpp>
#include <alibabacloud/MaaS20260318.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::MaaS20260318::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace MaaS20260318
{

AlibabaCloud::MaaS20260318::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("maas", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApiKey"},
    {"version" , "2026-03-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bailianControl/apiKey/createApiKey")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
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
 * @summary 删除apiKey
 *
 * @param request DeleteApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApiKeyResponse
 */
DeleteApiKeyResponse Client::deleteApiKeyWithOptions(const DeleteApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApiKey"},
    {"version" , "2026-03-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bailianControl/apiKey/deleteApiKey")},
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
 * @param request DeleteApiKeyRequest
 * @return DeleteApiKeyResponse
 */
DeleteApiKeyResponse Client::deleteApiKey(const DeleteApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteApiKeyWithOptions(request, headers, runtime);
}

/**
 * @summary 查询ApiKey详情
 *
 * @param request GetApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApiKeyResponse
 */
GetApiKeyResponse Client::getApiKeyWithOptions(const GetApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApiKey"},
    {"version" , "2026-03-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bailianControl/apiKey/getApiKey")},
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
 * @param request GetApiKeyRequest
 * @return GetApiKeyResponse
 */
GetApiKeyResponse Client::getApiKey(const GetApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getApiKeyWithOptions(request, headers, runtime);
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
    {"version" , "2026-03-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bailianControl/apiKeys")},
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
 * @summary 编辑apiKey的描述
 *
 * @param request UpdateApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApiKeyResponse
 */
UpdateApiKeyResponse Client::updateApiKeyWithOptions(const UpdateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApiKey"},
    {"version" , "2026-03-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bailianControl/apiKey/updateApiKey")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
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
UpdateApiKeyResponse Client::updateApiKey(const UpdateApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApiKeyWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace MaaS20260318