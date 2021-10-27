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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDeliveryHistoryJobResponse(doRPCRequest(make_shared<string>("CreateDeliveryHistoryJob"), make_shared<string>("2020-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDeliveryHistoryJobResponse Alibabacloud_Actiontrail20200706::Client::createDeliveryHistoryJob(shared_ptr<CreateDeliveryHistoryJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeliveryHistoryJobWithOptions(request, runtime);
}

CreateTrailResponse Alibabacloud_Actiontrail20200706::Client::createTrailWithOptions(shared_ptr<CreateTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTrailResponse(doRPCRequest(make_shared<string>("CreateTrail"), make_shared<string>("2020-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTrailResponse Alibabacloud_Actiontrail20200706::Client::createTrail(shared_ptr<CreateTrailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTrailWithOptions(request, runtime);
}

DeleteDeliveryHistoryJobResponse Alibabacloud_Actiontrail20200706::Client::deleteDeliveryHistoryJobWithOptions(shared_ptr<DeleteDeliveryHistoryJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDeliveryHistoryJobResponse(doRPCRequest(make_shared<string>("DeleteDeliveryHistoryJob"), make_shared<string>("2020-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDeliveryHistoryJobResponse Alibabacloud_Actiontrail20200706::Client::deleteDeliveryHistoryJob(shared_ptr<DeleteDeliveryHistoryJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeliveryHistoryJobWithOptions(request, runtime);
}

DeleteTrailResponse Alibabacloud_Actiontrail20200706::Client::deleteTrailWithOptions(shared_ptr<DeleteTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTrailResponse(doRPCRequest(make_shared<string>("DeleteTrail"), make_shared<string>("2020-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTrailResponse Alibabacloud_Actiontrail20200706::Client::deleteTrail(shared_ptr<DeleteTrailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTrailWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Actiontrail20200706::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2020-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Actiontrail20200706::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeTrailsResponse Alibabacloud_Actiontrail20200706::Client::describeTrailsWithOptions(shared_ptr<DescribeTrailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTrailsResponse(doRPCRequest(make_shared<string>("DescribeTrails"), make_shared<string>("2020-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTrailsResponse Alibabacloud_Actiontrail20200706::Client::describeTrails(shared_ptr<DescribeTrailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrailsWithOptions(request, runtime);
}

GetDeliveryHistoryJobResponse Alibabacloud_Actiontrail20200706::Client::getDeliveryHistoryJobWithOptions(shared_ptr<GetDeliveryHistoryJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDeliveryHistoryJobResponse(doRPCRequest(make_shared<string>("GetDeliveryHistoryJob"), make_shared<string>("2020-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDeliveryHistoryJobResponse Alibabacloud_Actiontrail20200706::Client::getDeliveryHistoryJob(shared_ptr<GetDeliveryHistoryJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeliveryHistoryJobWithOptions(request, runtime);
}

GetTrailStatusResponse Alibabacloud_Actiontrail20200706::Client::getTrailStatusWithOptions(shared_ptr<GetTrailStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTrailStatusResponse(doRPCRequest(make_shared<string>("GetTrailStatus"), make_shared<string>("2020-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTrailStatusResponse Alibabacloud_Actiontrail20200706::Client::getTrailStatus(shared_ptr<GetTrailStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTrailStatusWithOptions(request, runtime);
}

ListDeliveryHistoryJobsResponse Alibabacloud_Actiontrail20200706::Client::listDeliveryHistoryJobsWithOptions(shared_ptr<ListDeliveryHistoryJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDeliveryHistoryJobsResponse(doRPCRequest(make_shared<string>("ListDeliveryHistoryJobs"), make_shared<string>("2020-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDeliveryHistoryJobsResponse Alibabacloud_Actiontrail20200706::Client::listDeliveryHistoryJobs(shared_ptr<ListDeliveryHistoryJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeliveryHistoryJobsWithOptions(request, runtime);
}

LookupEventsResponse Alibabacloud_Actiontrail20200706::Client::lookupEventsWithOptions(shared_ptr<LookupEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return LookupEventsResponse(doRPCRequest(make_shared<string>("LookupEvents"), make_shared<string>("2020-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

LookupEventsResponse Alibabacloud_Actiontrail20200706::Client::lookupEvents(shared_ptr<LookupEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lookupEventsWithOptions(request, runtime);
}

StartLoggingResponse Alibabacloud_Actiontrail20200706::Client::startLoggingWithOptions(shared_ptr<StartLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartLoggingResponse(doRPCRequest(make_shared<string>("StartLogging"), make_shared<string>("2020-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartLoggingResponse Alibabacloud_Actiontrail20200706::Client::startLogging(shared_ptr<StartLoggingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startLoggingWithOptions(request, runtime);
}

StopLoggingResponse Alibabacloud_Actiontrail20200706::Client::stopLoggingWithOptions(shared_ptr<StopLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return StopLoggingResponse(doRPCRequest(make_shared<string>("StopLogging"), make_shared<string>("2020-07-06"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopLoggingResponse Alibabacloud_Actiontrail20200706::Client::stopLogging(shared_ptr<StopLoggingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopLoggingWithOptions(request, runtime);
}

UpdateTrailResponse Alibabacloud_Actiontrail20200706::Client::updateTrailWithOptions(shared_ptr<UpdateTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTrailResponse(doRPCRequest(make_shared<string>("UpdateTrail"), make_shared<string>("2020-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTrailResponse Alibabacloud_Actiontrail20200706::Client::updateTrail(shared_ptr<UpdateTrailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTrailWithOptions(request, runtime);
}

