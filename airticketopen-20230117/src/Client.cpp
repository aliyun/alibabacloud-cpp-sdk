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
  this->_endpointRule = "";
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
 * @summary 账号资金流水
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
    query["day_num"] = request.dayNum();
  }

  if (!!request.hasPageIndex()) {
    query["page_index"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasUtcBeginTime()) {
    query["utc_begin_time"] = request.utcBeginTime();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary 账号资金流水
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
 * @summary Ancillary - Suggestion
 *
 * @description search ancillary for selected solution, you should enter the solution_id returned by enrich.
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
    body["solution_id"] = request.solutionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary Ancillary - Suggestion
 *
 * @description search ancillary for selected solution, you should enter the solution_id returned by enrich.
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
 * @summary Transaction-Reservation
 *
 * @description Enter solution_id returned by enrich, ancillary_id returned by ancillarySuggest(optional), passengers information and contact information, the book interface will create an order wait for pay.
 * There are two issues should be noticed:
 * 1. the solution_id must be processed by pricing.
 * 2. the order created by book interface should be pay within 30 minutes, otherwise the order will be closed.
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
    request.setContactShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.contact(), "contact", "json"));
  }

  if (!!tmpReq.hasPassengerAncillaryPurchaseMapList()) {
    request.setPassengerAncillaryPurchaseMapListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.passengerAncillaryPurchaseMapList(), "passenger_ancillary_purchase_map_list", "json"));
  }

  if (!!tmpReq.hasPassengerList()) {
    request.setPassengerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.passengerList(), "passenger_list", "json"));
  }

  json body = {};
  if (!!request.hasContactShrink()) {
    body["contact"] = request.contactShrink();
  }

  if (!!request.hasOutOrderNum()) {
    body["out_order_num"] = request.outOrderNum();
  }

  if (!!request.hasPassengerAncillaryPurchaseMapListShrink()) {
    body["passenger_ancillary_purchase_map_list"] = request.passengerAncillaryPurchaseMapListShrink();
  }

  if (!!request.hasPassengerListShrink()) {
    body["passenger_list"] = request.passengerListShrink();
  }

  if (!!request.hasSolutionId()) {
    body["solution_id"] = request.solutionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary Transaction-Reservation
 *
 * @description Enter solution_id returned by enrich, ancillary_id returned by ancillarySuggest(optional), passengers information and contact information, the book interface will create an order wait for pay.
 * There are two issues should be noticed:
 * 1. the solution_id must be processed by pricing.
 * 2. the order created by book interface should be pay within 30 minutes, otherwise the order will be closed.
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
 * @summary Transaction - Unpaid Cancellation
 *
 * @description close an unpaid order
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
    body["order_num"] = request.orderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary Transaction - Unpaid Cancellation
 *
 * @description close an unpaid order
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
 * @summary 改签-Apply
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
    request.setChangePassengerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.changePassengerList(), "change_passenger_list", "json"));
  }

  if (!!tmpReq.hasChangedJourneys()) {
    request.setChangedJourneysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.changedJourneys(), "changed_journeys", "json"));
  }

  if (!!tmpReq.hasContact()) {
    request.setContactShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.contact(), "contact", "json"));
  }

  json body = {};
  if (!!request.hasChangePassengerListShrink()) {
    body["change_passenger_list"] = request.changePassengerListShrink();
  }

  if (!!request.hasChangedJourneysShrink()) {
    body["changed_journeys"] = request.changedJourneysShrink();
  }

  if (!!request.hasContactShrink()) {
    body["contact"] = request.contactShrink();
  }

  if (!!request.hasOrderNum()) {
    body["order_num"] = request.orderNum();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.remark();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary 改签-Apply
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
 * @summary 改签-取消
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
    body["change_order_num"] = request.changeOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary 改签-取消
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
 * @summary 改签-确认
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
    body["change_order_num"] = request.changeOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary 改签-确认
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
 * @summary 改签-Detail
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
    query["change_order_num"] = request.changeOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary 改签-Detail
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
 * @summary 改签单列表-关于买家账号
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
    query["page_index"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasUtcCreateBegin()) {
    query["utc_create_begin"] = request.utcCreateBegin();
  }

  if (!!request.hasUtcCreateEnd()) {
    query["utc_create_end"] = request.utcCreateEnd();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary 改签单列表-关于买家账号
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
 * @summary 改签单列表-关于正向订单
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
    query["order_num"] = request.orderNum();
  }

  if (!!request.hasPageIndex()) {
    query["page_index"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary 改签单列表-关于正向订单
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
 * @summary 数据收集-低价航班信息
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
    request.setLowestPriceFlightInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.lowestPriceFlightInfoList(), "lowest_price_flight_info_list", "json"));
  }

  json body = {};
  if (!!request.hasLowestPriceFlightInfoListShrink()) {
    body["lowest_price_flight_info_list"] = request.lowestPriceFlightInfoListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary 数据收集-低价航班信息
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
 * @summary Search-Enrich
 *
 * @description Choose either `solution_id` or `journey_param_list` in the parameters, and `solution_id` needs to be obtained from the Search interface.
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
    request.setJourneyParamListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.journeyParamList(), "journey_param_list", "json"));
  }

  json body = {};
  if (!!request.hasAdults()) {
    body["adults"] = request.adults();
  }

  if (!!request.hasCabinClass()) {
    body["cabin_class"] = request.cabinClass();
  }

  if (!!request.hasChildren()) {
    body["children"] = request.children();
  }

  if (!!request.hasInfants()) {
    body["infants"] = request.infants();
  }

  if (!!request.hasJourneyParamListShrink()) {
    body["journey_param_list"] = request.journeyParamListShrink();
  }

  if (!!request.hasSolutionId()) {
    body["solution_id"] = request.solutionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary Search-Enrich
 *
 * @description Choose either `solution_id` or `journey_param_list` in the parameters, and `solution_id` needs to be obtained from the Search interface.
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
 * @summary 附件上传
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
    body["file_content"] = request.fileContent();
  }

  if (!!request.hasOrderNum()) {
    body["order_num"] = request.orderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary 附件上传
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
 * @summary 航变信息-关于订单
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
    query["order_num"] = request.orderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary 航变信息-关于订单
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
 * @summary Get Token
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
    query["app_key"] = request.appKey();
  }

  if (!!request.hasAppSecret()) {
    query["app_secret"] = request.appSecret();
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
 * @summary Get Token
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
 * @summary 航程行李直挂
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
    request.setFlightSegmentParamListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.flightSegmentParamList(), "flight_segment_param_list", "json"));
  }

  json query = {};
  if (!!request.hasFlightSegmentParamListShrink()) {
    query["flight_segment_param_list"] = request.flightSegmentParamListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary 航程行李直挂
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
 * @summary Trade-Order Details
 *
 * @description query order detail
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
    query["order_num"] = request.orderNum();
  }

  if (!!request.hasOutOrderNum()) {
    query["out_order_num"] = request.outOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary Trade-Order Details
 *
 * @description query order detail
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
 * @summary Trade - Order List
 *
 * @description query order list
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
    query["book_time_end"] = request.bookTimeEnd();
  }

  if (!!request.hasBookTimeStart()) {
    query["book_time_start"] = request.bookTimeStart();
  }

  if (!!request.hasPageIndex()) {
    query["page_index"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary Trade - Order List
 *
 * @description query order list
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
 * @summary Trade - Seat and Price Verification
 *
 * @description Check is price and remaining seats of solution you selected has changed. You should enter the solution_id returned by enrich.
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
    body["solution_id"] = request.solutionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary Trade - Seat and Price Verification
 *
 * @description Check is price and remaining seats of solution you selected has changed. You should enter the solution_id returned by enrich.
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
 * @summary 退票-申请
 *
 * @description Apply for a refund and generate a refund order.
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
    request.setRefundJourneysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.refundJourneys(), "refund_journeys", "json"));
  }

  if (!!tmpReq.hasRefundPassengerList()) {
    request.setRefundPassengerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.refundPassengerList(), "refund_passenger_list", "json"));
  }

  if (!!tmpReq.hasRefundType()) {
    request.setRefundTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.refundType(), "refund_type", "json"));
  }

  json body = {};
  if (!!request.hasOrderNum()) {
    body["order_num"] = request.orderNum();
  }

  if (!!request.hasRefundJourneysShrink()) {
    body["refund_journeys"] = request.refundJourneysShrink();
  }

  if (!!request.hasRefundPassengerListShrink()) {
    body["refund_passenger_list"] = request.refundPassengerListShrink();
  }

  if (!!request.hasRefundTypeShrink()) {
    body["refund_type"] = request.refundTypeShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary 退票-申请
 *
 * @description Apply for a refund and generate a refund order.
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
 * @summary Refund - Detail
 *
 * @description Query refund order detail.
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
    query["refund_order_num"] = request.refundOrderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary Refund - Detail
 *
 * @description Query refund order detail.
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
 * @summary Refund - Detail List
 *
 * @description Query refund order detail.
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
    query["order_num"] = request.orderNum();
  }

  if (!!request.hasPageIndex()) {
    query["page_index"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasRefundCreateBeginTime()) {
    query["refund_create_begin_time"] = request.refundCreateBeginTime();
  }

  if (!!request.hasRefundCreateEndTime()) {
    query["refund_create_end_time"] = request.refundCreateEndTime();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary Refund - Detail List
 *
 * @description Query refund order detail.
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
 * @summary search
 *
 * @description Enter the information of departure, arrival, departure date, passenger number and cabin, return the lowest price for each flight.
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
    request.setAirLegsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.airLegs(), "air_legs", "json"));
  }

  if (!!tmpReq.hasSearchControlOptions()) {
    request.setSearchControlOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.searchControlOptions(), "search_control_options", "json"));
  }

  json body = {};
  if (!!request.hasAdults()) {
    body["adults"] = request.adults();
  }

  if (!!request.hasAirLegsShrink()) {
    body["air_legs"] = request.airLegsShrink();
  }

  if (!!request.hasCabinClass()) {
    body["cabin_class"] = request.cabinClass();
  }

  if (!!request.hasChildren()) {
    body["children"] = request.children();
  }

  if (!!request.hasInfants()) {
    body["infants"] = request.infants();
  }

  if (!!request.hasSearchControlOptionsShrink()) {
    body["search_control_options"] = request.searchControlOptionsShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary search
 *
 * @description Enter the information of departure, arrival, departure date, passenger number and cabin, return the lowest price for each flight.
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
 * @summary Transaction - Payment and Ticket Issuance
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
    body["order_num"] = request.orderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary Transaction - Payment and Ticket Issuance
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
 * @summary Transaction - Pre-payment verification
 *
 * @description Pre-check for Ticketing, this interface is optional to use.
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
    body["order_num"] = request.orderNum();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary Transaction - Pre-payment verification
 *
 * @description Pre-check for Ticketing, this interface is optional to use.
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
 * @summary 航程过境签
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
    request.setFlightSegmentParamListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.flightSegmentParamList(), "flight_segment_param_list", "json"));
  }

  json query = {};
  if (!!request.hasFlightSegmentParamListShrink()) {
    query["flight_segment_param_list"] = request.flightSegmentParamListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAirticketAccessToken()) {
    realHeaders["x-acs-airticket-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAirticketAccessToken());
  }

  if (!!headers.hasXAcsAirticketLanguage()) {
    realHeaders["x-acs-airticket-language"] = Darabonba::Convert::stringVal(headers.xAcsAirticketLanguage());
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
 * @summary 航程过境签
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