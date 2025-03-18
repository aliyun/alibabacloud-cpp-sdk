// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/hologram_20220601.hpp>
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

using namespace Alibabacloud_Hologram20220601;

Alibabacloud_Hologram20220601::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("hologram"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Hologram20220601::Client::getEndpoint(shared_ptr<string> productId,
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

ChangeResourceGroupResponse Alibabacloud_Hologram20220601::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    body->insert(pair<string, string>("newResourceGroupId", *request->newResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tag/changeResourceGroup"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ChangeResourceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return ChangeResourceGroupResponse(execute(params, req, runtime));
  }
}

ChangeResourceGroupResponse Alibabacloud_Hologram20220601::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return changeResourceGroupWithOptions(request, headers, runtime);
}

CreateHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::createHoloWarehouseWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<CreateHoloWarehouseRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cpu)) {
    body->insert(pair<string, string>("cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHoloWarehouse"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/createHoloWarehouse"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateHoloWarehouseResponse(callApi(params, req, runtime));
  }
  else {
    return CreateHoloWarehouseResponse(execute(params, req, runtime));
  }
}

CreateHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::createHoloWarehouse(shared_ptr<string> instanceId, shared_ptr<CreateHoloWarehouseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

CreateInstanceResponse Alibabacloud_Hologram20220601::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    body->insert(pair<string, bool>("autoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    body->insert(pair<string, bool>("autoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("chargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->coldStorageSize)) {
    body->insert(pair<string, long>("coldStorageSize", *request->coldStorageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    body->insert(pair<string, long>("cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableServerlessComputing)) {
    body->insert(pair<string, bool>("enableServerlessComputing", *request->enableServerlessComputing));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayCount)) {
    body->insert(pair<string, long>("gatewayCount", *request->gatewayCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->initialDatabases)) {
    body->insert(pair<string, string>("initialDatabases", *request->initialDatabases));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("instanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("instanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->leaderInstanceId)) {
    body->insert(pair<string, string>("leaderInstanceId", *request->leaderInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    body->insert(pair<string, string>("pricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("regionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->storageSize)) {
    body->insert(pair<string, long>("storageSize", *request->storageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    body->insert(pair<string, string>("storageType", *request->storageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    body->insert(pair<string, string>("vSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("vpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("zoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstance"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateInstanceResponse(execute(params, req, runtime));
  }
}

CreateInstanceResponse Alibabacloud_Hologram20220601::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceWithOptions(request, headers, runtime);
}

DeleteHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::deleteHoloWarehouseWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<DeleteHoloWarehouseRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHoloWarehouse"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/deleteHoloWarehouse"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHoloWarehouseResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHoloWarehouseResponse(execute(params, req, runtime));
  }
}

DeleteHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::deleteHoloWarehouse(shared_ptr<string> instanceId, shared_ptr<DeleteHoloWarehouseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

DeleteInstanceResponse Alibabacloud_Hologram20220601::Client::deleteInstanceWithOptions(shared_ptr<string> instanceId,
                                                                                        shared_ptr<DeleteInstanceRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstance"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteInstanceResponse(execute(params, req, runtime));
  }
}

DeleteInstanceResponse Alibabacloud_Hologram20220601::Client::deleteInstance(shared_ptr<string> instanceId, shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteInstanceWithOptions(instanceId, request, headers, runtime);
}

DisableHiveAccessResponse Alibabacloud_Hologram20220601::Client::disableHiveAccessWithOptions(shared_ptr<string> instanceId,
                                                                                              shared_ptr<DisableHiveAccessRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableHiveAccess"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/disableHiveAccess"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DisableHiveAccessResponse(callApi(params, req, runtime));
  }
  else {
    return DisableHiveAccessResponse(execute(params, req, runtime));
  }
}

DisableHiveAccessResponse Alibabacloud_Hologram20220601::Client::disableHiveAccess(shared_ptr<string> instanceId, shared_ptr<DisableHiveAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableHiveAccessWithOptions(instanceId, request, headers, runtime);
}

EnableHiveAccessResponse Alibabacloud_Hologram20220601::Client::enableHiveAccessWithOptions(shared_ptr<string> instanceId,
                                                                                            shared_ptr<EnableHiveAccessRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableHiveAccess"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/enableHiveAccess"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EnableHiveAccessResponse(callApi(params, req, runtime));
  }
  else {
    return EnableHiveAccessResponse(execute(params, req, runtime));
  }
}

EnableHiveAccessResponse Alibabacloud_Hologram20220601::Client::enableHiveAccess(shared_ptr<string> instanceId, shared_ptr<EnableHiveAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableHiveAccessWithOptions(instanceId, request, headers, runtime);
}

GetInstanceResponse Alibabacloud_Hologram20220601::Client::getInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstance"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return GetInstanceResponse(execute(params, req, runtime));
  }
}

GetInstanceResponse Alibabacloud_Hologram20220601::Client::getInstance(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceWithOptions(instanceId, headers, runtime);
}

GetWarehouseDetailResponse Alibabacloud_Hologram20220601::Client::getWarehouseDetailWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWarehouseDetail"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/getWarehouseDetail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWarehouseDetailResponse(callApi(params, req, runtime));
  }
  else {
    return GetWarehouseDetailResponse(execute(params, req, runtime));
  }
}

GetWarehouseDetailResponse Alibabacloud_Hologram20220601::Client::getWarehouseDetail(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWarehouseDetailWithOptions(instanceId, headers, runtime);
}

ListBackupDataResponse Alibabacloud_Hologram20220601::Client::listBackupDataWithOptions(shared_ptr<ListBackupDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupType)) {
    query->insert(pair<string, string>("backupType", *request->backupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBackupData"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/backups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListBackupDataResponse(callApi(params, req, runtime));
  }
  else {
    return ListBackupDataResponse(execute(params, req, runtime));
  }
}

ListBackupDataResponse Alibabacloud_Hologram20220601::Client::listBackupData(shared_ptr<ListBackupDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listBackupDataWithOptions(request, headers, runtime);
}

ListInstancesResponse Alibabacloud_Hologram20220601::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cmsInstanceType)) {
    body->insert(pair<string, string>("cmsInstanceType", *request->cmsInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListInstancesRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<ListInstancesRequestTag>>("tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return ListInstancesResponse(execute(params, req, runtime));
  }
}

ListInstancesResponse Alibabacloud_Hologram20220601::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstancesWithOptions(request, headers, runtime);
}

ListWarehousesResponse Alibabacloud_Hologram20220601::Client::listWarehousesWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWarehouses"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/listWarehouses"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWarehousesResponse(callApi(params, req, runtime));
  }
  else {
    return ListWarehousesResponse(execute(params, req, runtime));
  }
}

ListWarehousesResponse Alibabacloud_Hologram20220601::Client::listWarehouses(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWarehousesWithOptions(instanceId, headers, runtime);
}

RebalanceHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::rebalanceHoloWarehouseWithOptions(shared_ptr<string> instanceId,
                                                                                                        shared_ptr<RebalanceHoloWarehouseRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebalanceHoloWarehouse"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/rebalanceHoloWarehouse"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RebalanceHoloWarehouseResponse(callApi(params, req, runtime));
  }
  else {
    return RebalanceHoloWarehouseResponse(execute(params, req, runtime));
  }
}

RebalanceHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::rebalanceHoloWarehouse(shared_ptr<string> instanceId, shared_ptr<RebalanceHoloWarehouseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rebalanceHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

RenameHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::renameHoloWarehouseWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<RenameHoloWarehouseRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newWarehouseName)) {
    body->insert(pair<string, string>("newWarehouseName", *request->newWarehouseName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenameHoloWarehouse"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/renameHoloWarehouse"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RenameHoloWarehouseResponse(callApi(params, req, runtime));
  }
  else {
    return RenameHoloWarehouseResponse(execute(params, req, runtime));
  }
}

RenameHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::renameHoloWarehouse(shared_ptr<string> instanceId, shared_ptr<RenameHoloWarehouseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return renameHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

RenewInstanceResponse Alibabacloud_Hologram20220601::Client::renewInstanceWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<RenewInstanceRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    body->insert(pair<string, bool>("autoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("duration", *request->duration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewInstance"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/renew"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RenewInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return RenewInstanceResponse(execute(params, req, runtime));
  }
}

RenewInstanceResponse Alibabacloud_Hologram20220601::Client::renewInstance(shared_ptr<string> instanceId, shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return renewInstanceWithOptions(instanceId, request, headers, runtime);
}

RestartHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::restartHoloWarehouseWithOptions(shared_ptr<string> instanceId,
                                                                                                    shared_ptr<RestartHoloWarehouseRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartHoloWarehouse"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/restartHoloWarehouse"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RestartHoloWarehouseResponse(callApi(params, req, runtime));
  }
  else {
    return RestartHoloWarehouseResponse(execute(params, req, runtime));
  }
}

RestartHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::restartHoloWarehouse(shared_ptr<string> instanceId, shared_ptr<RestartHoloWarehouseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

RestartInstanceResponse Alibabacloud_Hologram20220601::Client::restartInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartInstance"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/restart"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RestartInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return RestartInstanceResponse(execute(params, req, runtime));
  }
}

RestartInstanceResponse Alibabacloud_Hologram20220601::Client::restartInstance(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartInstanceWithOptions(instanceId, headers, runtime);
}

ResumeHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::resumeHoloWarehouseWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<ResumeHoloWarehouseRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeHoloWarehouse"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/resumeHoloWarehouse"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResumeHoloWarehouseResponse(callApi(params, req, runtime));
  }
  else {
    return ResumeHoloWarehouseResponse(execute(params, req, runtime));
  }
}

ResumeHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::resumeHoloWarehouse(shared_ptr<string> instanceId, shared_ptr<ResumeHoloWarehouseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

ResumeInstanceResponse Alibabacloud_Hologram20220601::Client::resumeInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeInstance"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/resume"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResumeInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ResumeInstanceResponse(execute(params, req, runtime));
  }
}

ResumeInstanceResponse Alibabacloud_Hologram20220601::Client::resumeInstance(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeInstanceWithOptions(instanceId, headers, runtime);
}

ScaleHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::scaleHoloWarehouseWithOptions(shared_ptr<string> instanceId,
                                                                                                shared_ptr<ScaleHoloWarehouseRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    body->insert(pair<string, long>("cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleHoloWarehouse"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/scaleHoloWarehouse"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ScaleHoloWarehouseResponse(callApi(params, req, runtime));
  }
  else {
    return ScaleHoloWarehouseResponse(execute(params, req, runtime));
  }
}

ScaleHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::scaleHoloWarehouse(shared_ptr<string> instanceId, shared_ptr<ScaleHoloWarehouseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scaleHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

ScaleInstanceResponse Alibabacloud_Hologram20220601::Client::scaleInstanceWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<ScaleInstanceRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->coldStorageSize)) {
    body->insert(pair<string, long>("coldStorageSize", *request->coldStorageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    body->insert(pair<string, long>("cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableServerlessComputing)) {
    body->insert(pair<string, bool>("enableServerlessComputing", *request->enableServerlessComputing));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayCount)) {
    body->insert(pair<string, long>("gatewayCount", *request->gatewayCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scaleType)) {
    body->insert(pair<string, string>("scaleType", *request->scaleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->storageSize)) {
    body->insert(pair<string, long>("storageSize", *request->storageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleInstance"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/scale"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ScaleInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ScaleInstanceResponse(execute(params, req, runtime));
  }
}

ScaleInstanceResponse Alibabacloud_Hologram20220601::Client::scaleInstance(shared_ptr<string> instanceId, shared_ptr<ScaleInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scaleInstanceWithOptions(instanceId, request, headers, runtime);
}

StopInstanceResponse Alibabacloud_Hologram20220601::Client::stopInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopInstance"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return StopInstanceResponse(execute(params, req, runtime));
  }
}

StopInstanceResponse Alibabacloud_Hologram20220601::Client::stopInstance(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopInstanceWithOptions(instanceId, headers, runtime);
}

SuspendHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::suspendHoloWarehouseWithOptions(shared_ptr<string> instanceId,
                                                                                                    shared_ptr<SuspendHoloWarehouseRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendHoloWarehouse"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/suspendHoloWarehouse"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SuspendHoloWarehouseResponse(callApi(params, req, runtime));
  }
  else {
    return SuspendHoloWarehouseResponse(execute(params, req, runtime));
  }
}

SuspendHoloWarehouseResponse Alibabacloud_Hologram20220601::Client::suspendHoloWarehouse(shared_ptr<string> instanceId, shared_ptr<SuspendHoloWarehouseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return suspendHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

UpdateInstanceNameResponse Alibabacloud_Hologram20220601::Client::updateInstanceNameWithOptions(shared_ptr<string> instanceId,
                                                                                                shared_ptr<UpdateInstanceNameRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("instanceName", *request->instanceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstanceName"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/instanceName"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateInstanceNameResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateInstanceNameResponse(execute(params, req, runtime));
  }
}

UpdateInstanceNameResponse Alibabacloud_Hologram20220601::Client::updateInstanceName(shared_ptr<string> instanceId, shared_ptr<UpdateInstanceNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceNameWithOptions(instanceId, request, headers, runtime);
}

UpdateInstanceNetworkTypeResponse Alibabacloud_Hologram20220601::Client::updateInstanceNetworkTypeWithOptions(shared_ptr<string> instanceId,
                                                                                                              shared_ptr<UpdateInstanceNetworkTypeRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->anyTunnelToSingleTunnel)) {
    body->insert(pair<string, string>("anyTunnelToSingleTunnel", *request->anyTunnelToSingleTunnel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkTypes)) {
    body->insert(pair<string, string>("networkTypes", *request->networkTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    body->insert(pair<string, string>("vSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("vpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcOwnerId)) {
    body->insert(pair<string, string>("vpcOwnerId", *request->vpcOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcRegionId)) {
    body->insert(pair<string, string>("vpcRegionId", *request->vpcRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstanceNetworkType"))},
    {"version", boost::any(string("2022-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/network"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateInstanceNetworkTypeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateInstanceNetworkTypeResponse(execute(params, req, runtime));
  }
}

UpdateInstanceNetworkTypeResponse Alibabacloud_Hologram20220601::Client::updateInstanceNetworkType(shared_ptr<string> instanceId, shared_ptr<UpdateInstanceNetworkTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceNetworkTypeWithOptions(instanceId, request, headers, runtime);
}

