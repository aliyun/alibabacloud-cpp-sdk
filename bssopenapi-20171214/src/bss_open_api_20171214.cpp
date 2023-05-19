// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/bss_open_api_20171214.hpp>
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

using namespace Alibabacloud_BssOpenApi20171214;

Alibabacloud_BssOpenApi20171214::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "business.aliyuncs.com"},
    {"cn-shanghai", "business.aliyuncs.com"},
    {"ap-southeast-1", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2-pop", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "business.ap-southeast-1.aliyuncs.com"},
    {"cn-beijing", "business.aliyuncs.com"},
    {"cn-beijing-finance-1", "business.aliyuncs.com"},
    {"cn-beijing-finance-pop", "business.aliyuncs.com"},
    {"cn-beijing-gov-1", "business.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "business.aliyuncs.com"},
    {"cn-chengdu", "business.aliyuncs.com"},
    {"cn-edge-1", "business.aliyuncs.com"},
    {"cn-fujian", "business.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "business.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "business.aliyuncs.com"},
    {"cn-hangzhou-finance", "business.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "business.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "business.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "business.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "business.aliyuncs.com"},
    {"cn-hangzhou-test-306", "business.aliyuncs.com"},
    {"cn-hongkong", "business.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "business.aliyuncs.com"},
    {"cn-huhehaote", "business.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "business.aliyuncs.com"},
    {"cn-north-2-gov-1", "business.aliyuncs.com"},
    {"cn-qingdao", "business.aliyuncs.com"},
    {"cn-qingdao-nebula", "business.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "business.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "business.aliyuncs.com"},
    {"cn-shanghai-finance-1", "business.aliyuncs.com"},
    {"cn-shanghai-inner", "business.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "business.aliyuncs.com"},
    {"cn-shenzhen", "business.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "business.aliyuncs.com"},
    {"cn-shenzhen-inner", "business.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "business.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "business.aliyuncs.com"},
    {"cn-wuhan", "business.aliyuncs.com"},
    {"cn-wulanchabu", "business.aliyuncs.com"},
    {"cn-yushanfang", "business.aliyuncs.com"},
    {"cn-zhangbei", "business.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "business.aliyuncs.com"},
    {"cn-zhangjiakou", "business.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "business.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "business.aliyuncs.com"},
    {"eu-central-1", "business.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1", "business.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1-oxs", "business.ap-southeast-1.aliyuncs.com"},
    {"me-east-1", "business.ap-southeast-1.aliyuncs.com"},
    {"rus-west-1-pop", "business.ap-southeast-1.aliyuncs.com"},
    {"us-east-1", "business.ap-southeast-1.aliyuncs.com"},
    {"us-west-1", "business.ap-southeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("bssopenapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_BssOpenApi20171214::Client::getEndpoint(shared_ptr<string> productId,
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

AddAccountRelationResponse Alibabacloud_BssOpenApi20171214::Client::addAccountRelationWithOptions(shared_ptr<AddAccountRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->childNick)) {
    query->insert(pair<string, string>("ChildNick", *request->childNick));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->childUserId)) {
    query->insert(pair<string, long>("ChildUserId", *request->childUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentUserId)) {
    query->insert(pair<string, long>("ParentUserId", *request->parentUserId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->permissionCodes)) {
    query->insert(pair<string, vector<string>>("PermissionCodes", *request->permissionCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relationType)) {
    query->insert(pair<string, string>("RelationType", *request->relationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->roleCodes)) {
    query->insert(pair<string, vector<string>>("RoleCodes", *request->roleCodes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAccountRelation"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAccountRelationResponse(callApi(params, req, runtime));
}

AddAccountRelationResponse Alibabacloud_BssOpenApi20171214::Client::addAccountRelation(shared_ptr<AddAccountRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAccountRelationWithOptions(request, runtime);
}

AllocateCostUnitResourceResponse Alibabacloud_BssOpenApi20171214::Client::allocateCostUnitResourceWithOptions(shared_ptr<AllocateCostUnitResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fromUnitId)) {
    query->insert(pair<string, long>("FromUnitId", *request->fromUnitId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fromUnitUserId)) {
    query->insert(pair<string, long>("FromUnitUserId", *request->fromUnitUserId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AllocateCostUnitResourceRequestResourceInstanceList>>(request->resourceInstanceList)) {
    query->insert(pair<string, vector<AllocateCostUnitResourceRequestResourceInstanceList>>("ResourceInstanceList", *request->resourceInstanceList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->toUnitId)) {
    query->insert(pair<string, long>("ToUnitId", *request->toUnitId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->toUnitUserId)) {
    query->insert(pair<string, long>("ToUnitUserId", *request->toUnitUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AllocateCostUnitResource"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AllocateCostUnitResourceResponse(callApi(params, req, runtime));
}

AllocateCostUnitResourceResponse Alibabacloud_BssOpenApi20171214::Client::allocateCostUnitResource(shared_ptr<AllocateCostUnitResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateCostUnitResourceWithOptions(request, runtime);
}

ApplyInvoiceResponse Alibabacloud_BssOpenApi20171214::Client::applyInvoiceWithOptions(shared_ptr<ApplyInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->addressId)) {
    query->insert(pair<string, long>("AddressId", *request->addressId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyUserNick)) {
    query->insert(pair<string, string>("ApplyUserNick", *request->applyUserNick));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->customerId)) {
    query->insert(pair<string, long>("CustomerId", *request->customerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->invoiceAmount)) {
    query->insert(pair<string, long>("InvoiceAmount", *request->invoiceAmount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->invoiceByAmount)) {
    query->insert(pair<string, bool>("InvoiceByAmount", *request->invoiceByAmount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->invoicingType)) {
    query->insert(pair<string, long>("InvoicingType", *request->invoicingType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->processWay)) {
    query->insert(pair<string, long>("ProcessWay", *request->processWay));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->selectedIds)) {
    query->insert(pair<string, vector<long>>("SelectedIds", *request->selectedIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userRemark)) {
    query->insert(pair<string, string>("UserRemark", *request->userRemark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyInvoice"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyInvoiceResponse(callApi(params, req, runtime));
}

ApplyInvoiceResponse Alibabacloud_BssOpenApi20171214::Client::applyInvoice(shared_ptr<ApplyInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyInvoiceWithOptions(request, runtime);
}

CancelOrderResponse Alibabacloud_BssOpenApi20171214::Client::cancelOrderWithOptions(shared_ptr<CancelOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelOrder"))},
    {"version", boost::any(string("2017-12-14"))},
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

CancelOrderResponse Alibabacloud_BssOpenApi20171214::Client::cancelOrder(shared_ptr<CancelOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOrderWithOptions(request, runtime);
}

ChangeResellerConsumeAmountResponse Alibabacloud_BssOpenApi20171214::Client::changeResellerConsumeAmountWithOptions(shared_ptr<ChangeResellerConsumeAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adjustType)) {
    query->insert(pair<string, string>("AdjustType", *request->adjustType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->amount)) {
    query->insert(pair<string, string>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currency)) {
    query->insert(pair<string, string>("Currency", *request->currency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendMap)) {
    query->insert(pair<string, string>("ExtendMap", *request->extendMap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outBizId)) {
    query->insert(pair<string, string>("OutBizId", *request->outBizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResellerConsumeAmount"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeResellerConsumeAmountResponse(callApi(params, req, runtime));
}

ChangeResellerConsumeAmountResponse Alibabacloud_BssOpenApi20171214::Client::changeResellerConsumeAmount(shared_ptr<ChangeResellerConsumeAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResellerConsumeAmountWithOptions(request, runtime);
}

ConfirmRelationResponse Alibabacloud_BssOpenApi20171214::Client::confirmRelationWithOptions(shared_ptr<ConfirmRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->childUserId)) {
    query->insert(pair<string, long>("ChildUserId", *request->childUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->confirmCode)) {
    query->insert(pair<string, string>("ConfirmCode", *request->confirmCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentUserId)) {
    query->insert(pair<string, long>("ParentUserId", *request->parentUserId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->permissionCodes)) {
    query->insert(pair<string, vector<string>>("PermissionCodes", *request->permissionCodes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relationId)) {
    query->insert(pair<string, long>("RelationId", *request->relationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relationType)) {
    query->insert(pair<string, string>("RelationType", *request->relationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmRelation"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmRelationResponse(callApi(params, req, runtime));
}

ConfirmRelationResponse Alibabacloud_BssOpenApi20171214::Client::confirmRelation(shared_ptr<ConfirmRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmRelationWithOptions(request, runtime);
}

ConvertChargeTypeResponse Alibabacloud_BssOpenApi20171214::Client::convertChargeTypeWithOptions(shared_ptr<ConvertChargeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConvertChargeType"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConvertChargeTypeResponse(callApi(params, req, runtime));
}

ConvertChargeTypeResponse Alibabacloud_BssOpenApi20171214::Client::convertChargeType(shared_ptr<ConvertChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return convertChargeTypeWithOptions(request, runtime);
}

CreateAgAccountResponse Alibabacloud_BssOpenApi20171214::Client::createAgAccountWithOptions(shared_ptr<CreateAgAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountAttr)) {
    query->insert(pair<string, string>("AccountAttr", *request->accountAttr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cityName)) {
    query->insert(pair<string, string>("CityName", *request->cityName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enterpriseName)) {
    query->insert(pair<string, string>("EnterpriseName", *request->enterpriseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firstName)) {
    query->insert(pair<string, string>("FirstName", *request->firstName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lastName)) {
    query->insert(pair<string, string>("LastName", *request->lastName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginEmail)) {
    query->insert(pair<string, string>("LoginEmail", *request->loginEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nationCode)) {
    query->insert(pair<string, string>("NationCode", *request->nationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postcode)) {
    query->insert(pair<string, string>("Postcode", *request->postcode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provinceName)) {
    query->insert(pair<string, string>("ProvinceName", *request->provinceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAgAccount"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAgAccountResponse(callApi(params, req, runtime));
}

CreateAgAccountResponse Alibabacloud_BssOpenApi20171214::Client::createAgAccount(shared_ptr<CreateAgAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAgAccountWithOptions(request, runtime);
}

CreateCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::createCostUnitWithOptions(shared_ptr<CreateCostUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateCostUnitRequestUnitEntityList>>(request->unitEntityList)) {
    query->insert(pair<string, vector<CreateCostUnitRequestUnitEntityList>>("UnitEntityList", *request->unitEntityList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCostUnit"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCostUnitResponse(callApi(params, req, runtime));
}

CreateCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::createCostUnit(shared_ptr<CreateCostUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCostUnitWithOptions(request, runtime);
}

CreateInstanceResponse Alibabacloud_BssOpenApi20171214::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logistics)) {
    query->insert(pair<string, string>("Logistics", *request->logistics));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateInstanceRequestParameter>>(request->parameter)) {
    query->insert(pair<string, vector<CreateInstanceRequestParameter>>("Parameter", *request->parameter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->renewPeriod)) {
    query->insert(pair<string, long>("RenewPeriod", *request->renewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->renewalStatus)) {
    query->insert(pair<string, string>("RenewalStatus", *request->renewalStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstance"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceResponse(callApi(params, req, runtime));
}

CreateInstanceResponse Alibabacloud_BssOpenApi20171214::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceWithOptions(request, runtime);
}

CreateResellerUserQuotaResponse Alibabacloud_BssOpenApi20171214::Client::createResellerUserQuotaWithOptions(shared_ptr<CreateResellerUserQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->amount)) {
    query->insert(pair<string, string>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currency)) {
    query->insert(pair<string, string>("Currency", *request->currency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outBizId)) {
    query->insert(pair<string, string>("OutBizId", *request->outBizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResellerUserQuota"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResellerUserQuotaResponse(callApi(params, req, runtime));
}

CreateResellerUserQuotaResponse Alibabacloud_BssOpenApi20171214::Client::createResellerUserQuota(shared_ptr<CreateResellerUserQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResellerUserQuotaWithOptions(request, runtime);
}

CreateResourcePackageResponse Alibabacloud_BssOpenApi20171214::Client::createResourcePackageWithOptions(shared_ptr<CreateResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effectiveDate)) {
    query->insert(pair<string, string>("EffectiveDate", *request->effectiveDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    query->insert(pair<string, string>("PackageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specification)) {
    query->insert(pair<string, string>("Specification", *request->specification));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourcePackage"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourcePackageResponse(callApi(params, req, runtime));
}

CreateResourcePackageResponse Alibabacloud_BssOpenApi20171214::Client::createResourcePackage(shared_ptr<CreateResourcePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourcePackageWithOptions(request, runtime);
}

CreateSavingsPlansInstanceResponse Alibabacloud_BssOpenApi20171214::Client::createSavingsPlansInstanceWithOptions(shared_ptr<CreateSavingsPlansInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSavingsPlansInstanceShrinkRequest> request = make_shared<CreateSavingsPlansInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extendMap)) {
    request->extendMapShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extendMap, make_shared<string>("ExtendMap"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duration)) {
    query->insert(pair<string, string>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effectiveDate)) {
    query->insert(pair<string, string>("EffectiveDate", *request->effectiveDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendMapShrink)) {
    query->insert(pair<string, string>("ExtendMap", *request->extendMapShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payMode)) {
    query->insert(pair<string, string>("PayMode", *request->payMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolValue)) {
    query->insert(pair<string, string>("PoolValue", *request->poolValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specType)) {
    query->insert(pair<string, string>("SpecType", *request->specType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specification)) {
    query->insert(pair<string, string>("Specification", *request->specification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSavingsPlansInstance"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSavingsPlansInstanceResponse(callApi(params, req, runtime));
}

CreateSavingsPlansInstanceResponse Alibabacloud_BssOpenApi20171214::Client::createSavingsPlansInstance(shared_ptr<CreateSavingsPlansInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSavingsPlansInstanceWithOptions(request, runtime);
}

DeleteCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::deleteCostUnitWithOptions(shared_ptr<DeleteCostUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerUid)) {
    query->insert(pair<string, long>("OwnerUid", *request->ownerUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unitId)) {
    query->insert(pair<string, long>("UnitId", *request->unitId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCostUnit"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCostUnitResponse(callApi(params, req, runtime));
}

DeleteCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::deleteCostUnit(shared_ptr<DeleteCostUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCostUnitWithOptions(request, runtime);
}

DescribeCostBudgetsSummaryResponse Alibabacloud_BssOpenApi20171214::Client::describeCostBudgetsSummaryWithOptions(shared_ptr<DescribeCostBudgetsSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->budgetName)) {
    query->insert(pair<string, string>("BudgetName", *request->budgetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->budgetStatus)) {
    query->insert(pair<string, string>("BudgetStatus", *request->budgetStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->budgetType)) {
    query->insert(pair<string, string>("BudgetType", *request->budgetType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCostBudgetsSummary"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCostBudgetsSummaryResponse(callApi(params, req, runtime));
}

DescribeCostBudgetsSummaryResponse Alibabacloud_BssOpenApi20171214::Client::describeCostBudgetsSummary(shared_ptr<DescribeCostBudgetsSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCostBudgetsSummaryWithOptions(request, runtime);
}

DescribeInstanceAmortizedCostByAmortizationPeriodResponse Alibabacloud_BssOpenApi20171214::Client::describeInstanceAmortizedCostByAmortizationPeriodWithOptions(shared_ptr<DescribeInstanceAmortizedCostByAmortizationPeriodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->billOwnerIdList)) {
    body->insert(pair<string, vector<string>>("BillOwnerIdList", *request->billOwnerIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->billUserIdList)) {
    body->insert(pair<string, vector<string>>("BillUserIdList", *request->billUserIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    body->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->consumePeriodFilter)) {
    body->insert(pair<string, vector<string>>("ConsumePeriodFilter", *request->consumePeriodFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->costUnitCode)) {
    body->insert(pair<string, string>("CostUnitCode", *request->costUnitCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIdList)) {
    body->insert(pair<string, vector<string>>("InstanceIdList", *request->instanceIdList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productDetail)) {
    body->insert(pair<string, string>("ProductDetail", *request->productDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    body->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceAmortizedCostByAmortizationPeriod"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceAmortizedCostByAmortizationPeriodResponse(callApi(params, req, runtime));
}

DescribeInstanceAmortizedCostByAmortizationPeriodResponse Alibabacloud_BssOpenApi20171214::Client::describeInstanceAmortizedCostByAmortizationPeriod(shared_ptr<DescribeInstanceAmortizedCostByAmortizationPeriodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAmortizedCostByAmortizationPeriodWithOptions(request, runtime);
}

DescribeInstanceAmortizedCostByAmortizationPeriodDateResponse Alibabacloud_BssOpenApi20171214::Client::describeInstanceAmortizedCostByAmortizationPeriodDateWithOptions(shared_ptr<DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->amortizationDateEnd)) {
    body->insert(pair<string, string>("AmortizationDateEnd", *request->amortizationDateEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->amortizationDateStart)) {
    body->insert(pair<string, string>("AmortizationDateStart", *request->amortizationDateStart));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->billOwnerIdList)) {
    body->insert(pair<string, vector<string>>("BillOwnerIdList", *request->billOwnerIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->billUserIdList)) {
    body->insert(pair<string, vector<string>>("BillUserIdList", *request->billUserIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    body->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->costUnitCode)) {
    body->insert(pair<string, string>("CostUnitCode", *request->costUnitCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIdList)) {
    body->insert(pair<string, vector<string>>("InstanceIdList", *request->instanceIdList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productDetail)) {
    body->insert(pair<string, string>("ProductDetail", *request->productDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    body->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceAmortizedCostByAmortizationPeriodDate"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceAmortizedCostByAmortizationPeriodDateResponse(callApi(params, req, runtime));
}

DescribeInstanceAmortizedCostByAmortizationPeriodDateResponse Alibabacloud_BssOpenApi20171214::Client::describeInstanceAmortizedCostByAmortizationPeriodDate(shared_ptr<DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAmortizedCostByAmortizationPeriodDateWithOptions(request, runtime);
}

DescribeInstanceAmortizedCostByConsumePeriodResponse Alibabacloud_BssOpenApi20171214::Client::describeInstanceAmortizedCostByConsumePeriodWithOptions(shared_ptr<DescribeInstanceAmortizedCostByConsumePeriodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->amortizationPeriodFilter)) {
    body->insert(pair<string, vector<string>>("AmortizationPeriodFilter", *request->amortizationPeriodFilter));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->billOwnerIdList)) {
    body->insert(pair<string, vector<string>>("BillOwnerIdList", *request->billOwnerIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->billUserIdList)) {
    body->insert(pair<string, vector<string>>("BillUserIdList", *request->billUserIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    body->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->costUnitCode)) {
    body->insert(pair<string, string>("CostUnitCode", *request->costUnitCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIdList)) {
    body->insert(pair<string, vector<string>>("InstanceIdList", *request->instanceIdList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productDetail)) {
    body->insert(pair<string, string>("ProductDetail", *request->productDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    body->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceAmortizedCostByConsumePeriod"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceAmortizedCostByConsumePeriodResponse(callApi(params, req, runtime));
}

DescribeInstanceAmortizedCostByConsumePeriodResponse Alibabacloud_BssOpenApi20171214::Client::describeInstanceAmortizedCostByConsumePeriod(shared_ptr<DescribeInstanceAmortizedCostByConsumePeriodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAmortizedCostByConsumePeriodWithOptions(request, runtime);
}

DescribeInstanceBillResponse Alibabacloud_BssOpenApi20171214::Client::describeInstanceBillWithOptions(shared_ptr<DescribeInstanceBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    query->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingDate)) {
    query->insert(pair<string, string>("BillingDate", *request->billingDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granularity)) {
    query->insert(pair<string, string>("Granularity", *request->granularity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceID)) {
    query->insert(pair<string, string>("InstanceID", *request->instanceID));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isBillingItem)) {
    query->insert(pair<string, bool>("IsBillingItem", *request->isBillingItem));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isHideZeroCharge)) {
    query->insert(pair<string, bool>("IsHideZeroCharge", *request->isHideZeroCharge));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceBill"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceBillResponse(callApi(params, req, runtime));
}

DescribeInstanceBillResponse Alibabacloud_BssOpenApi20171214::Client::describeInstanceBill(shared_ptr<DescribeInstanceBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceBillWithOptions(request, runtime);
}

DescribePricingModuleResponse Alibabacloud_BssOpenApi20171214::Client::describePricingModuleWithOptions(shared_ptr<DescribePricingModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePricingModule"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePricingModuleResponse(callApi(params, req, runtime));
}

DescribePricingModuleResponse Alibabacloud_BssOpenApi20171214::Client::describePricingModule(shared_ptr<DescribePricingModuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePricingModuleWithOptions(request, runtime);
}

DescribeProductAmortizedCostByAmortizationPeriodResponse Alibabacloud_BssOpenApi20171214::Client::describeProductAmortizedCostByAmortizationPeriodWithOptions(shared_ptr<DescribeProductAmortizedCostByAmortizationPeriodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->billOwnerIdList)) {
    body->insert(pair<string, vector<string>>("BillOwnerIdList", *request->billOwnerIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->billUserIdList)) {
    body->insert(pair<string, vector<string>>("BillUserIdList", *request->billUserIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    body->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->consumePeriodFilter)) {
    body->insert(pair<string, vector<string>>("ConsumePeriodFilter", *request->consumePeriodFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->costUnitCode)) {
    body->insert(pair<string, string>("CostUnitCode", *request->costUnitCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productDetail)) {
    body->insert(pair<string, string>("ProductDetail", *request->productDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    body->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProductAmortizedCostByAmortizationPeriod"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProductAmortizedCostByAmortizationPeriodResponse(callApi(params, req, runtime));
}

DescribeProductAmortizedCostByAmortizationPeriodResponse Alibabacloud_BssOpenApi20171214::Client::describeProductAmortizedCostByAmortizationPeriod(shared_ptr<DescribeProductAmortizedCostByAmortizationPeriodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProductAmortizedCostByAmortizationPeriodWithOptions(request, runtime);
}

DescribeProductAmortizedCostByConsumePeriodResponse Alibabacloud_BssOpenApi20171214::Client::describeProductAmortizedCostByConsumePeriodWithOptions(shared_ptr<DescribeProductAmortizedCostByConsumePeriodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->amortizationPeriodFilter)) {
    body->insert(pair<string, vector<string>>("AmortizationPeriodFilter", *request->amortizationPeriodFilter));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->billOwnerIdList)) {
    body->insert(pair<string, vector<string>>("BillOwnerIdList", *request->billOwnerIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->billUserIdList)) {
    body->insert(pair<string, vector<string>>("BillUserIdList", *request->billUserIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    body->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->costUnitCode)) {
    body->insert(pair<string, string>("CostUnitCode", *request->costUnitCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productDetail)) {
    body->insert(pair<string, string>("ProductDetail", *request->productDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    body->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProductAmortizedCostByConsumePeriod"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProductAmortizedCostByConsumePeriodResponse(callApi(params, req, runtime));
}

DescribeProductAmortizedCostByConsumePeriodResponse Alibabacloud_BssOpenApi20171214::Client::describeProductAmortizedCostByConsumePeriod(shared_ptr<DescribeProductAmortizedCostByConsumePeriodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProductAmortizedCostByConsumePeriodWithOptions(request, runtime);
}

DescribeResourceCoverageDetailResponse Alibabacloud_BssOpenApi20171214::Client::describeResourceCoverageDetailWithOptions(shared_ptr<DescribeResourceCoverageDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endPeriod)) {
    query->insert(pair<string, string>("EndPeriod", *request->endPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodType)) {
    query->insert(pair<string, string>("PeriodType", *request->periodType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startPeriod)) {
    query->insert(pair<string, string>("StartPeriod", *request->startPeriod));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceCoverageDetail"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceCoverageDetailResponse(callApi(params, req, runtime));
}

DescribeResourceCoverageDetailResponse Alibabacloud_BssOpenApi20171214::Client::describeResourceCoverageDetail(shared_ptr<DescribeResourceCoverageDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceCoverageDetailWithOptions(request, runtime);
}

DescribeResourceCoverageTotalResponse Alibabacloud_BssOpenApi20171214::Client::describeResourceCoverageTotalWithOptions(shared_ptr<DescribeResourceCoverageTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endPeriod)) {
    query->insert(pair<string, string>("EndPeriod", *request->endPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodType)) {
    query->insert(pair<string, string>("PeriodType", *request->periodType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startPeriod)) {
    query->insert(pair<string, string>("StartPeriod", *request->startPeriod));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceCoverageTotal"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceCoverageTotalResponse(callApi(params, req, runtime));
}

DescribeResourceCoverageTotalResponse Alibabacloud_BssOpenApi20171214::Client::describeResourceCoverageTotal(shared_ptr<DescribeResourceCoverageTotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceCoverageTotalWithOptions(request, runtime);
}

DescribeResourcePackageProductResponse Alibabacloud_BssOpenApi20171214::Client::describeResourcePackageProductWithOptions(shared_ptr<DescribeResourcePackageProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourcePackageProduct"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourcePackageProductResponse(callApi(params, req, runtime));
}

DescribeResourcePackageProductResponse Alibabacloud_BssOpenApi20171214::Client::describeResourcePackageProduct(shared_ptr<DescribeResourcePackageProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourcePackageProductWithOptions(request, runtime);
}

DescribeResourceUsageDetailResponse Alibabacloud_BssOpenApi20171214::Client::describeResourceUsageDetailWithOptions(shared_ptr<DescribeResourceUsageDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endPeriod)) {
    query->insert(pair<string, string>("EndPeriod", *request->endPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodType)) {
    query->insert(pair<string, string>("PeriodType", *request->periodType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startPeriod)) {
    query->insert(pair<string, string>("StartPeriod", *request->startPeriod));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceUsageDetail"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceUsageDetailResponse(callApi(params, req, runtime));
}

DescribeResourceUsageDetailResponse Alibabacloud_BssOpenApi20171214::Client::describeResourceUsageDetail(shared_ptr<DescribeResourceUsageDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceUsageDetailWithOptions(request, runtime);
}

DescribeResourceUsageTotalResponse Alibabacloud_BssOpenApi20171214::Client::describeResourceUsageTotalWithOptions(shared_ptr<DescribeResourceUsageTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endPeriod)) {
    query->insert(pair<string, string>("EndPeriod", *request->endPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodType)) {
    query->insert(pair<string, string>("PeriodType", *request->periodType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startPeriod)) {
    query->insert(pair<string, string>("StartPeriod", *request->startPeriod));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceUsageTotal"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceUsageTotalResponse(callApi(params, req, runtime));
}

DescribeResourceUsageTotalResponse Alibabacloud_BssOpenApi20171214::Client::describeResourceUsageTotal(shared_ptr<DescribeResourceUsageTotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceUsageTotalWithOptions(request, runtime);
}

DescribeSavingsPlansCoverageDetailResponse Alibabacloud_BssOpenApi20171214::Client::describeSavingsPlansCoverageDetailWithOptions(shared_ptr<DescribeSavingsPlansCoverageDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endPeriod)) {
    query->insert(pair<string, string>("EndPeriod", *request->endPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodType)) {
    query->insert(pair<string, string>("PeriodType", *request->periodType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startPeriod)) {
    query->insert(pair<string, string>("StartPeriod", *request->startPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSavingsPlansCoverageDetail"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSavingsPlansCoverageDetailResponse(callApi(params, req, runtime));
}

DescribeSavingsPlansCoverageDetailResponse Alibabacloud_BssOpenApi20171214::Client::describeSavingsPlansCoverageDetail(shared_ptr<DescribeSavingsPlansCoverageDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSavingsPlansCoverageDetailWithOptions(request, runtime);
}

DescribeSavingsPlansCoverageTotalResponse Alibabacloud_BssOpenApi20171214::Client::describeSavingsPlansCoverageTotalWithOptions(shared_ptr<DescribeSavingsPlansCoverageTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endPeriod)) {
    query->insert(pair<string, string>("EndPeriod", *request->endPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodType)) {
    query->insert(pair<string, string>("PeriodType", *request->periodType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startPeriod)) {
    query->insert(pair<string, string>("StartPeriod", *request->startPeriod));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSavingsPlansCoverageTotal"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSavingsPlansCoverageTotalResponse(callApi(params, req, runtime));
}

DescribeSavingsPlansCoverageTotalResponse Alibabacloud_BssOpenApi20171214::Client::describeSavingsPlansCoverageTotal(shared_ptr<DescribeSavingsPlansCoverageTotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSavingsPlansCoverageTotalWithOptions(request, runtime);
}

DescribeSavingsPlansUsageDetailResponse Alibabacloud_BssOpenApi20171214::Client::describeSavingsPlansUsageDetailWithOptions(shared_ptr<DescribeSavingsPlansUsageDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endPeriod)) {
    query->insert(pair<string, string>("EndPeriod", *request->endPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodType)) {
    query->insert(pair<string, string>("PeriodType", *request->periodType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startPeriod)) {
    query->insert(pair<string, string>("StartPeriod", *request->startPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSavingsPlansUsageDetail"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSavingsPlansUsageDetailResponse(callApi(params, req, runtime));
}

DescribeSavingsPlansUsageDetailResponse Alibabacloud_BssOpenApi20171214::Client::describeSavingsPlansUsageDetail(shared_ptr<DescribeSavingsPlansUsageDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSavingsPlansUsageDetailWithOptions(request, runtime);
}

DescribeSavingsPlansUsageTotalResponse Alibabacloud_BssOpenApi20171214::Client::describeSavingsPlansUsageTotalWithOptions(shared_ptr<DescribeSavingsPlansUsageTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endPeriod)) {
    query->insert(pair<string, string>("EndPeriod", *request->endPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodType)) {
    query->insert(pair<string, string>("PeriodType", *request->periodType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startPeriod)) {
    query->insert(pair<string, string>("StartPeriod", *request->startPeriod));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSavingsPlansUsageTotal"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSavingsPlansUsageTotalResponse(callApi(params, req, runtime));
}

DescribeSavingsPlansUsageTotalResponse Alibabacloud_BssOpenApi20171214::Client::describeSavingsPlansUsageTotal(shared_ptr<DescribeSavingsPlansUsageTotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSavingsPlansUsageTotalWithOptions(request, runtime);
}

DescribeSplitItemBillResponse Alibabacloud_BssOpenApi20171214::Client::describeSplitItemBillWithOptions(shared_ptr<DescribeSplitItemBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    query->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingDate)) {
    query->insert(pair<string, string>("BillingDate", *request->billingDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granularity)) {
    query->insert(pair<string, string>("Granularity", *request->granularity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceID)) {
    query->insert(pair<string, string>("InstanceID", *request->instanceID));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->splitItemID)) {
    query->insert(pair<string, string>("SplitItemID", *request->splitItemID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeSplitItemBillRequestTagFilter>>(request->tagFilter)) {
    query->insert(pair<string, vector<DescribeSplitItemBillRequestTagFilter>>("TagFilter", *request->tagFilter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSplitItemBill"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSplitItemBillResponse(callApi(params, req, runtime));
}

DescribeSplitItemBillResponse Alibabacloud_BssOpenApi20171214::Client::describeSplitItemBill(shared_ptr<DescribeSplitItemBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSplitItemBillWithOptions(request, runtime);
}

EnableBillGenerationResponse Alibabacloud_BssOpenApi20171214::Client::enableBillGenerationWithOptions(shared_ptr<EnableBillGenerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableBillGeneration"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableBillGenerationResponse(callApi(params, req, runtime));
}

EnableBillGenerationResponse Alibabacloud_BssOpenApi20171214::Client::enableBillGeneration(shared_ptr<EnableBillGenerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableBillGenerationWithOptions(request, runtime);
}

GetAccountRelationResponse Alibabacloud_BssOpenApi20171214::Client::getAccountRelationWithOptions(shared_ptr<GetAccountRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccountRelation"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccountRelationResponse(callApi(params, req, runtime));
}

GetAccountRelationResponse Alibabacloud_BssOpenApi20171214::Client::getAccountRelation(shared_ptr<GetAccountRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountRelationWithOptions(request, runtime);
}

GetCustomerAccountInfoResponse Alibabacloud_BssOpenApi20171214::Client::getCustomerAccountInfoWithOptions(shared_ptr<GetCustomerAccountInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomerAccountInfo"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomerAccountInfoResponse(callApi(params, req, runtime));
}

GetCustomerAccountInfoResponse Alibabacloud_BssOpenApi20171214::Client::getCustomerAccountInfo(shared_ptr<GetCustomerAccountInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomerAccountInfoWithOptions(request, runtime);
}

GetCustomerListResponse Alibabacloud_BssOpenApi20171214::Client::getCustomerListWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomerList"))},
    {"version", boost::any(string("2017-12-14"))},
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

GetCustomerListResponse Alibabacloud_BssOpenApi20171214::Client::getCustomerList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomerListWithOptions(runtime);
}

GetOrderDetailResponse Alibabacloud_BssOpenApi20171214::Client::getOrderDetailWithOptions(shared_ptr<GetOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrderDetail"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrderDetailResponse(callApi(params, req, runtime));
}

GetOrderDetailResponse Alibabacloud_BssOpenApi20171214::Client::getOrderDetail(shared_ptr<GetOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOrderDetailWithOptions(request, runtime);
}

GetPayAsYouGoPriceResponse Alibabacloud_BssOpenApi20171214::Client::getPayAsYouGoPriceWithOptions(shared_ptr<GetPayAsYouGoPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<GetPayAsYouGoPriceRequestModuleList>>(request->moduleList)) {
    query->insert(pair<string, vector<GetPayAsYouGoPriceRequestModuleList>>("ModuleList", *request->moduleList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPayAsYouGoPrice"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPayAsYouGoPriceResponse(callApi(params, req, runtime));
}

GetPayAsYouGoPriceResponse Alibabacloud_BssOpenApi20171214::Client::getPayAsYouGoPrice(shared_ptr<GetPayAsYouGoPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPayAsYouGoPriceWithOptions(request, runtime);
}

GetResourcePackagePriceResponse Alibabacloud_BssOpenApi20171214::Client::getResourcePackagePriceWithOptions(shared_ptr<GetResourcePackagePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effectiveDate)) {
    query->insert(pair<string, string>("EffectiveDate", *request->effectiveDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    query->insert(pair<string, string>("PackageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specification)) {
    query->insert(pair<string, string>("Specification", *request->specification));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourcePackagePrice"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourcePackagePriceResponse(callApi(params, req, runtime));
}

GetResourcePackagePriceResponse Alibabacloud_BssOpenApi20171214::Client::getResourcePackagePrice(shared_ptr<GetResourcePackagePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourcePackagePriceWithOptions(request, runtime);
}

GetSubscriptionPriceResponse Alibabacloud_BssOpenApi20171214::Client::getSubscriptionPriceWithOptions(shared_ptr<GetSubscriptionPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetSubscriptionPriceRequestModuleList>>(request->moduleList)) {
    query->insert(pair<string, vector<GetSubscriptionPriceRequestModuleList>>("ModuleList", *request->moduleList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->quantity)) {
    query->insert(pair<string, long>("Quantity", *request->quantity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->servicePeriodQuantity)) {
    query->insert(pair<string, long>("ServicePeriodQuantity", *request->servicePeriodQuantity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicePeriodUnit)) {
    query->insert(pair<string, string>("ServicePeriodUnit", *request->servicePeriodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubscriptionPrice"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubscriptionPriceResponse(callApi(params, req, runtime));
}

GetSubscriptionPriceResponse Alibabacloud_BssOpenApi20171214::Client::getSubscriptionPrice(shared_ptr<GetSubscriptionPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSubscriptionPriceWithOptions(request, runtime);
}

InquiryPriceRefundInstanceResponse Alibabacloud_BssOpenApi20171214::Client::inquiryPriceRefundInstanceWithOptions(shared_ptr<InquiryPriceRefundInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InquiryPriceRefundInstance"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InquiryPriceRefundInstanceResponse(callApi(params, req, runtime));
}

InquiryPriceRefundInstanceResponse Alibabacloud_BssOpenApi20171214::Client::inquiryPriceRefundInstance(shared_ptr<InquiryPriceRefundInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return inquiryPriceRefundInstanceWithOptions(request, runtime);
}

ModifyAccountRelationResponse Alibabacloud_BssOpenApi20171214::Client::modifyAccountRelationWithOptions(shared_ptr<ModifyAccountRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->childNick)) {
    query->insert(pair<string, string>("ChildNick", *request->childNick));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->childUserId)) {
    query->insert(pair<string, long>("ChildUserId", *request->childUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentUserId)) {
    query->insert(pair<string, long>("ParentUserId", *request->parentUserId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->permissionCodes)) {
    query->insert(pair<string, vector<string>>("PermissionCodes", *request->permissionCodes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relationId)) {
    query->insert(pair<string, long>("RelationId", *request->relationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relationOperation)) {
    query->insert(pair<string, string>("RelationOperation", *request->relationOperation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relationType)) {
    query->insert(pair<string, string>("RelationType", *request->relationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->roleCodes)) {
    query->insert(pair<string, vector<string>>("RoleCodes", *request->roleCodes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAccountRelation"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAccountRelationResponse(callApi(params, req, runtime));
}

ModifyAccountRelationResponse Alibabacloud_BssOpenApi20171214::Client::modifyAccountRelation(shared_ptr<ModifyAccountRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountRelationWithOptions(request, runtime);
}

ModifyCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::modifyCostUnitWithOptions(shared_ptr<ModifyCostUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifyCostUnitRequestUnitEntityList>>(request->unitEntityList)) {
    query->insert(pair<string, vector<ModifyCostUnitRequestUnitEntityList>>("UnitEntityList", *request->unitEntityList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCostUnit"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCostUnitResponse(callApi(params, req, runtime));
}

ModifyCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::modifyCostUnit(shared_ptr<ModifyCostUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCostUnitWithOptions(request, runtime);
}

ModifyInstanceResponse Alibabacloud_BssOpenApi20171214::Client::modifyInstanceWithOptions(shared_ptr<ModifyInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyType)) {
    query->insert(pair<string, string>("ModifyType", *request->modifyType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyInstanceRequestParameter>>(request->parameter)) {
    query->insert(pair<string, vector<ModifyInstanceRequestParameter>>("Parameter", *request->parameter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstance"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceResponse(callApi(params, req, runtime));
}

ModifyInstanceResponse Alibabacloud_BssOpenApi20171214::Client::modifyInstance(shared_ptr<ModifyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceWithOptions(request, runtime);
}

QueryAccountBalanceResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountBalanceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAccountBalance"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAccountBalanceResponse(callApi(params, req, runtime));
}

QueryAccountBalanceResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountBalance() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAccountBalanceWithOptions(runtime);
}

QueryAccountBillResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountBillWithOptions(shared_ptr<QueryAccountBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    query->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingDate)) {
    query->insert(pair<string, string>("BillingDate", *request->billingDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granularity)) {
    query->insert(pair<string, string>("Granularity", *request->granularity));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isGroupByProduct)) {
    query->insert(pair<string, bool>("IsGroupByProduct", *request->isGroupByProduct));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerID)) {
    query->insert(pair<string, long>("OwnerID", *request->ownerID));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAccountBill"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAccountBillResponse(callApi(params, req, runtime));
}

QueryAccountBillResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountBill(shared_ptr<QueryAccountBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAccountBillWithOptions(request, runtime);
}

QueryAccountTransactionDetailsResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountTransactionDetailsWithOptions(shared_ptr<QueryAccountTransactionDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeEnd)) {
    query->insert(pair<string, string>("CreateTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeStart)) {
    query->insert(pair<string, string>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordID)) {
    query->insert(pair<string, string>("RecordID", *request->recordID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionChannel)) {
    query->insert(pair<string, string>("TransactionChannel", *request->transactionChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionChannelSN)) {
    query->insert(pair<string, string>("TransactionChannelSN", *request->transactionChannelSN));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionNumber)) {
    query->insert(pair<string, string>("TransactionNumber", *request->transactionNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionType)) {
    query->insert(pair<string, string>("TransactionType", *request->transactionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAccountTransactionDetails"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAccountTransactionDetailsResponse(callApi(params, req, runtime));
}

QueryAccountTransactionDetailsResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountTransactionDetails(shared_ptr<QueryAccountTransactionDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAccountTransactionDetailsWithOptions(request, runtime);
}

QueryAccountTransactionsResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountTransactionsWithOptions(shared_ptr<QueryAccountTransactionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeEnd)) {
    query->insert(pair<string, string>("CreateTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeStart)) {
    query->insert(pair<string, string>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordID)) {
    query->insert(pair<string, string>("RecordID", *request->recordID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionChannel)) {
    query->insert(pair<string, string>("TransactionChannel", *request->transactionChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionChannelSN)) {
    query->insert(pair<string, string>("TransactionChannelSN", *request->transactionChannelSN));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionFlow)) {
    query->insert(pair<string, string>("TransactionFlow", *request->transactionFlow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionNumber)) {
    query->insert(pair<string, string>("TransactionNumber", *request->transactionNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionType)) {
    query->insert(pair<string, string>("TransactionType", *request->transactionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAccountTransactions"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAccountTransactionsResponse(callApi(params, req, runtime));
}

QueryAccountTransactionsResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountTransactions(shared_ptr<QueryAccountTransactionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAccountTransactionsWithOptions(request, runtime);
}

QueryAvailableInstancesResponse Alibabacloud_BssOpenApi20171214::Client::queryAvailableInstancesWithOptions(shared_ptr<QueryAvailableInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeEnd)) {
    query->insert(pair<string, string>("CreateTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeStart)) {
    query->insert(pair<string, string>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimeEnd)) {
    query->insert(pair<string, string>("EndTimeEnd", *request->endTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimeStart)) {
    query->insert(pair<string, string>("EndTimeStart", *request->endTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIDs)) {
    query->insert(pair<string, string>("InstanceIDs", *request->instanceIDs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->renewStatus)) {
    query->insert(pair<string, string>("RenewStatus", *request->renewStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAvailableInstances"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAvailableInstancesResponse(callApi(params, req, runtime));
}

QueryAvailableInstancesResponse Alibabacloud_BssOpenApi20171214::Client::queryAvailableInstances(shared_ptr<QueryAvailableInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAvailableInstancesWithOptions(request, runtime);
}

QueryBillResponse Alibabacloud_BssOpenApi20171214::Client::queryBillWithOptions(shared_ptr<QueryBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    query->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDisplayLocalCurrency)) {
    query->insert(pair<string, bool>("IsDisplayLocalCurrency", *request->isDisplayLocalCurrency));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isHideZeroCharge)) {
    query->insert(pair<string, bool>("IsHideZeroCharge", *request->isHideZeroCharge));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBill"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBillResponse(callApi(params, req, runtime));
}

QueryBillResponse Alibabacloud_BssOpenApi20171214::Client::queryBill(shared_ptr<QueryBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBillWithOptions(request, runtime);
}

QueryBillOverviewResponse Alibabacloud_BssOpenApi20171214::Client::queryBillOverviewWithOptions(shared_ptr<QueryBillOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    query->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBillOverview"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBillOverviewResponse(callApi(params, req, runtime));
}

QueryBillOverviewResponse Alibabacloud_BssOpenApi20171214::Client::queryBillOverview(shared_ptr<QueryBillOverviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBillOverviewWithOptions(request, runtime);
}

QueryBillToOSSSubscriptionResponse Alibabacloud_BssOpenApi20171214::Client::queryBillToOSSSubscriptionWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBillToOSSSubscription"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBillToOSSSubscriptionResponse(callApi(params, req, runtime));
}

QueryBillToOSSSubscriptionResponse Alibabacloud_BssOpenApi20171214::Client::queryBillToOSSSubscription() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBillToOSSSubscriptionWithOptions(runtime);
}

QueryCashCouponsResponse Alibabacloud_BssOpenApi20171214::Client::queryCashCouponsWithOptions(shared_ptr<QueryCashCouponsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->effectiveOrNot)) {
    query->insert(pair<string, bool>("EffectiveOrNot", *request->effectiveOrNot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiryTimeEnd)) {
    query->insert(pair<string, string>("ExpiryTimeEnd", *request->expiryTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiryTimeStart)) {
    query->insert(pair<string, string>("ExpiryTimeStart", *request->expiryTimeStart));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCashCoupons"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCashCouponsResponse(callApi(params, req, runtime));
}

QueryCashCouponsResponse Alibabacloud_BssOpenApi20171214::Client::queryCashCoupons(shared_ptr<QueryCashCouponsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCashCouponsWithOptions(request, runtime);
}

QueryCommodityListResponse Alibabacloud_BssOpenApi20171214::Client::queryCommodityListWithOptions(shared_ptr<QueryCommodityListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCommodityList"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCommodityListResponse(callApi(params, req, runtime));
}

QueryCommodityListResponse Alibabacloud_BssOpenApi20171214::Client::queryCommodityList(shared_ptr<QueryCommodityListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCommodityListWithOptions(request, runtime);
}

QueryCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::queryCostUnitWithOptions(shared_ptr<QueryCostUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerUid)) {
    query->insert(pair<string, long>("OwnerUid", *request->ownerUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentUnitId)) {
    query->insert(pair<string, long>("ParentUnitId", *request->parentUnitId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCostUnit"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCostUnitResponse(callApi(params, req, runtime));
}

QueryCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::queryCostUnit(shared_ptr<QueryCostUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCostUnitWithOptions(request, runtime);
}

QueryCostUnitResourceResponse Alibabacloud_BssOpenApi20171214::Client::queryCostUnitResourceWithOptions(shared_ptr<QueryCostUnitResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerUid)) {
    query->insert(pair<string, long>("OwnerUid", *request->ownerUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unitId)) {
    query->insert(pair<string, long>("UnitId", *request->unitId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCostUnitResource"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCostUnitResourceResponse(callApi(params, req, runtime));
}

QueryCostUnitResourceResponse Alibabacloud_BssOpenApi20171214::Client::queryCostUnitResource(shared_ptr<QueryCostUnitResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCostUnitResourceWithOptions(request, runtime);
}

QueryCustomerAddressListResponse Alibabacloud_BssOpenApi20171214::Client::queryCustomerAddressListWithOptions(shared_ptr<QueryCustomerAddressListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCustomerAddressList"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCustomerAddressListResponse(callApi(params, req, runtime));
}

QueryCustomerAddressListResponse Alibabacloud_BssOpenApi20171214::Client::queryCustomerAddressList(shared_ptr<QueryCustomerAddressListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCustomerAddressListWithOptions(request, runtime);
}

QueryDPUtilizationDetailResponse Alibabacloud_BssOpenApi20171214::Client::queryDPUtilizationDetailWithOptions(shared_ptr<QueryDPUtilizationDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deductedInstanceId)) {
    query->insert(pair<string, string>("DeductedInstanceId", *request->deductedInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeShare)) {
    query->insert(pair<string, bool>("IncludeShare", *request->includeShare));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSpec)) {
    query->insert(pair<string, string>("InstanceSpec", *request->instanceSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lastToken)) {
    query->insert(pair<string, string>("LastToken", *request->lastToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDPUtilizationDetail"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDPUtilizationDetailResponse(callApi(params, req, runtime));
}

QueryDPUtilizationDetailResponse Alibabacloud_BssOpenApi20171214::Client::queryDPUtilizationDetail(shared_ptr<QueryDPUtilizationDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDPUtilizationDetailWithOptions(request, runtime);
}

QueryEvaluateListResponse Alibabacloud_BssOpenApi20171214::Client::queryEvaluateListWithOptions(shared_ptr<QueryEvaluateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billCycle)) {
    query->insert(pair<string, string>("BillCycle", *request->billCycle));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->bizTypeList)) {
    query->insert(pair<string, vector<string>>("BizTypeList", *request->bizTypeList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endAmount)) {
    query->insert(pair<string, long>("EndAmount", *request->endAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endBizTime)) {
    query->insert(pair<string, string>("EndBizTime", *request->endBizTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endSearchTime)) {
    query->insert(pair<string, string>("EndSearchTime", *request->endSearchTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outBizId)) {
    query->insert(pair<string, string>("OutBizId", *request->outBizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sortType)) {
    query->insert(pair<string, long>("SortType", *request->sortType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startAmount)) {
    query->insert(pair<string, long>("StartAmount", *request->startAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startBizTime)) {
    query->insert(pair<string, string>("StartBizTime", *request->startBizTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startSearchTime)) {
    query->insert(pair<string, string>("StartSearchTime", *request->startSearchTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEvaluateList"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEvaluateListResponse(callApi(params, req, runtime));
}

QueryEvaluateListResponse Alibabacloud_BssOpenApi20171214::Client::queryEvaluateList(shared_ptr<QueryEvaluateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEvaluateListWithOptions(request, runtime);
}

QueryFinancialAccountInfoResponse Alibabacloud_BssOpenApi20171214::Client::queryFinancialAccountInfoWithOptions(shared_ptr<QueryFinancialAccountInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    query->insert(pair<string, long>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFinancialAccountInfo"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFinancialAccountInfoResponse(callApi(params, req, runtime));
}

QueryFinancialAccountInfoResponse Alibabacloud_BssOpenApi20171214::Client::queryFinancialAccountInfo(shared_ptr<QueryFinancialAccountInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFinancialAccountInfoWithOptions(request, runtime);
}

QueryInstanceBillResponse Alibabacloud_BssOpenApi20171214::Client::queryInstanceBillWithOptions(shared_ptr<QueryInstanceBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    query->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingDate)) {
    query->insert(pair<string, string>("BillingDate", *request->billingDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granularity)) {
    query->insert(pair<string, string>("Granularity", *request->granularity));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isBillingItem)) {
    query->insert(pair<string, bool>("IsBillingItem", *request->isBillingItem));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isHideZeroCharge)) {
    query->insert(pair<string, bool>("IsHideZeroCharge", *request->isHideZeroCharge));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryInstanceBill"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryInstanceBillResponse(callApi(params, req, runtime));
}

QueryInstanceBillResponse Alibabacloud_BssOpenApi20171214::Client::queryInstanceBill(shared_ptr<QueryInstanceBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInstanceBillWithOptions(request, runtime);
}

QueryInstanceByTagResponse Alibabacloud_BssOpenApi20171214::Client::queryInstanceByTagWithOptions(shared_ptr<QueryInstanceByTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<QueryInstanceByTagRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<QueryInstanceByTagRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryInstanceByTag"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryInstanceByTagResponse(callApi(params, req, runtime));
}

QueryInstanceByTagResponse Alibabacloud_BssOpenApi20171214::Client::queryInstanceByTag(shared_ptr<QueryInstanceByTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInstanceByTagWithOptions(request, runtime);
}

QueryInstanceGaapCostResponse Alibabacloud_BssOpenApi20171214::Client::queryInstanceGaapCostWithOptions(shared_ptr<QueryInstanceGaapCostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    query->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryInstanceGaapCost"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryInstanceGaapCostResponse(callApi(params, req, runtime));
}

QueryInstanceGaapCostResponse Alibabacloud_BssOpenApi20171214::Client::queryInstanceGaapCost(shared_ptr<QueryInstanceGaapCostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInstanceGaapCostWithOptions(request, runtime);
}

QueryInvoicingCustomerListResponse Alibabacloud_BssOpenApi20171214::Client::queryInvoicingCustomerListWithOptions(shared_ptr<QueryInvoicingCustomerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryInvoicingCustomerList"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryInvoicingCustomerListResponse(callApi(params, req, runtime));
}

QueryInvoicingCustomerListResponse Alibabacloud_BssOpenApi20171214::Client::queryInvoicingCustomerList(shared_ptr<QueryInvoicingCustomerListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInvoicingCustomerListWithOptions(request, runtime);
}

QueryOrdersResponse Alibabacloud_BssOpenApi20171214::Client::queryOrdersWithOptions(shared_ptr<QueryOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeEnd)) {
    query->insert(pair<string, string>("CreateTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeStart)) {
    query->insert(pair<string, string>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentStatus)) {
    query->insert(pair<string, string>("PaymentStatus", *request->paymentStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrders"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrdersResponse(callApi(params, req, runtime));
}

QueryOrdersResponse Alibabacloud_BssOpenApi20171214::Client::queryOrders(shared_ptr<QueryOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrdersWithOptions(request, runtime);
}

QueryPermissionListResponse Alibabacloud_BssOpenApi20171214::Client::queryPermissionListWithOptions(shared_ptr<QueryPermissionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->relationId)) {
    query->insert(pair<string, long>("RelationId", *request->relationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPermissionList"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPermissionListResponse(callApi(params, req, runtime));
}

QueryPermissionListResponse Alibabacloud_BssOpenApi20171214::Client::queryPermissionList(shared_ptr<QueryPermissionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPermissionListWithOptions(request, runtime);
}

QueryPrepaidCardsResponse Alibabacloud_BssOpenApi20171214::Client::queryPrepaidCardsWithOptions(shared_ptr<QueryPrepaidCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->effectiveOrNot)) {
    query->insert(pair<string, bool>("EffectiveOrNot", *request->effectiveOrNot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiryTimeEnd)) {
    query->insert(pair<string, string>("ExpiryTimeEnd", *request->expiryTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiryTimeStart)) {
    query->insert(pair<string, string>("ExpiryTimeStart", *request->expiryTimeStart));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPrepaidCards"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPrepaidCardsResponse(callApi(params, req, runtime));
}

QueryPrepaidCardsResponse Alibabacloud_BssOpenApi20171214::Client::queryPrepaidCards(shared_ptr<QueryPrepaidCardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPrepaidCardsWithOptions(request, runtime);
}

QueryPriceEntityListResponse Alibabacloud_BssOpenApi20171214::Client::queryPriceEntityListWithOptions(shared_ptr<QueryPriceEntityListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPriceEntityList"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPriceEntityListResponse(callApi(params, req, runtime));
}

QueryPriceEntityListResponse Alibabacloud_BssOpenApi20171214::Client::queryPriceEntityList(shared_ptr<QueryPriceEntityListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPriceEntityListWithOptions(request, runtime);
}

QueryProductListResponse Alibabacloud_BssOpenApi20171214::Client::queryProductListWithOptions(shared_ptr<QueryProductListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryTotalCount)) {
    query->insert(pair<string, bool>("QueryTotalCount", *request->queryTotalCount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryProductList"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryProductListResponse(callApi(params, req, runtime));
}

QueryProductListResponse Alibabacloud_BssOpenApi20171214::Client::queryProductList(shared_ptr<QueryProductListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductListWithOptions(request, runtime);
}

QueryRIUtilizationDetailResponse Alibabacloud_BssOpenApi20171214::Client::queryRIUtilizationDetailWithOptions(shared_ptr<QueryRIUtilizationDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deductedInstanceId)) {
    query->insert(pair<string, string>("DeductedInstanceId", *request->deductedInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSpec)) {
    query->insert(pair<string, string>("InstanceSpec", *request->instanceSpec));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->RICommodityCode)) {
    query->insert(pair<string, string>("RICommodityCode", *request->RICommodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->RIInstanceId)) {
    query->insert(pair<string, string>("RIInstanceId", *request->RIInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRIUtilizationDetail"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRIUtilizationDetailResponse(callApi(params, req, runtime));
}

QueryRIUtilizationDetailResponse Alibabacloud_BssOpenApi20171214::Client::queryRIUtilizationDetail(shared_ptr<QueryRIUtilizationDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRIUtilizationDetailWithOptions(request, runtime);
}

QueryRedeemResponse Alibabacloud_BssOpenApi20171214::Client::queryRedeemWithOptions(shared_ptr<QueryRedeemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRedeem"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRedeemResponse(callApi(params, req, runtime));
}

QueryRedeemResponse Alibabacloud_BssOpenApi20171214::Client::queryRedeem(shared_ptr<QueryRedeemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRedeemWithOptions(request, runtime);
}

QueryRelationListResponse Alibabacloud_BssOpenApi20171214::Client::queryRelationListWithOptions(shared_ptr<QueryRelationListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->statusList)) {
    query->insert(pair<string, vector<string>>("StatusList", *request->statusList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    query->insert(pair<string, long>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRelationList"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRelationListResponse(callApi(params, req, runtime));
}

QueryRelationListResponse Alibabacloud_BssOpenApi20171214::Client::queryRelationList(shared_ptr<QueryRelationListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRelationListWithOptions(request, runtime);
}

QueryResellerAvailableQuotaResponse Alibabacloud_BssOpenApi20171214::Client::queryResellerAvailableQuotaWithOptions(shared_ptr<QueryResellerAvailableQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->itemCodes)) {
    query->insert(pair<string, string>("ItemCodes", *request->itemCodes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryResellerAvailableQuota"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryResellerAvailableQuotaResponse(callApi(params, req, runtime));
}

QueryResellerAvailableQuotaResponse Alibabacloud_BssOpenApi20171214::Client::queryResellerAvailableQuota(shared_ptr<QueryResellerAvailableQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryResellerAvailableQuotaWithOptions(request, runtime);
}

QueryResellerUserAlarmThresholdResponse Alibabacloud_BssOpenApi20171214::Client::queryResellerUserAlarmThresholdWithOptions(shared_ptr<QueryResellerUserAlarmThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmType)) {
    query->insert(pair<string, string>("AlarmType", *request->alarmType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryResellerUserAlarmThreshold"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryResellerUserAlarmThresholdResponse(callApi(params, req, runtime));
}

QueryResellerUserAlarmThresholdResponse Alibabacloud_BssOpenApi20171214::Client::queryResellerUserAlarmThreshold(shared_ptr<QueryResellerUserAlarmThresholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryResellerUserAlarmThresholdWithOptions(request, runtime);
}

QueryResourcePackageInstancesResponse Alibabacloud_BssOpenApi20171214::Client::queryResourcePackageInstancesWithOptions(shared_ptr<QueryResourcePackageInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expiryTimeEnd)) {
    query->insert(pair<string, string>("ExpiryTimeEnd", *request->expiryTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiryTimeStart)) {
    query->insert(pair<string, string>("ExpiryTimeStart", *request->expiryTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includePartner)) {
    query->insert(pair<string, bool>("IncludePartner", *request->includePartner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryResourcePackageInstances"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryResourcePackageInstancesResponse(callApi(params, req, runtime));
}

QueryResourcePackageInstancesResponse Alibabacloud_BssOpenApi20171214::Client::queryResourcePackageInstances(shared_ptr<QueryResourcePackageInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryResourcePackageInstancesWithOptions(request, runtime);
}

QuerySavingsPlansDeductLogResponse Alibabacloud_BssOpenApi20171214::Client::querySavingsPlansDeductLogWithOptions(shared_ptr<QuerySavingsPlansDeductLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locale)) {
    query->insert(pair<string, string>("Locale", *request->locale));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySavingsPlansDeductLog"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySavingsPlansDeductLogResponse(callApi(params, req, runtime));
}

QuerySavingsPlansDeductLogResponse Alibabacloud_BssOpenApi20171214::Client::querySavingsPlansDeductLog(shared_ptr<QuerySavingsPlansDeductLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySavingsPlansDeductLogWithOptions(request, runtime);
}

QuerySavingsPlansDiscountResponse Alibabacloud_BssOpenApi20171214::Client::querySavingsPlansDiscountWithOptions(shared_ptr<QuerySavingsPlansDiscountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySavingsPlansDiscount"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySavingsPlansDiscountResponse(callApi(params, req, runtime));
}

QuerySavingsPlansDiscountResponse Alibabacloud_BssOpenApi20171214::Client::querySavingsPlansDiscount(shared_ptr<QuerySavingsPlansDiscountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySavingsPlansDiscountWithOptions(request, runtime);
}

QuerySavingsPlansInstanceResponse Alibabacloud_BssOpenApi20171214::Client::querySavingsPlansInstanceWithOptions(shared_ptr<QuerySavingsPlansInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locale)) {
    query->insert(pair<string, string>("Locale", *request->locale));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<QuerySavingsPlansInstanceRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<QuerySavingsPlansInstanceRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySavingsPlansInstance"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySavingsPlansInstanceResponse(callApi(params, req, runtime));
}

QuerySavingsPlansInstanceResponse Alibabacloud_BssOpenApi20171214::Client::querySavingsPlansInstance(shared_ptr<QuerySavingsPlansInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySavingsPlansInstanceWithOptions(request, runtime);
}

QuerySettleBillResponse Alibabacloud_BssOpenApi20171214::Client::querySettleBillWithOptions(shared_ptr<QuerySettleBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    query->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDisplayLocalCurrency)) {
    query->insert(pair<string, bool>("IsDisplayLocalCurrency", *request->isDisplayLocalCurrency));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isHideZeroCharge)) {
    query->insert(pair<string, bool>("IsHideZeroCharge", *request->isHideZeroCharge));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordID)) {
    query->insert(pair<string, string>("RecordID", *request->recordID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySettleBill"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySettleBillResponse(callApi(params, req, runtime));
}

QuerySettleBillResponse Alibabacloud_BssOpenApi20171214::Client::querySettleBill(shared_ptr<QuerySettleBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySettleBillWithOptions(request, runtime);
}

QuerySkuPriceListResponse Alibabacloud_BssOpenApi20171214::Client::querySkuPriceListWithOptions(shared_ptr<QuerySkuPriceListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QuerySkuPriceListShrinkRequest> request = make_shared<QuerySkuPriceListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, vector<string>>>(tmpReq->priceFactorConditionMap)) {
    request->priceFactorConditionMapShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->priceFactorConditionMap, make_shared<string>("PriceFactorConditionMap"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySkuPriceList"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySkuPriceListResponse(callApi(params, req, runtime));
}

QuerySkuPriceListResponse Alibabacloud_BssOpenApi20171214::Client::querySkuPriceList(shared_ptr<QuerySkuPriceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySkuPriceListWithOptions(request, runtime);
}

QuerySplitItemBillResponse Alibabacloud_BssOpenApi20171214::Client::querySplitItemBillWithOptions(shared_ptr<QuerySplitItemBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->billOwnerId)) {
    query->insert(pair<string, long>("BillOwnerId", *request->billOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    query->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySplitItemBill"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySplitItemBillResponse(callApi(params, req, runtime));
}

QuerySplitItemBillResponse Alibabacloud_BssOpenApi20171214::Client::querySplitItemBill(shared_ptr<QuerySplitItemBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySplitItemBillWithOptions(request, runtime);
}

QueryUserOmsDataResponse Alibabacloud_BssOpenApi20171214::Client::queryUserOmsDataWithOptions(shared_ptr<QueryUserOmsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataType)) {
    query->insert(pair<string, string>("DataType", *request->dataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    query->insert(pair<string, string>("Table", *request->table));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserOmsData"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserOmsDataResponse(callApi(params, req, runtime));
}

QueryUserOmsDataResponse Alibabacloud_BssOpenApi20171214::Client::queryUserOmsData(shared_ptr<QueryUserOmsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserOmsDataWithOptions(request, runtime);
}

RefundInstanceResponse Alibabacloud_BssOpenApi20171214::Client::refundInstanceWithOptions(shared_ptr<RefundInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->immediatelyRelease)) {
    query->insert(pair<string, string>("ImmediatelyRelease", *request->immediatelyRelease));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefundInstance"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefundInstanceResponse(callApi(params, req, runtime));
}

RefundInstanceResponse Alibabacloud_BssOpenApi20171214::Client::refundInstance(shared_ptr<RefundInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refundInstanceWithOptions(request, runtime);
}

ReleaseInstanceResponse Alibabacloud_BssOpenApi20171214::Client::releaseInstanceWithOptions(shared_ptr<ReleaseInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->renewStatus)) {
    query->insert(pair<string, string>("RenewStatus", *request->renewStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseInstance"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseInstanceResponse(callApi(params, req, runtime));
}

ReleaseInstanceResponse Alibabacloud_BssOpenApi20171214::Client::releaseInstance(shared_ptr<ReleaseInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstanceWithOptions(request, runtime);
}

RelieveAccountRelationResponse Alibabacloud_BssOpenApi20171214::Client::relieveAccountRelationWithOptions(shared_ptr<RelieveAccountRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->childUserId)) {
    query->insert(pair<string, long>("ChildUserId", *request->childUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentUserId)) {
    query->insert(pair<string, long>("ParentUserId", *request->parentUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->relationId)) {
    query->insert(pair<string, long>("RelationId", *request->relationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relationType)) {
    query->insert(pair<string, string>("RelationType", *request->relationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RelieveAccountRelation"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RelieveAccountRelationResponse(callApi(params, req, runtime));
}

RelieveAccountRelationResponse Alibabacloud_BssOpenApi20171214::Client::relieveAccountRelation(shared_ptr<RelieveAccountRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return relieveAccountRelationWithOptions(request, runtime);
}

RenewInstanceResponse Alibabacloud_BssOpenApi20171214::Client::renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->renewPeriod)) {
    query->insert(pair<string, long>("RenewPeriod", *request->renewPeriod));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewInstance"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewInstanceResponse(callApi(params, req, runtime));
}

RenewInstanceResponse Alibabacloud_BssOpenApi20171214::Client::renewInstance(shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewInstanceWithOptions(request, runtime);
}

RenewResourcePackageResponse Alibabacloud_BssOpenApi20171214::Client::renewResourcePackageWithOptions(shared_ptr<RenewResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effectiveDate)) {
    query->insert(pair<string, string>("EffectiveDate", *request->effectiveDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewResourcePackage"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewResourcePackageResponse(callApi(params, req, runtime));
}

RenewResourcePackageResponse Alibabacloud_BssOpenApi20171214::Client::renewResourcePackage(shared_ptr<RenewResourcePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewResourcePackageWithOptions(request, runtime);
}

SaveUserCreditResponse Alibabacloud_BssOpenApi20171214::Client::saveUserCreditWithOptions(shared_ptr<SaveUserCreditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->avoidExpiration)) {
    query->insert(pair<string, bool>("AvoidExpiration", *request->avoidExpiration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->avoidNotification)) {
    query->insert(pair<string, bool>("AvoidNotification", *request->avoidNotification));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->avoidPrepaidExpiration)) {
    query->insert(pair<string, bool>("AvoidPrepaidExpiration", *request->avoidPrepaidExpiration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->avoidPrepaidNotification)) {
    query->insert(pair<string, bool>("AvoidPrepaidNotification", *request->avoidPrepaidNotification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creditType)) {
    query->insert(pair<string, string>("CreditType", *request->creditType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creditValue)) {
    query->insert(pair<string, string>("CreditValue", *request->creditValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    query->insert(pair<string, string>("Operator_", *request->operator_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveUserCredit"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveUserCreditResponse(callApi(params, req, runtime));
}

SaveUserCreditResponse Alibabacloud_BssOpenApi20171214::Client::saveUserCredit(shared_ptr<SaveUserCreditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveUserCreditWithOptions(request, runtime);
}

SetAllExpirationDayResponse Alibabacloud_BssOpenApi20171214::Client::setAllExpirationDayWithOptions(shared_ptr<SetAllExpirationDayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unifyExpireDay)) {
    query->insert(pair<string, string>("UnifyExpireDay", *request->unifyExpireDay));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetAllExpirationDay"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetAllExpirationDayResponse(callApi(params, req, runtime));
}

SetAllExpirationDayResponse Alibabacloud_BssOpenApi20171214::Client::setAllExpirationDay(shared_ptr<SetAllExpirationDayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAllExpirationDayWithOptions(request, runtime);
}

SetCreditLabelActionResponse Alibabacloud_BssOpenApi20171214::Client::setCreditLabelActionWithOptions(shared_ptr<SetCreditLabelActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionType)) {
    query->insert(pair<string, string>("ActionType", *request->actionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clearCycle)) {
    query->insert(pair<string, string>("ClearCycle", *request->clearCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creditAmount)) {
    query->insert(pair<string, string>("CreditAmount", *request->creditAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currencyCode)) {
    query->insert(pair<string, string>("CurrencyCode", *request->currencyCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dailyCycle)) {
    query->insert(pair<string, string>("DailyCycle", *request->dailyCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isNeedAddSettleLabel)) {
    query->insert(pair<string, string>("IsNeedAddSettleLabel", *request->isNeedAddSettleLabel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isNeedAdjustCreditAccount)) {
    query->insert(pair<string, string>("IsNeedAdjustCreditAccount", *request->isNeedAdjustCreditAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isNeedSaveNotifyRule)) {
    query->insert(pair<string, string>("IsNeedSaveNotifyRule", *request->isNeedSaveNotifyRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isNeedSetCreditAmount)) {
    query->insert(pair<string, string>("IsNeedSetCreditAmount", *request->isNeedSetCreditAmount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needNotice)) {
    query->insert(pair<string, bool>("NeedNotice", *request->needNotice));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->newCreateMode)) {
    query->insert(pair<string, bool>("NewCreateMode", *request->newCreateMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    query->insert(pair<string, string>("Operator_", *request->operator_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->siteCode)) {
    query->insert(pair<string, string>("SiteCode", *request->siteCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetCreditLabelAction"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetCreditLabelActionResponse(callApi(params, req, runtime));
}

SetCreditLabelActionResponse Alibabacloud_BssOpenApi20171214::Client::setCreditLabelAction(shared_ptr<SetCreditLabelActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCreditLabelActionWithOptions(request, runtime);
}

SetRenewalResponse Alibabacloud_BssOpenApi20171214::Client::setRenewalWithOptions(shared_ptr<SetRenewalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIDs)) {
    query->insert(pair<string, string>("InstanceIDs", *request->instanceIDs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->renewalPeriod)) {
    query->insert(pair<string, long>("RenewalPeriod", *request->renewalPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->renewalPeriodUnit)) {
    query->insert(pair<string, string>("RenewalPeriodUnit", *request->renewalPeriodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->renewalStatus)) {
    query->insert(pair<string, string>("RenewalStatus", *request->renewalStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionType)) {
    query->insert(pair<string, string>("SubscriptionType", *request->subscriptionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetRenewal"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetRenewalResponse(callApi(params, req, runtime));
}

SetRenewalResponse Alibabacloud_BssOpenApi20171214::Client::setRenewal(shared_ptr<SetRenewalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setRenewalWithOptions(request, runtime);
}

SetResellerUserAlarmThresholdResponse Alibabacloud_BssOpenApi20171214::Client::setResellerUserAlarmThresholdWithOptions(shared_ptr<SetResellerUserAlarmThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmThresholds)) {
    query->insert(pair<string, string>("AlarmThresholds", *request->alarmThresholds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmType)) {
    query->insert(pair<string, string>("AlarmType", *request->alarmType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetResellerUserAlarmThreshold"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetResellerUserAlarmThresholdResponse(callApi(params, req, runtime));
}

SetResellerUserAlarmThresholdResponse Alibabacloud_BssOpenApi20171214::Client::setResellerUserAlarmThreshold(shared_ptr<SetResellerUserAlarmThresholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setResellerUserAlarmThresholdWithOptions(request, runtime);
}

SetResellerUserQuotaResponse Alibabacloud_BssOpenApi20171214::Client::setResellerUserQuotaWithOptions(shared_ptr<SetResellerUserQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->amount)) {
    query->insert(pair<string, string>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currency)) {
    query->insert(pair<string, string>("Currency", *request->currency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outBizId)) {
    query->insert(pair<string, string>("OutBizId", *request->outBizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetResellerUserQuota"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetResellerUserQuotaResponse(callApi(params, req, runtime));
}

SetResellerUserQuotaResponse Alibabacloud_BssOpenApi20171214::Client::setResellerUserQuota(shared_ptr<SetResellerUserQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setResellerUserQuotaWithOptions(request, runtime);
}

SetResellerUserStatusResponse Alibabacloud_BssOpenApi20171214::Client::setResellerUserStatusWithOptions(shared_ptr<SetResellerUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stopMode)) {
    query->insert(pair<string, string>("StopMode", *request->stopMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetResellerUserStatus"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetResellerUserStatusResponse(callApi(params, req, runtime));
}

SetResellerUserStatusResponse Alibabacloud_BssOpenApi20171214::Client::setResellerUserStatus(shared_ptr<SetResellerUserStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setResellerUserStatusWithOptions(request, runtime);
}

SubscribeBillToOSSResponse Alibabacloud_BssOpenApi20171214::Client::subscribeBillToOSSWithOptions(shared_ptr<SubscribeBillToOSSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginBillingCycle)) {
    query->insert(pair<string, string>("BeginBillingCycle", *request->beginBillingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bucketOwnerId)) {
    query->insert(pair<string, long>("BucketOwnerId", *request->bucketOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketPath)) {
    query->insert(pair<string, string>("BucketPath", *request->bucketPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multAccountRelSubscribe)) {
    query->insert(pair<string, string>("MultAccountRelSubscribe", *request->multAccountRelSubscribe));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rowLimitPerFile)) {
    query->insert(pair<string, long>("RowLimitPerFile", *request->rowLimitPerFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscribeBucket)) {
    query->insert(pair<string, string>("SubscribeBucket", *request->subscribeBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscribeType)) {
    query->insert(pair<string, string>("SubscribeType", *request->subscribeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubscribeBillToOSS"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubscribeBillToOSSResponse(callApi(params, req, runtime));
}

SubscribeBillToOSSResponse Alibabacloud_BssOpenApi20171214::Client::subscribeBillToOSS(shared_ptr<SubscribeBillToOSSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return subscribeBillToOSSWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_BssOpenApi20171214::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_BssOpenApi20171214::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnsubscribeBillToOSSResponse Alibabacloud_BssOpenApi20171214::Client::unsubscribeBillToOSSWithOptions(shared_ptr<UnsubscribeBillToOSSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->multAccountRelSubscribe)) {
    query->insert(pair<string, string>("MultAccountRelSubscribe", *request->multAccountRelSubscribe));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscribeType)) {
    query->insert(pair<string, string>("SubscribeType", *request->subscribeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnsubscribeBillToOSS"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnsubscribeBillToOSSResponse(callApi(params, req, runtime));
}

UnsubscribeBillToOSSResponse Alibabacloud_BssOpenApi20171214::Client::unsubscribeBillToOSS(shared_ptr<UnsubscribeBillToOSSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unsubscribeBillToOSSWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_BssOpenApi20171214::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_BssOpenApi20171214::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpgradeResourcePackageResponse Alibabacloud_BssOpenApi20171214::Client::upgradeResourcePackageWithOptions(shared_ptr<UpgradeResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->effectiveDate)) {
    query->insert(pair<string, string>("EffectiveDate", *request->effectiveDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specification)) {
    query->insert(pair<string, string>("Specification", *request->specification));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeResourcePackage"))},
    {"version", boost::any(string("2017-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeResourcePackageResponse(callApi(params, req, runtime));
}

UpgradeResourcePackageResponse Alibabacloud_BssOpenApi20171214::Client::upgradeResourcePackage(shared_ptr<UpgradeResourcePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeResourcePackageWithOptions(request, runtime);
}

