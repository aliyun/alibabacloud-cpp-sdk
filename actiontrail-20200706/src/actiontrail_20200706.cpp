// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/actiontrail_20200706.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Actiontrail20200706;

Alibabacloud_Actiontrail20200706::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "actiontrail.ap-northeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1", "actiontrail.aliyuncs.com"},
    {"cn-beijing-finance-pop", "actiontrail.aliyuncs.com"},
    {"cn-beijing-gov-1", "actiontrail.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "actiontrail.aliyuncs.com"},
    {"cn-edge-1", "actiontrail.aliyuncs.com"},
    {"cn-fujian", "actiontrail.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-finance", "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-test-306", "actiontrail.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "actiontrail.aliyuncs.com"},
    {"cn-qingdao-nebula", "actiontrail.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "actiontrail.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "actiontrail.aliyuncs.com"},
    {"cn-shanghai-inner", "actiontrail.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "actiontrail.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "actiontrail.aliyuncs.com"},
    {"cn-shenzhen-inner", "actiontrail.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "actiontrail.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "actiontrail.aliyuncs.com"},
    {"cn-wuhan", "actiontrail.aliyuncs.com"},
    {"cn-yushanfang", "actiontrail.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "actiontrail.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "actiontrail.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "actiontrail.aliyuncs.com"},
    {"eu-west-1-oxs", "actiontrail.ap-northeast-1.aliyuncs.com"},
    {"rus-west-1-pop", "actiontrail.ap-northeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("actiontrail"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Actiontrail20200706::Client::getEndpoint(shared_ptr<string> productId,
                                                             shared_ptr<string> regionId,
                                                             shared_ptr<string> endpointRule,
                                                             shared_ptr<string> network,
                                                             shared_ptr<string> suffix,
                                                             shared_ptr<map<string, string>> endpointMap,
                                                             shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CreateDeliveryHistoryJobResponse Alibabacloud_Actiontrail20200706::Client::createDeliveryHistoryJobWithOptions(shared_ptr<CreateDeliveryHistoryJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trailName)) {
    query->insert(pair<string, string>("TrailName", *request->trailName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeliveryHistoryJob"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeliveryHistoryJobResponse(callApi(params, req, runtime));
}

CreateDeliveryHistoryJobResponse Alibabacloud_Actiontrail20200706::Client::createDeliveryHistoryJob(shared_ptr<CreateDeliveryHistoryJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeliveryHistoryJobWithOptions(request, runtime);
}

CreateTrailResponse Alibabacloud_Actiontrail20200706::Client::createTrailWithOptions(shared_ptr<CreateTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventRW)) {
    query->insert(pair<string, string>("EventRW", *request->eventRW));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isOrganizationTrail)) {
    query->insert(pair<string, bool>("IsOrganizationTrail", *request->isOrganizationTrail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    query->insert(pair<string, string>("OssBucketName", *request->ossBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKeyPrefix)) {
    query->insert(pair<string, string>("OssKeyPrefix", *request->ossKeyPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossWriteRoleArn)) {
    query->insert(pair<string, string>("OssWriteRoleArn", *request->ossWriteRoleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsProjectArn)) {
    query->insert(pair<string, string>("SlsProjectArn", *request->slsProjectArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsWriteRoleArn)) {
    query->insert(pair<string, string>("SlsWriteRoleArn", *request->slsWriteRoleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trailRegion)) {
    query->insert(pair<string, string>("TrailRegion", *request->trailRegion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrail"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTrailResponse(callApi(params, req, runtime));
}

CreateTrailResponse Alibabacloud_Actiontrail20200706::Client::createTrail(shared_ptr<CreateTrailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTrailWithOptions(request, runtime);
}

DeleteDeliveryHistoryJobResponse Alibabacloud_Actiontrail20200706::Client::deleteDeliveryHistoryJobWithOptions(shared_ptr<DeleteDeliveryHistoryJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->jobId)) {
    query->insert(pair<string, long>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeliveryHistoryJob"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeliveryHistoryJobResponse(callApi(params, req, runtime));
}

DeleteDeliveryHistoryJobResponse Alibabacloud_Actiontrail20200706::Client::deleteDeliveryHistoryJob(shared_ptr<DeleteDeliveryHistoryJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeliveryHistoryJobWithOptions(request, runtime);
}

DeleteTrailResponse Alibabacloud_Actiontrail20200706::Client::deleteTrailWithOptions(shared_ptr<DeleteTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrail"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTrailResponse(callApi(params, req, runtime));
}

DeleteTrailResponse Alibabacloud_Actiontrail20200706::Client::deleteTrail(shared_ptr<DeleteTrailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTrailWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Actiontrail20200706::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Actiontrail20200706::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeTrailsResponse Alibabacloud_Actiontrail20200706::Client::describeTrailsWithOptions(shared_ptr<DescribeTrailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeOrganizationTrail)) {
    query->insert(pair<string, bool>("IncludeOrganizationTrail", *request->includeOrganizationTrail));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeShadowTrails)) {
    query->insert(pair<string, bool>("IncludeShadowTrails", *request->includeShadowTrails));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameList)) {
    query->insert(pair<string, string>("NameList", *request->nameList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrails"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTrailsResponse(callApi(params, req, runtime));
}

DescribeTrailsResponse Alibabacloud_Actiontrail20200706::Client::describeTrails(shared_ptr<DescribeTrailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrailsWithOptions(request, runtime);
}

GetAccessKeyLastUsedEventsResponse Alibabacloud_Actiontrail20200706::Client::getAccessKeyLastUsedEventsWithOptions(shared_ptr<GetAccessKeyLastUsedEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    query->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccessKeyLastUsedEvents"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccessKeyLastUsedEventsResponse(callApi(params, req, runtime));
}

GetAccessKeyLastUsedEventsResponse Alibabacloud_Actiontrail20200706::Client::getAccessKeyLastUsedEvents(shared_ptr<GetAccessKeyLastUsedEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccessKeyLastUsedEventsWithOptions(request, runtime);
}

GetAccessKeyLastUsedInfoResponse Alibabacloud_Actiontrail20200706::Client::getAccessKeyLastUsedInfoWithOptions(shared_ptr<GetAccessKeyLastUsedInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    query->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccessKeyLastUsedInfo"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccessKeyLastUsedInfoResponse(callApi(params, req, runtime));
}

GetAccessKeyLastUsedInfoResponse Alibabacloud_Actiontrail20200706::Client::getAccessKeyLastUsedInfo(shared_ptr<GetAccessKeyLastUsedInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccessKeyLastUsedInfoWithOptions(request, runtime);
}

GetAccessKeyLastUsedIpsResponse Alibabacloud_Actiontrail20200706::Client::getAccessKeyLastUsedIpsWithOptions(shared_ptr<GetAccessKeyLastUsedIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    query->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccessKeyLastUsedIps"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccessKeyLastUsedIpsResponse(callApi(params, req, runtime));
}

GetAccessKeyLastUsedIpsResponse Alibabacloud_Actiontrail20200706::Client::getAccessKeyLastUsedIps(shared_ptr<GetAccessKeyLastUsedIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccessKeyLastUsedIpsWithOptions(request, runtime);
}

GetAccessKeyLastUsedProductsResponse Alibabacloud_Actiontrail20200706::Client::getAccessKeyLastUsedProductsWithOptions(shared_ptr<GetAccessKeyLastUsedProductsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    query->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccessKeyLastUsedProducts"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccessKeyLastUsedProductsResponse(callApi(params, req, runtime));
}

GetAccessKeyLastUsedProductsResponse Alibabacloud_Actiontrail20200706::Client::getAccessKeyLastUsedProducts(shared_ptr<GetAccessKeyLastUsedProductsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccessKeyLastUsedProductsWithOptions(request, runtime);
}

GetAccessKeyLastUsedResourcesResponse Alibabacloud_Actiontrail20200706::Client::getAccessKeyLastUsedResourcesWithOptions(shared_ptr<GetAccessKeyLastUsedResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    query->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccessKeyLastUsedResources"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccessKeyLastUsedResourcesResponse(callApi(params, req, runtime));
}

GetAccessKeyLastUsedResourcesResponse Alibabacloud_Actiontrail20200706::Client::getAccessKeyLastUsedResources(shared_ptr<GetAccessKeyLastUsedResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccessKeyLastUsedResourcesWithOptions(request, runtime);
}

GetDeliveryHistoryJobResponse Alibabacloud_Actiontrail20200706::Client::getDeliveryHistoryJobWithOptions(shared_ptr<GetDeliveryHistoryJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->jobId)) {
    query->insert(pair<string, long>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeliveryHistoryJob"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeliveryHistoryJobResponse(callApi(params, req, runtime));
}

GetDeliveryHistoryJobResponse Alibabacloud_Actiontrail20200706::Client::getDeliveryHistoryJob(shared_ptr<GetDeliveryHistoryJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeliveryHistoryJobWithOptions(request, runtime);
}

GetGlobalEventsStorageRegionResponse Alibabacloud_Actiontrail20200706::Client::getGlobalEventsStorageRegionWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGlobalEventsStorageRegion"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGlobalEventsStorageRegionResponse(callApi(params, req, runtime));
}

GetGlobalEventsStorageRegionResponse Alibabacloud_Actiontrail20200706::Client::getGlobalEventsStorageRegion() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGlobalEventsStorageRegionWithOptions(runtime);
}

GetTrailStatusResponse Alibabacloud_Actiontrail20200706::Client::getTrailStatusWithOptions(shared_ptr<GetTrailStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isOrganizationTrail)) {
    query->insert(pair<string, bool>("IsOrganizationTrail", *request->isOrganizationTrail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrailStatus"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTrailStatusResponse(callApi(params, req, runtime));
}

GetTrailStatusResponse Alibabacloud_Actiontrail20200706::Client::getTrailStatus(shared_ptr<GetTrailStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTrailStatusWithOptions(request, runtime);
}

ListDeliveryHistoryJobsResponse Alibabacloud_Actiontrail20200706::Client::listDeliveryHistoryJobsWithOptions(shared_ptr<ListDeliveryHistoryJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeliveryHistoryJobs"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeliveryHistoryJobsResponse(callApi(params, req, runtime));
}

ListDeliveryHistoryJobsResponse Alibabacloud_Actiontrail20200706::Client::listDeliveryHistoryJobs(shared_ptr<ListDeliveryHistoryJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeliveryHistoryJobsWithOptions(request, runtime);
}

LookupEventsResponse Alibabacloud_Actiontrail20200706::Client::lookupEventsWithOptions(shared_ptr<LookupEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<LookupEventsRequestLookupAttribute>>(request->lookupAttribute)) {
    query->insert(pair<string, vector<LookupEventsRequestLookupAttribute>>("LookupAttribute", *request->lookupAttribute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxResults)) {
    query->insert(pair<string, string>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LookupEvents"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LookupEventsResponse(callApi(params, req, runtime));
}

LookupEventsResponse Alibabacloud_Actiontrail20200706::Client::lookupEvents(shared_ptr<LookupEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lookupEventsWithOptions(request, runtime);
}

StartLoggingResponse Alibabacloud_Actiontrail20200706::Client::startLoggingWithOptions(shared_ptr<StartLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartLogging"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartLoggingResponse(callApi(params, req, runtime));
}

StartLoggingResponse Alibabacloud_Actiontrail20200706::Client::startLogging(shared_ptr<StartLoggingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startLoggingWithOptions(request, runtime);
}

StopLoggingResponse Alibabacloud_Actiontrail20200706::Client::stopLoggingWithOptions(shared_ptr<StopLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopLogging"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopLoggingResponse(callApi(params, req, runtime));
}

StopLoggingResponse Alibabacloud_Actiontrail20200706::Client::stopLogging(shared_ptr<StopLoggingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopLoggingWithOptions(request, runtime);
}

UpdateGlobalEventsStorageRegionResponse Alibabacloud_Actiontrail20200706::Client::updateGlobalEventsStorageRegionWithOptions(shared_ptr<UpdateGlobalEventsStorageRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->storageRegion)) {
    query->insert(pair<string, string>("StorageRegion", *request->storageRegion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGlobalEventsStorageRegion"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGlobalEventsStorageRegionResponse(callApi(params, req, runtime));
}

UpdateGlobalEventsStorageRegionResponse Alibabacloud_Actiontrail20200706::Client::updateGlobalEventsStorageRegion(shared_ptr<UpdateGlobalEventsStorageRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGlobalEventsStorageRegionWithOptions(request, runtime);
}

UpdateTrailResponse Alibabacloud_Actiontrail20200706::Client::updateTrailWithOptions(shared_ptr<UpdateTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventRW)) {
    query->insert(pair<string, string>("EventRW", *request->eventRW));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    query->insert(pair<string, string>("OssBucketName", *request->ossBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKeyPrefix)) {
    query->insert(pair<string, string>("OssKeyPrefix", *request->ossKeyPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossWriteRoleArn)) {
    query->insert(pair<string, string>("OssWriteRoleArn", *request->ossWriteRoleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsProjectArn)) {
    query->insert(pair<string, string>("SlsProjectArn", *request->slsProjectArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsWriteRoleArn)) {
    query->insert(pair<string, string>("SlsWriteRoleArn", *request->slsWriteRoleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trailRegion)) {
    query->insert(pair<string, string>("TrailRegion", *request->trailRegion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTrail"))},
    {"version", boost::any(string("2020-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTrailResponse(callApi(params, req, runtime));
}

UpdateTrailResponse Alibabacloud_Actiontrail20200706::Client::updateTrail(shared_ptr<UpdateTrailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTrailWithOptions(request, runtime);
}

