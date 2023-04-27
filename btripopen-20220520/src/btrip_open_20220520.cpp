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

AccessTokenResponse Alibabacloud_BtripOpen20220520::Client::accessTokenWithOptions(shared_ptr<AccessTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AccessTokenResponse(callApi(params, req, runtime));
}

AccessTokenResponse Alibabacloud_BtripOpen20220520::Client::accessToken(shared_ptr<AccessTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return accessTokenWithOptions(request, headers, runtime);
}

AddInvoiceEntityResponse Alibabacloud_BtripOpen20220520::Client::addInvoiceEntityWithOptions(shared_ptr<AddInvoiceEntityRequest> tmpReq, shared_ptr<AddInvoiceEntityHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddInvoiceEntityShrinkRequest> request = make_shared<AddInvoiceEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddInvoiceEntityRequestEntities>>(tmpReq->entities)) {
    request->entitiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entities, make_shared<string>("entities"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entitiesShrink)) {
    body->insert(pair<string, string>("entities", *request->entitiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddInvoiceEntity"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/entities"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddInvoiceEntityResponse(callApi(params, req, runtime));
}

AddInvoiceEntityResponse Alibabacloud_BtripOpen20220520::Client::addInvoiceEntity(shared_ptr<AddInvoiceEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddInvoiceEntityHeaders> headers = make_shared<AddInvoiceEntityHeaders>();
  return addInvoiceEntityWithOptions(request, headers, runtime);
}

AddressGetResponse Alibabacloud_BtripOpen20220520::Client::addressGetWithOptions(shared_ptr<AddressGetRequest> request, shared_ptr<AddressGetHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->actionType)) {
    query->insert(pair<string, long>("action_type", *request->actionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carScenesCode)) {
    query->insert(pair<string, string>("car_scenes_code", *request->carScenesCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itineraryId)) {
    query->insert(pair<string, string>("itinerary_id", *request->itineraryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    query->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpId)) {
    query->insert(pair<string, string>("sub_corp_id", *request->subCorpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("type", *request->type));
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

AddressGetResponse Alibabacloud_BtripOpen20220520::Client::addressGet(shared_ptr<AddressGetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddressGetHeaders> headers = make_shared<AddressGetHeaders>();
  return addressGetWithOptions(request, headers, runtime);
}

AirportSearchResponse Alibabacloud_BtripOpen20220520::Client::airportSearchWithOptions(shared_ptr<AirportSearchRequest> request, shared_ptr<AirportSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("type", *request->type));
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
    {"action", boost::any(string("AirportSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/city/v1/airport"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AirportSearchResponse(callApi(params, req, runtime));
}

AirportSearchResponse Alibabacloud_BtripOpen20220520::Client::airportSearch(shared_ptr<AirportSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AirportSearchHeaders> headers = make_shared<AirportSearchHeaders>();
  return airportSearchWithOptions(request, headers, runtime);
}

AllBaseCityInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::allBaseCityInfoQueryWithOptions(shared_ptr<AllBaseCityInfoQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripAccessToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AllBaseCityInfoQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/city/v1/code"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AllBaseCityInfoQueryResponse(callApi(params, req, runtime));
}

AllBaseCityInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::allBaseCityInfoQuery() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AllBaseCityInfoQueryHeaders> headers = make_shared<AllBaseCityInfoQueryHeaders>();
  return allBaseCityInfoQueryWithOptions(headers, runtime);
}

ApplyAddResponse Alibabacloud_BtripOpen20220520::Client::applyAddWithOptions(shared_ptr<ApplyAddRequest> tmpReq, shared_ptr<ApplyAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyAddShrinkRequest> request = make_shared<ApplyAddShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ApplyAddRequestExternalTravelerList>>(tmpReq->externalTravelerList)) {
    request->externalTravelerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->externalTravelerList, make_shared<string>("external_traveler_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyAddRequestExternalTravelerStandard>(tmpReq->externalTravelerStandard)) {
    request->externalTravelerStandardShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->externalTravelerStandard, make_shared<string>("external_traveler_standard"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyAddRequestHotelShare>(tmpReq->hotelShare)) {
    request->hotelShareShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotelShare, make_shared<string>("hotel_share"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyAddRequestItineraryList>>(tmpReq->itineraryList)) {
    request->itineraryListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itineraryList, make_shared<string>("itinerary_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyAddRequestItinerarySetList>>(tmpReq->itinerarySetList)) {
    request->itinerarySetListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itinerarySetList, make_shared<string>("itinerary_set_list"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->extendField)) {
    body->insert(pair<string, string>("extend_field", *request->extendField));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->itineraryRule)) {
    body->insert(pair<string, long>("itinerary_rule", *request->itineraryRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itinerarySetListShrink)) {
    body->insert(pair<string, string>("itinerary_set_list", *request->itinerarySetListShrink));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartDepartId)) {
    body->insert(pair<string, string>("thirdpart_depart_id", *request->thirdpartDepartId));
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

ApplyAddResponse Alibabacloud_BtripOpen20220520::Client::applyAdd(shared_ptr<ApplyAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyAddHeaders> headers = make_shared<ApplyAddHeaders>();
  return applyAddWithOptions(request, headers, runtime);
}

ApplyApproveResponse Alibabacloud_BtripOpen20220520::Client::applyApproveWithOptions(shared_ptr<ApplyApproveRequest> request, shared_ptr<ApplyApproveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyId)) {
    body->insert(pair<string, string>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    body->insert(pair<string, string>("note", *request->note));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateTime)) {
    body->insert(pair<string, string>("operate_time", *request->operateTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("user_name", *request->userName));
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
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyApprove"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/biz-trip/action/approve"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyApproveResponse(callApi(params, req, runtime));
}

ApplyApproveResponse Alibabacloud_BtripOpen20220520::Client::applyApprove(shared_ptr<ApplyApproveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyApproveHeaders> headers = make_shared<ApplyApproveHeaders>();
  return applyApproveWithOptions(request, headers, runtime);
}

ApplyInvoiceTaskResponse Alibabacloud_BtripOpen20220520::Client::applyInvoiceTaskWithOptions(shared_ptr<ApplyInvoiceTaskRequest> tmpReq, shared_ptr<ApplyInvoiceTaskHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyInvoiceTaskShrinkRequest> request = make_shared<ApplyInvoiceTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ApplyInvoiceTaskRequestInvoiceTaskList>>(tmpReq->invoiceTaskList)) {
    request->invoiceTaskListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->invoiceTaskList, make_shared<string>("invoice_task_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billDate)) {
    body->insert(pair<string, string>("bill_date", *request->billDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invoiceTaskListShrink)) {
    body->insert(pair<string, string>("invoice_task_list", *request->invoiceTaskListShrink));
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
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyInvoiceTask"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/apply-invoice-task"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyInvoiceTaskResponse(callApi(params, req, runtime));
}

ApplyInvoiceTaskResponse Alibabacloud_BtripOpen20220520::Client::applyInvoiceTask(shared_ptr<ApplyInvoiceTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyInvoiceTaskHeaders> headers = make_shared<ApplyInvoiceTaskHeaders>();
  return applyInvoiceTaskWithOptions(request, headers, runtime);
}

ApplyListQueryResponse Alibabacloud_BtripOpen20220520::Client::applyListQueryWithOptions(shared_ptr<ApplyListQueryRequest> request, shared_ptr<ApplyListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

ApplyListQueryResponse Alibabacloud_BtripOpen20220520::Client::applyListQuery(shared_ptr<ApplyListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyListQueryHeaders> headers = make_shared<ApplyListQueryHeaders>();
  return applyListQueryWithOptions(request, headers, runtime);
}

ApplyModifyResponse Alibabacloud_BtripOpen20220520::Client::applyModifyWithOptions(shared_ptr<ApplyModifyRequest> tmpReq, shared_ptr<ApplyModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyModifyShrinkRequest> request = make_shared<ApplyModifyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ApplyModifyRequestExternalTravelerList>>(tmpReq->externalTravelerList)) {
    request->externalTravelerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->externalTravelerList, make_shared<string>("external_traveler_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyModifyRequestExternalTravelerStandard>(tmpReq->externalTravelerStandard)) {
    request->externalTravelerStandardShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->externalTravelerStandard, make_shared<string>("external_traveler_standard"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyModifyRequestHotelShare>(tmpReq->hotelShare)) {
    request->hotelShareShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotelShare, make_shared<string>("hotel_share"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyModifyRequestItineraryList>>(tmpReq->itineraryList)) {
    request->itineraryListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itineraryList, make_shared<string>("itinerary_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyModifyRequestItinerarySetList>>(tmpReq->itinerarySetList)) {
    request->itinerarySetListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itinerarySetList, make_shared<string>("itinerary_set_list"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->extendField)) {
    body->insert(pair<string, string>("extend_field", *request->extendField));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->itineraryRule)) {
    body->insert(pair<string, long>("itinerary_rule", *request->itineraryRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itinerarySetListShrink)) {
    body->insert(pair<string, string>("itinerary_set_list", *request->itinerarySetListShrink));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartDepartId)) {
    body->insert(pair<string, string>("thirdpart_depart_id", *request->thirdpartDepartId));
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

ApplyModifyResponse Alibabacloud_BtripOpen20220520::Client::applyModify(shared_ptr<ApplyModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyModifyHeaders> headers = make_shared<ApplyModifyHeaders>();
  return applyModifyWithOptions(request, headers, runtime);
}

ApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::applyQueryWithOptions(shared_ptr<ApplyQueryRequest> request, shared_ptr<ApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

ApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::applyQuery(shared_ptr<ApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyQueryHeaders> headers = make_shared<ApplyQueryHeaders>();
  return applyQueryWithOptions(request, headers, runtime);
}

BtripBillInfoAdjustResponse Alibabacloud_BtripOpen20220520::Client::btripBillInfoAdjustWithOptions(shared_ptr<BtripBillInfoAdjustRequest> request, shared_ptr<BtripBillInfoAdjustHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->primaryId)) {
    body->insert(pair<string, long>("primary_id", *request->primaryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartCostCenterId)) {
    body->insert(pair<string, string>("third_part_cost_center_id", *request->thirdPartCostCenterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartDepartmentId)) {
    body->insert(pair<string, string>("third_part_department_id", *request->thirdPartDepartmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartInvoiceId)) {
    body->insert(pair<string, string>("third_part_invoice_id", *request->thirdPartInvoiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartProjectId)) {
    body->insert(pair<string, string>("third_part_project_id", *request->thirdPartProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BtripBillInfoAdjust"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/bill/v1/info/action/adjust"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BtripBillInfoAdjustResponse(callApi(params, req, runtime));
}

BtripBillInfoAdjustResponse Alibabacloud_BtripOpen20220520::Client::btripBillInfoAdjust(shared_ptr<BtripBillInfoAdjustRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<BtripBillInfoAdjustHeaders> headers = make_shared<BtripBillInfoAdjustHeaders>();
  return btripBillInfoAdjustWithOptions(request, headers, runtime);
}

CarApplyAddResponse Alibabacloud_BtripOpen20220520::Client::carApplyAddWithOptions(shared_ptr<CarApplyAddRequest> request, shared_ptr<CarApplyAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

CarApplyAddResponse Alibabacloud_BtripOpen20220520::Client::carApplyAdd(shared_ptr<CarApplyAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarApplyAddHeaders> headers = make_shared<CarApplyAddHeaders>();
  return carApplyAddWithOptions(request, headers, runtime);
}

CarApplyModifyResponse Alibabacloud_BtripOpen20220520::Client::carApplyModifyWithOptions(shared_ptr<CarApplyModifyRequest> request, shared_ptr<CarApplyModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

CarApplyModifyResponse Alibabacloud_BtripOpen20220520::Client::carApplyModify(shared_ptr<CarApplyModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarApplyModifyHeaders> headers = make_shared<CarApplyModifyHeaders>();
  return carApplyModifyWithOptions(request, headers, runtime);
}

CarApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::carApplyQueryWithOptions(shared_ptr<CarApplyQueryRequest> request, shared_ptr<CarApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

CarApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::carApplyQuery(shared_ptr<CarApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarApplyQueryHeaders> headers = make_shared<CarApplyQueryHeaders>();
  return carApplyQueryWithOptions(request, headers, runtime);
}

CarBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::carBillSettlementQueryWithOptions(shared_ptr<CarBillSettlementQueryRequest> request, shared_ptr<CarBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

CarBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::carBillSettlementQuery(shared_ptr<CarBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarBillSettlementQueryHeaders> headers = make_shared<CarBillSettlementQueryHeaders>();
  return carBillSettlementQueryWithOptions(request, headers, runtime);
}

CarOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::carOrderListQueryWithOptions(shared_ptr<CarOrderListQueryRequest> request, shared_ptr<CarOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

CarOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::carOrderListQuery(shared_ptr<CarOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarOrderListQueryHeaders> headers = make_shared<CarOrderListQueryHeaders>();
  return carOrderListQueryWithOptions(request, headers, runtime);
}

CarOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::carOrderQueryWithOptions(shared_ptr<CarOrderQueryRequest> request, shared_ptr<CarOrderQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subOrderId)) {
    query->insert(pair<string, long>("sub_order_id", *request->subOrderId));
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
    {"action", boost::any(string("CarOrderQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/car/v1/order"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarOrderQueryResponse(callApi(params, req, runtime));
}

CarOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::carOrderQuery(shared_ptr<CarOrderQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarOrderQueryHeaders> headers = make_shared<CarOrderQueryHeaders>();
  return carOrderQueryWithOptions(request, headers, runtime);
}

CarSceneQueryResponse Alibabacloud_BtripOpen20220520::Client::carSceneQueryWithOptions(shared_ptr<CarSceneQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CarSceneQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/car/v1/scenes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarSceneQueryResponse(callApi(params, req, runtime));
}

CarSceneQueryResponse Alibabacloud_BtripOpen20220520::Client::carSceneQuery() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarSceneQueryHeaders> headers = make_shared<CarSceneQueryHeaders>();
  return carSceneQueryWithOptions(headers, runtime);
}

CitySearchResponse Alibabacloud_BtripOpen20220520::Client::citySearchWithOptions(shared_ptr<CitySearchRequest> request, shared_ptr<CitySearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
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
    {"action", boost::any(string("CitySearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/city/v1/city"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CitySearchResponse(callApi(params, req, runtime));
}

CitySearchResponse Alibabacloud_BtripOpen20220520::Client::citySearch(shared_ptr<CitySearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CitySearchHeaders> headers = make_shared<CitySearchHeaders>();
  return citySearchWithOptions(request, headers, runtime);
}

CommonApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::commonApplyQueryWithOptions(shared_ptr<CommonApplyQueryRequest> request, shared_ptr<CommonApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

CommonApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::commonApplyQuery(shared_ptr<CommonApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CommonApplyQueryHeaders> headers = make_shared<CommonApplyQueryHeaders>();
  return commonApplyQueryWithOptions(request, headers, runtime);
}

CommonApplySyncResponse Alibabacloud_BtripOpen20220520::Client::commonApplySyncWithOptions(shared_ptr<CommonApplySyncRequest> request, shared_ptr<CommonApplySyncHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

CommonApplySyncResponse Alibabacloud_BtripOpen20220520::Client::commonApplySync(shared_ptr<CommonApplySyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CommonApplySyncHeaders> headers = make_shared<CommonApplySyncHeaders>();
  return commonApplySyncWithOptions(request, headers, runtime);
}

CorpAuthLinkInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::corpAuthLinkInfoQueryWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CorpAuthLinkInfoQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/corp-authority-link/v1/info"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CorpAuthLinkInfoQueryResponse(callApi(params, req, runtime));
}

CorpAuthLinkInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::corpAuthLinkInfoQuery() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return corpAuthLinkInfoQueryWithOptions(headers, runtime);
}

CorpTokenResponse Alibabacloud_BtripOpen20220520::Client::corpTokenWithOptions(shared_ptr<CorpTokenRequest> request, shared_ptr<CorpTokenHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appSecret)) {
    query->insert(pair<string, string>("app_secret", *request->appSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpId)) {
    query->insert(pair<string, string>("corp_id", *request->corpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripAccessToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

CorpTokenResponse Alibabacloud_BtripOpen20220520::Client::corpToken(shared_ptr<CorpTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CorpTokenHeaders> headers = make_shared<CorpTokenHeaders>();
  return corpTokenWithOptions(request, headers, runtime);
}

CostCenterDeleteResponse Alibabacloud_BtripOpen20220520::Client::costCenterDeleteWithOptions(shared_ptr<CostCenterDeleteRequest> request, shared_ptr<CostCenterDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    query->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
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

CostCenterDeleteResponse Alibabacloud_BtripOpen20220520::Client::costCenterDelete(shared_ptr<CostCenterDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CostCenterDeleteHeaders> headers = make_shared<CostCenterDeleteHeaders>();
  return costCenterDeleteWithOptions(request, headers, runtime);
}

CostCenterModifyResponse Alibabacloud_BtripOpen20220520::Client::costCenterModifyWithOptions(shared_ptr<CostCenterModifyRequest> request, shared_ptr<CostCenterModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

CostCenterModifyResponse Alibabacloud_BtripOpen20220520::Client::costCenterModify(shared_ptr<CostCenterModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CostCenterModifyHeaders> headers = make_shared<CostCenterModifyHeaders>();
  return costCenterModifyWithOptions(request, headers, runtime);
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

CostCenterQueryResponse Alibabacloud_BtripOpen20220520::Client::costCenterQuery(shared_ptr<CostCenterQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CostCenterQueryHeaders> headers = make_shared<CostCenterQueryHeaders>();
  return costCenterQueryWithOptions(request, headers, runtime);
}

CostCenterSaveResponse Alibabacloud_BtripOpen20220520::Client::costCenterSaveWithOptions(shared_ptr<CostCenterSaveRequest> request, shared_ptr<CostCenterSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

CostCenterSaveResponse Alibabacloud_BtripOpen20220520::Client::costCenterSave(shared_ptr<CostCenterSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CostCenterSaveHeaders> headers = make_shared<CostCenterSaveHeaders>();
  return costCenterSaveWithOptions(request, headers, runtime);
}

CreateSubCorpResponse Alibabacloud_BtripOpen20220520::Client::createSubCorpWithOptions(shared_ptr<CreateSubCorpRequest> request, shared_ptr<CreateSubCorpHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outerCorpId)) {
    body->insert(pair<string, string>("outer_corp_id", *request->outerCorpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerCorpName)) {
    body->insert(pair<string, string>("outer_corp_name", *request->outerCorpName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubCorp"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sub_corps/v1/corps"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubCorpResponse(callApi(params, req, runtime));
}

CreateSubCorpResponse Alibabacloud_BtripOpen20220520::Client::createSubCorp(shared_ptr<CreateSubCorpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateSubCorpHeaders> headers = make_shared<CreateSubCorpHeaders>();
  return createSubCorpWithOptions(request, headers, runtime);
}

DeleteInvoiceEntityResponse Alibabacloud_BtripOpen20220520::Client::deleteInvoiceEntityWithOptions(shared_ptr<DeleteInvoiceEntityRequest> tmpReq, shared_ptr<DeleteInvoiceEntityHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteInvoiceEntityShrinkRequest> request = make_shared<DeleteInvoiceEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DeleteInvoiceEntityRequestEntities>>(tmpReq->entities)) {
    request->entitiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entities, make_shared<string>("entities"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->delAll)) {
    query->insert(pair<string, bool>("del_all", *request->delAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entitiesShrink)) {
    query->insert(pair<string, string>("entities", *request->entitiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    query->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInvoiceEntity"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/entities"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInvoiceEntityResponse(callApi(params, req, runtime));
}

DeleteInvoiceEntityResponse Alibabacloud_BtripOpen20220520::Client::deleteInvoiceEntity(shared_ptr<DeleteInvoiceEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteInvoiceEntityHeaders> headers = make_shared<DeleteInvoiceEntityHeaders>();
  return deleteInvoiceEntityWithOptions(request, headers, runtime);
}

DepartmentSaveResponse Alibabacloud_BtripOpen20220520::Client::departmentSaveWithOptions(shared_ptr<DepartmentSaveRequest> tmpReq, shared_ptr<DepartmentSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

DepartmentSaveResponse Alibabacloud_BtripOpen20220520::Client::departmentSave(shared_ptr<DepartmentSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DepartmentSaveHeaders> headers = make_shared<DepartmentSaveHeaders>();
  return departmentSaveWithOptions(request, headers, runtime);
}

EntityAddResponse Alibabacloud_BtripOpen20220520::Client::entityAddWithOptions(shared_ptr<EntityAddRequest> tmpReq, shared_ptr<EntityAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

EntityAddResponse Alibabacloud_BtripOpen20220520::Client::entityAdd(shared_ptr<EntityAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<EntityAddHeaders> headers = make_shared<EntityAddHeaders>();
  return entityAddWithOptions(request, headers, runtime);
}

EntityDeleteResponse Alibabacloud_BtripOpen20220520::Client::entityDeleteWithOptions(shared_ptr<EntityDeleteRequest> tmpReq, shared_ptr<EntityDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

EntityDeleteResponse Alibabacloud_BtripOpen20220520::Client::entityDelete(shared_ptr<EntityDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<EntityDeleteHeaders> headers = make_shared<EntityDeleteHeaders>();
  return entityDeleteWithOptions(request, headers, runtime);
}

EntitySetResponse Alibabacloud_BtripOpen20220520::Client::entitySetWithOptions(shared_ptr<EntitySetRequest> tmpReq, shared_ptr<EntitySetHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

EntitySetResponse Alibabacloud_BtripOpen20220520::Client::entitySet(shared_ptr<EntitySetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<EntitySetHeaders> headers = make_shared<EntitySetHeaders>();
  return entitySetWithOptions(request, headers, runtime);
}

EstimatedPriceQueryResponse Alibabacloud_BtripOpen20220520::Client::estimatedPriceQueryWithOptions(shared_ptr<EstimatedPriceQueryRequest> request, shared_ptr<EstimatedPriceQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCity)) {
    query->insert(pair<string, string>("arr_city", *request->arrCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCity)) {
    query->insert(pair<string, string>("dep_city", *request->depCity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("end_time", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itineraryId)) {
    query->insert(pair<string, string>("itinerary_id", *request->itineraryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("start_time", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpId)) {
    query->insert(pair<string, string>("sub_corp_id", *request->subCorpId));
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
    {"action", boost::any(string("EstimatedPriceQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/estimated-price"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EstimatedPriceQueryResponse(callApi(params, req, runtime));
}

EstimatedPriceQueryResponse Alibabacloud_BtripOpen20220520::Client::estimatedPriceQuery(shared_ptr<EstimatedPriceQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<EstimatedPriceQueryHeaders> headers = make_shared<EstimatedPriceQueryHeaders>();
  return estimatedPriceQueryWithOptions(request, headers, runtime);
}

ExceedApplySyncResponse Alibabacloud_BtripOpen20220520::Client::exceedApplySyncWithOptions(shared_ptr<ExceedApplySyncRequest> request, shared_ptr<ExceedApplySyncHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

ExceedApplySyncResponse Alibabacloud_BtripOpen20220520::Client::exceedApplySync(shared_ptr<ExceedApplySyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ExceedApplySyncHeaders> headers = make_shared<ExceedApplySyncHeaders>();
  return exceedApplySyncWithOptions(request, headers, runtime);
}

FlightBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::flightBillSettlementQueryWithOptions(shared_ptr<FlightBillSettlementQueryRequest> request, shared_ptr<FlightBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

FlightBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::flightBillSettlementQuery(shared_ptr<FlightBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightBillSettlementQueryHeaders> headers = make_shared<FlightBillSettlementQueryHeaders>();
  return flightBillSettlementQueryWithOptions(request, headers, runtime);
}

FlightCancelOrderResponse Alibabacloud_BtripOpen20220520::Client::flightCancelOrderWithOptions(shared_ptr<FlightCancelOrderRequest> request, shared_ptr<FlightCancelOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightCancelOrder"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/order/action/cancel"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightCancelOrderResponse(callApi(params, req, runtime));
}

FlightCancelOrderResponse Alibabacloud_BtripOpen20220520::Client::flightCancelOrder(shared_ptr<FlightCancelOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightCancelOrderHeaders> headers = make_shared<FlightCancelOrderHeaders>();
  return flightCancelOrderWithOptions(request, headers, runtime);
}

FlightCreateOrderResponse Alibabacloud_BtripOpen20220520::Client::flightCreateOrderWithOptions(shared_ptr<FlightCreateOrderRequest> tmpReq, shared_ptr<FlightCreateOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightCreateOrderShrinkRequest> request = make_shared<FlightCreateOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<FlightCreateOrderRequestContactInfo>(tmpReq->contactInfo)) {
    request->contactInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contactInfo, make_shared<string>("contact_info"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->orderAttr)) {
    request->orderAttrShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->orderAttr, make_shared<string>("order_attr"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<FlightCreateOrderRequestTravelerInfoList>>(tmpReq->travelerInfoList)) {
    request->travelerInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelerInfoList, make_shared<string>("traveler_info_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arrAirportCode)) {
    body->insert(pair<string, string>("arr_airport_code", *request->arrAirportCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCityCode)) {
    body->insert(pair<string, string>("arr_city_code", *request->arrCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoPay)) {
    body->insert(pair<string, long>("auto_pay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    body->insert(pair<string, string>("buyer_name", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerUniqueKey)) {
    body->insert(pair<string, string>("buyer_unique_key", *request->buyerUniqueKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactInfoShrink)) {
    body->insert(pair<string, string>("contact_info", *request->contactInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depAirportCode)) {
    body->insert(pair<string, string>("dep_airport_code", *request->depAirportCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCityCode)) {
    body->insert(pair<string, string>("dep_city_code", *request->depCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDate)) {
    body->insert(pair<string, string>("dep_date", *request->depDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderAttrShrink)) {
    body->insert(pair<string, string>("order_attr", *request->orderAttrShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderParams)) {
    body->insert(pair<string, string>("order_params", *request->orderParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otaItemId)) {
    body->insert(pair<string, string>("ota_item_id", *request->otaItemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->price)) {
    body->insert(pair<string, long>("price", *request->price));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiptAddress)) {
    body->insert(pair<string, string>("receipt_address", *request->receiptAddress));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->receiptTarget)) {
    body->insert(pair<string, long>("receipt_target", *request->receiptTarget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiptTitle)) {
    body->insert(pair<string, string>("receipt_title", *request->receiptTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerInfoListShrink)) {
    body->insert(pair<string, string>("traveler_info_list", *request->travelerInfoListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tripType)) {
    body->insert(pair<string, long>("trip_type", *request->tripType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightCreateOrder"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/order/action/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightCreateOrderResponse(callApi(params, req, runtime));
}

FlightCreateOrderResponse Alibabacloud_BtripOpen20220520::Client::flightCreateOrder(shared_ptr<FlightCreateOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightCreateOrderHeaders> headers = make_shared<FlightCreateOrderHeaders>();
  return flightCreateOrderWithOptions(request, headers, runtime);
}

FlightExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::flightExceedApplyQueryWithOptions(shared_ptr<FlightExceedApplyQueryRequest> request, shared_ptr<FlightExceedApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
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

FlightExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::flightExceedApplyQuery(shared_ptr<FlightExceedApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightExceedApplyQueryHeaders> headers = make_shared<FlightExceedApplyQueryHeaders>();
  return flightExceedApplyQueryWithOptions(request, headers, runtime);
}

FlightItineraryScanQueryResponse Alibabacloud_BtripOpen20220520::Client::flightItineraryScanQueryWithOptions(shared_ptr<FlightItineraryScanQueryRequest> request, shared_ptr<FlightItineraryScanQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billDate)) {
    query->insert(pair<string, string>("bill_date", *request->billDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->billId)) {
    query->insert(pair<string, long>("bill_id", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->invoiceSubTaskId)) {
    query->insert(pair<string, long>("invoice_sub_task_id", *request->invoiceSubTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
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
    {"action", boost::any(string("FlightItineraryScanQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/scan/v1/flight-itinerary"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightItineraryScanQueryResponse(callApi(params, req, runtime));
}

FlightItineraryScanQueryResponse Alibabacloud_BtripOpen20220520::Client::flightItineraryScanQuery(shared_ptr<FlightItineraryScanQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightItineraryScanQueryHeaders> headers = make_shared<FlightItineraryScanQueryHeaders>();
  return flightItineraryScanQueryWithOptions(request, headers, runtime);
}

FlightListingSearchResponse Alibabacloud_BtripOpen20220520::Client::flightListingSearchWithOptions(shared_ptr<FlightListingSearchRequest> request, shared_ptr<FlightListingSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->airlineCode)) {
    query->insert(pair<string, string>("airline_code", *request->airlineCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCityCode)) {
    query->insert(pair<string, string>("arr_city_code", *request->arrCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cabinClass)) {
    query->insert(pair<string, string>("cabin_class", *request->cabinClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCityCode)) {
    query->insert(pair<string, string>("dep_city_code", *request->depCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDate)) {
    query->insert(pair<string, string>("dep_date", *request->depDate));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightListingSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/flight/action/listing-search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightListingSearchResponse(callApi(params, req, runtime));
}

FlightListingSearchResponse Alibabacloud_BtripOpen20220520::Client::flightListingSearch(shared_ptr<FlightListingSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightListingSearchHeaders> headers = make_shared<FlightListingSearchHeaders>();
  return flightListingSearchWithOptions(request, headers, runtime);
}

FlightOrderDetailInfoResponse Alibabacloud_BtripOpen20220520::Client::flightOrderDetailInfoWithOptions(shared_ptr<FlightOrderDetailInfoRequest> request, shared_ptr<FlightOrderDetailInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightOrderDetailInfo"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/order/action/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightOrderDetailInfoResponse(callApi(params, req, runtime));
}

FlightOrderDetailInfoResponse Alibabacloud_BtripOpen20220520::Client::flightOrderDetailInfo(shared_ptr<FlightOrderDetailInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightOrderDetailInfoHeaders> headers = make_shared<FlightOrderDetailInfoHeaders>();
  return flightOrderDetailInfoWithOptions(request, headers, runtime);
}

FlightOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::flightOrderListQueryWithOptions(shared_ptr<FlightOrderListQueryRequest> request, shared_ptr<FlightOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

FlightOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::flightOrderListQuery(shared_ptr<FlightOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightOrderListQueryHeaders> headers = make_shared<FlightOrderListQueryHeaders>();
  return flightOrderListQueryWithOptions(request, headers, runtime);
}

FlightOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::flightOrderQueryWithOptions(shared_ptr<FlightOrderQueryRequest> request, shared_ptr<FlightOrderQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
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

FlightOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::flightOrderQuery(shared_ptr<FlightOrderQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightOrderQueryHeaders> headers = make_shared<FlightOrderQueryHeaders>();
  return flightOrderQueryWithOptions(request, headers, runtime);
}

FlightOtaSearchResponse Alibabacloud_BtripOpen20220520::Client::flightOtaSearchWithOptions(shared_ptr<FlightOtaSearchRequest> request, shared_ptr<FlightOtaSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->airlineCode)) {
    query->insert(pair<string, string>("airline_code", *request->airlineCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCityCode)) {
    query->insert(pair<string, string>("arr_city_code", *request->arrCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cabinClass)) {
    query->insert(pair<string, string>("cabin_class", *request->cabinClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carrierFlightNo)) {
    query->insert(pair<string, string>("carrier_flight_no", *request->carrierFlightNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCityCode)) {
    query->insert(pair<string, string>("dep_city_code", *request->depCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDate)) {
    query->insert(pair<string, string>("dep_date", *request->depDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flightNo)) {
    query->insert(pair<string, string>("flight_no", *request->flightNo));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightOtaSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/flight/action/ota-search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightOtaSearchResponse(callApi(params, req, runtime));
}

FlightOtaSearchResponse Alibabacloud_BtripOpen20220520::Client::flightOtaSearch(shared_ptr<FlightOtaSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightOtaSearchHeaders> headers = make_shared<FlightOtaSearchHeaders>();
  return flightOtaSearchWithOptions(request, headers, runtime);
}

FlightPayOrderResponse Alibabacloud_BtripOpen20220520::Client::flightPayOrderWithOptions(shared_ptr<FlightPayOrderRequest> tmpReq, shared_ptr<FlightPayOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightPayOrderShrinkRequest> request = make_shared<FlightPayOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extra)) {
    request->extraShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extra, make_shared<string>("extra"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->corpPayPrice)) {
    body->insert(pair<string, long>("corp_pay_price", *request->corpPayPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraShrink)) {
    body->insert(pair<string, string>("extra", *request->extraShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personalPayPrice)) {
    body->insert(pair<string, long>("personal_pay_price", *request->personalPayPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalPayPrice)) {
    body->insert(pair<string, long>("total_pay_price", *request->totalPayPrice));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightPayOrder"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/order/action/pay"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightPayOrderResponse(callApi(params, req, runtime));
}

FlightPayOrderResponse Alibabacloud_BtripOpen20220520::Client::flightPayOrder(shared_ptr<FlightPayOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightPayOrderHeaders> headers = make_shared<FlightPayOrderHeaders>();
  return flightPayOrderWithOptions(request, headers, runtime);
}

FlightRefundApplyResponse Alibabacloud_BtripOpen20220520::Client::flightRefundApplyWithOptions(shared_ptr<FlightRefundApplyRequest> tmpReq, shared_ptr<FlightRefundApplyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightRefundApplyShrinkRequest> request = make_shared<FlightRefundApplyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extra)) {
    request->extraShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extra, make_shared<string>("extra"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<FlightRefundApplyRequestPassengerSegmentInfoList>>(tmpReq->passengerSegmentInfoList)) {
    request->passengerSegmentInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerSegmentInfoList, make_shared<string>("passenger_segment_info_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->refundVoucherInfo)) {
    request->refundVoucherInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->refundVoucherInfo, make_shared<string>("refund_voucher_info"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->corpRefundPrice)) {
    body->insert(pair<string, long>("corp_refund_price", *request->corpRefundPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disSubOrderId)) {
    body->insert(pair<string, string>("dis_sub_order_id", *request->disSubOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayRefundMoney)) {
    body->insert(pair<string, string>("display_refund_money", *request->displayRefundMoney));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraShrink)) {
    body->insert(pair<string, string>("extra", *request->extraShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isVoluntary)) {
    body->insert(pair<string, long>("is_voluntary", *request->isVoluntary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemUnitIds)) {
    body->insert(pair<string, string>("item_unit_ids", *request->itemUnitIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerSegmentInfoListShrink)) {
    body->insert(pair<string, string>("passenger_segment_info_list", *request->passengerSegmentInfoListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personalRefundPrice)) {
    body->insert(pair<string, long>("personal_refund_price", *request->personalRefundPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reasonDetail)) {
    body->insert(pair<string, string>("reason_detail", *request->reasonDetail));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reasonType)) {
    body->insert(pair<string, long>("reason_type", *request->reasonType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundVoucherInfoShrink)) {
    body->insert(pair<string, string>("refund_voucher_info", *request->refundVoucherInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("session_id", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalRefundPrice)) {
    body->insert(pair<string, long>("total_refund_price", *request->totalRefundPrice));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightRefundApply"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/refund/action/apply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightRefundApplyResponse(callApi(params, req, runtime));
}

FlightRefundApplyResponse Alibabacloud_BtripOpen20220520::Client::flightRefundApply(shared_ptr<FlightRefundApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightRefundApplyHeaders> headers = make_shared<FlightRefundApplyHeaders>();
  return flightRefundApplyWithOptions(request, headers, runtime);
}

FlightRefundDetailResponse Alibabacloud_BtripOpen20220520::Client::flightRefundDetailWithOptions(shared_ptr<FlightRefundDetailRequest> request, shared_ptr<FlightRefundDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disSubOrderId)) {
    query->insert(pair<string, string>("dis_sub_order_id", *request->disSubOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightRefundDetail"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/refund/action/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightRefundDetailResponse(callApi(params, req, runtime));
}

FlightRefundDetailResponse Alibabacloud_BtripOpen20220520::Client::flightRefundDetail(shared_ptr<FlightRefundDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightRefundDetailHeaders> headers = make_shared<FlightRefundDetailHeaders>();
  return flightRefundDetailWithOptions(request, headers, runtime);
}

FlightRefundPreCalResponse Alibabacloud_BtripOpen20220520::Client::flightRefundPreCalWithOptions(shared_ptr<FlightRefundPreCalRequest> tmpReq, shared_ptr<FlightRefundPreCalHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightRefundPreCalShrinkRequest> request = make_shared<FlightRefundPreCalShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<FlightRefundPreCalRequestPassengerSegmentInfoList>>(tmpReq->passengerSegmentInfoList)) {
    request->passengerSegmentInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerSegmentInfoList, make_shared<string>("passenger_segment_info_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isVoluntary)) {
    query->insert(pair<string, string>("is_voluntary", *request->isVoluntary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerSegmentInfoListShrink)) {
    query->insert(pair<string, string>("passenger_segment_info_list", *request->passengerSegmentInfoListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightRefundPreCal"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/refund/action/pre-cal"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightRefundPreCalResponse(callApi(params, req, runtime));
}

FlightRefundPreCalResponse Alibabacloud_BtripOpen20220520::Client::flightRefundPreCal(shared_ptr<FlightRefundPreCalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightRefundPreCalHeaders> headers = make_shared<FlightRefundPreCalHeaders>();
  return flightRefundPreCalWithOptions(request, headers, runtime);
}

FlightSearchListResponse Alibabacloud_BtripOpen20220520::Client::flightSearchListWithOptions(shared_ptr<FlightSearchListRequest> request, shared_ptr<FlightSearchListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->airlineCode)) {
    query->insert(pair<string, string>("airline_code", *request->airlineCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCityCode)) {
    query->insert(pair<string, string>("arr_city_code", *request->arrCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCityName)) {
    query->insert(pair<string, string>("arr_city_name", *request->arrCityName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrDate)) {
    query->insert(pair<string, string>("arr_date", *request->arrDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cabinClass)) {
    query->insert(pair<string, string>("cabin_class", *request->cabinClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCityCode)) {
    query->insert(pair<string, string>("dep_city_code", *request->depCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCityName)) {
    query->insert(pair<string, string>("dep_city_name", *request->depCityName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDate)) {
    query->insert(pair<string, string>("dep_date", *request->depDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flightNo)) {
    query->insert(pair<string, string>("flight_no", *request->flightNo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needMultiClassPrice)) {
    query->insert(pair<string, bool>("need_multi_class_price", *request->needMultiClassPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transferCityCode)) {
    query->insert(pair<string, string>("transfer_city_code", *request->transferCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transferFlightNo)) {
    query->insert(pair<string, string>("transfer_flight_no", *request->transferFlightNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transferLeaveDate)) {
    query->insert(pair<string, string>("transfer_leave_date", *request->transferLeaveDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tripType)) {
    query->insert(pair<string, string>("trip_type", *request->tripType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightSearchList"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/huge/dtb-flight/v1/flight/action/search-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightSearchListResponse(callApi(params, req, runtime));
}

FlightSearchListResponse Alibabacloud_BtripOpen20220520::Client::flightSearchList(shared_ptr<FlightSearchListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightSearchListHeaders> headers = make_shared<FlightSearchListHeaders>();
  return flightSearchListWithOptions(request, headers, runtime);
}

GroupDepartSaveResponse Alibabacloud_BtripOpen20220520::Client::groupDepartSaveWithOptions(shared_ptr<GroupDepartSaveRequest> tmpReq, shared_ptr<GroupDepartSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GroupDepartSaveShrinkRequest> request = make_shared<GroupDepartSaveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->subCorpIdList)) {
    request->subCorpIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subCorpIdList, make_shared<string>("sub_corp_id_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deptName)) {
    body->insert(pair<string, string>("dept_name", *request->deptName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managerIds)) {
    body->insert(pair<string, string>("manager_ids", *request->managerIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerDeptId)) {
    body->insert(pair<string, string>("outer_dept_id", *request->outerDeptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerDeptPid)) {
    body->insert(pair<string, string>("outer_dept_pid", *request->outerDeptPid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpIdListShrink)) {
    body->insert(pair<string, string>("sub_corp_id_list", *request->subCorpIdListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GroupDepartSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sub_corps/v1/departs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GroupDepartSaveResponse(callApi(params, req, runtime));
}

GroupDepartSaveResponse Alibabacloud_BtripOpen20220520::Client::groupDepartSave(shared_ptr<GroupDepartSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GroupDepartSaveHeaders> headers = make_shared<GroupDepartSaveHeaders>();
  return groupDepartSaveWithOptions(request, headers, runtime);
}

GroupUserSaveResponse Alibabacloud_BtripOpen20220520::Client::groupUserSaveWithOptions(shared_ptr<GroupUserSaveRequest> tmpReq, shared_ptr<GroupUserSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GroupUserSaveShrinkRequest> request = make_shared<GroupUserSaveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GroupUserSaveRequestSubCorpIdList>>(tmpReq->subCorpIdList)) {
    request->subCorpIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subCorpIdList, make_shared<string>("sub_corp_id_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobNo)) {
    body->insert(pair<string, string>("job_no", *request->jobNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->leaveStatus)) {
    body->insert(pair<string, long>("leave_status", *request->leaveStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realNameEn)) {
    body->insert(pair<string, string>("real_name_en", *request->realNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpIdListShrink)) {
    body->insert(pair<string, string>("sub_corp_id_list", *request->subCorpIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("user_name", *request->userName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GroupUserSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sub_corps/v1/users"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GroupUserSaveResponse(callApi(params, req, runtime));
}

GroupUserSaveResponse Alibabacloud_BtripOpen20220520::Client::groupUserSave(shared_ptr<GroupUserSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GroupUserSaveHeaders> headers = make_shared<GroupUserSaveHeaders>();
  return groupUserSaveWithOptions(request, headers, runtime);
}

HotelBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelBillSettlementQueryWithOptions(shared_ptr<HotelBillSettlementQueryRequest> request, shared_ptr<HotelBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

HotelBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelBillSettlementQuery(shared_ptr<HotelBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelBillSettlementQueryHeaders> headers = make_shared<HotelBillSettlementQueryHeaders>();
  return hotelBillSettlementQueryWithOptions(request, headers, runtime);
}

HotelExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelExceedApplyQueryWithOptions(shared_ptr<HotelExceedApplyQueryRequest> request, shared_ptr<HotelExceedApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
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

HotelExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelExceedApplyQuery(shared_ptr<HotelExceedApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelExceedApplyQueryHeaders> headers = make_shared<HotelExceedApplyQueryHeaders>();
  return hotelExceedApplyQueryWithOptions(request, headers, runtime);
}

HotelGoodsQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelGoodsQueryWithOptions(shared_ptr<HotelGoodsQueryRequest> request, shared_ptr<HotelGoodsQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adultNum)) {
    query->insert(pair<string, string>("adult_num", *request->adultNum));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->agreementPrice)) {
    query->insert(pair<string, bool>("agreement_price", *request->agreementPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->beginDate)) {
    query->insert(pair<string, string>("begin_date", *request->beginDate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->breakfastIncluded)) {
    query->insert(pair<string, bool>("breakfast_included", *request->breakfastIncluded));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cityCode)) {
    query->insert(pair<string, string>("city_code", *request->cityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("end_date", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    query->insert(pair<string, string>("hotel_id", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->payOverType)) {
    query->insert(pair<string, long>("pay_over_type", *request->payOverType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->paymentType)) {
    query->insert(pair<string, long>("payment_type", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->specialInvoice)) {
    query->insert(pair<string, bool>("special_invoice", *request->specialInvoice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->superMan)) {
    query->insert(pair<string, long>("super_man", *request->superMan));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelGoodsQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/hotel-goods"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelGoodsQueryResponse(callApi(params, req, runtime));
}

HotelGoodsQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelGoodsQuery(shared_ptr<HotelGoodsQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelGoodsQueryHeaders> headers = make_shared<HotelGoodsQueryHeaders>();
  return hotelGoodsQueryWithOptions(request, headers, runtime);
}

HotelIndexInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelIndexInfoWithOptions(shared_ptr<HotelIndexInfoRequest> request, shared_ptr<HotelIndexInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cityCode)) {
    query->insert(pair<string, string>("city_code", *request->cityCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hotelStatus)) {
    query->insert(pair<string, long>("hotel_status", *request->hotelStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageToken)) {
    query->insert(pair<string, string>("page_token", *request->pageToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelIndexInfo"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/index-infos"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelIndexInfoResponse(callApi(params, req, runtime));
}

HotelIndexInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelIndexInfo(shared_ptr<HotelIndexInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelIndexInfoHeaders> headers = make_shared<HotelIndexInfoHeaders>();
  return hotelIndexInfoWithOptions(request, headers, runtime);
}

HotelOrderCancelResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderCancelWithOptions(shared_ptr<HotelOrderCancelRequest> request, shared_ptr<HotelOrderCancelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderCancel"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/orders/action/cancel"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderCancelResponse(callApi(params, req, runtime));
}

HotelOrderCancelResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderCancel(shared_ptr<HotelOrderCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderCancelHeaders> headers = make_shared<HotelOrderCancelHeaders>();
  return hotelOrderCancelWithOptions(request, headers, runtime);
}

HotelOrderCreateResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderCreateWithOptions(shared_ptr<HotelOrderCreateRequest> tmpReq, shared_ptr<HotelOrderCreateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HotelOrderCreateShrinkRequest> request = make_shared<HotelOrderCreateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<HotelOrderCreateRequestInvoiceInfo>(tmpReq->invoiceInfo)) {
    request->invoiceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->invoiceInfo, make_shared<string>("invoice_info"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<HotelOrderCreateRequestOccupantInfoList>>(tmpReq->occupantInfoList)) {
    request->occupantInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->occupantInfoList, make_shared<string>("occupant_info_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<HotelOrderCreateRequestPromotionInfo>(tmpReq->promotionInfo)) {
    request->promotionInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->promotionInfo, make_shared<string>("promotion_info"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    body->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkIn)) {
    body->insert(pair<string, string>("check_in", *request->checkIn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkOut)) {
    body->insert(pair<string, string>("check_out", *request->checkOut));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contractEmail)) {
    body->insert(pair<string, string>("contract_email", *request->contractEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contractName)) {
    body->insert(pair<string, string>("contract_name", *request->contractName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contractPhone)) {
    body->insert(pair<string, string>("contract_phone", *request->contractPhone));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->corpPayPrice)) {
    body->insert(pair<string, long>("corp_pay_price", *request->corpPayPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invoiceInfoShrink)) {
    body->insert(pair<string, string>("invoice_info", *request->invoiceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    body->insert(pair<string, long>("item_id", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itineraryNo)) {
    body->insert(pair<string, string>("itinerary_no", *request->itineraryNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->occupantInfoListShrink)) {
    body->insert(pair<string, string>("occupant_info_list", *request->occupantInfoListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personPayPrice)) {
    body->insert(pair<string, long>("person_pay_price", *request->personPayPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionInfoShrink)) {
    body->insert(pair<string, string>("promotion_info", *request->promotionInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ratePlanId)) {
    body->insert(pair<string, long>("rate_plan_id", *request->ratePlanId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomId)) {
    body->insert(pair<string, long>("room_id", *request->roomId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomNum)) {
    body->insert(pair<string, long>("room_num", *request->roomNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sellerId)) {
    body->insert(pair<string, long>("seller_id", *request->sellerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shid)) {
    body->insert(pair<string, long>("shid", *request->shid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalOrderPrice)) {
    body->insert(pair<string, long>("total_order_price", *request->totalOrderPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validateResKey)) {
    body->insert(pair<string, string>("validate_res_key", *request->validateResKey));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderCreate"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/orders/action/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderCreateResponse(callApi(params, req, runtime));
}

HotelOrderCreateResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderCreate(shared_ptr<HotelOrderCreateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderCreateHeaders> headers = make_shared<HotelOrderCreateHeaders>();
  return hotelOrderCreateWithOptions(request, headers, runtime);
}

HotelOrderDetailInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderDetailInfoWithOptions(shared_ptr<HotelOrderDetailInfoRequest> request, shared_ptr<HotelOrderDetailInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderDetailInfo"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/orders/action/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderDetailInfoResponse(callApi(params, req, runtime));
}

HotelOrderDetailInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderDetailInfo(shared_ptr<HotelOrderDetailInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderDetailInfoHeaders> headers = make_shared<HotelOrderDetailInfoHeaders>();
  return hotelOrderDetailInfoWithOptions(request, headers, runtime);
}

HotelOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderListQueryWithOptions(shared_ptr<HotelOrderListQueryRequest> request, shared_ptr<HotelOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

HotelOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderListQuery(shared_ptr<HotelOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderListQueryHeaders> headers = make_shared<HotelOrderListQueryHeaders>();
  return hotelOrderListQueryWithOptions(request, headers, runtime);
}

HotelOrderPayResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderPayWithOptions(shared_ptr<HotelOrderPayRequest> request, shared_ptr<HotelOrderPayHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->btripOrderId)) {
    body->insert(pair<string, long>("btrip_order_id", *request->btripOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    body->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->companyPayFee)) {
    body->insert(pair<string, long>("company_pay_fee", *request->companyPayFee));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personPayFee)) {
    body->insert(pair<string, long>("person_pay_fee", *request->personPayFee));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPayAccount)) {
    body->insert(pair<string, string>("third_pay_account", *request->thirdPayAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdTradeNo)) {
    body->insert(pair<string, string>("third_trade_no", *request->thirdTradeNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalPrice)) {
    body->insert(pair<string, long>("total_price", *request->totalPrice));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderPay"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/orders/action/pay"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderPayResponse(callApi(params, req, runtime));
}

HotelOrderPayResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderPay(shared_ptr<HotelOrderPayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderPayHeaders> headers = make_shared<HotelOrderPayHeaders>();
  return hotelOrderPayWithOptions(request, headers, runtime);
}

HotelOrderPreValidateResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderPreValidateWithOptions(shared_ptr<HotelOrderPreValidateRequest> tmpReq, shared_ptr<HotelOrderPreValidateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HotelOrderPreValidateShrinkRequest> request = make_shared<HotelOrderPreValidateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<HotelOrderPreValidateRequestDailyList>>(tmpReq->dailyList)) {
    request->dailyListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dailyList, make_shared<string>("daily_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<HotelOrderPreValidateRequestOccupantInfoList>>(tmpReq->occupantInfoList)) {
    request->occupantInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->occupantInfoList, make_shared<string>("occupant_info_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkIn)) {
    query->insert(pair<string, string>("check_in", *request->checkIn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkOut)) {
    query->insert(pair<string, string>("check_out", *request->checkOut));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dailyListShrink)) {
    query->insert(pair<string, string>("daily_list", *request->dailyListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("item_id", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numberOfAdultsPerRoom)) {
    query->insert(pair<string, long>("number_of_adults_per_room", *request->numberOfAdultsPerRoom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->occupantInfoListShrink)) {
    query->insert(pair<string, string>("occupant_info_list", *request->occupantInfoListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ratePlanId)) {
    query->insert(pair<string, long>("rate_plan_id", *request->ratePlanId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomId)) {
    query->insert(pair<string, long>("room_id", *request->roomId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomNum)) {
    query->insert(pair<string, long>("room_num", *request->roomNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->searchRoomPrice)) {
    query->insert(pair<string, long>("search_room_price", *request->searchRoomPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sellerId)) {
    query->insert(pair<string, long>("seller_id", *request->sellerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shid)) {
    query->insert(pair<string, long>("shid", *request->shid));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderPreValidate"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/orders/action/pre-validate"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderPreValidateResponse(callApi(params, req, runtime));
}

HotelOrderPreValidateResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderPreValidate(shared_ptr<HotelOrderPreValidateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderPreValidateHeaders> headers = make_shared<HotelOrderPreValidateHeaders>();
  return hotelOrderPreValidateWithOptions(request, headers, runtime);
}

HotelOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderQueryWithOptions(shared_ptr<HotelOrderQueryRequest> request, shared_ptr<HotelOrderQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
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
    {"action", boost::any(string("HotelOrderQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/hotel/v1/order"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderQueryResponse(callApi(params, req, runtime));
}

HotelOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderQuery(shared_ptr<HotelOrderQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderQueryHeaders> headers = make_shared<HotelOrderQueryHeaders>();
  return hotelOrderQueryWithOptions(request, headers, runtime);
}

HotelRoomInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelRoomInfoWithOptions(shared_ptr<HotelRoomInfoRequest> tmpReq, shared_ptr<HotelRoomInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HotelRoomInfoShrinkRequest> request = make_shared<HotelRoomInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->roomIds)) {
    request->roomIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roomIds, make_shared<string>("room_ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roomIdsShrink)) {
    query->insert(pair<string, string>("room_ids", *request->roomIdsShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelRoomInfo"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/room-infos"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelRoomInfoResponse(callApi(params, req, runtime));
}

HotelRoomInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelRoomInfo(shared_ptr<HotelRoomInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelRoomInfoHeaders> headers = make_shared<HotelRoomInfoHeaders>();
  return hotelRoomInfoWithOptions(request, headers, runtime);
}

HotelSearchResponse Alibabacloud_BtripOpen20220520::Client::hotelSearchWithOptions(shared_ptr<HotelSearchRequest> tmpReq, shared_ptr<HotelSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HotelSearchShrinkRequest> request = make_shared<HotelSearchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->brandCode)) {
    request->brandCodeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->brandCode, make_shared<string>("brand_code"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->shids)) {
    request->shidsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->shids, make_shared<string>("shids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adultNum)) {
    query->insert(pair<string, string>("adult_num", *request->adultNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->brandCodeShrink)) {
    query->insert(pair<string, string>("brand_code", *request->brandCodeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkInDate)) {
    query->insert(pair<string, string>("check_in_date", *request->checkInDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkOutDate)) {
    query->insert(pair<string, string>("check_out_date", *request->checkOutDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cityCode)) {
    query->insert(pair<string, string>("city_code", *request->cityCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dir)) {
    query->insert(pair<string, long>("dir", *request->dir));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->distance)) {
    query->insert(pair<string, long>("distance", *request->distance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->districtCode)) {
    query->insert(pair<string, string>("district_code", *request->districtCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelStar)) {
    query->insert(pair<string, string>("hotel_star", *request->hotelStar));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isProtocol)) {
    query->insert(pair<string, bool>("is_protocol", *request->isProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWords)) {
    query->insert(pair<string, string>("key_words", *request->keyWords));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    query->insert(pair<string, string>("location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxPrice)) {
    query->insert(pair<string, double>("max_price", *request->maxPrice));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->minPrice)) {
    query->insert(pair<string, double>("min_price", *request->minPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->payOverType)) {
    query->insert(pair<string, long>("pay_over_type", *request->payOverType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->paymentType)) {
    query->insert(pair<string, long>("payment_type", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shidsShrink)) {
    query->insert(pair<string, string>("shids", *request->shidsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sortCode)) {
    query->insert(pair<string, long>("sort_code", *request->sortCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->superMan)) {
    query->insert(pair<string, long>("super_man", *request->superMan));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/hotels/action/search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelSearchResponse(callApi(params, req, runtime));
}

HotelSearchResponse Alibabacloud_BtripOpen20220520::Client::hotelSearch(shared_ptr<HotelSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelSearchHeaders> headers = make_shared<HotelSearchHeaders>();
  return hotelSearchWithOptions(request, headers, runtime);
}

HotelStaticInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelStaticInfoWithOptions(shared_ptr<HotelStaticInfoRequest> tmpReq, shared_ptr<HotelStaticInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HotelStaticInfoShrinkRequest> request = make_shared<HotelStaticInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->hotelIds)) {
    request->hotelIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotelIds, make_shared<string>("hotel_ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelIdsShrink)) {
    query->insert(pair<string, string>("hotel_ids", *request->hotelIdsShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelStaticInfo"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/static-infos"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelStaticInfoResponse(callApi(params, req, runtime));
}

HotelStaticInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelStaticInfo(shared_ptr<HotelStaticInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelStaticInfoHeaders> headers = make_shared<HotelStaticInfoHeaders>();
  return hotelStaticInfoWithOptions(request, headers, runtime);
}

IeFlightBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::ieFlightBillSettlementQueryWithOptions(shared_ptr<IeFlightBillSettlementQueryRequest> request, shared_ptr<IeFlightBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("IeFlightBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ie-flight/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IeFlightBillSettlementQueryResponse(callApi(params, req, runtime));
}

IeFlightBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::ieFlightBillSettlementQuery(shared_ptr<IeFlightBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IeFlightBillSettlementQueryHeaders> headers = make_shared<IeFlightBillSettlementQueryHeaders>();
  return ieFlightBillSettlementQueryWithOptions(request, headers, runtime);
}

InsInvoiceScanQueryResponse Alibabacloud_BtripOpen20220520::Client::insInvoiceScanQueryWithOptions(shared_ptr<InsInvoiceScanQueryRequest> request, shared_ptr<InsInvoiceScanQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billDate)) {
    query->insert(pair<string, string>("bill_date", *request->billDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->billId)) {
    query->insert(pair<string, long>("bill_id", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->invoiceSubTaskId)) {
    query->insert(pair<string, long>("invoice_sub_task_id", *request->invoiceSubTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
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
    {"action", boost::any(string("InsInvoiceScanQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/scan/v1/ins-invoice"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsInvoiceScanQueryResponse(callApi(params, req, runtime));
}

InsInvoiceScanQueryResponse Alibabacloud_BtripOpen20220520::Client::insInvoiceScanQuery(shared_ptr<InsInvoiceScanQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsInvoiceScanQueryHeaders> headers = make_shared<InsInvoiceScanQueryHeaders>();
  return insInvoiceScanQueryWithOptions(request, headers, runtime);
}

InvoiceAddResponse Alibabacloud_BtripOpen20220520::Client::invoiceAddWithOptions(shared_ptr<InvoiceAddRequest> request, shared_ptr<InvoiceAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

InvoiceAddResponse Alibabacloud_BtripOpen20220520::Client::invoiceAdd(shared_ptr<InvoiceAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceAddHeaders> headers = make_shared<InvoiceAddHeaders>();
  return invoiceAddWithOptions(request, headers, runtime);
}

InvoiceDeleteResponse Alibabacloud_BtripOpen20220520::Client::invoiceDeleteWithOptions(shared_ptr<InvoiceDeleteRequest> request, shared_ptr<InvoiceDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    query->insert(pair<string, string>("third_part_id", *request->thirdPartId));
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

InvoiceDeleteResponse Alibabacloud_BtripOpen20220520::Client::invoiceDelete(shared_ptr<InvoiceDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceDeleteHeaders> headers = make_shared<InvoiceDeleteHeaders>();
  return invoiceDeleteWithOptions(request, headers, runtime);
}

InvoiceModifyResponse Alibabacloud_BtripOpen20220520::Client::invoiceModifyWithOptions(shared_ptr<InvoiceModifyRequest> request, shared_ptr<InvoiceModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

InvoiceModifyResponse Alibabacloud_BtripOpen20220520::Client::invoiceModify(shared_ptr<InvoiceModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceModifyHeaders> headers = make_shared<InvoiceModifyHeaders>();
  return invoiceModifyWithOptions(request, headers, runtime);
}

InvoiceRuleAddResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleAddWithOptions(shared_ptr<InvoiceRuleAddRequest> tmpReq, shared_ptr<InvoiceRuleAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InvoiceRuleAddShrinkRequest> request = make_shared<InvoiceRuleAddShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<InvoiceRuleAddRequestEntities>>(tmpReq->entities)) {
    request->entitiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entities, make_shared<string>("entities"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entitiesShrink)) {
    body->insert(pair<string, string>("entities", *request->entitiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceRuleAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/invoice-rule"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceRuleAddResponse(callApi(params, req, runtime));
}

InvoiceRuleAddResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleAdd(shared_ptr<InvoiceRuleAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceRuleAddHeaders> headers = make_shared<InvoiceRuleAddHeaders>();
  return invoiceRuleAddWithOptions(request, headers, runtime);
}

InvoiceRuleDeleteResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleDeleteWithOptions(shared_ptr<InvoiceRuleDeleteRequest> tmpReq, shared_ptr<InvoiceRuleDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InvoiceRuleDeleteShrinkRequest> request = make_shared<InvoiceRuleDeleteShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<InvoiceRuleDeleteRequestEntities>>(tmpReq->entities)) {
    request->entitiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entities, make_shared<string>("entities"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->delAll)) {
    query->insert(pair<string, bool>("del_all", *request->delAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entitiesShrink)) {
    query->insert(pair<string, string>("entities", *request->entitiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    query->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceRuleDelete"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/invoice-rule"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceRuleDeleteResponse(callApi(params, req, runtime));
}

InvoiceRuleDeleteResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleDelete(shared_ptr<InvoiceRuleDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceRuleDeleteHeaders> headers = make_shared<InvoiceRuleDeleteHeaders>();
  return invoiceRuleDeleteWithOptions(request, headers, runtime);
}

InvoiceRuleSaveResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleSaveWithOptions(shared_ptr<InvoiceRuleSaveRequest> tmpReq, shared_ptr<InvoiceRuleSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

InvoiceRuleSaveResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleSave(shared_ptr<InvoiceRuleSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceRuleSaveHeaders> headers = make_shared<InvoiceRuleSaveHeaders>();
  return invoiceRuleSaveWithOptions(request, headers, runtime);
}

InvoiceSearchResponse Alibabacloud_BtripOpen20220520::Client::invoiceSearchWithOptions(shared_ptr<InvoiceSearchRequest> request, shared_ptr<InvoiceSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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

InvoiceSearchResponse Alibabacloud_BtripOpen20220520::Client::invoiceSearch(shared_ptr<InvoiceSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceSearchHeaders> headers = make_shared<InvoiceSearchHeaders>();
  return invoiceSearchWithOptions(request, headers, runtime);
}

IsvRuleSaveResponse Alibabacloud_BtripOpen20220520::Client::isvRuleSaveWithOptions(shared_ptr<IsvRuleSaveRequest> request, shared_ptr<IsvRuleSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bookType)) {
    body->insert(pair<string, string>("book_type", *request->bookType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
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
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IsvRuleSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/v1/rule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IsvRuleSaveResponse(callApi(params, req, runtime));
}

IsvRuleSaveResponse Alibabacloud_BtripOpen20220520::Client::isvRuleSave(shared_ptr<IsvRuleSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IsvRuleSaveHeaders> headers = make_shared<IsvRuleSaveHeaders>();
  return isvRuleSaveWithOptions(request, headers, runtime);
}

IsvUserSaveResponse Alibabacloud_BtripOpen20220520::Client::isvUserSaveWithOptions(shared_ptr<IsvUserSaveRequest> tmpReq, shared_ptr<IsvUserSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

IsvUserSaveResponse Alibabacloud_BtripOpen20220520::Client::isvUserSave(shared_ptr<IsvUserSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IsvUserSaveHeaders> headers = make_shared<IsvUserSaveHeaders>();
  return isvUserSaveWithOptions(request, headers, runtime);
}

MonthBillConfirmResponse Alibabacloud_BtripOpen20220520::Client::monthBillConfirmWithOptions(shared_ptr<MonthBillConfirmRequest> request, shared_ptr<MonthBillConfirmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->mailBillDate)) {
    body->insert(pair<string, long>("mail_bill_date", *request->mailBillDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MonthBillConfirm"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/bill/v1/status/action/confirm"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MonthBillConfirmResponse(callApi(params, req, runtime));
}

MonthBillConfirmResponse Alibabacloud_BtripOpen20220520::Client::monthBillConfirm(shared_ptr<MonthBillConfirmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<MonthBillConfirmHeaders> headers = make_shared<MonthBillConfirmHeaders>();
  return monthBillConfirmWithOptions(request, headers, runtime);
}

MonthBillGetResponse Alibabacloud_BtripOpen20220520::Client::monthBillGetWithOptions(shared_ptr<MonthBillGetRequest> request, shared_ptr<MonthBillGetHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billMonth)) {
    query->insert(pair<string, string>("bill_month", *request->billMonth));
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

MonthBillGetResponse Alibabacloud_BtripOpen20220520::Client::monthBillGet(shared_ptr<MonthBillGetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<MonthBillGetHeaders> headers = make_shared<MonthBillGetHeaders>();
  return monthBillGetWithOptions(request, headers, runtime);
}

ProjectAddResponse Alibabacloud_BtripOpen20220520::Client::projectAddWithOptions(shared_ptr<ProjectAddRequest> request, shared_ptr<ProjectAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

ProjectAddResponse Alibabacloud_BtripOpen20220520::Client::projectAdd(shared_ptr<ProjectAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ProjectAddHeaders> headers = make_shared<ProjectAddHeaders>();
  return projectAddWithOptions(request, headers, runtime);
}

ProjectDeleteResponse Alibabacloud_BtripOpen20220520::Client::projectDeleteWithOptions(shared_ptr<ProjectDeleteRequest> request, shared_ptr<ProjectDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    query->insert(pair<string, string>("third_part_id", *request->thirdPartId));
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

ProjectDeleteResponse Alibabacloud_BtripOpen20220520::Client::projectDelete(shared_ptr<ProjectDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ProjectDeleteHeaders> headers = make_shared<ProjectDeleteHeaders>();
  return projectDeleteWithOptions(request, headers, runtime);
}

ProjectModifyResponse Alibabacloud_BtripOpen20220520::Client::projectModifyWithOptions(shared_ptr<ProjectModifyRequest> request, shared_ptr<ProjectModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
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

ProjectModifyResponse Alibabacloud_BtripOpen20220520::Client::projectModify(shared_ptr<ProjectModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ProjectModifyHeaders> headers = make_shared<ProjectModifyHeaders>();
  return projectModifyWithOptions(request, headers, runtime);
}

QueryReimbursementOrderResponse Alibabacloud_BtripOpen20220520::Client::queryReimbursementOrderWithOptions(shared_ptr<QueryReimbursementOrderRequest> request, shared_ptr<QueryReimbursementOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reimbOrderNo)) {
    query->insert(pair<string, string>("reimb_order_no", *request->reimbOrderNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpId)) {
    query->insert(pair<string, string>("sub_corp_id", *request->subCorpId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryReimbursementOrder"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/reimbursement/v1/order"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryReimbursementOrderResponse(callApi(params, req, runtime));
}

QueryReimbursementOrderResponse Alibabacloud_BtripOpen20220520::Client::queryReimbursementOrder(shared_ptr<QueryReimbursementOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryReimbursementOrderHeaders> headers = make_shared<QueryReimbursementOrderHeaders>();
  return queryReimbursementOrderWithOptions(request, headers, runtime);
}

SyncSingleUserResponse Alibabacloud_BtripOpen20220520::Client::syncSingleUserWithOptions(shared_ptr<SyncSingleUserRequest> tmpReq, shared_ptr<SyncSingleUserHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SyncSingleUserShrinkRequest> request = make_shared<SyncSingleUserShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->thirdDepartIdList)) {
    request->thirdDepartIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->thirdDepartIdList, make_shared<string>("third_depart_id_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobNo)) {
    body->insert(pair<string, string>("job_no", *request->jobNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->leaveStatus)) {
    body->insert(pair<string, long>("leave_status", *request->leaveStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managerUserId)) {
    body->insert(pair<string, string>("manager_user_id", *request->managerUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->position)) {
    body->insert(pair<string, string>("position", *request->position));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->positionLevel)) {
    body->insert(pair<string, string>("position_level", *request->positionLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realNameEn)) {
    body->insert(pair<string, string>("real_name_en", *request->realNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdDepartIdListShrink)) {
    body->insert(pair<string, string>("third_depart_id_list", *request->thirdDepartIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("user_name", *request->userName));
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
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncSingleUser"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/v1/single-user/action/sync"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncSingleUserResponse(callApi(params, req, runtime));
}

SyncSingleUserResponse Alibabacloud_BtripOpen20220520::Client::syncSingleUser(shared_ptr<SyncSingleUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SyncSingleUserHeaders> headers = make_shared<SyncSingleUserHeaders>();
  return syncSingleUserWithOptions(request, headers, runtime);
}

SyncThirdUserMappingResponse Alibabacloud_BtripOpen20220520::Client::syncThirdUserMappingWithOptions(shared_ptr<SyncThirdUserMappingRequest> request, shared_ptr<SyncThirdUserMappingHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdChannelType)) {
    body->insert(pair<string, string>("third_channel_type", *request->thirdChannelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdUserId)) {
    body->insert(pair<string, string>("third_user_id", *request->thirdUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncThirdUserMapping"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/v1/third-users/action/mapping"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncThirdUserMappingResponse(callApi(params, req, runtime));
}

SyncThirdUserMappingResponse Alibabacloud_BtripOpen20220520::Client::syncThirdUserMapping(shared_ptr<SyncThirdUserMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SyncThirdUserMappingHeaders> headers = make_shared<SyncThirdUserMappingHeaders>();
  return syncThirdUserMappingWithOptions(request, headers, runtime);
}

TicketChangingApplyResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingApplyWithOptions(shared_ptr<TicketChangingApplyRequest> tmpReq, shared_ptr<TicketChangingApplyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TicketChangingApplyShrinkRequest> request = make_shared<TicketChangingApplyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<TicketChangingApplyRequestModifyFlightInfoList>>(tmpReq->modifyFlightInfoList)) {
    request->modifyFlightInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->modifyFlightInfoList, make_shared<string>("modify_flight_info_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disSubOrderId)) {
    body->insert(pair<string, string>("dis_sub_order_id", *request->disSubOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isVoluntary)) {
    body->insert(pair<string, long>("is_voluntary", *request->isVoluntary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyFlightInfoListShrink)) {
    body->insert(pair<string, string>("modify_flight_info_list", *request->modifyFlightInfoListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otaItemId)) {
    body->insert(pair<string, string>("ota_item_id", *request->otaItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("session_id", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->whetherRetry)) {
    body->insert(pair<string, bool>("whether_retry", *request->whetherRetry));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketChangingApply"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/ticket-changing/action/apply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketChangingApplyResponse(callApi(params, req, runtime));
}

TicketChangingApplyResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingApply(shared_ptr<TicketChangingApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketChangingApplyHeaders> headers = make_shared<TicketChangingApplyHeaders>();
  return ticketChangingApplyWithOptions(request, headers, runtime);
}

TicketChangingCancelResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingCancelWithOptions(shared_ptr<TicketChangingCancelRequest> request, shared_ptr<TicketChangingCancelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disSubOrderId)) {
    query->insert(pair<string, string>("dis_sub_order_id", *request->disSubOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketChangingCancel"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/ticket-changing/action/cancel"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketChangingCancelResponse(callApi(params, req, runtime));
}

TicketChangingCancelResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingCancel(shared_ptr<TicketChangingCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketChangingCancelHeaders> headers = make_shared<TicketChangingCancelHeaders>();
  return ticketChangingCancelWithOptions(request, headers, runtime);
}

TicketChangingDetailResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingDetailWithOptions(shared_ptr<TicketChangingDetailRequest> request, shared_ptr<TicketChangingDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disSubOrderId)) {
    query->insert(pair<string, string>("dis_sub_order_id", *request->disSubOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketChangingDetail"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/ticket-changing/action/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketChangingDetailResponse(callApi(params, req, runtime));
}

TicketChangingDetailResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingDetail(shared_ptr<TicketChangingDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketChangingDetailHeaders> headers = make_shared<TicketChangingDetailHeaders>();
  return ticketChangingDetailWithOptions(request, headers, runtime);
}

TicketChangingEnquiryResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingEnquiryWithOptions(shared_ptr<TicketChangingEnquiryRequest> request, shared_ptr<TicketChangingEnquiryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCity)) {
    query->insert(pair<string, string>("arr_city", *request->arrCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCity)) {
    query->insert(pair<string, string>("dep_city", *request->depCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isVoluntary)) {
    query->insert(pair<string, long>("is_voluntary", *request->isVoluntary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyDepartDate)) {
    query->insert(pair<string, string>("modify_depart_date", *request->modifyDepartDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyFlightNo)) {
    query->insert(pair<string, string>("modify_flight_no", *request->modifyFlightNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("session_id", *request->sessionId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketChangingEnquiry"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/ticket-changing/action/enquiry"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketChangingEnquiryResponse(callApi(params, req, runtime));
}

TicketChangingEnquiryResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingEnquiry(shared_ptr<TicketChangingEnquiryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketChangingEnquiryHeaders> headers = make_shared<TicketChangingEnquiryHeaders>();
  return ticketChangingEnquiryWithOptions(request, headers, runtime);
}

TicketChangingFlightListResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingFlightListWithOptions(shared_ptr<TicketChangingFlightListRequest> tmpReq, shared_ptr<TicketChangingFlightListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TicketChangingFlightListShrinkRequest> request = make_shared<TicketChangingFlightListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<TicketChangingFlightListRequestTravelerInfoList>>(tmpReq->travelerInfoList)) {
    request->travelerInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelerInfoList, make_shared<string>("traveler_info_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCity)) {
    query->insert(pair<string, string>("arr_city", *request->arrCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCity)) {
    query->insert(pair<string, string>("dep_city", *request->depCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDate)) {
    query->insert(pair<string, string>("dep_date", *request->depDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isVoluntary)) {
    query->insert(pair<string, long>("is_voluntary", *request->isVoluntary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerInfoListShrink)) {
    query->insert(pair<string, string>("traveler_info_list", *request->travelerInfoListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketChangingFlightList"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/huge/dtb-flight/v1/ticket-changing-flight/action/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketChangingFlightListResponse(callApi(params, req, runtime));
}

TicketChangingFlightListResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingFlightList(shared_ptr<TicketChangingFlightListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketChangingFlightListHeaders> headers = make_shared<TicketChangingFlightListHeaders>();
  return ticketChangingFlightListWithOptions(request, headers, runtime);
}

TicketChangingPayResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingPayWithOptions(shared_ptr<TicketChangingPayRequest> tmpReq, shared_ptr<TicketChangingPayHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TicketChangingPayShrinkRequest> request = make_shared<TicketChangingPayShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extra)) {
    request->extraShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extra, make_shared<string>("extra"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->corpPayPrice)) {
    body->insert(pair<string, long>("corp_pay_price", *request->corpPayPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disSubOrderId)) {
    body->insert(pair<string, string>("dis_sub_order_id", *request->disSubOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraShrink)) {
    body->insert(pair<string, string>("extra", *request->extraShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personalPayPrice)) {
    body->insert(pair<string, long>("personal_pay_price", *request->personalPayPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalPayPrice)) {
    body->insert(pair<string, long>("total_pay_price", *request->totalPayPrice));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketChangingPay"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/ticket-changing/action/pay"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketChangingPayResponse(callApi(params, req, runtime));
}

TicketChangingPayResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingPay(shared_ptr<TicketChangingPayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketChangingPayHeaders> headers = make_shared<TicketChangingPayHeaders>();
  return ticketChangingPayWithOptions(request, headers, runtime);
}

TrainBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::trainBillSettlementQueryWithOptions(shared_ptr<TrainBillSettlementQueryRequest> request, shared_ptr<TrainBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

TrainBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::trainBillSettlementQuery(shared_ptr<TrainBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainBillSettlementQueryHeaders> headers = make_shared<TrainBillSettlementQueryHeaders>();
  return trainBillSettlementQueryWithOptions(request, headers, runtime);
}

TrainExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::trainExceedApplyQueryWithOptions(shared_ptr<TrainExceedApplyQueryRequest> request, shared_ptr<TrainExceedApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
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

TrainExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::trainExceedApplyQuery(shared_ptr<TrainExceedApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainExceedApplyQueryHeaders> headers = make_shared<TrainExceedApplyQueryHeaders>();
  return trainExceedApplyQueryWithOptions(request, headers, runtime);
}

TrainOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderListQueryWithOptions(shared_ptr<TrainOrderListQueryRequest> request, shared_ptr<TrainOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

TrainOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderListQuery(shared_ptr<TrainOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainOrderListQueryHeaders> headers = make_shared<TrainOrderListQueryHeaders>();
  return trainOrderListQueryWithOptions(request, headers, runtime);
}

TrainOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderQueryWithOptions(shared_ptr<TrainOrderQueryRequest> request, shared_ptr<TrainOrderQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
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

TrainOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderQuery(shared_ptr<TrainOrderQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainOrderQueryHeaders> headers = make_shared<TrainOrderQueryHeaders>();
  return trainOrderQueryWithOptions(request, headers, runtime);
}

TrainOrderQueryV2Response Alibabacloud_BtripOpen20220520::Client::trainOrderQueryV2WithOptions(shared_ptr<TrainOrderQueryV2Request> request, shared_ptr<TrainOrderQueryV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainOrderQueryV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v2/order"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainOrderQueryV2Response(callApi(params, req, runtime));
}

TrainOrderQueryV2Response Alibabacloud_BtripOpen20220520::Client::trainOrderQueryV2(shared_ptr<TrainOrderQueryV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainOrderQueryV2Headers> headers = make_shared<TrainOrderQueryV2Headers>();
  return trainOrderQueryV2WithOptions(request, headers, runtime);
}

TrainStationSearchResponse Alibabacloud_BtripOpen20220520::Client::trainStationSearchWithOptions(shared_ptr<TrainStationSearchRequest> request, shared_ptr<TrainStationSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
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
    {"action", boost::any(string("TrainStationSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/city/v1/train"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainStationSearchResponse(callApi(params, req, runtime));
}

TrainStationSearchResponse Alibabacloud_BtripOpen20220520::Client::trainStationSearch(shared_ptr<TrainStationSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainStationSearchHeaders> headers = make_shared<TrainStationSearchHeaders>();
  return trainStationSearchWithOptions(request, headers, runtime);
}

TrainTicketScanQueryResponse Alibabacloud_BtripOpen20220520::Client::trainTicketScanQueryWithOptions(shared_ptr<TrainTicketScanQueryRequest> request, shared_ptr<TrainTicketScanQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billDate)) {
    query->insert(pair<string, string>("bill_date", *request->billDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->billId)) {
    query->insert(pair<string, long>("bill_id", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->invoiceSubTaskId)) {
    query->insert(pair<string, long>("invoice_sub_task_id", *request->invoiceSubTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
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
    {"action", boost::any(string("TrainTicketScanQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/scan/v1/train-ticket"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainTicketScanQueryResponse(callApi(params, req, runtime));
}

TrainTicketScanQueryResponse Alibabacloud_BtripOpen20220520::Client::trainTicketScanQuery(shared_ptr<TrainTicketScanQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainTicketScanQueryHeaders> headers = make_shared<TrainTicketScanQueryHeaders>();
  return trainTicketScanQueryWithOptions(request, headers, runtime);
}

UserQueryResponse Alibabacloud_BtripOpen20220520::Client::userQueryWithOptions(shared_ptr<UserQueryRequest> request, shared_ptr<UserQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedTimeGreaterOrEqualThan)) {
    query->insert(pair<string, string>("modified_time_greater_or_equal_than", *request->modifiedTimeGreaterOrEqualThan));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageToken)) {
    query->insert(pair<string, string>("page_token", *request->pageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartJobNo)) {
    query->insert(pair<string, string>("third_part_job_no", *request->thirdPartJobNo));
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

UserQueryResponse Alibabacloud_BtripOpen20220520::Client::userQuery(shared_ptr<UserQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UserQueryHeaders> headers = make_shared<UserQueryHeaders>();
  return userQueryWithOptions(request, headers, runtime);
}

VatInvoiceScanQueryResponse Alibabacloud_BtripOpen20220520::Client::vatInvoiceScanQueryWithOptions(shared_ptr<VatInvoiceScanQueryRequest> request, shared_ptr<VatInvoiceScanQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billDate)) {
    query->insert(pair<string, string>("bill_date", *request->billDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->billId)) {
    query->insert(pair<string, long>("bill_id", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->invoiceSubTaskId)) {
    query->insert(pair<string, long>("invoice_sub_task_id", *request->invoiceSubTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
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
    {"action", boost::any(string("VatInvoiceScanQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/scan/v1/vat-invoice"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VatInvoiceScanQueryResponse(callApi(params, req, runtime));
}

VatInvoiceScanQueryResponse Alibabacloud_BtripOpen20220520::Client::vatInvoiceScanQuery(shared_ptr<VatInvoiceScanQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<VatInvoiceScanQueryHeaders> headers = make_shared<VatInvoiceScanQueryHeaders>();
  return vatInvoiceScanQueryWithOptions(request, headers, runtime);
}

WaitApplyInvoiceTaskDetailQueryResponse Alibabacloud_BtripOpen20220520::Client::waitApplyInvoiceTaskDetailQueryWithOptions(shared_ptr<WaitApplyInvoiceTaskDetailQueryRequest> request, shared_ptr<WaitApplyInvoiceTaskDetailQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billDate)) {
    query->insert(pair<string, string>("bill_date", *request->billDate));
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
    {"action", boost::any(string("WaitApplyInvoiceTaskDetailQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/wait-apply-task"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WaitApplyInvoiceTaskDetailQueryResponse(callApi(params, req, runtime));
}

WaitApplyInvoiceTaskDetailQueryResponse Alibabacloud_BtripOpen20220520::Client::waitApplyInvoiceTaskDetailQuery(shared_ptr<WaitApplyInvoiceTaskDetailQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<WaitApplyInvoiceTaskDetailQueryHeaders> headers = make_shared<WaitApplyInvoiceTaskDetailQueryHeaders>();
  return waitApplyInvoiceTaskDetailQueryWithOptions(request, headers, runtime);
}

