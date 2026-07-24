#include <darabonba/Core.hpp>
#include <alibabacloud/AirticketOpen20230117.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AirticketOpen20230117::Models;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{

AlibabaCloud::AirticketOpen20230117::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("airticketopen", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Queries the account fund flow list.
 *
 * @param request AccountFlowListRequest
 * @param headers AccountFlowListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AccountFlowListResponse
 */
AccountFlowListResponse Client::accountFlowListWithOptions(const AccountFlowListRequest &request, const AccountFlowListHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDayNum()) {
    query["day_num"] = request.getDayNum();
  }

  if (!!request.hasPageIndex()) {
    query["page_index"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  if (!!request.hasUtcBeginTime()) {
    query["utc_begin_time"] = request.getUtcBeginTime();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AccountFlowList"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/account/flow-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AccountFlowListResponse>();
}

/**
 * @summary Queries the account fund flow list.
 *
 * @param request AccountFlowListRequest
 * @return AccountFlowListResponse
 */
AccountFlowListResponse Client::accountFlowList(const AccountFlowListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AccountFlowListHeaders headers = AccountFlowListHeaders();
  return accountFlowListWithOptions(request, headers, runtime);
}

/**
 * @summary Recommends ancillary products.
 *
 * @param request AncillarySuggestRequest
 * @param headers AncillarySuggestHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AncillarySuggestResponse
 */
AncillarySuggestResponse Client::ancillarySuggestWithOptions(const AncillarySuggestRequest &request, const AncillarySuggestHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSolutionId()) {
    body["solution_id"] = request.getSolutionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AncillarySuggest"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/ancillary/action-suggest")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AncillarySuggestResponse>();
}

/**
 * @summary Recommends ancillary products.
 *
 * @param request AncillarySuggestRequest
 * @return AncillarySuggestResponse
 */
AncillarySuggestResponse Client::ancillarySuggest(const AncillarySuggestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AncillarySuggestHeaders headers = AncillarySuggestHeaders();
  return ancillarySuggestWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a booking order.
 *
 * @param tmpReq BookRequest
 * @param headers BookHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return BookResponse
 */
BookResponse Client::bookWithOptions(const BookRequest &tmpReq, const BookHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BookShrinkRequest request = BookShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContact()) {
    request.setContactShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContact(), "contact", "json"));
  }

  if (!!tmpReq.hasPassengerAncillaryPurchaseMapList()) {
    request.setPassengerAncillaryPurchaseMapListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPassengerAncillaryPurchaseMapList(), "passenger_ancillary_purchase_map_list", "json"));
  }

  if (!!tmpReq.hasPassengerList()) {
    request.setPassengerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPassengerList(), "passenger_list", "json"));
  }

  json body = {};
  if (!!request.hasContactShrink()) {
    body["contact"] = request.getContactShrink();
  }

  if (!!request.hasOutOrderNum()) {
    body["out_order_num"] = request.getOutOrderNum();
  }

  if (!!request.hasPassengerAncillaryPurchaseMapListShrink()) {
    body["passenger_ancillary_purchase_map_list"] = request.getPassengerAncillaryPurchaseMapListShrink();
  }

  if (!!request.hasPassengerListShrink()) {
    body["passenger_list"] = request.getPassengerListShrink();
  }

  if (!!request.hasSolutionId()) {
    body["solution_id"] = request.getSolutionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Book"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/trade/action-book")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BookResponse>();
}

/**
 * @summary Creates a booking order.
 *
 * @param request BookRequest
 * @return BookResponse
 */
BookResponse Client::book(const BookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  BookHeaders headers = BookHeaders();
  return bookWithOptions(request, headers, runtime);
}

/**
 * @summary Cancels an unpaid order.
 *
 * @param request CancelRequest
 * @param headers CancelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelResponse
 */
CancelResponse Client::cancelWithOptions(const CancelRequest &request, const CancelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOrderNum()) {
    body["order_num"] = request.getOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Cancel"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/trade/action-cancel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelResponse>();
}

/**
 * @summary Cancels an unpaid order.
 *
 * @param request CancelRequest
 * @return CancelResponse
 */
CancelResponse Client::cancel(const CancelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CancelHeaders headers = CancelHeaders();
  return cancelWithOptions(request, headers, runtime);
}

/**
 * @summary Submits a change application.
 *
 * @param tmpReq ChangeApplyRequest
 * @param headers ChangeApplyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeApplyResponse
 */
ChangeApplyResponse Client::changeApplyWithOptions(const ChangeApplyRequest &tmpReq, const ChangeApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChangeApplyShrinkRequest request = ChangeApplyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChangePassengerList()) {
    request.setChangePassengerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChangePassengerList(), "change_passenger_list", "json"));
  }

  if (!!tmpReq.hasChangedJourneys()) {
    request.setChangedJourneysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChangedJourneys(), "changed_journeys", "json"));
  }

  if (!!tmpReq.hasContact()) {
    request.setContactShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContact(), "contact", "json"));
  }

  json body = {};
  if (!!request.hasChangePassengerListShrink()) {
    body["change_passenger_list"] = request.getChangePassengerListShrink();
  }

  if (!!request.hasChangedJourneysShrink()) {
    body["changed_journeys"] = request.getChangedJourneysShrink();
  }

  if (!!request.hasContactShrink()) {
    body["contact"] = request.getContactShrink();
  }

  if (!!request.hasOrderNum()) {
    body["order_num"] = request.getOrderNum();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.getRemark();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChangeApply"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/change/action-apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeApplyResponse>();
}

/**
 * @summary Submits a change application.
 *
 * @param request ChangeApplyRequest
 * @return ChangeApplyResponse
 */
ChangeApplyResponse Client::changeApply(const ChangeApplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ChangeApplyHeaders headers = ChangeApplyHeaders();
  return changeApplyWithOptions(request, headers, runtime);
}

/**
 * @summary Cancel the change order.
 *
 * @param request ChangeCancelRequest
 * @param headers ChangeCancelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeCancelResponse
 */
ChangeCancelResponse Client::changeCancelWithOptions(const ChangeCancelRequest &request, const ChangeCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChangeOrderNum()) {
    body["change_order_num"] = request.getChangeOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChangeCancel"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/change/action-cancel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeCancelResponse>();
}

/**
 * @summary Cancel the change order.
 *
 * @param request ChangeCancelRequest
 * @return ChangeCancelResponse
 */
ChangeCancelResponse Client::changeCancel(const ChangeCancelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ChangeCancelHeaders headers = ChangeCancelHeaders();
  return changeCancelWithOptions(request, headers, runtime);
}

/**
 * @summary Confirms a flight change order.
 *
 * @param request ChangeConfirmRequest
 * @param headers ChangeConfirmHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeConfirmResponse
 */
ChangeConfirmResponse Client::changeConfirmWithOptions(const ChangeConfirmRequest &request, const ChangeConfirmHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChangeOrderNum()) {
    body["change_order_num"] = request.getChangeOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChangeConfirm"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/change/action-confirm")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeConfirmResponse>();
}

/**
 * @summary Confirms a flight change order.
 *
 * @param request ChangeConfirmRequest
 * @return ChangeConfirmResponse
 */
ChangeConfirmResponse Client::changeConfirm(const ChangeConfirmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ChangeConfirmHeaders headers = ChangeConfirmHeaders();
  return changeConfirmWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the details of a flight change order.
 *
 * @param request ChangeDetailRequest
 * @param headers ChangeDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeDetailResponse
 */
ChangeDetailResponse Client::changeDetailWithOptions(const ChangeDetailRequest &request, const ChangeDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeOrderNum()) {
    query["change_order_num"] = request.getChangeOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeDetail"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/change/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeDetailResponse>();
}

/**
 * @summary Retrieves the details of a flight change order.
 *
 * @param request ChangeDetailRequest
 * @return ChangeDetailResponse
 */
ChangeDetailResponse Client::changeDetail(const ChangeDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ChangeDetailHeaders headers = ChangeDetailHeaders();
  return changeDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a paging list of change order summaries by buyer account.
 *
 * @param request ChangeDetailListOfBuyerRequest
 * @param headers ChangeDetailListOfBuyerHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeDetailListOfBuyerResponse
 */
ChangeDetailListOfBuyerResponse Client::changeDetailListOfBuyerWithOptions(const ChangeDetailListOfBuyerRequest &request, const ChangeDetailListOfBuyerHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageIndex()) {
    query["page_index"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  if (!!request.hasUtcCreateBegin()) {
    query["utc_create_begin"] = request.getUtcCreateBegin();
  }

  if (!!request.hasUtcCreateEnd()) {
    query["utc_create_end"] = request.getUtcCreateEnd();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeDetailListOfBuyer"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/change/buyer/detail-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeDetailListOfBuyerResponse>();
}

/**
 * @summary Queries a paging list of change order summaries by buyer account.
 *
 * @param request ChangeDetailListOfBuyerRequest
 * @return ChangeDetailListOfBuyerResponse
 */
ChangeDetailListOfBuyerResponse Client::changeDetailListOfBuyer(const ChangeDetailListOfBuyerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ChangeDetailListOfBuyerHeaders headers = ChangeDetailListOfBuyerHeaders();
  return changeDetailListOfBuyerWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of change orders by the original order number.
 *
 * @param request ChangeDetailListOfOrderNumRequest
 * @param headers ChangeDetailListOfOrderNumHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeDetailListOfOrderNumResponse
 */
ChangeDetailListOfOrderNumResponse Client::changeDetailListOfOrderNumWithOptions(const ChangeDetailListOfOrderNumRequest &request, const ChangeDetailListOfOrderNumHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderNum()) {
    query["order_num"] = request.getOrderNum();
  }

  if (!!request.hasPageIndex()) {
    query["page_index"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeDetailListOfOrderNum"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/change/order-num/detail-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeDetailListOfOrderNumResponse>();
}

/**
 * @summary Queries the list of change orders by the original order number.
 *
 * @param request ChangeDetailListOfOrderNumRequest
 * @return ChangeDetailListOfOrderNumResponse
 */
ChangeDetailListOfOrderNumResponse Client::changeDetailListOfOrderNum(const ChangeDetailListOfOrderNumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ChangeDetailListOfOrderNumHeaders headers = ChangeDetailListOfOrderNumHeaders();
  return changeDetailListOfOrderNumWithOptions(request, headers, runtime);
}

/**
 * @summary Collects lowest-price flight information.
 *
 * @description Collects lowest-price flight information.
 *
 * @param tmpReq CollectFlightLowestPriceRequest
 * @param headers CollectFlightLowestPriceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CollectFlightLowestPriceResponse
 */
CollectFlightLowestPriceResponse Client::collectFlightLowestPriceWithOptions(const CollectFlightLowestPriceRequest &tmpReq, const CollectFlightLowestPriceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CollectFlightLowestPriceShrinkRequest request = CollectFlightLowestPriceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLowestPriceFlightInfoList()) {
    request.setLowestPriceFlightInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLowestPriceFlightInfoList(), "lowest_price_flight_info_list", "json"));
  }

  json body = {};
  if (!!request.hasLowestPriceFlightInfoListShrink()) {
    body["lowest_price_flight_info_list"] = request.getLowestPriceFlightInfoListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CollectFlightLowestPrice"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/data-collect/flight-lowest-price")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CollectFlightLowestPriceResponse>();
}

/**
 * @summary Collects lowest-price flight information.
 *
 * @description Collects lowest-price flight information.
 *
 * @param request CollectFlightLowestPriceRequest
 * @return CollectFlightLowestPriceResponse
 */
CollectFlightLowestPriceResponse Client::collectFlightLowestPrice(const CollectFlightLowestPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CollectFlightLowestPriceHeaders headers = CollectFlightLowestPriceHeaders();
  return collectFlightLowestPriceWithOptions(request, headers, runtime);
}

/**
 * @summary Find richer quote information for the itinerary, including free baggage allowance, refund and change rules, and baggage through-check rules.
 *
 * @description In the input parameters, choose either solution_id or journey_param_list. solution_id must be obtained from the Search API.
 *
 * @param tmpReq EnrichRequest
 * @param headers EnrichHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnrichResponse
 */
EnrichResponse Client::enrichWithOptions(const EnrichRequest &tmpReq, const EnrichHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EnrichShrinkRequest request = EnrichShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJourneyParamList()) {
    request.setJourneyParamListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJourneyParamList(), "journey_param_list", "json"));
  }

  json body = {};
  if (!!request.hasAdults()) {
    body["adults"] = request.getAdults();
  }

  if (!!request.hasCabinClass()) {
    body["cabin_class"] = request.getCabinClass();
  }

  if (!!request.hasChildren()) {
    body["children"] = request.getChildren();
  }

  if (!!request.hasInfants()) {
    body["infants"] = request.getInfants();
  }

  if (!!request.hasJourneyParamListShrink()) {
    body["journey_param_list"] = request.getJourneyParamListShrink();
  }

  if (!!request.hasSolutionId()) {
    body["solution_id"] = request.getSolutionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Enrich"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/trade/action-enrich")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnrichResponse>();
}

/**
 * @summary Find richer quote information for the itinerary, including free baggage allowance, refund and change rules, and baggage through-check rules.
 *
 * @description In the input parameters, choose either solution_id or journey_param_list. solution_id must be obtained from the Search API.
 *
 * @param request EnrichRequest
 * @return EnrichResponse
 */
EnrichResponse Client::enrich(const EnrichRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  EnrichHeaders headers = EnrichHeaders();
  return enrichWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads a file as an attachment image. The file size is limited to 300 KB or less.
 *
 * @param request FileUploadRequest
 * @param headers FileUploadHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FileUploadResponse
 */
FileUploadResponse Client::fileUploadWithOptions(const FileUploadRequest &request, const FileUploadHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileContent()) {
    body["file_content"] = request.getFileContent();
  }

  if (!!request.hasOrderNum()) {
    body["order_num"] = request.getOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FileUpload"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/attachment/action-upload")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FileUploadResponse>();
}

/**
 * @summary Uploads a file as an attachment image. The file size is limited to 300 KB or less.
 *
 * @param request FileUploadRequest
 * @return FileUploadResponse
 */
FileUploadResponse Client::fileUpload(const FileUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FileUploadHeaders headers = FileUploadHeaders();
  return fileUploadWithOptions(request, headers, runtime);
}

/**
 * @summary Queries flight change information by order number.
 *
 * @param request FlightChangeOfOrderRequest
 * @param headers FlightChangeOfOrderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightChangeOfOrderResponse
 */
FlightChangeOfOrderResponse Client::flightChangeOfOrderWithOptions(const FlightChangeOfOrderRequest &request, const FlightChangeOfOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderNum()) {
    query["order_num"] = request.getOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightChangeOfOrder"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/flightchange/of-order")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightChangeOfOrderResponse>();
}

/**
 * @summary Queries flight change information by order number.
 *
 * @param request FlightChangeOfOrderRequest
 * @return FlightChangeOfOrderResponse
 */
FlightChangeOfOrderResponse Client::flightChangeOfOrder(const FlightChangeOfOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightChangeOfOrderHeaders headers = FlightChangeOfOrderHeaders();
  return flightChangeOfOrderWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains a token for API calls. The token is valid for 2 hours.
 *
 * @param request GetTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenResponse
 */
GetTokenResponse Client::getTokenWithOptions(const GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["app_key"] = request.getAppKey();
  }

  if (!!request.hasAppSecret()) {
    query["app_secret"] = request.getAppSecret();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetToken"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/token")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenResponse>();
}

/**
 * @summary Obtains a token for API calls. The token is valid for 2 hours.
 *
 * @param request GetTokenRequest
 * @return GetTokenResponse
 */
GetTokenResponse Client::getToken(const GetTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTokenWithOptions(request, headers, runtime);
}

/**
 * @summary Queries luggage through-check information for an itinerary.
 *
 * @description Queries luggage through-check information for an itinerary. Provide itinerary information as input, and the API returns whether luggage through-check is supported for the itinerary. Luggage through-check applies to transfer and stopover scenarios.
 *
 * @param tmpReq LuggageDirectRequest
 * @param headers LuggageDirectHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return LuggageDirectResponse
 */
LuggageDirectResponse Client::luggageDirectWithOptions(const LuggageDirectRequest &tmpReq, const LuggageDirectHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  LuggageDirectShrinkRequest request = LuggageDirectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFlightSegmentParamList()) {
    request.setFlightSegmentParamListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFlightSegmentParamList(), "flight_segment_param_list", "json"));
  }

  json query = {};
  if (!!request.hasFlightSegmentParamListShrink()) {
    query["flight_segment_param_list"] = request.getFlightSegmentParamListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LuggageDirect"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/flight-data/luggage-direct")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LuggageDirectResponse>();
}

/**
 * @summary Queries luggage through-check information for an itinerary.
 *
 * @description Queries luggage through-check information for an itinerary. Provide itinerary information as input, and the API returns whether luggage through-check is supported for the itinerary. Luggage through-check applies to transfer and stopover scenarios.
 *
 * @param request LuggageDirectRequest
 * @return LuggageDirectResponse
 */
LuggageDirectResponse Client::luggageDirect(const LuggageDirectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  LuggageDirectHeaders headers = LuggageDirectHeaders();
  return luggageDirectWithOptions(request, headers, runtime);
}

/**
 * @summary Queries order details.
 *
 * @param request OrderDetailRequest
 * @param headers OrderDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return OrderDetailResponse
 */
OrderDetailResponse Client::orderDetailWithOptions(const OrderDetailRequest &request, const OrderDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderNum()) {
    query["order_num"] = request.getOrderNum();
  }

  if (!!request.hasOutOrderNum()) {
    query["out_order_num"] = request.getOutOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OrderDetail"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/trade/order-detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OrderDetailResponse>();
}

/**
 * @summary Queries order details.
 *
 * @param request OrderDetailRequest
 * @return OrderDetailResponse
 */
OrderDetailResponse Client::orderDetail(const OrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  OrderDetailHeaders headers = OrderDetailHeaders();
  return orderDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the order list.
 *
 * @param request OrderListRequest
 * @param headers OrderListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return OrderListResponse
 */
OrderListResponse Client::orderListWithOptions(const OrderListRequest &request, const OrderListHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBookTimeEnd()) {
    query["book_time_end"] = request.getBookTimeEnd();
  }

  if (!!request.hasBookTimeStart()) {
    query["book_time_start"] = request.getBookTimeStart();
  }

  if (!!request.hasPageIndex()) {
    query["page_index"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OrderList"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/trade/order-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OrderListResponse>();
}

/**
 * @summary Queries the order list.
 *
 * @param request OrderListRequest
 * @return OrderListResponse
 */
OrderListResponse Client::orderList(const OrderListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  OrderListHeaders headers = OrderListHeaders();
  return orderListWithOptions(request, headers, runtime);
}

/**
 * @summary Verifies seat availability and pricing. If the price has changed, the developer can proceed with Book at the updated price. If the price has not changed, the order is placed at the original price.
 *
 * @param request PricingRequest
 * @param headers PricingHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PricingResponse
 */
PricingResponse Client::pricingWithOptions(const PricingRequest &request, const PricingHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSolutionId()) {
    body["solution_id"] = request.getSolutionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Pricing"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/trade/action-pricing")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PricingResponse>();
}

/**
 * @summary Verifies seat availability and pricing. If the price has changed, the developer can proceed with Book at the updated price. If the price has not changed, the order is placed at the original price.
 *
 * @param request PricingRequest
 * @return PricingResponse
 */
PricingResponse Client::pricing(const PricingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PricingHeaders headers = PricingHeaders();
  return pricingWithOptions(request, headers, runtime);
}

/**
 * @summary Submits a refund application for an air ticket.
 *
 * @param tmpReq RefundApplyRequest
 * @param headers RefundApplyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefundApplyResponse
 */
RefundApplyResponse Client::refundApplyWithOptions(const RefundApplyRequest &tmpReq, const RefundApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RefundApplyShrinkRequest request = RefundApplyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRefundJourneys()) {
    request.setRefundJourneysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRefundJourneys(), "refund_journeys", "json"));
  }

  if (!!tmpReq.hasRefundPassengerList()) {
    request.setRefundPassengerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRefundPassengerList(), "refund_passenger_list", "json"));
  }

  if (!!tmpReq.hasRefundType()) {
    request.setRefundTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRefundType(), "refund_type", "json"));
  }

  json body = {};
  if (!!request.hasOrderNum()) {
    body["order_num"] = request.getOrderNum();
  }

  if (!!request.hasRefundJourneysShrink()) {
    body["refund_journeys"] = request.getRefundJourneysShrink();
  }

  if (!!request.hasRefundPassengerListShrink()) {
    body["refund_passenger_list"] = request.getRefundPassengerListShrink();
  }

  if (!!request.hasRefundTypeShrink()) {
    body["refund_type"] = request.getRefundTypeShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RefundApply"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/refund/action-apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefundApplyResponse>();
}

/**
 * @summary Submits a refund application for an air ticket.
 *
 * @param request RefundApplyRequest
 * @return RefundApplyResponse
 */
RefundApplyResponse Client::refundApply(const RefundApplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RefundApplyHeaders headers = RefundApplyHeaders();
  return refundApplyWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the details of a refund order.
 *
 * @param request RefundDetailRequest
 * @param headers RefundDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefundDetailResponse
 */
RefundDetailResponse Client::refundDetailWithOptions(const RefundDetailRequest &request, const RefundDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRefundOrderNum()) {
    query["refund_order_num"] = request.getRefundOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefundDetail"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/refund/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefundDetailResponse>();
}

/**
 * @summary Retrieves the details of a refund order.
 *
 * @param request RefundDetailRequest
 * @return RefundDetailResponse
 */
RefundDetailResponse Client::refundDetail(const RefundDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RefundDetailHeaders headers = RefundDetailHeaders();
  return refundDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of refund orders.
 *
 * @param request RefundDetailListRequest
 * @param headers RefundDetailListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefundDetailListResponse
 */
RefundDetailListResponse Client::refundDetailListWithOptions(const RefundDetailListRequest &request, const RefundDetailListHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderNum()) {
    query["order_num"] = request.getOrderNum();
  }

  if (!!request.hasPageIndex()) {
    query["page_index"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  if (!!request.hasRefundCreateBeginTime()) {
    query["refund_create_begin_time"] = request.getRefundCreateBeginTime();
  }

  if (!!request.hasRefundCreateEndTime()) {
    query["refund_create_end_time"] = request.getRefundCreateEndTime();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefundDetailList"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/refund/detail-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefundDetailListResponse>();
}

/**
 * @summary Queries the details of refund orders.
 *
 * @param request RefundDetailListRequest
 * @return RefundDetailListResponse
 */
RefundDetailListResponse Client::refundDetailList(const RefundDetailListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RefundDetailListHeaders headers = RefundDetailListHeaders();
  return refundDetailListWithOptions(request, headers, runtime);
}

/**
 * @summary Searches for flight quotes and returns the lowest price across multiple flights. Note that the response of this operation does not include refund and change rules, free baggage allowance, or baggage through-check rules.
 *
 * @param tmpReq SearchRequest
 * @param headers SearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchResponse
 */
SearchResponse Client::searchWithOptions(const SearchRequest &tmpReq, const SearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchShrinkRequest request = SearchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAirLegs()) {
    request.setAirLegsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAirLegs(), "air_legs", "json"));
  }

  if (!!tmpReq.hasSearchControlOptions()) {
    request.setSearchControlOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSearchControlOptions(), "search_control_options", "json"));
  }

  json body = {};
  if (!!request.hasAdults()) {
    body["adults"] = request.getAdults();
  }

  if (!!request.hasAirLegsShrink()) {
    body["air_legs"] = request.getAirLegsShrink();
  }

  if (!!request.hasCabinClass()) {
    body["cabin_class"] = request.getCabinClass();
  }

  if (!!request.hasChildren()) {
    body["children"] = request.getChildren();
  }

  if (!!request.hasInfants()) {
    body["infants"] = request.getInfants();
  }

  if (!!request.hasSearchControlOptionsShrink()) {
    body["search_control_options"] = request.getSearchControlOptionsShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Search"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/trade/action-search")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchResponse>();
}

/**
 * @summary Searches for flight quotes and returns the lowest price across multiple flights. Note that the response of this operation does not include refund and change rules, free baggage allowance, or baggage through-check rules.
 *
 * @param request SearchRequest
 * @return SearchResponse
 */
SearchResponse Client::search(const SearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SearchHeaders headers = SearchHeaders();
  return searchWithOptions(request, headers, runtime);
}

/**
 * @summary Search and quote prices, currently providing the lowest price across multiple flights. Note that this API response includes refund/change rules, free baggage allowance, and baggage through-check rules.
 *
 * @param tmpReq StandardSearchRequest
 * @param headers StandardSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StandardSearchResponse
 */
StandardSearchResponse Client::standardSearchWithOptions(const StandardSearchRequest &tmpReq, const StandardSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StandardSearchShrinkRequest request = StandardSearchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAirLegs()) {
    request.setAirLegsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAirLegs(), "air_legs", "json"));
  }

  if (!!tmpReq.hasSearchControlOptions()) {
    request.setSearchControlOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSearchControlOptions(), "search_control_options", "json"));
  }

  json body = {};
  if (!!request.hasAdults()) {
    body["adults"] = request.getAdults();
  }

  if (!!request.hasAirLegsShrink()) {
    body["air_legs"] = request.getAirLegsShrink();
  }

  if (!!request.hasCabinClass()) {
    body["cabin_class"] = request.getCabinClass();
  }

  if (!!request.hasChildren()) {
    body["children"] = request.getChildren();
  }

  if (!!request.hasInfants()) {
    body["infants"] = request.getInfants();
  }

  if (!!request.hasSearchControlOptionsShrink()) {
    body["search_control_options"] = request.getSearchControlOptionsShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StandardSearch"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/trade/action-standardsearch")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StandardSearchResponse>();
}

/**
 * @summary Search and quote prices, currently providing the lowest price across multiple flights. Note that this API response includes refund/change rules, free baggage allowance, and baggage through-check rules.
 *
 * @param request StandardSearchRequest
 * @return StandardSearchResponse
 */
StandardSearchResponse Client::standardSearch(const StandardSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StandardSearchHeaders headers = StandardSearchHeaders();
  return standardSearchWithOptions(request, headers, runtime);
}

/**
 * @summary Pays for and issues a ticket.
 *
 * @param request TicketingRequest
 * @param headers TicketingHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TicketingResponse
 */
TicketingResponse Client::ticketingWithOptions(const TicketingRequest &request, const TicketingHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOrderNum()) {
    body["order_num"] = request.getOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Ticketing"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/trade/action-ticketing")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TicketingResponse>();
}

/**
 * @summary Pays for and issues a ticket.
 *
 * @param request TicketingRequest
 * @return TicketingResponse
 */
TicketingResponse Client::ticketing(const TicketingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TicketingHeaders headers = TicketingHeaders();
  return ticketingWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a pre-ticketing check. This operation is optional.
 *
 * @description Performs a pre-ticketing check. This operation is optional.
 *
 * @param request TicketingCheckRequest
 * @param headers TicketingCheckHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TicketingCheckResponse
 */
TicketingCheckResponse Client::ticketingCheckWithOptions(const TicketingCheckRequest &request, const TicketingCheckHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOrderNum()) {
    body["order_num"] = request.getOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TicketingCheck"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/trade/action-ticketing-check")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TicketingCheckResponse>();
}

/**
 * @summary Performs a pre-ticketing check. This operation is optional.
 *
 * @description Performs a pre-ticketing check. This operation is optional.
 *
 * @param request TicketingCheckRequest
 * @return TicketingCheckResponse
 */
TicketingCheckResponse Client::ticketingCheck(const TicketingCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TicketingCheckHeaders headers = TicketingCheckHeaders();
  return ticketingCheckWithOptions(request, headers, runtime);
}

/**
 * @summary Queries transit visa requirements for a flight itinerary. You provide flight information, and the API returns whether a transit visa is required for the itinerary. Only transfer or stopover segments are valid input parameters (transfers or stopovers passing through a third country). The supported passenger type defaults to Chinese mainland travelers.
 *
 * @description Queries transit visa requirements for a flight itinerary. You provide flight information, and the API returns whether a transit visa is required for the itinerary. Only transfer or stopover segments are valid input parameters (transfers or stopovers passing through a third country). The supported passenger type defaults to Chinese mainland travelers.
 *
 * @param tmpReq TransitVisaRequest
 * @param headers TransitVisaHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransitVisaResponse
 */
TransitVisaResponse Client::transitVisaWithOptions(const TransitVisaRequest &tmpReq, const TransitVisaHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TransitVisaShrinkRequest request = TransitVisaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFlightSegmentParamList()) {
    request.setFlightSegmentParamListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFlightSegmentParamList(), "flight_segment_param_list", "json"));
  }

  json query = {};
  if (!!request.hasFlightSegmentParamListShrink()) {
    query["flight_segment_param_list"] = request.getFlightSegmentParamListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.getXAcsAirticketLanguage());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransitVisa"},
    {"version" , "2023-01-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/airticket/v1/flight-data/transit-visa")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransitVisaResponse>();
}

/**
 * @summary Queries transit visa requirements for a flight itinerary. You provide flight information, and the API returns whether a transit visa is required for the itinerary. Only transfer or stopover segments are valid input parameters (transfers or stopovers passing through a third country). The supported passenger type defaults to Chinese mainland travelers.
 *
 * @description Queries transit visa requirements for a flight itinerary. You provide flight information, and the API returns whether a transit visa is required for the itinerary. Only transfer or stopover segments are valid input parameters (transfers or stopovers passing through a third country). The supported passenger type defaults to Chinese mainland travelers.
 *
 * @param request TransitVisaRequest
 * @return TransitVisaResponse
 */
TransitVisaResponse Client::transitVisa(const TransitVisaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TransitVisaHeaders headers = TransitVisaHeaders();
  return transitVisaWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117