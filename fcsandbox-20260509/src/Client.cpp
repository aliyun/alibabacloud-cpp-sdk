#include <darabonba/Core.hpp>
#include <alibabacloud/FCSandbox20260509.hpp>
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
using namespace AlibabaCloud::FCSandbox20260509::Models;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{

AlibabaCloud::FCSandbox20260509::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("fcsandbox", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建 ApiKey
 *
 * @param request CreateApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApiKeyResponse
 */
CreateApiKeyResponse Client::createApiKeyWithOptions(const CreateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateApiKey"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/api-keys")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApiKeyResponse>();
}

/**
 * @summary 创建 ApiKey
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
 * @summary 创建 Team
 *
 * @param request CreateTeamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTeamResponse
 */
CreateTeamResponse Client::createTeamWithOptions(const CreateTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateTeam"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/teams")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTeamResponse>();
}

/**
 * @summary 创建 Team
 *
 * @param request CreateTeamRequest
 * @return CreateTeamResponse
 */
CreateTeamResponse Client::createTeam(const CreateTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTeamWithOptions(request, headers, runtime);
}

/**
 * @summary 删除 ApiKey 
 *
 * @param request DeleteApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApiKeyResponse
 */
DeleteApiKeyResponse Client::deleteApiKeyWithOptions(const string &apiKeyID, const DeleteApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApiKey"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/api-keys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyID))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApiKeyResponse>();
}

/**
 * @summary 删除 ApiKey 
 *
 * @param request DeleteApiKeyRequest
 * @return DeleteApiKeyResponse
 */
DeleteApiKeyResponse Client::deleteApiKey(const string &apiKeyID, const DeleteApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteApiKeyWithOptions(apiKeyID, request, headers, runtime);
}

/**
 * @summary 删除 quota 配置
 *
 * @param request DeleteQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQuotaResponse
 */
DeleteQuotaResponse Client::deleteQuotaWithOptions(const DeleteQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTagValue()) {
    query["tagValue"] = request.getTagValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteQuota"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/quotas/tag")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQuotaResponse>();
}

/**
 * @summary 删除 quota 配置
 *
 * @param request DeleteQuotaRequest
 * @return DeleteQuotaResponse
 */
DeleteQuotaResponse Client::deleteQuota(const DeleteQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteQuotaWithOptions(request, headers, runtime);
}

/**
 * @summary 删除 Team
 *
 * @param request DeleteTeamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTeamResponse
 */
DeleteTeamResponse Client::deleteTeamWithOptions(const string &teamID, const DeleteTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTeam"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/teams/" , Darabonba::Encode::Encoder::percentEncode(teamID))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTeamResponse>();
}

/**
 * @summary 删除 Team
 *
 * @param request DeleteTeamRequest
 * @return DeleteTeamResponse
 */
DeleteTeamResponse Client::deleteTeam(const string &teamID, const DeleteTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTeamWithOptions(teamID, request, headers, runtime);
}

/**
 * @summary 查看 ApiKey
 *
 * @param request DescribeApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiKeyResponse
 */
DescribeApiKeyResponse Client::describeApiKeyWithOptions(const string &apiKeyID, const DescribeApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiKey"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/api-keys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyID))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiKeyResponse>();
}

/**
 * @summary 查看 ApiKey
 *
 * @param request DescribeApiKeyRequest
 * @return DescribeApiKeyResponse
 */
DescribeApiKeyResponse Client::describeApiKey(const string &apiKeyID, const DescribeApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeApiKeyWithOptions(apiKeyID, request, headers, runtime);
}

/**
 * @summary 获取 quota 配置
 *
 * @param request DescribeQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQuotaResponse
 */
DescribeQuotaResponse Client::describeQuotaWithOptions(const DescribeQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTagValue()) {
    query["tagValue"] = request.getTagValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeQuota"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/quotas/tag")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQuotaResponse>();
}

/**
 * @summary 获取 quota 配置
 *
 * @param request DescribeQuotaRequest
 * @return DescribeQuotaResponse
 */
DescribeQuotaResponse Client::describeQuota(const DescribeQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeQuotaWithOptions(request, headers, runtime);
}

/**
 * @summary 获取Team详情
 *
 * @param request GetTeamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTeamResponse
 */
GetTeamResponse Client::getTeamWithOptions(const string &teamID, const GetTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTeam"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/teams/" , Darabonba::Encode::Encoder::percentEncode(teamID))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTeamResponse>();
}

/**
 * @summary 获取Team详情
 *
 * @param request GetTeamRequest
 * @return GetTeamResponse
 */
GetTeamResponse Client::getTeam(const string &teamID, const GetTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTeamWithOptions(teamID, request, headers, runtime);
}

/**
 * @summary 分页查询 ApiKey
 *
 * @param request ListApiKeysRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiKeysResponse
 */
ListApiKeysResponse Client::listApiKeysWithOptions(const ListApiKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyName()) {
    query["apiKeyName"] = request.getApiKeyName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupID()) {
    query["resourceGroupID"] = request.getResourceGroupID();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  if (!!request.hasUserID()) {
    query["userID"] = request.getUserID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApiKeys"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/api-keys")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiKeysResponse>();
}

/**
 * @summary 分页查询 ApiKey
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
 * @summary 查询 quota 配置
 *
 * @param request ListQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotaResponse
 */
ListQuotaResponse Client::listQuotaWithOptions(const ListQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQuota"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/quotas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotaResponse>();
}

/**
 * @summary 查询 quota 配置
 *
 * @param request ListQuotaRequest
 * @return ListQuotaResponse
 */
ListQuotaResponse Client::listQuota(const ListQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listQuotaWithOptions(request, headers, runtime);
}

/**
 * @summary 查询 Team 列表
 *
 * @param request ListTeamsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTeamsResponse
 */
ListTeamsResponse Client::listTeamsWithOptions(const ListTeamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupID()) {
    query["resourceGroupID"] = request.getResourceGroupID();
  }

  if (!!request.hasTeamName()) {
    query["teamName"] = request.getTeamName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTeams"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/teams")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTeamsResponse>();
}

/**
 * @summary 查询 Team 列表
 *
 * @param request ListTeamsRequest
 * @return ListTeamsResponse
 */
ListTeamsResponse Client::listTeams(const ListTeamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTeamsWithOptions(request, headers, runtime);
}

/**
 * @summary 重置 ApiKey 
 *
 * @param request ResetApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetApiKeyResponse
 */
ResetApiKeyResponse Client::resetApiKeyWithOptions(const string &apiKeyID, const ResetApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetApiKey"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/api-keys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyID) , "/reset")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetApiKeyResponse>();
}

/**
 * @summary 重置 ApiKey 
 *
 * @param request ResetApiKeyRequest
 * @return ResetApiKeyResponse
 */
ResetApiKeyResponse Client::resetApiKey(const string &apiKeyID, const ResetApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resetApiKeyWithOptions(apiKeyID, request, headers, runtime);
}

/**
 * @summary 更新 ApiKey
 *
 * @param request UpdateApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApiKeyResponse
 */
UpdateApiKeyResponse Client::updateApiKeyWithOptions(const string &apiKeyID, const UpdateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateApiKey"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/api-keys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyID))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApiKeyResponse>();
}

/**
 * @summary 更新 ApiKey
 *
 * @param request UpdateApiKeyRequest
 * @return UpdateApiKeyResponse
 */
UpdateApiKeyResponse Client::updateApiKey(const string &apiKeyID, const UpdateApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApiKeyWithOptions(apiKeyID, request, headers, runtime);
}

/**
 * @summary 更新 quota 配置
 *
 * @param request UpdateQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQuotaResponse
 */
UpdateQuotaResponse Client::updateQuotaWithOptions(const UpdateQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateQuota"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/quotas/tag")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQuotaResponse>();
}

/**
 * @summary 更新 quota 配置
 *
 * @param request UpdateQuotaRequest
 * @return UpdateQuotaResponse
 */
UpdateQuotaResponse Client::updateQuota(const UpdateQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateQuotaWithOptions(request, headers, runtime);
}

/**
 * @summary 更新 Team
 *
 * @param request UpdateTeamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTeamResponse
 */
UpdateTeamResponse Client::updateTeamWithOptions(const string &teamID, const UpdateTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateTeam"},
    {"version" , "2026-05-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-05-09/teams/" , Darabonba::Encode::Encoder::percentEncode(teamID))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTeamResponse>();
}

/**
 * @summary 更新 Team
 *
 * @param request UpdateTeamRequest
 * @return UpdateTeamResponse
 */
UpdateTeamResponse Client::updateTeam(const string &teamID, const UpdateTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTeamWithOptions(teamID, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace FCSandbox20260509