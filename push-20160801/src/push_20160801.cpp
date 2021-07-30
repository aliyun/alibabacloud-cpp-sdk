// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/push_20160801.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindAliasResponse(doRPCRequest(make_shared<string>("BindAlias"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindAliasResponse Alibabacloud_Push20160801::Client::bindAlias(shared_ptr<BindAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAliasWithOptions(request, runtime);
}

BindPhoneResponse Alibabacloud_Push20160801::Client::bindPhoneWithOptions(shared_ptr<BindPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindPhoneResponse(doRPCRequest(make_shared<string>("BindPhone"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindPhoneResponse Alibabacloud_Push20160801::Client::bindPhone(shared_ptr<BindPhoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindPhoneWithOptions(request, runtime);
}

BindTagResponse Alibabacloud_Push20160801::Client::bindTagWithOptions(shared_ptr<BindTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindTagResponse(doRPCRequest(make_shared<string>("BindTag"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindTagResponse Alibabacloud_Push20160801::Client::bindTag(shared_ptr<BindTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindTagWithOptions(request, runtime);
}

CancelPushResponse Alibabacloud_Push20160801::Client::cancelPushWithOptions(shared_ptr<CancelPushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelPushResponse(doRPCRequest(make_shared<string>("CancelPush"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelPushResponse Alibabacloud_Push20160801::Client::cancelPush(shared_ptr<CancelPushRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelPushWithOptions(request, runtime);
}

CheckCertificateResponse Alibabacloud_Push20160801::Client::checkCertificateWithOptions(shared_ptr<CheckCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckCertificateResponse(doRPCRequest(make_shared<string>("CheckCertificate"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckCertificateResponse Alibabacloud_Push20160801::Client::checkCertificate(shared_ptr<CheckCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkCertificateWithOptions(request, runtime);
}

CheckDeviceResponse Alibabacloud_Push20160801::Client::checkDeviceWithOptions(shared_ptr<CheckDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckDeviceResponse(doRPCRequest(make_shared<string>("CheckDevice"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckDeviceResponse Alibabacloud_Push20160801::Client::checkDevice(shared_ptr<CheckDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDeviceWithOptions(request, runtime);
}

CheckDevicesResponse Alibabacloud_Push20160801::Client::checkDevicesWithOptions(shared_ptr<CheckDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckDevicesResponse(doRPCRequest(make_shared<string>("CheckDevices"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckDevicesResponse Alibabacloud_Push20160801::Client::checkDevices(shared_ptr<CheckDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDevicesWithOptions(request, runtime);
}

CompleteContinuouslyPushResponse Alibabacloud_Push20160801::Client::completeContinuouslyPushWithOptions(shared_ptr<CompleteContinuouslyPushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CompleteContinuouslyPushResponse(doRPCRequest(make_shared<string>("CompleteContinuouslyPush"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CompleteContinuouslyPushResponse Alibabacloud_Push20160801::Client::completeContinuouslyPush(shared_ptr<CompleteContinuouslyPushRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return completeContinuouslyPushWithOptions(request, runtime);
}

ContinuouslyPushResponse Alibabacloud_Push20160801::Client::continuouslyPushWithOptions(shared_ptr<ContinuouslyPushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ContinuouslyPushResponse(doRPCRequest(make_shared<string>("ContinuouslyPush"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ContinuouslyPushResponse Alibabacloud_Push20160801::Client::continuouslyPush(shared_ptr<ContinuouslyPushRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return continuouslyPushWithOptions(request, runtime);
}

ListSummaryAppsResponse Alibabacloud_Push20160801::Client::listSummaryAppsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListSummaryAppsResponse(doRPCRequest(make_shared<string>("ListSummaryApps"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSummaryAppsResponse Alibabacloud_Push20160801::Client::listSummaryApps() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSummaryAppsWithOptions(runtime);
}

ListTagsResponse Alibabacloud_Push20160801::Client::listTagsWithOptions(shared_ptr<ListTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagsResponse(doRPCRequest(make_shared<string>("ListTags"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagsResponse Alibabacloud_Push20160801::Client::listTags(shared_ptr<ListTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagsWithOptions(request, runtime);
}

MassPushResponse Alibabacloud_Push20160801::Client::massPushWithOptions(shared_ptr<MassPushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MassPushResponse(doRPCRequest(make_shared<string>("MassPush"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MassPushResponse Alibabacloud_Push20160801::Client::massPush(shared_ptr<MassPushRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return massPushWithOptions(request, runtime);
}

PushResponse Alibabacloud_Push20160801::Client::pushWithOptions(shared_ptr<PushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PushResponse(doRPCRequest(make_shared<string>("Push"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PushResponse Alibabacloud_Push20160801::Client::push(shared_ptr<PushRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushWithOptions(request, runtime);
}

PushMessageToAndroidResponse Alibabacloud_Push20160801::Client::pushMessageToAndroidWithOptions(shared_ptr<PushMessageToAndroidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PushMessageToAndroidResponse(doRPCRequest(make_shared<string>("PushMessageToAndroid"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PushMessageToAndroidResponse Alibabacloud_Push20160801::Client::pushMessageToAndroid(shared_ptr<PushMessageToAndroidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushMessageToAndroidWithOptions(request, runtime);
}

PushMessageToiOSResponse Alibabacloud_Push20160801::Client::pushMessageToiOSWithOptions(shared_ptr<PushMessageToiOSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PushMessageToiOSResponse(doRPCRequest(make_shared<string>("PushMessageToiOS"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PushMessageToiOSResponse Alibabacloud_Push20160801::Client::pushMessageToiOS(shared_ptr<PushMessageToiOSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushMessageToiOSWithOptions(request, runtime);
}

PushNoticeToAndroidResponse Alibabacloud_Push20160801::Client::pushNoticeToAndroidWithOptions(shared_ptr<PushNoticeToAndroidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PushNoticeToAndroidResponse(doRPCRequest(make_shared<string>("PushNoticeToAndroid"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PushNoticeToAndroidResponse Alibabacloud_Push20160801::Client::pushNoticeToAndroid(shared_ptr<PushNoticeToAndroidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushNoticeToAndroidWithOptions(request, runtime);
}

PushNoticeToiOSResponse Alibabacloud_Push20160801::Client::pushNoticeToiOSWithOptions(shared_ptr<PushNoticeToiOSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PushNoticeToiOSResponse(doRPCRequest(make_shared<string>("PushNoticeToiOS"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PushNoticeToiOSResponse Alibabacloud_Push20160801::Client::pushNoticeToiOS(shared_ptr<PushNoticeToiOSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushNoticeToiOSWithOptions(request, runtime);
}

QueryAliasesResponse Alibabacloud_Push20160801::Client::queryAliasesWithOptions(shared_ptr<QueryAliasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAliasesResponse(doRPCRequest(make_shared<string>("QueryAliases"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAliasesResponse Alibabacloud_Push20160801::Client::queryAliases(shared_ptr<QueryAliasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAliasesWithOptions(request, runtime);
}

QueryDeviceCountResponse Alibabacloud_Push20160801::Client::queryDeviceCountWithOptions(shared_ptr<QueryDeviceCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceCountResponse(doRPCRequest(make_shared<string>("QueryDeviceCount"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceCountResponse Alibabacloud_Push20160801::Client::queryDeviceCount(shared_ptr<QueryDeviceCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceCountWithOptions(request, runtime);
}

QueryDeviceInfoResponse Alibabacloud_Push20160801::Client::queryDeviceInfoWithOptions(shared_ptr<QueryDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceInfoResponse(doRPCRequest(make_shared<string>("QueryDeviceInfo"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceInfoResponse Alibabacloud_Push20160801::Client::queryDeviceInfo(shared_ptr<QueryDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceInfoWithOptions(request, runtime);
}

QueryDevicesByAccountResponse Alibabacloud_Push20160801::Client::queryDevicesByAccountWithOptions(shared_ptr<QueryDevicesByAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDevicesByAccountResponse(doRPCRequest(make_shared<string>("QueryDevicesByAccount"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDevicesByAccountResponse Alibabacloud_Push20160801::Client::queryDevicesByAccount(shared_ptr<QueryDevicesByAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicesByAccountWithOptions(request, runtime);
}

QueryDevicesByAliasResponse Alibabacloud_Push20160801::Client::queryDevicesByAliasWithOptions(shared_ptr<QueryDevicesByAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDevicesByAliasResponse(doRPCRequest(make_shared<string>("QueryDevicesByAlias"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDevicesByAliasResponse Alibabacloud_Push20160801::Client::queryDevicesByAlias(shared_ptr<QueryDevicesByAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicesByAliasWithOptions(request, runtime);
}

QueryDeviceStatResponse Alibabacloud_Push20160801::Client::queryDeviceStatWithOptions(shared_ptr<QueryDeviceStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceStatResponse(doRPCRequest(make_shared<string>("QueryDeviceStat"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceStatResponse Alibabacloud_Push20160801::Client::queryDeviceStat(shared_ptr<QueryDeviceStatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceStatWithOptions(request, runtime);
}

QueryPushRecordsResponse Alibabacloud_Push20160801::Client::queryPushRecordsWithOptions(shared_ptr<QueryPushRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryPushRecordsResponse(doRPCRequest(make_shared<string>("QueryPushRecords"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryPushRecordsResponse Alibabacloud_Push20160801::Client::queryPushRecords(shared_ptr<QueryPushRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPushRecordsWithOptions(request, runtime);
}

QueryPushStatByAppResponse Alibabacloud_Push20160801::Client::queryPushStatByAppWithOptions(shared_ptr<QueryPushStatByAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryPushStatByAppResponse(doRPCRequest(make_shared<string>("QueryPushStatByApp"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryPushStatByAppResponse Alibabacloud_Push20160801::Client::queryPushStatByApp(shared_ptr<QueryPushStatByAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPushStatByAppWithOptions(request, runtime);
}

QueryPushStatByMsgResponse Alibabacloud_Push20160801::Client::queryPushStatByMsgWithOptions(shared_ptr<QueryPushStatByMsgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryPushStatByMsgResponse(doRPCRequest(make_shared<string>("QueryPushStatByMsg"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryPushStatByMsgResponse Alibabacloud_Push20160801::Client::queryPushStatByMsg(shared_ptr<QueryPushStatByMsgRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPushStatByMsgWithOptions(request, runtime);
}

QueryTagsResponse Alibabacloud_Push20160801::Client::queryTagsWithOptions(shared_ptr<QueryTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTagsResponse(doRPCRequest(make_shared<string>("QueryTags"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTagsResponse Alibabacloud_Push20160801::Client::queryTags(shared_ptr<QueryTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTagsWithOptions(request, runtime);
}

QueryUniqueDeviceStatResponse Alibabacloud_Push20160801::Client::queryUniqueDeviceStatWithOptions(shared_ptr<QueryUniqueDeviceStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryUniqueDeviceStatResponse(doRPCRequest(make_shared<string>("QueryUniqueDeviceStat"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryUniqueDeviceStatResponse Alibabacloud_Push20160801::Client::queryUniqueDeviceStat(shared_ptr<QueryUniqueDeviceStatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUniqueDeviceStatWithOptions(request, runtime);
}

RemoveTagResponse Alibabacloud_Push20160801::Client::removeTagWithOptions(shared_ptr<RemoveTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveTagResponse(doRPCRequest(make_shared<string>("RemoveTag"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveTagResponse Alibabacloud_Push20160801::Client::removeTag(shared_ptr<RemoveTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTagWithOptions(request, runtime);
}

UnbindAliasResponse Alibabacloud_Push20160801::Client::unbindAliasWithOptions(shared_ptr<UnbindAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindAliasResponse(doRPCRequest(make_shared<string>("UnbindAlias"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindAliasResponse Alibabacloud_Push20160801::Client::unbindAlias(shared_ptr<UnbindAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindAliasWithOptions(request, runtime);
}

UnbindPhoneResponse Alibabacloud_Push20160801::Client::unbindPhoneWithOptions(shared_ptr<UnbindPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindPhoneResponse(doRPCRequest(make_shared<string>("UnbindPhone"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindPhoneResponse Alibabacloud_Push20160801::Client::unbindPhone(shared_ptr<UnbindPhoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindPhoneWithOptions(request, runtime);
}

UnbindTagResponse Alibabacloud_Push20160801::Client::unbindTagWithOptions(shared_ptr<UnbindTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindTagResponse(doRPCRequest(make_shared<string>("UnbindTag"), make_shared<string>("2016-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindTagResponse Alibabacloud_Push20160801::Client::unbindTag(shared_ptr<UnbindTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindTagWithOptions(request, runtime);
}

