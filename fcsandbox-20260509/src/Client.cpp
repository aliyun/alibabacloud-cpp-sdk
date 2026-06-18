#include <darabonba/Core.hpp>
#include <alibabacloud/FCSandbox20260509.hpp>
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
} // namespace AlibabaCloud
} // namespace FCSandbox20260509