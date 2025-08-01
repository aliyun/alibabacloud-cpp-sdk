// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/yunjian_20211217.hpp>
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

using namespace Alibabacloud_Yunjian20211217;

Alibabacloud_Yunjian20211217::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("yunjian"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Yunjian20211217::Client::getEndpoint(shared_ptr<string> productId,
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

CreateDemandPlanResponse Alibabacloud_Yunjian20211217::Client::createDemandPlanWithOptions(shared_ptr<CreateDemandPlanRequest> request, shared_ptr<CreateDemandPlanHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("accountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->demandType)) {
    body->insert(pair<string, string>("demandType", *request->demandType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    body->insert(pair<string, string>("period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->targetCid)) {
    body->insert(pair<string, long>("targetCid", *request->targetCid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->yunUserId)) {
    realHeaders->insert(pair<string, string>("Yun-User-Id", Darabonba_Util::Client::toJSONString(headers->yunUserId)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDemandPlan"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/demand/urgent/saveUrgentDemandPlanItem"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDemandPlanResponse(callApi(params, req, runtime));
}

CreateDemandPlanResponse Alibabacloud_Yunjian20211217::Client::createDemandPlan(shared_ptr<CreateDemandPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateDemandPlanHeaders> headers = make_shared<CreateDemandPlanHeaders>();
  return createDemandPlanWithOptions(request, headers, runtime);
}

CreateDemandPlanV2Response Alibabacloud_Yunjian20211217::Client::createDemandPlanV2WithOptions(shared_ptr<CreateDemandPlanV2Request> request, shared_ptr<CreateDemandPlanV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("accountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->demandType)) {
    body->insert(pair<string, string>("demandType", *request->demandType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("productType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->targetCid)) {
    body->insert(pair<string, long>("targetCid", *request->targetCid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->yunUserId)) {
    realHeaders->insert(pair<string, string>("Yun-User-Id", Darabonba_Util::Client::toJSONString(headers->yunUserId)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDemandPlanV2"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/demand/urgent/saveDemandPlan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDemandPlanV2Response(callApi(params, req, runtime));
}

CreateDemandPlanV2Response Alibabacloud_Yunjian20211217::Client::createDemandPlanV2(shared_ptr<CreateDemandPlanV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateDemandPlanV2Headers> headers = make_shared<CreateDemandPlanV2Headers>();
  return createDemandPlanV2WithOptions(request, headers, runtime);
}

DeleteUrgentDemandItemResponse Alibabacloud_Yunjian20211217::Client::deleteUrgentDemandItemWithOptions(shared_ptr<DeleteUrgentDemandItemRequest> request, shared_ptr<DeleteUrgentDemandItemHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifier)) {
    query->insert(pair<string, string>("modifier", *request->modifier));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->yunUserId)) {
    realHeaders->insert(pair<string, string>("Yun-User-Id", Darabonba_Util::Client::toJSONString(headers->yunUserId)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUrgentDemandItem"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/demand/urgent/deleteUrgentDemandItem"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUrgentDemandItemResponse(callApi(params, req, runtime));
}

DeleteUrgentDemandItemResponse Alibabacloud_Yunjian20211217::Client::deleteUrgentDemandItem(shared_ptr<DeleteUrgentDemandItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteUrgentDemandItemHeaders> headers = make_shared<DeleteUrgentDemandItemHeaders>();
  return deleteUrgentDemandItemWithOptions(request, headers, runtime);
}

DeleteUrgentDemandPlanResponse Alibabacloud_Yunjian20211217::Client::deleteUrgentDemandPlanWithOptions(shared_ptr<DeleteUrgentDemandPlanRequest> request, shared_ptr<DeleteUrgentDemandPlanHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifier)) {
    query->insert(pair<string, string>("modifier", *request->modifier));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->yunUserId)) {
    realHeaders->insert(pair<string, string>("Yun-User-Id", Darabonba_Util::Client::toJSONString(headers->yunUserId)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUrgentDemandPlan"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/demand/urgent/deleteUrgentDemandPlan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUrgentDemandPlanResponse(callApi(params, req, runtime));
}

DeleteUrgentDemandPlanResponse Alibabacloud_Yunjian20211217::Client::deleteUrgentDemandPlan(shared_ptr<DeleteUrgentDemandPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteUrgentDemandPlanHeaders> headers = make_shared<DeleteUrgentDemandPlanHeaders>();
  return deleteUrgentDemandPlanWithOptions(request, headers, runtime);
}

DeliveryItemDetailSynResponse Alibabacloud_Yunjian20211217::Client::deliveryItemDetailSynWithOptions(shared_ptr<DeliveryItemDetailSynRequest> request, shared_ptr<DeliveryItemDetailSynHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    body->insert(pair<string, string>("channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DeliveryItemDetailSynRequestDeliveryItemDetailDTOS>>(request->deliveryItemDetailDTOS)) {
    body->insert(pair<string, vector<DeliveryItemDetailSynRequestDeliveryItemDetailDTOS>>("deliveryItemDetailDTOS", *request->deliveryItemDetailDTOS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryItemId)) {
    body->insert(pair<string, string>("deliveryItemId", *request->deliveryItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryPlanId)) {
    body->insert(pair<string, string>("deliveryPlanId", *request->deliveryPlanId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->yunUserId)) {
    realHeaders->insert(pair<string, string>("Yun-User-Id", Darabonba_Util::Client::toJSONString(headers->yunUserId)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeliveryItemDetailSyn"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/supply/deliveryItemDataSync"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeliveryItemDetailSynResponse(callApi(params, req, runtime));
}

DeliveryItemDetailSynResponse Alibabacloud_Yunjian20211217::Client::deliveryItemDetailSyn(shared_ptr<DeliveryItemDetailSynRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeliveryItemDetailSynHeaders> headers = make_shared<DeliveryItemDetailSynHeaders>();
  return deliveryItemDetailSynWithOptions(request, headers, runtime);
}

GetUrgentDemandItemListResponse Alibabacloud_Yunjian20211217::Client::getUrgentDemandItemListWithOptions(shared_ptr<GetUrgentDemandItemListRequest> request, shared_ptr<GetUrgentDemandItemListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    body->insert(pair<string, string>("commodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityTypeCode)) {
    body->insert(pair<string, string>("commodityTypeCode", *request->commodityTypeCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->planId)) {
    body->insert(pair<string, long>("planId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    body->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zone)) {
    body->insert(pair<string, string>("zone", *request->zone));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->yunUserId)) {
    realHeaders->insert(pair<string, string>("Yun-User-Id", Darabonba_Util::Client::toJSONString(headers->yunUserId)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUrgentDemandItemList"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/demand/urgent/getUrgentDemandItemList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUrgentDemandItemListResponse(callApi(params, req, runtime));
}

GetUrgentDemandItemListResponse Alibabacloud_Yunjian20211217::Client::getUrgentDemandItemList(shared_ptr<GetUrgentDemandItemListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUrgentDemandItemListHeaders> headers = make_shared<GetUrgentDemandItemListHeaders>();
  return getUrgentDemandItemListWithOptions(request, headers, runtime);
}

GetUrgentDemandPlanDetailResponse Alibabacloud_Yunjian20211217::Client::getUrgentDemandPlanDetailWithOptions(shared_ptr<GetUrgentDemandPlanDetailRequest> request, shared_ptr<GetUrgentDemandPlanDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    body->insert(pair<string, string>("planId", *request->planId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->yunUserId)) {
    realHeaders->insert(pair<string, string>("Yun-User-Id", Darabonba_Util::Client::toJSONString(headers->yunUserId)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUrgentDemandPlanDetail"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/demand/urgent/getUrgentDemandPlanDetail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUrgentDemandPlanDetailResponse(callApi(params, req, runtime));
}

GetUrgentDemandPlanDetailResponse Alibabacloud_Yunjian20211217::Client::getUrgentDemandPlanDetail(shared_ptr<GetUrgentDemandPlanDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUrgentDemandPlanDetailHeaders> headers = make_shared<GetUrgentDemandPlanDetailHeaders>();
  return getUrgentDemandPlanDetailWithOptions(request, headers, runtime);
}

GetUrgentDemandPlanListResponse Alibabacloud_Yunjian20211217::Client::getUrgentDemandPlanListWithOptions(shared_ptr<GetUrgentDemandPlanListRequest> request, shared_ptr<GetUrgentDemandPlanListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    body->insert(pair<string, string>("period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->planType)) {
    body->insert(pair<string, long>("planType", *request->planType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->yunUserId)) {
    realHeaders->insert(pair<string, string>("Yun-User-Id", Darabonba_Util::Client::toJSONString(headers->yunUserId)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUrgentDemandPlanList"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/demand/urgent/getUrgentDemandPlanList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUrgentDemandPlanListResponse(callApi(params, req, runtime));
}

GetUrgentDemandPlanListResponse Alibabacloud_Yunjian20211217::Client::getUrgentDemandPlanList(shared_ptr<GetUrgentDemandPlanListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUrgentDemandPlanListHeaders> headers = make_shared<GetUrgentDemandPlanListHeaders>();
  return getUrgentDemandPlanListWithOptions(request, headers, runtime);
}

PageDemandPlanWithDemandInfoResponse Alibabacloud_Yunjian20211217::Client::pageDemandPlanWithDemandInfoWithOptions(shared_ptr<PageDemandPlanWithDemandInfoRequest> request, shared_ptr<PageDemandPlanWithDemandInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->approvalStatus)) {
    body->insert(pair<string, string>("approvalStatus", *request->approvalStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeEnd)) {
    body->insert(pair<string, string>("createTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeStart)) {
    body->insert(pair<string, string>("createTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorStaffId)) {
    body->insert(pair<string, string>("creatorStaffId", *request->creatorStaffId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->demandDeliveryStatus)) {
    body->insert(pair<string, string>("demandDeliveryStatus", *request->demandDeliveryStatus));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->demandId)) {
    body->insert(pair<string, vector<long>>("demandId", *request->demandId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->demandPlanId)) {
    body->insert(pair<string, vector<long>>("demandPlanId", *request->demandPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->demandPlanStatus)) {
    body->insert(pair<string, string>("demandPlanStatus", *request->demandPlanStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    body->insert(pair<string, string>("operator_", *request->operator_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roCode)) {
    body->insert(pair<string, string>("roCode", *request->roCode));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->yunUserId)) {
    realHeaders->insert(pair<string, string>("Yun-User-Id", Darabonba_Util::Client::toJSONString(headers->yunUserId)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PageDemandPlanWithDemandInfo"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/demand/getDemandPlanList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PageDemandPlanWithDemandInfoResponse(callApi(params, req, runtime));
}

PageDemandPlanWithDemandInfoResponse Alibabacloud_Yunjian20211217::Client::pageDemandPlanWithDemandInfo(shared_ptr<PageDemandPlanWithDemandInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PageDemandPlanWithDemandInfoHeaders> headers = make_shared<PageDemandPlanWithDemandInfoHeaders>();
  return pageDemandPlanWithDemandInfoWithOptions(request, headers, runtime);
}

PushResourcePlanResponse Alibabacloud_Yunjian20211217::Client::pushResourcePlanWithOptions(shared_ptr<PushResourcePlanRequest> request, shared_ptr<PushResourcePlanHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bufferCnt)) {
    body->insert(pair<string, long>("bufferCnt", *request->bufferCnt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->demandCount)) {
    body->insert(pair<string, long>("demandCount", *request->demandCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->demandId)) {
    body->insert(pair<string, string>("demandId", *request->demandId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<PushResourcePlanRequestMethodList>>(request->methodList)) {
    body->insert(pair<string, vector<PushResourcePlanRequestMethodList>>("methodList", *request->methodList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("requestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requireCnt)) {
    body->insert(pair<string, long>("requireCnt", *request->requireCnt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subDemandId)) {
    body->insert(pair<string, string>("subDemandId", *request->subDemandId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->yunUserId)) {
    realHeaders->insert(pair<string, string>("Yun-User-Id", Darabonba_Util::Client::toJSONString(headers->yunUserId)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushResourcePlan"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/supply/resourcePlan/push"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushResourcePlanResponse(callApi(params, req, runtime));
}

PushResourcePlanResponse Alibabacloud_Yunjian20211217::Client::pushResourcePlan(shared_ptr<PushResourcePlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PushResourcePlanHeaders> headers = make_shared<PushResourcePlanHeaders>();
  return pushResourcePlanWithOptions(request, headers, runtime);
}

QueryDeliveredSupplyItemsResponse Alibabacloud_Yunjian20211217::Client::queryDeliveredSupplyItemsWithOptions(shared_ptr<QueryDeliveredSupplyItemsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("accountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityTypeCode)) {
    query->insert(pair<string, string>("commodityTypeCode", *request->commodityTypeCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeliveredSupplyItems"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/supply/queryDeliveredSupplyItems"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return QueryDeliveredSupplyItemsResponse(callApi(params, req, runtime));
}

QueryDeliveredSupplyItemsResponse Alibabacloud_Yunjian20211217::Client::queryDeliveredSupplyItems(shared_ptr<QueryDeliveredSupplyItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryDeliveredSupplyItemsWithOptions(request, headers, runtime);
}

QueryPeriodBudgetBillResponse Alibabacloud_Yunjian20211217::Client::queryPeriodBudgetBillWithOptions(shared_ptr<QueryPeriodBudgetBillRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->objectIds)) {
    query->insert(pair<string, string>("objectIds", *request->objectIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectType)) {
    query->insert(pair<string, string>("objectType", *request->objectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("period", *request->period));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPeriodBudgetBill"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/annual/budget/queryPeriodBudgetBill"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPeriodBudgetBillResponse(callApi(params, req, runtime));
}

QueryPeriodBudgetBillResponse Alibabacloud_Yunjian20211217::Client::queryPeriodBudgetBill(shared_ptr<QueryPeriodBudgetBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryPeriodBudgetBillWithOptions(request, headers, runtime);
}

SaveUrgentDemandItemResponse Alibabacloud_Yunjian20211217::Client::saveUrgentDemandItemWithOptions(shared_ptr<SaveUrgentDemandItemRequest> request, shared_ptr<SaveUrgentDemandItemHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("accountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    body->insert(pair<string, string>("creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effectTime)) {
    body->insert(pair<string, string>("effectTime", *request->effectTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifier)) {
    body->insert(pair<string, string>("modifier", *request->modifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    body->insert(pair<string, string>("networkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payDuration)) {
    body->insert(pair<string, string>("payDuration", *request->payDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payDurationUnit)) {
    body->insert(pair<string, string>("payDurationUnit", *request->payDurationUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    body->insert(pair<string, string>("payType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->planId)) {
    body->insert(pair<string, long>("planId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    body->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<SaveUrgentDemandItemRequestUrgentDemandEbsRequest>(request->urgentDemandEbsRequest)) {
    body->insert(pair<string, SaveUrgentDemandItemRequestUrgentDemandEbsRequest>("urgentDemandEbsRequest", *request->urgentDemandEbsRequest));
  }
  if (!Darabonba_Util::Client::isUnset<SaveUrgentDemandItemRequestUrgentDemandEcsRequest>(request->urgentDemandEcsRequest)) {
    body->insert(pair<string, SaveUrgentDemandItemRequestUrgentDemandEcsRequest>("urgentDemandEcsRequest", *request->urgentDemandEcsRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zone)) {
    body->insert(pair<string, string>("zone", *request->zone));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->yunUserId)) {
    realHeaders->insert(pair<string, string>("Yun-User-Id", Darabonba_Util::Client::toJSONString(headers->yunUserId)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveUrgentDemandItem"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/demand/urgent/saveUrgentDemandItem"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveUrgentDemandItemResponse(callApi(params, req, runtime));
}

SaveUrgentDemandItemResponse Alibabacloud_Yunjian20211217::Client::saveUrgentDemandItem(shared_ptr<SaveUrgentDemandItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SaveUrgentDemandItemHeaders> headers = make_shared<SaveUrgentDemandItemHeaders>();
  return saveUrgentDemandItemWithOptions(request, headers, runtime);
}

SubmitUrgentDemandPlanResponse Alibabacloud_Yunjian20211217::Client::submitUrgentDemandPlanWithOptions(shared_ptr<SubmitUrgentDemandPlanRequest> request, shared_ptr<SubmitUrgentDemandPlanHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("planId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->yunUserId)) {
    realHeaders->insert(pair<string, string>("Yun-User-Id", Darabonba_Util::Client::toJSONString(headers->yunUserId)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitUrgentDemandPlan"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/demand/urgent/submitUrgentDemandPlan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitUrgentDemandPlanResponse(callApi(params, req, runtime));
}

SubmitUrgentDemandPlanResponse Alibabacloud_Yunjian20211217::Client::submitUrgentDemandPlan(shared_ptr<SubmitUrgentDemandPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SubmitUrgentDemandPlanHeaders> headers = make_shared<SubmitUrgentDemandPlanHeaders>();
  return submitUrgentDemandPlanWithOptions(request, headers, runtime);
}

AcceptFulfillmentDecisionResponse Alibabacloud_Yunjian20211217::Client::acceptFulfillmentDecisionWithOptions(shared_ptr<AcceptFulfillmentDecisionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->decisionConclusion)) {
    body->insert(pair<string, string>("DecisionConclusion", *request->decisionConclusion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->decisionType)) {
    body->insert(pair<string, string>("DecisionType", *request->decisionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("acceptFulfillmentDecision"))},
    {"version", boost::any(string("2021-12-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/acceptFulfillmentDecision"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AcceptFulfillmentDecisionResponse(callApi(params, req, runtime));
}

AcceptFulfillmentDecisionResponse Alibabacloud_Yunjian20211217::Client::acceptFulfillmentDecision(shared_ptr<AcceptFulfillmentDecisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return acceptFulfillmentDecisionWithOptions(request, headers, runtime);
}

