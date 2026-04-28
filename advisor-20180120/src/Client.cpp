#include <darabonba/Core.hpp>
#include <alibabacloud/Advisor20180120.hpp>
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
using namespace AlibabaCloud::Advisor20180120::Models;
namespace AlibabaCloud
{
namespace Advisor20180120
{

AlibabaCloud::Advisor20180120::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("advisor", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 根据多个维度获取用户最新的巡检结果，全量返回-openApi
 *
 * @param request DescribeAdvicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvicesResponse
 */
DescribeAdvicesResponse Client::describeAdvicesWithOptions(const DescribeAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdviceId()) {
    query["AdviceId"] = request.getAdviceId();
  }

  if (!!request.hasCheckId()) {
    query["CheckId"] = request.getCheckId();
  }

  if (!!request.hasCheckPlanId()) {
    query["CheckPlanId"] = request.getCheckPlanId();
  }

  if (!!request.hasExcludeAdviceId()) {
    query["ExcludeAdviceId"] = request.getExcludeAdviceId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdvices"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvicesResponse>();
}

/**
 * @summary 根据多个维度获取用户最新的巡检结果，全量返回-openApi
 *
 * @param request DescribeAdvicesRequest
 * @return DescribeAdvicesResponse
 */
DescribeAdvicesResponse Client::describeAdvices(const DescribeAdvicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvicesWithOptions(request, runtime);
}

/**
 * @summary DescribeAdvicesFlat分页
 *
 * @param request DescribeAdvicesFlatPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvicesFlatPageResponse
 */
DescribeAdvicesFlatPageResponse Client::describeAdvicesFlatPageWithOptions(const DescribeAdvicesFlatPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdviceId()) {
    query["AdviceId"] = request.getAdviceId();
  }

  if (!!request.hasCheckId()) {
    query["CheckId"] = request.getCheckId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdvicesFlatPage"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvicesFlatPageResponse>();
}

/**
 * @summary DescribeAdvicesFlat分页
 *
 * @param request DescribeAdvicesFlatPageRequest
 * @return DescribeAdvicesFlatPageResponse
 */
DescribeAdvicesFlatPageResponse Client::describeAdvicesFlatPage(const DescribeAdvicesFlatPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvicesFlatPageWithOptions(request, runtime);
}

/**
 * @summary DescribeAdvices分页
 *
 * @param request DescribeAdvicesPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvicesPageResponse
 */
DescribeAdvicesPageResponse Client::describeAdvicesPageWithOptions(const DescribeAdvicesPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdviceId()) {
    query["AdviceId"] = request.getAdviceId();
  }

  if (!!request.hasCheckId()) {
    query["CheckId"] = request.getCheckId();
  }

  if (!!request.hasCheckPlanId()) {
    query["CheckPlanId"] = request.getCheckPlanId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdvicesPage"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvicesPageResponse>();
}

/**
 * @summary DescribeAdvices分页
 *
 * @param request DescribeAdvicesPageRequest
 * @return DescribeAdvicesPageResponse
 */
DescribeAdvicesPageResponse Client::describeAdvicesPage(const DescribeAdvicesPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvicesPageWithOptions(request, runtime);
}

/**
 * @summary 巡检
 *
 * @param request DescribeAdvisorChecksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvisorChecksResponse
 */
DescribeAdvisorChecksResponse Client::describeAdvisorChecksWithOptions(const DescribeAdvisorChecksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdvisorChecks"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvisorChecksResponse>();
}

/**
 * @summary 巡检
 *
 * @param request DescribeAdvisorChecksRequest
 * @return DescribeAdvisorChecksResponse
 */
DescribeAdvisorChecksResponse Client::describeAdvisorChecks(const DescribeAdvisorChecksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvisorChecksWithOptions(request, runtime);
}

/**
 * @summary 巡检项设置-分页
 *
 * @param tmpReq DescribeAdvisorChecksFoPagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvisorChecksFoPagesResponse
 */
DescribeAdvisorChecksFoPagesResponse Client::describeAdvisorChecksFoPagesWithOptions(const DescribeAdvisorChecksFoPagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeAdvisorChecksFoPagesShrinkRequest request = DescribeAdvisorChecksFoPagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCheckTypes()) {
    request.setCheckTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCheckTypes(), "CheckTypes", "json"));
  }

  json query = {};
  if (!!request.hasAssumeAliyunId()) {
    query["AssumeAliyunId"] = request.getAssumeAliyunId();
  }

  if (!!request.hasBizCategory()) {
    query["BizCategory"] = request.getBizCategory();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasCheckTypesShrink()) {
    query["CheckTypes"] = request.getCheckTypesShrink();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdvisorChecksFoPages"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvisorChecksFoPagesResponse>();
}

/**
 * @summary 巡检项设置-分页
 *
 * @param request DescribeAdvisorChecksFoPagesRequest
 * @return DescribeAdvisorChecksFoPagesResponse
 */
DescribeAdvisorChecksFoPagesResponse Client::describeAdvisorChecksFoPages(const DescribeAdvisorChecksFoPagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvisorChecksFoPagesWithOptions(request, runtime);
}

/**
 * @summary 查询资源
 *
 * @param request DescribeAdvisorResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvisorResourcesResponse
 */
DescribeAdvisorResourcesResponse Client::describeAdvisorResourcesWithOptions(const DescribeAdvisorResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdvisorResources"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvisorResourcesResponse>();
}

/**
 * @summary 查询资源
 *
 * @param request DescribeAdvisorResourcesRequest
 * @return DescribeAdvisorResourcesResponse
 */
DescribeAdvisorResourcesResponse Client::describeAdvisorResources(const DescribeAdvisorResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvisorResourcesWithOptions(request, runtime);
}

/**
 * @summary 查询成本优化结果详情
 *
 * @param tmpReq DescribeCostCheckAdvicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCostCheckAdvicesResponse
 */
DescribeCostCheckAdvicesResponse Client::describeCostCheckAdvicesWithOptions(const DescribeCostCheckAdvicesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeCostCheckAdvicesShrinkRequest request = DescribeCostCheckAdvicesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssumeAliyunIdList()) {
    request.setAssumeAliyunIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssumeAliyunIdList(), "AssumeAliyunIdList", "json"));
  }

  if (!!tmpReq.hasRegionIds()) {
    request.setRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRegionIds(), "RegionIds", "json"));
  }

  if (!!tmpReq.hasResourceGroupIdList()) {
    request.setResourceGroupIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceGroupIdList(), "ResourceGroupIdList", "json"));
  }

  if (!!tmpReq.hasResourceIds()) {
    request.setResourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceIds(), "ResourceIds", "json"));
  }

  if (!!tmpReq.hasTagKeys()) {
    request.setTagKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagKeys(), "TagKeys", "json"));
  }

  if (!!tmpReq.hasTagList()) {
    request.setTagListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagList(), "TagList", "json"));
  }

  if (!!tmpReq.hasTagValues()) {
    request.setTagValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagValues(), "TagValues", "json"));
  }

  json query = {};
  if (!!request.hasAssumeAliyunIdListShrink()) {
    query["AssumeAliyunIdList"] = request.getAssumeAliyunIdListShrink();
  }

  if (!!request.hasCheckId()) {
    query["CheckId"] = request.getCheckId();
  }

  if (!!request.hasCheckPlanId()) {
    query["CheckPlanId"] = request.getCheckPlanId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionIdsShrink()) {
    query["RegionIds"] = request.getRegionIdsShrink();
  }

  if (!!request.hasResourceGroupIdListShrink()) {
    query["ResourceGroupIdList"] = request.getResourceGroupIdListShrink();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceIdsShrink()) {
    query["ResourceIds"] = request.getResourceIdsShrink();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.getResourceName();
  }

  if (!!request.hasSeverity()) {
    query["Severity"] = request.getSeverity();
  }

  if (!!request.hasTagKeysShrink()) {
    query["TagKeys"] = request.getTagKeysShrink();
  }

  if (!!request.hasTagListShrink()) {
    query["TagList"] = request.getTagListShrink();
  }

  if (!!request.hasTagValuesShrink()) {
    query["TagValues"] = request.getTagValuesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCostCheckAdvices"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCostCheckAdvicesResponse>();
}

/**
 * @summary 查询成本优化结果详情
 *
 * @param request DescribeCostCheckAdvicesRequest
 * @return DescribeCostCheckAdvicesResponse
 */
DescribeCostCheckAdvicesResponse Client::describeCostCheckAdvices(const DescribeCostCheckAdvicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCostCheckAdvicesWithOptions(request, runtime);
}

/**
 * @summary 查询巡检项聚合成本优化结果概览
 *
 * @param tmpReq DescribeCostCheckResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCostCheckResultsResponse
 */
DescribeCostCheckResultsResponse Client::describeCostCheckResultsWithOptions(const DescribeCostCheckResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeCostCheckResultsShrinkRequest request = DescribeCostCheckResultsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssumeAliyunIdList()) {
    request.setAssumeAliyunIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssumeAliyunIdList(), "AssumeAliyunIdList", "json"));
  }

  if (!!tmpReq.hasCheckIds()) {
    request.setCheckIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCheckIds(), "CheckIds", "json"));
  }

  if (!!tmpReq.hasRegionIds()) {
    request.setRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRegionIds(), "RegionIds", "json"));
  }

  if (!!tmpReq.hasResourceGroupIdList()) {
    request.setResourceGroupIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceGroupIdList(), "ResourceGroupIdList", "json"));
  }

  if (!!tmpReq.hasResourceIds()) {
    request.setResourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceIds(), "ResourceIds", "json"));
  }

  if (!!tmpReq.hasTagKeys()) {
    request.setTagKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagKeys(), "TagKeys", "json"));
  }

  if (!!tmpReq.hasTagList()) {
    request.setTagListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagList(), "TagList", "json"));
  }

  if (!!tmpReq.hasTagValues()) {
    request.setTagValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagValues(), "TagValues", "json"));
  }

  json query = {};
  if (!!request.hasAssumeAliyunIdListShrink()) {
    query["AssumeAliyunIdList"] = request.getAssumeAliyunIdListShrink();
  }

  if (!!request.hasCheckIdsShrink()) {
    query["CheckIds"] = request.getCheckIdsShrink();
  }

  if (!!request.hasCheckPlanId()) {
    query["CheckPlanId"] = request.getCheckPlanId();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.getGroupBy();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRegionIdsShrink()) {
    query["RegionIds"] = request.getRegionIdsShrink();
  }

  if (!!request.hasResourceGroupIdListShrink()) {
    query["ResourceGroupIdList"] = request.getResourceGroupIdListShrink();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceIdsShrink()) {
    query["ResourceIds"] = request.getResourceIdsShrink();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.getResourceName();
  }

  if (!!request.hasSeverity()) {
    query["Severity"] = request.getSeverity();
  }

  if (!!request.hasTagKeysShrink()) {
    query["TagKeys"] = request.getTagKeysShrink();
  }

  if (!!request.hasTagListShrink()) {
    query["TagList"] = request.getTagListShrink();
  }

  if (!!request.hasTagValuesShrink()) {
    query["TagValues"] = request.getTagValuesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCostCheckResults"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCostCheckResultsResponse>();
}

/**
 * @summary 查询巡检项聚合成本优化结果概览
 *
 * @param request DescribeCostCheckResultsRequest
 * @return DescribeCostCheckResultsResponse
 */
DescribeCostCheckResultsResponse Client::describeCostCheckResults(const DescribeCostCheckResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCostCheckResultsWithOptions(request, runtime);
}

/**
 * @summary 成本优化-概览
 *
 * @param tmpReq DescribeCostOptimizationOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCostOptimizationOverviewResponse
 */
DescribeCostOptimizationOverviewResponse Client::describeCostOptimizationOverviewWithOptions(const DescribeCostOptimizationOverviewRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeCostOptimizationOverviewShrinkRequest request = DescribeCostOptimizationOverviewShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssumeAliyunIdList()) {
    request.setAssumeAliyunIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssumeAliyunIdList(), "AssumeAliyunIdList", "json"));
  }

  json query = {};
  if (!!request.hasAssumeAliyunId()) {
    query["AssumeAliyunId"] = request.getAssumeAliyunId();
  }

  if (!!request.hasAssumeAliyunIdListShrink()) {
    query["AssumeAliyunIdList"] = request.getAssumeAliyunIdListShrink();
  }

  if (!!request.hasCheckPlanId()) {
    query["CheckPlanId"] = request.getCheckPlanId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCostOptimizationOverview"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCostOptimizationOverviewResponse>();
}

/**
 * @summary 成本优化-概览
 *
 * @param request DescribeCostOptimizationOverviewRequest
 * @return DescribeCostOptimizationOverviewResponse
 */
DescribeCostOptimizationOverviewResponse Client::describeCostOptimizationOverview(const DescribeCostOptimizationOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCostOptimizationOverviewWithOptions(request, runtime);
}

/**
 * @summary 历史
 *
 * @param request GetHistoryAdvicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHistoryAdvicesResponse
 */
GetHistoryAdvicesResponse Client::getHistoryAdvicesWithOptions(const GetHistoryAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.getReverse();
  }

  if (!!request.hasSeverity()) {
    query["Severity"] = request.getSeverity();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHistoryAdvices"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHistoryAdvicesResponse>();
}

/**
 * @summary 历史
 *
 * @param request GetHistoryAdvicesRequest
 * @return GetHistoryAdvicesResponse
 */
GetHistoryAdvicesResponse Client::getHistoryAdvices(const GetHistoryAdvicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHistoryAdvicesWithOptions(request, runtime);
}

/**
 * @summary 获取任务执行进度(普通用户、RD单账号)
 *
 * @param request GetInspectProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInspectProgressResponse
 */
GetInspectProgressResponse Client::getInspectProgressWithOptions(const GetInspectProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssumeAliyunId()) {
    query["AssumeAliyunId"] = request.getAssumeAliyunId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInspectProgress"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInspectProgressResponse>();
}

/**
 * @summary 获取任务执行进度(普通用户、RD单账号)
 *
 * @param request GetInspectProgressRequest
 * @return GetInspectProgressResponse
 */
GetInspectProgressResponse Client::getInspectProgress(const GetInspectProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInspectProgressWithOptions(request, runtime);
}

/**
 * @summary 获取云产品的列表
 *
 * @param request GetProductListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProductListResponse
 */
GetProductListResponse Client::getProductListWithOptions(const GetProductListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProductList"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProductListResponse>();
}

/**
 * @summary 获取云产品的列表
 *
 * @param request GetProductListRequest
 * @return GetProductListResponse
 */
GetProductListResponse Client::getProductList(const GetProductListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProductListWithOptions(request, runtime);
}

/**
 * @summary 根据id获取任务状态
 *
 * @param request GetTaskStatusByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskStatusByIdResponse
 */
GetTaskStatusByIdResponse Client::getTaskStatusByIdWithOptions(const GetTaskStatusByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskStatusById"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskStatusByIdResponse>();
}

/**
 * @summary 根据id获取任务状态
 *
 * @param request GetTaskStatusByIdRequest
 * @return GetTaskStatusByIdResponse
 */
GetTaskStatusByIdResponse Client::getTaskStatusById(const GetTaskStatusByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskStatusByIdWithOptions(request, runtime);
}

/**
 * @summary 触发立即巡检
 *
 * @param tmpReq RefreshAdvisorCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshAdvisorCheckResponse
 */
RefreshAdvisorCheckResponse Client::refreshAdvisorCheckWithOptions(const RefreshAdvisorCheckRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RefreshAdvisorCheckShrinkRequest request = RefreshAdvisorCheckShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceDimensionList()) {
    request.setResourceDimensionListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceDimensionList(), "ResourceDimensionList", "json"));
  }

  json query = {};
  if (!!request.hasAssumeAliyunId()) {
    query["AssumeAliyunId"] = request.getAssumeAliyunId();
  }

  if (!!request.hasCheckId()) {
    query["CheckId"] = request.getCheckId();
  }

  if (!!request.hasCheckPlanId()) {
    query["CheckPlanId"] = request.getCheckPlanId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  json body = {};
  if (!!request.hasResourceDimensionListShrink()) {
    body["ResourceDimensionList"] = request.getResourceDimensionListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RefreshAdvisorCheck"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshAdvisorCheckResponse>();
}

/**
 * @summary 触发立即巡检
 *
 * @param request RefreshAdvisorCheckRequest
 * @return RefreshAdvisorCheckResponse
 */
RefreshAdvisorCheckResponse Client::refreshAdvisorCheck(const RefreshAdvisorCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshAdvisorCheckWithOptions(request, runtime);
}

/**
 * @summary 发起成本优化巡检
 *
 * @param tmpReq RefreshAdvisorCostCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshAdvisorCostCheckResponse
 */
RefreshAdvisorCostCheckResponse Client::refreshAdvisorCostCheckWithOptions(const RefreshAdvisorCostCheckRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RefreshAdvisorCostCheckShrinkRequest request = RefreshAdvisorCostCheckShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssumeAliyunIdList()) {
    request.setAssumeAliyunIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssumeAliyunIdList(), "AssumeAliyunIdList", "json"));
  }

  if (!!tmpReq.hasCheckIds()) {
    request.setCheckIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCheckIds(), "CheckIds", "json"));
  }

  if (!!tmpReq.hasResourceIds()) {
    request.setResourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceIds(), "ResourceIds", "json"));
  }

  json query = {};
  if (!!request.hasAssumeAliyunIdListShrink()) {
    query["AssumeAliyunIdList"] = request.getAssumeAliyunIdListShrink();
  }

  if (!!request.hasCheckIdsShrink()) {
    query["CheckIds"] = request.getCheckIdsShrink();
  }

  if (!!request.hasCheckPlanId()) {
    query["CheckPlanId"] = request.getCheckPlanId();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRefreshResource()) {
    query["RefreshResource"] = request.getRefreshResource();
  }

  if (!!request.hasResourceIdsShrink()) {
    query["ResourceIds"] = request.getResourceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshAdvisorCostCheck"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshAdvisorCostCheckResponse>();
}

/**
 * @summary 发起成本优化巡检
 *
 * @param request RefreshAdvisorCostCheckRequest
 * @return RefreshAdvisorCostCheckResponse
 */
RefreshAdvisorCostCheckResponse Client::refreshAdvisorCostCheck(const RefreshAdvisorCostCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshAdvisorCostCheckWithOptions(request, runtime);
}

/**
 * @summary RefreshAdvisorResource
 *
 * @param request RefreshAdvisorResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshAdvisorResourceResponse
 */
RefreshAdvisorResourceResponse Client::refreshAdvisorResourceWithOptions(const RefreshAdvisorResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshAdvisorResource"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshAdvisorResourceResponse>();
}

/**
 * @summary RefreshAdvisorResource
 *
 * @param request RefreshAdvisorResourceRequest
 * @return RefreshAdvisorResourceResponse
 */
RefreshAdvisorResourceResponse Client::refreshAdvisorResource(const RefreshAdvisorResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshAdvisorResourceWithOptions(request, runtime);
}

/**
 * @summary 上报用户业务报警信息
 *
 * @param tmpReq ReportBizAlertInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReportBizAlertInfoResponse
 */
ReportBizAlertInfoResponse Client::reportBizAlertInfoWithOptions(const ReportBizAlertInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReportBizAlertInfoShrinkRequest request = ReportBizAlertInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAlertUid()) {
    request.setAlertUidShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAlertUid(), "AlertUid", "json"));
  }

  json query = {};
  if (!!request.hasAlertDescription()) {
    query["AlertDescription"] = request.getAlertDescription();
  }

  if (!!request.hasAlertDetail()) {
    query["AlertDetail"] = request.getAlertDetail();
  }

  if (!!request.hasAlertGrade()) {
    query["AlertGrade"] = request.getAlertGrade();
  }

  if (!!request.hasAlertLabels()) {
    query["AlertLabels"] = request.getAlertLabels();
  }

  if (!!request.hasAlertScene()) {
    query["AlertScene"] = request.getAlertScene();
  }

  if (!!request.hasAlertToken()) {
    query["AlertToken"] = request.getAlertToken();
  }

  if (!!request.hasAlertUidShrink()) {
    query["AlertUid"] = request.getAlertUidShrink();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReportBizAlertInfo"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReportBizAlertInfoResponse>();
}

/**
 * @summary 上报用户业务报警信息
 *
 * @param request ReportBizAlertInfoRequest
 * @return ReportBizAlertInfoResponse
 */
ReportBizAlertInfoResponse Client::reportBizAlertInfo(const ReportBizAlertInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reportBizAlertInfoWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Advisor20180120