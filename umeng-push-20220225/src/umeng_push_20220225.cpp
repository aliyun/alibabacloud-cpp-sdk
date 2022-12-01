// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/umeng_push_20220225.hpp>
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

using namespace Alibabacloud_Umeng-push20220225;

Alibabacloud_Umeng-push20220225::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("umeng-push"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Umeng-push20220225::Client::getEndpoint(shared_ptr<string> productId,
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

SendByAppResponse Alibabacloud_Umeng-push20220225::Client::sendByApp(shared_ptr<SendByAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendByAppWithOptions(request, headers, runtime);
}

SendByAppResponse Alibabacloud_Umeng-push20220225::Client::sendByAppWithOptions(shared_ptr<SendByAppRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendByAppShrinkRequest> request = make_shared<SendByAppShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AndroidPayload>(tmpReq->androidPayload)) {
    request->androidPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->androidPayload->toMap()), make_shared<string>("AndroidPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ChannelProperties>(tmpReq->channelProperties)) {
    request->channelPropertiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->channelProperties->toMap()), make_shared<string>("ChannelProperties"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<IosPayload>(tmpReq->iosPayload)) {
    request->iosPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->iosPayload->toMap()), make_shared<string>("IosPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Policy>(tmpReq->policy)) {
    request->policyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->policy->toMap()), make_shared<string>("Policy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->androidPayloadShrink)) {
    body->insert(pair<string, string>("AndroidPayload", *request->androidPayloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelPropertiesShrink)) {
    body->insert(pair<string, string>("ChannelProperties", *request->channelPropertiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iosPayloadShrink)) {
    body->insert(pair<string, string>("IosPayload", *request->iosPayloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyShrink)) {
    body->insert(pair<string, string>("Policy", *request->policyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->productionMode)) {
    body->insert(pair<string, bool>("ProductionMode", *request->productionMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->receiptType)) {
    body->insert(pair<string, long>("ReceiptType", *request->receiptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiptUrl)) {
    body->insert(pair<string, string>("ReceiptUrl", *request->receiptUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendByApp"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/SendByApp"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendByAppResponse(callApi(params, req, runtime));
}

SendByDeviceResponse Alibabacloud_Umeng-push20220225::Client::sendByDevice(shared_ptr<SendByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendByDeviceWithOptions(request, headers, runtime);
}

SendByDeviceResponse Alibabacloud_Umeng-push20220225::Client::sendByDeviceWithOptions(shared_ptr<SendByDeviceRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendByDeviceShrinkRequest> request = make_shared<SendByDeviceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AndroidPayload>(tmpReq->androidPayload)) {
    request->androidPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->androidPayload->toMap()), make_shared<string>("AndroidPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ChannelProperties>(tmpReq->channelProperties)) {
    request->channelPropertiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->channelProperties->toMap()), make_shared<string>("ChannelProperties"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<IosPayload>(tmpReq->iosPayload)) {
    request->iosPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->iosPayload->toMap()), make_shared<string>("IosPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Policy>(tmpReq->policy)) {
    request->policyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->policy->toMap()), make_shared<string>("Policy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->androidPayloadShrink)) {
    body->insert(pair<string, string>("AndroidPayload", *request->androidPayloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelPropertiesShrink)) {
    body->insert(pair<string, string>("ChannelProperties", *request->channelPropertiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceTokens)) {
    body->insert(pair<string, string>("DeviceTokens", *request->deviceTokens));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iosPayloadShrink)) {
    body->insert(pair<string, string>("IosPayload", *request->iosPayloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyShrink)) {
    body->insert(pair<string, string>("Policy", *request->policyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->productionMode)) {
    body->insert(pair<string, bool>("ProductionMode", *request->productionMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->receiptType)) {
    body->insert(pair<string, long>("ReceiptType", *request->receiptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiptUrl)) {
    body->insert(pair<string, string>("ReceiptUrl", *request->receiptUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendByDevice"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/SendByDevice"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendByDeviceResponse(callApi(params, req, runtime));
}

