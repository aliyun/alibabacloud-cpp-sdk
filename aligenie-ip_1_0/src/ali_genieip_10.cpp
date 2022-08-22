// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ali_genieip_10.hpp>
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

using namespace Alibabacloud_AliGenieip10;

Alibabacloud_AliGenieip10::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aligenie"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_AliGenieip10::Client::getEndpoint(shared_ptr<string> productId,
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

DeviceControlResponse Alibabacloud_AliGenieip10::Client::deviceControl(shared_ptr<DeviceControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeviceControlHeaders> headers = make_shared<DeviceControlHeaders>();
  return deviceControlWithOptions(request, headers, runtime);
}

DeviceControlResponse Alibabacloud_AliGenieip10::Client::deviceControlWithOptions(shared_ptr<DeviceControlRequest> tmpReq, shared_ptr<DeviceControlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeviceControlShrinkRequest> request = make_shared<DeviceControlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DeviceControlRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeviceControlRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeviceControl"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/deviceControl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeviceControlResponse(callApi(params, req, runtime));
}

GetHotelHomeBackImageAndModesResponse Alibabacloud_AliGenieip10::Client::getHotelHomeBackImageAndModes(shared_ptr<GetHotelHomeBackImageAndModesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelHomeBackImageAndModesHeaders> headers = make_shared<GetHotelHomeBackImageAndModesHeaders>();
  return getHotelHomeBackImageAndModesWithOptions(request, headers, runtime);
}

GetHotelHomeBackImageAndModesResponse Alibabacloud_AliGenieip10::Client::getHotelHomeBackImageAndModesWithOptions(shared_ptr<GetHotelHomeBackImageAndModesRequest> tmpReq, shared_ptr<GetHotelHomeBackImageAndModesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotelHomeBackImageAndModesShrinkRequest> request = make_shared<GetHotelHomeBackImageAndModesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotelHomeBackImageAndModesRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotelHomeBackImageAndModes"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelHomeBackImageAndModes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotelHomeBackImageAndModesResponse(callApi(params, req, runtime));
}

GetHotelOrderDetailResponse Alibabacloud_AliGenieip10::Client::getHotelOrderDetail(shared_ptr<GetHotelOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelOrderDetailHeaders> headers = make_shared<GetHotelOrderDetailHeaders>();
  return getHotelOrderDetailWithOptions(request, headers, runtime);
}

GetHotelOrderDetailResponse Alibabacloud_AliGenieip10::Client::getHotelOrderDetailWithOptions(shared_ptr<GetHotelOrderDetailRequest> tmpReq, shared_ptr<GetHotelOrderDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotelOrderDetailShrinkRequest> request = make_shared<GetHotelOrderDetailShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotelOrderDetailRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotelOrderDetail"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelOrderDetail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotelOrderDetailResponse(callApi(params, req, runtime));
}

GetHotelSampleUtterancesResponse Alibabacloud_AliGenieip10::Client::getHotelSampleUtterances(shared_ptr<GetHotelSampleUtterancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelSampleUtterancesHeaders> headers = make_shared<GetHotelSampleUtterancesHeaders>();
  return getHotelSampleUtterancesWithOptions(request, headers, runtime);
}

GetHotelSampleUtterancesResponse Alibabacloud_AliGenieip10::Client::getHotelSampleUtterancesWithOptions(shared_ptr<GetHotelSampleUtterancesRequest> tmpReq, shared_ptr<GetHotelSampleUtterancesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotelSampleUtterancesShrinkRequest> request = make_shared<GetHotelSampleUtterancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotelSampleUtterancesRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotelSampleUtterances"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelSampleUtterances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotelSampleUtterancesResponse(callApi(params, req, runtime));
}

GetHotelScreenSaverResponse Alibabacloud_AliGenieip10::Client::getHotelScreenSaver(shared_ptr<GetHotelScreenSaverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelScreenSaverHeaders> headers = make_shared<GetHotelScreenSaverHeaders>();
  return getHotelScreenSaverWithOptions(request, headers, runtime);
}

GetHotelScreenSaverResponse Alibabacloud_AliGenieip10::Client::getHotelScreenSaverWithOptions(shared_ptr<GetHotelScreenSaverRequest> tmpReq, shared_ptr<GetHotelScreenSaverHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotelScreenSaverShrinkRequest> request = make_shared<GetHotelScreenSaverShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotelScreenSaverRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotelScreenSaver"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelScreenSaver"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotelScreenSaverResponse(callApi(params, req, runtime));
}

ListHotelControlDeviceResponse Alibabacloud_AliGenieip10::Client::listHotelControlDevice(shared_ptr<ListHotelControlDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelControlDeviceHeaders> headers = make_shared<ListHotelControlDeviceHeaders>();
  return listHotelControlDeviceWithOptions(request, headers, runtime);
}

ListHotelControlDeviceResponse Alibabacloud_AliGenieip10::Client::listHotelControlDeviceWithOptions(shared_ptr<ListHotelControlDeviceRequest> tmpReq, shared_ptr<ListHotelControlDeviceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotelControlDeviceShrinkRequest> request = make_shared<ListHotelControlDeviceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListHotelControlDeviceRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotelControlDevice"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotelControlDevice"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHotelControlDeviceResponse(callApi(params, req, runtime));
}

ListHotelOrderResponse Alibabacloud_AliGenieip10::Client::listHotelOrder(shared_ptr<ListHotelOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelOrderHeaders> headers = make_shared<ListHotelOrderHeaders>();
  return listHotelOrderWithOptions(request, headers, runtime);
}

ListHotelOrderResponse Alibabacloud_AliGenieip10::Client::listHotelOrderWithOptions(shared_ptr<ListHotelOrderRequest> tmpReq, shared_ptr<ListHotelOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotelOrderShrinkRequest> request = make_shared<ListHotelOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListHotelOrderRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListHotelOrderRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotelOrder"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotelOrder"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHotelOrderResponse(callApi(params, req, runtime));
}

ListHotelSceneItemResponse Alibabacloud_AliGenieip10::Client::listHotelSceneItem(shared_ptr<ListHotelSceneItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelSceneItemHeaders> headers = make_shared<ListHotelSceneItemHeaders>();
  return listHotelSceneItemWithOptions(request, headers, runtime);
}

ListHotelSceneItemResponse Alibabacloud_AliGenieip10::Client::listHotelSceneItemWithOptions(shared_ptr<ListHotelSceneItemRequest> tmpReq, shared_ptr<ListHotelSceneItemHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotelSceneItemShrinkRequest> request = make_shared<ListHotelSceneItemShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListHotelSceneItemRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListHotelSceneItemRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotelSceneItem"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotelSceneItem"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHotelSceneItemResponse(callApi(params, req, runtime));
}

ListHotelServiceCategoryResponse Alibabacloud_AliGenieip10::Client::listHotelServiceCategory(shared_ptr<ListHotelServiceCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelServiceCategoryHeaders> headers = make_shared<ListHotelServiceCategoryHeaders>();
  return listHotelServiceCategoryWithOptions(request, headers, runtime);
}

ListHotelServiceCategoryResponse Alibabacloud_AliGenieip10::Client::listHotelServiceCategoryWithOptions(shared_ptr<ListHotelServiceCategoryRequest> tmpReq, shared_ptr<ListHotelServiceCategoryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotelServiceCategoryShrinkRequest> request = make_shared<ListHotelServiceCategoryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListHotelServiceCategoryRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotelServiceCategory"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotelServiceCategory"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHotelServiceCategoryResponse(callApi(params, req, runtime));
}

QueryDeviceStatusResponse Alibabacloud_AliGenieip10::Client::queryDeviceStatus(shared_ptr<QueryDeviceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryDeviceStatusHeaders> headers = make_shared<QueryDeviceStatusHeaders>();
  return queryDeviceStatusWithOptions(request, headers, runtime);
}

QueryDeviceStatusResponse Alibabacloud_AliGenieip10::Client::queryDeviceStatusWithOptions(shared_ptr<QueryDeviceStatusRequest> tmpReq, shared_ptr<QueryDeviceStatusHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryDeviceStatusShrinkRequest> request = make_shared<QueryDeviceStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<QueryDeviceStatusRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryDeviceStatusRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceStatus"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/queryDeviceStatus"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceStatusResponse(callApi(params, req, runtime));
}

QueryHotelProductResponse Alibabacloud_AliGenieip10::Client::queryHotelProduct(shared_ptr<QueryHotelProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryHotelProductHeaders> headers = make_shared<QueryHotelProductHeaders>();
  return queryHotelProductWithOptions(request, headers, runtime);
}

QueryHotelProductResponse Alibabacloud_AliGenieip10::Client::queryHotelProductWithOptions(shared_ptr<QueryHotelProductRequest> tmpReq, shared_ptr<QueryHotelProductHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryHotelProductShrinkRequest> request = make_shared<QueryHotelProductShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<QueryHotelProductRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryHotelProduct"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/queryHotelProduct"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryHotelProductResponse(callApi(params, req, runtime));
}

RoomCheckOutResponse Alibabacloud_AliGenieip10::Client::roomCheckOut(shared_ptr<RoomCheckOutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RoomCheckOutHeaders> headers = make_shared<RoomCheckOutHeaders>();
  return roomCheckOutWithOptions(request, headers, runtime);
}

RoomCheckOutResponse Alibabacloud_AliGenieip10::Client::roomCheckOutWithOptions(shared_ptr<RoomCheckOutRequest> tmpReq, shared_ptr<RoomCheckOutHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RoomCheckOutShrinkRequest> request = make_shared<RoomCheckOutShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RoomCheckOutRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RoomCheckOutRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RoomCheckOut"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/roomCheckOut"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RoomCheckOutResponse(callApi(params, req, runtime));
}

SubmitHotelOrderResponse Alibabacloud_AliGenieip10::Client::submitHotelOrder(shared_ptr<SubmitHotelOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SubmitHotelOrderHeaders> headers = make_shared<SubmitHotelOrderHeaders>();
  return submitHotelOrderWithOptions(request, headers, runtime);
}

SubmitHotelOrderResponse Alibabacloud_AliGenieip10::Client::submitHotelOrderWithOptions(shared_ptr<SubmitHotelOrderRequest> tmpReq, shared_ptr<SubmitHotelOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitHotelOrderShrinkRequest> request = make_shared<SubmitHotelOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitHotelOrderRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitHotelOrderRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitHotelOrder"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/submitHotelOrder"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitHotelOrderResponse(callApi(params, req, runtime));
}

