#include <darabonba/Core.hpp>
#include <alibabacloud/AntiddosPublic20170518.hpp>
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
using namespace AlibabaCloud::AntiddosPublic20170518::Models;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{

AlibabaCloud::AntiddosPublic20170518::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "antiddos.aliyuncs.com"},
    {"cn-beijing" , "antiddos.aliyuncs.com"},
    {"cn-zhangjiakou" , "antiddos-openapi.cn-zhangjiakou.aliyuncs.com"},
    {"cn-huhehaote" , "antiddos-openapi.cn-huhehaote.aliyuncs.com"},
    {"cn-wulanchabu" , "antiddos-openapi.cn-wulanchabu.aliyuncs.com"},
    {"cn-hangzhou" , "antiddos.aliyuncs.com"},
    {"cn-shanghai" , "antiddos.aliyuncs.com"},
    {"cn-nanjing" , "antiddos-openapi.cn-hangzhou-cloudstone.aliyuncs.com"},
    {"cn-shenzhen" , "antiddos.aliyuncs.com"},
    {"cn-heyuan" , "antiddos-openapi.cn-heyuan.aliyuncs.com"},
    {"cn-guangzhou" , "antiddos-openapi.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "antiddos-openapi.cn-chengdu.aliyuncs.com"},
    {"cn-hongkong" , "antiddos.aliyuncs.com"},
    {"ap-northeast-1" , "antiddos-openapi.ap-northeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "antiddos-openapi.ap-northeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "antiddos.aliyuncs.com"},
    {"ap-southeast-2" , "antiddos-openapi.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3" , "antiddos-openapi.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5" , "antiddos-openapi.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-6" , "antiddos-openapi.ap-southeast-6.aliyuncs.com"},
    {"us-east-1" , "antiddos.aliyuncs.com"},
    {"us-west-1" , "antiddos.aliyuncs.com"},
    {"eu-west-1" , "antiddos-openapi.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "antiddos-openapi.eu-central-1.aliyuncs.com"},
    {"ap-south-1" , "antiddos-openapi.ap-south-1.aliyuncs.com"},
    {"me-east-1" , "antiddos-openapi.me-east-1.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "antiddos.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "antiddos.aliyuncs.com"},
    {"cn-north-2-gov-1" , "antiddos.aliyuncs.com"},
    {"ap-northeast-2-pop" , "antiddos.aliyuncs.com"},
    {"cn-beijing-finance-1" , "antiddos.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "antiddos.aliyuncs.com"},
    {"cn-beijing-gov-1" , "antiddos.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "antiddos.aliyuncs.com"},
    {"cn-edge-1" , "antiddos.aliyuncs.com"},
    {"cn-fujian" , "antiddos.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "antiddos.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "antiddos.aliyuncs.com"},
    {"cn-hangzhou-finance" , "antiddos.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "antiddos.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "antiddos.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "antiddos.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "antiddos.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "antiddos.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "antiddos.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "antiddos.aliyuncs.com"},
    {"cn-qingdao-nebula" , "antiddos.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "antiddos.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "antiddos.aliyuncs.com"},
    {"cn-shanghai-inner" , "antiddos.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "antiddos.aliyuncs.com"},
    {"cn-shenzhen-inner" , "antiddos.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "antiddos.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "antiddos.aliyuncs.com"},
    {"cn-wuhan" , "antiddos.aliyuncs.com"},
    {"cn-yushanfang" , "antiddos.aliyuncs.com"},
    {"cn-zhangbei" , "antiddos.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "antiddos.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "antiddos-openapi.cn-zhangjiakou.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "antiddos.aliyuncs.com"},
    {"eu-west-1-oxs" , "antiddos.aliyuncs.com"},
    {"rus-west-1-pop" , "antiddos.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("antiddos-public", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Queries the configurations of the Anti-DDoS Origin instance that is associated with an asset. The asset is assigned a public IP address.
 *
 * @description You can call the DescribeBgpPackByIp operation to query the configurations of the Anti-DDoS Origin instance that is associated with an asset. The configurations include the basic protection threshold, burstable protection threshold, and expiration time.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeBgpPackByIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBgpPackByIpResponse
 */
DescribeBgpPackByIpResponse Client::describeBgpPackByIpWithOptions(const DescribeBgpPackByIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.ddosRegionId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBgpPackByIp"},
    {"version" , "2017-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBgpPackByIpResponse>();
}

/**
 * @summary Queries the configurations of the Anti-DDoS Origin instance that is associated with an asset. The asset is assigned a public IP address.
 *
 * @description You can call the DescribeBgpPackByIp operation to query the configurations of the Anti-DDoS Origin instance that is associated with an asset. The configurations include the basic protection threshold, burstable protection threshold, and expiration time.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeBgpPackByIpRequest
 * @return DescribeBgpPackByIpResponse
 */
DescribeBgpPackByIpResponse Client::describeBgpPackByIp(const DescribeBgpPackByIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBgpPackByIpWithOptions(request, runtime);
}

/**
 * @summary Queries the download link to the traffic data that is captured when a DDoS attack event occurs.
 *
 * @description You can call the DescribeCap operation to query the download link to the traffic data that is captured when a DDoS attack event occurs. You can download the traffic data from the download link and use the data as evidence.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeCapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCapResponse
 */
DescribeCapResponse Client::describeCapWithOptions(const DescribeCapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBegTime()) {
    query["BegTime"] = request.begTime();
  }

  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.ddosRegionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasInternetIp()) {
    query["InternetIp"] = request.internetIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCap"},
    {"version" , "2017-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCapResponse>();
}

/**
 * @summary Queries the download link to the traffic data that is captured when a DDoS attack event occurs.
 *
 * @description You can call the DescribeCap operation to query the download link to the traffic data that is captured when a DDoS attack event occurs. You can download the traffic data from the download link and use the data as evidence.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeCapRequest
 * @return DescribeCapResponse
 */
DescribeCapResponse Client::describeCap(const DescribeCapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCapWithOptions(request, runtime);
}

/**
 * @summary Queries the number of assets that are under DDoS attacks in a specific region. The assets are assigned public IP addresses.
 *
 * @description ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDdosCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDdosCountResponse
 */
DescribeDdosCountResponse Client::describeDdosCountWithOptions(const DescribeDdosCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.ddosRegionId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDdosCount"},
    {"version" , "2017-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDdosCountResponse>();
}

/**
 * @summary Queries the number of assets that are under DDoS attacks in a specific region. The assets are assigned public IP addresses.
 *
 * @description ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDdosCountRequest
 * @return DescribeDdosCountResponse
 */
DescribeDdosCountResponse Client::describeDdosCount(const DescribeDdosCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDdosCountWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the security credit score of the current Alibaba Cloud account in a specific region.
 *
 * @description You can call the DescribeDdosCredit operation to query the details of the security credit score of the current Alibaba Cloud account in a specific region. The details include the security credit score, security credit level, and the time period after which blackhole filtering is automatically deactivated.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDdosCreditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDdosCreditResponse
 */
DescribeDdosCreditResponse Client::describeDdosCreditWithOptions(const DescribeDdosCreditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.ddosRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDdosCredit"},
    {"version" , "2017-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDdosCreditResponse>();
}

/**
 * @summary Queries the details of the security credit score of the current Alibaba Cloud account in a specific region.
 *
 * @description You can call the DescribeDdosCredit operation to query the details of the security credit score of the current Alibaba Cloud account in a specific region. The details include the security credit score, security credit level, and the time period after which blackhole filtering is automatically deactivated.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDdosCreditRequest
 * @return DescribeDdosCreditResponse
 */
DescribeDdosCreditResponse Client::describeDdosCredit(const DescribeDdosCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDdosCreditWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the DDoS attack events that occur on an asset. The asset is assigned a public IP address.
 *
 * @description You can call the DescribeDdosEventList operation to query the details of the DDoS attack events that occur on an asset by page. The details include the start time, end time, and status of each DDoS attack event.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDdosEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDdosEventListResponse
 */
DescribeDdosEventListResponse Client::describeDdosEventListWithOptions(const DescribeDdosEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.ddosRegionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasInternetIp()) {
    query["InternetIp"] = request.internetIp();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryDays()) {
    query["QueryDays"] = request.queryDays();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDdosEventList"},
    {"version" , "2017-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDdosEventListResponse>();
}

/**
 * @summary Queries the details of the DDoS attack events that occur on an asset. The asset is assigned a public IP address.
 *
 * @description You can call the DescribeDdosEventList operation to query the details of the DDoS attack events that occur on an asset by page. The details include the start time, end time, and status of each DDoS attack event.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDdosEventListRequest
 * @return DescribeDdosEventListResponse
 */
DescribeDdosEventListResponse Client::describeDdosEventList(const DescribeDdosEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDdosEventListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the DDoS mitigation thresholds or traffic scrubbing thresholds for specified assets. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
 *
 * @description You can call the DescribeDdosThreshold operation to query the details of the DDoS mitigation thresholds or traffic scrubbing thresholds for specified assets. The details include the current traffic scrubbing threshold, maximum traffic scrubbing threshold, current DDoS mitigation threshold, and maximum DDoS mitigation threshold.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDdosThresholdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDdosThresholdResponse
 */
DescribeDdosThresholdResponse Client::describeDdosThresholdWithOptions(const DescribeDdosThresholdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.ddosRegionId();
  }

  if (!!request.hasDdosType()) {
    query["DdosType"] = request.ddosType();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDdosThreshold"},
    {"version" , "2017-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDdosThresholdResponse>();
}

/**
 * @summary Queries the details of the DDoS mitigation thresholds or traffic scrubbing thresholds for specified assets. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
 *
 * @description You can call the DescribeDdosThreshold operation to query the details of the DDoS mitigation thresholds or traffic scrubbing thresholds for specified assets. The details include the current traffic scrubbing threshold, maximum traffic scrubbing threshold, current DDoS mitigation threshold, and maximum DDoS mitigation threshold.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDdosThresholdRequest
 * @return DescribeDdosThresholdResponse
 */
DescribeDdosThresholdResponse Client::describeDdosThreshold(const DescribeDdosThresholdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDdosThresholdWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the assets within the current Alibaba Cloud account. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses. This operation is phased out. We recommend that you use the DescribeInstanceIpAddress operation.
 *
 * @description You can call the DescribeInstance operation to query the details of the assets that are within the current Alibaba Cloud account by page. The details include the IDs and IP addresses of the assets, the basic protection thresholds and traffic scrubbing thresholds that are configured for the assets in Anti-DDoS Origin, and whether the assets are associated with Anti-DDoS Origin instances.
 * ### [](#qps-)Limits
 * You can call this operation up to 200 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstanceWithOptions(const DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.ddosRegionId();
  }

  if (!!request.hasDdosStatus()) {
    query["DdosStatus"] = request.ddosStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceIp()) {
    query["InstanceIp"] = request.instanceIp();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstance"},
    {"version" , "2017-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceResponse>();
}

/**
 * @summary Queries the details of the assets within the current Alibaba Cloud account. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses. This operation is phased out. We recommend that you use the DescribeInstanceIpAddress operation.
 *
 * @description You can call the DescribeInstance operation to query the details of the assets that are within the current Alibaba Cloud account by page. The details include the IDs and IP addresses of the assets, the basic protection thresholds and traffic scrubbing thresholds that are configured for the assets in Anti-DDoS Origin, and whether the assets are associated with Anti-DDoS Origin instances.
 * ### [](#qps-)Limits
 * You can call this operation up to 200 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeInstanceRequest
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const DescribeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the assets within the current Alibaba Cloud account and the details of the Anti-DDoS Origin instance to which the assets belong. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
 *
 * @description If one or more assets of the current Alibaba Cloud account are added to an Anti-DDoS Origin instance, you can call the DescribeInstanceIpAddress operation to query the DDoS mitigation information and the details of the Anti-DDoS Origin instance. The information and the details include the basic protection threshold and traffic scrubbing threshold for the assets, DDoS mitigation status of the assets, ID of the instance, and the mitigation status of the instance.
 * ## Limits
 * You can call this operation up to 200 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeInstanceIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceIpAddressResponse
 */
DescribeInstanceIpAddressResponse Client::describeInstanceIpAddressWithOptions(const DescribeInstanceIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.ddosRegionId();
  }

  if (!!request.hasDdosStatus()) {
    query["DdosStatus"] = request.ddosStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceIp()) {
    query["InstanceIp"] = request.instanceIp();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceIpAddress"},
    {"version" , "2017-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceIpAddressResponse>();
}

/**
 * @summary Queries the details of the assets within the current Alibaba Cloud account and the details of the Anti-DDoS Origin instance to which the assets belong. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
 *
 * @description If one or more assets of the current Alibaba Cloud account are added to an Anti-DDoS Origin instance, you can call the DescribeInstanceIpAddress operation to query the DDoS mitigation information and the details of the Anti-DDoS Origin instance. The information and the details include the basic protection threshold and traffic scrubbing threshold for the assets, DDoS mitigation status of the assets, ID of the instance, and the mitigation status of the instance.
 * ## Limits
 * You can call this operation up to 200 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeInstanceIpAddressRequest
 * @return DescribeInstanceIpAddressResponse
 */
DescribeInstanceIpAddressResponse Client::describeInstanceIpAddress(const DescribeInstanceIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceIpAddressWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the DDoS mitigation thresholds or traffic scrubbing thresholds for specified assets. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
 *
 * @description If one or more assets of the current Alibaba Cloud account are added to an Anti-DDoS Origin instance, you can call the DescribeIpDdosThreshold operation to query the details of the DDoS mitigation threshold or traffic scrubbing threshold for a specific asset. The details include the current traffic scrubbing threshold, maximum scrubbing threshold, current DDoS mitigation threshold, and maximum DDoS mitigation threshold.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeIpDdosThresholdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpDdosThresholdResponse
 */
DescribeIpDdosThresholdResponse Client::describeIpDdosThresholdWithOptions(const DescribeIpDdosThresholdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.ddosRegionId();
  }

  if (!!request.hasDdosType()) {
    query["DdosType"] = request.ddosType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasInternetIp()) {
    query["InternetIp"] = request.internetIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIpDdosThreshold"},
    {"version" , "2017-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIpDdosThresholdResponse>();
}

/**
 * @summary Queries the details of the DDoS mitigation thresholds or traffic scrubbing thresholds for specified assets. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
 *
 * @description If one or more assets of the current Alibaba Cloud account are added to an Anti-DDoS Origin instance, you can call the DescribeIpDdosThreshold operation to query the details of the DDoS mitigation threshold or traffic scrubbing threshold for a specific asset. The details include the current traffic scrubbing threshold, maximum scrubbing threshold, current DDoS mitigation threshold, and maximum DDoS mitigation threshold.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeIpDdosThresholdRequest
 * @return DescribeIpDdosThresholdResponse
 */
DescribeIpDdosThresholdResponse Client::describeIpDdosThreshold(const DescribeIpDdosThresholdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpDdosThresholdWithOptions(request, runtime);
}

/**
 * @summary Queries the region to which the public IP address of the asset within the current Alibaba Cloud account belongs. The asset can be an elastic IP address (EIP). The asset can also be an Elastic Compute Service (ECS) instance or Server Load Balancer (SLB) instance that is assigned a public IP address.
 *
 * @description You can call the DescribeIpLocationService operation to query the region of the public IP address for a specified asset that is within the current Alibaba Cloud account. You can also query the details of the Anti-DDoS Origin instance to which the asset is added. The details include the ID and name.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeIpLocationServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpLocationServiceResponse
 */
DescribeIpLocationServiceResponse Client::describeIpLocationServiceWithOptions(const DescribeIpLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInternetIp()) {
    query["InternetIp"] = request.internetIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIpLocationService"},
    {"version" , "2017-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIpLocationServiceResponse>();
}

/**
 * @summary Queries the region to which the public IP address of the asset within the current Alibaba Cloud account belongs. The asset can be an elastic IP address (EIP). The asset can also be an Elastic Compute Service (ECS) instance or Server Load Balancer (SLB) instance that is assigned a public IP address.
 *
 * @description You can call the DescribeIpLocationService operation to query the region of the public IP address for a specified asset that is within the current Alibaba Cloud account. You can also query the details of the Anti-DDoS Origin instance to which the asset is added. The details include the ID and name.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeIpLocationServiceRequest
 * @return DescribeIpLocationServiceResponse
 */
DescribeIpLocationServiceResponse Client::describeIpLocationService(const DescribeIpLocationServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpLocationServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the regions in which Anti-DDoS Origin Basic is available.
 *
 * @description You can call this operation to query information about the regions in which Anti-DDoS Origin Basic is available. The information includes the region ID, region name, and code.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2017-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries the regions in which Anti-DDoS Origin Basic is available.
 *
 * @description You can call this operation to query information about the regions in which Anti-DDoS Origin Basic is available. The information includes the region ID, region name, and code.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(runtime);
}

/**
 * @summary Changes the scrubbing thresholds for an asset that is assigned a public IP address.
 *
 * @description ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyDefenseThresholdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefenseThresholdResponse
 */
ModifyDefenseThresholdResponse Client::modifyDefenseThresholdWithOptions(const ModifyDefenseThresholdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBps()) {
    query["Bps"] = request.bps();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.ddosRegionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasInternetIp()) {
    query["InternetIp"] = request.internetIp();
  }

  if (!!request.hasIsAuto()) {
    query["IsAuto"] = request.isAuto();
  }

  if (!!request.hasPps()) {
    query["Pps"] = request.pps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDefenseThreshold"},
    {"version" , "2017-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDefenseThresholdResponse>();
}

/**
 * @summary Changes the scrubbing thresholds for an asset that is assigned a public IP address.
 *
 * @description ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyDefenseThresholdRequest
 * @return ModifyDefenseThresholdResponse
 */
ModifyDefenseThresholdResponse Client::modifyDefenseThreshold(const ModifyDefenseThresholdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefenseThresholdWithOptions(request, runtime);
}

/**
 * @summary Modifies the scrubbing thresholds for an asset that is assigned a public IP address. This operation is a synchronous operation that supports Terraform.
 *
 * @description ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyIpDefenseThresholdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIpDefenseThresholdResponse
 */
ModifyIpDefenseThresholdResponse Client::modifyIpDefenseThresholdWithOptions(const ModifyIpDefenseThresholdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBps()) {
    query["Bps"] = request.bps();
  }

  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.ddosRegionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasInternetIp()) {
    query["InternetIp"] = request.internetIp();
  }

  if (!!request.hasIsAuto()) {
    query["IsAuto"] = request.isAuto();
  }

  if (!!request.hasPps()) {
    query["Pps"] = request.pps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyIpDefenseThreshold"},
    {"version" , "2017-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyIpDefenseThresholdResponse>();
}

/**
 * @summary Modifies the scrubbing thresholds for an asset that is assigned a public IP address. This operation is a synchronous operation that supports Terraform.
 *
 * @description ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyIpDefenseThresholdRequest
 * @return ModifyIpDefenseThresholdResponse
 */
ModifyIpDefenseThresholdResponse Client::modifyIpDefenseThreshold(const ModifyIpDefenseThresholdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyIpDefenseThresholdWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518