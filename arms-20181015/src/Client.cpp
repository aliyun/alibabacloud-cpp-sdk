#include <darabonba/Core.hpp>
#include <alibabacloud/ARMS20181015.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::ARMS20181015::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace ARMS20181015
{

AlibabaCloud::ARMS20181015::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "arms.aliyuncs.com"},
    {"cn-beijing-finance-1" , "arms.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "arms.aliyuncs.com"},
    {"cn-beijing-gov-1" , "arms.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "arms.aliyuncs.com"},
    {"cn-edge-1" , "arms.aliyuncs.com"},
    {"cn-fujian" , "arms.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "arms.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "arms.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "arms.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "arms.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "arms.aliyuncs.com"},
    {"cn-qingdao-nebula" , "arms.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "arms.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "arms.aliyuncs.com"},
    {"cn-shanghai-inner" , "arms.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "arms.aliyuncs.com"},
    {"cn-shenzhen-inner" , "arms.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "arms.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "arms.aliyuncs.com"},
    {"cn-wuhan" , "arms.aliyuncs.com"},
    {"cn-yushanfang" , "arms.aliyuncs.com"},
    {"cn-zhangbei" , "arms.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "arms.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "arms.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "arms.aliyuncs.com"},
    {"eu-west-1-oxs" , "arms.aliyuncs.com"},
    {"me-east-1" , "arms.aliyuncs.com"},
    {"rus-west-1-pop" , "arms.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("arms", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request ARMSQueryDataSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ARMSQueryDataSetResponse
 */
ARMSQueryDataSetResponse Client::aRMSQueryDataSetWithOptions(const ARMSQueryDataSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDateStr()) {
    query["DateStr"] = request.getDateStr();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasHackerUserId()) {
    query["HackerUserId"] = request.getHackerUserId();
  }

  if (!!request.hasHungryMode()) {
    query["HungryMode"] = request.getHungryMode();
  }

  if (!!request.hasIntervalInSec()) {
    query["IntervalInSec"] = request.getIntervalInSec();
  }

  if (!!request.hasIsDrillDown()) {
    query["IsDrillDown"] = request.getIsDrillDown();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasMaxTime()) {
    query["MaxTime"] = request.getMaxTime();
  }

  if (!!request.hasMeasures()) {
    query["Measures"] = request.getMeasures();
  }

  if (!!request.hasMinTime()) {
    query["MinTime"] = request.getMinTime();
  }

  if (!!request.hasOptionalDims()) {
    query["OptionalDims"] = request.getOptionalDims();
  }

  if (!!request.hasOrderByKey()) {
    query["OrderByKey"] = request.getOrderByKey();
  }

  if (!!request.hasReduceTail()) {
    query["ReduceTail"] = request.getReduceTail();
  }

  if (!!request.hasRequiredDims()) {
    query["RequiredDims"] = request.getRequiredDims();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ARMSQueryDataSet"},
    {"version" , "2018-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ARMSQueryDataSetResponse>();
}

/**
 * @param request ARMSQueryDataSetRequest
 * @return ARMSQueryDataSetResponse
 */
ARMSQueryDataSetResponse Client::aRMSQueryDataSet(const ARMSQueryDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return aRMSQueryDataSetWithOptions(request, runtime);
}

/**
 * @param request MetricQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MetricQueryResponse
 */
MetricQueryResponse Client::metricQueryWithOptions(const MetricQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasHackerUserId()) {
    query["HackerUserId"] = request.getHackerUserId();
  }

  if (!!request.hasIintervalInSec()) {
    query["IintervalInSec"] = request.getIintervalInSec();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasMeasures()) {
    query["Measures"] = request.getMeasures();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.getMetric();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MetricQuery"},
    {"version" , "2018-10-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MetricQueryResponse>();
}

/**
 * @param request MetricQueryRequest
 * @return MetricQueryResponse
 */
MetricQueryResponse Client::metricQuery(const MetricQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return metricQueryWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ARMS20181015