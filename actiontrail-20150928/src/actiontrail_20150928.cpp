// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/actiontrail_20150928.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Actiontrail20150928;

Alibabacloud_Actiontrail20150928::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Actiontrail20150928::Client::getEndpoint(shared_ptr<string> productId,
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

CreateTrailResponse Alibabacloud_Actiontrail20150928::Client::createTrailWithOptions(shared_ptr<CreateTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrail"))},
    {"version", boost::any(string("2015-09-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTrailResponse(callApi(params, req, runtime));
}

CreateTrailResponse Alibabacloud_Actiontrail20150928::Client::createTrail(shared_ptr<CreateTrailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTrailWithOptions(request, runtime);
}

DeleteTrailResponse Alibabacloud_Actiontrail20150928::Client::deleteTrailWithOptions(shared_ptr<DeleteTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrail"))},
    {"version", boost::any(string("2015-09-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTrailResponse(callApi(params, req, runtime));
}

DeleteTrailResponse Alibabacloud_Actiontrail20150928::Client::deleteTrail(shared_ptr<DeleteTrailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTrailWithOptions(request, runtime);
}

DescribeTrailsResponse Alibabacloud_Actiontrail20150928::Client::describeTrailsWithOptions(shared_ptr<DescribeTrailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrails"))},
    {"version", boost::any(string("2015-09-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTrailsResponse(callApi(params, req, runtime));
}

DescribeTrailsResponse Alibabacloud_Actiontrail20150928::Client::describeTrails(shared_ptr<DescribeTrailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrailsWithOptions(request, runtime);
}

EchoResponse Alibabacloud_Actiontrail20150928::Client::echoWithOptions(shared_ptr<EchoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Echo"))},
    {"version", boost::any(string("2015-09-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EchoResponse(callApi(params, req, runtime));
}

EchoResponse Alibabacloud_Actiontrail20150928::Client::echo(shared_ptr<EchoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return echoWithOptions(request, runtime);
}

GetTrailStatusResponse Alibabacloud_Actiontrail20150928::Client::getTrailStatusWithOptions(shared_ptr<GetTrailStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrailStatus"))},
    {"version", boost::any(string("2015-09-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTrailStatusResponse(callApi(params, req, runtime));
}

GetTrailStatusResponse Alibabacloud_Actiontrail20150928::Client::getTrailStatus(shared_ptr<GetTrailStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTrailStatusWithOptions(request, runtime);
}

HelpResponse Alibabacloud_Actiontrail20150928::Client::helpWithOptions(shared_ptr<HelpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Help"))},
    {"version", boost::any(string("2015-09-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HelpResponse(callApi(params, req, runtime));
}

HelpResponse Alibabacloud_Actiontrail20150928::Client::help(shared_ptr<HelpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return helpWithOptions(request, runtime);
}

LookupEventsResponse Alibabacloud_Actiontrail20150928::Client::lookupEventsWithOptions(shared_ptr<LookupEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LookupEvents"))},
    {"version", boost::any(string("2015-09-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LookupEventsResponse(callApi(params, req, runtime));
}

LookupEventsResponse Alibabacloud_Actiontrail20150928::Client::lookupEvents(shared_ptr<LookupEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lookupEventsWithOptions(request, runtime);
}

StartLoggingResponse Alibabacloud_Actiontrail20150928::Client::startLoggingWithOptions(shared_ptr<StartLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartLogging"))},
    {"version", boost::any(string("2015-09-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartLoggingResponse(callApi(params, req, runtime));
}

StartLoggingResponse Alibabacloud_Actiontrail20150928::Client::startLogging(shared_ptr<StartLoggingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startLoggingWithOptions(request, runtime);
}

StopLoggingResponse Alibabacloud_Actiontrail20150928::Client::stopLoggingWithOptions(shared_ptr<StopLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopLogging"))},
    {"version", boost::any(string("2015-09-28"))},
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

StopLoggingResponse Alibabacloud_Actiontrail20150928::Client::stopLogging(shared_ptr<StopLoggingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopLoggingWithOptions(request, runtime);
}

UpdateTrailResponse Alibabacloud_Actiontrail20150928::Client::updateTrailWithOptions(shared_ptr<UpdateTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->format)) {
    query->insert(pair<string, string>("Format", *request->format));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->help)) {
    query->insert(pair<string, string>("Help", *request->help));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    query->insert(pair<string, string>("RoleName", *request->roleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("Version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTrail"))},
    {"version", boost::any(string("2015-09-28"))},
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

UpdateTrailResponse Alibabacloud_Actiontrail20150928::Client::updateTrail(shared_ptr<UpdateTrailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTrailWithOptions(request, runtime);
}

