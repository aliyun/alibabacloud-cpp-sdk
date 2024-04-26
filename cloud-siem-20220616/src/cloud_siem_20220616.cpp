// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloud_siem_20220616.hpp>
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

using namespace Alibabacloud_Cloud-siem20220616;

Alibabacloud_Cloud-siem20220616::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cloud-siem"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cloud-siem20220616::Client::getEndpoint(shared_ptr<string> productId,
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

AddDataSourceResponse Alibabacloud_Cloud-siem20220616::Client::addDataSourceWithOptions(shared_ptr<AddDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceName)) {
    body->insert(pair<string, string>("DataSourceInstanceName", *request->dataSourceInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceParams)) {
    body->insert(pair<string, string>("DataSourceInstanceParams", *request->dataSourceInstanceParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceRemark)) {
    body->insert(pair<string, string>("DataSourceInstanceRemark", *request->dataSourceInstanceRemark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDataSource"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDataSourceResponse(callApi(params, req, runtime));
}

AddDataSourceResponse Alibabacloud_Cloud-siem20220616::Client::addDataSource(shared_ptr<AddDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDataSourceWithOptions(request, runtime);
}

AddDataSourceLogResponse Alibabacloud_Cloud-siem20220616::Client::addDataSourceLogWithOptions(shared_ptr<AddDataSourceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceId)) {
    body->insert(pair<string, string>("DataSourceInstanceId", *request->dataSourceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceLogs)) {
    body->insert(pair<string, string>("DataSourceInstanceLogs", *request->dataSourceInstanceLogs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logCode)) {
    body->insert(pair<string, string>("LogCode", *request->logCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDataSourceLog"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDataSourceLogResponse(callApi(params, req, runtime));
}

AddDataSourceLogResponse Alibabacloud_Cloud-siem20220616::Client::addDataSourceLog(shared_ptr<AddDataSourceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDataSourceLogWithOptions(request, runtime);
}

AddUserResponse Alibabacloud_Cloud-siem20220616::Client::addUserWithOptions(shared_ptr<AddUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->addedUserId)) {
    body->insert(pair<string, long>("AddedUserId", *request->addedUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUser"))},
    {"version", boost::any(string("2022-06-16"))},
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

AddUserResponse Alibabacloud_Cloud-siem20220616::Client::addUser(shared_ptr<AddUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserWithOptions(request, runtime);
}

AddUserSourceLogConfigResponse Alibabacloud_Cloud-siem20220616::Client::addUserSourceLogConfigWithOptions(shared_ptr<AddUserSourceLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->deleted)) {
    body->insert(pair<string, long>("Deleted", *request->deleted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disPlayLine)) {
    body->insert(pair<string, string>("DisPlayLine", *request->disPlayLine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLogCode)) {
    body->insert(pair<string, string>("SourceLogCode", *request->sourceLogCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLogInfo)) {
    body->insert(pair<string, string>("SourceLogInfo", *request->sourceLogInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceProdCode)) {
    body->insert(pair<string, string>("SourceProdCode", *request->sourceProdCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subUserId)) {
    body->insert(pair<string, long>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUserSourceLogConfig"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddUserSourceLogConfigResponse(callApi(params, req, runtime));
}

AddUserSourceLogConfigResponse Alibabacloud_Cloud-siem20220616::Client::addUserSourceLogConfig(shared_ptr<AddUserSourceLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserSourceLogConfigWithOptions(request, runtime);
}

BatchJobCheckResponse Alibabacloud_Cloud-siem20220616::Client::batchJobCheckWithOptions(shared_ptr<BatchJobCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->submitId)) {
    body->insert(pair<string, string>("SubmitId", *request->submitId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchJobCheck"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchJobCheckResponse(callApi(params, req, runtime));
}

BatchJobCheckResponse Alibabacloud_Cloud-siem20220616::Client::batchJobCheck(shared_ptr<BatchJobCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchJobCheckWithOptions(request, runtime);
}

BatchJobSubmitResponse Alibabacloud_Cloud-siem20220616::Client::batchJobSubmitWithOptions(shared_ptr<BatchJobSubmitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonConfig)) {
    body->insert(pair<string, string>("JsonConfig", *request->jsonConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchJobSubmit"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchJobSubmitResponse(callApi(params, req, runtime));
}

BatchJobSubmitResponse Alibabacloud_Cloud-siem20220616::Client::batchJobSubmit(shared_ptr<BatchJobSubmitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchJobSubmitWithOptions(request, runtime);
}

BindAccountResponse Alibabacloud_Cloud-siem20220616::Client::bindAccountWithOptions(shared_ptr<BindAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessId)) {
    body->insert(pair<string, string>("AccessId", *request->accessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindAccount"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindAccountResponse(callApi(params, req, runtime));
}

BindAccountResponse Alibabacloud_Cloud-siem20220616::Client::bindAccount(shared_ptr<BindAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAccountWithOptions(request, runtime);
}

CloseDeliveryResponse Alibabacloud_Cloud-siem20220616::Client::closeDeliveryWithOptions(shared_ptr<CloseDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logCode)) {
    body->insert(pair<string, string>("LogCode", *request->logCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseDelivery"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseDeliveryResponse(callApi(params, req, runtime));
}

CloseDeliveryResponse Alibabacloud_Cloud-siem20220616::Client::closeDelivery(shared_ptr<CloseDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeDeliveryWithOptions(request, runtime);
}

DeleteAutomateResponseConfigResponse Alibabacloud_Cloud-siem20220616::Client::deleteAutomateResponseConfigWithOptions(shared_ptr<DeleteAutomateResponseConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAutomateResponseConfig"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAutomateResponseConfigResponse(callApi(params, req, runtime));
}

DeleteAutomateResponseConfigResponse Alibabacloud_Cloud-siem20220616::Client::deleteAutomateResponseConfig(shared_ptr<DeleteAutomateResponseConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAutomateResponseConfigWithOptions(request, runtime);
}

DeleteBindAccountResponse Alibabacloud_Cloud-siem20220616::Client::deleteBindAccountWithOptions(shared_ptr<DeleteBindAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessId)) {
    body->insert(pair<string, string>("AccessId", *request->accessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bindId)) {
    body->insert(pair<string, long>("BindId", *request->bindId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBindAccount"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBindAccountResponse(callApi(params, req, runtime));
}

DeleteBindAccountResponse Alibabacloud_Cloud-siem20220616::Client::deleteBindAccount(shared_ptr<DeleteBindAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBindAccountWithOptions(request, runtime);
}

DeleteCustomizeRuleResponse Alibabacloud_Cloud-siem20220616::Client::deleteCustomizeRuleWithOptions(shared_ptr<DeleteCustomizeRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomizeRule"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomizeRuleResponse(callApi(params, req, runtime));
}

DeleteCustomizeRuleResponse Alibabacloud_Cloud-siem20220616::Client::deleteCustomizeRule(shared_ptr<DeleteCustomizeRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomizeRuleWithOptions(request, runtime);
}

DeleteDataSourceResponse Alibabacloud_Cloud-siem20220616::Client::deleteDataSourceWithOptions(shared_ptr<DeleteDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceId)) {
    body->insert(pair<string, string>("DataSourceInstanceId", *request->dataSourceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataSource"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataSourceResponse(callApi(params, req, runtime));
}

DeleteDataSourceResponse Alibabacloud_Cloud-siem20220616::Client::deleteDataSource(shared_ptr<DeleteDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSourceWithOptions(request, runtime);
}

DeleteDataSourceLogResponse Alibabacloud_Cloud-siem20220616::Client::deleteDataSourceLogWithOptions(shared_ptr<DeleteDataSourceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceId)) {
    body->insert(pair<string, string>("DataSourceInstanceId", *request->dataSourceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logInstanceId)) {
    body->insert(pair<string, string>("LogInstanceId", *request->logInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataSourceLog"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataSourceLogResponse(callApi(params, req, runtime));
}

DeleteDataSourceLogResponse Alibabacloud_Cloud-siem20220616::Client::deleteDataSourceLog(shared_ptr<DeleteDataSourceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSourceLogWithOptions(request, runtime);
}

DeleteQuickQueryResponse Alibabacloud_Cloud-siem20220616::Client::deleteQuickQueryWithOptions(shared_ptr<DeleteQuickQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    body->insert(pair<string, string>("SearchName", *request->searchName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQuickQuery"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteQuickQueryResponse(callApi(params, req, runtime));
}

DeleteQuickQueryResponse Alibabacloud_Cloud-siem20220616::Client::deleteQuickQuery(shared_ptr<DeleteQuickQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQuickQueryWithOptions(request, runtime);
}

DeleteUserResponse Alibabacloud_Cloud-siem20220616::Client::deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->addedUserId)) {
    body->insert(pair<string, long>("AddedUserId", *request->addedUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUser"))},
    {"version", boost::any(string("2022-06-16"))},
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

DeleteUserResponse Alibabacloud_Cloud-siem20220616::Client::deleteUser(shared_ptr<DeleteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserWithOptions(request, runtime);
}

DeleteWhiteRuleListResponse Alibabacloud_Cloud-siem20220616::Client::deleteWhiteRuleListWithOptions(shared_ptr<DeleteWhiteRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWhiteRuleList"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWhiteRuleListResponse(callApi(params, req, runtime));
}

DeleteWhiteRuleListResponse Alibabacloud_Cloud-siem20220616::Client::deleteWhiteRuleList(shared_ptr<DeleteWhiteRuleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWhiteRuleListWithOptions(request, runtime);
}

DescribeAggregateFunctionResponse Alibabacloud_Cloud-siem20220616::Client::describeAggregateFunctionWithOptions(shared_ptr<DescribeAggregateFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAggregateFunction"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAggregateFunctionResponse(callApi(params, req, runtime));
}

DescribeAggregateFunctionResponse Alibabacloud_Cloud-siem20220616::Client::describeAggregateFunction(shared_ptr<DescribeAggregateFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAggregateFunctionWithOptions(request, runtime);
}

DescribeAlertSceneResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertSceneWithOptions(shared_ptr<DescribeAlertSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertScene"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertSceneResponse(callApi(params, req, runtime));
}

DescribeAlertSceneResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertScene(shared_ptr<DescribeAlertSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertSceneWithOptions(request, runtime);
}

DescribeAlertSceneByEventResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertSceneByEventWithOptions(shared_ptr<DescribeAlertSceneByEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertSceneByEvent"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertSceneByEventResponse(callApi(params, req, runtime));
}

DescribeAlertSceneByEventResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertSceneByEvent(shared_ptr<DescribeAlertSceneByEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertSceneByEventWithOptions(request, runtime);
}

DescribeAlertSourceResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertSourceWithOptions(shared_ptr<DescribeAlertSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->level)) {
    body->insert(pair<string, vector<string>>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertSource"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertSourceResponse(callApi(params, req, runtime));
}

DescribeAlertSourceResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertSource(shared_ptr<DescribeAlertSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertSourceWithOptions(request, runtime);
}

DescribeAlertSourceWithEventResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertSourceWithEventWithOptions(shared_ptr<DescribeAlertSourceWithEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertSourceWithEvent"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertSourceWithEventResponse(callApi(params, req, runtime));
}

DescribeAlertSourceWithEventResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertSourceWithEvent(shared_ptr<DescribeAlertSourceWithEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertSourceWithEventWithOptions(request, runtime);
}

DescribeAlertTypeResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertTypeWithOptions(shared_ptr<DescribeAlertTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    body->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertType"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertTypeResponse(callApi(params, req, runtime));
}

DescribeAlertTypeResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertType(shared_ptr<DescribeAlertTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertTypeWithOptions(request, runtime);
}

DescribeAlertsResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertsWithOptions(shared_ptr<DescribeAlertsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertTitle)) {
    body->insert(pair<string, string>("AlertTitle", *request->alertTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertUuid)) {
    body->insert(pair<string, string>("AlertUuid", *request->alertUuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isDefend)) {
    body->insert(pair<string, string>("IsDefend", *request->isDefend));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->level)) {
    body->insert(pair<string, vector<string>>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    body->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlerts"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertsResponse(callApi(params, req, runtime));
}

DescribeAlertsResponse Alibabacloud_Cloud-siem20220616::Client::describeAlerts(shared_ptr<DescribeAlertsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertsWithOptions(request, runtime);
}

DescribeAlertsCountResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertsCountWithOptions(shared_ptr<DescribeAlertsCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertsCount"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertsCountResponse(callApi(params, req, runtime));
}

DescribeAlertsCountResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertsCount(shared_ptr<DescribeAlertsCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertsCountWithOptions(request, runtime);
}

DescribeAlertsWithEntityResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertsWithEntityWithOptions(shared_ptr<DescribeAlertsWithEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    body->insert(pair<string, long>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sophonTaskId)) {
    body->insert(pair<string, string>("SophonTaskId", *request->sophonTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertsWithEntity"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertsWithEntityResponse(callApi(params, req, runtime));
}

DescribeAlertsWithEntityResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertsWithEntity(shared_ptr<DescribeAlertsWithEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertsWithEntityWithOptions(request, runtime);
}

DescribeAlertsWithEventResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertsWithEventWithOptions(shared_ptr<DescribeAlertsWithEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertTitle)) {
    body->insert(pair<string, string>("AlertTitle", *request->alertTitle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isDefend)) {
    body->insert(pair<string, string>("IsDefend", *request->isDefend));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->level)) {
    body->insert(pair<string, vector<string>>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subUserId)) {
    body->insert(pair<string, long>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertsWithEvent"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertsWithEventResponse(callApi(params, req, runtime));
}

DescribeAlertsWithEventResponse Alibabacloud_Cloud-siem20220616::Client::describeAlertsWithEvent(shared_ptr<DescribeAlertsWithEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertsWithEventWithOptions(request, runtime);
}

DescribeAttackTimeLineResponse Alibabacloud_Cloud-siem20220616::Client::describeAttackTimeLineWithOptions(shared_ptr<DescribeAttackTimeLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assetName)) {
    body->insert(pair<string, string>("AssetName", *request->assetName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAttackTimeLine"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAttackTimeLineResponse(callApi(params, req, runtime));
}

DescribeAttackTimeLineResponse Alibabacloud_Cloud-siem20220616::Client::describeAttackTimeLine(shared_ptr<DescribeAttackTimeLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAttackTimeLineWithOptions(request, runtime);
}

DescribeAuthResponse Alibabacloud_Cloud-siem20220616::Client::describeAuthWithOptions(shared_ptr<DescribeAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAuth"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAuthResponse(callApi(params, req, runtime));
}

DescribeAuthResponse Alibabacloud_Cloud-siem20220616::Client::describeAuth(shared_ptr<DescribeAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuthWithOptions(request, runtime);
}

DescribeAutomateResponseConfigCounterResponse Alibabacloud_Cloud-siem20220616::Client::describeAutomateResponseConfigCounterWithOptions(shared_ptr<DescribeAutomateResponseConfigCounterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAutomateResponseConfigCounter"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAutomateResponseConfigCounterResponse(callApi(params, req, runtime));
}

DescribeAutomateResponseConfigCounterResponse Alibabacloud_Cloud-siem20220616::Client::describeAutomateResponseConfigCounter(shared_ptr<DescribeAutomateResponseConfigCounterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutomateResponseConfigCounterWithOptions(request, runtime);
}

DescribeAutomateResponseConfigFeatureResponse Alibabacloud_Cloud-siem20220616::Client::describeAutomateResponseConfigFeatureWithOptions(shared_ptr<DescribeAutomateResponseConfigFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->autoResponseType)) {
    body->insert(pair<string, string>("AutoResponseType", *request->autoResponseType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAutomateResponseConfigFeature"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAutomateResponseConfigFeatureResponse(callApi(params, req, runtime));
}

DescribeAutomateResponseConfigFeatureResponse Alibabacloud_Cloud-siem20220616::Client::describeAutomateResponseConfigFeature(shared_ptr<DescribeAutomateResponseConfigFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutomateResponseConfigFeatureWithOptions(request, runtime);
}

DescribeAutomateResponseConfigPlayBooksResponse Alibabacloud_Cloud-siem20220616::Client::describeAutomateResponseConfigPlayBooksWithOptions(shared_ptr<DescribeAutomateResponseConfigPlayBooksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->autoResponseType)) {
    body->insert(pair<string, string>("AutoResponseType", *request->autoResponseType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    body->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAutomateResponseConfigPlayBooks"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAutomateResponseConfigPlayBooksResponse(callApi(params, req, runtime));
}

DescribeAutomateResponseConfigPlayBooksResponse Alibabacloud_Cloud-siem20220616::Client::describeAutomateResponseConfigPlayBooks(shared_ptr<DescribeAutomateResponseConfigPlayBooksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutomateResponseConfigPlayBooksWithOptions(request, runtime);
}

DescribeCloudSiemAssetsResponse Alibabacloud_Cloud-siem20220616::Client::describeCloudSiemAssetsWithOptions(shared_ptr<DescribeCloudSiemAssetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assetType)) {
    body->insert(pair<string, string>("AssetType", *request->assetType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudSiemAssets"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCloudSiemAssetsResponse(callApi(params, req, runtime));
}

DescribeCloudSiemAssetsResponse Alibabacloud_Cloud-siem20220616::Client::describeCloudSiemAssets(shared_ptr<DescribeCloudSiemAssetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudSiemAssetsWithOptions(request, runtime);
}

DescribeCloudSiemAssetsCounterResponse Alibabacloud_Cloud-siem20220616::Client::describeCloudSiemAssetsCounterWithOptions(shared_ptr<DescribeCloudSiemAssetsCounterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudSiemAssetsCounter"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCloudSiemAssetsCounterResponse(callApi(params, req, runtime));
}

DescribeCloudSiemAssetsCounterResponse Alibabacloud_Cloud-siem20220616::Client::describeCloudSiemAssetsCounter(shared_ptr<DescribeCloudSiemAssetsCounterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudSiemAssetsCounterWithOptions(request, runtime);
}

DescribeCloudSiemEventDetailResponse Alibabacloud_Cloud-siem20220616::Client::describeCloudSiemEventDetailWithOptions(shared_ptr<DescribeCloudSiemEventDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudSiemEventDetail"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCloudSiemEventDetailResponse(callApi(params, req, runtime));
}

DescribeCloudSiemEventDetailResponse Alibabacloud_Cloud-siem20220616::Client::describeCloudSiemEventDetail(shared_ptr<DescribeCloudSiemEventDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudSiemEventDetailWithOptions(request, runtime);
}

DescribeCloudSiemEventsResponse Alibabacloud_Cloud-siem20220616::Client::describeCloudSiemEventsWithOptions(shared_ptr<DescribeCloudSiemEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assetId)) {
    body->insert(pair<string, string>("AssetId", *request->assetId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    body->insert(pair<string, string>("EventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    body->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderField)) {
    body->insert(pair<string, string>("OrderField", *request->orderField));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->threadLevel)) {
    body->insert(pair<string, vector<string>>("ThreadLevel", *request->threadLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudSiemEvents"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCloudSiemEventsResponse(callApi(params, req, runtime));
}

DescribeCloudSiemEventsResponse Alibabacloud_Cloud-siem20220616::Client::describeCloudSiemEvents(shared_ptr<DescribeCloudSiemEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudSiemEventsWithOptions(request, runtime);
}

DescribeCsImportedProdStatusByUserResponse Alibabacloud_Cloud-siem20220616::Client::describeCsImportedProdStatusByUserWithOptions(shared_ptr<DescribeCsImportedProdStatusByUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLogProd)) {
    body->insert(pair<string, string>("SourceLogProd", *request->sourceLogProd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCsImportedProdStatusByUser"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCsImportedProdStatusByUserResponse(callApi(params, req, runtime));
}

DescribeCsImportedProdStatusByUserResponse Alibabacloud_Cloud-siem20220616::Client::describeCsImportedProdStatusByUser(shared_ptr<DescribeCsImportedProdStatusByUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCsImportedProdStatusByUserWithOptions(request, runtime);
}

DescribeCustomizeRuleResponse Alibabacloud_Cloud-siem20220616::Client::describeCustomizeRuleWithOptions(shared_ptr<DescribeCustomizeRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCustomizeRule"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCustomizeRuleResponse(callApi(params, req, runtime));
}

DescribeCustomizeRuleResponse Alibabacloud_Cloud-siem20220616::Client::describeCustomizeRule(shared_ptr<DescribeCustomizeRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustomizeRuleWithOptions(request, runtime);
}

DescribeCustomizeRuleCountResponse Alibabacloud_Cloud-siem20220616::Client::describeCustomizeRuleCountWithOptions(shared_ptr<DescribeCustomizeRuleCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCustomizeRuleCount"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCustomizeRuleCountResponse(callApi(params, req, runtime));
}

DescribeCustomizeRuleCountResponse Alibabacloud_Cloud-siem20220616::Client::describeCustomizeRuleCount(shared_ptr<DescribeCustomizeRuleCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustomizeRuleCountWithOptions(request, runtime);
}

DescribeCustomizeRuleTestResponse Alibabacloud_Cloud-siem20220616::Client::describeCustomizeRuleTestWithOptions(shared_ptr<DescribeCustomizeRuleTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCustomizeRuleTest"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCustomizeRuleTestResponse(callApi(params, req, runtime));
}

DescribeCustomizeRuleTestResponse Alibabacloud_Cloud-siem20220616::Client::describeCustomizeRuleTest(shared_ptr<DescribeCustomizeRuleTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustomizeRuleTestWithOptions(request, runtime);
}

DescribeCustomizeRuleTestHistogramResponse Alibabacloud_Cloud-siem20220616::Client::describeCustomizeRuleTestHistogramWithOptions(shared_ptr<DescribeCustomizeRuleTestHistogramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCustomizeRuleTestHistogram"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCustomizeRuleTestHistogramResponse(callApi(params, req, runtime));
}

DescribeCustomizeRuleTestHistogramResponse Alibabacloud_Cloud-siem20220616::Client::describeCustomizeRuleTestHistogram(shared_ptr<DescribeCustomizeRuleTestHistogramRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustomizeRuleTestHistogramWithOptions(request, runtime);
}

DescribeDataSourceInstanceResponse Alibabacloud_Cloud-siem20220616::Client::describeDataSourceInstanceWithOptions(shared_ptr<DescribeDataSourceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceId)) {
    body->insert(pair<string, string>("DataSourceInstanceId", *request->dataSourceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataSourceInstance"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataSourceInstanceResponse(callApi(params, req, runtime));
}

DescribeDataSourceInstanceResponse Alibabacloud_Cloud-siem20220616::Client::describeDataSourceInstance(shared_ptr<DescribeDataSourceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataSourceInstanceWithOptions(request, runtime);
}

DescribeDataSourceParametersResponse Alibabacloud_Cloud-siem20220616::Client::describeDataSourceParametersWithOptions(shared_ptr<DescribeDataSourceParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataSourceParameters"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataSourceParametersResponse(callApi(params, req, runtime));
}

DescribeDataSourceParametersResponse Alibabacloud_Cloud-siem20220616::Client::describeDataSourceParameters(shared_ptr<DescribeDataSourceParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataSourceParametersWithOptions(request, runtime);
}

DescribeDisposeAndPlaybookResponse Alibabacloud_Cloud-siem20220616::Client::describeDisposeAndPlaybookWithOptions(shared_ptr<DescribeDisposeAndPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    body->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDisposeAndPlaybook"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDisposeAndPlaybookResponse(callApi(params, req, runtime));
}

DescribeDisposeAndPlaybookResponse Alibabacloud_Cloud-siem20220616::Client::describeDisposeAndPlaybook(shared_ptr<DescribeDisposeAndPlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDisposeAndPlaybookWithOptions(request, runtime);
}

DescribeDisposeStrategyPlaybookResponse Alibabacloud_Cloud-siem20220616::Client::describeDisposeStrategyPlaybookWithOptions(shared_ptr<DescribeDisposeStrategyPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDisposeStrategyPlaybook"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDisposeStrategyPlaybookResponse(callApi(params, req, runtime));
}

DescribeDisposeStrategyPlaybookResponse Alibabacloud_Cloud-siem20220616::Client::describeDisposeStrategyPlaybook(shared_ptr<DescribeDisposeStrategyPlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDisposeStrategyPlaybookWithOptions(request, runtime);
}

DescribeEntityInfoResponse Alibabacloud_Cloud-siem20220616::Client::describeEntityInfoWithOptions(shared_ptr<DescribeEntityInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    body->insert(pair<string, long>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityIdentity)) {
    body->insert(pair<string, string>("EntityIdentity", *request->entityIdentity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sophonTaskId)) {
    body->insert(pair<string, string>("SophonTaskId", *request->sophonTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEntityInfo"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEntityInfoResponse(callApi(params, req, runtime));
}

DescribeEntityInfoResponse Alibabacloud_Cloud-siem20220616::Client::describeEntityInfo(shared_ptr<DescribeEntityInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEntityInfoWithOptions(request, runtime);
}

DescribeEventCountByThreatLevelResponse Alibabacloud_Cloud-siem20220616::Client::describeEventCountByThreatLevelWithOptions(shared_ptr<DescribeEventCountByThreatLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventCountByThreatLevel"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventCountByThreatLevelResponse(callApi(params, req, runtime));
}

DescribeEventCountByThreatLevelResponse Alibabacloud_Cloud-siem20220616::Client::describeEventCountByThreatLevel(shared_ptr<DescribeEventCountByThreatLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventCountByThreatLevelWithOptions(request, runtime);
}

DescribeEventDisposeResponse Alibabacloud_Cloud-siem20220616::Client::describeEventDisposeWithOptions(shared_ptr<DescribeEventDisposeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventDispose"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventDisposeResponse(callApi(params, req, runtime));
}

DescribeEventDisposeResponse Alibabacloud_Cloud-siem20220616::Client::describeEventDispose(shared_ptr<DescribeEventDisposeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventDisposeWithOptions(request, runtime);
}

DescribeImportedLogCountResponse Alibabacloud_Cloud-siem20220616::Client::describeImportedLogCountWithOptions(shared_ptr<DescribeImportedLogCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeImportedLogCount"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeImportedLogCountResponse(callApi(params, req, runtime));
}

DescribeImportedLogCountResponse Alibabacloud_Cloud-siem20220616::Client::describeImportedLogCount(shared_ptr<DescribeImportedLogCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImportedLogCountWithOptions(request, runtime);
}

DescribeJobStatusResponse Alibabacloud_Cloud-siem20220616::Client::describeJobStatusWithOptions(shared_ptr<DescribeJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->submitId)) {
    body->insert(pair<string, string>("SubmitId", *request->submitId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeJobStatus"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeJobStatusResponse(callApi(params, req, runtime));
}

DescribeJobStatusResponse Alibabacloud_Cloud-siem20220616::Client::describeJobStatus(shared_ptr<DescribeJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeJobStatusWithOptions(request, runtime);
}

DescribeLogFieldsResponse Alibabacloud_Cloud-siem20220616::Client::describeLogFieldsWithOptions(shared_ptr<DescribeLogFieldsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logSource)) {
    body->insert(pair<string, string>("LogSource", *request->logSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logType)) {
    body->insert(pair<string, string>("LogType", *request->logType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLogFields"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLogFieldsResponse(callApi(params, req, runtime));
}

DescribeLogFieldsResponse Alibabacloud_Cloud-siem20220616::Client::describeLogFields(shared_ptr<DescribeLogFieldsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogFieldsWithOptions(request, runtime);
}

DescribeLogSourceResponse Alibabacloud_Cloud-siem20220616::Client::describeLogSourceWithOptions(shared_ptr<DescribeLogSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logType)) {
    body->insert(pair<string, string>("LogType", *request->logType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLogSource"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLogSourceResponse(callApi(params, req, runtime));
}

DescribeLogSourceResponse Alibabacloud_Cloud-siem20220616::Client::describeLogSource(shared_ptr<DescribeLogSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogSourceWithOptions(request, runtime);
}

DescribeLogStoreResponse Alibabacloud_Cloud-siem20220616::Client::describeLogStoreWithOptions(shared_ptr<DescribeLogStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLogStore"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLogStoreResponse(callApi(params, req, runtime));
}

DescribeLogStoreResponse Alibabacloud_Cloud-siem20220616::Client::describeLogStore(shared_ptr<DescribeLogStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogStoreWithOptions(request, runtime);
}

DescribeLogTypeResponse Alibabacloud_Cloud-siem20220616::Client::describeLogTypeWithOptions(shared_ptr<DescribeLogTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLogType"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLogTypeResponse(callApi(params, req, runtime));
}

DescribeLogTypeResponse Alibabacloud_Cloud-siem20220616::Client::describeLogType(shared_ptr<DescribeLogTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogTypeWithOptions(request, runtime);
}

DescribeOperatorsResponse Alibabacloud_Cloud-siem20220616::Client::describeOperatorsWithOptions(shared_ptr<DescribeOperatorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneType)) {
    body->insert(pair<string, string>("SceneType", *request->sceneType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOperators"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOperatorsResponse(callApi(params, req, runtime));
}

DescribeOperatorsResponse Alibabacloud_Cloud-siem20220616::Client::describeOperators(shared_ptr<DescribeOperatorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOperatorsWithOptions(request, runtime);
}

DescribeProdCountResponse Alibabacloud_Cloud-siem20220616::Client::describeProdCountWithOptions(shared_ptr<DescribeProdCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProdCount"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProdCountResponse(callApi(params, req, runtime));
}

DescribeProdCountResponse Alibabacloud_Cloud-siem20220616::Client::describeProdCount(shared_ptr<DescribeProdCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProdCountWithOptions(request, runtime);
}

DescribeScopeUsersResponse Alibabacloud_Cloud-siem20220616::Client::describeScopeUsersWithOptions(shared_ptr<DescribeScopeUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScopeUsers"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScopeUsersResponse(callApi(params, req, runtime));
}

DescribeScopeUsersResponse Alibabacloud_Cloud-siem20220616::Client::describeScopeUsers(shared_ptr<DescribeScopeUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScopeUsersWithOptions(request, runtime);
}

DescribeServiceStatusResponse Alibabacloud_Cloud-siem20220616::Client::describeServiceStatusWithOptions(shared_ptr<DescribeServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceStatus"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceStatusResponse(callApi(params, req, runtime));
}

DescribeServiceStatusResponse Alibabacloud_Cloud-siem20220616::Client::describeServiceStatus(shared_ptr<DescribeServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceStatusWithOptions(request, runtime);
}

DescribeStorageResponse Alibabacloud_Cloud-siem20220616::Client::describeStorageWithOptions(shared_ptr<DescribeStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStorage"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeStorageResponse(callApi(params, req, runtime));
}

DescribeStorageResponse Alibabacloud_Cloud-siem20220616::Client::describeStorage(shared_ptr<DescribeStorageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStorageWithOptions(request, runtime);
}

DescribeUserBuyStatusResponse Alibabacloud_Cloud-siem20220616::Client::describeUserBuyStatusWithOptions(shared_ptr<DescribeUserBuyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subUserId)) {
    body->insert(pair<string, long>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserBuyStatus"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserBuyStatusResponse(callApi(params, req, runtime));
}

DescribeUserBuyStatusResponse Alibabacloud_Cloud-siem20220616::Client::describeUserBuyStatus(shared_ptr<DescribeUserBuyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserBuyStatusWithOptions(request, runtime);
}

DescribeWafScopeResponse Alibabacloud_Cloud-siem20220616::Client::describeWafScopeWithOptions(shared_ptr<DescribeWafScopeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    body->insert(pair<string, long>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWafScope"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWafScopeResponse(callApi(params, req, runtime));
}

DescribeWafScopeResponse Alibabacloud_Cloud-siem20220616::Client::describeWafScope(shared_ptr<DescribeWafScopeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWafScopeWithOptions(request, runtime);
}

DescribeWhiteRuleListResponse Alibabacloud_Cloud-siem20220616::Client::describeWhiteRuleListWithOptions(shared_ptr<DescribeWhiteRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertName)) {
    body->insert(pair<string, string>("AlertName", *request->alertName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertType)) {
    body->insert(pair<string, string>("AlertType", *request->alertType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWhiteRuleList"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWhiteRuleListResponse(callApi(params, req, runtime));
}

DescribeWhiteRuleListResponse Alibabacloud_Cloud-siem20220616::Client::describeWhiteRuleList(shared_ptr<DescribeWhiteRuleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWhiteRuleListWithOptions(request, runtime);
}

DoQuickFieldResponse Alibabacloud_Cloud-siem20220616::Client::doQuickFieldWithOptions(shared_ptr<DoQuickFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    body->insert(pair<string, long>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->index)) {
    body->insert(pair<string, string>("Index", *request->index));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    body->insert(pair<string, bool>("Reverse", *request->reverse));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    body->insert(pair<string, long>("To", *request->to));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DoQuickField"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DoQuickFieldResponse(callApi(params, req, runtime));
}

DoQuickFieldResponse Alibabacloud_Cloud-siem20220616::Client::doQuickField(shared_ptr<DoQuickFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return doQuickFieldWithOptions(request, runtime);
}

DoSelfDelegateResponse Alibabacloud_Cloud-siem20220616::Client::doSelfDelegateWithOptions(shared_ptr<DoSelfDelegateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    body->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->delegateOrNot)) {
    body->insert(pair<string, long>("DelegateOrNot", *request->delegateOrNot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DoSelfDelegate"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DoSelfDelegateResponse(callApi(params, req, runtime));
}

DoSelfDelegateResponse Alibabacloud_Cloud-siem20220616::Client::doSelfDelegate(shared_ptr<DoSelfDelegateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return doSelfDelegateWithOptions(request, runtime);
}

EnableAccessForCloudSiemResponse Alibabacloud_Cloud-siem20220616::Client::enableAccessForCloudSiemWithOptions(shared_ptr<EnableAccessForCloudSiemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->autoSubmit)) {
    body->insert(pair<string, long>("AutoSubmit", *request->autoSubmit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableAccessForCloudSiem"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableAccessForCloudSiemResponse(callApi(params, req, runtime));
}

EnableAccessForCloudSiemResponse Alibabacloud_Cloud-siem20220616::Client::enableAccessForCloudSiem(shared_ptr<EnableAccessForCloudSiemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableAccessForCloudSiemWithOptions(request, runtime);
}

EnableServiceForCloudSiemResponse Alibabacloud_Cloud-siem20220616::Client::enableServiceForCloudSiemWithOptions(shared_ptr<EnableServiceForCloudSiemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableServiceForCloudSiem"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableServiceForCloudSiemResponse(callApi(params, req, runtime));
}

EnableServiceForCloudSiemResponse Alibabacloud_Cloud-siem20220616::Client::enableServiceForCloudSiem(shared_ptr<EnableServiceForCloudSiemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableServiceForCloudSiemWithOptions(request, runtime);
}

GetCapacityResponse Alibabacloud_Cloud-siem20220616::Client::getCapacityWithOptions(shared_ptr<GetCapacityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCapacity"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCapacityResponse(callApi(params, req, runtime));
}

GetCapacityResponse Alibabacloud_Cloud-siem20220616::Client::getCapacity(shared_ptr<GetCapacityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCapacityWithOptions(request, runtime);
}

GetHistogramsResponse Alibabacloud_Cloud-siem20220616::Client::getHistogramsWithOptions(shared_ptr<GetHistogramsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    body->insert(pair<string, long>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    body->insert(pair<string, long>("To", *request->to));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHistograms"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHistogramsResponse(callApi(params, req, runtime));
}

GetHistogramsResponse Alibabacloud_Cloud-siem20220616::Client::getHistograms(shared_ptr<GetHistogramsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHistogramsWithOptions(request, runtime);
}

GetLogsResponse Alibabacloud_Cloud-siem20220616::Client::getLogsWithOptions(shared_ptr<GetLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    body->insert(pair<string, long>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    body->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverseOrNot)) {
    body->insert(pair<string, bool>("ReverseOrNot", *request->reverseOrNot));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    body->insert(pair<string, long>("To", *request->to));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->total)) {
    body->insert(pair<string, long>("Total", *request->total));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLogs"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLogsResponse(callApi(params, req, runtime));
}

GetLogsResponse Alibabacloud_Cloud-siem20220616::Client::getLogs(shared_ptr<GetLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogsWithOptions(request, runtime);
}

GetQuickQueryResponse Alibabacloud_Cloud-siem20220616::Client::getQuickQueryWithOptions(shared_ptr<GetQuickQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    body->insert(pair<string, string>("SearchName", *request->searchName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQuickQuery"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQuickQueryResponse(callApi(params, req, runtime));
}

GetQuickQueryResponse Alibabacloud_Cloud-siem20220616::Client::getQuickQuery(shared_ptr<GetQuickQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQuickQueryWithOptions(request, runtime);
}

GetStorageResponse Alibabacloud_Cloud-siem20220616::Client::getStorageWithOptions(shared_ptr<GetStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStorage"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStorageResponse(callApi(params, req, runtime));
}

GetStorageResponse Alibabacloud_Cloud-siem20220616::Client::getStorage(shared_ptr<GetStorageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStorageWithOptions(request, runtime);
}

ListAccountAccessIdResponse Alibabacloud_Cloud-siem20220616::Client::listAccountAccessIdWithOptions(shared_ptr<ListAccountAccessIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAccountAccessId"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAccountAccessIdResponse(callApi(params, req, runtime));
}

ListAccountAccessIdResponse Alibabacloud_Cloud-siem20220616::Client::listAccountAccessId(shared_ptr<ListAccountAccessIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccountAccessIdWithOptions(request, runtime);
}

ListAccountsByLogResponse Alibabacloud_Cloud-siem20220616::Client::listAccountsByLogWithOptions(shared_ptr<ListAccountsByLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->logCodes)) {
    body->insert(pair<string, vector<string>>("LogCodes", *request->logCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    body->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAccountsByLog"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAccountsByLogResponse(callApi(params, req, runtime));
}

ListAccountsByLogResponse Alibabacloud_Cloud-siem20220616::Client::listAccountsByLog(shared_ptr<ListAccountsByLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccountsByLogWithOptions(request, runtime);
}

ListAllProdsResponse Alibabacloud_Cloud-siem20220616::Client::listAllProdsWithOptions(shared_ptr<ListAllProdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAllProds"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAllProdsResponse(callApi(params, req, runtime));
}

ListAllProdsResponse Alibabacloud_Cloud-siem20220616::Client::listAllProds(shared_ptr<ListAllProdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAllProdsWithOptions(request, runtime);
}

ListAutomateResponseConfigsResponse Alibabacloud_Cloud-siem20220616::Client::listAutomateResponseConfigsWithOptions(shared_ptr<ListAutomateResponseConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionType)) {
    body->insert(pair<string, string>("ActionType", *request->actionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoResponseType)) {
    body->insert(pair<string, string>("AutoResponseType", *request->autoResponseType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    body->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    body->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subUserId)) {
    body->insert(pair<string, long>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAutomateResponseConfigs"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAutomateResponseConfigsResponse(callApi(params, req, runtime));
}

ListAutomateResponseConfigsResponse Alibabacloud_Cloud-siem20220616::Client::listAutomateResponseConfigs(shared_ptr<ListAutomateResponseConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAutomateResponseConfigsWithOptions(request, runtime);
}

ListBindAccountResponse Alibabacloud_Cloud-siem20220616::Client::listBindAccountWithOptions(shared_ptr<ListBindAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBindAccount"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBindAccountResponse(callApi(params, req, runtime));
}

ListBindAccountResponse Alibabacloud_Cloud-siem20220616::Client::listBindAccount(shared_ptr<ListBindAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBindAccountWithOptions(request, runtime);
}

ListBindDataSourcesResponse Alibabacloud_Cloud-siem20220616::Client::listBindDataSourcesWithOptions(shared_ptr<ListBindDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBindDataSources"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBindDataSourcesResponse(callApi(params, req, runtime));
}

ListBindDataSourcesResponse Alibabacloud_Cloud-siem20220616::Client::listBindDataSources(shared_ptr<ListBindDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBindDataSourcesWithOptions(request, runtime);
}

ListCloudSiemCustomizeRulesResponse Alibabacloud_Cloud-siem20220616::Client::listCloudSiemCustomizeRulesWithOptions(shared_ptr<ListCloudSiemCustomizeRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertType)) {
    body->insert(pair<string, string>("AlertType", *request->alertType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    body->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderField)) {
    body->insert(pair<string, string>("OrderField", *request->orderField));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    body->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    body->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->threatLevel)) {
    body->insert(pair<string, vector<string>>("ThreatLevel", *request->threatLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCloudSiemCustomizeRules"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCloudSiemCustomizeRulesResponse(callApi(params, req, runtime));
}

ListCloudSiemCustomizeRulesResponse Alibabacloud_Cloud-siem20220616::Client::listCloudSiemCustomizeRules(shared_ptr<ListCloudSiemCustomizeRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCloudSiemCustomizeRulesWithOptions(request, runtime);
}

ListCloudSiemPredefinedRulesResponse Alibabacloud_Cloud-siem20220616::Client::listCloudSiemPredefinedRulesWithOptions(shared_ptr<ListCloudSiemPredefinedRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertType)) {
    body->insert(pair<string, string>("AlertType", *request->alertType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attCk)) {
    body->insert(pair<string, string>("AttCk", *request->attCk));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTransferType)) {
    body->insert(pair<string, string>("EventTransferType", *request->eventTransferType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logSource)) {
    body->insert(pair<string, string>("LogSource", *request->logSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    body->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderField)) {
    body->insert(pair<string, string>("OrderField", *request->orderField));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    body->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    body->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->threatLevel)) {
    body->insert(pair<string, vector<string>>("ThreatLevel", *request->threatLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCloudSiemPredefinedRules"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCloudSiemPredefinedRulesResponse(callApi(params, req, runtime));
}

ListCloudSiemPredefinedRulesResponse Alibabacloud_Cloud-siem20220616::Client::listCloudSiemPredefinedRules(shared_ptr<ListCloudSiemPredefinedRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCloudSiemPredefinedRulesWithOptions(request, runtime);
}

ListCustomizeRuleTestResultResponse Alibabacloud_Cloud-siem20220616::Client::listCustomizeRuleTestResultWithOptions(shared_ptr<ListCustomizeRuleTestResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomizeRuleTestResult"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomizeRuleTestResultResponse(callApi(params, req, runtime));
}

ListCustomizeRuleTestResultResponse Alibabacloud_Cloud-siem20220616::Client::listCustomizeRuleTestResult(shared_ptr<ListCustomizeRuleTestResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomizeRuleTestResultWithOptions(request, runtime);
}

ListDataSourceLogsResponse Alibabacloud_Cloud-siem20220616::Client::listDataSourceLogsWithOptions(shared_ptr<ListDataSourceLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceId)) {
    body->insert(pair<string, string>("DataSourceInstanceId", *request->dataSourceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSourceLogs"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourceLogsResponse(callApi(params, req, runtime));
}

ListDataSourceLogsResponse Alibabacloud_Cloud-siem20220616::Client::listDataSourceLogs(shared_ptr<ListDataSourceLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSourceLogsWithOptions(request, runtime);
}

ListDataSourceTypesResponse Alibabacloud_Cloud-siem20220616::Client::listDataSourceTypesWithOptions(shared_ptr<ListDataSourceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSourceTypes"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourceTypesResponse(callApi(params, req, runtime));
}

ListDataSourceTypesResponse Alibabacloud_Cloud-siem20220616::Client::listDataSourceTypes(shared_ptr<ListDataSourceTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSourceTypesWithOptions(request, runtime);
}

ListDeliveryResponse Alibabacloud_Cloud-siem20220616::Client::listDeliveryWithOptions(shared_ptr<ListDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDelivery"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeliveryResponse(callApi(params, req, runtime));
}

ListDeliveryResponse Alibabacloud_Cloud-siem20220616::Client::listDelivery(shared_ptr<ListDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeliveryWithOptions(request, runtime);
}

ListDisposeStrategyResponse Alibabacloud_Cloud-siem20220616::Client::listDisposeStrategyWithOptions(shared_ptr<ListDisposeStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->effectiveStatus)) {
    body->insert(pair<string, long>("EffectiveStatus", *request->effectiveStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityIdentity)) {
    body->insert(pair<string, string>("EntityIdentity", *request->entityIdentity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    body->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    body->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderField)) {
    body->insert(pair<string, string>("OrderField", *request->orderField));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookName)) {
    body->insert(pair<string, string>("PlaybookName", *request->playbookName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookTypes)) {
    body->insert(pair<string, string>("PlaybookTypes", *request->playbookTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    body->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sophonTaskId)) {
    body->insert(pair<string, string>("SophonTaskId", *request->sophonTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDisposeStrategy"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDisposeStrategyResponse(callApi(params, req, runtime));
}

ListDisposeStrategyResponse Alibabacloud_Cloud-siem20220616::Client::listDisposeStrategy(shared_ptr<ListDisposeStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDisposeStrategyWithOptions(request, runtime);
}

ListImportedLogsByProdResponse Alibabacloud_Cloud-siem20220616::Client::listImportedLogsByProdWithOptions(shared_ptr<ListImportedLogsByProdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    body->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListImportedLogsByProd"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListImportedLogsByProdResponse(callApi(params, req, runtime));
}

ListImportedLogsByProdResponse Alibabacloud_Cloud-siem20220616::Client::listImportedLogsByProd(shared_ptr<ListImportedLogsByProdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listImportedLogsByProdWithOptions(request, runtime);
}

ListOperationResponse Alibabacloud_Cloud-siem20220616::Client::listOperationWithOptions(shared_ptr<ListOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOperation"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOperationResponse(callApi(params, req, runtime));
}

ListOperationResponse Alibabacloud_Cloud-siem20220616::Client::listOperation(shared_ptr<ListOperationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOperationWithOptions(request, runtime);
}

ListProjectLogStoresResponse Alibabacloud_Cloud-siem20220616::Client::listProjectLogStoresWithOptions(shared_ptr<ListProjectLogStoresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLogCode)) {
    body->insert(pair<string, string>("SourceLogCode", *request->sourceLogCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceProdCode)) {
    body->insert(pair<string, string>("SourceProdCode", *request->sourceProdCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subUserId)) {
    body->insert(pair<string, long>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectLogStores"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectLogStoresResponse(callApi(params, req, runtime));
}

ListProjectLogStoresResponse Alibabacloud_Cloud-siem20220616::Client::listProjectLogStores(shared_ptr<ListProjectLogStoresRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectLogStoresWithOptions(request, runtime);
}

ListQuickQueryResponse Alibabacloud_Cloud-siem20220616::Client::listQuickQueryWithOptions(shared_ptr<ListQuickQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    body->insert(pair<string, long>("Offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQuickQuery"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQuickQueryResponse(callApi(params, req, runtime));
}

ListQuickQueryResponse Alibabacloud_Cloud-siem20220616::Client::listQuickQuery(shared_ptr<ListQuickQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQuickQueryWithOptions(request, runtime);
}

ListRdUsersResponse Alibabacloud_Cloud-siem20220616::Client::listRdUsersWithOptions(shared_ptr<ListRdUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRdUsers"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRdUsersResponse(callApi(params, req, runtime));
}

ListRdUsersResponse Alibabacloud_Cloud-siem20220616::Client::listRdUsers(shared_ptr<ListRdUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRdUsersWithOptions(request, runtime);
}

ListUserProdLogsResponse Alibabacloud_Cloud-siem20220616::Client::listUserProdLogsWithOptions(shared_ptr<ListUserProdLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLogCode)) {
    body->insert(pair<string, string>("SourceLogCode", *request->sourceLogCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceProdCode)) {
    body->insert(pair<string, string>("SourceProdCode", *request->sourceProdCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserProdLogs"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserProdLogsResponse(callApi(params, req, runtime));
}

ListUserProdLogsResponse Alibabacloud_Cloud-siem20220616::Client::listUserProdLogs(shared_ptr<ListUserProdLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserProdLogsWithOptions(request, runtime);
}

ListUsersByProdResponse Alibabacloud_Cloud-siem20220616::Client::listUsersByProdWithOptions(shared_ptr<ListUsersByProdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceProdCode)) {
    body->insert(pair<string, string>("SourceProdCode", *request->sourceProdCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsersByProd"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsersByProdResponse(callApi(params, req, runtime));
}

ListUsersByProdResponse Alibabacloud_Cloud-siem20220616::Client::listUsersByProd(shared_ptr<ListUsersByProdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersByProdWithOptions(request, runtime);
}

ModifyBindAccountResponse Alibabacloud_Cloud-siem20220616::Client::modifyBindAccountWithOptions(shared_ptr<ModifyBindAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessId)) {
    body->insert(pair<string, string>("AccessId", *request->accessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bindId)) {
    body->insert(pair<string, long>("BindId", *request->bindId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBindAccount"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBindAccountResponse(callApi(params, req, runtime));
}

ModifyBindAccountResponse Alibabacloud_Cloud-siem20220616::Client::modifyBindAccount(shared_ptr<ModifyBindAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBindAccountWithOptions(request, runtime);
}

ModifyDataSourceResponse Alibabacloud_Cloud-siem20220616::Client::modifyDataSourceWithOptions(shared_ptr<ModifyDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceId)) {
    body->insert(pair<string, string>("DataSourceInstanceId", *request->dataSourceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceName)) {
    body->insert(pair<string, string>("DataSourceInstanceName", *request->dataSourceInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceParams)) {
    body->insert(pair<string, string>("DataSourceInstanceParams", *request->dataSourceInstanceParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceRemark)) {
    body->insert(pair<string, string>("DataSourceInstanceRemark", *request->dataSourceInstanceRemark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDataSource"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDataSourceResponse(callApi(params, req, runtime));
}

ModifyDataSourceResponse Alibabacloud_Cloud-siem20220616::Client::modifyDataSource(shared_ptr<ModifyDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDataSourceWithOptions(request, runtime);
}

ModifyDataSourceLogResponse Alibabacloud_Cloud-siem20220616::Client::modifyDataSourceLogWithOptions(shared_ptr<ModifyDataSourceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceId)) {
    body->insert(pair<string, string>("DataSourceInstanceId", *request->dataSourceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceInstanceLogs)) {
    body->insert(pair<string, string>("DataSourceInstanceLogs", *request->dataSourceInstanceLogs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logCode)) {
    body->insert(pair<string, string>("LogCode", *request->logCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logInstanceId)) {
    body->insert(pair<string, string>("LogInstanceId", *request->logInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDataSourceLog"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDataSourceLogResponse(callApi(params, req, runtime));
}

ModifyDataSourceLogResponse Alibabacloud_Cloud-siem20220616::Client::modifyDataSourceLog(shared_ptr<ModifyDataSourceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDataSourceLogWithOptions(request, runtime);
}

OpenDeliveryResponse Alibabacloud_Cloud-siem20220616::Client::openDeliveryWithOptions(shared_ptr<OpenDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logCode)) {
    body->insert(pair<string, string>("LogCode", *request->logCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenDelivery"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenDeliveryResponse(callApi(params, req, runtime));
}

OpenDeliveryResponse Alibabacloud_Cloud-siem20220616::Client::openDelivery(shared_ptr<OpenDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openDeliveryWithOptions(request, runtime);
}

PostAutomateResponseConfigResponse Alibabacloud_Cloud-siem20220616::Client::postAutomateResponseConfigWithOptions(shared_ptr<PostAutomateResponseConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionConfig)) {
    body->insert(pair<string, string>("ActionConfig", *request->actionConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->actionType)) {
    body->insert(pair<string, string>("ActionType", *request->actionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoResponseType)) {
    body->insert(pair<string, string>("AutoResponseType", *request->autoResponseType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionCondition)) {
    body->insert(pair<string, string>("ExecutionCondition", *request->executionCondition));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    body->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subUserId)) {
    body->insert(pair<string, long>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PostAutomateResponseConfig"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PostAutomateResponseConfigResponse(callApi(params, req, runtime));
}

PostAutomateResponseConfigResponse Alibabacloud_Cloud-siem20220616::Client::postAutomateResponseConfig(shared_ptr<PostAutomateResponseConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return postAutomateResponseConfigWithOptions(request, runtime);
}

PostCustomizeRuleResponse Alibabacloud_Cloud-siem20220616::Client::postCustomizeRuleWithOptions(shared_ptr<PostCustomizeRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertType)) {
    body->insert(pair<string, string>("AlertType", *request->alertType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertTypeMds)) {
    body->insert(pair<string, string>("AlertTypeMds", *request->alertTypeMds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attCk)) {
    body->insert(pair<string, string>("AttCk", *request->attCk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTransferExt)) {
    body->insert(pair<string, string>("EventTransferExt", *request->eventTransferExt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventTransferSwitch)) {
    body->insert(pair<string, long>("EventTransferSwitch", *request->eventTransferSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTransferType)) {
    body->insert(pair<string, string>("EventTransferType", *request->eventTransferType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logSource)) {
    body->insert(pair<string, string>("LogSource", *request->logSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logSourceMds)) {
    body->insert(pair<string, string>("LogSourceMds", *request->logSourceMds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logType)) {
    body->insert(pair<string, string>("LogType", *request->logType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logTypeMds)) {
    body->insert(pair<string, string>("LogTypeMds", *request->logTypeMds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryCycle)) {
    body->insert(pair<string, string>("QueryCycle", *request->queryCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleCondition)) {
    body->insert(pair<string, string>("RuleCondition", *request->ruleCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleDesc)) {
    body->insert(pair<string, string>("RuleDesc", *request->ruleDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleGroup)) {
    body->insert(pair<string, string>("RuleGroup", *request->ruleGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    body->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleThreshold)) {
    body->insert(pair<string, string>("RuleThreshold", *request->ruleThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->threatLevel)) {
    body->insert(pair<string, string>("ThreatLevel", *request->threatLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PostCustomizeRule"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PostCustomizeRuleResponse(callApi(params, req, runtime));
}

PostCustomizeRuleResponse Alibabacloud_Cloud-siem20220616::Client::postCustomizeRule(shared_ptr<PostCustomizeRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return postCustomizeRuleWithOptions(request, runtime);
}

PostCustomizeRuleTestResponse Alibabacloud_Cloud-siem20220616::Client::postCustomizeRuleTestWithOptions(shared_ptr<PostCustomizeRuleTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->simulatedData)) {
    body->insert(pair<string, string>("SimulatedData", *request->simulatedData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->testType)) {
    body->insert(pair<string, string>("TestType", *request->testType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PostCustomizeRuleTest"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PostCustomizeRuleTestResponse(callApi(params, req, runtime));
}

PostCustomizeRuleTestResponse Alibabacloud_Cloud-siem20220616::Client::postCustomizeRuleTest(shared_ptr<PostCustomizeRuleTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return postCustomizeRuleTestWithOptions(request, runtime);
}

PostEventDisposeAndWhiteruleListResponse Alibabacloud_Cloud-siem20220616::Client::postEventDisposeAndWhiteruleListWithOptions(shared_ptr<PostEventDisposeAndWhiteruleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventDispose)) {
    body->insert(pair<string, string>("EventDispose", *request->eventDispose));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiverInfo)) {
    body->insert(pair<string, string>("ReceiverInfo", *request->receiverInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PostEventDisposeAndWhiteruleList"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PostEventDisposeAndWhiteruleListResponse(callApi(params, req, runtime));
}

PostEventDisposeAndWhiteruleListResponse Alibabacloud_Cloud-siem20220616::Client::postEventDisposeAndWhiteruleList(shared_ptr<PostEventDisposeAndWhiteruleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return postEventDisposeAndWhiteruleListWithOptions(request, runtime);
}

PostEventWhiteruleListResponse Alibabacloud_Cloud-siem20220616::Client::postEventWhiteruleListWithOptions(shared_ptr<PostEventWhiteruleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whiteruleList)) {
    body->insert(pair<string, string>("WhiteruleList", *request->whiteruleList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PostEventWhiteruleList"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PostEventWhiteruleListResponse(callApi(params, req, runtime));
}

PostEventWhiteruleListResponse Alibabacloud_Cloud-siem20220616::Client::postEventWhiteruleList(shared_ptr<PostEventWhiteruleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return postEventWhiteruleListWithOptions(request, runtime);
}

PostFinishCustomizeRuleTestResponse Alibabacloud_Cloud-siem20220616::Client::postFinishCustomizeRuleTestWithOptions(shared_ptr<PostFinishCustomizeRuleTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PostFinishCustomizeRuleTest"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PostFinishCustomizeRuleTestResponse(callApi(params, req, runtime));
}

PostFinishCustomizeRuleTestResponse Alibabacloud_Cloud-siem20220616::Client::postFinishCustomizeRuleTest(shared_ptr<PostFinishCustomizeRuleTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return postFinishCustomizeRuleTestWithOptions(request, runtime);
}

PostRuleStatusChangeResponse Alibabacloud_Cloud-siem20220616::Client::postRuleStatusChangeWithOptions(shared_ptr<PostRuleStatusChangeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    body->insert(pair<string, string>("Ids", *request->ids));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->inUse)) {
    body->insert(pair<string, bool>("InUse", *request->inUse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    body->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PostRuleStatusChange"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PostRuleStatusChangeResponse(callApi(params, req, runtime));
}

PostRuleStatusChangeResponse Alibabacloud_Cloud-siem20220616::Client::postRuleStatusChange(shared_ptr<PostRuleStatusChangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return postRuleStatusChangeWithOptions(request, runtime);
}

RestoreCapacityResponse Alibabacloud_Cloud-siem20220616::Client::restoreCapacityWithOptions(shared_ptr<RestoreCapacityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestoreCapacity"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestoreCapacityResponse(callApi(params, req, runtime));
}

RestoreCapacityResponse Alibabacloud_Cloud-siem20220616::Client::restoreCapacity(shared_ptr<RestoreCapacityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restoreCapacityWithOptions(request, runtime);
}

SaveQuickQueryResponse Alibabacloud_Cloud-siem20220616::Client::saveQuickQueryWithOptions(shared_ptr<SaveQuickQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveQuickQuery"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveQuickQueryResponse(callApi(params, req, runtime));
}

SaveQuickQueryResponse Alibabacloud_Cloud-siem20220616::Client::saveQuickQuery(shared_ptr<SaveQuickQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveQuickQueryWithOptions(request, runtime);
}

SetStorageResponse Alibabacloud_Cloud-siem20220616::Client::setStorageWithOptions(shared_ptr<SetStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    body->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttl)) {
    body->insert(pair<string, long>("Ttl", *request->ttl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetStorage"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetStorageResponse(callApi(params, req, runtime));
}

SetStorageResponse Alibabacloud_Cloud-siem20220616::Client::setStorage(shared_ptr<SetStorageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setStorageWithOptions(request, runtime);
}

ShowQuickAnalysisResponse Alibabacloud_Cloud-siem20220616::Client::showQuickAnalysisWithOptions(shared_ptr<ShowQuickAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ShowQuickAnalysis"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ShowQuickAnalysisResponse(callApi(params, req, runtime));
}

ShowQuickAnalysisResponse Alibabacloud_Cloud-siem20220616::Client::showQuickAnalysis(shared_ptr<ShowQuickAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return showQuickAnalysisWithOptions(request, runtime);
}

SubmitImportLogTasksResponse Alibabacloud_Cloud-siem20220616::Client::submitImportLogTasksWithOptions(shared_ptr<SubmitImportLogTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accounts)) {
    body->insert(pair<string, string>("Accounts", *request->accounts));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoImported)) {
    body->insert(pair<string, long>("AutoImported", *request->autoImported));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudCode)) {
    body->insert(pair<string, string>("CloudCode", *request->cloudCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logCodes)) {
    body->insert(pair<string, string>("LogCodes", *request->logCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    body->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitImportLogTasks"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitImportLogTasksResponse(callApi(params, req, runtime));
}

SubmitImportLogTasksResponse Alibabacloud_Cloud-siem20220616::Client::submitImportLogTasks(shared_ptr<SubmitImportLogTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitImportLogTasksWithOptions(request, runtime);
}

SubmitJobsResponse Alibabacloud_Cloud-siem20220616::Client::submitJobsWithOptions(shared_ptr<SubmitJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonParam)) {
    body->insert(pair<string, string>("JsonParam", *request->jsonParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitJobs"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitJobsResponse(callApi(params, req, runtime));
}

SubmitJobsResponse Alibabacloud_Cloud-siem20220616::Client::submitJobs(shared_ptr<SubmitJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitJobsWithOptions(request, runtime);
}

UpdateAutomateResponseConfigStatusResponse Alibabacloud_Cloud-siem20220616::Client::updateAutomateResponseConfigStatusWithOptions(shared_ptr<UpdateAutomateResponseConfigStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    body->insert(pair<string, string>("Ids", *request->ids));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->inUse)) {
    body->insert(pair<string, bool>("InUse", *request->inUse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAutomateResponseConfigStatus"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAutomateResponseConfigStatusResponse(callApi(params, req, runtime));
}

UpdateAutomateResponseConfigStatusResponse Alibabacloud_Cloud-siem20220616::Client::updateAutomateResponseConfigStatus(shared_ptr<UpdateAutomateResponseConfigStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAutomateResponseConfigStatusWithOptions(request, runtime);
}

UpdateWhiteRuleListResponse Alibabacloud_Cloud-siem20220616::Client::updateWhiteRuleListWithOptions(shared_ptr<UpdateWhiteRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    body->insert(pair<string, string>("Expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidentUuid)) {
    body->insert(pair<string, string>("IncidentUuid", *request->incidentUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    body->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleType)) {
    body->insert(pair<string, long>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->whiteRuleId)) {
    body->insert(pair<string, long>("WhiteRuleId", *request->whiteRuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWhiteRuleList"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWhiteRuleListResponse(callApi(params, req, runtime));
}

UpdateWhiteRuleListResponse Alibabacloud_Cloud-siem20220616::Client::updateWhiteRuleList(shared_ptr<UpdateWhiteRuleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWhiteRuleListWithOptions(request, runtime);
}

