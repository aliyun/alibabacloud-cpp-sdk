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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "httpdns-api.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Adds a domain name based on the specified parameters.
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
 * @summary Adds a domain name based on the specified parameters.
 *
 * @param request AddDomainRequest
 * @return AddDomainResponse
 */
AddDomainResponse Client::addDomain(const AddDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDomainWithOptions(request, runtime);
}

/**
 * @summary Creates a custom resolution policy for a domain name connected to the current account. This operation supports the LINE mode and the IP_RANGE mode. IP address ranges can include IPv4 and IPv6 addresses. When a match occurs, A or AAAA records are returned based on the rules. By default, the policy is created in the disabled state. If Enable is set to true, the policy is enabled upon creation, but actual resolution still requires waiting for configuration propagation. The returned Id is used for subsequent queries, updates, enabling, disabling, and deletion. Create a disabled policy first, and then enable it after querying and verifying it. The policy type and the bound domain name cannot be modified after creation. If the response times out or is lost, query the list first to verify and avoid duplicate creation.
 *
 * @param tmpReq CreateSdnsRuleCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSdnsRuleCategoryResponse
 */
CreateSdnsRuleCategoryResponse Client::createSdnsRuleCategoryWithOptions(const CreateSdnsRuleCategoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSdnsRuleCategoryShrinkRequest request = CreateSdnsRuleCategoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasClientIpRanges()) {
    request.setClientIpRangesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClientIpRanges(), "ClientIpRanges", "json"));
  }

  if (!!tmpReq.hasPaths()) {
    request.setPathsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPaths(), "Paths", "json"));
  }

  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  json body = {};
  if (!!request.hasClientIpRangesShrink()) {
    body["ClientIpRanges"] = request.getClientIpRangesShrink();
  }

  if (!!request.hasDomainName()) {
    body["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEnable()) {
    body["Enable"] = request.getEnable();
  }

  if (!!request.hasLineId()) {
    body["LineId"] = request.getLineId();
  }

  if (!!request.hasMatchType()) {
    body["MatchType"] = request.getMatchType();
  }

  if (!!request.hasPathsShrink()) {
    body["Paths"] = request.getPathsShrink();
  }

  if (!!request.hasRulesShrink()) {
    body["Rules"] = request.getRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSdnsRuleCategory"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSdnsRuleCategoryResponse>();
}

/**
 * @summary Creates a custom resolution policy for a domain name connected to the current account. This operation supports the LINE mode and the IP_RANGE mode. IP address ranges can include IPv4 and IPv6 addresses. When a match occurs, A or AAAA records are returned based on the rules. By default, the policy is created in the disabled state. If Enable is set to true, the policy is enabled upon creation, but actual resolution still requires waiting for configuration propagation. The returned Id is used for subsequent queries, updates, enabling, disabling, and deletion. Create a disabled policy first, and then enable it after querying and verifying it. The policy type and the bound domain name cannot be modified after creation. If the response times out or is lost, query the list first to verify and avoid duplicate creation.
 *
 * @param request CreateSdnsRuleCategoryRequest
 * @return CreateSdnsRuleCategoryResponse
 */
CreateSdnsRuleCategoryResponse Client::createSdnsRuleCategory(const CreateSdnsRuleCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSdnsRuleCategoryWithOptions(request, runtime);
}

/**
 * @summary Deletes a domain name based on the specified parameters.
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
 * @summary Deletes a domain name based on the specified parameters.
 *
 * @param request DeleteDomainRequest
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomain(const DeleteDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainWithOptions(request, runtime);
}

/**
 * @summary Lists the domain names of a user based on the specified parameters.
 *
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
 * @summary Lists the domain names of a user based on the specified parameters.
 *
 * @param request DescribeDomainsRequest
 * @return DescribeDomainsResponse
 */
DescribeDomainsResponse Client::describeDomains(const DescribeDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the current HTTPDNS account information.
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
 * @summary Retrieves the current HTTPDNS account information.
 *
 * @return GetAccountInfoResponse
 */
GetAccountInfoResponse Client::getAccountInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountInfoWithOptions(runtime);
}

/**
 * @summary Retrieves parse and billing statistics, corresponding to the "Billing" page feature in the console.
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
 * @summary Retrieves parse and billing statistics, corresponding to the "Billing" page feature in the console.
 *
 * @param request GetResolveCountSummaryRequest
 * @return GetResolveCountSummaryResponse
 */
GetResolveCountSummaryResponse Client::getResolveCountSummary(const GetResolveCountSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResolveCountSummaryWithOptions(request, runtime);
}

/**
 * @summary Retrieves the statistics information of parse requests for a specific domain name.
 *
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
 * @summary Retrieves the statistics information of parse requests for a specific domain name.
 *
 * @param request GetResolveStatisticsRequest
 * @return GetResolveStatisticsResponse
 */
GetResolveStatisticsResponse Client::getResolveStatistics(const GetResolveStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResolveStatisticsWithOptions(request, runtime);
}

/**
 * @summary Lists the domain names and resolution counts of a user based on the specified parameters.
 *
 * @description # Operation description
 * - You can specify the page number (PageNumber) and the number of entries per page (PageSize) for the query.
 * - By default, the domain name list is sorted in descending order of the time when the domain names were added.
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
 * @summary Lists the domain names and resolution counts of a user based on the specified parameters.
 *
 * @description # Operation description
 * - You can specify the page number (PageNumber) and the number of entries per page (PageSize) for the query.
 * - By default, the domain name list is sorted in descending order of the time when the domain names were added.
 *
 * @param request ListDomainsRequest
 * @return ListDomainsResponse
 */
ListDomainsResponse Client::listDomains(const ListDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDomainsWithOptions(request, runtime);
}

/**
 * @summary Refreshes the domain name cache.
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
 * @summary Refreshes the domain name cache.
 *
 * @param request RefreshResolveCacheRequest
 * @return RefreshResolveCacheResponse
 */
RefreshResolveCacheResponse Client::refreshResolveCache(const RefreshResolveCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshResolveCacheWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom resolution policy of the current account by policy ID. A deleted policy cannot be recovered by using its original ID, and a new ID is generated when the policy is recreated. Disable the policy and verify the resolution results before deletion. After an address block policy is deleted, its scope is excluded from overlap checks with other policies. Actual resolution takes effect after configuration propagation. You can call SdnsListRuleCategories to verify the deletion.
 *
 * @param request SdnsDeleteRuleCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SdnsDeleteRuleCategoryResponse
 */
SdnsDeleteRuleCategoryResponse Client::sdnsDeleteRuleCategoryWithOptions(const SdnsDeleteRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SdnsDeleteRuleCategory"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SdnsDeleteRuleCategoryResponse>();
}

/**
 * @summary Deletes a custom resolution policy of the current account by policy ID. A deleted policy cannot be recovered by using its original ID, and a new ID is generated when the policy is recreated. Disable the policy and verify the resolution results before deletion. After an address block policy is deleted, its scope is excluded from overlap checks with other policies. Actual resolution takes effect after configuration propagation. You can call SdnsListRuleCategories to verify the deletion.
 *
 * @param request SdnsDeleteRuleCategoryRequest
 * @return SdnsDeleteRuleCategoryResponse
 */
SdnsDeleteRuleCategoryResponse Client::sdnsDeleteRuleCategory(const SdnsDeleteRuleCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sdnsDeleteRuleCategoryWithOptions(request, runtime);
}

/**
 * @summary 根据ID获取规则策略
 *
 * @param request SdnsGetRuleCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SdnsGetRuleCategoryResponse
 */
SdnsGetRuleCategoryResponse Client::sdnsGetRuleCategoryWithOptions(const SdnsGetRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SdnsGetRuleCategory"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SdnsGetRuleCategoryResponse>();
}

/**
 * @summary 根据ID获取规则策略
 *
 * @param request SdnsGetRuleCategoryRequest
 * @return SdnsGetRuleCategoryResponse
 */
SdnsGetRuleCategoryResponse Client::sdnsGetRuleCategory(const SdnsGetRuleCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sdnsGetRuleCategoryWithOptions(request, runtime);
}

/**
 * @summary Queries the custom resolution policies for a specified domain name under the current account, including line policies, client CIDR block policies, and policies in enabled or disabled states. The returned IDs can be used to query details, update, enable, disable, or delete policies. This operation does not provide pagination parameters and does not guarantee the order of returned results. CIDR blocks are returned in the original input format.
 *
 * @param request SdnsListRuleCategoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SdnsListRuleCategoriesResponse
 */
SdnsListRuleCategoriesResponse Client::sdnsListRuleCategoriesWithOptions(const SdnsListRuleCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SdnsListRuleCategories"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SdnsListRuleCategoriesResponse>();
}

/**
 * @summary Queries the custom resolution policies for a specified domain name under the current account, including line policies, client CIDR block policies, and policies in enabled or disabled states. The returned IDs can be used to query details, update, enable, disable, or delete policies. This operation does not provide pagination parameters and does not guarantee the order of returned results. CIDR blocks are returned in the original input format.
 *
 * @param request SdnsListRuleCategoriesRequest
 * @return SdnsListRuleCategoriesResponse
 */
SdnsListRuleCategoriesResponse Client::sdnsListRuleCategories(const SdnsListRuleCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sdnsListRuleCategoriesWithOptions(request, runtime);
}

/**
 * @summary 启用、禁用规则策略
 *
 * @param request SdnsSwitchRuleCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SdnsSwitchRuleCategoryResponse
 */
SdnsSwitchRuleCategoryResponse Client::sdnsSwitchRuleCategoryWithOptions(const SdnsSwitchRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SdnsSwitchRuleCategory"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SdnsSwitchRuleCategoryResponse>();
}

/**
 * @summary 启用、禁用规则策略
 *
 * @param request SdnsSwitchRuleCategoryRequest
 * @return SdnsSwitchRuleCategoryResponse
 */
SdnsSwitchRuleCategoryResponse Client::sdnsSwitchRuleCategory(const SdnsSwitchRuleCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sdnsSwitchRuleCategoryWithOptions(request, runtime);
}

/**
 * @summary Validates the submitted rules without saving or enabling any policies. In IP_RANGE mode, the Cip parameter is used to simulate a client IPv4 or IPv6 address. The system checks for CIDR block matches first and then returns the matched rules. If no custom parameters are used, pass an empty JSON object {} for the top-level Args parameter. If no rules are matched, the Data field is empty or omitted. A successful API call does not indicate a policy match. This operation does not check for CIDR block conflicts with existing policies, perform A/AAAA query type filtering or weight sampling, or simulate the complete resolution chain such as legacy CIDR block configurations, line fallback, or Function Compute. After saving and enabling the policies, verify them by using the actual resolution API.
 *
 * @param tmpReq SdnsVerifyRuleCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SdnsVerifyRuleCategoryResponse
 */
SdnsVerifyRuleCategoryResponse Client::sdnsVerifyRuleCategoryWithOptions(const SdnsVerifyRuleCategoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SdnsVerifyRuleCategoryShrinkRequest request = SdnsVerifyRuleCategoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasArgs()) {
    request.setArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getArgs(), "Args", "json"));
  }

  if (!!tmpReq.hasClientIpRanges()) {
    request.setClientIpRangesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClientIpRanges(), "ClientIpRanges", "json"));
  }

  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  json body = {};
  if (!!request.hasArgsShrink()) {
    body["Args"] = request.getArgsShrink();
  }

  if (!!request.hasCip()) {
    body["Cip"] = request.getCip();
  }

  if (!!request.hasClientIpRangesShrink()) {
    body["ClientIpRanges"] = request.getClientIpRangesShrink();
  }

  if (!!request.hasMatchType()) {
    body["MatchType"] = request.getMatchType();
  }

  if (!!request.hasRulesShrink()) {
    body["Rules"] = request.getRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SdnsVerifyRuleCategory"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SdnsVerifyRuleCategoryResponse>();
}

/**
 * @summary Validates the submitted rules without saving or enabling any policies. In IP_RANGE mode, the Cip parameter is used to simulate a client IPv4 or IPv6 address. The system checks for CIDR block matches first and then returns the matched rules. If no custom parameters are used, pass an empty JSON object {} for the top-level Args parameter. If no rules are matched, the Data field is empty or omitted. A successful API call does not indicate a policy match. This operation does not check for CIDR block conflicts with existing policies, perform A/AAAA query type filtering or weight sampling, or simulate the complete resolution chain such as legacy CIDR block configurations, line fallback, or Function Compute. After saving and enabling the policies, verify them by using the actual resolution API.
 *
 * @param request SdnsVerifyRuleCategoryRequest
 * @return SdnsVerifyRuleCategoryResponse
 */
SdnsVerifyRuleCategoryResponse Client::sdnsVerifyRuleCategory(const SdnsVerifyRuleCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sdnsVerifyRuleCategoryWithOptions(request, runtime);
}

/**
 * @summary Updates the complete rule list of an existing policy for the current account. For IP_RANGE policies, the client IP address ranges can be replaced as a whole at the same time. If ClientIpRanges is omitted, the original IP address ranges are retained. Explicitly passing an empty array is not allowed. The update does not change the bound domain names, match types, or enabled status of the policy. The new ranges are checked for conflicts only with other IP address range policies under the same domain name. If the validation fails, the update is not saved. After a successful update, you can call SdnsGetRuleCategory to verify the configuration. Actual DNS resolution requires waiting for configuration propagation.
 *
 * @param tmpReq UpdateSdnsRuleCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSdnsRuleCategoryResponse
 */
UpdateSdnsRuleCategoryResponse Client::updateSdnsRuleCategoryWithOptions(const UpdateSdnsRuleCategoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSdnsRuleCategoryShrinkRequest request = UpdateSdnsRuleCategoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  json body = {};
  if (!!request.hasClientIpRanges()) {
    body["ClientIpRanges"] = request.getClientIpRanges();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasRulesShrink()) {
    body["Rules"] = request.getRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSdnsRuleCategory"},
    {"version" , "2016-02-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSdnsRuleCategoryResponse>();
}

/**
 * @summary Updates the complete rule list of an existing policy for the current account. For IP_RANGE policies, the client IP address ranges can be replaced as a whole at the same time. If ClientIpRanges is omitted, the original IP address ranges are retained. Explicitly passing an empty array is not allowed. The update does not change the bound domain names, match types, or enabled status of the policy. The new ranges are checked for conflicts only with other IP address range policies under the same domain name. If the validation fails, the update is not saved. After a successful update, you can call SdnsGetRuleCategory to verify the configuration. Actual DNS resolution requires waiting for configuration propagation.
 *
 * @param request UpdateSdnsRuleCategoryRequest
 * @return UpdateSdnsRuleCategoryResponse
 */
UpdateSdnsRuleCategoryResponse Client::updateSdnsRuleCategory(const UpdateSdnsRuleCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSdnsRuleCategoryWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Httpdns20160201