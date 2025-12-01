#include <darabonba/Core.hpp>
#include <alibabacloud/Domain20180208.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Domain20180208::Models;
namespace AlibabaCloud
{
namespace Domain20180208
{

AlibabaCloud::Domain20180208::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("domain", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request AcceptDemandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcceptDemandResponse
 */
AcceptDemandResponse Client::acceptDemandWithOptions(const AcceptDemandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AcceptDemand"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AcceptDemandResponse>();
}

/**
 * @param request AcceptDemandRequest
 * @return AcceptDemandResponse
 */
AcceptDemandResponse Client::acceptDemand(const AcceptDemandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptDemandWithOptions(request, runtime);
}

/**
 * @summary 闯入接口
 *
 * @param tmpReq BatchIntrudeDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchIntrudeDomainsResponse
 */
BatchIntrudeDomainsResponse Client::batchIntrudeDomainsWithOptions(const BatchIntrudeDomainsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchIntrudeDomainsShrinkRequest request = BatchIntrudeDomainsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDomainNames()) {
    request.setDomainNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.domainNames(), "DomainNames", "json"));
  }

  json query = {};
  if (!!request.hasDomainNamesShrink()) {
    query["DomainNames"] = request.domainNamesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchIntrudeDomains"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchIntrudeDomainsResponse>();
}

/**
 * @summary 闯入接口
 *
 * @param request BatchIntrudeDomainsRequest
 * @return BatchIntrudeDomainsResponse
 */
BatchIntrudeDomainsResponse Client::batchIntrudeDomains(const BatchIntrudeDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchIntrudeDomainsWithOptions(request, runtime);
}

/**
 * @summary 根据OutBizId（批量）查看带价PUSH状态，通常用于超时场景补偿
 *
 * @param tmpReq BatchQueryPushStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchQueryPushStatusResponse
 */
BatchQueryPushStatusResponse Client::batchQueryPushStatusWithOptions(const BatchQueryPushStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchQueryPushStatusShrinkRequest request = BatchQueryPushStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOutBizIds()) {
    request.setOutBizIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.outBizIds(), "OutBizIds", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOutBizIdsShrink()) {
    query["OutBizIds"] = request.outBizIdsShrink();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchQueryPushStatus"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchQueryPushStatusResponse>();
}

/**
 * @summary 根据OutBizId（批量）查看带价PUSH状态，通常用于超时场景补偿
 *
 * @param request BatchQueryPushStatusRequest
 * @return BatchQueryPushStatusResponse
 */
BatchQueryPushStatusResponse Client::batchQueryPushStatus(const BatchQueryPushStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchQueryPushStatusWithOptions(request, runtime);
}

/**
 * @summary 批量撤回带价PUSH
 *
 * @param tmpReq BatchRecallPushRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchRecallPushResponse
 */
BatchRecallPushResponse Client::batchRecallPushWithOptions(const BatchRecallPushRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchRecallPushShrinkRequest request = BatchRecallPushShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOutBizIds()) {
    request.setOutBizIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.outBizIds(), "OutBizIds", "json"));
  }

  json query = {};
  if (!!request.hasOutBizIdsShrink()) {
    query["OutBizIds"] = request.outBizIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchRecallPush"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchRecallPushResponse>();
}

/**
 * @summary 批量撤回带价PUSH
 *
 * @param request BatchRecallPushRequest
 * @return BatchRecallPushResponse
 */
BatchRecallPushResponse Client::batchRecallPush(const BatchRecallPushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchRecallPushWithOptions(request, runtime);
}

/**
 * @param request BidDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BidDomainResponse
 */
BidDomainResponse Client::bidDomainWithOptions(const BidDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuctionId()) {
    body["AuctionId"] = request.auctionId();
  }

  if (!!request.hasCurrency()) {
    body["Currency"] = request.currency();
  }

  if (!!request.hasMaxBid()) {
    body["MaxBid"] = request.maxBid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BidDomain"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BidDomainResponse>();
}

/**
 * @param request BidDomainRequest
 * @return BidDomainResponse
 */
BidDomainResponse Client::bidDomain(const BidDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bidDomainWithOptions(request, runtime);
}

/**
 * @param request ChangeAuctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeAuctionResponse
 */
ChangeAuctionResponse Client::changeAuctionWithOptions(const ChangeAuctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuctionList()) {
    body["AuctionList"] = request.auctionList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ChangeAuction"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeAuctionResponse>();
}

/**
 * @param request ChangeAuctionRequest
 * @return ChangeAuctionResponse
 */
ChangeAuctionResponse Client::changeAuction(const ChangeAuctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeAuctionWithOptions(request, runtime);
}

/**
 * @summary 校验域名在售状态
 *
 * @param request CheckDomainStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDomainStatusResponse
 */
CheckDomainStatusResponse Client::checkDomainStatusWithOptions(const CheckDomainStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDomainStatus"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDomainStatusResponse>();
}

/**
 * @summary 校验域名在售状态
 *
 * @param request CheckDomainStatusRequest
 * @return CheckDomainStatusResponse
 */
CheckDomainStatusResponse Client::checkDomainStatus(const CheckDomainStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDomainStatusWithOptions(request, runtime);
}

/**
 * @summary 校验域名带价PUSH接收方可接收
 *
 * @param request CheckPushReceiverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckPushReceiverResponse
 */
CheckPushReceiverResponse Client::checkPushReceiverWithOptions(const CheckPushReceiverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReceiverAccount()) {
    query["ReceiverAccount"] = request.receiverAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckPushReceiver"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckPushReceiverResponse>();
}

/**
 * @summary 校验域名带价PUSH接收方可接收
 *
 * @param request CheckPushReceiverRequest
 * @return CheckPushReceiverResponse
 */
CheckPushReceiverResponse Client::checkPushReceiver(const CheckPushReceiverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkPushReceiverWithOptions(request, runtime);
}

/**
 * @summary 一口价严选询价接口
 *
 * @param request CheckSelectedDomainStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckSelectedDomainStatusResponse
 */
CheckSelectedDomainStatusResponse Client::checkSelectedDomainStatusWithOptions(const CheckSelectedDomainStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckSelectedDomainStatus"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckSelectedDomainStatusResponse>();
}

/**
 * @summary 一口价严选询价接口
 *
 * @param request CheckSelectedDomainStatusRequest
 * @return CheckSelectedDomainStatusResponse
 */
CheckSelectedDomainStatusResponse Client::checkSelectedDomainStatus(const CheckSelectedDomainStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkSelectedDomainStatusWithOptions(request, runtime);
}

/**
 * @summary 创建一口价需求单
 *
 * @param request CreateFixedPriceDemandOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFixedPriceDemandOrderResponse
 */
CreateFixedPriceDemandOrderResponse Client::createFixedPriceDemandOrderWithOptions(const CreateFixedPriceDemandOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFixedPriceDemandOrder"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFixedPriceDemandOrderResponse>();
}

/**
 * @summary 创建一口价需求单
 *
 * @param request CreateFixedPriceDemandOrderRequest
 * @return CreateFixedPriceDemandOrderResponse
 */
CreateFixedPriceDemandOrderResponse Client::createFixedPriceDemandOrder(const CreateFixedPriceDemandOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFixedPriceDemandOrderWithOptions(request, runtime);
}

/**
 * @summary 一口价严选下单购买接口，阿里云账户余额直接扣费
 *
 * @param request CreateFixedPriceSelectedOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFixedPriceSelectedOrderResponse
 */
CreateFixedPriceSelectedOrderResponse Client::createFixedPriceSelectedOrderWithOptions(const CreateFixedPriceSelectedOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasExpectedPrice()) {
    query["ExpectedPrice"] = request.expectedPrice();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFixedPriceSelectedOrder"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFixedPriceSelectedOrderResponse>();
}

/**
 * @summary 一口价严选下单购买接口，阿里云账户余额直接扣费
 *
 * @param request CreateFixedPriceSelectedOrderRequest
 * @return CreateFixedPriceSelectedOrderResponse
 */
CreateFixedPriceSelectedOrderResponse Client::createFixedPriceSelectedOrder(const CreateFixedPriceSelectedOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFixedPriceSelectedOrderWithOptions(request, runtime);
}

/**
 * @param request FailDemandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FailDemandResponse
 */
FailDemandResponse Client::failDemandWithOptions(const FailDemandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FailDemand"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FailDemandResponse>();
}

/**
 * @param request FailDemandRequest
 * @return FailDemandResponse
 */
FailDemandResponse Client::failDemand(const FailDemandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return failDemandWithOptions(request, runtime);
}

/**
 * @param request FinishDemandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FinishDemandResponse
 */
FinishDemandResponse Client::finishDemandWithOptions(const FinishDemandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FinishDemand"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FinishDemandResponse>();
}

/**
 * @param request FinishDemandRequest
 * @return FinishDemandResponse
 */
FinishDemandResponse Client::finishDemand(const FinishDemandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return finishDemandWithOptions(request, runtime);
}

/**
 * @param request GetIntlDomainDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIntlDomainDownloadUrlResponse
 */
GetIntlDomainDownloadUrlResponse Client::getIntlDomainDownloadUrlWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetIntlDomainDownloadUrl"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIntlDomainDownloadUrlResponse>();
}

/**
 * @return GetIntlDomainDownloadUrlResponse
 */
GetIntlDomainDownloadUrlResponse Client::getIntlDomainDownloadUrl() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIntlDomainDownloadUrlWithOptions(runtime);
}

/**
 * @param request GetReserveDomainUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetReserveDomainUrlResponse
 */
GetReserveDomainUrlResponse Client::getReserveDomainUrlWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetReserveDomainUrl"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReserveDomainUrlResponse>();
}

/**
 * @return GetReserveDomainUrlResponse
 */
GetReserveDomainUrlResponse Client::getReserveDomainUrl() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getReserveDomainUrlWithOptions(runtime);
}

/**
 * @summary 购买国际站预释放域名
 *
 * @param request PurchaseIntlDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PurchaseIntlDomainResponse
 */
PurchaseIntlDomainResponse Client::purchaseIntlDomainWithOptions(const PurchaseIntlDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuctionId()) {
    body["AuctionId"] = request.auctionId();
  }

  if (!!request.hasCurrency()) {
    body["Currency"] = request.currency();
  }

  if (!!request.hasPrice()) {
    body["Price"] = request.price();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PurchaseIntlDomain"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PurchaseIntlDomainResponse>();
}

/**
 * @summary 购买国际站预释放域名
 *
 * @param request PurchaseIntlDomainRequest
 * @return PurchaseIntlDomainResponse
 */
PurchaseIntlDomainResponse Client::purchaseIntlDomain(const PurchaseIntlDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return purchaseIntlDomainWithOptions(request, runtime);
}

/**
 * @summary 发布域名PUSH，目前只支持0元PUSH
 *
 * @param tmpReq PushDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushDomainsResponse
 */
PushDomainsResponse Client::pushDomainsWithOptions(const PushDomainsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushDomainsShrinkRequest request = PushDomainsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDomainList()) {
    request.setDomainListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.domainList(), "DomainList", "json"));
  }

  json query = {};
  if (!!request.hasDomainListShrink()) {
    query["DomainList"] = request.domainListShrink();
  }

  if (!!request.hasOutBizId()) {
    query["OutBizId"] = request.outBizId();
  }

  if (!!request.hasPublishRemark()) {
    query["PublishRemark"] = request.publishRemark();
  }

  if (!!request.hasReceiverAccount()) {
    query["ReceiverAccount"] = request.receiverAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushDomains"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushDomainsResponse>();
}

/**
 * @summary 发布域名PUSH，目前只支持0元PUSH
 *
 * @param request PushDomainsRequest
 * @return PushDomainsResponse
 */
PushDomainsResponse Client::pushDomains(const PushDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushDomainsWithOptions(request, runtime);
}

/**
 * @param request QueryAuctionDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAuctionDetailResponse
 */
QueryAuctionDetailResponse Client::queryAuctionDetailWithOptions(const QueryAuctionDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuctionId()) {
    body["AuctionId"] = request.auctionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryAuctionDetail"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAuctionDetailResponse>();
}

/**
 * @param request QueryAuctionDetailRequest
 * @return QueryAuctionDetailResponse
 */
QueryAuctionDetailResponse Client::queryAuctionDetail(const QueryAuctionDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAuctionDetailWithOptions(request, runtime);
}

/**
 * @param request QueryAuctionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAuctionsResponse
 */
QueryAuctionsResponse Client::queryAuctionsWithOptions(const QueryAuctionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuctionEndTimeOrder()) {
    body["AuctionEndTimeOrder"] = request.auctionEndTimeOrder();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasStatuses()) {
    body["Statuses"] = request.statuses();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryAuctions"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAuctionsResponse>();
}

/**
 * @param request QueryAuctionsRequest
 * @return QueryAuctionsResponse
 */
QueryAuctionsResponse Client::queryAuctions(const QueryAuctionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAuctionsWithOptions(request, runtime);
}

/**
 * @param request QueryBidRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBidRecordsResponse
 */
QueryBidRecordsResponse Client::queryBidRecordsWithOptions(const QueryBidRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuctionId()) {
    body["AuctionId"] = request.auctionId();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryBidRecords"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBidRecordsResponse>();
}

/**
 * @param request QueryBidRecordsRequest
 * @return QueryBidRecordsResponse
 */
QueryBidRecordsResponse Client::queryBidRecords(const QueryBidRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBidRecordsWithOptions(request, runtime);
}

/**
 * @param request QueryBookingDomainInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBookingDomainInfoResponse
 */
QueryBookingDomainInfoResponse Client::queryBookingDomainInfoWithOptions(const QueryBookingDomainInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDomainName()) {
    body["DomainName"] = request.domainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryBookingDomainInfo"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBookingDomainInfoResponse>();
}

/**
 * @param request QueryBookingDomainInfoRequest
 * @return QueryBookingDomainInfoResponse
 */
QueryBookingDomainInfoResponse Client::queryBookingDomainInfo(const QueryBookingDomainInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBookingDomainInfoWithOptions(request, runtime);
}

/**
 * @summary 查询回购订单列表
 *
 * @param request QueryBrokerDemandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBrokerDemandResponse
 */
QueryBrokerDemandResponse Client::queryBrokerDemandWithOptions(const QueryBrokerDemandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBrokerDemand"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBrokerDemandResponse>();
}

/**
 * @summary 查询回购订单列表
 *
 * @param request QueryBrokerDemandRequest
 * @return QueryBrokerDemandResponse
 */
QueryBrokerDemandResponse Client::queryBrokerDemand(const QueryBrokerDemandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBrokerDemandWithOptions(request, runtime);
}

/**
 * @param request QueryBrokerDemandRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBrokerDemandRecordResponse
 */
QueryBrokerDemandRecordResponse Client::queryBrokerDemandRecordWithOptions(const QueryBrokerDemandRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBrokerDemandRecord"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBrokerDemandRecordResponse>();
}

/**
 * @param request QueryBrokerDemandRecordRequest
 * @return QueryBrokerDemandRecordResponse
 */
QueryBrokerDemandRecordResponse Client::queryBrokerDemandRecord(const QueryBrokerDemandRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBrokerDemandRecordWithOptions(request, runtime);
}

/**
 * @summary 查询买家交易记录列表
 *
 * @param tmpReq QueryBuyerDomainTradeRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBuyerDomainTradeRecordsResponse
 */
QueryBuyerDomainTradeRecordsResponse Client::queryBuyerDomainTradeRecordsWithOptions(const QueryBuyerDomainTradeRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryBuyerDomainTradeRecordsShrinkRequest request = QueryBuyerDomainTradeRecordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizIdList()) {
    request.setBizIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bizIdList(), "BizIdList", "json"));
  }

  if (!!tmpReq.hasDomainNameList()) {
    request.setDomainNameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.domainNameList(), "DomainNameList", "json"));
  }

  if (!!tmpReq.hasStatusList()) {
    request.setStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.statusList(), "StatusList", "json"));
  }

  if (!!tmpReq.hasSuffixList()) {
    request.setSuffixListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.suffixList(), "SuffixList", "json"));
  }

  if (!!tmpReq.hasTradeTypeList()) {
    request.setTradeTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tradeTypeList(), "TradeTypeList", "json"));
  }

  json query = {};
  if (!!request.hasBizIdListShrink()) {
    query["BizIdList"] = request.bizIdListShrink();
  }

  if (!!request.hasDomainNameListShrink()) {
    query["DomainNameList"] = request.domainNameListShrink();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasEndPrice()) {
    query["EndPrice"] = request.endPrice();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSorter()) {
    query["Sorter"] = request.sorter();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasStartPrice()) {
    query["StartPrice"] = request.startPrice();
  }

  if (!!request.hasStatusListShrink()) {
    query["StatusList"] = request.statusListShrink();
  }

  if (!!request.hasSuffixListShrink()) {
    query["SuffixList"] = request.suffixListShrink();
  }

  if (!!request.hasTradeTypeListShrink()) {
    query["TradeTypeList"] = request.tradeTypeListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBuyerDomainTradeRecords"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBuyerDomainTradeRecordsResponse>();
}

/**
 * @summary 查询买家交易记录列表
 *
 * @param request QueryBuyerDomainTradeRecordsRequest
 * @return QueryBuyerDomainTradeRecordsResponse
 */
QueryBuyerDomainTradeRecordsResponse Client::queryBuyerDomainTradeRecords(const QueryBuyerDomainTradeRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBuyerDomainTradeRecordsWithOptions(request, runtime);
}

/**
 * @param request QueryDomainTransferStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainTransferStatusResponse
 */
QueryDomainTransferStatusResponse Client::queryDomainTransferStatusWithOptions(const QueryDomainTransferStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDomainName()) {
    body["DomainName"] = request.domainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryDomainTransferStatus"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDomainTransferStatusResponse>();
}

/**
 * @param request QueryDomainTransferStatusRequest
 * @return QueryDomainTransferStatusResponse
 */
QueryDomainTransferStatusResponse Client::queryDomainTransferStatus(const QueryDomainTransferStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainTransferStatusWithOptions(request, runtime);
}

/**
 * @summary 查询汇率
 *
 * @param request QueryExchangeRateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryExchangeRateResponse
 */
QueryExchangeRateResponse Client::queryExchangeRateWithOptions(const QueryExchangeRateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromCurrency()) {
    query["FromCurrency"] = request.fromCurrency();
  }

  if (!!request.hasToCurrency()) {
    query["ToCurrency"] = request.toCurrency();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryExchangeRate"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryExchangeRateResponse>();
}

/**
 * @summary 查询汇率
 *
 * @param request QueryExchangeRateRequest
 * @return QueryExchangeRateResponse
 */
QueryExchangeRateResponse Client::queryExchangeRate(const QueryExchangeRateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryExchangeRateWithOptions(request, runtime);
}

/**
 * @summary 查询竞价商品详情
 *
 * @param request QueryExportAuctionDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryExportAuctionDetailResponse
 */
QueryExportAuctionDetailResponse Client::queryExportAuctionDetailWithOptions(const QueryExportAuctionDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuctionId()) {
    query["AuctionId"] = request.auctionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryExportAuctionDetail"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryExportAuctionDetailResponse>();
}

/**
 * @summary 查询竞价商品详情
 *
 * @param request QueryExportAuctionDetailRequest
 * @return QueryExportAuctionDetailResponse
 */
QueryExportAuctionDetailResponse Client::queryExportAuctionDetail(const QueryExportAuctionDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryExportAuctionDetailWithOptions(request, runtime);
}

/**
 * @summary 查询导出的抢注域名
 *
 * @param request QueryExportDomainExpireSnatchsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryExportDomainExpireSnatchsResponse
 */
QueryExportDomainExpireSnatchsResponse Client::queryExportDomainExpireSnatchsWithOptions(const QueryExportDomainExpireSnatchsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentId()) {
    query["CurrentId"] = request.currentId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryExportDomainExpireSnatchs"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryExportDomainExpireSnatchsResponse>();
}

/**
 * @summary 查询导出的抢注域名
 *
 * @param request QueryExportDomainExpireSnatchsRequest
 * @return QueryExportDomainExpireSnatchsResponse
 */
QueryExportDomainExpireSnatchsResponse Client::queryExportDomainExpireSnatchs(const QueryExportDomainExpireSnatchsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryExportDomainExpireSnatchsWithOptions(request, runtime);
}

/**
 * @param request QueryPurchasedDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPurchasedDomainsResponse
 */
QueryPurchasedDomainsResponse Client::queryPurchasedDomainsWithOptions(const QueryPurchasedDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDomainName()) {
    body["DomainName"] = request.domainName();
  }

  if (!!request.hasEndOperationTime()) {
    body["EndOperationTime"] = request.endOperationTime();
  }

  if (!!request.hasOpTimeOrder()) {
    body["OpTimeOrder"] = request.opTimeOrder();
  }

  if (!!request.hasOperationStatus()) {
    body["OperationStatus"] = request.operationStatus();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasStartOperationTime()) {
    body["StartOperationTime"] = request.startOperationTime();
  }

  if (!!request.hasUpdateTimeOrder()) {
    body["UpdateTimeOrder"] = request.updateTimeOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryPurchasedDomains"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPurchasedDomainsResponse>();
}

/**
 * @param request QueryPurchasedDomainsRequest
 * @return QueryPurchasedDomainsResponse
 */
QueryPurchasedDomainsResponse Client::queryPurchasedDomains(const QueryPurchasedDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPurchasedDomainsWithOptions(request, runtime);
}

/**
 * @param request RecordDemandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecordDemandResponse
 */
RecordDemandResponse Client::recordDemandWithOptions(const RecordDemandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecordDemand"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecordDemandResponse>();
}

/**
 * @param request RecordDemandRequest
 * @return RecordDemandResponse
 */
RecordDemandResponse Client::recordDemand(const RecordDemandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recordDemandWithOptions(request, runtime);
}

/**
 * @param request RefuseDemandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefuseDemandResponse
 */
RefuseDemandResponse Client::refuseDemandWithOptions(const RefuseDemandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefuseDemand"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefuseDemandResponse>();
}

/**
 * @param request RefuseDemandRequest
 * @return RefuseDemandResponse
 */
RefuseDemandResponse Client::refuseDemand(const RefuseDemandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refuseDemandWithOptions(request, runtime);
}

/**
 * @param request RequestPayDemandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RequestPayDemandResponse
 */
RequestPayDemandResponse Client::requestPayDemandWithOptions(const RequestPayDemandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  if (!!request.hasPrice()) {
    query["Price"] = request.price();
  }

  if (!!request.hasProduceType()) {
    query["ProduceType"] = request.produceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RequestPayDemand"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RequestPayDemandResponse>();
}

/**
 * @param request RequestPayDemandRequest
 * @return RequestPayDemandResponse
 */
RequestPayDemandResponse Client::requestPayDemand(const RequestPayDemandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return requestPayDemandWithOptions(request, runtime);
}

/**
 * @param request ReserveDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReserveDomainResponse
 */
ReserveDomainResponse Client::reserveDomainWithOptions(const ReserveDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannels()) {
    body["Channels"] = request.channels();
  }

  if (!!request.hasDomainName()) {
    body["DomainName"] = request.domainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReserveDomain"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReserveDomainResponse>();
}

/**
 * @param request ReserveDomainRequest
 * @return ReserveDomainResponse
 */
ReserveDomainResponse Client::reserveDomain(const ReserveDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reserveDomainWithOptions(request, runtime);
}

/**
 * @param request ReserveIntlDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReserveIntlDomainResponse
 */
ReserveIntlDomainResponse Client::reserveIntlDomainWithOptions(const ReserveIntlDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDomainName()) {
    body["DomainName"] = request.domainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReserveIntlDomain"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReserveIntlDomainResponse>();
}

/**
 * @param request ReserveIntlDomainRequest
 * @return ReserveIntlDomainResponse
 */
ReserveIntlDomainResponse Client::reserveIntlDomain(const ReserveIntlDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reserveIntlDomainWithOptions(request, runtime);
}

/**
 * @summary 严选列表导出，明日凌晨2点前生成文件，导出凌晨1点前所有在售严选域名
 *
 * @param request SelectedDomainListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SelectedDomainListResponse
 */
SelectedDomainListResponse Client::selectedDomainListWithOptions(const SelectedDomainListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListDate()) {
    query["ListDate"] = request.listDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SelectedDomainList"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SelectedDomainListResponse>();
}

/**
 * @summary 严选列表导出，明日凌晨2点前生成文件，导出凌晨1点前所有在售严选域名
 *
 * @param request SelectedDomainListRequest
 * @return SelectedDomainListResponse
 */
SelectedDomainListResponse Client::selectedDomainList(const SelectedDomainListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return selectedDomainListWithOptions(request, runtime);
}

/**
 * @summary 提交采购信息
 *
 * @param request SubmitPurchaseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitPurchaseInfoResponse
 */
SubmitPurchaseInfoResponse Client::submitPurchaseInfoWithOptions(const SubmitPurchaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizId()) {
    body["BizId"] = request.bizId();
  }

  if (!!request.hasPurchaseCurrency()) {
    body["PurchaseCurrency"] = request.purchaseCurrency();
  }

  if (!!request.hasPurchasePrice()) {
    body["PurchasePrice"] = request.purchasePrice();
  }

  if (!!request.hasPurchaseProofs()) {
    body["PurchaseProofs"] = request.purchaseProofs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitPurchaseInfo"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitPurchaseInfoResponse>();
}

/**
 * @summary 提交采购信息
 *
 * @param request SubmitPurchaseInfoRequest
 * @return SubmitPurchaseInfoResponse
 */
SubmitPurchaseInfoResponse Client::submitPurchaseInfo(const SubmitPurchaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitPurchaseInfoWithOptions(request, runtime);
}

/**
 * @summary 合作方同步报价
 *
 * @param request UpdatePartnerReservePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePartnerReservePriceResponse
 */
UpdatePartnerReservePriceResponse Client::updatePartnerReservePriceWithOptions(const UpdatePartnerReservePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBiddingId()) {
    body["BiddingId"] = request.biddingId();
  }

  if (!!request.hasDomainName()) {
    body["DomainName"] = request.domainName();
  }

  if (!!request.hasPartnerType()) {
    body["PartnerType"] = request.partnerType();
  }

  if (!!request.hasReservePrice()) {
    body["ReservePrice"] = request.reservePrice();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdatePartnerReservePrice"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePartnerReservePriceResponse>();
}

/**
 * @summary 合作方同步报价
 *
 * @param request UpdatePartnerReservePriceRequest
 * @return UpdatePartnerReservePriceResponse
 */
UpdatePartnerReservePriceResponse Client::updatePartnerReservePrice(const UpdatePartnerReservePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePartnerReservePriceWithOptions(request, runtime);
}

/**
 * @summary 域名建站添加DNS记录
 *
 * @param request WebsiteAddDnsRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WebsiteAddDnsRecordResponse
 */
WebsiteAddDnsRecordResponse Client::websiteAddDnsRecordWithOptions(const WebsiteAddDnsRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasRr()) {
    query["Rr"] = request.rr();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  if (!!request.hasWebsiteNo()) {
    query["WebsiteNo"] = request.websiteNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WebsiteAddDnsRecord"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WebsiteAddDnsRecordResponse>();
}

/**
 * @summary 域名建站添加DNS记录
 *
 * @param request WebsiteAddDnsRecordRequest
 * @return WebsiteAddDnsRecordResponse
 */
WebsiteAddDnsRecordResponse Client::websiteAddDnsRecord(const WebsiteAddDnsRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return websiteAddDnsRecordWithOptions(request, runtime);
}

/**
 * @summary 域名建站删除DNS记录
 *
 * @param request WebsiteDeleteDnsRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WebsiteDeleteDnsRecordResponse
 */
WebsiteDeleteDnsRecordResponse Client::websiteDeleteDnsRecordWithOptions(const WebsiteDeleteDnsRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasRr()) {
    query["Rr"] = request.rr();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  if (!!request.hasWebsiteNo()) {
    query["WebsiteNo"] = request.websiteNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WebsiteDeleteDnsRecord"},
    {"version" , "2018-02-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WebsiteDeleteDnsRecordResponse>();
}

/**
 * @summary 域名建站删除DNS记录
 *
 * @param request WebsiteDeleteDnsRecordRequest
 * @return WebsiteDeleteDnsRecordResponse
 */
WebsiteDeleteDnsRecordResponse Client::websiteDeleteDnsRecord(const WebsiteDeleteDnsRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return websiteDeleteDnsRecordWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Domain20180208