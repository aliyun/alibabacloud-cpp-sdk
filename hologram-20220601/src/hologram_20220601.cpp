// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/hologram_20220601.hpp>
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
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayCount)) {
    body->insert(pair<string, long>("gatewayCount", *request->gatewayCount));
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
  return CreateInstanceResponse(callApi(params, req, runtime));
}

CreateInstanceResponse Alibabacloud_Hologram20220601::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceWithOptions(request, headers, runtime);
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
  return DeleteInstanceResponse(callApi(params, req, runtime));
}

DeleteInstanceResponse Alibabacloud_Hologram20220601::Client::deleteInstance(shared_ptr<string> instanceId, shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteInstanceWithOptions(instanceId, request, headers, runtime);
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
  return GetInstanceResponse(callApi(params, req, runtime));
}

GetInstanceResponse Alibabacloud_Hologram20220601::Client::getInstance(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceWithOptions(instanceId, headers, runtime);
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
  return ListInstancesResponse(callApi(params, req, runtime));
}

ListInstancesResponse Alibabacloud_Hologram20220601::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstancesWithOptions(request, headers, runtime);
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
  return RenewInstanceResponse(callApi(params, req, runtime));
}

RenewInstanceResponse Alibabacloud_Hologram20220601::Client::renewInstance(shared_ptr<string> instanceId, shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return renewInstanceWithOptions(instanceId, request, headers, runtime);
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
  return RestartInstanceResponse(callApi(params, req, runtime));
}

RestartInstanceResponse Alibabacloud_Hologram20220601::Client::restartInstance(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartInstanceWithOptions(instanceId, headers, runtime);
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
  return ResumeInstanceResponse(callApi(params, req, runtime));
}

ResumeInstanceResponse Alibabacloud_Hologram20220601::Client::resumeInstance(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeInstanceWithOptions(instanceId, headers, runtime);
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
  return ScaleInstanceResponse(callApi(params, req, runtime));
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
  return StopInstanceResponse(callApi(params, req, runtime));
}

StopInstanceResponse Alibabacloud_Hologram20220601::Client::stopInstance(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopInstanceWithOptions(instanceId, headers, runtime);
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
  return UpdateInstanceNameResponse(callApi(params, req, runtime));
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
  return UpdateInstanceNetworkTypeResponse(callApi(params, req, runtime));
}

UpdateInstanceNetworkTypeResponse Alibabacloud_Hologram20220601::Client::updateInstanceNetworkType(shared_ptr<string> instanceId, shared_ptr<UpdateInstanceNetworkTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceNetworkTypeWithOptions(instanceId, request, headers, runtime);
}

