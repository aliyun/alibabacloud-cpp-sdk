#include <darabonba/Core.hpp>
#include <alibabacloud/Httpdns20160201.hpp>
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
using namespace AlibabaCloud::Httpdns20160201::Models;
namespace AlibabaCloud
{
namespace Httpdns20160201
{

AlibabaCloud::Httpdns20160201::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("httpdns", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 添加域名
 *
 * @param request AddDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDomainResponse
 */
AddDomainResponse Client::addDomainWithOptions(const AddDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDomain"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDomainResponse>();
}

/**
 * @summary 添加域名
 *
 * @param request AddDomainRequest
 * @return AddDomainResponse
 */
AddDomainResponse Client::addDomain(const AddDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDomainWithOptions(request, runtime);
}

/**
 * @summary 删除域名
 *
 * @param request DeleteDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomainWithOptions(const DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDomain"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainResponse>();
}

/**
 * @summary 删除域名
 *
 * @param request DeleteDomainRequest
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomain(const DeleteDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainWithOptions(request, runtime);
}

/**
 * @param request DescribeDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainsResponse
 */
DescribeDomainsResponse Client::describeDomainsWithOptions(const DescribeDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
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
    {"action" , "DescribeDomains"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainsResponse>();
}

/**
 * @param request DescribeDomainsRequest
 * @return DescribeDomainsResponse
 */
DescribeDomainsResponse Client::describeDomains(const DescribeDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainsWithOptions(request, runtime);
}

/**
 * @summary 获取用户信息包含配置项
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountInfoResponse
 */
GetAccountInfoResponse Client::getAccountInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetAccountInfo"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountInfoResponse>();
}

/**
 * @summary 获取用户信息包含配置项
 *
 * @return GetAccountInfoResponse
 */
GetAccountInfoResponse Client::getAccountInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountInfoWithOptions(runtime);
}

/**
 * @summary 解析次数概览
 *
 * @param request GetResolveCountSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResolveCountSummaryResponse
 */
GetResolveCountSummaryResponse Client::getResolveCountSummaryWithOptions(const GetResolveCountSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGranularity()) {
    query["Granularity"] = request.getGranularity();
  }

  if (!!request.hasTimeSpan()) {
    query["TimeSpan"] = request.getTimeSpan();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResolveCountSummary"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResolveCountSummaryResponse>();
}

/**
 * @summary 解析次数概览
 *
 * @param request GetResolveCountSummaryRequest
 * @return GetResolveCountSummaryResponse
 */
GetResolveCountSummaryResponse Client::getResolveCountSummary(const GetResolveCountSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResolveCountSummaryWithOptions(request, runtime);
}

/**
 * @param request GetResolveStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResolveStatisticsResponse
 */
GetResolveStatisticsResponse Client::getResolveStatisticsWithOptions(const GetResolveStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.getGranularity();
  }

  if (!!request.hasProtocolName()) {
    query["ProtocolName"] = request.getProtocolName();
  }

  if (!!request.hasTimeSpan()) {
    query["TimeSpan"] = request.getTimeSpan();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResolveStatistics"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResolveStatisticsResponse>();
}

/**
 * @param request GetResolveStatisticsRequest
 * @return GetResolveStatisticsResponse
 */
GetResolveStatisticsResponse Client::getResolveStatistics(const GetResolveStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResolveStatisticsWithOptions(request, runtime);
}

/**
 * @summary 列举域名以及解析统计信息
 *
 * @param request ListDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDomainsResponse
 */
ListDomainsResponse Client::listDomainsWithOptions(const ListDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearch()) {
    query["Search"] = request.getSearch();
  }

  if (!!request.hasWithoutMeteringData()) {
    query["WithoutMeteringData"] = request.getWithoutMeteringData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDomains"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDomainsResponse>();
}

/**
 * @summary 列举域名以及解析统计信息
 *
 * @param request ListDomainsRequest
 * @return ListDomainsResponse
 */
ListDomainsResponse Client::listDomains(const ListDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDomainsWithOptions(request, runtime);
}

/**
 * @summary 刷新域名缓存
 *
 * @param tmpReq RefreshResolveCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshResolveCacheResponse
 */
RefreshResolveCacheResponse Client::refreshResolveCacheWithOptions(const RefreshResolveCacheRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RefreshResolveCacheShrinkRequest request = RefreshResolveCacheShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDomains()) {
    request.setDomainsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDomains(), "Domains", "json"));
  }

  json query = {};
  if (!!request.hasDomainsShrink()) {
    query["Domains"] = request.getDomainsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshResolveCache"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshResolveCacheResponse>();
}

/**
 * @summary 刷新域名缓存
 *
 * @param request RefreshResolveCacheRequest
 * @return RefreshResolveCacheResponse
 */
RefreshResolveCacheResponse Client::refreshResolveCache(const RefreshResolveCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshResolveCacheWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Httpdns20160201