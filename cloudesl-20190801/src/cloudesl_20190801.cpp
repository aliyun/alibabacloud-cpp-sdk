// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloudesl_20190801.hpp>
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

using namespace Alibabacloud_Cloudesl20190801;

Alibabacloud_Cloudesl20190801::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "cloudesl.aliyuncs.com"},
    {"ap-northeast-2-pop", "cloudesl.aliyuncs.com"},
    {"ap-south-1", "cloudesl.aliyuncs.com"},
    {"ap-southeast-1", "cloudesl.aliyuncs.com"},
    {"ap-southeast-2", "cloudesl.aliyuncs.com"},
    {"ap-southeast-3", "cloudesl.aliyuncs.com"},
    {"ap-southeast-5", "cloudesl.aliyuncs.com"},
    {"cn-beijing", "cloudesl.aliyuncs.com"},
    {"cn-beijing-finance-1", "cloudesl.aliyuncs.com"},
    {"cn-beijing-finance-pop", "cloudesl.aliyuncs.com"},
    {"cn-beijing-gov-1", "cloudesl.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "cloudesl.aliyuncs.com"},
    {"cn-chengdu", "cloudesl.aliyuncs.com"},
    {"cn-edge-1", "cloudesl.aliyuncs.com"},
    {"cn-fujian", "cloudesl.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "cloudesl.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "cloudesl.aliyuncs.com"},
    {"cn-hangzhou-finance", "cloudesl.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "cloudesl.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "cloudesl.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "cloudesl.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "cloudesl.aliyuncs.com"},
    {"cn-hangzhou-test-306", "cloudesl.aliyuncs.com"},
    {"cn-hongkong", "cloudesl.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "cloudesl.aliyuncs.com"},
    {"cn-huhehaote", "cloudesl.aliyuncs.com"},
    {"cn-north-2-gov-1", "cloudesl.aliyuncs.com"},
    {"cn-qingdao", "cloudesl.aliyuncs.com"},
    {"cn-qingdao-nebula", "cloudesl.aliyuncs.com"},
    {"cn-shanghai", "cloudesl.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "cloudesl.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "cloudesl.aliyuncs.com"},
    {"cn-shanghai-finance-1", "cloudesl.aliyuncs.com"},
    {"cn-shanghai-inner", "cloudesl.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "cloudesl.aliyuncs.com"},
    {"cn-shenzhen", "cloudesl.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "cloudesl.aliyuncs.com"},
    {"cn-shenzhen-inner", "cloudesl.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "cloudesl.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "cloudesl.aliyuncs.com"},
    {"cn-wuhan", "cloudesl.aliyuncs.com"},
    {"cn-yushanfang", "cloudesl.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "cloudesl.aliyuncs.com"},
    {"cn-zhangjiakou", "cloudesl.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "cloudesl.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "cloudesl.aliyuncs.com"},
    {"eu-central-1", "cloudesl.aliyuncs.com"},
    {"eu-west-1", "cloudesl.aliyuncs.com"},
    {"eu-west-1-oxs", "cloudesl.aliyuncs.com"},
    {"me-east-1", "cloudesl.aliyuncs.com"},
    {"rus-west-1-pop", "cloudesl.aliyuncs.com"},
    {"us-east-1", "cloudesl.aliyuncs.com"},
    {"us-west-1", "cloudesl.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cloudesl"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cloudesl20190801::Client::getEndpoint(shared_ptr<string> productId,
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

ActivateApDeviceResponse Alibabacloud_Cloudesl20190801::Client::activateApDeviceWithOptions(shared_ptr<ActivateApDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apMac)) {
    body->insert(pair<string, string>("ApMac", *request->apMac));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActivateApDevice"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ActivateApDeviceResponse(callApi(params, req, runtime));
}

ActivateApDeviceResponse Alibabacloud_Cloudesl20190801::Client::activateApDevice(shared_ptr<ActivateApDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateApDeviceWithOptions(request, runtime);
}

AddApDeviceResponse Alibabacloud_Cloudesl20190801::Client::addApDeviceWithOptions(shared_ptr<AddApDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apMac)) {
    body->insert(pair<string, string>("ApMac", *request->apMac));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddApDevice"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddApDeviceResponse(callApi(params, req, runtime));
}

AddApDeviceResponse Alibabacloud_Cloudesl20190801::Client::addApDevice(shared_ptr<AddApDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addApDeviceWithOptions(request, runtime);
}

AddEslDeviceResponse Alibabacloud_Cloudesl20190801::Client::addEslDeviceWithOptions(shared_ptr<AddEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEslDevice"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEslDeviceResponse(callApi(params, req, runtime));
}

AddEslDeviceResponse Alibabacloud_Cloudesl20190801::Client::addEslDevice(shared_ptr<AddEslDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEslDeviceWithOptions(request, runtime);
}

AddUserResponse Alibabacloud_Cloudesl20190801::Client::addUserWithOptions(shared_ptr<AddUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUser"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddUserResponse(callApi(params, req, runtime));
}

AddUserResponse Alibabacloud_Cloudesl20190801::Client::addUser(shared_ptr<AddUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserWithOptions(request, runtime);
}

AssignUserResponse Alibabacloud_Cloudesl20190801::Client::assignUserWithOptions(shared_ptr<AssignUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->stores)) {
    body->insert(pair<string, string>("Stores", *request->stores));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    body->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssignUser"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssignUserResponse(callApi(params, req, runtime));
}

AssignUserResponse Alibabacloud_Cloudesl20190801::Client::assignUser(shared_ptr<AssignUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignUserWithOptions(request, runtime);
}

BatchInsertItemsResponse Alibabacloud_Cloudesl20190801::Client::batchInsertItemsWithOptions(shared_ptr<BatchInsertItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<BatchInsertItemsRequestItemInfo>>(request->itemInfo)) {
    body->insert(pair<string, vector<BatchInsertItemsRequestItemInfo>>("ItemInfo", *request->itemInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchInsertItems"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchInsertItemsResponse(callApi(params, req, runtime));
}

BatchInsertItemsResponse Alibabacloud_Cloudesl20190801::Client::batchInsertItems(shared_ptr<BatchInsertItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchInsertItemsWithOptions(request, runtime);
}

BindEslDeviceResponse Alibabacloud_Cloudesl20190801::Client::bindEslDeviceWithOptions(shared_ptr<BindEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemBarCode)) {
    body->insert(pair<string, string>("ItemBarCode", *request->itemBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindEslDevice"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindEslDeviceResponse(callApi(params, req, runtime));
}

BindEslDeviceResponse Alibabacloud_Cloudesl20190801::Client::bindEslDevice(shared_ptr<BindEslDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindEslDeviceWithOptions(request, runtime);
}

BindEslDeviceShelfResponse Alibabacloud_Cloudesl20190801::Client::bindEslDeviceShelfWithOptions(shared_ptr<BindEslDeviceShelfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shelfCode)) {
    body->insert(pair<string, string>("ShelfCode", *request->shelfCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindEslDeviceShelf"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindEslDeviceShelfResponse(callApi(params, req, runtime));
}

BindEslDeviceShelfResponse Alibabacloud_Cloudesl20190801::Client::bindEslDeviceShelf(shared_ptr<BindEslDeviceShelfRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindEslDeviceShelfWithOptions(request, runtime);
}

ConfirmLogisticsResponse Alibabacloud_Cloudesl20190801::Client::confirmLogisticsWithOptions(shared_ptr<ConfirmLogisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logisticsDocuments)) {
    body->insert(pair<string, string>("LogisticsDocuments", *request->logisticsDocuments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poNumber)) {
    body->insert(pair<string, string>("PoNumber", *request->poNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prNumber)) {
    body->insert(pair<string, string>("PrNumber", *request->prNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmLogistics"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmLogisticsResponse(callApi(params, req, runtime));
}

ConfirmLogisticsResponse Alibabacloud_Cloudesl20190801::Client::confirmLogistics(shared_ptr<ConfirmLogisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmLogisticsWithOptions(request, runtime);
}

CreateStoreResponse Alibabacloud_Cloudesl20190801::Client::createStoreWithOptions(shared_ptr<CreateStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->brand)) {
    body->insert(pair<string, string>("Brand", *request->brand));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comments)) {
    body->insert(pair<string, string>("Comments", *request->comments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->companyId)) {
    body->insert(pair<string, string>("CompanyId", *request->companyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groups)) {
    body->insert(pair<string, string>("Groups", *request->groups));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    body->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentId)) {
    body->insert(pair<string, string>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeName)) {
    body->insert(pair<string, string>("StoreName", *request->storeName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStore"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateStoreResponse(callApi(params, req, runtime));
}

CreateStoreResponse Alibabacloud_Cloudesl20190801::Client::createStore(shared_ptr<CreateStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStoreWithOptions(request, runtime);
}

DeleteApDeviceResponse Alibabacloud_Cloudesl20190801::Client::deleteApDeviceWithOptions(shared_ptr<DeleteApDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apMac)) {
    body->insert(pair<string, string>("ApMac", *request->apMac));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApDevice"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApDeviceResponse(callApi(params, req, runtime));
}

DeleteApDeviceResponse Alibabacloud_Cloudesl20190801::Client::deleteApDevice(shared_ptr<DeleteApDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApDeviceWithOptions(request, runtime);
}

DeleteEslDeviceResponse Alibabacloud_Cloudesl20190801::Client::deleteEslDeviceWithOptions(shared_ptr<DeleteEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEslDevice"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEslDeviceResponse(callApi(params, req, runtime));
}

DeleteEslDeviceResponse Alibabacloud_Cloudesl20190801::Client::deleteEslDevice(shared_ptr<DeleteEslDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEslDeviceWithOptions(request, runtime);
}

DeleteItemResponse Alibabacloud_Cloudesl20190801::Client::deleteItemWithOptions(shared_ptr<DeleteItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->itemBarCode)) {
    body->insert(pair<string, string>("ItemBarCode", *request->itemBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteItem"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteItemResponse(callApi(params, req, runtime));
}

DeleteItemResponse Alibabacloud_Cloudesl20190801::Client::deleteItem(shared_ptr<DeleteItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteItemWithOptions(request, runtime);
}

DeleteItemBySkuIdResponse Alibabacloud_Cloudesl20190801::Client::deleteItemBySkuIdWithOptions(shared_ptr<DeleteItemBySkuIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->skuId)) {
    body->insert(pair<string, string>("SkuId", *request->skuId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteItemBySkuId"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteItemBySkuIdResponse(callApi(params, req, runtime));
}

DeleteItemBySkuIdResponse Alibabacloud_Cloudesl20190801::Client::deleteItemBySkuId(shared_ptr<DeleteItemBySkuIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteItemBySkuIdWithOptions(request, runtime);
}

DeleteStoreResponse Alibabacloud_Cloudesl20190801::Client::deleteStoreWithOptions(shared_ptr<DeleteStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStore"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteStoreResponse(callApi(params, req, runtime));
}

DeleteStoreResponse Alibabacloud_Cloudesl20190801::Client::deleteStore(shared_ptr<DeleteStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStoreWithOptions(request, runtime);
}

DeleteUserResponse Alibabacloud_Cloudesl20190801::Client::deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUser"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserResponse(callApi(params, req, runtime));
}

DeleteUserResponse Alibabacloud_Cloudesl20190801::Client::deleteUser(shared_ptr<DeleteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserWithOptions(request, runtime);
}

DescribeAlarmsResponse Alibabacloud_Cloudesl20190801::Client::describeAlarmsWithOptions(shared_ptr<DescribeAlarmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmId)) {
    body->insert(pair<string, string>("AlarmId", *request->alarmId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmStatus)) {
    body->insert(pair<string, string>("AlarmStatus", *request->alarmStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmType)) {
    body->insert(pair<string, string>("AlarmType", *request->alarmType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorType)) {
    body->insert(pair<string, string>("ErrorType", *request->errorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromAlarmTime)) {
    body->insert(pair<string, string>("FromAlarmTime", *request->fromAlarmTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toAlarmTime)) {
    body->insert(pair<string, string>("ToAlarmTime", *request->toAlarmTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlarms"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlarmsResponse(callApi(params, req, runtime));
}

DescribeAlarmsResponse Alibabacloud_Cloudesl20190801::Client::describeAlarms(shared_ptr<DescribeAlarmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlarmsWithOptions(request, runtime);
}

DescribeApDevicesResponse Alibabacloud_Cloudesl20190801::Client::describeApDevicesWithOptions(shared_ptr<DescribeApDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->activated)) {
    body->insert(pair<string, bool>("Activated", *request->activated));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apMac)) {
    body->insert(pair<string, string>("ApMac", *request->apMac));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApDevices"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApDevicesResponse(callApi(params, req, runtime));
}

DescribeApDevicesResponse Alibabacloud_Cloudesl20190801::Client::describeApDevices(shared_ptr<DescribeApDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApDevicesWithOptions(request, runtime);
}

DescribeEslDevicesResponse Alibabacloud_Cloudesl20190801::Client::describeEslDevicesWithOptions(shared_ptr<DescribeEslDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->beBind)) {
    body->insert(pair<string, bool>("BeBind", *request->beBind));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eslStatus)) {
    body->insert(pair<string, string>("EslStatus", *request->eslStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fromBatteryLevel)) {
    body->insert(pair<string, long>("FromBatteryLevel", *request->fromBatteryLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemBarCode)) {
    body->insert(pair<string, string>("ItemBarCode", *request->itemBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mac)) {
    body->insert(pair<string, string>("Mac", *request->mac));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shelfCode)) {
    body->insert(pair<string, string>("ShelfCode", *request->shelfCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->toBatteryLevel)) {
    body->insert(pair<string, long>("ToBatteryLevel", *request->toBatteryLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendor)) {
    body->insert(pair<string, string>("Vendor", *request->vendor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEslDevices"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEslDevicesResponse(callApi(params, req, runtime));
}

DescribeEslDevicesResponse Alibabacloud_Cloudesl20190801::Client::describeEslDevices(shared_ptr<DescribeEslDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEslDevicesWithOptions(request, runtime);
}

DescribeItemsResponse Alibabacloud_Cloudesl20190801::Client::describeItemsWithOptions(shared_ptr<DescribeItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->bePromotion)) {
    body->insert(pair<string, bool>("BePromotion", *request->bePromotion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemBarCode)) {
    body->insert(pair<string, string>("ItemBarCode", *request->itemBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    body->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemTitle)) {
    body->insert(pair<string, string>("ItemTitle", *request->itemTitle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skuId)) {
    body->insert(pair<string, string>("SkuId", *request->skuId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeItems"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeItemsResponse(callApi(params, req, runtime));
}

DescribeItemsResponse Alibabacloud_Cloudesl20190801::Client::describeItems(shared_ptr<DescribeItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeItemsWithOptions(request, runtime);
}

DescribeLogisticsResponse Alibabacloud_Cloudesl20190801::Client::describeLogisticsWithOptions(shared_ptr<DescribeLogisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLogistics"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLogisticsResponse(callApi(params, req, runtime));
}

DescribeLogisticsResponse Alibabacloud_Cloudesl20190801::Client::describeLogistics(shared_ptr<DescribeLogisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogisticsWithOptions(request, runtime);
}

DescribePayOrdersResponse Alibabacloud_Cloudesl20190801::Client::describePayOrdersWithOptions(shared_ptr<DescribePayOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fromDate)) {
    body->insert(pair<string, string>("FromDate", *request->fromDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toDate)) {
    body->insert(pair<string, string>("ToDate", *request->toDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePayOrders"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePayOrdersResponse(callApi(params, req, runtime));
}

DescribePayOrdersResponse Alibabacloud_Cloudesl20190801::Client::describePayOrders(shared_ptr<DescribePayOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePayOrdersWithOptions(request, runtime);
}

DescribePlanogramRailsResponse Alibabacloud_Cloudesl20190801::Client::describePlanogramRailsWithOptions(shared_ptr<DescribePlanogramRailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->layer)) {
    body->insert(pair<string, string>("Layer", *request->layer));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->railCode)) {
    body->insert(pair<string, string>("RailCode", *request->railCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shelf)) {
    body->insert(pair<string, string>("Shelf", *request->shelf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlanogramRails"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePlanogramRailsResponse(callApi(params, req, runtime));
}

DescribePlanogramRailsResponse Alibabacloud_Cloudesl20190801::Client::describePlanogramRails(shared_ptr<DescribePlanogramRailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlanogramRailsWithOptions(request, runtime);
}

DescribeStoresResponse Alibabacloud_Cloudesl20190801::Client::describeStoresWithOptions(shared_ptr<DescribeStoresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->brand)) {
    body->insert(pair<string, string>("Brand", *request->brand));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->companyId)) {
    body->insert(pair<string, string>("CompanyId", *request->companyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromDate)) {
    body->insert(pair<string, string>("FromDate", *request->fromDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeName)) {
    body->insert(pair<string, string>("StoreName", *request->storeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toDate)) {
    body->insert(pair<string, string>("ToDate", *request->toDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStores"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeStoresResponse(callApi(params, req, runtime));
}

DescribeStoresResponse Alibabacloud_Cloudesl20190801::Client::describeStores(shared_ptr<DescribeStoresRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStoresWithOptions(request, runtime);
}

DescribeUserLogResponse Alibabacloud_Cloudesl20190801::Client::describeUserLogWithOptions(shared_ptr<DescribeUserLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromDate)) {
    body->insert(pair<string, string>("FromDate", *request->fromDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemBarCode)) {
    body->insert(pair<string, string>("ItemBarCode", *request->itemBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    body->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemTitle)) {
    body->insert(pair<string, string>("ItemTitle", *request->itemTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateStatus)) {
    body->insert(pair<string, string>("OperateStatus", *request->operateStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    body->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->operateUserId)) {
    body->insert(pair<string, long>("OperateUserId", *request->operateUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    body->insert(pair<string, bool>("Reverse", *request->reverse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toDate)) {
    body->insert(pair<string, string>("ToDate", *request->toDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserLog"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserLogResponse(callApi(params, req, runtime));
}

DescribeUserLogResponse Alibabacloud_Cloudesl20190801::Client::describeUserLog(shared_ptr<DescribeUserLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserLogWithOptions(request, runtime);
}

DescribeUsersResponse Alibabacloud_Cloudesl20190801::Client::describeUsersWithOptions(shared_ptr<DescribeUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    body->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsers"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsersResponse(callApi(params, req, runtime));
}

DescribeUsersResponse Alibabacloud_Cloudesl20190801::Client::describeUsers(shared_ptr<DescribeUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUsersWithOptions(request, runtime);
}

GetCompanyResponse Alibabacloud_Cloudesl20190801::Client::getCompanyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCompany"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCompanyResponse(callApi(params, req, runtime));
}

GetCompanyResponse Alibabacloud_Cloudesl20190801::Client::getCompany() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCompanyWithOptions(runtime);
}

GetUserResponse Alibabacloud_Cloudesl20190801::Client::getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUser"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserResponse(callApi(params, req, runtime));
}

GetUserResponse Alibabacloud_Cloudesl20190801::Client::getUser(shared_ptr<GetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserWithOptions(request, runtime);
}

MapPlanogramRailResponse Alibabacloud_Cloudesl20190801::Client::mapPlanogramRailWithOptions(shared_ptr<MapPlanogramRailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->layer)) {
    body->insert(pair<string, string>("Layer", *request->layer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->railCode)) {
    body->insert(pair<string, string>("RailCode", *request->railCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shelf)) {
    body->insert(pair<string, string>("Shelf", *request->shelf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MapPlanogramRail"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MapPlanogramRailResponse(callApi(params, req, runtime));
}

MapPlanogramRailResponse Alibabacloud_Cloudesl20190801::Client::mapPlanogramRail(shared_ptr<MapPlanogramRailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return mapPlanogramRailWithOptions(request, runtime);
}

RefreshTaobaoItemResponse Alibabacloud_Cloudesl20190801::Client::refreshTaobaoItemWithOptions(shared_ptr<RefreshTaobaoItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outerId)) {
    body->insert(pair<string, string>("OuterId", *request->outerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skuId)) {
    body->insert(pair<string, string>("SkuId", *request->skuId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taobaoItemId)) {
    body->insert(pair<string, string>("TaobaoItemId", *request->taobaoItemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshTaobaoItem"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshTaobaoItemResponse(callApi(params, req, runtime));
}

RefreshTaobaoItemResponse Alibabacloud_Cloudesl20190801::Client::refreshTaobaoItem(shared_ptr<RefreshTaobaoItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshTaobaoItemWithOptions(request, runtime);
}

UnassignUserResponse Alibabacloud_Cloudesl20190801::Client::unassignUserWithOptions(shared_ptr<UnassignUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnassignUser"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnassignUserResponse(callApi(params, req, runtime));
}

UnassignUserResponse Alibabacloud_Cloudesl20190801::Client::unassignUser(shared_ptr<UnassignUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unassignUserWithOptions(request, runtime);
}

UnbindEslDeviceResponse Alibabacloud_Cloudesl20190801::Client::unbindEslDeviceWithOptions(shared_ptr<UnbindEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemBarCode)) {
    body->insert(pair<string, string>("ItemBarCode", *request->itemBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindEslDevice"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindEslDeviceResponse(callApi(params, req, runtime));
}

UnbindEslDeviceResponse Alibabacloud_Cloudesl20190801::Client::unbindEslDevice(shared_ptr<UnbindEslDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindEslDeviceWithOptions(request, runtime);
}

UnbindEslDeviceShelfResponse Alibabacloud_Cloudesl20190801::Client::unbindEslDeviceShelfWithOptions(shared_ptr<UnbindEslDeviceShelfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindEslDeviceShelf"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindEslDeviceShelfResponse(callApi(params, req, runtime));
}

UnbindEslDeviceShelfResponse Alibabacloud_Cloudesl20190801::Client::unbindEslDeviceShelf(shared_ptr<UnbindEslDeviceShelfRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindEslDeviceShelfWithOptions(request, runtime);
}

UnmapPlanogramRailResponse Alibabacloud_Cloudesl20190801::Client::unmapPlanogramRailWithOptions(shared_ptr<UnmapPlanogramRailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->railCode)) {
    body->insert(pair<string, string>("RailCode", *request->railCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnmapPlanogramRail"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnmapPlanogramRailResponse(callApi(params, req, runtime));
}

UnmapPlanogramRailResponse Alibabacloud_Cloudesl20190801::Client::unmapPlanogramRail(shared_ptr<UnmapPlanogramRailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unmapPlanogramRailWithOptions(request, runtime);
}

UpdateEslDeviceLightResponse Alibabacloud_Cloudesl20190801::Client::updateEslDeviceLightWithOptions(shared_ptr<UpdateEslDeviceLightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->frequency)) {
    body->insert(pair<string, string>("Frequency", *request->frequency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemBarCode)) {
    body->insert(pair<string, string>("ItemBarCode", *request->itemBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ledColor)) {
    body->insert(pair<string, string>("LedColor", *request->ledColor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lightUpTime)) {
    body->insert(pair<string, long>("LightUpTime", *request->lightUpTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEslDeviceLight"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEslDeviceLightResponse(callApi(params, req, runtime));
}

UpdateEslDeviceLightResponse Alibabacloud_Cloudesl20190801::Client::updateEslDeviceLight(shared_ptr<UpdateEslDeviceLightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEslDeviceLightWithOptions(request, runtime);
}

UpdateStoreResponse Alibabacloud_Cloudesl20190801::Client::updateStoreWithOptions(shared_ptr<UpdateStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->brand)) {
    body->insert(pair<string, string>("Brand", *request->brand));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comments)) {
    body->insert(pair<string, string>("Comments", *request->comments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groups)) {
    body->insert(pair<string, string>("Groups", *request->groups));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    body->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeName)) {
    body->insert(pair<string, string>("StoreName", *request->storeName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateStore"))},
    {"version", boost::any(string("2019-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateStoreResponse(callApi(params, req, runtime));
}

UpdateStoreResponse Alibabacloud_Cloudesl20190801::Client::updateStore(shared_ptr<UpdateStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStoreWithOptions(request, runtime);
}

