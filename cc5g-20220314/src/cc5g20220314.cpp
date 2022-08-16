// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cc5g20220314.hpp>
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

using namespace Alibabacloud_CC5G20220314;

Alibabacloud_CC5G20220314::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cc5g"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CC5G20220314::Client::getEndpoint(shared_ptr<string> productId,
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

AddDNSAuthorizationRuleResponse Alibabacloud_CC5G20220314::Client::addDNSAuthorizationRuleWithOptions(shared_ptr<AddDNSAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationIp)) {
    query->insert(pair<string, string>("DestinationIp", *request->destinationIp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceDNSIp)) {
    query->insert(pair<string, string>("SourceDNSIp", *request->sourceDNSIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDNSAuthorizationRule"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDNSAuthorizationRuleResponse(callApi(params, req, runtime));
}

AddDNSAuthorizationRuleResponse Alibabacloud_CC5G20220314::Client::addDNSAuthorizationRule(shared_ptr<AddDNSAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDNSAuthorizationRuleWithOptions(request, runtime);
}

AttachVpcToNetLinkResponse Alibabacloud_CC5G20220314::Client::attachVpcToNetLinkWithOptions(shared_ptr<AttachVpcToNetLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netLinkId)) {
    query->insert(pair<string, string>("NetLinkId", *request->netLinkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vSwitches)) {
    query->insert(pair<string, vector<string>>("VSwitches", *request->vSwitches));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachVpcToNetLink"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachVpcToNetLinkResponse(callApi(params, req, runtime));
}

AttachVpcToNetLinkResponse Alibabacloud_CC5G20220314::Client::attachVpcToNetLink(shared_ptr<AttachVpcToNetLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachVpcToNetLinkWithOptions(request, runtime);
}

CreateAuthorizationRuleResponse Alibabacloud_CC5G20220314::Client::createAuthorizationRuleWithOptions(shared_ptr<CreateAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationType)) {
    query->insert(pair<string, string>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCidr)) {
    query->insert(pair<string, string>("SourceCidr", *request->sourceCidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAuthorizationRule"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAuthorizationRuleResponse(callApi(params, req, runtime));
}

CreateAuthorizationRuleResponse Alibabacloud_CC5G20220314::Client::createAuthorizationRule(shared_ptr<CreateAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuthorizationRuleWithOptions(request, runtime);
}

CreateBatchOperateCardsTaskResponse Alibabacloud_CC5G20220314::Client::createBatchOperateCardsTaskWithOptions(shared_ptr<CreateBatchOperateCardsTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effectType)) {
    query->insert(pair<string, string>("EffectType", *request->effectType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iccids)) {
    query->insert(pair<string, vector<string>>("Iccids", *request->iccids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iccidsOssFilePath)) {
    query->insert(pair<string, string>("IccidsOssFilePath", *request->iccidsOssFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->threshold)) {
    query->insert(pair<string, long>("Threshold", *request->threshold));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->wirelessCloudConnectorIds)) {
    query->insert(pair<string, vector<string>>("WirelessCloudConnectorIds", *request->wirelessCloudConnectorIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBatchOperateCardsTask"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBatchOperateCardsTaskResponse(callApi(params, req, runtime));
}

CreateBatchOperateCardsTaskResponse Alibabacloud_CC5G20220314::Client::createBatchOperateCardsTask(shared_ptr<CreateBatchOperateCardsTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBatchOperateCardsTaskWithOptions(request, runtime);
}

CreateIoTCloudConnectorBackhaulRouteResponse Alibabacloud_CC5G20220314::Client::createIoTCloudConnectorBackhaulRouteWithOptions(shared_ptr<CreateIoTCloudConnectorBackhaulRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netLinkId)) {
    query->insert(pair<string, string>("NetLinkId", *request->netLinkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIoTCloudConnectorBackhaulRoute"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIoTCloudConnectorBackhaulRouteResponse(callApi(params, req, runtime));
}

CreateIoTCloudConnectorBackhaulRouteResponse Alibabacloud_CC5G20220314::Client::createIoTCloudConnectorBackhaulRoute(shared_ptr<CreateIoTCloudConnectorBackhaulRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIoTCloudConnectorBackhaulRouteWithOptions(request, runtime);
}

CreateWirelessCloudConnectorResponse Alibabacloud_CC5G20220314::Client::createWirelessCloudConnectorWithOptions(shared_ptr<CreateWirelessCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ISP)) {
    query->insert(pair<string, string>("ISP", *request->ISP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateWirelessCloudConnectorRequestNetLinks>>(request->netLinks)) {
    query->insert(pair<string, vector<CreateWirelessCloudConnectorRequestNetLinks>>("NetLinks", *request->netLinks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->useCase)) {
    query->insert(pair<string, string>("UseCase", *request->useCase));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWirelessCloudConnector"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWirelessCloudConnectorResponse(callApi(params, req, runtime));
}

CreateWirelessCloudConnectorResponse Alibabacloud_CC5G20220314::Client::createWirelessCloudConnector(shared_ptr<CreateWirelessCloudConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWirelessCloudConnectorWithOptions(request, runtime);
}

DeleteAuthorizationRuleResponse Alibabacloud_CC5G20220314::Client::deleteAuthorizationRuleWithOptions(shared_ptr<DeleteAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleId)) {
    query->insert(pair<string, string>("AuthorizationRuleId", *request->authorizationRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAuthorizationRule"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAuthorizationRuleResponse(callApi(params, req, runtime));
}

DeleteAuthorizationRuleResponse Alibabacloud_CC5G20220314::Client::deleteAuthorizationRule(shared_ptr<DeleteAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAuthorizationRuleWithOptions(request, runtime);
}

DeleteBatchOperateCardsTaskResponse Alibabacloud_CC5G20220314::Client::deleteBatchOperateCardsTaskWithOptions(shared_ptr<DeleteBatchOperateCardsTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->batchOperateCardsTaskId)) {
    query->insert(pair<string, string>("BatchOperateCardsTaskId", *request->batchOperateCardsTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBatchOperateCardsTask"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBatchOperateCardsTaskResponse(callApi(params, req, runtime));
}

DeleteBatchOperateCardsTaskResponse Alibabacloud_CC5G20220314::Client::deleteBatchOperateCardsTask(shared_ptr<DeleteBatchOperateCardsTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBatchOperateCardsTaskWithOptions(request, runtime);
}

DeleteIoTCloudConnectorBackhaulRouteResponse Alibabacloud_CC5G20220314::Client::deleteIoTCloudConnectorBackhaulRouteWithOptions(shared_ptr<DeleteIoTCloudConnectorBackhaulRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netLinkId)) {
    query->insert(pair<string, string>("NetLinkId", *request->netLinkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIoTCloudConnectorBackhaulRoute"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIoTCloudConnectorBackhaulRouteResponse(callApi(params, req, runtime));
}

DeleteIoTCloudConnectorBackhaulRouteResponse Alibabacloud_CC5G20220314::Client::deleteIoTCloudConnectorBackhaulRoute(shared_ptr<DeleteIoTCloudConnectorBackhaulRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIoTCloudConnectorBackhaulRouteWithOptions(request, runtime);
}

DeleteWirelessCloudConnectorResponse Alibabacloud_CC5G20220314::Client::deleteWirelessCloudConnectorWithOptions(shared_ptr<DeleteWirelessCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWirelessCloudConnector"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWirelessCloudConnectorResponse(callApi(params, req, runtime));
}

DeleteWirelessCloudConnectorResponse Alibabacloud_CC5G20220314::Client::deleteWirelessCloudConnector(shared_ptr<DeleteWirelessCloudConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWirelessCloudConnectorWithOptions(request, runtime);
}

DetachVpcFromNetLinkResponse Alibabacloud_CC5G20220314::Client::detachVpcFromNetLinkWithOptions(shared_ptr<DetachVpcFromNetLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netLinkId)) {
    query->insert(pair<string, string>("NetLinkId", *request->netLinkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachVpcFromNetLink"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachVpcFromNetLinkResponse(callApi(params, req, runtime));
}

DetachVpcFromNetLinkResponse Alibabacloud_CC5G20220314::Client::detachVpcFromNetLink(shared_ptr<DetachVpcFromNetLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachVpcFromNetLinkWithOptions(request, runtime);
}

GetCardResponse Alibabacloud_CC5G20220314::Client::getCardWithOptions(shared_ptr<GetCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCard"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCardResponse(callApi(params, req, runtime));
}

GetCardResponse Alibabacloud_CC5G20220314::Client::getCard(shared_ptr<GetCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCardWithOptions(request, runtime);
}

GetCardLockReasonResponse Alibabacloud_CC5G20220314::Client::getCardLockReasonWithOptions(shared_ptr<GetCardLockReasonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCardLockReason"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCardLockReasonResponse(callApi(params, req, runtime));
}

GetCardLockReasonResponse Alibabacloud_CC5G20220314::Client::getCardLockReason(shared_ptr<GetCardLockReasonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCardLockReasonWithOptions(request, runtime);
}

GetCreateCustomerInformationResponse Alibabacloud_CC5G20220314::Client::getCreateCustomerInformationWithOptions(shared_ptr<GetCreateCustomerInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCreateCustomerInformation"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCreateCustomerInformationResponse(callApi(params, req, runtime));
}

GetCreateCustomerInformationResponse Alibabacloud_CC5G20220314::Client::getCreateCustomerInformation(shared_ptr<GetCreateCustomerInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCreateCustomerInformationWithOptions(request, runtime);
}

GetWirelessCloudConnectorResponse Alibabacloud_CC5G20220314::Client::getWirelessCloudConnectorWithOptions(shared_ptr<GetWirelessCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWirelessCloudConnector"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWirelessCloudConnectorResponse(callApi(params, req, runtime));
}

GetWirelessCloudConnectorResponse Alibabacloud_CC5G20220314::Client::getWirelessCloudConnector(shared_ptr<GetWirelessCloudConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWirelessCloudConnectorWithOptions(request, runtime);
}

ListAuthorizationRulesResponse Alibabacloud_CC5G20220314::Client::listAuthorizationRulesWithOptions(shared_ptr<ListAuthorizationRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAuthorizationRules"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAuthorizationRulesResponse(callApi(params, req, runtime));
}

ListAuthorizationRulesResponse Alibabacloud_CC5G20220314::Client::listAuthorizationRules(shared_ptr<ListAuthorizationRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthorizationRulesWithOptions(request, runtime);
}

ListBatchOperateCardsTasksResponse Alibabacloud_CC5G20220314::Client::listBatchOperateCardsTasksWithOptions(shared_ptr<ListBatchOperateCardsTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBatchOperateCardsTasks"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBatchOperateCardsTasksResponse(callApi(params, req, runtime));
}

ListBatchOperateCardsTasksResponse Alibabacloud_CC5G20220314::Client::listBatchOperateCardsTasks(shared_ptr<ListBatchOperateCardsTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBatchOperateCardsTasksWithOptions(request, runtime);
}

ListCardsResponse Alibabacloud_CC5G20220314::Client::listCardsWithOptions(shared_ptr<ListCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCards"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCardsResponse(callApi(params, req, runtime));
}

ListCardsResponse Alibabacloud_CC5G20220314::Client::listCards(shared_ptr<ListCardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCardsWithOptions(request, runtime);
}

ListDataPackagesResponse Alibabacloud_CC5G20220314::Client::listDataPackagesWithOptions(shared_ptr<ListDataPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataPackages"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataPackagesResponse(callApi(params, req, runtime));
}

ListDataPackagesResponse Alibabacloud_CC5G20220314::Client::listDataPackages(shared_ptr<ListDataPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataPackagesWithOptions(request, runtime);
}

ListIoTCloudConnectorBackhaulRouteResponse Alibabacloud_CC5G20220314::Client::listIoTCloudConnectorBackhaulRouteWithOptions(shared_ptr<ListIoTCloudConnectorBackhaulRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIoTCloudConnectorBackhaulRoute"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIoTCloudConnectorBackhaulRouteResponse(callApi(params, req, runtime));
}

ListIoTCloudConnectorBackhaulRouteResponse Alibabacloud_CC5G20220314::Client::listIoTCloudConnectorBackhaulRoute(shared_ptr<ListIoTCloudConnectorBackhaulRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIoTCloudConnectorBackhaulRouteWithOptions(request, runtime);
}

ListOrdersResponse Alibabacloud_CC5G20220314::Client::listOrdersWithOptions(shared_ptr<ListOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOrders"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOrdersResponse(callApi(params, req, runtime));
}

ListOrdersResponse Alibabacloud_CC5G20220314::Client::listOrders(shared_ptr<ListOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOrdersWithOptions(request, runtime);
}

ListRegionsResponse Alibabacloud_CC5G20220314::Client::listRegionsWithOptions(shared_ptr<ListRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRegions"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRegionsResponse(callApi(params, req, runtime));
}

ListRegionsResponse Alibabacloud_CC5G20220314::Client::listRegions(shared_ptr<ListRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRegionsWithOptions(request, runtime);
}

ListWirelessCloudConnectorsResponse Alibabacloud_CC5G20220314::Client::listWirelessCloudConnectorsWithOptions(shared_ptr<ListWirelessCloudConnectorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWirelessCloudConnectors"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWirelessCloudConnectorsResponse(callApi(params, req, runtime));
}

ListWirelessCloudConnectorsResponse Alibabacloud_CC5G20220314::Client::listWirelessCloudConnectors(shared_ptr<ListWirelessCloudConnectorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWirelessCloudConnectorsWithOptions(request, runtime);
}

ListZonesResponse Alibabacloud_CC5G20220314::Client::listZonesWithOptions(shared_ptr<ListZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListZones"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListZonesResponse(callApi(params, req, runtime));
}

ListZonesResponse Alibabacloud_CC5G20220314::Client::listZones(shared_ptr<ListZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listZonesWithOptions(request, runtime);
}

LockCardsResponse Alibabacloud_CC5G20220314::Client::lockCardsWithOptions(shared_ptr<LockCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iccids)) {
    query->insert(pair<string, vector<string>>("Iccids", *request->iccids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LockCards"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LockCardsResponse(callApi(params, req, runtime));
}

LockCardsResponse Alibabacloud_CC5G20220314::Client::lockCards(shared_ptr<LockCardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockCardsWithOptions(request, runtime);
}

ModifyWirelessCloudConnectorFeatureResponse Alibabacloud_CC5G20220314::Client::modifyWirelessCloudConnectorFeatureWithOptions(shared_ptr<ModifyWirelessCloudConnectorFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureName)) {
    query->insert(pair<string, string>("FeatureName", *request->featureName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureValue)) {
    query->insert(pair<string, string>("FeatureValue", *request->featureValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyWirelessCloudConnectorFeature"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyWirelessCloudConnectorFeatureResponse(callApi(params, req, runtime));
}

ModifyWirelessCloudConnectorFeatureResponse Alibabacloud_CC5G20220314::Client::modifyWirelessCloudConnectorFeature(shared_ptr<ModifyWirelessCloudConnectorFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyWirelessCloudConnectorFeatureWithOptions(request, runtime);
}

OpenCc5gServiceResponse Alibabacloud_CC5G20220314::Client::openCc5gServiceWithOptions(shared_ptr<OpenCc5gServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenCc5gService"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenCc5gServiceResponse(callApi(params, req, runtime));
}

OpenCc5gServiceResponse Alibabacloud_CC5G20220314::Client::openCc5gService(shared_ptr<OpenCc5gServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openCc5gServiceWithOptions(request, runtime);
}

ResumeCardsResponse Alibabacloud_CC5G20220314::Client::resumeCardsWithOptions(shared_ptr<ResumeCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iccids)) {
    query->insert(pair<string, vector<string>>("Iccids", *request->iccids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeCards"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeCardsResponse(callApi(params, req, runtime));
}

ResumeCardsResponse Alibabacloud_CC5G20220314::Client::resumeCards(shared_ptr<ResumeCardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeCardsWithOptions(request, runtime);
}

StopCardsResponse Alibabacloud_CC5G20220314::Client::stopCardsWithOptions(shared_ptr<StopCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iccids)) {
    query->insert(pair<string, vector<string>>("Iccids", *request->iccids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopCards"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopCardsResponse(callApi(params, req, runtime));
}

StopCardsResponse Alibabacloud_CC5G20220314::Client::stopCards(shared_ptr<StopCardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopCardsWithOptions(request, runtime);
}

SwitchWirelessCloudConnectorToBusinessResponse Alibabacloud_CC5G20220314::Client::switchWirelessCloudConnectorToBusinessWithOptions(shared_ptr<SwitchWirelessCloudConnectorToBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchWirelessCloudConnectorToBusiness"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchWirelessCloudConnectorToBusinessResponse(callApi(params, req, runtime));
}

SwitchWirelessCloudConnectorToBusinessResponse Alibabacloud_CC5G20220314::Client::switchWirelessCloudConnectorToBusiness(shared_ptr<SwitchWirelessCloudConnectorToBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchWirelessCloudConnectorToBusinessWithOptions(request, runtime);
}

UnlockCardsResponse Alibabacloud_CC5G20220314::Client::unlockCardsWithOptions(shared_ptr<UnlockCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iccids)) {
    query->insert(pair<string, vector<string>>("Iccids", *request->iccids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnlockCards"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnlockCardsResponse(callApi(params, req, runtime));
}

UnlockCardsResponse Alibabacloud_CC5G20220314::Client::unlockCards(shared_ptr<UnlockCardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockCardsWithOptions(request, runtime);
}

UpdateAuthorizationRuleResponse Alibabacloud_CC5G20220314::Client::updateAuthorizationRuleWithOptions(shared_ptr<UpdateAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleId)) {
    query->insert(pair<string, string>("AuthorizationRuleId", *request->authorizationRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCidr)) {
    query->insert(pair<string, string>("SourceCidr", *request->sourceCidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAuthorizationRule"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAuthorizationRuleResponse(callApi(params, req, runtime));
}

UpdateAuthorizationRuleResponse Alibabacloud_CC5G20220314::Client::updateAuthorizationRule(shared_ptr<UpdateAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAuthorizationRuleWithOptions(request, runtime);
}

UpdateBatchOperateCardsTaskResponse Alibabacloud_CC5G20220314::Client::updateBatchOperateCardsTaskWithOptions(shared_ptr<UpdateBatchOperateCardsTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->batchOperateCardsTaskId)) {
    query->insert(pair<string, string>("BatchOperateCardsTaskId", *request->batchOperateCardsTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effectType)) {
    query->insert(pair<string, string>("EffectType", *request->effectType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iccids)) {
    query->insert(pair<string, vector<string>>("Iccids", *request->iccids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iccidsOssFilePath)) {
    query->insert(pair<string, string>("IccidsOssFilePath", *request->iccidsOssFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->threshold)) {
    query->insert(pair<string, long>("Threshold", *request->threshold));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->wirelessCloudConnectorIds)) {
    query->insert(pair<string, vector<string>>("WirelessCloudConnectorIds", *request->wirelessCloudConnectorIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBatchOperateCardsTask"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBatchOperateCardsTaskResponse(callApi(params, req, runtime));
}

UpdateBatchOperateCardsTaskResponse Alibabacloud_CC5G20220314::Client::updateBatchOperateCardsTask(shared_ptr<UpdateBatchOperateCardsTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBatchOperateCardsTaskWithOptions(request, runtime);
}

UpdateCardResponse Alibabacloud_CC5G20220314::Client::updateCardWithOptions(shared_ptr<UpdateCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCard"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCardResponse(callApi(params, req, runtime));
}

UpdateCardResponse Alibabacloud_CC5G20220314::Client::updateCard(shared_ptr<UpdateCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCardWithOptions(request, runtime);
}

UpdateDNSAuthorizationRuleResponse Alibabacloud_CC5G20220314::Client::updateDNSAuthorizationRuleWithOptions(shared_ptr<UpdateDNSAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleId)) {
    query->insert(pair<string, string>("AuthorizationRuleId", *request->authorizationRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationIp)) {
    query->insert(pair<string, string>("DestinationIp", *request->destinationIp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceDNSIp)) {
    query->insert(pair<string, string>("SourceDNSIp", *request->sourceDNSIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDNSAuthorizationRule"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDNSAuthorizationRuleResponse(callApi(params, req, runtime));
}

UpdateDNSAuthorizationRuleResponse Alibabacloud_CC5G20220314::Client::updateDNSAuthorizationRule(shared_ptr<UpdateDNSAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDNSAuthorizationRuleWithOptions(request, runtime);
}

UpdateWirelessCloudConnectorResponse Alibabacloud_CC5G20220314::Client::updateWirelessCloudConnectorWithOptions(shared_ptr<UpdateWirelessCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wirelessCloudConnectorId)) {
    query->insert(pair<string, string>("WirelessCloudConnectorId", *request->wirelessCloudConnectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWirelessCloudConnector"))},
    {"version", boost::any(string("2022-03-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWirelessCloudConnectorResponse(callApi(params, req, runtime));
}

UpdateWirelessCloudConnectorResponse Alibabacloud_CC5G20220314::Client::updateWirelessCloudConnector(shared_ptr<UpdateWirelessCloudConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWirelessCloudConnectorWithOptions(request, runtime);
}

