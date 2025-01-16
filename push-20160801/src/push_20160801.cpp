// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/push_20160801.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Push20160801;

Alibabacloud_Push20160801::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "cloudpush.aliyuncs.com"},
    {"ap-northeast-2-pop", "cloudpush.aliyuncs.com"},
    {"ap-south-1", "cloudpush.aliyuncs.com"},
    {"ap-southeast-1", "cloudpush.aliyuncs.com"},
    {"ap-southeast-2", "cloudpush.aliyuncs.com"},
    {"ap-southeast-3", "cloudpush.aliyuncs.com"},
    {"ap-southeast-5", "cloudpush.aliyuncs.com"},
    {"cn-beijing", "cloudpush.aliyuncs.com"},
    {"cn-beijing-finance-1", "cloudpush.aliyuncs.com"},
    {"cn-beijing-finance-pop", "cloudpush.aliyuncs.com"},
    {"cn-beijing-gov-1", "cloudpush.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "cloudpush.aliyuncs.com"},
    {"cn-chengdu", "cloudpush.aliyuncs.com"},
    {"cn-edge-1", "cloudpush.aliyuncs.com"},
    {"cn-fujian", "cloudpush.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "cloudpush.aliyuncs.com"},
    {"cn-hangzhou", "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-finance", "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "cloudpush.aliyuncs.com"},
    {"cn-hangzhou-test-306", "cloudpush.aliyuncs.com"},
    {"cn-hongkong", "cloudpush.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "cloudpush.aliyuncs.com"},
    {"cn-huhehaote", "cloudpush.aliyuncs.com"},
    {"cn-north-2-gov-1", "cloudpush.aliyuncs.com"},
    {"cn-qingdao", "cloudpush.aliyuncs.com"},
    {"cn-qingdao-nebula", "cloudpush.aliyuncs.com"},
    {"cn-shanghai", "cloudpush.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "cloudpush.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "cloudpush.aliyuncs.com"},
    {"cn-shanghai-finance-1", "cloudpush.aliyuncs.com"},
    {"cn-shanghai-inner", "cloudpush.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "cloudpush.aliyuncs.com"},
    {"cn-shenzhen", "cloudpush.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "cloudpush.aliyuncs.com"},
    {"cn-shenzhen-inner", "cloudpush.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "cloudpush.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "cloudpush.aliyuncs.com"},
    {"cn-wuhan", "cloudpush.aliyuncs.com"},
    {"cn-yushanfang", "cloudpush.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "cloudpush.aliyuncs.com"},
    {"cn-zhangjiakou", "cloudpush.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "cloudpush.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "cloudpush.aliyuncs.com"},
    {"eu-central-1", "cloudpush.aliyuncs.com"},
    {"eu-west-1", "cloudpush.aliyuncs.com"},
    {"eu-west-1-oxs", "cloudpush.aliyuncs.com"},
    {"me-east-1", "cloudpush.aliyuncs.com"},
    {"rus-west-1-pop", "cloudpush.aliyuncs.com"},
    {"us-east-1", "cloudpush.aliyuncs.com"},
    {"us-west-1", "cloudpush.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("push"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Push20160801::Client::getEndpoint(shared_ptr<string> productId,
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

BindAliasResponse Alibabacloud_Push20160801::Client::bindAliasWithOptions(shared_ptr<BindAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliasName)) {
    query->insert(pair<string, string>("AliasName", *request->aliasName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindAlias"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindAliasResponse(callApi(params, req, runtime));
}

BindAliasResponse Alibabacloud_Push20160801::Client::bindAlias(shared_ptr<BindAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAliasWithOptions(request, runtime);
}

BindPhoneResponse Alibabacloud_Push20160801::Client::bindPhoneWithOptions(shared_ptr<BindPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindPhone"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindPhoneResponse(callApi(params, req, runtime));
}

BindPhoneResponse Alibabacloud_Push20160801::Client::bindPhone(shared_ptr<BindPhoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindPhoneWithOptions(request, runtime);
}

BindTagResponse Alibabacloud_Push20160801::Client::bindTagWithOptions(shared_ptr<BindTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientKey)) {
    query->insert(pair<string, string>("ClientKey", *request->clientKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyType)) {
    query->insert(pair<string, string>("KeyType", *request->keyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindTag"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindTagResponse(callApi(params, req, runtime));
}

BindTagResponse Alibabacloud_Push20160801::Client::bindTag(shared_ptr<BindTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindTagWithOptions(request, runtime);
}

CancelPushResponse Alibabacloud_Push20160801::Client::cancelPushWithOptions(shared_ptr<CancelPushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->messageId)) {
    query->insert(pair<string, long>("MessageId", *request->messageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelPush"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelPushResponse(callApi(params, req, runtime));
}

CancelPushResponse Alibabacloud_Push20160801::Client::cancelPush(shared_ptr<CancelPushRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelPushWithOptions(request, runtime);
}

CheckCertificateResponse Alibabacloud_Push20160801::Client::checkCertificateWithOptions(shared_ptr<CheckCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckCertificate"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckCertificateResponse(callApi(params, req, runtime));
}

CheckCertificateResponse Alibabacloud_Push20160801::Client::checkCertificate(shared_ptr<CheckCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkCertificateWithOptions(request, runtime);
}

CheckDeviceResponse Alibabacloud_Push20160801::Client::checkDeviceWithOptions(shared_ptr<CheckDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDevice"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDeviceResponse(callApi(params, req, runtime));
}

CheckDeviceResponse Alibabacloud_Push20160801::Client::checkDevice(shared_ptr<CheckDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDeviceWithOptions(request, runtime);
}

CheckDevicesResponse Alibabacloud_Push20160801::Client::checkDevicesWithOptions(shared_ptr<CheckDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceIds)) {
    query->insert(pair<string, string>("DeviceIds", *request->deviceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDevices"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDevicesResponse(callApi(params, req, runtime));
}

CheckDevicesResponse Alibabacloud_Push20160801::Client::checkDevices(shared_ptr<CheckDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDevicesWithOptions(request, runtime);
}

CompleteContinuouslyPushResponse Alibabacloud_Push20160801::Client::completeContinuouslyPushWithOptions(shared_ptr<CompleteContinuouslyPushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageId)) {
    query->insert(pair<string, string>("MessageId", *request->messageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CompleteContinuouslyPush"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CompleteContinuouslyPushResponse(callApi(params, req, runtime));
}

CompleteContinuouslyPushResponse Alibabacloud_Push20160801::Client::completeContinuouslyPush(shared_ptr<CompleteContinuouslyPushRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return completeContinuouslyPushWithOptions(request, runtime);
}

ContinuouslyPushResponse Alibabacloud_Push20160801::Client::continuouslyPushWithOptions(shared_ptr<ContinuouslyPushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageId)) {
    query->insert(pair<string, string>("MessageId", *request->messageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetValue)) {
    query->insert(pair<string, string>("TargetValue", *request->targetValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ContinuouslyPush"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ContinuouslyPushResponse(callApi(params, req, runtime));
}

ContinuouslyPushResponse Alibabacloud_Push20160801::Client::continuouslyPush(shared_ptr<ContinuouslyPushRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return continuouslyPushWithOptions(request, runtime);
}

ListSummaryAppsResponse Alibabacloud_Push20160801::Client::listSummaryAppsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSummaryApps"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSummaryAppsResponse(callApi(params, req, runtime));
}

ListSummaryAppsResponse Alibabacloud_Push20160801::Client::listSummaryApps() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSummaryAppsWithOptions(runtime);
}

ListTagsResponse Alibabacloud_Push20160801::Client::listTagsWithOptions(shared_ptr<ListTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTags"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagsResponse(callApi(params, req, runtime));
}

ListTagsResponse Alibabacloud_Push20160801::Client::listTags(shared_ptr<ListTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagsWithOptions(request, runtime);
}

MassPushResponse Alibabacloud_Push20160801::Client::massPushWithOptions(shared_ptr<MassPushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentToken)) {
    query->insert(pair<string, string>("IdempotentToken", *request->idempotentToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<MassPushRequestPushTask>>(request->pushTask)) {
    body->insert(pair<string, vector<MassPushRequestPushTask>>("PushTask", *request->pushTask));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MassPush"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MassPushResponse(callApi(params, req, runtime));
}

MassPushResponse Alibabacloud_Push20160801::Client::massPush(shared_ptr<MassPushRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return massPushWithOptions(request, runtime);
}

PushResponse Alibabacloud_Push20160801::Client::pushWithOptions(shared_ptr<PushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->androidActivity)) {
    query->insert(pair<string, string>("AndroidActivity", *request->androidActivity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->androidBadgeAddNum)) {
    query->insert(pair<string, long>("AndroidBadgeAddNum", *request->androidBadgeAddNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidBadgeClass)) {
    query->insert(pair<string, string>("AndroidBadgeClass", *request->androidBadgeClass));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->androidBadgeSetNum)) {
    query->insert(pair<string, long>("AndroidBadgeSetNum", *request->androidBadgeSetNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidBigBody)) {
    query->insert(pair<string, string>("AndroidBigBody", *request->androidBigBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidBigPictureUrl)) {
    query->insert(pair<string, string>("AndroidBigPictureUrl", *request->androidBigPictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidBigTitle)) {
    query->insert(pair<string, string>("AndroidBigTitle", *request->androidBigTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidExtParameters)) {
    query->insert(pair<string, string>("AndroidExtParameters", *request->androidExtParameters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->androidHonorTargetUserType)) {
    query->insert(pair<string, long>("AndroidHonorTargetUserType", *request->androidHonorTargetUserType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidHuaweiReceiptId)) {
    query->insert(pair<string, string>("AndroidHuaweiReceiptId", *request->androidHuaweiReceiptId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->androidHuaweiTargetUserType)) {
    query->insert(pair<string, long>("AndroidHuaweiTargetUserType", *request->androidHuaweiTargetUserType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidImageUrl)) {
    query->insert(pair<string, string>("AndroidImageUrl", *request->androidImageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidInboxBody)) {
    query->insert(pair<string, string>("AndroidInboxBody", *request->androidInboxBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidMessageHuaweiCategory)) {
    query->insert(pair<string, string>("AndroidMessageHuaweiCategory", *request->androidMessageHuaweiCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidMessageHuaweiUrgency)) {
    query->insert(pair<string, string>("AndroidMessageHuaweiUrgency", *request->androidMessageHuaweiUrgency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidMessageOppoCategory)) {
    query->insert(pair<string, string>("AndroidMessageOppoCategory", *request->androidMessageOppoCategory));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->androidMessageOppoNotifyLevel)) {
    query->insert(pair<string, long>("AndroidMessageOppoNotifyLevel", *request->androidMessageOppoNotifyLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidMessageVivoCategory)) {
    query->insert(pair<string, string>("AndroidMessageVivoCategory", *request->androidMessageVivoCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidMusic)) {
    query->insert(pair<string, string>("AndroidMusic", *request->androidMusic));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->androidNotificationBarPriority)) {
    query->insert(pair<string, long>("AndroidNotificationBarPriority", *request->androidNotificationBarPriority));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->androidNotificationBarType)) {
    query->insert(pair<string, long>("AndroidNotificationBarType", *request->androidNotificationBarType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidNotificationChannel)) {
    query->insert(pair<string, string>("AndroidNotificationChannel", *request->androidNotificationChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidNotificationGroup)) {
    query->insert(pair<string, string>("AndroidNotificationGroup", *request->androidNotificationGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidNotificationHonorChannel)) {
    query->insert(pair<string, string>("AndroidNotificationHonorChannel", *request->androidNotificationHonorChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidNotificationHuaweiChannel)) {
    query->insert(pair<string, string>("AndroidNotificationHuaweiChannel", *request->androidNotificationHuaweiChannel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->androidNotificationNotifyId)) {
    query->insert(pair<string, long>("AndroidNotificationNotifyId", *request->androidNotificationNotifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidNotificationThreadId)) {
    query->insert(pair<string, string>("AndroidNotificationThreadId", *request->androidNotificationThreadId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidNotificationVivoChannel)) {
    query->insert(pair<string, string>("AndroidNotificationVivoChannel", *request->androidNotificationVivoChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidNotificationXiaomiChannel)) {
    query->insert(pair<string, string>("AndroidNotificationXiaomiChannel", *request->androidNotificationXiaomiChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidNotifyType)) {
    query->insert(pair<string, string>("AndroidNotifyType", *request->androidNotifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidOpenType)) {
    query->insert(pair<string, string>("AndroidOpenType", *request->androidOpenType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidOpenUrl)) {
    query->insert(pair<string, string>("AndroidOpenUrl", *request->androidOpenUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidPopupActivity)) {
    query->insert(pair<string, string>("AndroidPopupActivity", *request->androidPopupActivity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidPopupBody)) {
    query->insert(pair<string, string>("AndroidPopupBody", *request->androidPopupBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidPopupTitle)) {
    query->insert(pair<string, string>("AndroidPopupTitle", *request->androidPopupTitle));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->androidRemind)) {
    query->insert(pair<string, bool>("AndroidRemind", *request->androidRemind));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->androidRenderStyle)) {
    query->insert(pair<string, long>("AndroidRenderStyle", *request->androidRenderStyle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->androidTargetUserType)) {
    query->insert(pair<string, long>("AndroidTargetUserType", *request->androidTargetUserType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->androidVivoPushMode)) {
    query->insert(pair<string, long>("AndroidVivoPushMode", *request->androidVivoPushMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidVivoReceiptId)) {
    query->insert(pair<string, string>("AndroidVivoReceiptId", *request->androidVivoReceiptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidXiaoMiActivity)) {
    query->insert(pair<string, string>("AndroidXiaoMiActivity", *request->androidXiaoMiActivity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidXiaoMiNotifyBody)) {
    query->insert(pair<string, string>("AndroidXiaoMiNotifyBody", *request->androidXiaoMiNotifyBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidXiaoMiNotifyTitle)) {
    query->insert(pair<string, string>("AndroidXiaoMiNotifyTitle", *request->androidXiaoMiNotifyTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidXiaomiBigPictureUrl)) {
    query->insert(pair<string, string>("AndroidXiaomiBigPictureUrl", *request->androidXiaomiBigPictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidXiaomiImageUrl)) {
    query->insert(pair<string, string>("AndroidXiaomiImageUrl", *request->androidXiaomiImageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    query->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    query->insert(pair<string, string>("DeviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTime)) {
    query->insert(pair<string, string>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmonyAction)) {
    query->insert(pair<string, string>("HarmonyAction", *request->harmonyAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmonyActionType)) {
    query->insert(pair<string, string>("HarmonyActionType", *request->harmonyActionType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->harmonyBadgeAddNum)) {
    query->insert(pair<string, long>("HarmonyBadgeAddNum", *request->harmonyBadgeAddNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->harmonyBadgeSetNum)) {
    query->insert(pair<string, long>("HarmonyBadgeSetNum", *request->harmonyBadgeSetNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmonyCategory)) {
    query->insert(pair<string, string>("HarmonyCategory", *request->harmonyCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmonyExtParameters)) {
    query->insert(pair<string, string>("HarmonyExtParameters", *request->harmonyExtParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmonyExtensionExtraData)) {
    query->insert(pair<string, string>("HarmonyExtensionExtraData", *request->harmonyExtensionExtraData));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->harmonyExtensionPush)) {
    query->insert(pair<string, bool>("HarmonyExtensionPush", *request->harmonyExtensionPush));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmonyImageUrl)) {
    query->insert(pair<string, string>("HarmonyImageUrl", *request->harmonyImageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmonyInboxContent)) {
    query->insert(pair<string, string>("HarmonyInboxContent", *request->harmonyInboxContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmonyNotificationSlotType)) {
    query->insert(pair<string, string>("HarmonyNotificationSlotType", *request->harmonyNotificationSlotType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->harmonyNotifyId)) {
    query->insert(pair<string, long>("HarmonyNotifyId", *request->harmonyNotifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmonyReceiptId)) {
    query->insert(pair<string, string>("HarmonyReceiptId", *request->harmonyReceiptId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->harmonyRemind)) {
    query->insert(pair<string, bool>("HarmonyRemind", *request->harmonyRemind));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmonyRemindBody)) {
    query->insert(pair<string, string>("HarmonyRemindBody", *request->harmonyRemindBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmonyRemindTitle)) {
    query->insert(pair<string, string>("HarmonyRemindTitle", *request->harmonyRemindTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmonyRenderStyle)) {
    query->insert(pair<string, string>("HarmonyRenderStyle", *request->harmonyRenderStyle));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->harmonyTestMessage)) {
    query->insert(pair<string, bool>("HarmonyTestMessage", *request->harmonyTestMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmonyUri)) {
    query->insert(pair<string, string>("HarmonyUri", *request->harmonyUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentToken)) {
    query->insert(pair<string, string>("IdempotentToken", *request->idempotentToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobKey)) {
    query->insert(pair<string, string>("JobKey", *request->jobKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushTime)) {
    query->insert(pair<string, string>("PushTime", *request->pushTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushType)) {
    query->insert(pair<string, string>("PushType", *request->pushType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sendChannels)) {
    query->insert(pair<string, string>("SendChannels", *request->sendChannels));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sendSpeed)) {
    query->insert(pair<string, long>("SendSpeed", *request->sendSpeed));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->smsDelaySecs)) {
    query->insert(pair<string, long>("SmsDelaySecs", *request->smsDelaySecs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsParams)) {
    query->insert(pair<string, string>("SmsParams", *request->smsParams));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->smsSendPolicy)) {
    query->insert(pair<string, long>("SmsSendPolicy", *request->smsSendPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsSignName)) {
    query->insert(pair<string, string>("SmsSignName", *request->smsSignName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsTemplateName)) {
    query->insert(pair<string, string>("SmsTemplateName", *request->smsTemplateName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->storeOffline)) {
    query->insert(pair<string, bool>("StoreOffline", *request->storeOffline));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetValue)) {
    query->insert(pair<string, string>("TargetValue", *request->targetValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->trim)) {
    query->insert(pair<string, bool>("Trim", *request->trim));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iOSApnsEnv)) {
    query->insert(pair<string, string>("iOSApnsEnv", *request->iOSApnsEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->iOSBadge)) {
    query->insert(pair<string, long>("iOSBadge", *request->iOSBadge));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->iOSBadgeAutoIncrement)) {
    query->insert(pair<string, bool>("iOSBadgeAutoIncrement", *request->iOSBadgeAutoIncrement));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iOSExtParameters)) {
    query->insert(pair<string, string>("iOSExtParameters", *request->iOSExtParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iOSInterruptionLevel)) {
    query->insert(pair<string, string>("iOSInterruptionLevel", *request->iOSInterruptionLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iOSMusic)) {
    query->insert(pair<string, string>("iOSMusic", *request->iOSMusic));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->iOSMutableContent)) {
    query->insert(pair<string, bool>("iOSMutableContent", *request->iOSMutableContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iOSNotificationCategory)) {
    query->insert(pair<string, string>("iOSNotificationCategory", *request->iOSNotificationCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iOSNotificationCollapseId)) {
    query->insert(pair<string, string>("iOSNotificationCollapseId", *request->iOSNotificationCollapseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iOSNotificationThreadId)) {
    query->insert(pair<string, string>("iOSNotificationThreadId", *request->iOSNotificationThreadId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->iOSRelevanceScore)) {
    query->insert(pair<string, double>("iOSRelevanceScore", *request->iOSRelevanceScore));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->iOSRemind)) {
    query->insert(pair<string, bool>("iOSRemind", *request->iOSRemind));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iOSRemindBody)) {
    query->insert(pair<string, string>("iOSRemindBody", *request->iOSRemindBody));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->iOSSilentNotification)) {
    query->insert(pair<string, bool>("iOSSilentNotification", *request->iOSSilentNotification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iOSSubtitle)) {
    query->insert(pair<string, string>("iOSSubtitle", *request->iOSSubtitle));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Push"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushResponse(callApi(params, req, runtime));
}

PushResponse Alibabacloud_Push20160801::Client::push(shared_ptr<PushRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushWithOptions(request, runtime);
}

PushMessageToAndroidResponse Alibabacloud_Push20160801::Client::pushMessageToAndroidWithOptions(shared_ptr<PushMessageToAndroidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    query->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobKey)) {
    query->insert(pair<string, string>("JobKey", *request->jobKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->storeOffline)) {
    query->insert(pair<string, bool>("StoreOffline", *request->storeOffline));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetValue)) {
    query->insert(pair<string, string>("TargetValue", *request->targetValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushMessageToAndroid"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushMessageToAndroidResponse(callApi(params, req, runtime));
}

PushMessageToAndroidResponse Alibabacloud_Push20160801::Client::pushMessageToAndroid(shared_ptr<PushMessageToAndroidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushMessageToAndroidWithOptions(request, runtime);
}

PushMessageToiOSResponse Alibabacloud_Push20160801::Client::pushMessageToiOSWithOptions(shared_ptr<PushMessageToiOSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    query->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobKey)) {
    query->insert(pair<string, string>("JobKey", *request->jobKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->storeOffline)) {
    query->insert(pair<string, bool>("StoreOffline", *request->storeOffline));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetValue)) {
    query->insert(pair<string, string>("TargetValue", *request->targetValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushMessageToiOS"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushMessageToiOSResponse(callApi(params, req, runtime));
}

PushMessageToiOSResponse Alibabacloud_Push20160801::Client::pushMessageToiOS(shared_ptr<PushMessageToiOSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushMessageToiOSWithOptions(request, runtime);
}

PushNoticeToAndroidResponse Alibabacloud_Push20160801::Client::pushNoticeToAndroidWithOptions(shared_ptr<PushNoticeToAndroidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    query->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extParameters)) {
    query->insert(pair<string, string>("ExtParameters", *request->extParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobKey)) {
    query->insert(pair<string, string>("JobKey", *request->jobKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->storeOffline)) {
    query->insert(pair<string, bool>("StoreOffline", *request->storeOffline));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetValue)) {
    query->insert(pair<string, string>("TargetValue", *request->targetValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushNoticeToAndroid"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushNoticeToAndroidResponse(callApi(params, req, runtime));
}

PushNoticeToAndroidResponse Alibabacloud_Push20160801::Client::pushNoticeToAndroid(shared_ptr<PushNoticeToAndroidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushNoticeToAndroidWithOptions(request, runtime);
}

PushNoticeToiOSResponse Alibabacloud_Push20160801::Client::pushNoticeToiOSWithOptions(shared_ptr<PushNoticeToiOSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apnsEnv)) {
    query->insert(pair<string, string>("ApnsEnv", *request->apnsEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    query->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extParameters)) {
    query->insert(pair<string, string>("ExtParameters", *request->extParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobKey)) {
    query->insert(pair<string, string>("JobKey", *request->jobKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetValue)) {
    query->insert(pair<string, string>("TargetValue", *request->targetValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushNoticeToiOS"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushNoticeToiOSResponse(callApi(params, req, runtime));
}

PushNoticeToiOSResponse Alibabacloud_Push20160801::Client::pushNoticeToiOS(shared_ptr<PushNoticeToiOSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushNoticeToiOSWithOptions(request, runtime);
}

QueryAliasesResponse Alibabacloud_Push20160801::Client::queryAliasesWithOptions(shared_ptr<QueryAliasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAliases"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAliasesResponse(callApi(params, req, runtime));
}

QueryAliasesResponse Alibabacloud_Push20160801::Client::queryAliases(shared_ptr<QueryAliasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAliasesWithOptions(request, runtime);
}

QueryDeviceInfoResponse Alibabacloud_Push20160801::Client::queryDeviceInfoWithOptions(shared_ptr<QueryDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceInfo"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceInfoResponse(callApi(params, req, runtime));
}

QueryDeviceInfoResponse Alibabacloud_Push20160801::Client::queryDeviceInfo(shared_ptr<QueryDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceInfoWithOptions(request, runtime);
}

QueryDeviceStatResponse Alibabacloud_Push20160801::Client::queryDeviceStatWithOptions(shared_ptr<QueryDeviceStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    query->insert(pair<string, string>("DeviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    query->insert(pair<string, string>("QueryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceStat"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceStatResponse(callApi(params, req, runtime));
}

QueryDeviceStatResponse Alibabacloud_Push20160801::Client::queryDeviceStat(shared_ptr<QueryDeviceStatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceStatWithOptions(request, runtime);
}

QueryDevicesByAccountResponse Alibabacloud_Push20160801::Client::queryDevicesByAccountWithOptions(shared_ptr<QueryDevicesByAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    query->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDevicesByAccount"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDevicesByAccountResponse(callApi(params, req, runtime));
}

QueryDevicesByAccountResponse Alibabacloud_Push20160801::Client::queryDevicesByAccount(shared_ptr<QueryDevicesByAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicesByAccountWithOptions(request, runtime);
}

QueryDevicesByAliasResponse Alibabacloud_Push20160801::Client::queryDevicesByAliasWithOptions(shared_ptr<QueryDevicesByAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    query->insert(pair<string, string>("Alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDevicesByAlias"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDevicesByAliasResponse(callApi(params, req, runtime));
}

QueryDevicesByAliasResponse Alibabacloud_Push20160801::Client::queryDevicesByAlias(shared_ptr<QueryDevicesByAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicesByAliasWithOptions(request, runtime);
}

QueryPushRecordsResponse Alibabacloud_Push20160801::Client::queryPushRecordsWithOptions(shared_ptr<QueryPushRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushType)) {
    query->insert(pair<string, string>("PushType", *request->pushType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPushRecords"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPushRecordsResponse(callApi(params, req, runtime));
}

QueryPushRecordsResponse Alibabacloud_Push20160801::Client::queryPushRecords(shared_ptr<QueryPushRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPushRecordsWithOptions(request, runtime);
}

QueryPushStatByAppResponse Alibabacloud_Push20160801::Client::queryPushStatByAppWithOptions(shared_ptr<QueryPushStatByAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granularity)) {
    query->insert(pair<string, string>("Granularity", *request->granularity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPushStatByApp"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPushStatByAppResponse(callApi(params, req, runtime));
}

QueryPushStatByAppResponse Alibabacloud_Push20160801::Client::queryPushStatByApp(shared_ptr<QueryPushStatByAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPushStatByAppWithOptions(request, runtime);
}

QueryPushStatByMsgResponse Alibabacloud_Push20160801::Client::queryPushStatByMsgWithOptions(shared_ptr<QueryPushStatByMsgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->messageId)) {
    query->insert(pair<string, long>("MessageId", *request->messageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPushStatByMsg"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPushStatByMsgResponse(callApi(params, req, runtime));
}

QueryPushStatByMsgResponse Alibabacloud_Push20160801::Client::queryPushStatByMsg(shared_ptr<QueryPushStatByMsgRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPushStatByMsgWithOptions(request, runtime);
}

QueryTagsResponse Alibabacloud_Push20160801::Client::queryTagsWithOptions(shared_ptr<QueryTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientKey)) {
    query->insert(pair<string, string>("ClientKey", *request->clientKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyType)) {
    query->insert(pair<string, string>("KeyType", *request->keyType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTags"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTagsResponse(callApi(params, req, runtime));
}

QueryTagsResponse Alibabacloud_Push20160801::Client::queryTags(shared_ptr<QueryTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTagsWithOptions(request, runtime);
}

QueryUniqueDeviceStatResponse Alibabacloud_Push20160801::Client::queryUniqueDeviceStatWithOptions(shared_ptr<QueryUniqueDeviceStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granularity)) {
    query->insert(pair<string, string>("Granularity", *request->granularity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUniqueDeviceStat"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUniqueDeviceStatResponse(callApi(params, req, runtime));
}

QueryUniqueDeviceStatResponse Alibabacloud_Push20160801::Client::queryUniqueDeviceStat(shared_ptr<QueryUniqueDeviceStatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUniqueDeviceStatWithOptions(request, runtime);
}

RemoveTagResponse Alibabacloud_Push20160801::Client::removeTagWithOptions(shared_ptr<RemoveTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveTag"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveTagResponse(callApi(params, req, runtime));
}

RemoveTagResponse Alibabacloud_Push20160801::Client::removeTag(shared_ptr<RemoveTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTagWithOptions(request, runtime);
}

UnbindAliasResponse Alibabacloud_Push20160801::Client::unbindAliasWithOptions(shared_ptr<UnbindAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliasName)) {
    query->insert(pair<string, string>("AliasName", *request->aliasName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->unbindAll)) {
    query->insert(pair<string, bool>("UnbindAll", *request->unbindAll));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindAlias"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindAliasResponse(callApi(params, req, runtime));
}

UnbindAliasResponse Alibabacloud_Push20160801::Client::unbindAlias(shared_ptr<UnbindAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindAliasWithOptions(request, runtime);
}

UnbindPhoneResponse Alibabacloud_Push20160801::Client::unbindPhoneWithOptions(shared_ptr<UnbindPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindPhone"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindPhoneResponse(callApi(params, req, runtime));
}

UnbindPhoneResponse Alibabacloud_Push20160801::Client::unbindPhone(shared_ptr<UnbindPhoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindPhoneWithOptions(request, runtime);
}

UnbindTagResponse Alibabacloud_Push20160801::Client::unbindTagWithOptions(shared_ptr<UnbindTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientKey)) {
    query->insert(pair<string, string>("ClientKey", *request->clientKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyType)) {
    query->insert(pair<string, string>("KeyType", *request->keyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindTag"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindTagResponse(callApi(params, req, runtime));
}

UnbindTagResponse Alibabacloud_Push20160801::Client::unbindTag(shared_ptr<UnbindTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindTagWithOptions(request, runtime);
}

