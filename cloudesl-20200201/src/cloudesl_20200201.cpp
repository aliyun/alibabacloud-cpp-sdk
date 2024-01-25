// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloudesl_20200201.hpp>
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

using namespace Alibabacloud_Cloudesl20200201;

Alibabacloud_Cloudesl20200201::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Cloudesl20200201::Client::getEndpoint(shared_ptr<string> productId,
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

ActivateApDeviceResponse Alibabacloud_Cloudesl20200201::Client::activateApDeviceWithOptions(shared_ptr<ActivateApDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apMac)) {
    body->insert(pair<string, string>("ApMac", *request->apMac));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActivateApDevice"))},
    {"version", boost::any(string("2020-02-01"))},
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

ActivateApDeviceResponse Alibabacloud_Cloudesl20200201::Client::activateApDevice(shared_ptr<ActivateApDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateApDeviceWithOptions(request, runtime);
}

AddApDeviceResponse Alibabacloud_Cloudesl20200201::Client::addApDeviceWithOptions(shared_ptr<AddApDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apMac)) {
    body->insert(pair<string, string>("ApMac", *request->apMac));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    body->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddApDevice"))},
    {"version", boost::any(string("2020-02-01"))},
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

AddApDeviceResponse Alibabacloud_Cloudesl20200201::Client::addApDevice(shared_ptr<AddApDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addApDeviceWithOptions(request, runtime);
}

AddCompanyTemplateResponse Alibabacloud_Cloudesl20200201::Client::addCompanyTemplateWithOptions(shared_ptr<AddCompanyTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    body->insert(pair<string, string>("DeviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eslSize)) {
    body->insert(pair<string, string>("EslSize", *request->eslSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ifDefault)) {
    body->insert(pair<string, bool>("IfDefault", *request->ifDefault));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ifMember)) {
    body->insert(pair<string, bool>("IfMember", *request->ifMember));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ifOutOfInventory)) {
    body->insert(pair<string, bool>("IfOutOfInventory", *request->ifOutOfInventory));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ifPromotion)) {
    body->insert(pair<string, bool>("IfPromotion", *request->ifPromotion));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ifSourceCode)) {
    body->insert(pair<string, bool>("IfSourceCode", *request->ifSourceCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->layout)) {
    body->insert(pair<string, long>("Layout", *request->layout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    body->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateSceneId)) {
    body->insert(pair<string, string>("TemplateSceneId", *request->templateSceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    body->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    body->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendor)) {
    body->insert(pair<string, string>("Vendor", *request->vendor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCompanyTemplate"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCompanyTemplateResponse(callApi(params, req, runtime));
}

AddCompanyTemplateResponse Alibabacloud_Cloudesl20200201::Client::addCompanyTemplate(shared_ptr<AddCompanyTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCompanyTemplateWithOptions(request, runtime);
}

AddUserResponse Alibabacloud_Cloudesl20200201::Client::addUserWithOptions(shared_ptr<AddUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUser"))},
    {"version", boost::any(string("2020-02-01"))},
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

AddUserResponse Alibabacloud_Cloudesl20200201::Client::addUser(shared_ptr<AddUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserWithOptions(request, runtime);
}

ApplyCompanyTemplateVersionToStoresResponse Alibabacloud_Cloudesl20200201::Client::applyCompanyTemplateVersionToStoresWithOptions(shared_ptr<ApplyCompanyTemplateVersionToStoresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->stores)) {
    body->insert(pair<string, string>("Stores", *request->stores));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    body->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyCompanyTemplateVersionToStores"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyCompanyTemplateVersionToStoresResponse(callApi(params, req, runtime));
}

ApplyCompanyTemplateVersionToStoresResponse Alibabacloud_Cloudesl20200201::Client::applyCompanyTemplateVersionToStores(shared_ptr<ApplyCompanyTemplateVersionToStoresRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyCompanyTemplateVersionToStoresWithOptions(request, runtime);
}

AssignUserResponse Alibabacloud_Cloudesl20200201::Client::assignUserWithOptions(shared_ptr<AssignUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
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
    {"version", boost::any(string("2020-02-01"))},
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

AssignUserResponse Alibabacloud_Cloudesl20200201::Client::assignUser(shared_ptr<AssignUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignUserWithOptions(request, runtime);
}

BatchInsertItemsResponse Alibabacloud_Cloudesl20200201::Client::batchInsertItemsWithOptions(shared_ptr<BatchInsertItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<vector<BatchInsertItemsRequestItemInfo>>(request->itemInfo)) {
    body->insert(pair<string, vector<BatchInsertItemsRequestItemInfo>>("ItemInfo", *request->itemInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->syncByItemId)) {
    body->insert(pair<string, bool>("SyncByItemId", *request->syncByItemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchInsertItems"))},
    {"version", boost::any(string("2020-02-01"))},
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

BatchInsertItemsResponse Alibabacloud_Cloudesl20200201::Client::batchInsertItems(shared_ptr<BatchInsertItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchInsertItemsWithOptions(request, runtime);
}

BindEslDeviceResponse Alibabacloud_Cloudesl20200201::Client::bindEslDeviceWithOptions(shared_ptr<BindEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->column)) {
    body->insert(pair<string, string>("Column", *request->column));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerId)) {
    body->insert(pair<string, string>("ContainerId", *request->containerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerName)) {
    body->insert(pair<string, string>("ContainerName", *request->containerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemBarCode)) {
    body->insert(pair<string, string>("ItemBarCode", *request->itemBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->layer)) {
    body->insert(pair<string, long>("Layer", *request->layer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutId)) {
    body->insert(pair<string, string>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutName)) {
    body->insert(pair<string, string>("LayoutName", *request->layoutName));
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
    {"action", boost::any(string("BindEslDevice"))},
    {"version", boost::any(string("2020-02-01"))},
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

BindEslDeviceResponse Alibabacloud_Cloudesl20200201::Client::bindEslDevice(shared_ptr<BindEslDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindEslDeviceWithOptions(request, runtime);
}

CreateStoreResponse Alibabacloud_Cloudesl20200201::Client::createStoreWithOptions(shared_ptr<CreateStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->autoUnbindDays)) {
    body->insert(pair<string, long>("AutoUnbindDays", *request->autoUnbindDays));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoUnbindOfflineEsl)) {
    body->insert(pair<string, bool>("AutoUnbindOfflineEsl", *request->autoUnbindOfflineEsl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->barCodeEncode)) {
    body->insert(pair<string, long>("BarCodeEncode", *request->barCodeEncode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->timeZone)) {
    body->insert(pair<string, string>("TimeZone", *request->timeZone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userStoreCode)) {
    body->insert(pair<string, string>("UserStoreCode", *request->userStoreCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStore"))},
    {"version", boost::any(string("2020-02-01"))},
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

CreateStoreResponse Alibabacloud_Cloudesl20200201::Client::createStore(shared_ptr<CreateStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStoreWithOptions(request, runtime);
}

DeleteApDeviceResponse Alibabacloud_Cloudesl20200201::Client::deleteApDeviceWithOptions(shared_ptr<DeleteApDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apMac)) {
    body->insert(pair<string, string>("ApMac", *request->apMac));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApDevice"))},
    {"version", boost::any(string("2020-02-01"))},
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

DeleteApDeviceResponse Alibabacloud_Cloudesl20200201::Client::deleteApDevice(shared_ptr<DeleteApDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApDeviceWithOptions(request, runtime);
}

DeleteCompanyTemplateResponse Alibabacloud_Cloudesl20200201::Client::deleteCompanyTemplateWithOptions(shared_ptr<DeleteCompanyTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCompanyTemplate"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCompanyTemplateResponse(callApi(params, req, runtime));
}

DeleteCompanyTemplateResponse Alibabacloud_Cloudesl20200201::Client::deleteCompanyTemplate(shared_ptr<DeleteCompanyTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCompanyTemplateWithOptions(request, runtime);
}

DeleteItemResponse Alibabacloud_Cloudesl20200201::Client::deleteItemWithOptions(shared_ptr<DeleteItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->itemBarCode)) {
    body->insert(pair<string, string>("ItemBarCode", *request->itemBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->unbindEslDevice)) {
    body->insert(pair<string, bool>("UnbindEslDevice", *request->unbindEslDevice));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteItem"))},
    {"version", boost::any(string("2020-02-01"))},
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

DeleteItemResponse Alibabacloud_Cloudesl20200201::Client::deleteItem(shared_ptr<DeleteItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteItemWithOptions(request, runtime);
}

DeleteStoreResponse Alibabacloud_Cloudesl20200201::Client::deleteStoreWithOptions(shared_ptr<DeleteStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStore"))},
    {"version", boost::any(string("2020-02-01"))},
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

DeleteStoreResponse Alibabacloud_Cloudesl20200201::Client::deleteStore(shared_ptr<DeleteStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStoreWithOptions(request, runtime);
}

DeleteUserResponse Alibabacloud_Cloudesl20200201::Client::deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUser"))},
    {"version", boost::any(string("2020-02-01"))},
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

DeleteUserResponse Alibabacloud_Cloudesl20200201::Client::deleteUser(shared_ptr<DeleteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserWithOptions(request, runtime);
}

DescribeApDevicesResponse Alibabacloud_Cloudesl20200201::Client::describeApDevicesWithOptions(shared_ptr<DescribeApDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apMac)) {
    body->insert(pair<string, string>("ApMac", *request->apMac));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->beActivate)) {
    body->insert(pair<string, bool>("BeActivate", *request->beActivate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->status)) {
    body->insert(pair<string, bool>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApDevices"))},
    {"version", boost::any(string("2020-02-01"))},
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

DescribeApDevicesResponse Alibabacloud_Cloudesl20200201::Client::describeApDevices(shared_ptr<DescribeApDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApDevicesWithOptions(request, runtime);
}

DescribeAvailableEslModelsResponse Alibabacloud_Cloudesl20200201::Client::describeAvailableEslModelsWithOptions(shared_ptr<DescribeAvailableEslModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableEslModels"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableEslModelsResponse(callApi(params, req, runtime));
}

DescribeAvailableEslModelsResponse Alibabacloud_Cloudesl20200201::Client::describeAvailableEslModels(shared_ptr<DescribeAvailableEslModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableEslModelsWithOptions(request, runtime);
}

DescribeBindersResponse Alibabacloud_Cloudesl20200201::Client::describeBindersWithOptions(shared_ptr<DescribeBindersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemBarCode)) {
    body->insert(pair<string, string>("ItemBarCode", *request->itemBarCode));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBinders"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBindersResponse(callApi(params, req, runtime));
}

DescribeBindersResponse Alibabacloud_Cloudesl20200201::Client::describeBinders(shared_ptr<DescribeBindersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBindersWithOptions(request, runtime);
}

DescribeCompanyTemplateVersionsResponse Alibabacloud_Cloudesl20200201::Client::describeCompanyTemplateVersionsWithOptions(shared_ptr<DescribeCompanyTemplateVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCompanyTemplateVersions"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCompanyTemplateVersionsResponse(callApi(params, req, runtime));
}

DescribeCompanyTemplateVersionsResponse Alibabacloud_Cloudesl20200201::Client::describeCompanyTemplateVersions(shared_ptr<DescribeCompanyTemplateVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCompanyTemplateVersionsWithOptions(request, runtime);
}

DescribeEslDeviceResponse Alibabacloud_Cloudesl20200201::Client::describeEslDeviceWithOptions(shared_ptr<DescribeEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<string>(request->toDate)) {
    body->insert(pair<string, string>("ToDate", *request->toDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEslDevice"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEslDeviceResponse(callApi(params, req, runtime));
}

DescribeEslDeviceResponse Alibabacloud_Cloudesl20200201::Client::describeEslDevice(shared_ptr<DescribeEslDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEslDeviceWithOptions(request, runtime);
}

DescribeEslDevicesResponse Alibabacloud_Cloudesl20200201::Client::describeEslDevicesWithOptions(shared_ptr<DescribeEslDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eslStatus)) {
    body->insert(pair<string, string>("EslStatus", *request->eslStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fromBatteryLevel)) {
    body->insert(pair<string, long>("FromBatteryLevel", *request->fromBatteryLevel));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->toBatteryLevel)) {
    body->insert(pair<string, long>("ToBatteryLevel", *request->toBatteryLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->typeEncode)) {
    body->insert(pair<string, string>("TypeEncode", *request->typeEncode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEslDevices"))},
    {"version", boost::any(string("2020-02-01"))},
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

DescribeEslDevicesResponse Alibabacloud_Cloudesl20200201::Client::describeEslDevices(shared_ptr<DescribeEslDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEslDevicesWithOptions(request, runtime);
}

DescribeEslModelByTemplateVersionResponse Alibabacloud_Cloudesl20200201::Client::describeEslModelByTemplateVersionWithOptions(shared_ptr<DescribeEslModelByTemplateVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    body->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEslModelByTemplateVersion"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEslModelByTemplateVersionResponse(callApi(params, req, runtime));
}

DescribeEslModelByTemplateVersionResponse Alibabacloud_Cloudesl20200201::Client::describeEslModelByTemplateVersion(shared_ptr<DescribeEslModelByTemplateVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEslModelByTemplateVersionWithOptions(request, runtime);
}

DescribeItemsResponse Alibabacloud_Cloudesl20200201::Client::describeItemsWithOptions(shared_ptr<DescribeItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->bePromotion)) {
    body->insert(pair<string, bool>("BePromotion", *request->bePromotion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemBarCode)) {
    body->insert(pair<string, string>("ItemBarCode", *request->itemBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemId)) {
    body->insert(pair<string, string>("ItemId", *request->itemId));
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
    {"version", boost::any(string("2020-02-01"))},
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

DescribeItemsResponse Alibabacloud_Cloudesl20200201::Client::describeItems(shared_ptr<DescribeItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeItemsWithOptions(request, runtime);
}

DescribeStoreByTemplateVersionResponse Alibabacloud_Cloudesl20200201::Client::describeStoreByTemplateVersionWithOptions(shared_ptr<DescribeStoreByTemplateVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    body->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStoreByTemplateVersion"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeStoreByTemplateVersionResponse(callApi(params, req, runtime));
}

DescribeStoreByTemplateVersionResponse Alibabacloud_Cloudesl20200201::Client::describeStoreByTemplateVersion(shared_ptr<DescribeStoreByTemplateVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStoreByTemplateVersionWithOptions(request, runtime);
}

DescribeStoreConfigResponse Alibabacloud_Cloudesl20200201::Client::describeStoreConfigWithOptions(shared_ptr<DescribeStoreConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStoreConfig"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeStoreConfigResponse(callApi(params, req, runtime));
}

DescribeStoreConfigResponse Alibabacloud_Cloudesl20200201::Client::describeStoreConfig(shared_ptr<DescribeStoreConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStoreConfigWithOptions(request, runtime);
}

DescribeStoresResponse Alibabacloud_Cloudesl20200201::Client::describeStoresWithOptions(shared_ptr<DescribeStoresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    body->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toDate)) {
    body->insert(pair<string, string>("ToDate", *request->toDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userStoreCode)) {
    body->insert(pair<string, string>("UserStoreCode", *request->userStoreCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStores"))},
    {"version", boost::any(string("2020-02-01"))},
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

DescribeStoresResponse Alibabacloud_Cloudesl20200201::Client::describeStores(shared_ptr<DescribeStoresRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStoresWithOptions(request, runtime);
}

DescribeTemplateByModelResponse Alibabacloud_Cloudesl20200201::Client::describeTemplateByModelWithOptions(shared_ptr<DescribeTemplateByModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    body->insert(pair<string, string>("DeviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eslSize)) {
    body->insert(pair<string, string>("EslSize", *request->eslSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    body->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTemplateByModel"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTemplateByModelResponse(callApi(params, req, runtime));
}

DescribeTemplateByModelResponse Alibabacloud_Cloudesl20200201::Client::describeTemplateByModel(shared_ptr<DescribeTemplateByModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTemplateByModelWithOptions(request, runtime);
}

DescribeUserLogResponse Alibabacloud_Cloudesl20200201::Client::describeUserLogWithOptions(shared_ptr<DescribeUserLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromDate)) {
    body->insert(pair<string, string>("FromDate", *request->fromDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemBarCode)) {
    body->insert(pair<string, string>("ItemBarCode", *request->itemBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemShortTitle)) {
    body->insert(pair<string, string>("ItemShortTitle", *request->itemShortTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logId)) {
    body->insert(pair<string, string>("LogId", *request->logId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationStatus)) {
    body->insert(pair<string, string>("OperationStatus", *request->operationStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationType)) {
    body->insert(pair<string, string>("OperationType", *request->operationType));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->toDate)) {
    body->insert(pair<string, string>("ToDate", *request->toDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserLog"))},
    {"version", boost::any(string("2020-02-01"))},
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

DescribeUserLogResponse Alibabacloud_Cloudesl20200201::Client::describeUserLog(shared_ptr<DescribeUserLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserLogWithOptions(request, runtime);
}

DescribeUsersResponse Alibabacloud_Cloudesl20200201::Client::describeUsersWithOptions(shared_ptr<DescribeUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
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
    {"version", boost::any(string("2020-02-01"))},
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

DescribeUsersResponse Alibabacloud_Cloudesl20200201::Client::describeUsers(shared_ptr<DescribeUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUsersWithOptions(request, runtime);
}

GetUserResponse Alibabacloud_Cloudesl20200201::Client::getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUser"))},
    {"version", boost::any(string("2020-02-01"))},
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

GetUserResponse Alibabacloud_Cloudesl20200201::Client::getUser(shared_ptr<GetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserWithOptions(request, runtime);
}

QueryTemplateListByGroupIdResponse Alibabacloud_Cloudesl20200201::Client::queryTemplateListByGroupIdWithOptions(shared_ptr<QueryTemplateListByGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTemplateListByGroupId"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTemplateListByGroupIdResponse(callApi(params, req, runtime));
}

QueryTemplateListByGroupIdResponse Alibabacloud_Cloudesl20200201::Client::queryTemplateListByGroupId(shared_ptr<QueryTemplateListByGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTemplateListByGroupIdWithOptions(request, runtime);
}

SyncAddMaterialResponse Alibabacloud_Cloudesl20200201::Client::syncAddMaterialWithOptions(shared_ptr<SyncAddMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncAddMaterial"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncAddMaterialResponse(callApi(params, req, runtime));
}

SyncAddMaterialResponse Alibabacloud_Cloudesl20200201::Client::syncAddMaterial(shared_ptr<SyncAddMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncAddMaterialWithOptions(request, runtime);
}

UnassignUserResponse Alibabacloud_Cloudesl20200201::Client::unassignUserWithOptions(shared_ptr<UnassignUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnassignUser"))},
    {"version", boost::any(string("2020-02-01"))},
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

UnassignUserResponse Alibabacloud_Cloudesl20200201::Client::unassignUser(shared_ptr<UnassignUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unassignUserWithOptions(request, runtime);
}

UnbindEslDeviceResponse Alibabacloud_Cloudesl20200201::Client::unbindEslDeviceWithOptions(shared_ptr<UnbindEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->column)) {
    body->insert(pair<string, string>("Column", *request->column));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerName)) {
    body->insert(pair<string, string>("ContainerName", *request->containerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemBarCode)) {
    body->insert(pair<string, string>("ItemBarCode", *request->itemBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->layer)) {
    body->insert(pair<string, long>("Layer", *request->layer));
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
    {"action", boost::any(string("UnbindEslDevice"))},
    {"version", boost::any(string("2020-02-01"))},
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

UnbindEslDeviceResponse Alibabacloud_Cloudesl20200201::Client::unbindEslDevice(shared_ptr<UnbindEslDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindEslDeviceWithOptions(request, runtime);
}

UpdateEslDeviceLightResponse Alibabacloud_Cloudesl20200201::Client::updateEslDeviceLightWithOptions(shared_ptr<UpdateEslDeviceLightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eslBarCode)) {
    body->insert(pair<string, string>("EslBarCode", *request->eslBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
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
    {"version", boost::any(string("2020-02-01"))},
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

UpdateEslDeviceLightResponse Alibabacloud_Cloudesl20200201::Client::updateEslDeviceLight(shared_ptr<UpdateEslDeviceLightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEslDeviceLightWithOptions(request, runtime);
}

UpdateStoreResponse Alibabacloud_Cloudesl20200201::Client::updateStoreWithOptions(shared_ptr<UpdateStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->autoUnbindDays)) {
    body->insert(pair<string, long>("AutoUnbindDays", *request->autoUnbindDays));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoUnbindOfflineEsl)) {
    body->insert(pair<string, bool>("AutoUnbindOfflineEsl", *request->autoUnbindOfflineEsl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->barCodeEncode)) {
    body->insert(pair<string, long>("BarCodeEncode", *request->barCodeEncode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    body->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timezone)) {
    body->insert(pair<string, string>("Timezone", *request->timezone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userStoreCode)) {
    body->insert(pair<string, string>("UserStoreCode", *request->userStoreCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateStore"))},
    {"version", boost::any(string("2020-02-01"))},
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

UpdateStoreResponse Alibabacloud_Cloudesl20200201::Client::updateStore(shared_ptr<UpdateStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStoreWithOptions(request, runtime);
}

UpdateStoreConfigResponse Alibabacloud_Cloudesl20200201::Client::updateStoreConfigWithOptions(shared_ptr<UpdateStoreConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableNotification)) {
    body->insert(pair<string, bool>("EnableNotification", *request->enableNotification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraParams)) {
    body->insert(pair<string, string>("ExtraParams", *request->extraParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationSilentTimes)) {
    body->insert(pair<string, string>("NotificationSilentTimes", *request->notificationSilentTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationWebHook)) {
    body->insert(pair<string, string>("NotificationWebHook", *request->notificationWebHook));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeId)) {
    body->insert(pair<string, string>("StoreId", *request->storeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscribeContents)) {
    body->insert(pair<string, string>("SubscribeContents", *request->subscribeContents));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateStoreConfig"))},
    {"version", boost::any(string("2020-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateStoreConfigResponse(callApi(params, req, runtime));
}

UpdateStoreConfigResponse Alibabacloud_Cloudesl20200201::Client::updateStoreConfig(shared_ptr<UpdateStoreConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStoreConfigWithOptions(request, runtime);
}

