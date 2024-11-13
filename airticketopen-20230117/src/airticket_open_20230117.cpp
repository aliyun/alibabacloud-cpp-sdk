// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/airticket_open_20230117.hpp>
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

using namespace Alibabacloud_AirticketOpen20230117;

Alibabacloud_AirticketOpen20230117::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("airticketopen"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_AirticketOpen20230117::Client::getEndpoint(shared_ptr<string> productId,
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

AccountFlowListResponse Alibabacloud_AirticketOpen20230117::Client::accountFlowListWithOptions(shared_ptr<AccountFlowListRequest> request, shared_ptr<AccountFlowListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dayNum)) {
    query->insert(pair<string, long>("day_num", *request->dayNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("page_index", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->utcBeginTime)) {
    query->insert(pair<string, long>("utc_begin_time", *request->utcBeginTime));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AccountFlowList"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/account/flow-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AccountFlowListResponse(callApi(params, req, runtime));
}

AccountFlowListResponse Alibabacloud_AirticketOpen20230117::Client::accountFlowList(shared_ptr<AccountFlowListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AccountFlowListHeaders> headers = make_shared<AccountFlowListHeaders>();
  return accountFlowListWithOptions(request, headers, runtime);
}

AncillarySuggestResponse Alibabacloud_AirticketOpen20230117::Client::ancillarySuggestWithOptions(shared_ptr<AncillarySuggestRequest> request, shared_ptr<AncillarySuggestHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->solutionId)) {
    body->insert(pair<string, string>("solution_id", *request->solutionId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AncillarySuggest"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/ancillary/action-suggest"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AncillarySuggestResponse(callApi(params, req, runtime));
}

AncillarySuggestResponse Alibabacloud_AirticketOpen20230117::Client::ancillarySuggest(shared_ptr<AncillarySuggestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AncillarySuggestHeaders> headers = make_shared<AncillarySuggestHeaders>();
  return ancillarySuggestWithOptions(request, headers, runtime);
}

BookResponse Alibabacloud_AirticketOpen20230117::Client::bookWithOptions(shared_ptr<BookRequest> tmpReq, shared_ptr<BookHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BookShrinkRequest> request = make_shared<BookShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<BookRequestContact>(tmpReq->contact)) {
    request->contactShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contact, make_shared<string>("contact"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<BookRequestPassengerAncillaryPurchaseMapList>>(tmpReq->passengerAncillaryPurchaseMapList)) {
    request->passengerAncillaryPurchaseMapListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerAncillaryPurchaseMapList, make_shared<string>("passenger_ancillary_purchase_map_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<BookRequestPassengerList>>(tmpReq->passengerList)) {
    request->passengerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerList, make_shared<string>("passenger_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactShrink)) {
    body->insert(pair<string, string>("contact", *request->contactShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderNum)) {
    body->insert(pair<string, string>("out_order_num", *request->outOrderNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerAncillaryPurchaseMapListShrink)) {
    body->insert(pair<string, string>("passenger_ancillary_purchase_map_list", *request->passengerAncillaryPurchaseMapListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerListShrink)) {
    body->insert(pair<string, string>("passenger_list", *request->passengerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->solutionId)) {
    body->insert(pair<string, string>("solution_id", *request->solutionId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Book"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/trade/action-book"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BookResponse(callApi(params, req, runtime));
}

BookResponse Alibabacloud_AirticketOpen20230117::Client::book(shared_ptr<BookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<BookHeaders> headers = make_shared<BookHeaders>();
  return bookWithOptions(request, headers, runtime);
}

CancelResponse Alibabacloud_AirticketOpen20230117::Client::cancelWithOptions(shared_ptr<CancelRequest> request, shared_ptr<CancelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderNum)) {
    body->insert(pair<string, long>("order_num", *request->orderNum));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Cancel"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/trade/action-cancel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelResponse(callApi(params, req, runtime));
}

CancelResponse Alibabacloud_AirticketOpen20230117::Client::cancel(shared_ptr<CancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CancelHeaders> headers = make_shared<CancelHeaders>();
  return cancelWithOptions(request, headers, runtime);
}

ChangeApplyResponse Alibabacloud_AirticketOpen20230117::Client::changeApplyWithOptions(shared_ptr<ChangeApplyRequest> tmpReq, shared_ptr<ChangeApplyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ChangeApplyShrinkRequest> request = make_shared<ChangeApplyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ChangeApplyRequestChangePassengerList>>(tmpReq->changePassengerList)) {
    request->changePassengerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->changePassengerList, make_shared<string>("change_passenger_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ChangeApplyRequestChangedJourneys>>(tmpReq->changedJourneys)) {
    request->changedJourneysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->changedJourneys, make_shared<string>("changed_journeys"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ChangeApplyRequestContact>(tmpReq->contact)) {
    request->contactShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contact, make_shared<string>("contact"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changePassengerListShrink)) {
    body->insert(pair<string, string>("change_passenger_list", *request->changePassengerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changedJourneysShrink)) {
    body->insert(pair<string, string>("changed_journeys", *request->changedJourneysShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactShrink)) {
    body->insert(pair<string, string>("contact", *request->contactShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderNum)) {
    body->insert(pair<string, long>("order_num", *request->orderNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeApply"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/change/action-apply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeApplyResponse(callApi(params, req, runtime));
}

ChangeApplyResponse Alibabacloud_AirticketOpen20230117::Client::changeApply(shared_ptr<ChangeApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ChangeApplyHeaders> headers = make_shared<ChangeApplyHeaders>();
  return changeApplyWithOptions(request, headers, runtime);
}

ChangeCancelResponse Alibabacloud_AirticketOpen20230117::Client::changeCancelWithOptions(shared_ptr<ChangeCancelRequest> request, shared_ptr<ChangeCancelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->changeOrderNum)) {
    body->insert(pair<string, long>("change_order_num", *request->changeOrderNum));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeCancel"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/change/action-cancel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeCancelResponse(callApi(params, req, runtime));
}

ChangeCancelResponse Alibabacloud_AirticketOpen20230117::Client::changeCancel(shared_ptr<ChangeCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ChangeCancelHeaders> headers = make_shared<ChangeCancelHeaders>();
  return changeCancelWithOptions(request, headers, runtime);
}

ChangeConfirmResponse Alibabacloud_AirticketOpen20230117::Client::changeConfirmWithOptions(shared_ptr<ChangeConfirmRequest> request, shared_ptr<ChangeConfirmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->changeOrderNum)) {
    body->insert(pair<string, long>("change_order_num", *request->changeOrderNum));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeConfirm"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/change/action-confirm"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeConfirmResponse(callApi(params, req, runtime));
}

ChangeConfirmResponse Alibabacloud_AirticketOpen20230117::Client::changeConfirm(shared_ptr<ChangeConfirmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ChangeConfirmHeaders> headers = make_shared<ChangeConfirmHeaders>();
  return changeConfirmWithOptions(request, headers, runtime);
}

ChangeDetailResponse Alibabacloud_AirticketOpen20230117::Client::changeDetailWithOptions(shared_ptr<ChangeDetailRequest> request, shared_ptr<ChangeDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->changeOrderNum)) {
    query->insert(pair<string, long>("change_order_num", *request->changeOrderNum));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeDetail"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/change/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeDetailResponse(callApi(params, req, runtime));
}

ChangeDetailResponse Alibabacloud_AirticketOpen20230117::Client::changeDetail(shared_ptr<ChangeDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ChangeDetailHeaders> headers = make_shared<ChangeDetailHeaders>();
  return changeDetailWithOptions(request, headers, runtime);
}

ChangeDetailListOfBuyerResponse Alibabacloud_AirticketOpen20230117::Client::changeDetailListOfBuyerWithOptions(shared_ptr<ChangeDetailListOfBuyerRequest> request, shared_ptr<ChangeDetailListOfBuyerHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("page_index", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->utcCreateBegin)) {
    query->insert(pair<string, long>("utc_create_begin", *request->utcCreateBegin));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->utcCreateEnd)) {
    query->insert(pair<string, long>("utc_create_end", *request->utcCreateEnd));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeDetailListOfBuyer"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/change/buyer/detail-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeDetailListOfBuyerResponse(callApi(params, req, runtime));
}

ChangeDetailListOfBuyerResponse Alibabacloud_AirticketOpen20230117::Client::changeDetailListOfBuyer(shared_ptr<ChangeDetailListOfBuyerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ChangeDetailListOfBuyerHeaders> headers = make_shared<ChangeDetailListOfBuyerHeaders>();
  return changeDetailListOfBuyerWithOptions(request, headers, runtime);
}

ChangeDetailListOfOrderNumResponse Alibabacloud_AirticketOpen20230117::Client::changeDetailListOfOrderNumWithOptions(shared_ptr<ChangeDetailListOfOrderNumRequest> request, shared_ptr<ChangeDetailListOfOrderNumHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderNum)) {
    query->insert(pair<string, long>("order_num", *request->orderNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("page_index", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeDetailListOfOrderNum"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/change/order-num/detail-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeDetailListOfOrderNumResponse(callApi(params, req, runtime));
}

ChangeDetailListOfOrderNumResponse Alibabacloud_AirticketOpen20230117::Client::changeDetailListOfOrderNum(shared_ptr<ChangeDetailListOfOrderNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ChangeDetailListOfOrderNumHeaders> headers = make_shared<ChangeDetailListOfOrderNumHeaders>();
  return changeDetailListOfOrderNumWithOptions(request, headers, runtime);
}

CollectFlightLowestPriceResponse Alibabacloud_AirticketOpen20230117::Client::collectFlightLowestPriceWithOptions(shared_ptr<CollectFlightLowestPriceRequest> tmpReq, shared_ptr<CollectFlightLowestPriceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CollectFlightLowestPriceShrinkRequest> request = make_shared<CollectFlightLowestPriceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CollectFlightLowestPriceRequestLowestPriceFlightList>>(tmpReq->lowestPriceFlightList)) {
    request->lowestPriceFlightListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lowestPriceFlightList, make_shared<string>("lowestPriceFlightList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lowestPriceFlightListShrink)) {
    body->insert(pair<string, string>("lowestPriceFlightList", *request->lowestPriceFlightListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CollectFlightLowestPrice"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/data-collect/flight-lowest-price"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CollectFlightLowestPriceResponse(callApi(params, req, runtime));
}

CollectFlightLowestPriceResponse Alibabacloud_AirticketOpen20230117::Client::collectFlightLowestPrice(shared_ptr<CollectFlightLowestPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CollectFlightLowestPriceHeaders> headers = make_shared<CollectFlightLowestPriceHeaders>();
  return collectFlightLowestPriceWithOptions(request, headers, runtime);
}

EnrichResponse Alibabacloud_AirticketOpen20230117::Client::enrichWithOptions(shared_ptr<EnrichRequest> tmpReq, shared_ptr<EnrichHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EnrichShrinkRequest> request = make_shared<EnrichShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<EnrichRequestJourneyParamList>>(tmpReq->journeyParamList)) {
    request->journeyParamListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->journeyParamList, make_shared<string>("journey_param_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->adults)) {
    body->insert(pair<string, long>("adults", *request->adults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cabinClass)) {
    body->insert(pair<string, string>("cabin_class", *request->cabinClass));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->children)) {
    body->insert(pair<string, long>("children", *request->children));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->infants)) {
    body->insert(pair<string, long>("infants", *request->infants));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->journeyParamListShrink)) {
    body->insert(pair<string, string>("journey_param_list", *request->journeyParamListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->solutionId)) {
    body->insert(pair<string, string>("solution_id", *request->solutionId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Enrich"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/trade/action-enrich"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnrichResponse(callApi(params, req, runtime));
}

EnrichResponse Alibabacloud_AirticketOpen20230117::Client::enrich(shared_ptr<EnrichRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<EnrichHeaders> headers = make_shared<EnrichHeaders>();
  return enrichWithOptions(request, headers, runtime);
}

FileUploadResponse Alibabacloud_AirticketOpen20230117::Client::fileUploadWithOptions(shared_ptr<FileUploadRequest> request, shared_ptr<FileUploadHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileContent)) {
    body->insert(pair<string, string>("file_content", *request->fileContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderNum)) {
    body->insert(pair<string, long>("order_num", *request->orderNum));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FileUpload"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/attachment/action-upload"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FileUploadResponse(callApi(params, req, runtime));
}

FileUploadResponse Alibabacloud_AirticketOpen20230117::Client::fileUpload(shared_ptr<FileUploadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FileUploadHeaders> headers = make_shared<FileUploadHeaders>();
  return fileUploadWithOptions(request, headers, runtime);
}

FlightChangeOfOrderResponse Alibabacloud_AirticketOpen20230117::Client::flightChangeOfOrderWithOptions(shared_ptr<FlightChangeOfOrderRequest> request, shared_ptr<FlightChangeOfOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderNum)) {
    query->insert(pair<string, long>("order_num", *request->orderNum));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightChangeOfOrder"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/flightchange/of-order"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightChangeOfOrderResponse(callApi(params, req, runtime));
}

FlightChangeOfOrderResponse Alibabacloud_AirticketOpen20230117::Client::flightChangeOfOrder(shared_ptr<FlightChangeOfOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightChangeOfOrderHeaders> headers = make_shared<FlightChangeOfOrderHeaders>();
  return flightChangeOfOrderWithOptions(request, headers, runtime);
}

GetTokenResponse Alibabacloud_AirticketOpen20230117::Client::getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    query->insert(pair<string, string>("app_key", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appSecret)) {
    query->insert(pair<string, string>("app_secret", *request->appSecret));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetToken"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/token"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTokenResponse(callApi(params, req, runtime));
}

GetTokenResponse Alibabacloud_AirticketOpen20230117::Client::getToken(shared_ptr<GetTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTokenWithOptions(request, headers, runtime);
}

LuggageDirectResponse Alibabacloud_AirticketOpen20230117::Client::luggageDirectWithOptions(shared_ptr<LuggageDirectRequest> tmpReq, shared_ptr<LuggageDirectHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<LuggageDirectShrinkRequest> request = make_shared<LuggageDirectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<LuggageDirectRequestFlightSegmentParamList>>(tmpReq->flightSegmentParamList)) {
    request->flightSegmentParamListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->flightSegmentParamList, make_shared<string>("flight_segment_param_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flightSegmentParamListShrink)) {
    query->insert(pair<string, string>("flight_segment_param_list", *request->flightSegmentParamListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LuggageDirect"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/flight-data/luggage-direct"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LuggageDirectResponse(callApi(params, req, runtime));
}

LuggageDirectResponse Alibabacloud_AirticketOpen20230117::Client::luggageDirect(shared_ptr<LuggageDirectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<LuggageDirectHeaders> headers = make_shared<LuggageDirectHeaders>();
  return luggageDirectWithOptions(request, headers, runtime);
}

OrderDetailResponse Alibabacloud_AirticketOpen20230117::Client::orderDetailWithOptions(shared_ptr<OrderDetailRequest> request, shared_ptr<OrderDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderNum)) {
    query->insert(pair<string, long>("order_num", *request->orderNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderNum)) {
    query->insert(pair<string, string>("out_order_num", *request->outOrderNum));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OrderDetail"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/trade/order-detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OrderDetailResponse(callApi(params, req, runtime));
}

OrderDetailResponse Alibabacloud_AirticketOpen20230117::Client::orderDetail(shared_ptr<OrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<OrderDetailHeaders> headers = make_shared<OrderDetailHeaders>();
  return orderDetailWithOptions(request, headers, runtime);
}

OrderListResponse Alibabacloud_AirticketOpen20230117::Client::orderListWithOptions(shared_ptr<OrderListRequest> request, shared_ptr<OrderListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bookTimeEnd)) {
    query->insert(pair<string, long>("book_time_end", *request->bookTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bookTimeStart)) {
    query->insert(pair<string, long>("book_time_start", *request->bookTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("page_index", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("status", *request->status));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OrderList"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/trade/order-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OrderListResponse(callApi(params, req, runtime));
}

OrderListResponse Alibabacloud_AirticketOpen20230117::Client::orderList(shared_ptr<OrderListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<OrderListHeaders> headers = make_shared<OrderListHeaders>();
  return orderListWithOptions(request, headers, runtime);
}

PricingResponse Alibabacloud_AirticketOpen20230117::Client::pricingWithOptions(shared_ptr<PricingRequest> request, shared_ptr<PricingHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->solutionId)) {
    body->insert(pair<string, string>("solution_id", *request->solutionId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Pricing"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/trade/action-pricing"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PricingResponse(callApi(params, req, runtime));
}

PricingResponse Alibabacloud_AirticketOpen20230117::Client::pricing(shared_ptr<PricingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PricingHeaders> headers = make_shared<PricingHeaders>();
  return pricingWithOptions(request, headers, runtime);
}

RefundApplyResponse Alibabacloud_AirticketOpen20230117::Client::refundApplyWithOptions(shared_ptr<RefundApplyRequest> tmpReq, shared_ptr<RefundApplyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RefundApplyShrinkRequest> request = make_shared<RefundApplyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RefundApplyRequestRefundJourneys>>(tmpReq->refundJourneys)) {
    request->refundJourneysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->refundJourneys, make_shared<string>("refund_journeys"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RefundApplyRequestRefundPassengerList>>(tmpReq->refundPassengerList)) {
    request->refundPassengerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->refundPassengerList, make_shared<string>("refund_passenger_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RefundApplyRequestRefundType>(tmpReq->refundType)) {
    request->refundTypeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->refundType, make_shared<string>("refund_type"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderNum)) {
    body->insert(pair<string, long>("order_num", *request->orderNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundJourneysShrink)) {
    body->insert(pair<string, string>("refund_journeys", *request->refundJourneysShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundPassengerListShrink)) {
    body->insert(pair<string, string>("refund_passenger_list", *request->refundPassengerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundTypeShrink)) {
    body->insert(pair<string, string>("refund_type", *request->refundTypeShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefundApply"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/refund/action-apply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefundApplyResponse(callApi(params, req, runtime));
}

RefundApplyResponse Alibabacloud_AirticketOpen20230117::Client::refundApply(shared_ptr<RefundApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RefundApplyHeaders> headers = make_shared<RefundApplyHeaders>();
  return refundApplyWithOptions(request, headers, runtime);
}

RefundDetailResponse Alibabacloud_AirticketOpen20230117::Client::refundDetailWithOptions(shared_ptr<RefundDetailRequest> request, shared_ptr<RefundDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->refundOrderNum)) {
    query->insert(pair<string, long>("refund_order_num", *request->refundOrderNum));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefundDetail"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/refund/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefundDetailResponse(callApi(params, req, runtime));
}

RefundDetailResponse Alibabacloud_AirticketOpen20230117::Client::refundDetail(shared_ptr<RefundDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RefundDetailHeaders> headers = make_shared<RefundDetailHeaders>();
  return refundDetailWithOptions(request, headers, runtime);
}

RefundDetailListResponse Alibabacloud_AirticketOpen20230117::Client::refundDetailListWithOptions(shared_ptr<RefundDetailListRequest> request, shared_ptr<RefundDetailListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderNum)) {
    query->insert(pair<string, long>("order_num", *request->orderNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("page_index", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refundCreateBeginTime)) {
    query->insert(pair<string, long>("refund_create_begin_time", *request->refundCreateBeginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refundCreateEndTime)) {
    query->insert(pair<string, long>("refund_create_end_time", *request->refundCreateEndTime));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefundDetailList"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/refund/detail-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefundDetailListResponse(callApi(params, req, runtime));
}

RefundDetailListResponse Alibabacloud_AirticketOpen20230117::Client::refundDetailList(shared_ptr<RefundDetailListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RefundDetailListHeaders> headers = make_shared<RefundDetailListHeaders>();
  return refundDetailListWithOptions(request, headers, runtime);
}

SearchResponse Alibabacloud_AirticketOpen20230117::Client::searchWithOptions(shared_ptr<SearchRequest> tmpReq, shared_ptr<SearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SearchShrinkRequest> request = make_shared<SearchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SearchRequestAirLegs>>(tmpReq->airLegs)) {
    request->airLegsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->airLegs, make_shared<string>("air_legs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SearchRequestSearchControlOptions>(tmpReq->searchControlOptions)) {
    request->searchControlOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->searchControlOptions, make_shared<string>("search_control_options"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->adults)) {
    body->insert(pair<string, long>("adults", *request->adults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->airLegsShrink)) {
    body->insert(pair<string, string>("air_legs", *request->airLegsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cabinClass)) {
    body->insert(pair<string, string>("cabin_class", *request->cabinClass));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->children)) {
    body->insert(pair<string, long>("children", *request->children));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->infants)) {
    body->insert(pair<string, long>("infants", *request->infants));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchControlOptionsShrink)) {
    body->insert(pair<string, string>("search_control_options", *request->searchControlOptionsShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Search"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/trade/action-search"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchResponse(callApi(params, req, runtime));
}

SearchResponse Alibabacloud_AirticketOpen20230117::Client::search(shared_ptr<SearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SearchHeaders> headers = make_shared<SearchHeaders>();
  return searchWithOptions(request, headers, runtime);
}

TicketingResponse Alibabacloud_AirticketOpen20230117::Client::ticketingWithOptions(shared_ptr<TicketingRequest> request, shared_ptr<TicketingHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderNum)) {
    body->insert(pair<string, long>("order_num", *request->orderNum));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Ticketing"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/trade/action-ticketing"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketingResponse(callApi(params, req, runtime));
}

TicketingResponse Alibabacloud_AirticketOpen20230117::Client::ticketing(shared_ptr<TicketingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketingHeaders> headers = make_shared<TicketingHeaders>();
  return ticketingWithOptions(request, headers, runtime);
}

TicketingCheckResponse Alibabacloud_AirticketOpen20230117::Client::ticketingCheckWithOptions(shared_ptr<TicketingCheckRequest> request, shared_ptr<TicketingCheckHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderNum)) {
    body->insert(pair<string, long>("order_num", *request->orderNum));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketingCheck"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/trade/action-ticketing-check"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketingCheckResponse(callApi(params, req, runtime));
}

TicketingCheckResponse Alibabacloud_AirticketOpen20230117::Client::ticketingCheck(shared_ptr<TicketingCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketingCheckHeaders> headers = make_shared<TicketingCheckHeaders>();
  return ticketingCheckWithOptions(request, headers, runtime);
}

TransitVisaResponse Alibabacloud_AirticketOpen20230117::Client::transitVisaWithOptions(shared_ptr<TransitVisaRequest> tmpReq, shared_ptr<TransitVisaHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TransitVisaShrinkRequest> request = make_shared<TransitVisaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<TransitVisaRequestFlightSegmentParamList>>(tmpReq->flightSegmentParamList)) {
    request->flightSegmentParamListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->flightSegmentParamList, make_shared<string>("flight_segment_param_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flightSegmentParamListShrink)) {
    query->insert(pair<string, string>("flight_segment_param_list", *request->flightSegmentParamListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("x-acs-airticket-language", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransitVisa"))},
    {"version", boost::any(string("2023-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/airticket/v1/flight-data/transit-visa"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransitVisaResponse(callApi(params, req, runtime));
}

TransitVisaResponse Alibabacloud_AirticketOpen20230117::Client::transitVisa(shared_ptr<TransitVisaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TransitVisaHeaders> headers = make_shared<TransitVisaHeaders>();
  return transitVisaWithOptions(request, headers, runtime);
}

