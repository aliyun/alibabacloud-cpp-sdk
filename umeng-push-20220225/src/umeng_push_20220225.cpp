// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/umeng_push_20220225.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
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

CancelByMsgIdResponse Alibabacloud_Umeng-push20220225::Client::cancelByMsgIdWithOptions(shared_ptr<CancelByMsgIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->msgId)) {
    body->insert(pair<string, string>("MsgId", *request->msgId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelByMsgId"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/CancelByMsgId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelByMsgIdResponse(callApi(params, req, runtime));
}

CancelByMsgIdResponse Alibabacloud_Umeng-push20220225::Client::cancelByMsgId(shared_ptr<CancelByMsgIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelByMsgIdWithOptions(request, headers, runtime);
}

QueryMsgStatResponse Alibabacloud_Umeng-push20220225::Client::queryMsgStatWithOptions(shared_ptr<QueryMsgStatRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->msgId)) {
    body->insert(pair<string, string>("MsgId", *request->msgId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMsgStat"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/QueryMsgStat"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMsgStatResponse(callApi(params, req, runtime));
}

QueryMsgStatResponse Alibabacloud_Umeng-push20220225::Client::queryMsgStat(shared_ptr<QueryMsgStatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryMsgStatWithOptions(request, headers, runtime);
}

SendByAliasResponse Alibabacloud_Umeng-push20220225::Client::sendByAliasWithOptions(shared_ptr<SendByAliasRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendByAliasShrinkRequest> request = make_shared<SendByAliasShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AndroidPayload>(tmpReq->androidPayload)) {
    request->androidPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->androidPayload, make_shared<string>("AndroidPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ChannelProperties>(tmpReq->channelProperties)) {
    request->channelPropertiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->channelProperties, make_shared<string>("ChannelProperties"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<IosPayload>(tmpReq->iosPayload)) {
    request->iosPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->iosPayload, make_shared<string>("IosPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Policy>(tmpReq->policy)) {
    request->policyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->policy, make_shared<string>("Policy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    body->insert(pair<string, string>("Alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliasType)) {
    body->insert(pair<string, string>("AliasType", *request->aliasType));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyId)) {
    body->insert(pair<string, string>("ThirdPartyId", *request->thirdPartyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendByAlias"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/SendByAlias"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendByAliasResponse(callApi(params, req, runtime));
}

SendByAliasResponse Alibabacloud_Umeng-push20220225::Client::sendByAlias(shared_ptr<SendByAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendByAliasWithOptions(request, headers, runtime);
}

SendByAliasFileIdResponse Alibabacloud_Umeng-push20220225::Client::sendByAliasFileIdWithOptions(shared_ptr<SendByAliasFileIdRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendByAliasFileIdShrinkRequest> request = make_shared<SendByAliasFileIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AndroidPayload>(tmpReq->androidPayload)) {
    request->androidPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->androidPayload, make_shared<string>("AndroidPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ChannelProperties>(tmpReq->channelProperties)) {
    request->channelPropertiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->channelProperties, make_shared<string>("ChannelProperties"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<IosPayload>(tmpReq->iosPayload)) {
    request->iosPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->iosPayload, make_shared<string>("IosPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Policy>(tmpReq->policy)) {
    request->policyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->policy, make_shared<string>("Policy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliasType)) {
    body->insert(pair<string, string>("AliasType", *request->aliasType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidPayloadShrink)) {
    body->insert(pair<string, string>("AndroidPayload", *request->androidPayloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelPropertiesShrink)) {
    body->insert(pair<string, string>("ChannelProperties", *request->channelPropertiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    body->insert(pair<string, string>("FileId", *request->fileId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyId)) {
    body->insert(pair<string, string>("ThirdPartyId", *request->thirdPartyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendByAliasFileId"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/SendByAliasFileId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendByAliasFileIdResponse(callApi(params, req, runtime));
}

SendByAliasFileIdResponse Alibabacloud_Umeng-push20220225::Client::sendByAliasFileId(shared_ptr<SendByAliasFileIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendByAliasFileIdWithOptions(request, headers, runtime);
}

SendByAppResponse Alibabacloud_Umeng-push20220225::Client::sendByAppWithOptions(shared_ptr<SendByAppRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendByAppShrinkRequest> request = make_shared<SendByAppShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AndroidPayload>(tmpReq->androidPayload)) {
    request->androidPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->androidPayload, make_shared<string>("AndroidPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ChannelProperties>(tmpReq->channelProperties)) {
    request->channelPropertiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->channelProperties, make_shared<string>("ChannelProperties"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<IosPayload>(tmpReq->iosPayload)) {
    request->iosPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->iosPayload, make_shared<string>("IosPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Policy>(tmpReq->policy)) {
    request->policyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->policy, make_shared<string>("Policy"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyId)) {
    body->insert(pair<string, string>("ThirdPartyId", *request->thirdPartyId));
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

SendByAppResponse Alibabacloud_Umeng-push20220225::Client::sendByApp(shared_ptr<SendByAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendByAppWithOptions(request, headers, runtime);
}

SendByDeviceResponse Alibabacloud_Umeng-push20220225::Client::sendByDeviceWithOptions(shared_ptr<SendByDeviceRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendByDeviceShrinkRequest> request = make_shared<SendByDeviceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AndroidPayload>(tmpReq->androidPayload)) {
    request->androidPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->androidPayload, make_shared<string>("AndroidPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ChannelProperties>(tmpReq->channelProperties)) {
    request->channelPropertiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->channelProperties, make_shared<string>("ChannelProperties"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<IosPayload>(tmpReq->iosPayload)) {
    request->iosPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->iosPayload, make_shared<string>("IosPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Policy>(tmpReq->policy)) {
    request->policyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->policy, make_shared<string>("Policy"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyId)) {
    body->insert(pair<string, string>("ThirdPartyId", *request->thirdPartyId));
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

SendByDeviceResponse Alibabacloud_Umeng-push20220225::Client::sendByDevice(shared_ptr<SendByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendByDeviceWithOptions(request, headers, runtime);
}

SendByDeviceFileIdResponse Alibabacloud_Umeng-push20220225::Client::sendByDeviceFileIdWithOptions(shared_ptr<SendByDeviceFileIdRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendByDeviceFileIdShrinkRequest> request = make_shared<SendByDeviceFileIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AndroidPayload>(tmpReq->androidPayload)) {
    request->androidPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->androidPayload, make_shared<string>("AndroidPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ChannelProperties>(tmpReq->channelProperties)) {
    request->channelPropertiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->channelProperties, make_shared<string>("ChannelProperties"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<IosPayload>(tmpReq->iosPayload)) {
    request->iosPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->iosPayload, make_shared<string>("IosPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Policy>(tmpReq->policy)) {
    request->policyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->policy, make_shared<string>("Policy"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    body->insert(pair<string, string>("FileId", *request->fileId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyId)) {
    body->insert(pair<string, string>("ThirdPartyId", *request->thirdPartyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendByDeviceFileId"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/SendByDeviceFileId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendByDeviceFileIdResponse(callApi(params, req, runtime));
}

SendByDeviceFileIdResponse Alibabacloud_Umeng-push20220225::Client::sendByDeviceFileId(shared_ptr<SendByDeviceFileIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendByDeviceFileIdWithOptions(request, headers, runtime);
}

SendByFilterResponse Alibabacloud_Umeng-push20220225::Client::sendByFilterWithOptions(shared_ptr<SendByFilterRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendByFilterShrinkRequest> request = make_shared<SendByFilterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AndroidPayload>(tmpReq->androidPayload)) {
    request->androidPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->androidPayload, make_shared<string>("AndroidPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ChannelProperties>(tmpReq->channelProperties)) {
    request->channelPropertiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->channelProperties, make_shared<string>("ChannelProperties"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<IosPayload>(tmpReq->iosPayload)) {
    request->iosPayloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->iosPayload, make_shared<string>("IosPayload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Policy>(tmpReq->policy)) {
    request->policyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->policy, make_shared<string>("Policy"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    body->insert(pair<string, string>("Filter", *request->filter));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyId)) {
    body->insert(pair<string, string>("ThirdPartyId", *request->thirdPartyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendByFilter"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/SendByFilter"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendByFilterResponse(callApi(params, req, runtime));
}

SendByFilterResponse Alibabacloud_Umeng-push20220225::Client::sendByFilter(shared_ptr<SendByFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendByFilterWithOptions(request, headers, runtime);
}

UploadDeviceResponse Alibabacloud_Umeng-push20220225::Client::uploadDeviceWithOptions(shared_ptr<UploadDeviceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceTokens)) {
    body->insert(pair<string, string>("DeviceTokens", *request->deviceTokens));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadDevice"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/UploadDevice"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadDeviceResponse(callApi(params, req, runtime));
}

UploadDeviceResponse Alibabacloud_Umeng-push20220225::Client::uploadDevice(shared_ptr<UploadDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return uploadDeviceWithOptions(request, headers, runtime);
}

