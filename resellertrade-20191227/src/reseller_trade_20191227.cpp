// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/reseller_trade_20191227.hpp>
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

using namespace Alibabacloud_ResellerTrade20191227;

Alibabacloud_ResellerTrade20191227::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "resellertrade.aliyuncs.com"},
    {"ap-northeast-2-pop", "resellertrade.aliyuncs.com"},
    {"ap-south-1", "resellertrade.aliyuncs.com"},
    {"ap-southeast-1", "resellertrade.aliyuncs.com"},
    {"ap-southeast-2", "resellertrade.aliyuncs.com"},
    {"ap-southeast-3", "resellertrade.aliyuncs.com"},
    {"ap-southeast-5", "resellertrade.aliyuncs.com"},
    {"cn-beijing", "resellertrade.aliyuncs.com"},
    {"cn-beijing-finance-1", "resellertrade.aliyuncs.com"},
    {"cn-beijing-finance-pop", "resellertrade.aliyuncs.com"},
    {"cn-beijing-gov-1", "resellertrade.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "resellertrade.aliyuncs.com"},
    {"cn-chengdu", "resellertrade.aliyuncs.com"},
    {"cn-edge-1", "resellertrade.aliyuncs.com"},
    {"cn-fujian", "resellertrade.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "resellertrade.aliyuncs.com"},
    {"cn-hangzhou", "resellertrade.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "resellertrade.aliyuncs.com"},
    {"cn-hangzhou-finance", "resellertrade.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "resellertrade.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "resellertrade.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "resellertrade.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "resellertrade.aliyuncs.com"},
    {"cn-hangzhou-test-306", "resellertrade.aliyuncs.com"},
    {"cn-hongkong", "resellertrade.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "resellertrade.aliyuncs.com"},
    {"cn-huhehaote", "resellertrade.aliyuncs.com"},
    {"cn-north-2-gov-1", "resellertrade.aliyuncs.com"},
    {"cn-qingdao", "resellertrade.aliyuncs.com"},
    {"cn-qingdao-nebula", "resellertrade.aliyuncs.com"},
    {"cn-shanghai", "resellertrade.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "resellertrade.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "resellertrade.aliyuncs.com"},
    {"cn-shanghai-finance-1", "resellertrade.aliyuncs.com"},
    {"cn-shanghai-inner", "resellertrade.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "resellertrade.aliyuncs.com"},
    {"cn-shenzhen", "resellertrade.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "resellertrade.aliyuncs.com"},
    {"cn-shenzhen-inner", "resellertrade.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "resellertrade.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "resellertrade.aliyuncs.com"},
    {"cn-wuhan", "resellertrade.aliyuncs.com"},
    {"cn-yushanfang", "resellertrade.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "resellertrade.aliyuncs.com"},
    {"cn-zhangjiakou", "resellertrade.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "resellertrade.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "resellertrade.aliyuncs.com"},
    {"eu-central-1", "resellertrade.aliyuncs.com"},
    {"eu-west-1", "resellertrade.aliyuncs.com"},
    {"eu-west-1-oxs", "resellertrade.aliyuncs.com"},
    {"me-east-1", "resellertrade.aliyuncs.com"},
    {"rus-west-1-pop", "resellertrade.aliyuncs.com"},
    {"us-east-1", "resellertrade.aliyuncs.com"},
    {"us-west-1", "resellertrade.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("resellertrade"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ResellerTrade20191227::Client::getEndpoint(shared_ptr<string> productId,
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

CreateCouponTemplateResponse Alibabacloud_ResellerTrade20191227::Client::createCouponTemplateWithOptions(shared_ptr<CreateCouponTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->activitySite)) {
    body->insert(pair<string, long>("ActivitySite", *request->activitySite));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bid)) {
    body->insert(pair<string, long>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->certainMoney)) {
    body->insert(pair<string, double>("CertainMoney", *request->certainMoney));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    body->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityType)) {
    body->insert(pair<string, string>("CommodityType", *request->commodityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->controlType)) {
    body->insert(pair<string, string>("ControlType", *request->controlType));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->couponAmount)) {
    body->insert(pair<string, double>("CouponAmount", *request->couponAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->couponEndTime)) {
    body->insert(pair<string, string>("CouponEndTime", *request->couponEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->couponFixedType)) {
    body->insert(pair<string, string>("CouponFixedType", *request->couponFixedType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->couponStartTime)) {
    body->insert(pair<string, string>("CouponStartTime", *request->couponStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->couponType)) {
    body->insert(pair<string, string>("CouponType", *request->couponType));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateCouponTemplateRequestCurrency>(request->currency)) {
    bodyFlat->insert(pair<string, CreateCouponTemplateRequestCurrency>("Currency", *request->currency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->discountRate)) {
    body->insert(pair<string, double>("DiscountRate", *request->discountRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->extendsMap)) {
    bodyFlat->insert(pair<string, map<string, string>>("ExtendsMap", *request->extendsMap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromApp)) {
    body->insert(pair<string, string>("FromApp", *request->fromApp));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->itemCodeSet)) {
    body->insert(pair<string, vector<string>>("ItemCodeSet", *request->itemCodeSet));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->market)) {
    body->insert(pair<string, string>("Market", *request->market));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->marketType)) {
    body->insert(pair<string, long>("MarketType", *request->marketType));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxRelease)) {
    body->insert(pair<string, double>("MaxRelease", *request->maxRelease));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageId)) {
    body->insert(pair<string, string>("MessageId", *request->messageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    body->insert(pair<string, string>("Operator_", *request->operator_));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->orderTypeSet)) {
    body->insert(pair<string, vector<string>>("OrderTypeSet", *request->orderTypeSet));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->perLimitNum)) {
    body->insert(pair<string, long>("PerLimitNum", *request->perLimitNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->promotionId)) {
    body->insert(pair<string, long>("PromotionId", *request->promotionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relativeSecond)) {
    body->insert(pair<string, long>("RelativeSecond", *request->relativeSecond));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->selectionIdSet)) {
    body->insert(pair<string, vector<string>>("SelectionIdSet", *request->selectionIdSet));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sellerId)) {
    body->insert(pair<string, long>("SellerId", *request->sellerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->site)) {
    body->insert(pair<string, string>("Site", *request->site));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spId)) {
    body->insert(pair<string, long>("SpId", *request->spId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->universalType)) {
    body->insert(pair<string, string>("UniversalType", *request->universalType));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->upperLimit)) {
    body->insert(pair<string, double>("UpperLimit", *request->upperLimit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->usageCount)) {
    body->insert(pair<string, long>("UsageCount", *request->usageCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->useScene)) {
    body->insert(pair<string, string>("UseScene", *request->useScene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPkAmount)) {
    body->insert(pair<string, string>("UserPkAmount", *request->userPkAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validityType)) {
    body->insert(pair<string, string>("ValidityType", *request->validityType));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCouponTemplate"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCouponTemplateResponse(callApi(params, req, runtime));
}

CreateCouponTemplateResponse Alibabacloud_ResellerTrade20191227::Client::createCouponTemplate(shared_ptr<CreateCouponTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCouponTemplateWithOptions(request, runtime);
}

DiscardCouponListResponse Alibabacloud_ResellerTrade20191227::Client::discardCouponListWithOptions(shared_ptr<DiscardCouponListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->couponList)) {
    body->insert(pair<string, vector<long>>("CouponList", *request->couponList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DiscardCouponList"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DiscardCouponListResponse(callApi(params, req, runtime));
}

DiscardCouponListResponse Alibabacloud_ResellerTrade20191227::Client::discardCouponList(shared_ptr<DiscardCouponListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return discardCouponListWithOptions(request, runtime);
}

GetCouponPageResponse Alibabacloud_ResellerTrade20191227::Client::getCouponPageWithOptions(shared_ptr<GetCouponPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCouponPage"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCouponPageResponse(callApi(params, req, runtime));
}

GetCouponPageResponse Alibabacloud_ResellerTrade20191227::Client::getCouponPage(shared_ptr<GetCouponPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCouponPageWithOptions(request, runtime);
}

GetCustomerListResponse Alibabacloud_ResellerTrade20191227::Client::getCustomerListWithOptions(shared_ptr<GetCustomerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomerList"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomerListResponse(callApi(params, req, runtime));
}

GetCustomerListResponse Alibabacloud_ResellerTrade20191227::Client::getCustomerList(shared_ptr<GetCustomerListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomerListWithOptions(request, runtime);
}

GetRelationResponse Alibabacloud_ResellerTrade20191227::Client::getRelationWithOptions(shared_ptr<GetRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRelation"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRelationResponse(callApi(params, req, runtime));
}

GetRelationResponse Alibabacloud_ResellerTrade20191227::Client::getRelation(shared_ptr<GetRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRelationWithOptions(request, runtime);
}

GetResellerPayOrderResponse Alibabacloud_ResellerTrade20191227::Client::getResellerPayOrderWithOptions(shared_ptr<GetResellerPayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResellerPayOrder"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResellerPayOrderResponse(callApi(params, req, runtime));
}

GetResellerPayOrderResponse Alibabacloud_ResellerTrade20191227::Client::getResellerPayOrder(shared_ptr<GetResellerPayOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResellerPayOrderWithOptions(request, runtime);
}

LabelPartnerUserResponse Alibabacloud_ResellerTrade20191227::Client::labelPartnerUserWithOptions(shared_ptr<LabelPartnerUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->userPK)) {
    body->insert(pair<string, long>("UserPK", *request->userPK));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userTag)) {
    body->insert(pair<string, string>("UserTag", *request->userTag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LabelPartnerUser"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LabelPartnerUserResponse(callApi(params, req, runtime));
}

LabelPartnerUserResponse Alibabacloud_ResellerTrade20191227::Client::labelPartnerUser(shared_ptr<LabelPartnerUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return labelPartnerUserWithOptions(request, runtime);
}

MigrateResourceResponse Alibabacloud_ResellerTrade20191227::Client::migrateResourceWithOptions(shared_ptr<MigrateResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionCode)) {
    body->insert(pair<string, string>("ActionCode", *request->actionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MigrateResource"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MigrateResourceResponse(callApi(params, req, runtime));
}

MigrateResourceResponse Alibabacloud_ResellerTrade20191227::Client::migrateResource(shared_ptr<MigrateResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return migrateResourceWithOptions(request, runtime);
}

OfflineActivityResponse Alibabacloud_ResellerTrade20191227::Client::offlineActivityWithOptions(shared_ptr<OfflineActivityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->activityList)) {
    body->insert(pair<string, vector<long>>("ActivityList", *request->activityList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OfflineActivity"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OfflineActivityResponse(callApi(params, req, runtime));
}

OfflineActivityResponse Alibabacloud_ResellerTrade20191227::Client::offlineActivity(shared_ptr<OfflineActivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return offlineActivityWithOptions(request, runtime);
}

PayResultCallbackResponse Alibabacloud_ResellerTrade20191227::Client::payResultCallbackWithOptions(shared_ptr<PayResultCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payStatus)) {
    query->insert(pair<string, string>("PayStatus", *request->payStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payTime)) {
    query->insert(pair<string, string>("PayTime", *request->payTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PayResultCallback"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PayResultCallbackResponse(callApi(params, req, runtime));
}

PayResultCallbackResponse Alibabacloud_ResellerTrade20191227::Client::payResultCallback(shared_ptr<PayResultCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return payResultCallbackWithOptions(request, runtime);
}

PublicActivityResponse Alibabacloud_ResellerTrade20191227::Client::publicActivityWithOptions(shared_ptr<PublicActivityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->activityList)) {
    body->insert(pair<string, vector<long>>("ActivityList", *request->activityList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapType)) {
    body->insert(pair<string, string>("SnapType", *request->snapType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublicActivity"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublicActivityResponse(callApi(params, req, runtime));
}

PublicActivityResponse Alibabacloud_ResellerTrade20191227::Client::publicActivity(shared_ptr<PublicActivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publicActivityWithOptions(request, runtime);
}

QueryActivityResponse Alibabacloud_ResellerTrade20191227::Client::queryActivityWithOptions(shared_ptr<QueryActivityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->activityId)) {
    body->insert(pair<string, long>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapType)) {
    body->insert(pair<string, string>("SnapType", *request->snapType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryActivity"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryActivityResponse(callApi(params, req, runtime));
}

QueryActivityResponse Alibabacloud_ResellerTrade20191227::Client::queryActivity(shared_ptr<QueryActivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryActivityWithOptions(request, runtime);
}

QueryEcoRelationResponse Alibabacloud_ResellerTrade20191227::Client::queryEcoRelationWithOptions(shared_ptr<QueryEcoRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->relationTime)) {
    body->insert(pair<string, string>("RelationTime", *request->relationTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    body->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEcoRelation"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEcoRelationResponse(callApi(params, req, runtime));
}

QueryEcoRelationResponse Alibabacloud_ResellerTrade20191227::Client::queryEcoRelation(shared_ptr<QueryEcoRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEcoRelationWithOptions(request, runtime);
}

SaveActivityResponse Alibabacloud_ResellerTrade20191227::Client::saveActivityWithOptions(shared_ptr<SaveActivityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SaveActivityShrinkRequest> request = make_shared<SaveActivityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extendMap)) {
    request->extendMapShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extendMap, make_shared<string>("ExtendMap"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->activityName)) {
    body->insert(pair<string, string>("ActivityName", *request->activityName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->blackUidList)) {
    body->insert(pair<string, vector<long>>("BlackUidList", *request->blackUidList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendMapShrink)) {
    body->insert(pair<string, string>("ExtendMap", *request->extendMapShrink));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SaveActivityShrinkRequestFusionPromotionParamList>>(request->fusionPromotionParamList)) {
    body->insert(pair<string, vector<SaveActivityShrinkRequestFusionPromotionParamList>>("FusionPromotionParamList", *request->fusionPromotionParamList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publishTag)) {
    body->insert(pair<string, string>("PublishTag", *request->publishTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->testAccountUidList)) {
    body->insert(pair<string, vector<long>>("TestAccountUidList", *request->testAccountUidList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->whiteUidList)) {
    body->insert(pair<string, vector<long>>("WhiteUidList", *request->whiteUidList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveActivity"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveActivityResponse(callApi(params, req, runtime));
}

SaveActivityResponse Alibabacloud_ResellerTrade20191227::Client::saveActivity(shared_ptr<SaveActivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveActivityWithOptions(request, runtime);
}

SendCouponResponse Alibabacloud_ResellerTrade20191227::Client::sendCouponWithOptions(shared_ptr<SendCouponRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bid)) {
    body->insert(pair<string, long>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromApp)) {
    body->insert(pair<string, string>("FromApp", *request->fromApp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    body->insert(pair<string, string>("Operator_", *request->operator_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sellerId)) {
    body->insert(pair<string, long>("SellerId", *request->sellerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    body->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SendCouponRequestUserAmountModelList>>(request->userAmountModelList)) {
    body->insert(pair<string, vector<SendCouponRequestUserAmountModelList>>("UserAmountModelList", *request->userAmountModelList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendCoupon"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendCouponResponse(callApi(params, req, runtime));
}

SendCouponResponse Alibabacloud_ResellerTrade20191227::Client::sendCoupon(shared_ptr<SendCouponRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCouponWithOptions(request, runtime);
}

TransferResourceResponse Alibabacloud_ResellerTrade20191227::Client::transferResourceWithOptions(shared_ptr<TransferResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionCode)) {
    body->insert(pair<string, string>("ActionCode", *request->actionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransferResource"))},
    {"version", boost::any(string("2019-12-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransferResourceResponse(callApi(params, req, runtime));
}

TransferResourceResponse Alibabacloud_ResellerTrade20191227::Client::transferResource(shared_ptr<TransferResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferResourceWithOptions(request, runtime);
}

