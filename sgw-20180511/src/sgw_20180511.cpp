// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/sgw_20180511.hpp>
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

using namespace Alibabacloud_Sgw20180511;

Alibabacloud_Sgw20180511::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "sgw.cn-shanghai.aliyuncs.com"},
    {"cn-beijing", "sgw.cn-shanghai.aliyuncs.com"},
    {"cn-chengdu", "sgw.cn-shanghai.aliyuncs.com"},
    {"cn-zhangjiakou", "sgw.cn-shanghai.aliyuncs.com"},
    {"cn-huhehaote", "sgw.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou", "sgw.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "sgw.cn-shanghai.aliyuncs.com"},
    {"cn-hongkong", "sgw.cn-shanghai.aliyuncs.com"},
    {"us-east-1", "sgw.us-west-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("sgw"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Sgw20180511::Client::getEndpoint(shared_ptr<string> productId,
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

ActivateAllInOneGatewayResponse Alibabacloud_Sgw20180511::Client::activateAllInOneGatewayWithOptions(shared_ptr<ActivateAllInOneGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUUID)) {
    query->insert(pair<string, string>("ClientUUID", *request->clientUUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceNumber)) {
    query->insert(pair<string, string>("DeviceNumber", *request->deviceNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    query->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    query->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActivateAllInOneGateway"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ActivateAllInOneGatewayResponse(callApi(params, req, runtime));
}

ActivateAllInOneGatewayResponse Alibabacloud_Sgw20180511::Client::activateAllInOneGateway(shared_ptr<ActivateAllInOneGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateAllInOneGatewayWithOptions(request, runtime);
}

ActivateGatewayResponse Alibabacloud_Sgw20180511::Client::activateGatewayWithOptions(shared_ptr<ActivateGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUUID)) {
    query->insert(pair<string, string>("ClientUUID", *request->clientUUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    query->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    query->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActivateGateway"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ActivateGatewayResponse(callApi(params, req, runtime));
}

ActivateGatewayResponse Alibabacloud_Sgw20180511::Client::activateGateway(shared_ptr<ActivateGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateGatewayWithOptions(request, runtime);
}

AddSharesToExpressSyncResponse Alibabacloud_Sgw20180511::Client::addSharesToExpressSyncWithOptions(shared_ptr<AddSharesToExpressSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expressSyncId)) {
    query->insert(pair<string, string>("ExpressSyncId", *request->expressSyncId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayShares)) {
    query->insert(pair<string, string>("GatewayShares", *request->gatewayShares));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSharesToExpressSync"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSharesToExpressSyncResponse(callApi(params, req, runtime));
}

AddSharesToExpressSyncResponse Alibabacloud_Sgw20180511::Client::addSharesToExpressSync(shared_ptr<AddSharesToExpressSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSharesToExpressSyncWithOptions(request, runtime);
}

AddTagsToGatewayResponse Alibabacloud_Sgw20180511::Client::addTagsToGatewayWithOptions(shared_ptr<AddTagsToGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTagsToGateway"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTagsToGatewayResponse(callApi(params, req, runtime));
}

AddTagsToGatewayResponse Alibabacloud_Sgw20180511::Client::addTagsToGateway(shared_ptr<AddTagsToGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTagsToGatewayWithOptions(request, runtime);
}

CheckActivationKeyResponse Alibabacloud_Sgw20180511::Client::checkActivationKeyWithOptions(shared_ptr<CheckActivationKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cryptKey)) {
    query->insert(pair<string, string>("CryptKey", *request->cryptKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cryptText)) {
    query->insert(pair<string, string>("CryptText", *request->cryptText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckActivationKey"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckActivationKeyResponse(callApi(params, req, runtime));
}

CheckActivationKeyResponse Alibabacloud_Sgw20180511::Client::checkActivationKey(shared_ptr<CheckActivationKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkActivationKeyWithOptions(request, runtime);
}

CheckBlockVolumeNameResponse Alibabacloud_Sgw20180511::Client::checkBlockVolumeNameWithOptions(shared_ptr<CheckBlockVolumeNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketEndpoint)) {
    query->insert(pair<string, string>("BucketEndpoint", *request->bucketEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->volumeName)) {
    query->insert(pair<string, string>("VolumeName", *request->volumeName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckBlockVolumeName"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckBlockVolumeNameResponse(callApi(params, req, runtime));
}

CheckBlockVolumeNameResponse Alibabacloud_Sgw20180511::Client::checkBlockVolumeName(shared_ptr<CheckBlockVolumeNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkBlockVolumeNameWithOptions(request, runtime);
}

CheckGatewayEssdSupportResponse Alibabacloud_Sgw20180511::Client::checkGatewayEssdSupportWithOptions(shared_ptr<CheckGatewayEssdSupportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckGatewayEssdSupport"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckGatewayEssdSupportResponse(callApi(params, req, runtime));
}

CheckGatewayEssdSupportResponse Alibabacloud_Sgw20180511::Client::checkGatewayEssdSupport(shared_ptr<CheckGatewayEssdSupportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkGatewayEssdSupportWithOptions(request, runtime);
}

CheckMnsServiceResponse Alibabacloud_Sgw20180511::Client::checkMnsServiceWithOptions(shared_ptr<CheckMnsServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckMnsService"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckMnsServiceResponse(callApi(params, req, runtime));
}

CheckMnsServiceResponse Alibabacloud_Sgw20180511::Client::checkMnsService(shared_ptr<CheckMnsServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMnsServiceWithOptions(request, runtime);
}

CheckRoleResponse Alibabacloud_Sgw20180511::Client::checkRoleWithOptions(shared_ptr<CheckRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleType)) {
    query->insert(pair<string, string>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckRole"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckRoleResponse(callApi(params, req, runtime));
}

CheckRoleResponse Alibabacloud_Sgw20180511::Client::checkRole(shared_ptr<CheckRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkRoleWithOptions(request, runtime);
}

CheckSlrRoleResponse Alibabacloud_Sgw20180511::Client::checkSlrRoleWithOptions(shared_ptr<CheckSlrRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->createIfNotExist)) {
    query->insert(pair<string, bool>("CreateIfNotExist", *request->createIfNotExist));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    query->insert(pair<string, string>("RoleName", *request->roleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckSlrRole"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckSlrRoleResponse(callApi(params, req, runtime));
}

CheckSlrRoleResponse Alibabacloud_Sgw20180511::Client::checkSlrRole(shared_ptr<CheckSlrRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkSlrRoleWithOptions(request, runtime);
}

CheckUpgradeVersionResponse Alibabacloud_Sgw20180511::Client::checkUpgradeVersionWithOptions(shared_ptr<CheckUpgradeVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUUID)) {
    query->insert(pair<string, string>("ClientUUID", *request->clientUUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayVersion)) {
    query->insert(pair<string, string>("GatewayVersion", *request->gatewayVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckUpgradeVersion"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckUpgradeVersionResponse(callApi(params, req, runtime));
}

CheckUpgradeVersionResponse Alibabacloud_Sgw20180511::Client::checkUpgradeVersion(shared_ptr<CheckUpgradeVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkUpgradeVersionWithOptions(request, runtime);
}

CreateCacheResponse Alibabacloud_Sgw20180511::Client::createCacheWithOptions(shared_ptr<CreateCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sizeInGB)) {
    query->insert(pair<string, long>("SizeInGB", *request->sizeInGB));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCache"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCacheResponse(callApi(params, req, runtime));
}

CreateCacheResponse Alibabacloud_Sgw20180511::Client::createCache(shared_ptr<CreateCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCacheWithOptions(request, runtime);
}

CreateElasticGatewayPrivateZoneResponse Alibabacloud_Sgw20180511::Client::createElasticGatewayPrivateZoneWithOptions(shared_ptr<CreateElasticGatewayPrivateZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateElasticGatewayPrivateZone"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateElasticGatewayPrivateZoneResponse(callApi(params, req, runtime));
}

CreateElasticGatewayPrivateZoneResponse Alibabacloud_Sgw20180511::Client::createElasticGatewayPrivateZone(shared_ptr<CreateElasticGatewayPrivateZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createElasticGatewayPrivateZoneWithOptions(request, runtime);
}

CreateExpressSyncResponse Alibabacloud_Sgw20180511::Client::createExpressSyncWithOptions(shared_ptr<CreateExpressSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketPrefix)) {
    query->insert(pair<string, string>("BucketPrefix", *request->bucketPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketRegion)) {
    query->insert(pair<string, string>("BucketRegion", *request->bucketRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateExpressSync"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateExpressSyncResponse(callApi(params, req, runtime));
}

CreateExpressSyncResponse Alibabacloud_Sgw20180511::Client::createExpressSync(shared_ptr<CreateExpressSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createExpressSyncWithOptions(request, runtime);
}

CreateGatewayResponse Alibabacloud_Sgw20180511::Client::createGatewayWithOptions(shared_ptr<CreateGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayClass)) {
    query->insert(pair<string, string>("GatewayClass", *request->gatewayClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    query->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->postPaid)) {
    query->insert(pair<string, bool>("PostPaid", *request->postPaid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->publicNetworkBandwidth)) {
    query->insert(pair<string, long>("PublicNetworkBandwidth", *request->publicNetworkBandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->releaseAfterExpiration)) {
    query->insert(pair<string, bool>("ReleaseAfterExpiration", *request->releaseAfterExpiration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secondaryVSwitchId)) {
    query->insert(pair<string, string>("SecondaryVSwitchId", *request->secondaryVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageBundleId)) {
    query->insert(pair<string, string>("StorageBundleId", *request->storageBundleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->untrustedEnvId)) {
    query->insert(pair<string, string>("UntrustedEnvId", *request->untrustedEnvId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->untrustedEnvInstanceType)) {
    query->insert(pair<string, string>("UntrustedEnvInstanceType", *request->untrustedEnvInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGateway"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayResponse(callApi(params, req, runtime));
}

CreateGatewayResponse Alibabacloud_Sgw20180511::Client::createGateway(shared_ptr<CreateGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGatewayWithOptions(request, runtime);
}

CreateGatewayBlockVolumeResponse Alibabacloud_Sgw20180511::Client::createGatewayBlockVolumeWithOptions(shared_ptr<CreateGatewayBlockVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheMode)) {
    query->insert(pair<string, string>("CacheMode", *request->cacheMode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->chapEnabled)) {
    query->insert(pair<string, bool>("ChapEnabled", *request->chapEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chapInPassword)) {
    query->insert(pair<string, string>("ChapInPassword", *request->chapInPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chapInUser)) {
    query->insert(pair<string, string>("ChapInUser", *request->chapInUser));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->chunkSize)) {
    query->insert(pair<string, long>("ChunkSize", *request->chunkSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localFilePath)) {
    query->insert(pair<string, string>("LocalFilePath", *request->localFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    query->insert(pair<string, string>("OssBucketName", *request->ossBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ossBucketSsl)) {
    query->insert(pair<string, bool>("OssBucketSsl", *request->ossBucketSsl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recovery)) {
    query->insert(pair<string, bool>("Recovery", *request->recovery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->volumeProtocol)) {
    query->insert(pair<string, string>("VolumeProtocol", *request->volumeProtocol));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewayBlockVolume"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayBlockVolumeResponse(callApi(params, req, runtime));
}

CreateGatewayBlockVolumeResponse Alibabacloud_Sgw20180511::Client::createGatewayBlockVolume(shared_ptr<CreateGatewayBlockVolumeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGatewayBlockVolumeWithOptions(request, runtime);
}

CreateGatewayCacheDiskResponse Alibabacloud_Sgw20180511::Client::createGatewayCacheDiskWithOptions(shared_ptr<CreateGatewayCacheDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheDiskCategory)) {
    query->insert(pair<string, string>("CacheDiskCategory", *request->cacheDiskCategory));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cacheDiskSizeInGB)) {
    query->insert(pair<string, long>("CacheDiskSizeInGB", *request->cacheDiskSizeInGB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->performanceLevel)) {
    query->insert(pair<string, string>("PerformanceLevel", *request->performanceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewayCacheDisk"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayCacheDiskResponse(callApi(params, req, runtime));
}

CreateGatewayCacheDiskResponse Alibabacloud_Sgw20180511::Client::createGatewayCacheDisk(shared_ptr<CreateGatewayCacheDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGatewayCacheDiskWithOptions(request, runtime);
}

CreateGatewayFileShareResponse Alibabacloud_Sgw20180511::Client::createGatewayFileShareWithOptions(shared_ptr<CreateGatewayFileShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->accessBasedEnumeration)) {
    query->insert(pair<string, bool>("AccessBasedEnumeration", *request->accessBasedEnumeration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backendLimit)) {
    query->insert(pair<string, long>("BackendLimit", *request->backendLimit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->browsable)) {
    query->insert(pair<string, bool>("Browsable", *request->browsable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->bypassCacheRead)) {
    query->insert(pair<string, bool>("BypassCacheRead", *request->bypassCacheRead));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheMode)) {
    query->insert(pair<string, string>("CacheMode", *request->cacheMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSideCmk)) {
    query->insert(pair<string, string>("ClientSideCmk", *request->clientSideCmk));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->clientSideEncryption)) {
    query->insert(pair<string, bool>("ClientSideEncryption", *request->clientSideEncryption));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->directIO)) {
    query->insert(pair<string, bool>("DirectIO", *request->directIO));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->downloadLimit)) {
    query->insert(pair<string, long>("DownloadLimit", *request->downloadLimit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fastReclaim)) {
    query->insert(pair<string, bool>("FastReclaim", *request->fastReclaim));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->frontendLimit)) {
    query->insert(pair<string, long>("FrontendLimit", *request->frontendLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreDelete)) {
    query->insert(pair<string, bool>("IgnoreDelete", *request->ignoreDelete));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->inPlace)) {
    query->insert(pair<string, bool>("InPlace", *request->inPlace));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->kmsRotatePeriod)) {
    query->insert(pair<string, long>("KmsRotatePeriod", *request->kmsRotatePeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lagPeriod)) {
    query->insert(pair<string, long>("LagPeriod", *request->lagPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localFilePath)) {
    query->insert(pair<string, string>("LocalFilePath", *request->localFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->nfsV4Optimization)) {
    query->insert(pair<string, bool>("NfsV4Optimization", *request->nfsV4Optimization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    query->insert(pair<string, string>("OssBucketName", *request->ossBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ossBucketSsl)) {
    query->insert(pair<string, bool>("OssBucketSsl", *request->ossBucketSsl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partialSyncPaths)) {
    query->insert(pair<string, string>("PartialSyncPaths", *request->partialSyncPaths));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pathPrefix)) {
    query->insert(pair<string, string>("PathPrefix", *request->pathPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pollingInterval)) {
    query->insert(pair<string, long>("PollingInterval", *request->pollingInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readOnlyClientList)) {
    query->insert(pair<string, string>("ReadOnlyClientList", *request->readOnlyClientList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readOnlyUserList)) {
    query->insert(pair<string, string>("ReadOnlyUserList", *request->readOnlyUserList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readWriteClientList)) {
    query->insert(pair<string, string>("ReadWriteClientList", *request->readWriteClientList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readWriteUserList)) {
    query->insert(pair<string, string>("ReadWriteUserList", *request->readWriteUserList));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->remoteSync)) {
    query->insert(pair<string, bool>("RemoteSync", *request->remoteSync));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->remoteSyncDownload)) {
    query->insert(pair<string, bool>("RemoteSyncDownload", *request->remoteSyncDownload));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverSideAlgorithm)) {
    query->insert(pair<string, string>("ServerSideAlgorithm", *request->serverSideAlgorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverSideCmk)) {
    query->insert(pair<string, string>("ServerSideCmk", *request->serverSideCmk));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->serverSideEncryption)) {
    query->insert(pair<string, bool>("ServerSideEncryption", *request->serverSideEncryption));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareProtocol)) {
    query->insert(pair<string, string>("ShareProtocol", *request->shareProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->squash)) {
    query->insert(pair<string, string>("Squash", *request->squash));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->supportArchive)) {
    query->insert(pair<string, bool>("SupportArchive", *request->supportArchive));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->transferAcceleration)) {
    query->insert(pair<string, bool>("TransferAcceleration", *request->transferAcceleration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->windowsAcl)) {
    query->insert(pair<string, bool>("WindowsAcl", *request->windowsAcl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewayFileShare"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayFileShareResponse(callApi(params, req, runtime));
}

CreateGatewayFileShareResponse Alibabacloud_Sgw20180511::Client::createGatewayFileShare(shared_ptr<CreateGatewayFileShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGatewayFileShareWithOptions(request, runtime);
}

CreateGatewayLoggingResponse Alibabacloud_Sgw20180511::Client::createGatewayLoggingWithOptions(shared_ptr<CreateGatewayLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsLogstore)) {
    query->insert(pair<string, string>("SlsLogstore", *request->slsLogstore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsProject)) {
    query->insert(pair<string, string>("SlsProject", *request->slsProject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewayLogging"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayLoggingResponse(callApi(params, req, runtime));
}

CreateGatewayLoggingResponse Alibabacloud_Sgw20180511::Client::createGatewayLogging(shared_ptr<CreateGatewayLoggingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGatewayLoggingWithOptions(request, runtime);
}

CreateGatewaySMBUserResponse Alibabacloud_Sgw20180511::Client::createGatewaySMBUserWithOptions(shared_ptr<CreateGatewaySMBUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewaySMBUser"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewaySMBUserResponse(callApi(params, req, runtime));
}

CreateGatewaySMBUserResponse Alibabacloud_Sgw20180511::Client::createGatewaySMBUser(shared_ptr<CreateGatewaySMBUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGatewaySMBUserWithOptions(request, runtime);
}

CreateStorageBundleResponse Alibabacloud_Sgw20180511::Client::createStorageBundleWithOptions(shared_ptr<CreateStorageBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backendBucketRegionId)) {
    query->insert(pair<string, string>("BackendBucketRegionId", *request->backendBucketRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStorageBundle"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateStorageBundleResponse(callApi(params, req, runtime));
}

CreateStorageBundleResponse Alibabacloud_Sgw20180511::Client::createStorageBundle(shared_ptr<CreateStorageBundleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStorageBundleWithOptions(request, runtime);
}

DeleteCSGClientsResponse Alibabacloud_Sgw20180511::Client::deleteCSGClientsWithOptions(shared_ptr<DeleteCSGClientsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteCSGClientsShrinkRequest> request = make_shared<DeleteCSGClientsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->clientIds)) {
    request->clientIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clientIds, make_shared<string>("ClientIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIdsShrink)) {
    query->insert(pair<string, string>("ClientIds", *request->clientIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientRegionId)) {
    query->insert(pair<string, string>("ClientRegionId", *request->clientRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCSGClients"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCSGClientsResponse(callApi(params, req, runtime));
}

DeleteCSGClientsResponse Alibabacloud_Sgw20180511::Client::deleteCSGClients(shared_ptr<DeleteCSGClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCSGClientsWithOptions(request, runtime);
}

DeleteElasticGatewayPrivateZoneResponse Alibabacloud_Sgw20180511::Client::deleteElasticGatewayPrivateZoneWithOptions(shared_ptr<DeleteElasticGatewayPrivateZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteElasticGatewayPrivateZone"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteElasticGatewayPrivateZoneResponse(callApi(params, req, runtime));
}

DeleteElasticGatewayPrivateZoneResponse Alibabacloud_Sgw20180511::Client::deleteElasticGatewayPrivateZone(shared_ptr<DeleteElasticGatewayPrivateZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteElasticGatewayPrivateZoneWithOptions(request, runtime);
}

DeleteExpressSyncResponse Alibabacloud_Sgw20180511::Client::deleteExpressSyncWithOptions(shared_ptr<DeleteExpressSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expressSyncId)) {
    query->insert(pair<string, string>("ExpressSyncId", *request->expressSyncId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteExpressSync"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteExpressSyncResponse(callApi(params, req, runtime));
}

DeleteExpressSyncResponse Alibabacloud_Sgw20180511::Client::deleteExpressSync(shared_ptr<DeleteExpressSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteExpressSyncWithOptions(request, runtime);
}

DeleteGatewayResponse Alibabacloud_Sgw20180511::Client::deleteGatewayWithOptions(shared_ptr<DeleteGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reasonDetail)) {
    query->insert(pair<string, string>("ReasonDetail", *request->reasonDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reasonType)) {
    query->insert(pair<string, string>("ReasonType", *request->reasonType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGateway"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayResponse(callApi(params, req, runtime));
}

DeleteGatewayResponse Alibabacloud_Sgw20180511::Client::deleteGateway(shared_ptr<DeleteGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayWithOptions(request, runtime);
}

DeleteGatewayBlockVolumesResponse Alibabacloud_Sgw20180511::Client::deleteGatewayBlockVolumesWithOptions(shared_ptr<DeleteGatewayBlockVolumesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isSourceDeletion)) {
    query->insert(pair<string, bool>("IsSourceDeletion", *request->isSourceDeletion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayBlockVolumes"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayBlockVolumesResponse(callApi(params, req, runtime));
}

DeleteGatewayBlockVolumesResponse Alibabacloud_Sgw20180511::Client::deleteGatewayBlockVolumes(shared_ptr<DeleteGatewayBlockVolumesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayBlockVolumesWithOptions(request, runtime);
}

DeleteGatewayCacheDiskResponse Alibabacloud_Sgw20180511::Client::deleteGatewayCacheDiskWithOptions(shared_ptr<DeleteGatewayCacheDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheId)) {
    query->insert(pair<string, string>("CacheId", *request->cacheId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localFilePath)) {
    query->insert(pair<string, string>("LocalFilePath", *request->localFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayCacheDisk"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayCacheDiskResponse(callApi(params, req, runtime));
}

DeleteGatewayCacheDiskResponse Alibabacloud_Sgw20180511::Client::deleteGatewayCacheDisk(shared_ptr<DeleteGatewayCacheDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayCacheDiskWithOptions(request, runtime);
}

DeleteGatewayFileSharesResponse Alibabacloud_Sgw20180511::Client::deleteGatewayFileSharesWithOptions(shared_ptr<DeleteGatewayFileSharesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayFileShares"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayFileSharesResponse(callApi(params, req, runtime));
}

DeleteGatewayFileSharesResponse Alibabacloud_Sgw20180511::Client::deleteGatewayFileShares(shared_ptr<DeleteGatewayFileSharesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayFileSharesWithOptions(request, runtime);
}

DeleteGatewayLoggingResponse Alibabacloud_Sgw20180511::Client::deleteGatewayLoggingWithOptions(shared_ptr<DeleteGatewayLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayLogging"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayLoggingResponse(callApi(params, req, runtime));
}

DeleteGatewayLoggingResponse Alibabacloud_Sgw20180511::Client::deleteGatewayLogging(shared_ptr<DeleteGatewayLoggingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayLoggingWithOptions(request, runtime);
}

DeleteGatewaySMBUserResponse Alibabacloud_Sgw20180511::Client::deleteGatewaySMBUserWithOptions(shared_ptr<DeleteGatewaySMBUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewaySMBUser"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewaySMBUserResponse(callApi(params, req, runtime));
}

DeleteGatewaySMBUserResponse Alibabacloud_Sgw20180511::Client::deleteGatewaySMBUser(shared_ptr<DeleteGatewaySMBUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewaySMBUserWithOptions(request, runtime);
}

DeleteStorageBundleResponse Alibabacloud_Sgw20180511::Client::deleteStorageBundleWithOptions(shared_ptr<DeleteStorageBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageBundleId)) {
    query->insert(pair<string, string>("StorageBundleId", *request->storageBundleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStorageBundle"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteStorageBundleResponse(callApi(params, req, runtime));
}

DeleteStorageBundleResponse Alibabacloud_Sgw20180511::Client::deleteStorageBundle(shared_ptr<DeleteStorageBundleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStorageBundleWithOptions(request, runtime);
}

DeployCSGClientsResponse Alibabacloud_Sgw20180511::Client::deployCSGClientsWithOptions(shared_ptr<DeployCSGClientsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeployCSGClientsShrinkRequest> request = make_shared<DeployCSGClientsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->ecsInstanceIds)) {
    request->ecsInstanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ecsInstanceIds, make_shared<string>("EcsInstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientRegionId)) {
    query->insert(pair<string, string>("ClientRegionId", *request->clientRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceIdsShrink)) {
    query->insert(pair<string, string>("EcsInstanceIds", *request->ecsInstanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployCSGClients"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployCSGClientsResponse(callApi(params, req, runtime));
}

DeployCSGClientsResponse Alibabacloud_Sgw20180511::Client::deployCSGClients(shared_ptr<DeployCSGClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployCSGClientsWithOptions(request, runtime);
}

DeployCacheDiskResponse Alibabacloud_Sgw20180511::Client::deployCacheDiskWithOptions(shared_ptr<DeployCacheDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheConfig)) {
    query->insert(pair<string, string>("CacheConfig", *request->cacheConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskCategory)) {
    query->insert(pair<string, string>("DiskCategory", *request->diskCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sizeInGB)) {
    query->insert(pair<string, long>("SizeInGB", *request->sizeInGB));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployCacheDisk"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployCacheDiskResponse(callApi(params, req, runtime));
}

DeployCacheDiskResponse Alibabacloud_Sgw20180511::Client::deployCacheDisk(shared_ptr<DeployCacheDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployCacheDiskWithOptions(request, runtime);
}

DeployGatewayResponse Alibabacloud_Sgw20180511::Client::deployGatewayWithOptions(shared_ptr<DeployGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayClass)) {
    query->insert(pair<string, string>("GatewayClass", *request->gatewayClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployGateway"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployGatewayResponse(callApi(params, req, runtime));
}

DeployGatewayResponse Alibabacloud_Sgw20180511::Client::deployGateway(shared_ptr<DeployGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployGatewayWithOptions(request, runtime);
}

DescribeAccountConfigResponse Alibabacloud_Sgw20180511::Client::describeAccountConfigWithOptions(shared_ptr<DescribeAccountConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccountConfig"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccountConfigResponse(callApi(params, req, runtime));
}

DescribeAccountConfigResponse Alibabacloud_Sgw20180511::Client::describeAccountConfig(shared_ptr<DescribeAccountConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountConfigWithOptions(request, runtime);
}

DescribeBlockVolumeSnapshotsResponse Alibabacloud_Sgw20180511::Client::describeBlockVolumeSnapshotsWithOptions(shared_ptr<DescribeBlockVolumeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBlockVolumeSnapshots"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBlockVolumeSnapshotsResponse(callApi(params, req, runtime));
}

DescribeBlockVolumeSnapshotsResponse Alibabacloud_Sgw20180511::Client::describeBlockVolumeSnapshots(shared_ptr<DescribeBlockVolumeSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBlockVolumeSnapshotsWithOptions(request, runtime);
}

DescribeCSGClientTasksResponse Alibabacloud_Sgw20180511::Client::describeCSGClientTasksWithOptions(shared_ptr<DescribeCSGClientTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientRegionId)) {
    query->insert(pair<string, string>("ClientRegionId", *request->clientRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCSGClientTasks"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCSGClientTasksResponse(callApi(params, req, runtime));
}

DescribeCSGClientTasksResponse Alibabacloud_Sgw20180511::Client::describeCSGClientTasks(shared_ptr<DescribeCSGClientTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCSGClientTasksWithOptions(request, runtime);
}

DescribeCSGClientsResponse Alibabacloud_Sgw20180511::Client::describeCSGClientsWithOptions(shared_ptr<DescribeCSGClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientRegionId)) {
    query->insert(pair<string, string>("ClientRegionId", *request->clientRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCSGClients"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCSGClientsResponse(callApi(params, req, runtime));
}

DescribeCSGClientsResponse Alibabacloud_Sgw20180511::Client::describeCSGClients(shared_ptr<DescribeCSGClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCSGClientsWithOptions(request, runtime);
}

DescribeDashboardResponse Alibabacloud_Sgw20180511::Client::describeDashboardWithOptions(shared_ptr<DescribeDashboardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backendBucketRegionId)) {
    query->insert(pair<string, string>("BackendBucketRegionId", *request->backendBucketRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDashboard"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDashboardResponse(callApi(params, req, runtime));
}

DescribeDashboardResponse Alibabacloud_Sgw20180511::Client::describeDashboard(shared_ptr<DescribeDashboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDashboardWithOptions(request, runtime);
}

DescribeExpireCachesResponse Alibabacloud_Sgw20180511::Client::describeExpireCachesWithOptions(shared_ptr<DescribeExpireCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpireCaches"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpireCachesResponse(callApi(params, req, runtime));
}

DescribeExpireCachesResponse Alibabacloud_Sgw20180511::Client::describeExpireCaches(shared_ptr<DescribeExpireCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpireCachesWithOptions(request, runtime);
}

DescribeExpressSyncSharesResponse Alibabacloud_Sgw20180511::Client::describeExpressSyncSharesWithOptions(shared_ptr<DescribeExpressSyncSharesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expressSyncIds)) {
    query->insert(pair<string, string>("ExpressSyncIds", *request->expressSyncIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isExternal)) {
    query->insert(pair<string, bool>("IsExternal", *request->isExternal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpressSyncShares"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpressSyncSharesResponse(callApi(params, req, runtime));
}

DescribeExpressSyncSharesResponse Alibabacloud_Sgw20180511::Client::describeExpressSyncShares(shared_ptr<DescribeExpressSyncSharesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpressSyncSharesWithOptions(request, runtime);
}

DescribeExpressSyncsResponse Alibabacloud_Sgw20180511::Client::describeExpressSyncsWithOptions(shared_ptr<DescribeExpressSyncsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketPrefix)) {
    query->insert(pair<string, string>("BucketPrefix", *request->bucketPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpressSyncs"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpressSyncsResponse(callApi(params, req, runtime));
}

DescribeExpressSyncsResponse Alibabacloud_Sgw20180511::Client::describeExpressSyncs(shared_ptr<DescribeExpressSyncsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpressSyncsWithOptions(request, runtime);
}

DescribeGatewayResponse Alibabacloud_Sgw20180511::Client::describeGatewayWithOptions(shared_ptr<DescribeGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGateway"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayResponse(callApi(params, req, runtime));
}

DescribeGatewayResponse Alibabacloud_Sgw20180511::Client::describeGateway(shared_ptr<DescribeGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayWithOptions(request, runtime);
}

DescribeGatewayADInfoResponse Alibabacloud_Sgw20180511::Client::describeGatewayADInfoWithOptions(shared_ptr<DescribeGatewayADInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayADInfo"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayADInfoResponse(callApi(params, req, runtime));
}

DescribeGatewayADInfoResponse Alibabacloud_Sgw20180511::Client::describeGatewayADInfo(shared_ptr<DescribeGatewayADInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayADInfoWithOptions(request, runtime);
}

DescribeGatewayActionsResponse Alibabacloud_Sgw20180511::Client::describeGatewayActionsWithOptions(shared_ptr<DescribeGatewayActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayActions"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayActionsResponse(callApi(params, req, runtime));
}

DescribeGatewayActionsResponse Alibabacloud_Sgw20180511::Client::describeGatewayActions(shared_ptr<DescribeGatewayActionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayActionsWithOptions(request, runtime);
}

DescribeGatewayAuthInfoResponse Alibabacloud_Sgw20180511::Client::describeGatewayAuthInfoWithOptions(shared_ptr<DescribeGatewayAuthInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayAuthInfo"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayAuthInfoResponse(callApi(params, req, runtime));
}

DescribeGatewayAuthInfoResponse Alibabacloud_Sgw20180511::Client::describeGatewayAuthInfo(shared_ptr<DescribeGatewayAuthInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayAuthInfoWithOptions(request, runtime);
}

DescribeGatewayAutoPlansResponse Alibabacloud_Sgw20180511::Client::describeGatewayAutoPlansWithOptions(shared_ptr<DescribeGatewayAutoPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayAutoPlans"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayAutoPlansResponse(callApi(params, req, runtime));
}

DescribeGatewayAutoPlansResponse Alibabacloud_Sgw20180511::Client::describeGatewayAutoPlans(shared_ptr<DescribeGatewayAutoPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayAutoPlansWithOptions(request, runtime);
}

DescribeGatewayAutoUpgradeConfigurationResponse Alibabacloud_Sgw20180511::Client::describeGatewayAutoUpgradeConfigurationWithOptions(shared_ptr<DescribeGatewayAutoUpgradeConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayAutoUpgradeConfiguration"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayAutoUpgradeConfigurationResponse(callApi(params, req, runtime));
}

DescribeGatewayAutoUpgradeConfigurationResponse Alibabacloud_Sgw20180511::Client::describeGatewayAutoUpgradeConfiguration(shared_ptr<DescribeGatewayAutoUpgradeConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayAutoUpgradeConfigurationWithOptions(request, runtime);
}

DescribeGatewayBlockVolumesResponse Alibabacloud_Sgw20180511::Client::describeGatewayBlockVolumesWithOptions(shared_ptr<DescribeGatewayBlockVolumesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->refresh)) {
    query->insert(pair<string, bool>("Refresh", *request->refresh));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayBlockVolumes"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayBlockVolumesResponse(callApi(params, req, runtime));
}

DescribeGatewayBlockVolumesResponse Alibabacloud_Sgw20180511::Client::describeGatewayBlockVolumes(shared_ptr<DescribeGatewayBlockVolumesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayBlockVolumesWithOptions(request, runtime);
}

DescribeGatewayBucketCachesResponse Alibabacloud_Sgw20180511::Client::describeGatewayBucketCachesWithOptions(shared_ptr<DescribeGatewayBucketCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayBucketCaches"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayBucketCachesResponse(callApi(params, req, runtime));
}

DescribeGatewayBucketCachesResponse Alibabacloud_Sgw20180511::Client::describeGatewayBucketCaches(shared_ptr<DescribeGatewayBucketCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayBucketCachesWithOptions(request, runtime);
}

DescribeGatewayCachesResponse Alibabacloud_Sgw20180511::Client::describeGatewayCachesWithOptions(shared_ptr<DescribeGatewayCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayCaches"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayCachesResponse(callApi(params, req, runtime));
}

DescribeGatewayCachesResponse Alibabacloud_Sgw20180511::Client::describeGatewayCaches(shared_ptr<DescribeGatewayCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayCachesWithOptions(request, runtime);
}

DescribeGatewayCapacityLimitResponse Alibabacloud_Sgw20180511::Client::describeGatewayCapacityLimitWithOptions(shared_ptr<DescribeGatewayCapacityLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sizeInGB)) {
    query->insert(pair<string, long>("SizeInGB", *request->sizeInGB));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayCapacityLimit"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayCapacityLimitResponse(callApi(params, req, runtime));
}

DescribeGatewayCapacityLimitResponse Alibabacloud_Sgw20180511::Client::describeGatewayCapacityLimit(shared_ptr<DescribeGatewayCapacityLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayCapacityLimitWithOptions(request, runtime);
}

DescribeGatewayCategoriesResponse Alibabacloud_Sgw20180511::Client::describeGatewayCategoriesWithOptions(shared_ptr<DescribeGatewayCategoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayLocation)) {
    query->insert(pair<string, string>("GatewayLocation", *request->gatewayLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayCategories"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayCategoriesResponse(callApi(params, req, runtime));
}

DescribeGatewayCategoriesResponse Alibabacloud_Sgw20180511::Client::describeGatewayCategories(shared_ptr<DescribeGatewayCategoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayCategoriesWithOptions(request, runtime);
}

DescribeGatewayClassesResponse Alibabacloud_Sgw20180511::Client::describeGatewayClassesWithOptions(shared_ptr<DescribeGatewayClassesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayClasses"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayClassesResponse(callApi(params, req, runtime));
}

DescribeGatewayClassesResponse Alibabacloud_Sgw20180511::Client::describeGatewayClasses(shared_ptr<DescribeGatewayClassesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayClassesWithOptions(request, runtime);
}

DescribeGatewayCredentialResponse Alibabacloud_Sgw20180511::Client::describeGatewayCredentialWithOptions(shared_ptr<DescribeGatewayCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayCredential"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayCredentialResponse(callApi(params, req, runtime));
}

DescribeGatewayCredentialResponse Alibabacloud_Sgw20180511::Client::describeGatewayCredential(shared_ptr<DescribeGatewayCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayCredentialWithOptions(request, runtime);
}

DescribeGatewayDNSResponse Alibabacloud_Sgw20180511::Client::describeGatewayDNSWithOptions(shared_ptr<DescribeGatewayDNSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayDNS"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayDNSResponse(callApi(params, req, runtime));
}

DescribeGatewayDNSResponse Alibabacloud_Sgw20180511::Client::describeGatewayDNS(shared_ptr<DescribeGatewayDNSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayDNSWithOptions(request, runtime);
}

DescribeGatewayFileSharesResponse Alibabacloud_Sgw20180511::Client::describeGatewayFileSharesWithOptions(shared_ptr<DescribeGatewayFileSharesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->refresh)) {
    query->insert(pair<string, bool>("Refresh", *request->refresh));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayFileShares"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayFileSharesResponse(callApi(params, req, runtime));
}

DescribeGatewayFileSharesResponse Alibabacloud_Sgw20180511::Client::describeGatewayFileShares(shared_ptr<DescribeGatewayFileSharesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayFileSharesWithOptions(request, runtime);
}

DescribeGatewayFileStatusResponse Alibabacloud_Sgw20180511::Client::describeGatewayFileStatusWithOptions(shared_ptr<DescribeGatewayFileStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayFileStatus"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayFileStatusResponse(callApi(params, req, runtime));
}

DescribeGatewayFileStatusResponse Alibabacloud_Sgw20180511::Client::describeGatewayFileStatus(shared_ptr<DescribeGatewayFileStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayFileStatusWithOptions(request, runtime);
}

DescribeGatewayImagesResponse Alibabacloud_Sgw20180511::Client::describeGatewayImagesWithOptions(shared_ptr<DescribeGatewayImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayImages"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayImagesResponse(callApi(params, req, runtime));
}

DescribeGatewayImagesResponse Alibabacloud_Sgw20180511::Client::describeGatewayImages(shared_ptr<DescribeGatewayImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayImagesWithOptions(request, runtime);
}

DescribeGatewayInfoResponse Alibabacloud_Sgw20180511::Client::describeGatewayInfoWithOptions(shared_ptr<DescribeGatewayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayInfo"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayInfoResponse(callApi(params, req, runtime));
}

DescribeGatewayInfoResponse Alibabacloud_Sgw20180511::Client::describeGatewayInfo(shared_ptr<DescribeGatewayInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayInfoWithOptions(request, runtime);
}

DescribeGatewayLDAPInfoResponse Alibabacloud_Sgw20180511::Client::describeGatewayLDAPInfoWithOptions(shared_ptr<DescribeGatewayLDAPInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayLDAPInfo"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayLDAPInfoResponse(callApi(params, req, runtime));
}

DescribeGatewayLDAPInfoResponse Alibabacloud_Sgw20180511::Client::describeGatewayLDAPInfo(shared_ptr<DescribeGatewayLDAPInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayLDAPInfoWithOptions(request, runtime);
}

DescribeGatewayLocationsResponse Alibabacloud_Sgw20180511::Client::describeGatewayLocationsWithOptions(shared_ptr<DescribeGatewayLocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayLocations"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayLocationsResponse(callApi(params, req, runtime));
}

DescribeGatewayLocationsResponse Alibabacloud_Sgw20180511::Client::describeGatewayLocations(shared_ptr<DescribeGatewayLocationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayLocationsWithOptions(request, runtime);
}

DescribeGatewayLoggingResponse Alibabacloud_Sgw20180511::Client::describeGatewayLoggingWithOptions(shared_ptr<DescribeGatewayLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayLogging"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayLoggingResponse(callApi(params, req, runtime));
}

DescribeGatewayLoggingResponse Alibabacloud_Sgw20180511::Client::describeGatewayLogging(shared_ptr<DescribeGatewayLoggingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayLoggingWithOptions(request, runtime);
}

DescribeGatewayLogsResponse Alibabacloud_Sgw20180511::Client::describeGatewayLogsWithOptions(shared_ptr<DescribeGatewayLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logFilePath)) {
    query->insert(pair<string, string>("LogFilePath", *request->logFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayLogs"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayLogsResponse(callApi(params, req, runtime));
}

DescribeGatewayLogsResponse Alibabacloud_Sgw20180511::Client::describeGatewayLogs(shared_ptr<DescribeGatewayLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayLogsWithOptions(request, runtime);
}

DescribeGatewayModificationClassesResponse Alibabacloud_Sgw20180511::Client::describeGatewayModificationClassesWithOptions(shared_ptr<DescribeGatewayModificationClassesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayModificationClasses"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayModificationClassesResponse(callApi(params, req, runtime));
}

DescribeGatewayModificationClassesResponse Alibabacloud_Sgw20180511::Client::describeGatewayModificationClasses(shared_ptr<DescribeGatewayModificationClassesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayModificationClassesWithOptions(request, runtime);
}

DescribeGatewayNFSClientsResponse Alibabacloud_Sgw20180511::Client::describeGatewayNFSClientsWithOptions(shared_ptr<DescribeGatewayNFSClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayNFSClients"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayNFSClientsResponse(callApi(params, req, runtime));
}

DescribeGatewayNFSClientsResponse Alibabacloud_Sgw20180511::Client::describeGatewayNFSClients(shared_ptr<DescribeGatewayNFSClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayNFSClientsWithOptions(request, runtime);
}

DescribeGatewaySMBUsersResponse Alibabacloud_Sgw20180511::Client::describeGatewaySMBUsersWithOptions(shared_ptr<DescribeGatewaySMBUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewaySMBUsers"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewaySMBUsersResponse(callApi(params, req, runtime));
}

DescribeGatewaySMBUsersResponse Alibabacloud_Sgw20180511::Client::describeGatewaySMBUsers(shared_ptr<DescribeGatewaySMBUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewaySMBUsersWithOptions(request, runtime);
}

DescribeGatewayStatisticsResponse Alibabacloud_Sgw20180511::Client::describeGatewayStatisticsWithOptions(shared_ptr<DescribeGatewayStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTimestamp)) {
    query->insert(pair<string, long>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayCategory)) {
    query->insert(pair<string, string>("GatewayCategory", *request->gatewayCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayLocation)) {
    query->insert(pair<string, string>("GatewayLocation", *request->gatewayLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTimestamp)) {
    query->insert(pair<string, long>("StartTimestamp", *request->startTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetAccountId)) {
    query->insert(pair<string, string>("TargetAccountId", *request->targetAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayStatistics"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayStatisticsResponse(callApi(params, req, runtime));
}

DescribeGatewayStatisticsResponse Alibabacloud_Sgw20180511::Client::describeGatewayStatistics(shared_ptr<DescribeGatewayStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayStatisticsWithOptions(request, runtime);
}

DescribeGatewayStockResponse Alibabacloud_Sgw20180511::Client::describeGatewayStockWithOptions(shared_ptr<DescribeGatewayStockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayRegionId)) {
    query->insert(pair<string, string>("GatewayRegionId", *request->gatewayRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayStock"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayStockResponse(callApi(params, req, runtime));
}

DescribeGatewayStockResponse Alibabacloud_Sgw20180511::Client::describeGatewayStock(shared_ptr<DescribeGatewayStockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayStockWithOptions(request, runtime);
}

DescribeGatewayTypesResponse Alibabacloud_Sgw20180511::Client::describeGatewayTypesWithOptions(shared_ptr<DescribeGatewayTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayLocation)) {
    query->insert(pair<string, string>("GatewayLocation", *request->gatewayLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewayTypes"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewayTypesResponse(callApi(params, req, runtime));
}

DescribeGatewayTypesResponse Alibabacloud_Sgw20180511::Client::describeGatewayTypes(shared_ptr<DescribeGatewayTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewayTypesWithOptions(request, runtime);
}

DescribeGatewaysResponse Alibabacloud_Sgw20180511::Client::describeGatewaysWithOptions(shared_ptr<DescribeGatewaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageBundleId)) {
    query->insert(pair<string, string>("StorageBundleId", *request->storageBundleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGateways"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewaysResponse(callApi(params, req, runtime));
}

DescribeGatewaysResponse Alibabacloud_Sgw20180511::Client::describeGateways(shared_ptr<DescribeGatewaysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewaysWithOptions(request, runtime);
}

DescribeGatewaysForCmsResponse Alibabacloud_Sgw20180511::Client::describeGatewaysForCmsWithOptions(shared_ptr<DescribeGatewaysForCmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayRegionId)) {
    query->insert(pair<string, string>("GatewayRegionId", *request->gatewayRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewaysForCms"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewaysForCmsResponse(callApi(params, req, runtime));
}

DescribeGatewaysForCmsResponse Alibabacloud_Sgw20180511::Client::describeGatewaysForCms(shared_ptr<DescribeGatewaysForCmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewaysForCmsWithOptions(request, runtime);
}

DescribeGatewaysTagsResponse Alibabacloud_Sgw20180511::Client::describeGatewaysTagsWithOptions(shared_ptr<DescribeGatewaysTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayIds)) {
    query->insert(pair<string, string>("GatewayIds", *request->gatewayIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageBundleId)) {
    query->insert(pair<string, string>("StorageBundleId", *request->storageBundleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagCategory)) {
    query->insert(pair<string, string>("TagCategory", *request->tagCategory));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGatewaysTags"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewaysTagsResponse(callApi(params, req, runtime));
}

DescribeGatewaysTagsResponse Alibabacloud_Sgw20180511::Client::describeGatewaysTags(shared_ptr<DescribeGatewaysTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewaysTagsWithOptions(request, runtime);
}

DescribeKmsKeyResponse Alibabacloud_Sgw20180511::Client::describeKmsKeyWithOptions(shared_ptr<DescribeKmsKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kmsKey)) {
    query->insert(pair<string, string>("KmsKey", *request->kmsKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeKmsKey"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeKmsKeyResponse(callApi(params, req, runtime));
}

DescribeKmsKeyResponse Alibabacloud_Sgw20180511::Client::describeKmsKey(shared_ptr<DescribeKmsKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeKmsKeyWithOptions(request, runtime);
}

DescribeMqttConfigResponse Alibabacloud_Sgw20180511::Client::describeMqttConfigWithOptions(shared_ptr<DescribeMqttConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMqttConfig"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMqttConfigResponse(callApi(params, req, runtime));
}

DescribeMqttConfigResponse Alibabacloud_Sgw20180511::Client::describeMqttConfig(shared_ptr<DescribeMqttConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMqttConfigWithOptions(request, runtime);
}

DescribeOssBucketInfoResponse Alibabacloud_Sgw20180511::Client::describeOssBucketInfoWithOptions(shared_ptr<DescribeOssBucketInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketEndpoint)) {
    query->insert(pair<string, string>("BucketEndpoint", *request->bucketEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOssBucketInfo"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOssBucketInfoResponse(callApi(params, req, runtime));
}

DescribeOssBucketInfoResponse Alibabacloud_Sgw20180511::Client::describeOssBucketInfo(shared_ptr<DescribeOssBucketInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssBucketInfoWithOptions(request, runtime);
}

DescribeOssBucketsResponse Alibabacloud_Sgw20180511::Client::describeOssBucketsWithOptions(shared_ptr<DescribeOssBucketsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketEndpoint)) {
    query->insert(pair<string, string>("BucketEndpoint", *request->bucketEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOssBuckets"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOssBucketsResponse(callApi(params, req, runtime));
}

DescribeOssBucketsResponse Alibabacloud_Sgw20180511::Client::describeOssBuckets(shared_ptr<DescribeOssBucketsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssBucketsWithOptions(request, runtime);
}

DescribePayAsYouGoPriceResponse Alibabacloud_Sgw20180511::Client::describePayAsYouGoPriceWithOptions(shared_ptr<DescribePayAsYouGoPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayClass)) {
    query->insert(pair<string, string>("GatewayClass", *request->gatewayClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePayAsYouGoPrice"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePayAsYouGoPriceResponse(callApi(params, req, runtime));
}

DescribePayAsYouGoPriceResponse Alibabacloud_Sgw20180511::Client::describePayAsYouGoPrice(shared_ptr<DescribePayAsYouGoPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePayAsYouGoPriceWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Sgw20180511::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Sgw20180511::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeSharesBucketInfoForExpressSyncResponse Alibabacloud_Sgw20180511::Client::describeSharesBucketInfoForExpressSyncWithOptions(shared_ptr<DescribeSharesBucketInfoForExpressSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketRegion)) {
    query->insert(pair<string, string>("BucketRegion", *request->bucketRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSharesBucketInfoForExpressSync"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSharesBucketInfoForExpressSyncResponse(callApi(params, req, runtime));
}

DescribeSharesBucketInfoForExpressSyncResponse Alibabacloud_Sgw20180511::Client::describeSharesBucketInfoForExpressSync(shared_ptr<DescribeSharesBucketInfoForExpressSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSharesBucketInfoForExpressSyncWithOptions(request, runtime);
}

DescribeStorageBundleResponse Alibabacloud_Sgw20180511::Client::describeStorageBundleWithOptions(shared_ptr<DescribeStorageBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageBundleId)) {
    query->insert(pair<string, string>("StorageBundleId", *request->storageBundleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStorageBundle"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeStorageBundleResponse(callApi(params, req, runtime));
}

DescribeStorageBundleResponse Alibabacloud_Sgw20180511::Client::describeStorageBundle(shared_ptr<DescribeStorageBundleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStorageBundleWithOptions(request, runtime);
}

DescribeStorageBundlesResponse Alibabacloud_Sgw20180511::Client::describeStorageBundlesWithOptions(shared_ptr<DescribeStorageBundlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backendBucketRegionId)) {
    query->insert(pair<string, string>("BackendBucketRegionId", *request->backendBucketRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStorageBundles"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeStorageBundlesResponse(callApi(params, req, runtime));
}

DescribeStorageBundlesResponse Alibabacloud_Sgw20180511::Client::describeStorageBundles(shared_ptr<DescribeStorageBundlesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStorageBundlesWithOptions(request, runtime);
}

DescribeSubscriptionPriceResponse Alibabacloud_Sgw20180511::Client::describeSubscriptionPriceWithOptions(shared_ptr<DescribeSubscriptionPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cacheCloudEfficiencySize)) {
    query->insert(pair<string, long>("CacheCloudEfficiencySize", *request->cacheCloudEfficiencySize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cacheESSDPl1Size)) {
    query->insert(pair<string, long>("CacheESSDPl1Size", *request->cacheESSDPl1Size));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cacheSSDSize)) {
    query->insert(pair<string, long>("CacheSSDSize", *request->cacheSSDSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayClass)) {
    query->insert(pair<string, string>("GatewayClass", *request->gatewayClass));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->periodQuantity)) {
    query->insert(pair<string, long>("PeriodQuantity", *request->periodQuantity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSubscriptionPrice"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSubscriptionPriceResponse(callApi(params, req, runtime));
}

DescribeSubscriptionPriceResponse Alibabacloud_Sgw20180511::Client::describeSubscriptionPrice(shared_ptr<DescribeSubscriptionPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSubscriptionPriceWithOptions(request, runtime);
}

DescribeTasksResponse Alibabacloud_Sgw20180511::Client::describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTasks"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTasksResponse(callApi(params, req, runtime));
}

DescribeTasksResponse Alibabacloud_Sgw20180511::Client::describeTasks(shared_ptr<DescribeTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTasksWithOptions(request, runtime);
}

DescribeUserBusinessStatusResponse Alibabacloud_Sgw20180511::Client::describeUserBusinessStatusWithOptions(shared_ptr<DescribeUserBusinessStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserBusinessStatus"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserBusinessStatusResponse(callApi(params, req, runtime));
}

DescribeUserBusinessStatusResponse Alibabacloud_Sgw20180511::Client::describeUserBusinessStatus(shared_ptr<DescribeUserBusinessStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserBusinessStatusWithOptions(request, runtime);
}

DescribeVSwitchesResponse Alibabacloud_Sgw20180511::Client::describeVSwitchesWithOptions(shared_ptr<DescribeVSwitchesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageBundleId)) {
    query->insert(pair<string, string>("StorageBundleId", *request->storageBundleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVSwitches"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVSwitchesResponse(callApi(params, req, runtime));
}

DescribeVSwitchesResponse Alibabacloud_Sgw20180511::Client::describeVSwitches(shared_ptr<DescribeVSwitchesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVSwitchesWithOptions(request, runtime);
}

DescribeVpcsResponse Alibabacloud_Sgw20180511::Client::describeVpcsWithOptions(shared_ptr<DescribeVpcsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageBundleId)) {
    query->insert(pair<string, string>("StorageBundleId", *request->storageBundleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcs"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcsResponse(callApi(params, req, runtime));
}

DescribeVpcsResponse Alibabacloud_Sgw20180511::Client::describeVpcs(shared_ptr<DescribeVpcsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcsWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_Sgw20180511::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeZones"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeZonesResponse(callApi(params, req, runtime));
}

DescribeZonesResponse Alibabacloud_Sgw20180511::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

DisableGatewayLoggingResponse Alibabacloud_Sgw20180511::Client::disableGatewayLoggingWithOptions(shared_ptr<DisableGatewayLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableGatewayLogging"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableGatewayLoggingResponse(callApi(params, req, runtime));
}

DisableGatewayLoggingResponse Alibabacloud_Sgw20180511::Client::disableGatewayLogging(shared_ptr<DisableGatewayLoggingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableGatewayLoggingWithOptions(request, runtime);
}

DisableGatewayNFSVersionResponse Alibabacloud_Sgw20180511::Client::disableGatewayNFSVersionWithOptions(shared_ptr<DisableGatewayNFSVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->NFSVersion)) {
    query->insert(pair<string, string>("NFSVersion", *request->NFSVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableGatewayNFSVersion"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableGatewayNFSVersionResponse(callApi(params, req, runtime));
}

DisableGatewayNFSVersionResponse Alibabacloud_Sgw20180511::Client::disableGatewayNFSVersion(shared_ptr<DisableGatewayNFSVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableGatewayNFSVersionWithOptions(request, runtime);
}

EnableGatewayIpv6Response Alibabacloud_Sgw20180511::Client::enableGatewayIpv6WithOptions(shared_ptr<EnableGatewayIpv6Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableGatewayIpv6"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableGatewayIpv6Response(callApi(params, req, runtime));
}

EnableGatewayIpv6Response Alibabacloud_Sgw20180511::Client::enableGatewayIpv6(shared_ptr<EnableGatewayIpv6Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableGatewayIpv6WithOptions(request, runtime);
}

EnableGatewayLoggingResponse Alibabacloud_Sgw20180511::Client::enableGatewayLoggingWithOptions(shared_ptr<EnableGatewayLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableGatewayLogging"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableGatewayLoggingResponse(callApi(params, req, runtime));
}

EnableGatewayLoggingResponse Alibabacloud_Sgw20180511::Client::enableGatewayLogging(shared_ptr<EnableGatewayLoggingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableGatewayLoggingWithOptions(request, runtime);
}

ExpandCacheDiskResponse Alibabacloud_Sgw20180511::Client::expandCacheDiskWithOptions(shared_ptr<ExpandCacheDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localFilePath)) {
    query->insert(pair<string, string>("LocalFilePath", *request->localFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->newSizeInGB)) {
    query->insert(pair<string, long>("NewSizeInGB", *request->newSizeInGB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExpandCacheDisk"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExpandCacheDiskResponse(callApi(params, req, runtime));
}

ExpandCacheDiskResponse Alibabacloud_Sgw20180511::Client::expandCacheDisk(shared_ptr<ExpandCacheDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return expandCacheDiskWithOptions(request, runtime);
}

ExpandGatewayFileShareResponse Alibabacloud_Sgw20180511::Client::expandGatewayFileShareWithOptions(shared_ptr<ExpandGatewayFileShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExpandGatewayFileShare"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExpandGatewayFileShareResponse(callApi(params, req, runtime));
}

ExpandGatewayFileShareResponse Alibabacloud_Sgw20180511::Client::expandGatewayFileShare(shared_ptr<ExpandGatewayFileShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return expandGatewayFileShareWithOptions(request, runtime);
}

ExpandGatewayNetworkBandwidthResponse Alibabacloud_Sgw20180511::Client::expandGatewayNetworkBandwidthWithOptions(shared_ptr<ExpandGatewayNetworkBandwidthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->newNetworkBandwidth)) {
    query->insert(pair<string, long>("NewNetworkBandwidth", *request->newNetworkBandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExpandGatewayNetworkBandwidth"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExpandGatewayNetworkBandwidthResponse(callApi(params, req, runtime));
}

ExpandGatewayNetworkBandwidthResponse Alibabacloud_Sgw20180511::Client::expandGatewayNetworkBandwidth(shared_ptr<ExpandGatewayNetworkBandwidthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return expandGatewayNetworkBandwidthWithOptions(request, runtime);
}

GenerateGatewayTokenResponse Alibabacloud_Sgw20180511::Client::generateGatewayTokenWithOptions(shared_ptr<GenerateGatewayTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateGatewayToken"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateGatewayTokenResponse(callApi(params, req, runtime));
}

GenerateGatewayTokenResponse Alibabacloud_Sgw20180511::Client::generateGatewayToken(shared_ptr<GenerateGatewayTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateGatewayTokenWithOptions(request, runtime);
}

GenerateMqttTokenResponse Alibabacloud_Sgw20180511::Client::generateMqttTokenWithOptions(shared_ptr<GenerateMqttTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUUID)) {
    query->insert(pair<string, string>("ClientUUID", *request->clientUUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateMqttToken"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateMqttTokenResponse(callApi(params, req, runtime));
}

GenerateMqttTokenResponse Alibabacloud_Sgw20180511::Client::generateMqttToken(shared_ptr<GenerateMqttTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateMqttTokenWithOptions(request, runtime);
}

GenerateStsTokenResponse Alibabacloud_Sgw20180511::Client::generateStsTokenWithOptions(shared_ptr<GenerateStsTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->expireInSeconds)) {
    query->insert(pair<string, long>("ExpireInSeconds", *request->expireInSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenType)) {
    query->insert(pair<string, string>("TokenType", *request->tokenType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateStsToken"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateStsTokenResponse(callApi(params, req, runtime));
}

GenerateStsTokenResponse Alibabacloud_Sgw20180511::Client::generateStsToken(shared_ptr<GenerateStsTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateStsTokenWithOptions(request, runtime);
}

HandleGatewayAutoPlanResponse Alibabacloud_Sgw20180511::Client::handleGatewayAutoPlanWithOptions(shared_ptr<HandleGatewayAutoPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->cancel)) {
    query->insert(pair<string, bool>("Cancel", *request->cancel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->delayHours)) {
    query->insert(pair<string, long>("DelayHours", *request->delayHours));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HandleGatewayAutoPlan"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HandleGatewayAutoPlanResponse(callApi(params, req, runtime));
}

HandleGatewayAutoPlanResponse Alibabacloud_Sgw20180511::Client::handleGatewayAutoPlan(shared_ptr<HandleGatewayAutoPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return handleGatewayAutoPlanWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Sgw20180511::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Sgw20180511::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifyGatewayResponse Alibabacloud_Sgw20180511::Client::modifyGatewayWithOptions(shared_ptr<ModifyGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyGateway"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyGatewayResponse(callApi(params, req, runtime));
}

ModifyGatewayResponse Alibabacloud_Sgw20180511::Client::modifyGateway(shared_ptr<ModifyGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyGatewayWithOptions(request, runtime);
}

ModifyGatewayBlockVolumeResponse Alibabacloud_Sgw20180511::Client::modifyGatewayBlockVolumeWithOptions(shared_ptr<ModifyGatewayBlockVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheConfig)) {
    query->insert(pair<string, string>("CacheConfig", *request->cacheConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyGatewayBlockVolume"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyGatewayBlockVolumeResponse(callApi(params, req, runtime));
}

ModifyGatewayBlockVolumeResponse Alibabacloud_Sgw20180511::Client::modifyGatewayBlockVolume(shared_ptr<ModifyGatewayBlockVolumeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyGatewayBlockVolumeWithOptions(request, runtime);
}

ModifyGatewayClassResponse Alibabacloud_Sgw20180511::Client::modifyGatewayClassWithOptions(shared_ptr<ModifyGatewayClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayClass)) {
    query->insert(pair<string, string>("GatewayClass", *request->gatewayClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyGatewayClass"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyGatewayClassResponse(callApi(params, req, runtime));
}

ModifyGatewayClassResponse Alibabacloud_Sgw20180511::Client::modifyGatewayClass(shared_ptr<ModifyGatewayClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyGatewayClassWithOptions(request, runtime);
}

ModifyGatewayFileShareResponse Alibabacloud_Sgw20180511::Client::modifyGatewayFileShareWithOptions(shared_ptr<ModifyGatewayFileShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheConfig)) {
    query->insert(pair<string, string>("CacheConfig", *request->cacheConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyGatewayFileShare"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyGatewayFileShareResponse(callApi(params, req, runtime));
}

ModifyGatewayFileShareResponse Alibabacloud_Sgw20180511::Client::modifyGatewayFileShare(shared_ptr<ModifyGatewayFileShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyGatewayFileShareWithOptions(request, runtime);
}

ModifyGatewayFileShareWatermarkResponse Alibabacloud_Sgw20180511::Client::modifyGatewayFileShareWatermarkWithOptions(shared_ptr<ModifyGatewayFileShareWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->watermark)) {
    query->insert(pair<string, long>("Watermark", *request->watermark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyGatewayFileShareWatermark"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyGatewayFileShareWatermarkResponse(callApi(params, req, runtime));
}

ModifyGatewayFileShareWatermarkResponse Alibabacloud_Sgw20180511::Client::modifyGatewayFileShareWatermark(shared_ptr<ModifyGatewayFileShareWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyGatewayFileShareWatermarkWithOptions(request, runtime);
}

ModifyStorageBundleResponse Alibabacloud_Sgw20180511::Client::modifyStorageBundleWithOptions(shared_ptr<ModifyStorageBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageBundleId)) {
    query->insert(pair<string, string>("StorageBundleId", *request->storageBundleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyStorageBundle"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyStorageBundleResponse(callApi(params, req, runtime));
}

ModifyStorageBundleResponse Alibabacloud_Sgw20180511::Client::modifyStorageBundle(shared_ptr<ModifyStorageBundleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyStorageBundleWithOptions(request, runtime);
}

OpenSgwServiceResponse Alibabacloud_Sgw20180511::Client::openSgwServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenSgwService"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenSgwServiceResponse(callApi(params, req, runtime));
}

OpenSgwServiceResponse Alibabacloud_Sgw20180511::Client::openSgwService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openSgwServiceWithOptions(runtime);
}

OperateGatewayResponse Alibabacloud_Sgw20180511::Client::operateGatewayWithOptions(shared_ptr<OperateGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateAction)) {
    query->insert(pair<string, string>("OperateAction", *request->operateAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OperateGateway"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OperateGatewayResponse(callApi(params, req, runtime));
}

OperateGatewayResponse Alibabacloud_Sgw20180511::Client::operateGateway(shared_ptr<OperateGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateGatewayWithOptions(request, runtime);
}

ReleaseServiceResponse Alibabacloud_Sgw20180511::Client::releaseServiceWithOptions(shared_ptr<ReleaseServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseService"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseServiceResponse(callApi(params, req, runtime));
}

ReleaseServiceResponse Alibabacloud_Sgw20180511::Client::releaseService(shared_ptr<ReleaseServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseServiceWithOptions(request, runtime);
}

RemoveSharesFromExpressSyncResponse Alibabacloud_Sgw20180511::Client::removeSharesFromExpressSyncWithOptions(shared_ptr<RemoveSharesFromExpressSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expressSyncId)) {
    query->insert(pair<string, string>("ExpressSyncId", *request->expressSyncId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayShares)) {
    query->insert(pair<string, string>("GatewayShares", *request->gatewayShares));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveSharesFromExpressSync"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveSharesFromExpressSyncResponse(callApi(params, req, runtime));
}

RemoveSharesFromExpressSyncResponse Alibabacloud_Sgw20180511::Client::removeSharesFromExpressSync(shared_ptr<RemoveSharesFromExpressSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeSharesFromExpressSyncWithOptions(request, runtime);
}

RemoveTagsFromGatewayResponse Alibabacloud_Sgw20180511::Client::removeTagsFromGatewayWithOptions(shared_ptr<RemoveTagsFromGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveTagsFromGateway"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveTagsFromGatewayResponse(callApi(params, req, runtime));
}

RemoveTagsFromGatewayResponse Alibabacloud_Sgw20180511::Client::removeTagsFromGateway(shared_ptr<RemoveTagsFromGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTagsFromGatewayWithOptions(request, runtime);
}

ReportBlockVolumesResponse Alibabacloud_Sgw20180511::Client::reportBlockVolumesWithOptions(shared_ptr<ReportBlockVolumesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUUID)) {
    query->insert(pair<string, string>("ClientUUID", *request->clientUUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->info)) {
    query->insert(pair<string, string>("Info", *request->info));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportBlockVolumes"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportBlockVolumesResponse(callApi(params, req, runtime));
}

ReportBlockVolumesResponse Alibabacloud_Sgw20180511::Client::reportBlockVolumes(shared_ptr<ReportBlockVolumesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportBlockVolumesWithOptions(request, runtime);
}

ReportFileSharesResponse Alibabacloud_Sgw20180511::Client::reportFileSharesWithOptions(shared_ptr<ReportFileSharesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUUID)) {
    query->insert(pair<string, string>("ClientUUID", *request->clientUUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->info)) {
    query->insert(pair<string, string>("Info", *request->info));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportFileShares"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportFileSharesResponse(callApi(params, req, runtime));
}

ReportFileSharesResponse Alibabacloud_Sgw20180511::Client::reportFileShares(shared_ptr<ReportFileSharesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportFileSharesWithOptions(request, runtime);
}

ReportGatewayInfoResponse Alibabacloud_Sgw20180511::Client::reportGatewayInfoWithOptions(shared_ptr<ReportGatewayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUUID)) {
    query->insert(pair<string, string>("ClientUUID", *request->clientUUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayStatus)) {
    query->insert(pair<string, string>("GatewayStatus", *request->gatewayStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->info)) {
    query->insert(pair<string, string>("Info", *request->info));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->time)) {
    query->insert(pair<string, long>("Time", *request->time));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportGatewayInfo"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportGatewayInfoResponse(callApi(params, req, runtime));
}

ReportGatewayInfoResponse Alibabacloud_Sgw20180511::Client::reportGatewayInfo(shared_ptr<ReportGatewayInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportGatewayInfoWithOptions(request, runtime);
}

ReportGatewayUsageResponse Alibabacloud_Sgw20180511::Client::reportGatewayUsageWithOptions(shared_ptr<ReportGatewayUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUUID)) {
    query->insert(pair<string, string>("ClientUUID", *request->clientUUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->usage)) {
    query->insert(pair<string, string>("Usage", *request->usage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportGatewayUsage"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportGatewayUsageResponse(callApi(params, req, runtime));
}

ReportGatewayUsageResponse Alibabacloud_Sgw20180511::Client::reportGatewayUsage(shared_ptr<ReportGatewayUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportGatewayUsageWithOptions(request, runtime);
}

ResetGatewayPasswordResponse Alibabacloud_Sgw20180511::Client::resetGatewayPasswordWithOptions(shared_ptr<ResetGatewayPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetGatewayPassword"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetGatewayPasswordResponse(callApi(params, req, runtime));
}

ResetGatewayPasswordResponse Alibabacloud_Sgw20180511::Client::resetGatewayPassword(shared_ptr<ResetGatewayPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetGatewayPasswordWithOptions(request, runtime);
}

RestartFileSharesResponse Alibabacloud_Sgw20180511::Client::restartFileSharesWithOptions(shared_ptr<RestartFileSharesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareProtocol)) {
    query->insert(pair<string, string>("ShareProtocol", *request->shareProtocol));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartFileShares"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartFileSharesResponse(callApi(params, req, runtime));
}

RestartFileSharesResponse Alibabacloud_Sgw20180511::Client::restartFileShares(shared_ptr<RestartFileSharesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartFileSharesWithOptions(request, runtime);
}

SetGatewayADInfoResponse Alibabacloud_Sgw20180511::Client::setGatewayADInfoWithOptions(shared_ptr<SetGatewayADInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEnabled)) {
    query->insert(pair<string, bool>("IsEnabled", *request->isEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverIp)) {
    query->insert(pair<string, string>("ServerIp", *request->serverIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetGatewayADInfo"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetGatewayADInfoResponse(callApi(params, req, runtime));
}

SetGatewayADInfoResponse Alibabacloud_Sgw20180511::Client::setGatewayADInfo(shared_ptr<SetGatewayADInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGatewayADInfoWithOptions(request, runtime);
}

SetGatewayAutoUpgradeConfigurationResponse Alibabacloud_Sgw20180511::Client::setGatewayAutoUpgradeConfigurationWithOptions(shared_ptr<SetGatewayAutoUpgradeConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->autoUpgradeEndHour)) {
    query->insert(pair<string, long>("AutoUpgradeEndHour", *request->autoUpgradeEndHour));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoUpgradeStartHour)) {
    query->insert(pair<string, long>("AutoUpgradeStartHour", *request->autoUpgradeStartHour));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAutoUpgrade)) {
    query->insert(pair<string, bool>("IsAutoUpgrade", *request->isAutoUpgrade));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetGatewayAutoUpgradeConfiguration"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetGatewayAutoUpgradeConfigurationResponse(callApi(params, req, runtime));
}

SetGatewayAutoUpgradeConfigurationResponse Alibabacloud_Sgw20180511::Client::setGatewayAutoUpgradeConfiguration(shared_ptr<SetGatewayAutoUpgradeConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGatewayAutoUpgradeConfigurationWithOptions(request, runtime);
}

SetGatewayDNSResponse Alibabacloud_Sgw20180511::Client::setGatewayDNSWithOptions(shared_ptr<SetGatewayDNSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dnsServer)) {
    query->insert(pair<string, string>("DnsServer", *request->dnsServer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetGatewayDNS"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetGatewayDNSResponse(callApi(params, req, runtime));
}

SetGatewayDNSResponse Alibabacloud_Sgw20180511::Client::setGatewayDNS(shared_ptr<SetGatewayDNSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGatewayDNSWithOptions(request, runtime);
}

SetGatewayLDAPInfoResponse Alibabacloud_Sgw20180511::Client::setGatewayLDAPInfoWithOptions(shared_ptr<SetGatewayLDAPInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baseDN)) {
    query->insert(pair<string, string>("BaseDN", *request->baseDN));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEnabled)) {
    query->insert(pair<string, bool>("IsEnabled", *request->isEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isTls)) {
    query->insert(pair<string, bool>("IsTls", *request->isTls));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootDN)) {
    query->insert(pair<string, string>("RootDN", *request->rootDN));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverIp)) {
    query->insert(pair<string, string>("ServerIp", *request->serverIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetGatewayLDAPInfo"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetGatewayLDAPInfoResponse(callApi(params, req, runtime));
}

SetGatewayLDAPInfoResponse Alibabacloud_Sgw20180511::Client::setGatewayLDAPInfo(shared_ptr<SetGatewayLDAPInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGatewayLDAPInfoWithOptions(request, runtime);
}

SwitchCSGClientsReverseSyncConfigurationResponse Alibabacloud_Sgw20180511::Client::switchCSGClientsReverseSyncConfigurationWithOptions(shared_ptr<SwitchCSGClientsReverseSyncConfigurationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SwitchCSGClientsReverseSyncConfigurationShrinkRequest> request = make_shared<SwitchCSGClientsReverseSyncConfigurationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->clientIds)) {
    request->clientIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clientIds, make_shared<string>("ClientIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIdsShrink)) {
    query->insert(pair<string, string>("ClientIds", *request->clientIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientRegionId)) {
    query->insert(pair<string, string>("ClientRegionId", *request->clientRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isReverseSync)) {
    query->insert(pair<string, bool>("IsReverseSync", *request->isReverseSync));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reverseSyncInternalSecond)) {
    query->insert(pair<string, long>("ReverseSyncInternalSecond", *request->reverseSyncInternalSecond));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchCSGClientsReverseSyncConfiguration"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchCSGClientsReverseSyncConfigurationResponse(callApi(params, req, runtime));
}

SwitchCSGClientsReverseSyncConfigurationResponse Alibabacloud_Sgw20180511::Client::switchCSGClientsReverseSyncConfiguration(shared_ptr<SwitchCSGClientsReverseSyncConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchCSGClientsReverseSyncConfigurationWithOptions(request, runtime);
}

SwitchGatewayExpirationPolicyResponse Alibabacloud_Sgw20180511::Client::switchGatewayExpirationPolicyWithOptions(shared_ptr<SwitchGatewayExpirationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchGatewayExpirationPolicy"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchGatewayExpirationPolicyResponse(callApi(params, req, runtime));
}

SwitchGatewayExpirationPolicyResponse Alibabacloud_Sgw20180511::Client::switchGatewayExpirationPolicy(shared_ptr<SwitchGatewayExpirationPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchGatewayExpirationPolicyWithOptions(request, runtime);
}

SwitchToSubscriptionResponse Alibabacloud_Sgw20180511::Client::switchToSubscriptionWithOptions(shared_ptr<SwitchToSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchToSubscription"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchToSubscriptionResponse(callApi(params, req, runtime));
}

SwitchToSubscriptionResponse Alibabacloud_Sgw20180511::Client::switchToSubscription(shared_ptr<SwitchToSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchToSubscriptionWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Sgw20180511::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2018-05-11"))},
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

TagResourcesResponse Alibabacloud_Sgw20180511::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

TriggerGatewayRemoteSyncResponse Alibabacloud_Sgw20180511::Client::triggerGatewayRemoteSyncWithOptions(shared_ptr<TriggerGatewayRemoteSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TriggerGatewayRemoteSync"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TriggerGatewayRemoteSyncResponse(callApi(params, req, runtime));
}

TriggerGatewayRemoteSyncResponse Alibabacloud_Sgw20180511::Client::triggerGatewayRemoteSync(shared_ptr<TriggerGatewayRemoteSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return triggerGatewayRemoteSyncWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Sgw20180511::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2018-05-11"))},
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

UntagResourcesResponse Alibabacloud_Sgw20180511::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateGatewayBlockVolumeResponse Alibabacloud_Sgw20180511::Client::updateGatewayBlockVolumeWithOptions(shared_ptr<UpdateGatewayBlockVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->chapEnabled)) {
    query->insert(pair<string, bool>("ChapEnabled", *request->chapEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chapInPassword)) {
    query->insert(pair<string, string>("ChapInPassword", *request->chapInPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chapInUser)) {
    query->insert(pair<string, string>("ChapInUser", *request->chapInUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayBlockVolume"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayBlockVolumeResponse(callApi(params, req, runtime));
}

UpdateGatewayBlockVolumeResponse Alibabacloud_Sgw20180511::Client::updateGatewayBlockVolume(shared_ptr<UpdateGatewayBlockVolumeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayBlockVolumeWithOptions(request, runtime);
}

UpdateGatewayFileShareResponse Alibabacloud_Sgw20180511::Client::updateGatewayFileShareWithOptions(shared_ptr<UpdateGatewayFileShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->accessBasedEnumeration)) {
    query->insert(pair<string, bool>("AccessBasedEnumeration", *request->accessBasedEnumeration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backendLimit)) {
    query->insert(pair<string, long>("BackendLimit", *request->backendLimit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->browsable)) {
    query->insert(pair<string, bool>("Browsable", *request->browsable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->bypassCacheRead)) {
    query->insert(pair<string, bool>("BypassCacheRead", *request->bypassCacheRead));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheMode)) {
    query->insert(pair<string, string>("CacheMode", *request->cacheMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSideCmk)) {
    query->insert(pair<string, string>("ClientSideCmk", *request->clientSideCmk));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->clientSideEncryption)) {
    query->insert(pair<string, bool>("ClientSideEncryption", *request->clientSideEncryption));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->directIO)) {
    query->insert(pair<string, bool>("DirectIO", *request->directIO));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->downloadLimit)) {
    query->insert(pair<string, long>("DownloadLimit", *request->downloadLimit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fastReclaim)) {
    query->insert(pair<string, bool>("FastReclaim", *request->fastReclaim));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->frontendLimit)) {
    query->insert(pair<string, long>("FrontendLimit", *request->frontendLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreDelete)) {
    query->insert(pair<string, bool>("IgnoreDelete", *request->ignoreDelete));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->inPlace)) {
    query->insert(pair<string, bool>("InPlace", *request->inPlace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->kmsRotatePeriod)) {
    query->insert(pair<string, long>("KmsRotatePeriod", *request->kmsRotatePeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lagPeriod)) {
    query->insert(pair<string, long>("LagPeriod", *request->lagPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->nfsV4Optimization)) {
    query->insert(pair<string, bool>("NfsV4Optimization", *request->nfsV4Optimization));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pollingInterval)) {
    query->insert(pair<string, long>("PollingInterval", *request->pollingInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readOnlyClientList)) {
    query->insert(pair<string, string>("ReadOnlyClientList", *request->readOnlyClientList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readOnlyUserList)) {
    query->insert(pair<string, string>("ReadOnlyUserList", *request->readOnlyUserList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readWriteClientList)) {
    query->insert(pair<string, string>("ReadWriteClientList", *request->readWriteClientList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readWriteUserList)) {
    query->insert(pair<string, string>("ReadWriteUserList", *request->readWriteUserList));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->remoteSync)) {
    query->insert(pair<string, bool>("RemoteSync", *request->remoteSync));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->remoteSyncDownload)) {
    query->insert(pair<string, bool>("RemoteSyncDownload", *request->remoteSyncDownload));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverSideCmk)) {
    query->insert(pair<string, string>("ServerSideCmk", *request->serverSideCmk));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->serverSideEncryption)) {
    query->insert(pair<string, bool>("ServerSideEncryption", *request->serverSideEncryption));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->squash)) {
    query->insert(pair<string, string>("Squash", *request->squash));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->transferAcceleration)) {
    query->insert(pair<string, bool>("TransferAcceleration", *request->transferAcceleration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->windowsAcl)) {
    query->insert(pair<string, bool>("WindowsAcl", *request->windowsAcl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayFileShare"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayFileShareResponse(callApi(params, req, runtime));
}

UpdateGatewayFileShareResponse Alibabacloud_Sgw20180511::Client::updateGatewayFileShare(shared_ptr<UpdateGatewayFileShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayFileShareWithOptions(request, runtime);
}

UpgradeGatewayResponse Alibabacloud_Sgw20180511::Client::upgradeGatewayWithOptions(shared_ptr<UpgradeGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeGateway"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeGatewayResponse(callApi(params, req, runtime));
}

UpgradeGatewayResponse Alibabacloud_Sgw20180511::Client::upgradeGateway(shared_ptr<UpgradeGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeGatewayWithOptions(request, runtime);
}

UploadCSGClientLogResponse Alibabacloud_Sgw20180511::Client::uploadCSGClientLogWithOptions(shared_ptr<UploadCSGClientLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientRegionId)) {
    query->insert(pair<string, string>("ClientRegionId", *request->clientRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadCSGClientLog"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadCSGClientLogResponse(callApi(params, req, runtime));
}

UploadCSGClientLogResponse Alibabacloud_Sgw20180511::Client::uploadCSGClientLog(shared_ptr<UploadCSGClientLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadCSGClientLogWithOptions(request, runtime);
}

UploadGatewayLogResponse Alibabacloud_Sgw20180511::Client::uploadGatewayLogWithOptions(shared_ptr<UploadGatewayLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadGatewayLog"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadGatewayLogResponse(callApi(params, req, runtime));
}

UploadGatewayLogResponse Alibabacloud_Sgw20180511::Client::uploadGatewayLog(shared_ptr<UploadGatewayLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadGatewayLogWithOptions(request, runtime);
}

ValidateExpressSyncConfigResponse Alibabacloud_Sgw20180511::Client::validateExpressSyncConfigWithOptions(shared_ptr<ValidateExpressSyncConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketPrefix)) {
    query->insert(pair<string, string>("BucketPrefix", *request->bucketPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketRegion)) {
    query->insert(pair<string, string>("BucketRegion", *request->bucketRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateExpressSyncConfig"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateExpressSyncConfigResponse(callApi(params, req, runtime));
}

ValidateExpressSyncConfigResponse Alibabacloud_Sgw20180511::Client::validateExpressSyncConfig(shared_ptr<ValidateExpressSyncConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateExpressSyncConfigWithOptions(request, runtime);
}

ValidateGatewayNameResponse Alibabacloud_Sgw20180511::Client::validateGatewayNameWithOptions(shared_ptr<ValidateGatewayNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageBundleId)) {
    query->insert(pair<string, string>("StorageBundleId", *request->storageBundleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateGatewayName"))},
    {"version", boost::any(string("2018-05-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateGatewayNameResponse(callApi(params, req, runtime));
}

ValidateGatewayNameResponse Alibabacloud_Sgw20180511::Client::validateGatewayName(shared_ptr<ValidateGatewayNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateGatewayNameWithOptions(request, runtime);
}

