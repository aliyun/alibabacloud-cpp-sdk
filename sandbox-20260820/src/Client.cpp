#include <darabonba/Core.hpp>
#include <alibabacloud/Sandbox20260820.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Sandbox20260820::Models;
namespace AlibabaCloud
{
namespace Sandbox20260820
{

AlibabaCloud::Sandbox20260820::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "Sandbox";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("sandbox", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates an API key.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/api-keys")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApiKeyResponse>();
}

/**
 * @summary Creates an API key.
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
 * @summary Creates a team.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/teams")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTeamResponse>();
}

/**
 * @summary Creates a team.
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
 * @summary Creates a template.
 *
 * @description Creates a template. runtimeConfig.vpcBindings is supported only for second-generation templates. A null value is treated as omitted. First-generation templates return a 400 error if an empty or non-empty array is explicitly provided. Inbound bindings are independent of the egress vpcConfig and API key source policies. When the feature switch is enabled, POST /init requests without query parameters to the standard envd port 49983 of the E2B sandbox are temporarily exempt from VPC source checks, while other authentication mechanisms remain in effect.
 *
 * @param request CreateTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplateWithOptions(const CreateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateTemplate"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/templates")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTemplateResponse>();
}

/**
 * @summary Creates a template.
 *
 * @description Creates a template. runtimeConfig.vpcBindings is supported only for second-generation templates. A null value is treated as omitted. First-generation templates return a 400 error if an empty or non-empty array is explicitly provided. Inbound bindings are independent of the egress vpcConfig and API key source policies. When the feature switch is enabled, POST /init requests without query parameters to the standard envd port 49983 of the E2B sandbox are temporarily exempt from VPC source checks, while other authentication mechanisms remain in effect.
 *
 * @param request CreateTemplateRequest
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplate(const CreateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a template cache.
 *
 * @param request CreateTemplateCacheRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateCacheResponse
 */
CreateTemplateCacheResponse Client::createTemplateCacheWithOptions(const CreateTemplateCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateTemplateCache"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/template-caches")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTemplateCacheResponse>();
}

/**
 * @summary Creates a template cache.
 *
 * @param request CreateTemplateCacheRequest
 * @return CreateTemplateCacheResponse
 */
CreateTemplateCacheResponse Client::createTemplateCache(const CreateTemplateCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTemplateCacheWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a storage volume.
 *
 * @param request CreateVolumeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVolumeResponse
 */
CreateVolumeResponse Client::createVolumeWithOptions(const CreateVolumeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateVolume"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/volumes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVolumeResponse>();
}

/**
 * @summary Creates a storage volume.
 *
 * @param request CreateVolumeRequest
 * @return CreateVolumeResponse
 */
CreateVolumeResponse Client::createVolume(const CreateVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createVolumeWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a specified API key.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/api-keys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyID))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApiKeyResponse>();
}

/**
 * @summary Deletes a specified API key.
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
 * @summary Deletes the quota configuration for a specified team.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/quotas/tag")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQuotaResponse>();
}

/**
 * @summary Deletes the quota configuration for a specified team.
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
 * @summary Deletes a specified team.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/teams/" , Darabonba::Encode::Encoder::percentEncode(teamID))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTeamResponse>();
}

/**
 * @summary Deletes a specified team.
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
 * @summary Deletes a template.
 *
 * @param request DeleteTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplateWithOptions(const string &templateID, const DeleteTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTemplate"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/templates/" , Darabonba::Encode::Encoder::percentEncode(templateID))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplateResponse>();
}

/**
 * @summary Deletes a template.
 *
 * @param request DeleteTemplateRequest
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplate(const string &templateID, const DeleteTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTemplateWithOptions(templateID, request, headers, runtime);
}

/**
 * @summary Deletes the template cache.
 *
 * @param request DeleteTemplateCacheRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateCacheResponse
 */
DeleteTemplateCacheResponse Client::deleteTemplateCacheWithOptions(const string &templateID, const DeleteTemplateCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTemplateCache"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/template-caches/" , Darabonba::Encode::Encoder::percentEncode(templateID))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplateCacheResponse>();
}

/**
 * @summary Deletes the template cache.
 *
 * @param request DeleteTemplateCacheRequest
 * @return DeleteTemplateCacheResponse
 */
DeleteTemplateCacheResponse Client::deleteTemplateCache(const string &templateID, const DeleteTemplateCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTemplateCacheWithOptions(templateID, request, headers, runtime);
}

/**
 * @summary Deletes a specified storage volume.
 *
 * @param request DeleteVolumeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVolumeResponse
 */
DeleteVolumeResponse Client::deleteVolumeWithOptions(const string &volumeID, const DeleteVolumeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVolume"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/volumes/" , Darabonba::Encode::Encoder::percentEncode(volumeID))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVolumeResponse>();
}

/**
 * @summary Deletes a specified storage volume.
 *
 * @param request DeleteVolumeRequest
 * @return DeleteVolumeResponse
 */
DeleteVolumeResponse Client::deleteVolume(const string &volumeID, const DeleteVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteVolumeWithOptions(volumeID, request, headers, runtime);
}

/**
 * @summary Queries the details of a specified API key.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/api-keys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyID))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiKeyResponse>();
}

/**
 * @summary Queries the details of a specified API key.
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
 * @summary Queries the quota configuration of a specified team.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/quotas/tag")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQuotaResponse>();
}

/**
 * @summary Queries the quota configuration of a specified team.
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
 * @summary Queries the template cache.
 *
 * @param request DescribeTemplateCacheRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateCacheResponse
 */
DescribeTemplateCacheResponse Client::describeTemplateCacheWithOptions(const string &templateID, const DescribeTemplateCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplateCache"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/template-caches/" , Darabonba::Encode::Encoder::percentEncode(templateID))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplateCacheResponse>();
}

/**
 * @summary Queries the template cache.
 *
 * @param request DescribeTemplateCacheRequest
 * @return DescribeTemplateCacheResponse
 */
DescribeTemplateCacheResponse Client::describeTemplateCache(const string &templateID, const DescribeTemplateCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTemplateCacheWithOptions(templateID, request, headers, runtime);
}

/**
 * @summary 查询监控指标
 *
 * @description 查看某一时刻的监控指标，或查询一段时间内的变化趋势。支持按账号、团队、模板或沙箱查询。
 *
 * @param tmpReq GetMetricDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetricDataResponse
 */
GetMetricDataResponse Client::getMetricDataWithOptions(const GetMetricDataRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetMetricDataShrinkRequest request = GetMetricDataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGroupBy()) {
    request.setGroupByShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupBy(), "groupBy", "json"));
  }

  if (!!tmpReq.hasMetricNames()) {
    request.setMetricNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMetricNames(), "metricNames", "json"));
  }

  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasGroupByShrink()) {
    query["groupBy"] = request.getGroupByShrink();
  }

  if (!!request.hasMetricNamesShrink()) {
    query["metricNames"] = request.getMetricNamesShrink();
  }

  if (!!request.hasPeriod()) {
    query["period"] = request.getPeriod();
  }

  if (!!request.hasSandboxID()) {
    query["sandboxID"] = request.getSandboxID();
  }

  if (!!request.hasSandboxPlan()) {
    query["sandboxPlan"] = request.getSandboxPlan();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  if (!!request.hasTemplateID()) {
    query["templateID"] = request.getTemplateID();
  }

  if (!!request.hasTime()) {
    query["time"] = request.getTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetricData"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/metrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetricDataResponse>();
}

/**
 * @summary 查询监控指标
 *
 * @description 查看某一时刻的监控指标，或查询一段时间内的变化趋势。支持按账号、团队、模板或沙箱查询。
 *
 * @param request GetMetricDataRequest
 * @return GetMetricDataResponse
 */
GetMetricDataResponse Client::getMetricData(const GetMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMetricDataWithOptions(request, headers, runtime);
}

/**
 * @summary Queries resource usage.
 *
 * @description Queries the CPU, memory, and disk usage over a specified period. You can view the cumulative usage and usage trends by account, team, or template.
 *
 * @param tmpReq GetResourceUsageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceUsageResponse
 */
GetResourceUsageResponse Client::getResourceUsageWithOptions(const GetResourceUsageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetResourceUsageShrinkRequest request = GetResourceUsageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGroupBy()) {
    request.setGroupByShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupBy(), "groupBy", "json"));
  }

  if (!!tmpReq.hasUsageNames()) {
    request.setUsageNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUsageNames(), "usageNames", "json"));
  }

  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasGranularity()) {
    query["granularity"] = request.getGranularity();
  }

  if (!!request.hasGroupByShrink()) {
    query["groupBy"] = request.getGroupByShrink();
  }

  if (!!request.hasSandboxPlan()) {
    query["sandboxPlan"] = request.getSandboxPlan();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  if (!!request.hasTemplateID()) {
    query["templateID"] = request.getTemplateID();
  }

  if (!!request.hasUsageNamesShrink()) {
    query["usageNames"] = request.getUsageNamesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceUsage"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/resource-usage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceUsageResponse>();
}

/**
 * @summary Queries resource usage.
 *
 * @description Queries the CPU, memory, and disk usage over a specified period. You can view the cumulative usage and usage trends by account, team, or template.
 *
 * @param request GetResourceUsageRequest
 * @return GetResourceUsageResponse
 */
GetResourceUsageResponse Client::getResourceUsage(const GetResourceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourceUsageWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of a specified team.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/teams/" , Darabonba::Encode::Encoder::percentEncode(teamID))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTeamResponse>();
}

/**
 * @summary Queries the details of a specified team.
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
 * @summary Queries a template.
 *
 * @param request GetTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplateWithOptions(const string &templateID, const GetTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplate"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/templates/" , Darabonba::Encode::Encoder::percentEncode(templateID))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateResponse>();
}

/**
 * @summary Queries a template.
 *
 * @param request GetTemplateRequest
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplate(const string &templateID, const GetTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTemplateWithOptions(templateID, request, headers, runtime);
}

/**
 * @summary Queries the details of a specified storage volume.
 *
 * @param request GetVolumeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVolumeResponse
 */
GetVolumeResponse Client::getVolumeWithOptions(const string &volumeID, const GetVolumeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVolume"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/volumes/" , Darabonba::Encode::Encoder::percentEncode(volumeID))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVolumeResponse>();
}

/**
 * @summary Queries the details of a specified storage volume.
 *
 * @param request GetVolumeRequest
 * @return GetVolumeResponse
 */
GetVolumeResponse Client::getVolume(const string &volumeID, const GetVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getVolumeWithOptions(volumeID, request, headers, runtime);
}

/**
 * @summary Queries the list of API keys by using paging.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/api-keys")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiKeysResponse>();
}

/**
 * @summary Queries the list of API keys by using paging.
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
 * @summary Queries the quota configuration list for the current account by using paging.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/quotas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotaResponse>();
}

/**
 * @summary Queries the quota configuration list for the current account by using paging.
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
 * @summary Queries the team list by using paging.
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

  if (!!request.hasPlan()) {
    query["plan"] = request.getPlan();
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/teams")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTeamsResponse>();
}

/**
 * @summary Queries the team list by using paging.
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
 * @summary Queries template caches by paging.
 *
 * @param request ListTemplateCacheRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplateCacheResponse
 */
ListTemplateCacheResponse Client::listTemplateCacheWithOptions(const ListTemplateCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  if (!!request.hasTemplateID()) {
    query["templateID"] = request.getTemplateID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplateCache"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/template-caches")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplateCacheResponse>();
}

/**
 * @summary Queries template caches by paging.
 *
 * @param request ListTemplateCacheRequest
 * @return ListTemplateCacheResponse
 */
ListTemplateCacheResponse Client::listTemplateCache(const ListTemplateCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTemplateCacheWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a paging query to retrieve the template list.
 *
 * @param tmpReq ListTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplatesWithOptions(const ListTemplatesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTemplatesShrinkRequest request = ListTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceTags()) {
    request.setResourceTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceTags(), "resourceTags", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceTagsShrink()) {
    query["resourceTags"] = request.getResourceTagsShrink();
  }

  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplates"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplatesResponse>();
}

/**
 * @summary Performs a paging query to retrieve the template list.
 *
 * @param request ListTemplatesRequest
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplates(const ListTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTemplatesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of storage volumes by using paging.
 *
 * @param request ListVolumesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVolumesResponse
 */
ListVolumesResponse Client::listVolumesWithOptions(const ListVolumesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupID()) {
    query["resourceGroupID"] = request.getResourceGroupID();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasStorageClass()) {
    query["storageClass"] = request.getStorageClass();
  }

  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  if (!!request.hasUserID()) {
    query["userID"] = request.getUserID();
  }

  if (!!request.hasVolumeName()) {
    query["volumeName"] = request.getVolumeName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVolumes"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/volumes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVolumesResponse>();
}

/**
 * @summary Queries a list of storage volumes by using paging.
 *
 * @param request ListVolumesRequest
 * @return ListVolumesResponse
 */
ListVolumesResponse Client::listVolumes(const ListVolumesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVolumesWithOptions(request, headers, runtime);
}

/**
 * @summary Resets a specified API key.
 *
 * @description Rotates the credential value of an API key while retaining the original API key ID, IP address whitelist, IP address blacklist, and vpcBindings source policy. The apiKey field in the response returns the retained policy.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/api-keys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyID) , "/reset")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetApiKeyResponse>();
}

/**
 * @summary Resets a specified API key.
 *
 * @description Rotates the credential value of an API key while retaining the original API key ID, IP address whitelist, IP address blacklist, and vpcBindings source policy. The apiKey field in the response returns the retained policy.
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
 * @summary Updates the configuration of a specified API key.
 *
 * @description Updates an API key. IP blacklists and whitelists follow a paired replacement rule. If you commit a non-null array for one list and omit the other list or set it to null, the omitted list is cleared. If both lists are omitted or set to null, they are retained. The vpcBindings field is updated independently. If it is omitted or set to null, the current value is retained. A non-empty array replaces the current value, and an empty array [] clears it. Updates to IP addresses and VPCs do not clear each other. Source restrictions are retained if the source is null or if you update only other fields. An empty request body {} clears the IP address whitelist, IP blacklist, and VPC restrictions. You can also explicitly commit empty IP and VPC arrays to clear all source restrictions. To update the access policy, you must commit only the permissionPolicy and expectedPolicyVersion fields. Do not include other fields, including source fields with null values.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/api-keys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyID))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApiKeyResponse>();
}

/**
 * @summary Updates the configuration of a specified API key.
 *
 * @description Updates an API key. IP blacklists and whitelists follow a paired replacement rule. If you commit a non-null array for one list and omit the other list or set it to null, the omitted list is cleared. If both lists are omitted or set to null, they are retained. The vpcBindings field is updated independently. If it is omitted or set to null, the current value is retained. A non-empty array replaces the current value, and an empty array [] clears it. Updates to IP addresses and VPCs do not clear each other. Source restrictions are retained if the source is null or if you update only other fields. An empty request body {} clears the IP address whitelist, IP blacklist, and VPC restrictions. You can also explicitly commit empty IP and VPC arrays to clear all source restrictions. To update the access policy, you must commit only the permissionPolicy and expectedPolicyVersion fields. Do not include other fields, including source fields with null values.
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
 * @summary Updates the quota configuration.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/quotas/tag")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQuotaResponse>();
}

/**
 * @summary Updates the quota configuration.
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
 * @summary Updates the information of a specified team.
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
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/teams/" , Darabonba::Encode::Encoder::percentEncode(teamID))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTeamResponse>();
}

/**
 * @summary Updates the information of a specified team.
 *
 * @param request UpdateTeamRequest
 * @return UpdateTeamResponse
 */
UpdateTeamResponse Client::updateTeam(const string &teamID, const UpdateTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTeamWithOptions(teamID, request, headers, runtime);
}

/**
 * @summary Updates a template.
 *
 * @description Updates a template. For Generation 2 templates, runtimeConfig.vpcBindings supports omission or null retention, full replacement with a non-empty array, or clearing with an empty array. The new list takes effect upon a successful build of the new version. Existing sandboxes continue to use the original functions and policies. If the build fails, the previously effective version is retained. For Generation 1 templates, explicitly passing an empty or non-empty array returns a 400 error. Before switching to Generation 1, you must clear the bindings and wait for the update to succeed. When the feature switch is enabled, POST /init requests without query parameters to the standard envd port 49983 of E2B sandboxes are temporarily exempt from VPC source checks, while other authentication mechanisms remain in effect.
 *
 * @param request UpdateTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplateWithOptions(const string &templateID, const UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateTemplate"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/templates/" , Darabonba::Encode::Encoder::percentEncode(templateID))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTemplateResponse>();
}

/**
 * @summary Updates a template.
 *
 * @description Updates a template. For Generation 2 templates, runtimeConfig.vpcBindings supports omission or null retention, full replacement with a non-empty array, or clearing with an empty array. The new list takes effect upon a successful build of the new version. Existing sandboxes continue to use the original functions and policies. If the build fails, the previously effective version is retained. For Generation 1 templates, explicitly passing an empty or non-empty array returns a 400 error. Before switching to Generation 1, you must clear the bindings and wait for the update to succeed. When the feature switch is enabled, POST /init requests without query parameters to the standard envd port 49983 of E2B sandboxes are temporarily exempt from VPC source checks, while other authentication mechanisms remain in effect.
 *
 * @param request UpdateTemplateRequest
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplate(const string &templateID, const UpdateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTemplateWithOptions(templateID, request, headers, runtime);
}

/**
 * @summary Updates the configuration of a specified storage volume.
 *
 * @param request UpdateVolumeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVolumeResponse
 */
UpdateVolumeResponse Client::updateVolumeWithOptions(const string &volumeID, const UpdateVolumeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateVolume"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/volumes/" , Darabonba::Encode::Encoder::percentEncode(volumeID))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVolumeResponse>();
}

/**
 * @summary Updates the configuration of a specified storage volume.
 *
 * @param request UpdateVolumeRequest
 * @return UpdateVolumeResponse
 */
UpdateVolumeResponse Client::updateVolume(const string &volumeID, const UpdateVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateVolumeWithOptions(volumeID, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Sandbox20260820