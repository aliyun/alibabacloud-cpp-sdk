#include <darabonba/Core.hpp>
#include <alibabacloud/BailianControl20240816.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::BailianControl20240816::Models;
namespace AlibabaCloud
{
namespace BailianControl20240816
{

AlibabaCloud::BailianControl20240816::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("bailiancontrol", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 查询 apiKey
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
    {"version" , "2024-08-16"},
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
 * @summary 查询 apiKey
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

  if (!!request.hasSkip()) {
    query["skip"] = request.getSkip();
  }

  if (!!request.hasUid()) {
    query["uid"] = request.getUid();
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
    {"version" , "2024-08-16"},
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
} // namespace AlibabaCloud
} // namespace BailianControl20240816