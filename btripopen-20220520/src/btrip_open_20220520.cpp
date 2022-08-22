// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/btrip_open_20220520.hpp>
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

using namespace Alibabacloud_BtripOpen20220520;

Alibabacloud_BtripOpen20220520::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("btripopen"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_BtripOpen20220520::Client::getEndpoint(shared_ptr<string> productId,
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

AccessTokenResponse Alibabacloud_BtripOpen20220520::Client::accessToken(shared_ptr<AccessTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return accessTokenWithOptions(request, headers, runtime);
}

AccessTokenResponse Alibabacloud_BtripOpen20220520::Client::accessTokenWithOptions(shared_ptr<AccessTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("AccessToken"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/btrip-open-auth/v1/access-token/action/take"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AccessTokenResponse(callApi(params, req, runtime));
}

AddressGetResponse Alibabacloud_BtripOpen20220520::Client::addressGet(shared_ptr<AddressGetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addressGetWithOptions(request, headers, runtime);
}

AddressGetResponse Alibabacloud_BtripOpen20220520::Client::addressGetWithOptions(shared_ptr<AddressGetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->actionType)) {
    query->insert(pair<string, long>("action_type", *request->actionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itineraryId)) {
    query->insert(pair<string, string>("itinerary_id", *request->itineraryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    query->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddressGet"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/v1/address"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddressGetResponse(callApi(params, req, runtime));
}

ApplyAddResponse Alibabacloud_BtripOpen20220520::Client::applyAdd(shared_ptr<ApplyAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return applyAddWithOptions(request, headers, runtime);
}

ApplyAddResponse Alibabacloud_BtripOpen20220520::Client::applyAddWithOptions(shared_ptr<ApplyAddRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyAddShrinkRequest> request = make_shared<ApplyAddShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ApplyAddRequestExternalTravelerList>>(tmpReq->externalTravelerList)) {
    request->externalTravelerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->externalTravelerList, make_shared<string>("external_traveler_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyAddRequestExternalTravelerStandard>(tmpReq->externalTravelerStandard)) {
    request->externalTravelerStandardShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->externalTravelerStandard->toMap()), make_shared<string>("external_traveler_standard"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyAddRequestHotelShare>(tmpReq->hotelShare)) {
    request->hotelShareShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->hotelShare->toMap()), make_shared<string>("hotel_share"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyAddRequestItineraryList>>(tmpReq->itineraryList)) {
    request->itineraryListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itineraryList, make_shared<string>("itinerary_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyAddRequestTravelerList>>(tmpReq->travelerList)) {
    request->travelerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelerList, make_shared<string>("traveler_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyAddRequestTravelerStandard>>(tmpReq->travelerStandard)) {
    request->travelerStandardShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelerStandard, make_shared<string>("traveler_standard"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->internationalFlightCabins)) {
    query->insert(pair<string, string>("international_flight_cabins", *request->internationalFlightCabins));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->budget)) {
    body->insert(pair<string, long>("budget", *request->budget));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->budgetMerge)) {
    body->insert(pair<string, long>("budget_merge", *request->budgetMerge));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpName)) {
    body->insert(pair<string, string>("corp_name", *request->corpName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    body->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departName)) {
    body->insert(pair<string, string>("depart_name", *request->departName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalTravelerListShrink)) {
    body->insert(pair<string, string>("external_traveler_list", *request->externalTravelerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalTravelerStandardShrink)) {
    body->insert(pair<string, string>("external_traveler_standard", *request->externalTravelerStandardShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flightBudget)) {
    body->insert(pair<string, long>("flight_budget", *request->flightBudget));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hotelBudget)) {
    body->insert(pair<string, long>("hotel_budget", *request->hotelBudget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelShareShrink)) {
    body->insert(pair<string, string>("hotel_share", *request->hotelShareShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itineraryListShrink)) {
    body->insert(pair<string, string>("itinerary_list", *request->itineraryListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limitTraveler)) {
    body->insert(pair<string, long>("limit_traveler", *request->limitTraveler));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    body->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartBusinessId)) {
    body->insert(pair<string, string>("thirdpart_business_id", *request->thirdpartBusinessId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->togetherBookRule)) {
    body->insert(pair<string, long>("together_book_rule", *request->togetherBookRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trainBudget)) {
    body->insert(pair<string, long>("train_budget", *request->trainBudget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerListShrink)) {
    body->insert(pair<string, string>("traveler_list", *request->travelerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerStandardShrink)) {
    body->insert(pair<string, string>("traveler_standard", *request->travelerStandardShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tripCause)) {
    body->insert(pair<string, string>("trip_cause", *request->tripCause));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tripDay)) {
    body->insert(pair<string, long>("trip_day", *request->tripDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tripTitle)) {
    body->insert(pair<string, string>("trip_title", *request->tripTitle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unionNo)) {
    body->insert(pair<string, string>("union_no", *request->unionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("user_name", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->vehicleBudget)) {
    body->insert(pair<string, long>("vehicle_budget", *request->vehicleBudget));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/biz-trip"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyAddResponse(callApi(params, req, runtime));
}

ApplyListQueryResponse Alibabacloud_BtripOpen20220520::Client::applyListQuery(shared_ptr<ApplyListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return applyListQueryWithOptions(request, headers, runtime);
}

ApplyListQueryResponse Alibabacloud_BtripOpen20220520::Client::applyListQueryWithOptions(shared_ptr<ApplyListQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allApply)) {
    query->insert(pair<string, bool>("all_apply", *request->allApply));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    query->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("end_time", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtModified)) {
    query->insert(pair<string, string>("gmt_modified", *request->gmtModified));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyShangLvApply)) {
    query->insert(pair<string, bool>("only_shang_lv_apply", *request->onlyShangLvApply));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("start_time", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unionNo)) {
    query->insert(pair<string, string>("union_no", *request->unionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyListQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/biz-trips"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyListQueryResponse(callApi(params, req, runtime));
}

ApplyModifyResponse Alibabacloud_BtripOpen20220520::Client::applyModify(shared_ptr<ApplyModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return applyModifyWithOptions(request, headers, runtime);
}

ApplyModifyResponse Alibabacloud_BtripOpen20220520::Client::applyModifyWithOptions(shared_ptr<ApplyModifyRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyModifyShrinkRequest> request = make_shared<ApplyModifyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ApplyModifyRequestExternalTravelerList>>(tmpReq->externalTravelerList)) {
    request->externalTravelerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->externalTravelerList, make_shared<string>("external_traveler_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyModifyRequestExternalTravelerStandard>(tmpReq->externalTravelerStandard)) {
    request->externalTravelerStandardShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->externalTravelerStandard->toMap()), make_shared<string>("external_traveler_standard"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyModifyRequestHotelShare>(tmpReq->hotelShare)) {
    request->hotelShareShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->hotelShare->toMap()), make_shared<string>("hotel_share"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyModifyRequestItineraryList>>(tmpReq->itineraryList)) {
    request->itineraryListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itineraryList, make_shared<string>("itinerary_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyModifyRequestTravelerList>>(tmpReq->travelerList)) {
    request->travelerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelerList, make_shared<string>("traveler_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyModifyRequestTravelerStandard>>(tmpReq->travelerStandard)) {
    request->travelerStandardShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelerStandard, make_shared<string>("traveler_standard"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->budget)) {
    body->insert(pair<string, long>("budget", *request->budget));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->budgetMerge)) {
    body->insert(pair<string, long>("budget_merge", *request->budgetMerge));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpName)) {
    body->insert(pair<string, string>("corp_name", *request->corpName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    body->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departName)) {
    body->insert(pair<string, string>("depart_name", *request->departName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalTravelerListShrink)) {
    body->insert(pair<string, string>("external_traveler_list", *request->externalTravelerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalTravelerStandardShrink)) {
    body->insert(pair<string, string>("external_traveler_standard", *request->externalTravelerStandardShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flightBudget)) {
    body->insert(pair<string, long>("flight_budget", *request->flightBudget));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hotelBudget)) {
    body->insert(pair<string, long>("hotel_budget", *request->hotelBudget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelShareShrink)) {
    body->insert(pair<string, string>("hotel_share", *request->hotelShareShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itineraryListShrink)) {
    body->insert(pair<string, string>("itinerary_list", *request->itineraryListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limitTraveler)) {
    body->insert(pair<string, long>("limit_traveler", *request->limitTraveler));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    body->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartBusinessId)) {
    body->insert(pair<string, string>("thirdpart_business_id", *request->thirdpartBusinessId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->togetherBookRule)) {
    body->insert(pair<string, long>("together_book_rule", *request->togetherBookRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trainBudget)) {
    body->insert(pair<string, long>("train_budget", *request->trainBudget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerListShrink)) {
    body->insert(pair<string, string>("traveler_list", *request->travelerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerStandardShrink)) {
    body->insert(pair<string, string>("traveler_standard", *request->travelerStandardShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tripCause)) {
    body->insert(pair<string, string>("trip_cause", *request->tripCause));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tripDay)) {
    body->insert(pair<string, long>("trip_day", *request->tripDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tripTitle)) {
    body->insert(pair<string, string>("trip_title", *request->tripTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unionNo)) {
    body->insert(pair<string, string>("union_no", *request->unionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("user_name", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->vehicleBudget)) {
    body->insert(pair<string, long>("vehicle_budget", *request->vehicleBudget));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyModify"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/biz-trip"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyModifyResponse(callApi(params, req, runtime));
}

ApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::applyQuery(shared_ptr<ApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return applyQueryWithOptions(request, headers, runtime);
}

ApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::applyQueryWithOptions(shared_ptr<ApplyQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyShowId)) {
    query->insert(pair<string, string>("apply_show_id", *request->applyShowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    query->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/biz-trip"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyQueryResponse(callApi(params, req, runtime));
}

CarApplyAddResponse Alibabacloud_BtripOpen20220520::Client::carApplyAdd(shared_ptr<CarApplyAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return carApplyAddWithOptions(request, headers, runtime);
}

CarApplyAddResponse Alibabacloud_BtripOpen20220520::Client::carApplyAddWithOptions(shared_ptr<CarApplyAddRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cause)) {
    body->insert(pair<string, string>("cause", *request->cause));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    body->insert(pair<string, string>("city", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->date)) {
    body->insert(pair<string, string>("date", *request->date));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->finishedDate)) {
    body->insert(pair<string, string>("finished_date", *request->finishedDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectCode)) {
    body->insert(pair<string, string>("project_code", *request->projectCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("project_name", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartApplyId)) {
    body->insert(pair<string, string>("third_part_apply_id", *request->thirdPartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartCostCenterId)) {
    body->insert(pair<string, string>("third_part_cost_center_id", *request->thirdPartCostCenterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartInvoiceId)) {
    body->insert(pair<string, string>("third_part_invoice_id", *request->thirdPartInvoiceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timesTotal)) {
    body->insert(pair<string, long>("times_total", *request->timesTotal));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timesType)) {
    body->insert(pair<string, long>("times_type", *request->timesType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timesUsed)) {
    body->insert(pair<string, long>("times_used", *request->timesUsed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CarApplyAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/car"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarApplyAddResponse(callApi(params, req, runtime));
}

CarApplyModifyResponse Alibabacloud_BtripOpen20220520::Client::carApplyModify(shared_ptr<CarApplyModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return carApplyModifyWithOptions(request, headers, runtime);
}

CarApplyModifyResponse Alibabacloud_BtripOpen20220520::Client::carApplyModifyWithOptions(shared_ptr<CarApplyModifyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operateTime)) {
    body->insert(pair<string, string>("operate_time", *request->operateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartApplyId)) {
    body->insert(pair<string, string>("third_part_apply_id", *request->thirdPartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CarApplyModify"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/car"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarApplyModifyResponse(callApi(params, req, runtime));
}

CarApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::carApplyQuery(shared_ptr<CarApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return carApplyQueryWithOptions(request, headers, runtime);
}

CarApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::carApplyQueryWithOptions(shared_ptr<CarApplyQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createdEndAt)) {
    query->insert(pair<string, string>("created_end_at", *request->createdEndAt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createdStartAt)) {
    query->insert(pair<string, string>("created_start_at", *request->createdStartAt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("page_number", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartApplyId)) {
    query->insert(pair<string, string>("third_part_apply_id", *request->thirdPartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CarApplyQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/car"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarApplyQueryResponse(callApi(params, req, runtime));
}

CarBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::carBillSettlementQuery(shared_ptr<CarBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return carBillSettlementQueryWithOptions(request, headers, runtime);
}

CarBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::carBillSettlementQueryWithOptions(shared_ptr<CarBillSettlementQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CarBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/car/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarBillSettlementQueryResponse(callApi(params, req, runtime));
}

CarOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::carOrderListQuery(shared_ptr<CarOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return carOrderListQueryWithOptions(request, headers, runtime);
}

CarOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::carOrderListQueryWithOptions(shared_ptr<CarOrderListQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allApply)) {
    query->insert(pair<string, bool>("all_apply", *request->allApply));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    query->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("end_time", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("start_time", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    query->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateEndTime)) {
    query->insert(pair<string, string>("update_end_time", *request->updateEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStartTime)) {
    query->insert(pair<string, string>("update_start_time", *request->updateStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CarOrderListQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/car/v1/order-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarOrderListQueryResponse(callApi(params, req, runtime));
}

CommonApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::commonApplyQuery(shared_ptr<CommonApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return commonApplyQueryWithOptions(request, headers, runtime);
}

CommonApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::commonApplyQueryWithOptions(shared_ptr<CommonApplyQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizCategory)) {
    query->insert(pair<string, long>("biz_category", *request->bizCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CommonApplyQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/common"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CommonApplyQueryResponse(callApi(params, req, runtime));
}

CommonApplySyncResponse Alibabacloud_BtripOpen20220520::Client::commonApplySync(shared_ptr<CommonApplySyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return commonApplySyncWithOptions(request, headers, runtime);
}

CommonApplySyncResponse Alibabacloud_BtripOpen20220520::Client::commonApplySyncWithOptions(shared_ptr<CommonApplySyncRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizCategory)) {
    query->insert(pair<string, long>("biz_category", *request->bizCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartyFlowId)) {
    query->insert(pair<string, string>("thirdparty_flow_id", *request->thirdpartyFlowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CommonApplySync"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/syn-common"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CommonApplySyncResponse(callApi(params, req, runtime));
}

CorpTokenResponse Alibabacloud_BtripOpen20220520::Client::corpToken(shared_ptr<CorpTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return corpTokenWithOptions(request, headers, runtime);
}

CorpTokenResponse Alibabacloud_BtripOpen20220520::Client::corpTokenWithOptions(shared_ptr<CorpTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->corpId)) {
    query->insert(pair<string, string>("corp_id", *request->corpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CorpToken"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/btrip-open-auth/v1/corp-token/action/take"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CorpTokenResponse(callApi(params, req, runtime));
}

CostCenterDeleteResponse Alibabacloud_BtripOpen20220520::Client::costCenterDelete(shared_ptr<CostCenterDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return costCenterDeleteWithOptions(request, headers, runtime);
}

CostCenterDeleteResponse Alibabacloud_BtripOpen20220520::Client::costCenterDeleteWithOptions(shared_ptr<CostCenterDeleteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    query->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CostCenterDelete"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/delete-costcenter"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CostCenterDeleteResponse(callApi(params, req, runtime));
}

CostCenterModifyResponse Alibabacloud_BtripOpen20220520::Client::costCenterModify(shared_ptr<CostCenterModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return costCenterModifyWithOptions(request, headers, runtime);
}

CostCenterModifyResponse Alibabacloud_BtripOpen20220520::Client::costCenterModifyWithOptions(shared_ptr<CostCenterModifyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alipayNo)) {
    body->insert(pair<string, string>("alipay_no", *request->alipayNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->number)) {
    body->insert(pair<string, string>("number", *request->number));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scope)) {
    body->insert(pair<string, long>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    body->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CostCenterModify"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/modify-costcenter"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CostCenterModifyResponse(callApi(params, req, runtime));
}

CostCenterQueryResponse Alibabacloud_BtripOpen20220520::Client::costCenterQuery(shared_ptr<CostCenterQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CostCenterQueryHeaders> headers = make_shared<CostCenterQueryHeaders>();
  return costCenterQueryWithOptions(request, headers, runtime);
}

CostCenterQueryResponse Alibabacloud_BtripOpen20220520::Client::costCenterQueryWithOptions(shared_ptr<CostCenterQueryRequest> request, shared_ptr<CostCenterQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needOrgEntity)) {
    query->insert(pair<string, bool>("need_org_entity", *request->needOrgEntity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    query->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CostCenterQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/costcenter"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CostCenterQueryResponse(callApi(params, req, runtime));
}

CostCenterSaveResponse Alibabacloud_BtripOpen20220520::Client::costCenterSave(shared_ptr<CostCenterSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return costCenterSaveWithOptions(request, headers, runtime);
}

CostCenterSaveResponse Alibabacloud_BtripOpen20220520::Client::costCenterSaveWithOptions(shared_ptr<CostCenterSaveRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alipayNo)) {
    body->insert(pair<string, string>("alipay_no", *request->alipayNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->number)) {
    body->insert(pair<string, string>("number", *request->number));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scope)) {
    body->insert(pair<string, long>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    body->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CostCenterSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/save-costcenter"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CostCenterSaveResponse(callApi(params, req, runtime));
}

DepartmentSaveResponse Alibabacloud_BtripOpen20220520::Client::departmentSave(shared_ptr<DepartmentSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return departmentSaveWithOptions(request, headers, runtime);
}

DepartmentSaveResponse Alibabacloud_BtripOpen20220520::Client::departmentSaveWithOptions(shared_ptr<DepartmentSaveRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DepartmentSaveShrinkRequest> request = make_shared<DepartmentSaveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DepartmentSaveRequestDepartList>>(tmpReq->departList)) {
    request->departListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->departList, make_shared<string>("depart_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->departListShrink)) {
    body->insert(pair<string, string>("depart_list", *request->departListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DepartmentSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/department/v1/department"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DepartmentSaveResponse(callApi(params, req, runtime));
}

EntityAddResponse Alibabacloud_BtripOpen20220520::Client::entityAdd(shared_ptr<EntityAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return entityAddWithOptions(request, headers, runtime);
}

EntityAddResponse Alibabacloud_BtripOpen20220520::Client::entityAddWithOptions(shared_ptr<EntityAddRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EntityAddShrinkRequest> request = make_shared<EntityAddShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<EntityAddRequestEntityDOList>>(tmpReq->entityDOList)) {
    request->entityDOListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entityDOList, make_shared<string>("entity_d_o_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityDOListShrink)) {
    body->insert(pair<string, string>("entity_d_o_list", *request->entityDOListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    body->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EntityAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/add-entity"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EntityAddResponse(callApi(params, req, runtime));
}

EntityDeleteResponse Alibabacloud_BtripOpen20220520::Client::entityDelete(shared_ptr<EntityDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return entityDeleteWithOptions(request, headers, runtime);
}

EntityDeleteResponse Alibabacloud_BtripOpen20220520::Client::entityDeleteWithOptions(shared_ptr<EntityDeleteRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EntityDeleteShrinkRequest> request = make_shared<EntityDeleteShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<EntityDeleteRequestEntityDOList>>(tmpReq->entityDOList)) {
    request->entityDOListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entityDOList, make_shared<string>("entity_d_o_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->delAll)) {
    query->insert(pair<string, bool>("del_all", *request->delAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    query->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityDOListShrink)) {
    body->insert(pair<string, string>("entity_d_o_list", *request->entityDOListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EntityDelete"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/entity/action/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EntityDeleteResponse(callApi(params, req, runtime));
}

EntitySetResponse Alibabacloud_BtripOpen20220520::Client::entitySet(shared_ptr<EntitySetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return entitySetWithOptions(request, headers, runtime);
}

EntitySetResponse Alibabacloud_BtripOpen20220520::Client::entitySetWithOptions(shared_ptr<EntitySetRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EntitySetShrinkRequest> request = make_shared<EntitySetShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<EntitySetRequestEntityDOList>>(tmpReq->entityDOList)) {
    request->entityDOListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entityDOList, make_shared<string>("entity_d_o_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityDOListShrink)) {
    body->insert(pair<string, string>("entity_d_o_list", *request->entityDOListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    body->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EntitySet"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/set-entity"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EntitySetResponse(callApi(params, req, runtime));
}

ExceedApplySyncResponse Alibabacloud_BtripOpen20220520::Client::exceedApplySync(shared_ptr<ExceedApplySyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exceedApplySyncWithOptions(request, headers, runtime);
}

ExceedApplySyncResponse Alibabacloud_BtripOpen20220520::Client::exceedApplySyncWithOptions(shared_ptr<ExceedApplySyncRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizCategory)) {
    query->insert(pair<string, long>("biz_category", *request->bizCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartyFlowId)) {
    query->insert(pair<string, string>("thirdparty_flow_id", *request->thirdpartyFlowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExceedApplySync"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/syn-exceed"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExceedApplySyncResponse(callApi(params, req, runtime));
}

FlightBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::flightBillSettlementQuery(shared_ptr<FlightBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return flightBillSettlementQueryWithOptions(request, headers, runtime);
}

FlightBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::flightBillSettlementQueryWithOptions(shared_ptr<FlightBillSettlementQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/flight/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightBillSettlementQueryResponse(callApi(params, req, runtime));
}

FlightExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::flightExceedApplyQuery(shared_ptr<FlightExceedApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return flightExceedApplyQueryWithOptions(request, headers, runtime);
}

FlightExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::flightExceedApplyQueryWithOptions(shared_ptr<FlightExceedApplyQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightExceedApplyQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/flight-exceed"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightExceedApplyQueryResponse(callApi(params, req, runtime));
}

FlightOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::flightOrderListQuery(shared_ptr<FlightOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return flightOrderListQueryWithOptions(request, headers, runtime);
}

FlightOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::flightOrderListQueryWithOptions(shared_ptr<FlightOrderListQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allApply)) {
    query->insert(pair<string, bool>("all_apply", *request->allApply));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    query->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("end_time", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("start_time", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    query->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateEndTime)) {
    query->insert(pair<string, string>("update_end_time", *request->updateEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStartTime)) {
    query->insert(pair<string, string>("update_start_time", *request->updateStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightOrderListQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/flight/v1/order-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightOrderListQueryResponse(callApi(params, req, runtime));
}

FlightOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::flightOrderQuery(shared_ptr<FlightOrderQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return flightOrderQueryWithOptions(request, headers, runtime);
}

FlightOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::flightOrderQueryWithOptions(shared_ptr<FlightOrderQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightOrderQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/flight/v1/order"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightOrderQueryResponse(callApi(params, req, runtime));
}

HotelBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelBillSettlementQuery(shared_ptr<HotelBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return hotelBillSettlementQueryWithOptions(request, headers, runtime);
}

HotelBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelBillSettlementQueryWithOptions(shared_ptr<HotelBillSettlementQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/hotel/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelBillSettlementQueryResponse(callApi(params, req, runtime));
}

HotelExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelExceedApplyQuery(shared_ptr<HotelExceedApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return hotelExceedApplyQueryWithOptions(request, headers, runtime);
}

HotelExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelExceedApplyQueryWithOptions(shared_ptr<HotelExceedApplyQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelExceedApplyQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/hotel-exceed"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelExceedApplyQueryResponse(callApi(params, req, runtime));
}

HotelOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderListQuery(shared_ptr<HotelOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return hotelOrderListQueryWithOptions(request, headers, runtime);
}

HotelOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderListQueryWithOptions(shared_ptr<HotelOrderListQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allApply)) {
    query->insert(pair<string, bool>("all_apply", *request->allApply));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    query->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("end_time", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("start_time", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    query->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateEndTime)) {
    query->insert(pair<string, string>("update_end_time", *request->updateEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStartTime)) {
    query->insert(pair<string, string>("update_start_time", *request->updateStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderListQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/hotel/v1/order-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderListQueryResponse(callApi(params, req, runtime));
}

InvoiceAddResponse Alibabacloud_BtripOpen20220520::Client::invoiceAdd(shared_ptr<InvoiceAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return invoiceAddWithOptions(request, headers, runtime);
}

InvoiceAddResponse Alibabacloud_BtripOpen20220520::Client::invoiceAddWithOptions(shared_ptr<InvoiceAddRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    body->insert(pair<string, string>("address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bankName)) {
    body->insert(pair<string, string>("bank_name", *request->bankName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bankNo)) {
    body->insert(pair<string, string>("bank_no", *request->bankNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taxNo)) {
    body->insert(pair<string, string>("tax_no", *request->taxNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tel)) {
    body->insert(pair<string, string>("tel", *request->tel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/add-invoice"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceAddResponse(callApi(params, req, runtime));
}

InvoiceDeleteResponse Alibabacloud_BtripOpen20220520::Client::invoiceDelete(shared_ptr<InvoiceDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return invoiceDeleteWithOptions(request, headers, runtime);
}

InvoiceDeleteResponse Alibabacloud_BtripOpen20220520::Client::invoiceDeleteWithOptions(shared_ptr<InvoiceDeleteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    query->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceDelete"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/invoice"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceDeleteResponse(callApi(params, req, runtime));
}

InvoiceModifyResponse Alibabacloud_BtripOpen20220520::Client::invoiceModify(shared_ptr<InvoiceModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return invoiceModifyWithOptions(request, headers, runtime);
}

InvoiceModifyResponse Alibabacloud_BtripOpen20220520::Client::invoiceModifyWithOptions(shared_ptr<InvoiceModifyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    body->insert(pair<string, string>("address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bankName)) {
    body->insert(pair<string, string>("bank_name", *request->bankName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bankNo)) {
    body->insert(pair<string, string>("bank_no", *request->bankNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taxNo)) {
    body->insert(pair<string, string>("tax_no", *request->taxNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tel)) {
    body->insert(pair<string, string>("tel", *request->tel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceModify"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/invoice"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceModifyResponse(callApi(params, req, runtime));
}

InvoiceRuleSaveResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleSave(shared_ptr<InvoiceRuleSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return invoiceRuleSaveWithOptions(request, headers, runtime);
}

InvoiceRuleSaveResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleSaveWithOptions(shared_ptr<InvoiceRuleSaveRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InvoiceRuleSaveShrinkRequest> request = make_shared<InvoiceRuleSaveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<InvoiceRuleSaveRequestEntities>>(tmpReq->entities)) {
    request->entitiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entities, make_shared<string>("entities"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allEmploye)) {
    body->insert(pair<string, bool>("all_employe", *request->allEmploye));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entitiesShrink)) {
    body->insert(pair<string, string>("entities", *request->entitiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceRuleSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/invoice-rule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceRuleSaveResponse(callApi(params, req, runtime));
}

InvoiceSearchResponse Alibabacloud_BtripOpen20220520::Client::invoiceSearch(shared_ptr<InvoiceSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return invoiceSearchWithOptions(request, headers, runtime);
}

InvoiceSearchResponse Alibabacloud_BtripOpen20220520::Client::invoiceSearchWithOptions(shared_ptr<InvoiceSearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/invoice"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceSearchResponse(callApi(params, req, runtime));
}

IsvUserSaveResponse Alibabacloud_BtripOpen20220520::Client::isvUserSave(shared_ptr<IsvUserSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return isvUserSaveWithOptions(request, headers, runtime);
}

IsvUserSaveResponse Alibabacloud_BtripOpen20220520::Client::isvUserSaveWithOptions(shared_ptr<IsvUserSaveRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IsvUserSaveShrinkRequest> request = make_shared<IsvUserSaveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<IsvUserSaveRequestUserList>>(tmpReq->userList)) {
    request->userListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userList, make_shared<string>("user_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userListShrink)) {
    body->insert(pair<string, string>("user_list", *request->userListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IsvUserSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/isvuser/v1/isvuser"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IsvUserSaveResponse(callApi(params, req, runtime));
}

MonthBillGetResponse Alibabacloud_BtripOpen20220520::Client::monthBillGet(shared_ptr<MonthBillGetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return monthBillGetWithOptions(request, headers, runtime);
}

MonthBillGetResponse Alibabacloud_BtripOpen20220520::Client::monthBillGetWithOptions(shared_ptr<MonthBillGetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billMonth)) {
    query->insert(pair<string, string>("bill_month", *request->billMonth));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MonthBillGet"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/v1/month-bill"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MonthBillGetResponse(callApi(params, req, runtime));
}

ProjectAddResponse Alibabacloud_BtripOpen20220520::Client::projectAdd(shared_ptr<ProjectAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return projectAddWithOptions(request, headers, runtime);
}

ProjectAddResponse Alibabacloud_BtripOpen20220520::Client::projectAddWithOptions(shared_ptr<ProjectAddRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("project_name", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartCostCenterId)) {
    body->insert(pair<string, string>("third_part_cost_center_id", *request->thirdPartCostCenterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartInvoiceId)) {
    body->insert(pair<string, string>("third_part_invoice_id", *request->thirdPartInvoiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ProjectAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/cost/v1/project"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ProjectAddResponse(callApi(params, req, runtime));
}

ProjectDeleteResponse Alibabacloud_BtripOpen20220520::Client::projectDelete(shared_ptr<ProjectDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return projectDeleteWithOptions(request, headers, runtime);
}

ProjectDeleteResponse Alibabacloud_BtripOpen20220520::Client::projectDeleteWithOptions(shared_ptr<ProjectDeleteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    query->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ProjectDelete"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/cost/v1/project"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ProjectDeleteResponse(callApi(params, req, runtime));
}

ProjectModifyResponse Alibabacloud_BtripOpen20220520::Client::projectModify(shared_ptr<ProjectModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return projectModifyWithOptions(request, headers, runtime);
}

ProjectModifyResponse Alibabacloud_BtripOpen20220520::Client::projectModifyWithOptions(shared_ptr<ProjectModifyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("project_name", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartCostCenterId)) {
    body->insert(pair<string, string>("third_part_cost_center_id", *request->thirdPartCostCenterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartInvoiceId)) {
    body->insert(pair<string, string>("third_part_invoice_id", *request->thirdPartInvoiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ProjectModify"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/cost/v1/project"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ProjectModifyResponse(callApi(params, req, runtime));
}

TrainBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::trainBillSettlementQuery(shared_ptr<TrainBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return trainBillSettlementQueryWithOptions(request, headers, runtime);
}

TrainBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::trainBillSettlementQueryWithOptions(shared_ptr<TrainBillSettlementQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainBillSettlementQueryResponse(callApi(params, req, runtime));
}

TrainExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::trainExceedApplyQuery(shared_ptr<TrainExceedApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return trainExceedApplyQueryWithOptions(request, headers, runtime);
}

TrainExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::trainExceedApplyQueryWithOptions(shared_ptr<TrainExceedApplyQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainExceedApplyQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/train-exceed"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainExceedApplyQueryResponse(callApi(params, req, runtime));
}

TrainOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderListQuery(shared_ptr<TrainOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return trainOrderListQueryWithOptions(request, headers, runtime);
}

TrainOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderListQueryWithOptions(shared_ptr<TrainOrderListQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allApply)) {
    query->insert(pair<string, bool>("all_apply", *request->allApply));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    query->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("end_time", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("start_time", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    query->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateEndTime)) {
    query->insert(pair<string, string>("update_end_time", *request->updateEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStartTime)) {
    query->insert(pair<string, string>("update_start_time", *request->updateStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainOrderListQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/order-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainOrderListQueryResponse(callApi(params, req, runtime));
}

TrainOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderQuery(shared_ptr<TrainOrderQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return trainOrderQueryWithOptions(request, headers, runtime);
}

TrainOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderQueryWithOptions(shared_ptr<TrainOrderQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainOrderQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/order"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainOrderQueryResponse(callApi(params, req, runtime));
}

UserQueryResponse Alibabacloud_BtripOpen20220520::Client::userQuery(shared_ptr<UserQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return userQueryWithOptions(request, headers, runtime);
}

UserQueryResponse Alibabacloud_BtripOpen20220520::Client::userQueryWithOptions(shared_ptr<UserQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedTimeGreaterOrEqualThan)) {
    query->insert(pair<string, string>("modified_time_greater_or_equal_than", *request->modifiedTimeGreaterOrEqualThan));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartJobNo)) {
    query->insert(pair<string, string>("third_part_job_no", *request->thirdPartJobNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UserQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/v1/user"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UserQueryResponse(callApi(params, req, runtime));
}

