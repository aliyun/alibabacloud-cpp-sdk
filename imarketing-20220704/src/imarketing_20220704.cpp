// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/imarketing_20220704.hpp>
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

using namespace Alibabacloud_Imarketing20220704;

Alibabacloud_Imarketing20220704::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("imarketing"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Imarketing20220704::Client::getEndpoint(shared_ptr<string> productId,
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

CancelOrderResponse Alibabacloud_Imarketing20220704::Client::cancelOrderWithOptions(shared_ptr<CancelOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tradeId)) {
    body->insert(pair<string, string>("TradeId", *request->tradeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelOrder"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelOrderResponse(callApi(params, req, runtime));
}

CancelOrderResponse Alibabacloud_Imarketing20220704::Client::cancelOrder(shared_ptr<CancelOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOrderWithOptions(request, runtime);
}

ConfirmSampleReceivedResponse Alibabacloud_Imarketing20220704::Client::confirmSampleReceivedWithOptions(shared_ptr<ConfirmSampleReceivedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tradeId)) {
    body->insert(pair<string, string>("TradeId", *request->tradeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmSampleReceived"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmSampleReceivedResponse(callApi(params, req, runtime));
}

ConfirmSampleReceivedResponse Alibabacloud_Imarketing20220704::Client::confirmSampleReceived(shared_ptr<ConfirmSampleReceivedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmSampleReceivedWithOptions(request, runtime);
}

ConfirmSampleShippedResponse Alibabacloud_Imarketing20220704::Client::confirmSampleShippedWithOptions(shared_ptr<ConfirmSampleShippedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerAddress)) {
    body->insert(pair<string, string>("BuyerAddress", *request->buyerAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    body->insert(pair<string, string>("BuyerName", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerPhoneNumber)) {
    body->insert(pair<string, string>("BuyerPhoneNumber", *request->buyerPhoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tradeId)) {
    body->insert(pair<string, string>("TradeId", *request->tradeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmSampleShipped"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmSampleShippedResponse(callApi(params, req, runtime));
}

ConfirmSampleShippedResponse Alibabacloud_Imarketing20220704::Client::confirmSampleShipped(shared_ptr<ConfirmSampleShippedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmSampleShippedWithOptions(request, runtime);
}

CreateDeviceResponse Alibabacloud_Imarketing20220704::Client::createDeviceWithOptions(shared_ptr<CreateDeviceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDeviceShrinkRequest> request = make_shared<CreateDeviceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extraMap)) {
    request->extraMapShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extraMap, make_shared<string>("ExtraMap"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    body->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceModelNumber)) {
    body->insert(pair<string, string>("DeviceModelNumber", *request->deviceModelNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    body->insert(pair<string, string>("DeviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->district)) {
    body->insert(pair<string, string>("District", *request->district));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraMapShrink)) {
    body->insert(pair<string, string>("ExtraMap", *request->extraMapShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firstScene)) {
    body->insert(pair<string, string>("FirstScene", *request->firstScene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->floor)) {
    body->insert(pair<string, string>("Floor", *request->floor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationName)) {
    body->insert(pair<string, string>("LocationName", *request->locationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    body->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerCode)) {
    body->insert(pair<string, string>("OuterCode", *request->outerCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    body->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secondScene)) {
    body->insert(pair<string, string>("SecondScene", *request->secondScene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDevice"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeviceResponse(callApi(params, req, runtime));
}

CreateDeviceResponse Alibabacloud_Imarketing20220704::Client::createDevice(shared_ptr<CreateDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceWithOptions(request, runtime);
}

DeleteCreativeInfoResponse Alibabacloud_Imarketing20220704::Client::deleteCreativeInfoWithOptions(shared_ptr<DeleteCreativeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountNo)) {
    query->insert(pair<string, string>("AccountNo", *request->accountNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mainId)) {
    query->insert(pair<string, long>("MainId", *request->mainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateUser)) {
    query->insert(pair<string, string>("UpdateUser", *request->updateUser));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCreativeInfo"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCreativeInfoResponse(callApi(params, req, runtime));
}

DeleteCreativeInfoResponse Alibabacloud_Imarketing20220704::Client::deleteCreativeInfo(shared_ptr<DeleteCreativeInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCreativeInfoWithOptions(request, runtime);
}

GetAdvertisingForE2Response Alibabacloud_Imarketing20220704::Client::getAdvertisingForE2WithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAdvertisingForE2"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAdvertisingForE2Response(callApi(params, req, runtime));
}

GetAdvertisingForE2Response Alibabacloud_Imarketing20220704::Client::getAdvertisingForE2() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAdvertisingForE2WithOptions(runtime);
}

GetBrandPageResponse Alibabacloud_Imarketing20220704::Client::getBrandPageWithOptions(shared_ptr<GetBrandPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountNo)) {
    query->insert(pair<string, string>("AccountNo", *request->accountNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mainId)) {
    query->insert(pair<string, long>("MainId", *request->mainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mainName)) {
    query->insert(pair<string, string>("MainName", *request->mainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBrandPage"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBrandPageResponse(callApi(params, req, runtime));
}

GetBrandPageResponse Alibabacloud_Imarketing20220704::Client::getBrandPage(shared_ptr<GetBrandPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBrandPageWithOptions(request, runtime);
}

GetBusinessIdResponse Alibabacloud_Imarketing20220704::Client::getBusinessIdWithOptions(shared_ptr<GetBusinessIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessId)) {
    query->insert(pair<string, string>("BusinessId", *request->businessId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessId"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessIdResponse(callApi(params, req, runtime));
}

GetBusinessIdResponse Alibabacloud_Imarketing20220704::Client::getBusinessId(shared_ptr<GetBusinessIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessIdWithOptions(request, runtime);
}

GetCreativeInfoResponse Alibabacloud_Imarketing20220704::Client::getCreativeInfoWithOptions(shared_ptr<GetCreativeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountNo)) {
    query->insert(pair<string, string>("AccountNo", *request->accountNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mainId)) {
    query->insert(pair<string, long>("MainId", *request->mainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCreativeInfo"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCreativeInfoResponse(callApi(params, req, runtime));
}

GetCreativeInfoResponse Alibabacloud_Imarketing20220704::Client::getCreativeInfo(shared_ptr<GetCreativeInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCreativeInfoWithOptions(request, runtime);
}

GetLeadsListPageResponse Alibabacloud_Imarketing20220704::Client::getLeadsListPageWithOptions(shared_ptr<GetLeadsListPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->componentId)) {
    query->insert(pair<string, long>("ComponentId", *request->componentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->contentId)) {
    query->insert(pair<string, long>("ContentId", *request->contentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->creativeId)) {
    query->insert(pair<string, long>("CreativeId", *request->creativeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mainId)) {
    query->insert(pair<string, long>("MainId", *request->mainId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLeadsListPage"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLeadsListPageResponse(callApi(params, req, runtime));
}

GetLeadsListPageResponse Alibabacloud_Imarketing20220704::Client::getLeadsListPage(shared_ptr<GetLeadsListPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLeadsListPageWithOptions(request, runtime);
}

GetMainPartPageResponse Alibabacloud_Imarketing20220704::Client::getMainPartPageWithOptions(shared_ptr<GetMainPartPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->mainId)) {
    query->insert(pair<string, long>("MainId", *request->mainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mainName)) {
    query->insert(pair<string, string>("MainName", *request->mainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMainPartPage"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMainPartPageResponse(callApi(params, req, runtime));
}

GetMainPartPageResponse Alibabacloud_Imarketing20220704::Client::getMainPartPage(shared_ptr<GetMainPartPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMainPartPageWithOptions(request, runtime);
}

GetOssUploadSignatureResponse Alibabacloud_Imarketing20220704::Client::getOssUploadSignatureWithOptions(shared_ptr<GetOssUploadSignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOssUploadSignature"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOssUploadSignatureResponse(callApi(params, req, runtime));
}

GetOssUploadSignatureResponse Alibabacloud_Imarketing20220704::Client::getOssUploadSignature(shared_ptr<GetOssUploadSignatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOssUploadSignatureWithOptions(request, runtime);
}

GetRelatedByCreativeIdResponse Alibabacloud_Imarketing20220704::Client::getRelatedByCreativeIdWithOptions(shared_ptr<GetRelatedByCreativeIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRelatedByCreativeId"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRelatedByCreativeIdResponse(callApi(params, req, runtime));
}

GetRelatedByCreativeIdResponse Alibabacloud_Imarketing20220704::Client::getRelatedByCreativeId(shared_ptr<GetRelatedByCreativeIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRelatedByCreativeIdWithOptions(request, runtime);
}

GetUserFinishedAdResponse Alibabacloud_Imarketing20220704::Client::getUserFinishedAdWithOptions(shared_ptr<GetUserFinishedAdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserFinishedAd"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserFinishedAdResponse(callApi(params, req, runtime));
}

GetUserFinishedAdResponse Alibabacloud_Imarketing20220704::Client::getUserFinishedAd(shared_ptr<GetUserFinishedAdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserFinishedAdWithOptions(request, runtime);
}

ListAdvertisingResponse Alibabacloud_Imarketing20220704::Client::listAdvertisingWithOptions(shared_ptr<ListAdvertisingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAdvertisingShrinkRequest> request = make_shared<ListAdvertisingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListAdvertisingRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListAdvertisingRequestDevice>(tmpReq->device)) {
    request->deviceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->device, make_shared<string>("Device"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->ext)) {
    request->extShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ext, make_shared<string>("Ext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListAdvertisingRequestImp>>(tmpReq->imp)) {
    request->impShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->imp, make_shared<string>("Imp"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListAdvertisingRequestUser>(tmpReq->user)) {
    request->userShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->user, make_shared<string>("User"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAdvertising"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAdvertisingResponse(callApi(params, req, runtime));
}

ListAdvertisingResponse Alibabacloud_Imarketing20220704::Client::listAdvertising(shared_ptr<ListAdvertisingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAdvertisingWithOptions(request, runtime);
}

ListSpecificAdResponse Alibabacloud_Imarketing20220704::Client::listSpecificAdWithOptions(shared_ptr<ListSpecificAdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListSpecificAdShrinkRequest> request = make_shared<ListSpecificAdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListSpecificAdRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->ext)) {
    request->extShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ext, make_shared<string>("Ext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListSpecificAdRequestImp>>(tmpReq->imp)) {
    request->impShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->imp, make_shared<string>("Imp"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListSpecificAdRequestUser>(tmpReq->user)) {
    request->userShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->user, make_shared<string>("User"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListSpecificAdRequestVerifyad>>(tmpReq->verifyad)) {
    request->verifyadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->verifyad, make_shared<string>("Verifyad"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extShrink)) {
    query->insert(pair<string, string>("Ext", *request->extShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->impShrink)) {
    query->insert(pair<string, string>("Imp", *request->impShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userShrink)) {
    query->insert(pair<string, string>("User", *request->userShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyadShrink)) {
    query->insert(pair<string, string>("Verifyad", *request->verifyadShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSpecificAd"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSpecificAdResponse(callApi(params, req, runtime));
}

ListSpecificAdResponse Alibabacloud_Imarketing20220704::Client::listSpecificAd(shared_ptr<ListSpecificAdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSpecificAdWithOptions(request, runtime);
}

QueryAuditResultResponse Alibabacloud_Imarketing20220704::Client::queryAuditResultWithOptions(shared_ptr<QueryAuditResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dspId)) {
    query->insert(pair<string, string>("DspId", *request->dspId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ids)) {
    query->insert(pair<string, vector<string>>("Ids", *request->ids));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAuditResult"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAuditResultResponse(callApi(params, req, runtime));
}

QueryAuditResultResponse Alibabacloud_Imarketing20220704::Client::queryAuditResult(shared_ptr<QueryAuditResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAuditResultWithOptions(request, runtime);
}

QueryBenefitGrantResultResponse Alibabacloud_Imarketing20220704::Client::queryBenefitGrantResultWithOptions(shared_ptr<QueryBenefitGrantResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cloducodeFlowNo)) {
    body->insert(pair<string, string>("CloducodeFlowNo", *request->cloducodeFlowNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerCustomerId)) {
    body->insert(pair<string, string>("OuterCustomerId", *request->outerCustomerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBenefitGrantResult"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBenefitGrantResultResponse(callApi(params, req, runtime));
}

QueryBenefitGrantResultResponse Alibabacloud_Imarketing20220704::Client::queryBenefitGrantResult(shared_ptr<QueryBenefitGrantResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBenefitGrantResultWithOptions(request, runtime);
}

QueryFinanceUserInfoResponse Alibabacloud_Imarketing20220704::Client::queryFinanceUserInfoWithOptions(shared_ptr<QueryFinanceUserInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->activityId)) {
    body->insert(pair<string, long>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFinanceUserInfo"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFinanceUserInfoResponse(callApi(params, req, runtime));
}

QueryFinanceUserInfoResponse Alibabacloud_Imarketing20220704::Client::queryFinanceUserInfo(shared_ptr<QueryFinanceUserInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFinanceUserInfoWithOptions(request, runtime);
}

QueryOrderResponse Alibabacloud_Imarketing20220704::Client::queryOrderWithOptions(shared_ptr<QueryOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelTradeId)) {
    body->insert(pair<string, string>("ChannelTradeId", *request->channelTradeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tradeId)) {
    body->insert(pair<string, string>("TradeId", *request->tradeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrder"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderResponse(callApi(params, req, runtime));
}

QueryOrderResponse Alibabacloud_Imarketing20220704::Client::queryOrder(shared_ptr<QueryOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderWithOptions(request, runtime);
}

ReportImpressionResponse Alibabacloud_Imarketing20220704::Client::reportImpressionWithOptions(shared_ptr<ReportImpressionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->impressionlink)) {
    query->insert(pair<string, string>("Impressionlink", *request->impressionlink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportImpression"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportImpressionResponse(callApi(params, req, runtime));
}

ReportImpressionResponse Alibabacloud_Imarketing20220704::Client::reportImpression(shared_ptr<ReportImpressionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportImpressionWithOptions(request, runtime);
}

ReportTranslateResponse Alibabacloud_Imarketing20220704::Client::reportTranslateWithOptions(shared_ptr<ReportTranslateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportTranslate"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportTranslateResponse(callApi(params, req, runtime));
}

ReportTranslateResponse Alibabacloud_Imarketing20220704::Client::reportTranslate(shared_ptr<ReportTranslateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportTranslateWithOptions(request, runtime);
}

SendSmsResponse Alibabacloud_Imarketing20220704::Client::sendSmsWithOptions(shared_ptr<SendSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->nowStamp)) {
    query->insert(pair<string, long>("NowStamp", *request->nowStamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumbers)) {
    query->insert(pair<string, string>("PhoneNumbers", *request->phoneNumbers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signKey)) {
    query->insert(pair<string, string>("SignKey", *request->signKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendSms"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendSmsResponse(callApi(params, req, runtime));
}

SendSmsResponse Alibabacloud_Imarketing20220704::Client::sendSms(shared_ptr<SendSmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendSmsWithOptions(request, runtime);
}

SyncInfoResponse Alibabacloud_Imarketing20220704::Client::syncInfoWithOptions(shared_ptr<SyncInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountNo)) {
    query->insert(pair<string, string>("AccountNo", *request->accountNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chainValue)) {
    query->insert(pair<string, string>("ChainValue", *request->chainValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentIdList)) {
    query->insert(pair<string, string>("ComponentIdList", *request->componentIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createUser)) {
    query->insert(pair<string, string>("CreateUser", *request->createUser));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mainId)) {
    query->insert(pair<string, long>("MainId", *request->mainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextChainValue)) {
    query->insert(pair<string, string>("NextChainValue", *request->nextChainValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossFileUrl)) {
    query->insert(pair<string, string>("OssFileUrl", *request->ossFileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageId)) {
    query->insert(pair<string, string>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateUser)) {
    query->insert(pair<string, string>("UpdateUser", *request->updateUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->urlType)) {
    query->insert(pair<string, long>("UrlType", *request->urlType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncInfo"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncInfoResponse(callApi(params, req, runtime));
}

SyncInfoResponse Alibabacloud_Imarketing20220704::Client::syncInfo(shared_ptr<SyncInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncInfoWithOptions(request, runtime);
}

UpdateAdxCreativeContentResponse Alibabacloud_Imarketing20220704::Client::updateAdxCreativeContentWithOptions(shared_ptr<UpdateAdxCreativeContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateAdxCreativeContentRequestAd>>(request->ad)) {
    query->insert(pair<string, vector<UpdateAdxCreativeContentRequestAd>>("Ad", *request->ad));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dspId)) {
    query->insert(pair<string, string>("DspId", *request->dspId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAdxCreativeContent"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAdxCreativeContentResponse(callApi(params, req, runtime));
}

UpdateAdxCreativeContentResponse Alibabacloud_Imarketing20220704::Client::updateAdxCreativeContent(shared_ptr<UpdateAdxCreativeContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAdxCreativeContentWithOptions(request, runtime);
}

VerifyAdvertisingResponse Alibabacloud_Imarketing20220704::Client::verifyAdvertisingWithOptions(shared_ptr<VerifyAdvertisingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<VerifyAdvertisingShrinkRequest> request = make_shared<VerifyAdvertisingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<VerifyAdvertisingRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<VerifyAdvertisingRequestDevice>(tmpReq->device)) {
    request->deviceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->device, make_shared<string>("Device"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->ext)) {
    request->extShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ext, make_shared<string>("Ext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<VerifyAdvertisingRequestImp>>(tmpReq->imp)) {
    request->impShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->imp, make_shared<string>("Imp"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<VerifyAdvertisingRequestUser>(tmpReq->user)) {
    request->userShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->user, make_shared<string>("User"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<VerifyAdvertisingRequestVerifyad>>(tmpReq->verifyad)) {
    request->verifyadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->verifyad, make_shared<string>("Verifyad"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyAdvertising"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyAdvertisingResponse(callApi(params, req, runtime));
}

VerifyAdvertisingResponse Alibabacloud_Imarketing20220704::Client::verifyAdvertising(shared_ptr<VerifyAdvertisingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyAdvertisingWithOptions(request, runtime);
}

VerifySmsCodeResponse Alibabacloud_Imarketing20220704::Client::verifySmsCodeWithOptions(shared_ptr<VerifySmsCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nowStamp)) {
    query->insert(pair<string, long>("NowStamp", *request->nowStamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumbers)) {
    query->insert(pair<string, string>("PhoneNumbers", *request->phoneNumbers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signKey)) {
    query->insert(pair<string, string>("SignKey", *request->signKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifySmsCode"))},
    {"version", boost::any(string("2022-07-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifySmsCodeResponse(callApi(params, req, runtime));
}

VerifySmsCodeResponse Alibabacloud_Imarketing20220704::Client::verifySmsCode(shared_ptr<VerifySmsCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifySmsCodeWithOptions(request, runtime);
}

