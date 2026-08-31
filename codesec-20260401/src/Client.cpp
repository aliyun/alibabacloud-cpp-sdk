#include <darabonba/Core.hpp>
#include <alibabacloud/CodeSec20260401.hpp>
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
using namespace AlibabaCloud::CodeSec20260401::Models;
namespace AlibabaCloud
{
namespace CodeSec20260401
{

AlibabaCloud::CodeSec20260401::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-southeast-1" , "codesec.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou" , "codesec.cn-hangzhou.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("codesec", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Lists projects under the tenant with pagination, supporting fuzzy search by name or prompt.
 *
 * @param request DescribeProjectsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectsResponse
 */
DescribeProjectsResponse Client::describeProjectsWithOptions(const DescribeProjectsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProjects"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/projects")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProjectsResponse>();
}

/**
 * @summary Lists projects under the tenant with pagination, supporting fuzzy search by name or prompt.
 *
 * @param request DescribeProjectsRequest
 * @return DescribeProjectsResponse
 */
DescribeProjectsResponse Client::describeProjects(const DescribeProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeProjectsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the task result list to retrieve detailed SAST or SCA results for a specific scan.
 *
 * @param request DescribeScanResultsByEngineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScanResultsByEngineResponse
 */
DescribeScanResultsByEngineResponse Client::describeScanResultsByEngineWithOptions(const string &projectId, const string &scanId, const string &engine, const DescribeScanResultsByEngineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaselineState()) {
    query["baselineState"] = request.getBaselineState();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPackageName()) {
    query["packageName"] = request.getPackageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScanResultsByEngine"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/scans/" , Darabonba::Encode::Encoder::percentEncode(scanId) , "/results/" , Darabonba::Encode::Encoder::percentEncode(engine))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScanResultsByEngineResponse>();
}

/**
 * @summary Queries the task result list to retrieve detailed SAST or SCA results for a specific scan.
 *
 * @param request DescribeScanResultsByEngineRequest
 * @return DescribeScanResultsByEngineResponse
 */
DescribeScanResultsByEngineResponse Client::describeScanResultsByEngine(const string &projectId, const string &scanId, const string &engine, const DescribeScanResultsByEngineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeScanResultsByEngineWithOptions(projectId, scanId, engine, request, headers, runtime);
}

/**
 * @summary Lists scan tasks under a specified project with pagination.
 *
 * @param request DescribeScansRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScansResponse
 */
DescribeScansResponse Client::describeScansWithOptions(const string &projectId, const DescribeScansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTaskName()) {
    query["taskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScans"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/scans")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScansResponse>();
}

/**
 * @summary Lists scan tasks under a specified project with pagination.
 *
 * @param request DescribeScansRequest
 * @return DescribeScansResponse
 */
DescribeScansResponse Client::describeScans(const string &projectId, const DescribeScansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeScansWithOptions(projectId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace CodeSec20260401