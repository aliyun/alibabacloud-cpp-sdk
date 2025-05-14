// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/eflo_20220530.hpp>
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

using namespace Alibabacloud_Eflo20220530;

Alibabacloud_Eflo20220530::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eflo"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Eflo20220530::Client::getEndpoint(shared_ptr<string> productId,
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

AssignLeniPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::assignLeniPrivateIpAddressWithOptions(shared_ptr<AssignLeniPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticNetworkInterfaceId)) {
    body->insert(pair<string, string>("ElasticNetworkInterfaceId", *request->elasticNetworkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIpAddress)) {
    body->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssignLeniPrivateIpAddress"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssignLeniPrivateIpAddressResponse(callApi(params, req, runtime));
}

AssignLeniPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::assignLeniPrivateIpAddress(shared_ptr<AssignLeniPrivateIpAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignLeniPrivateIpAddressWithOptions(request, runtime);
}

AssignPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::assignPrivateIpAddressWithOptions(shared_ptr<AssignPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->assignMac)) {
    body->insert(pair<string, bool>("AssignMac", *request->assignMac));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    body->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIpAddress)) {
    body->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->skipConfig)) {
    body->insert(pair<string, bool>("SkipConfig", *request->skipConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetId)) {
    body->insert(pair<string, string>("SubnetId", *request->subnetId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssignPrivateIpAddress"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssignPrivateIpAddressResponse(callApi(params, req, runtime));
}

AssignPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::assignPrivateIpAddress(shared_ptr<AssignPrivateIpAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignPrivateIpAddressWithOptions(request, runtime);
}

AssociateVpdCidrBlockResponse Alibabacloud_Eflo20220530::Client::associateVpdCidrBlockWithOptions(shared_ptr<AssociateVpdCidrBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secondaryCidrBlock)) {
    body->insert(pair<string, string>("SecondaryCidrBlock", *request->secondaryCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateVpdCidrBlock"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateVpdCidrBlockResponse(callApi(params, req, runtime));
}

AssociateVpdCidrBlockResponse Alibabacloud_Eflo20220530::Client::associateVpdCidrBlock(shared_ptr<AssociateVpdCidrBlockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateVpdCidrBlockWithOptions(request, runtime);
}

AttachElasticNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::attachElasticNetworkInterfaceWithOptions(shared_ptr<AttachElasticNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticNetworkInterfaceId)) {
    body->insert(pair<string, string>("ElasticNetworkInterfaceId", *request->elasticNetworkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachElasticNetworkInterface"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachElasticNetworkInterfaceResponse(callApi(params, req, runtime));
}

AttachElasticNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::attachElasticNetworkInterface(shared_ptr<AttachElasticNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachElasticNetworkInterfaceWithOptions(request, runtime);
}

CreateElasticNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::createElasticNetworkInterfaceWithOptions(shared_ptr<CreateElasticNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableJumboFrame)) {
    body->insert(pair<string, bool>("EnableJumboFrame", *request->enableJumboFrame));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    body->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateElasticNetworkInterfaceRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<CreateElasticNetworkInterfaceRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    body->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateElasticNetworkInterface"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateElasticNetworkInterfaceResponse(callApi(params, req, runtime));
}

CreateElasticNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::createElasticNetworkInterface(shared_ptr<CreateElasticNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createElasticNetworkInterfaceWithOptions(request, runtime);
}

CreateErResponse Alibabacloud_Eflo20220530::Client::createErWithOptions(shared_ptr<CreateErRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erName)) {
    body->insert(pair<string, string>("ErName", *request->erName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterZoneId)) {
    body->insert(pair<string, string>("MasterZoneId", *request->masterZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateErRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<CreateErRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEr"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateErResponse(callApi(params, req, runtime));
}

CreateErResponse Alibabacloud_Eflo20220530::Client::createEr(shared_ptr<CreateErRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createErWithOptions(request, runtime);
}

CreateErAttachmentResponse Alibabacloud_Eflo20220530::Client::createErAttachmentWithOptions(shared_ptr<CreateErAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoReceiveAllRoute)) {
    body->insert(pair<string, bool>("AutoReceiveAllRoute", *request->autoReceiveAllRoute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erAttachmentName)) {
    body->insert(pair<string, string>("ErAttachmentName", *request->erAttachmentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTenantId)) {
    body->insert(pair<string, string>("ResourceTenantId", *request->resourceTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateErAttachment"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateErAttachmentResponse(callApi(params, req, runtime));
}

CreateErAttachmentResponse Alibabacloud_Eflo20220530::Client::createErAttachment(shared_ptr<CreateErAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createErAttachmentWithOptions(request, runtime);
}

CreateErRouteMapResponse Alibabacloud_Eflo20220530::Client::createErRouteMapWithOptions(shared_ptr<CreateErRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidrBlock)) {
    body->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receptionInstanceId)) {
    body->insert(pair<string, string>("ReceptionInstanceId", *request->receptionInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receptionInstanceOwner)) {
    body->insert(pair<string, string>("ReceptionInstanceOwner", *request->receptionInstanceOwner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receptionInstanceType)) {
    body->insert(pair<string, string>("ReceptionInstanceType", *request->receptionInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeMapAction)) {
    body->insert(pair<string, string>("RouteMapAction", *request->routeMapAction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeMapNum)) {
    body->insert(pair<string, long>("RouteMapNum", *request->routeMapNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transmissionInstanceId)) {
    body->insert(pair<string, string>("TransmissionInstanceId", *request->transmissionInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transmissionInstanceOwner)) {
    body->insert(pair<string, string>("TransmissionInstanceOwner", *request->transmissionInstanceOwner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transmissionInstanceType)) {
    body->insert(pair<string, string>("TransmissionInstanceType", *request->transmissionInstanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateErRouteMap"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateErRouteMapResponse(callApi(params, req, runtime));
}

CreateErRouteMapResponse Alibabacloud_Eflo20220530::Client::createErRouteMap(shared_ptr<CreateErRouteMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createErRouteMapWithOptions(request, runtime);
}

CreateSubnetResponse Alibabacloud_Eflo20220530::Client::createSubnetWithOptions(shared_ptr<CreateSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cidr)) {
    body->insert(pair<string, string>("Cidr", *request->cidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetName)) {
    body->insert(pair<string, string>("SubnetName", *request->subnetName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateSubnetRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<CreateSubnetRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubnet"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubnetResponse(callApi(params, req, runtime));
}

CreateSubnetResponse Alibabacloud_Eflo20220530::Client::createSubnet(shared_ptr<CreateSubnetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSubnetWithOptions(request, runtime);
}

CreateVccResponse Alibabacloud_Eflo20220530::Client::createVccWithOptions(shared_ptr<CreateVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->accessCouldService)) {
    body->insert(pair<string, bool>("AccessCouldService", *request->accessCouldService));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    body->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bgpAsn)) {
    body->insert(pair<string, long>("BgpAsn", *request->bgpAsn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bgpCidr)) {
    body->insert(pair<string, string>("BgpCidr", *request->bgpCidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    body->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cenOwnerId)) {
    body->insert(pair<string, string>("CenOwnerId", *request->cenOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionType)) {
    body->insert(pair<string, string>("ConnectionType", *request->connectionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateVccRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<CreateVccRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    body->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccName)) {
    body->insert(pair<string, string>("VccName", *request->vccName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVcc"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVccResponse(callApi(params, req, runtime));
}

CreateVccResponse Alibabacloud_Eflo20220530::Client::createVcc(shared_ptr<CreateVccRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVccWithOptions(request, runtime);
}

CreateVccGrantRuleResponse Alibabacloud_Eflo20220530::Client::createVccGrantRuleWithOptions(shared_ptr<CreateVccGrantRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantTenantId)) {
    body->insert(pair<string, string>("GrantTenantId", *request->grantTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVccGrantRule"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVccGrantRuleResponse(callApi(params, req, runtime));
}

CreateVccGrantRuleResponse Alibabacloud_Eflo20220530::Client::createVccGrantRule(shared_ptr<CreateVccGrantRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVccGrantRuleWithOptions(request, runtime);
}

CreateVccRouteEntryResponse Alibabacloud_Eflo20220530::Client::createVccRouteEntryWithOptions(shared_ptr<CreateVccRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidrBlock)) {
    body->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVccRouteEntry"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVccRouteEntryResponse(callApi(params, req, runtime));
}

CreateVccRouteEntryResponse Alibabacloud_Eflo20220530::Client::createVccRouteEntry(shared_ptr<CreateVccRouteEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVccRouteEntryWithOptions(request, runtime);
}

CreateVpdResponse Alibabacloud_Eflo20220530::Client::createVpdWithOptions(shared_ptr<CreateVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cidr)) {
    body->insert(pair<string, string>("Cidr", *request->cidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateVpdRequestSubnets>>(request->subnets)) {
    body->insert(pair<string, vector<CreateVpdRequestSubnets>>("Subnets", *request->subnets));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateVpdRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<CreateVpdRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdName)) {
    body->insert(pair<string, string>("VpdName", *request->vpdName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVpd"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVpdResponse(callApi(params, req, runtime));
}

CreateVpdResponse Alibabacloud_Eflo20220530::Client::createVpd(shared_ptr<CreateVpdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVpdWithOptions(request, runtime);
}

CreateVpdGrantRuleResponse Alibabacloud_Eflo20220530::Client::createVpdGrantRuleWithOptions(shared_ptr<CreateVpdGrantRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantTenantId)) {
    body->insert(pair<string, string>("GrantTenantId", *request->grantTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVpdGrantRule"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVpdGrantRuleResponse(callApi(params, req, runtime));
}

CreateVpdGrantRuleResponse Alibabacloud_Eflo20220530::Client::createVpdGrantRule(shared_ptr<CreateVpdGrantRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVpdGrantRuleWithOptions(request, runtime);
}

DeleteElasticNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::deleteElasticNetworkInterfaceWithOptions(shared_ptr<DeleteElasticNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticNetworkInterfaceId)) {
    body->insert(pair<string, string>("ElasticNetworkInterfaceId", *request->elasticNetworkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteElasticNetworkInterface"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteElasticNetworkInterfaceResponse(callApi(params, req, runtime));
}

DeleteElasticNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::deleteElasticNetworkInterface(shared_ptr<DeleteElasticNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteElasticNetworkInterfaceWithOptions(request, runtime);
}

DeleteErResponse Alibabacloud_Eflo20220530::Client::deleteErWithOptions(shared_ptr<DeleteErRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEr"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteErResponse(callApi(params, req, runtime));
}

DeleteErResponse Alibabacloud_Eflo20220530::Client::deleteEr(shared_ptr<DeleteErRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteErWithOptions(request, runtime);
}

DeleteErAttachmentResponse Alibabacloud_Eflo20220530::Client::deleteErAttachmentWithOptions(shared_ptr<DeleteErAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erAttachmentId)) {
    body->insert(pair<string, string>("ErAttachmentId", *request->erAttachmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteErAttachment"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteErAttachmentResponse(callApi(params, req, runtime));
}

DeleteErAttachmentResponse Alibabacloud_Eflo20220530::Client::deleteErAttachment(shared_ptr<DeleteErAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteErAttachmentWithOptions(request, runtime);
}

DeleteErRouteMapResponse Alibabacloud_Eflo20220530::Client::deleteErRouteMapWithOptions(shared_ptr<DeleteErRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->erRouteMapIds)) {
    body->insert(pair<string, vector<string>>("ErRouteMapIds", *request->erRouteMapIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteErRouteMap"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteErRouteMapResponse(callApi(params, req, runtime));
}

DeleteErRouteMapResponse Alibabacloud_Eflo20220530::Client::deleteErRouteMap(shared_ptr<DeleteErRouteMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteErRouteMapWithOptions(request, runtime);
}

DeleteSubnetResponse Alibabacloud_Eflo20220530::Client::deleteSubnetWithOptions(shared_ptr<DeleteSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetId)) {
    body->insert(pair<string, string>("SubnetId", *request->subnetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSubnet"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSubnetResponse(callApi(params, req, runtime));
}

DeleteSubnetResponse Alibabacloud_Eflo20220530::Client::deleteSubnet(shared_ptr<DeleteSubnetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSubnetWithOptions(request, runtime);
}

DeleteVccGrantRuleResponse Alibabacloud_Eflo20220530::Client::deleteVccGrantRuleWithOptions(shared_ptr<DeleteVccGrantRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantRuleId)) {
    body->insert(pair<string, string>("GrantRuleId", *request->grantRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVccGrantRule"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVccGrantRuleResponse(callApi(params, req, runtime));
}

DeleteVccGrantRuleResponse Alibabacloud_Eflo20220530::Client::deleteVccGrantRule(shared_ptr<DeleteVccGrantRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVccGrantRuleWithOptions(request, runtime);
}

DeleteVccRouteEntryResponse Alibabacloud_Eflo20220530::Client::deleteVccRouteEntryWithOptions(shared_ptr<DeleteVccRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidrBlock)) {
    body->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccRouteEntryId)) {
    body->insert(pair<string, string>("VccRouteEntryId", *request->vccRouteEntryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVccRouteEntry"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVccRouteEntryResponse(callApi(params, req, runtime));
}

DeleteVccRouteEntryResponse Alibabacloud_Eflo20220530::Client::deleteVccRouteEntry(shared_ptr<DeleteVccRouteEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVccRouteEntryWithOptions(request, runtime);
}

DeleteVpdResponse Alibabacloud_Eflo20220530::Client::deleteVpdWithOptions(shared_ptr<DeleteVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVpd"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVpdResponse(callApi(params, req, runtime));
}

DeleteVpdResponse Alibabacloud_Eflo20220530::Client::deleteVpd(shared_ptr<DeleteVpdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVpdWithOptions(request, runtime);
}

DeleteVpdGrantRuleResponse Alibabacloud_Eflo20220530::Client::deleteVpdGrantRuleWithOptions(shared_ptr<DeleteVpdGrantRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantRuleId)) {
    body->insert(pair<string, string>("GrantRuleId", *request->grantRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantTenantId)) {
    body->insert(pair<string, string>("GrantTenantId", *request->grantTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVpdGrantRule"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVpdGrantRuleResponse(callApi(params, req, runtime));
}

DeleteVpdGrantRuleResponse Alibabacloud_Eflo20220530::Client::deleteVpdGrantRule(shared_ptr<DeleteVpdGrantRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVpdGrantRuleWithOptions(request, runtime);
}

DescribeSlrResponse Alibabacloud_Eflo20220530::Client::describeSlrWithOptions(shared_ptr<DescribeSlrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSlr"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSlrResponse(callApi(params, req, runtime));
}

DescribeSlrResponse Alibabacloud_Eflo20220530::Client::describeSlr(shared_ptr<DescribeSlrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlrWithOptions(request, runtime);
}

DetachElasticNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::detachElasticNetworkInterfaceWithOptions(shared_ptr<DetachElasticNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticNetworkInterfaceId)) {
    body->insert(pair<string, string>("ElasticNetworkInterfaceId", *request->elasticNetworkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachElasticNetworkInterface"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachElasticNetworkInterfaceResponse(callApi(params, req, runtime));
}

DetachElasticNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::detachElasticNetworkInterface(shared_ptr<DetachElasticNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachElasticNetworkInterfaceWithOptions(request, runtime);
}

GetDestinationCidrBlockResponse Alibabacloud_Eflo20220530::Client::getDestinationCidrBlockWithOptions(shared_ptr<GetDestinationCidrBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDestinationCidrBlock"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDestinationCidrBlockResponse(callApi(params, req, runtime));
}

GetDestinationCidrBlockResponse Alibabacloud_Eflo20220530::Client::getDestinationCidrBlock(shared_ptr<GetDestinationCidrBlockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDestinationCidrBlockWithOptions(request, runtime);
}

GetElasticNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::getElasticNetworkInterfaceWithOptions(shared_ptr<GetElasticNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticNetworkInterfaceId)) {
    body->insert(pair<string, string>("ElasticNetworkInterfaceId", *request->elasticNetworkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetElasticNetworkInterface"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetElasticNetworkInterfaceResponse(callApi(params, req, runtime));
}

GetElasticNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::getElasticNetworkInterface(shared_ptr<GetElasticNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getElasticNetworkInterfaceWithOptions(request, runtime);
}

GetErResponse Alibabacloud_Eflo20220530::Client::getErWithOptions(shared_ptr<GetErRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEr"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetErResponse(callApi(params, req, runtime));
}

GetErResponse Alibabacloud_Eflo20220530::Client::getEr(shared_ptr<GetErRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getErWithOptions(request, runtime);
}

GetErAttachmentResponse Alibabacloud_Eflo20220530::Client::getErAttachmentWithOptions(shared_ptr<GetErAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erAttachmentId)) {
    body->insert(pair<string, string>("ErAttachmentId", *request->erAttachmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetErAttachment"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetErAttachmentResponse(callApi(params, req, runtime));
}

GetErAttachmentResponse Alibabacloud_Eflo20220530::Client::getErAttachment(shared_ptr<GetErAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getErAttachmentWithOptions(request, runtime);
}

GetErRouteEntryResponse Alibabacloud_Eflo20220530::Client::getErRouteEntryWithOptions(shared_ptr<GetErRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erRouteEntryId)) {
    body->insert(pair<string, string>("ErRouteEntryId", *request->erRouteEntryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetErRouteEntry"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetErRouteEntryResponse(callApi(params, req, runtime));
}

GetErRouteEntryResponse Alibabacloud_Eflo20220530::Client::getErRouteEntry(shared_ptr<GetErRouteEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getErRouteEntryWithOptions(request, runtime);
}

GetErRouteMapResponse Alibabacloud_Eflo20220530::Client::getErRouteMapWithOptions(shared_ptr<GetErRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erRouteMapId)) {
    body->insert(pair<string, string>("ErRouteMapId", *request->erRouteMapId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetErRouteMap"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetErRouteMapResponse(callApi(params, req, runtime));
}

GetErRouteMapResponse Alibabacloud_Eflo20220530::Client::getErRouteMap(shared_ptr<GetErRouteMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getErRouteMapWithOptions(request, runtime);
}

GetFabricTopologyResponse Alibabacloud_Eflo20220530::Client::getFabricTopologyWithOptions(shared_ptr<GetFabricTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->lniIds)) {
    body->insert(pair<string, vector<string>>("LniIds", *request->lniIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodeIds)) {
    body->insert(pair<string, vector<string>>("NodeIds", *request->nodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFabricTopology"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFabricTopologyResponse(callApi(params, req, runtime));
}

GetFabricTopologyResponse Alibabacloud_Eflo20220530::Client::getFabricTopology(shared_ptr<GetFabricTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFabricTopologyWithOptions(request, runtime);
}

GetLeniPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::getLeniPrivateIpAddressWithOptions(shared_ptr<GetLeniPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticNetworkInterfaceId)) {
    body->insert(pair<string, string>("ElasticNetworkInterfaceId", *request->elasticNetworkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipName)) {
    body->insert(pair<string, string>("IpName", *request->ipName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLeniPrivateIpAddress"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLeniPrivateIpAddressResponse(callApi(params, req, runtime));
}

GetLeniPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::getLeniPrivateIpAddress(shared_ptr<GetLeniPrivateIpAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLeniPrivateIpAddressWithOptions(request, runtime);
}

GetLniPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::getLniPrivateIpAddressWithOptions(shared_ptr<GetLniPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ipName)) {
    body->insert(pair<string, string>("IpName", *request->ipName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    body->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLniPrivateIpAddress"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLniPrivateIpAddressResponse(callApi(params, req, runtime));
}

GetLniPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::getLniPrivateIpAddress(shared_ptr<GetLniPrivateIpAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLniPrivateIpAddressWithOptions(request, runtime);
}

GetNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::getNetworkInterfaceWithOptions(shared_ptr<GetNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    body->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetId)) {
    body->insert(pair<string, string>("SubnetId", *request->subnetId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNetworkInterface"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNetworkInterfaceResponse(callApi(params, req, runtime));
}

GetNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::getNetworkInterface(shared_ptr<GetNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNetworkInterfaceWithOptions(request, runtime);
}

GetNodeInfoForPodResponse Alibabacloud_Eflo20220530::Client::getNodeInfoForPodWithOptions(shared_ptr<GetNodeInfoForPodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNodeInfoForPod"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeInfoForPodResponse(callApi(params, req, runtime));
}

GetNodeInfoForPodResponse Alibabacloud_Eflo20220530::Client::getNodeInfoForPod(shared_ptr<GetNodeInfoForPodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeInfoForPodWithOptions(request, runtime);
}

GetSubnetResponse Alibabacloud_Eflo20220530::Client::getSubnetWithOptions(shared_ptr<GetSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetId)) {
    body->insert(pair<string, string>("SubnetId", *request->subnetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubnet"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubnetResponse(callApi(params, req, runtime));
}

GetSubnetResponse Alibabacloud_Eflo20220530::Client::getSubnet(shared_ptr<GetSubnetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSubnetWithOptions(request, runtime);
}

GetVccResponse Alibabacloud_Eflo20220530::Client::getVccWithOptions(shared_ptr<GetVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVcc"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVccResponse(callApi(params, req, runtime));
}

GetVccResponse Alibabacloud_Eflo20220530::Client::getVcc(shared_ptr<GetVccRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVccWithOptions(request, runtime);
}

GetVccGrantRuleResponse Alibabacloud_Eflo20220530::Client::getVccGrantRuleWithOptions(shared_ptr<GetVccGrantRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantRuleId)) {
    body->insert(pair<string, string>("GrantRuleId", *request->grantRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantTenantId)) {
    body->insert(pair<string, string>("GrantTenantId", *request->grantTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVccGrantRule"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVccGrantRuleResponse(callApi(params, req, runtime));
}

GetVccGrantRuleResponse Alibabacloud_Eflo20220530::Client::getVccGrantRule(shared_ptr<GetVccGrantRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVccGrantRuleWithOptions(request, runtime);
}

GetVccRouteEntryResponse Alibabacloud_Eflo20220530::Client::getVccRouteEntryWithOptions(shared_ptr<GetVccRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccRouteEntryId)) {
    body->insert(pair<string, string>("VccRouteEntryId", *request->vccRouteEntryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVccRouteEntry"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVccRouteEntryResponse(callApi(params, req, runtime));
}

GetVccRouteEntryResponse Alibabacloud_Eflo20220530::Client::getVccRouteEntry(shared_ptr<GetVccRouteEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVccRouteEntryWithOptions(request, runtime);
}

GetVpdResponse Alibabacloud_Eflo20220530::Client::getVpdWithOptions(shared_ptr<GetVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVpd"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVpdResponse(callApi(params, req, runtime));
}

GetVpdResponse Alibabacloud_Eflo20220530::Client::getVpd(shared_ptr<GetVpdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVpdWithOptions(request, runtime);
}

GetVpdGrantRuleResponse Alibabacloud_Eflo20220530::Client::getVpdGrantRuleWithOptions(shared_ptr<GetVpdGrantRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantRuleId)) {
    body->insert(pair<string, string>("GrantRuleId", *request->grantRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantTenantId)) {
    body->insert(pair<string, string>("GrantTenantId", *request->grantTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVpdGrantRule"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVpdGrantRuleResponse(callApi(params, req, runtime));
}

GetVpdGrantRuleResponse Alibabacloud_Eflo20220530::Client::getVpdGrantRule(shared_ptr<GetVpdGrantRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVpdGrantRuleWithOptions(request, runtime);
}

GetVpdRouteEntryResponse Alibabacloud_Eflo20220530::Client::getVpdRouteEntryWithOptions(shared_ptr<GetVpdRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdRouteEntryId)) {
    body->insert(pair<string, string>("VpdRouteEntryId", *request->vpdRouteEntryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVpdRouteEntry"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVpdRouteEntryResponse(callApi(params, req, runtime));
}

GetVpdRouteEntryResponse Alibabacloud_Eflo20220530::Client::getVpdRouteEntry(shared_ptr<GetVpdRouteEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVpdRouteEntryWithOptions(request, runtime);
}

InitializeVccResponse Alibabacloud_Eflo20220530::Client::initializeVccWithOptions(shared_ptr<InitializeVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitializeVcc"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitializeVccResponse(callApi(params, req, runtime));
}

InitializeVccResponse Alibabacloud_Eflo20220530::Client::initializeVcc(shared_ptr<InitializeVccRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initializeVccWithOptions(request, runtime);
}

ListElasticNetworkInterfacesResponse Alibabacloud_Eflo20220530::Client::listElasticNetworkInterfacesWithOptions(shared_ptr<ListElasticNetworkInterfacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticNetworkInterfaceId)) {
    body->insert(pair<string, string>("ElasticNetworkInterfaceId", *request->elasticNetworkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    body->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    body->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListElasticNetworkInterfacesRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<ListElasticNetworkInterfacesRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    body->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListElasticNetworkInterfaces"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListElasticNetworkInterfacesResponse(callApi(params, req, runtime));
}

ListElasticNetworkInterfacesResponse Alibabacloud_Eflo20220530::Client::listElasticNetworkInterfaces(shared_ptr<ListElasticNetworkInterfacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listElasticNetworkInterfacesWithOptions(request, runtime);
}

ListErAttachmentsResponse Alibabacloud_Eflo20220530::Client::listErAttachmentsWithOptions(shared_ptr<ListErAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoReceiveAllRoute)) {
    body->insert(pair<string, bool>("AutoReceiveAllRoute", *request->autoReceiveAllRoute));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erAttachmentId)) {
    body->insert(pair<string, string>("ErAttachmentId", *request->erAttachmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erAttachmentName)) {
    body->insert(pair<string, string>("ErAttachmentName", *request->erAttachmentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTenantId)) {
    body->insert(pair<string, string>("ResourceTenantId", *request->resourceTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListErAttachments"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListErAttachmentsResponse(callApi(params, req, runtime));
}

ListErAttachmentsResponse Alibabacloud_Eflo20220530::Client::listErAttachments(shared_ptr<ListErAttachmentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listErAttachmentsWithOptions(request, runtime);
}

ListErRouteEntriesResponse Alibabacloud_Eflo20220530::Client::listErRouteEntriesWithOptions(shared_ptr<ListErRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidrBlock)) {
    body->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreDetailedRouteEntry)) {
    body->insert(pair<string, bool>("IgnoreDetailedRouteEntry", *request->ignoreDetailedRouteEntry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextHopId)) {
    body->insert(pair<string, string>("NextHopId", *request->nextHopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextHopType)) {
    body->insert(pair<string, string>("NextHopType", *request->nextHopType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeType)) {
    body->insert(pair<string, string>("RouteType", *request->routeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListErRouteEntries"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListErRouteEntriesResponse(callApi(params, req, runtime));
}

ListErRouteEntriesResponse Alibabacloud_Eflo20220530::Client::listErRouteEntries(shared_ptr<ListErRouteEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listErRouteEntriesWithOptions(request, runtime);
}

ListErRouteMapsResponse Alibabacloud_Eflo20220530::Client::listErRouteMapsWithOptions(shared_ptr<ListErRouteMapsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidrBlock)) {
    body->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erRouteMapId)) {
    body->insert(pair<string, string>("ErRouteMapId", *request->erRouteMapId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->erRouteMapNum)) {
    body->insert(pair<string, long>("ErRouteMapNum", *request->erRouteMapNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receptionInstanceId)) {
    body->insert(pair<string, string>("ReceptionInstanceId", *request->receptionInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receptionInstanceName)) {
    body->insert(pair<string, string>("ReceptionInstanceName", *request->receptionInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receptionInstanceType)) {
    body->insert(pair<string, string>("ReceptionInstanceType", *request->receptionInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeMapAction)) {
    body->insert(pair<string, string>("RouteMapAction", *request->routeMapAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transmissionInstanceId)) {
    body->insert(pair<string, string>("TransmissionInstanceId", *request->transmissionInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transmissionInstanceName)) {
    body->insert(pair<string, string>("TransmissionInstanceName", *request->transmissionInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transmissionInstanceType)) {
    body->insert(pair<string, string>("TransmissionInstanceType", *request->transmissionInstanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListErRouteMaps"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListErRouteMapsResponse(callApi(params, req, runtime));
}

ListErRouteMapsResponse Alibabacloud_Eflo20220530::Client::listErRouteMaps(shared_ptr<ListErRouteMapsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listErRouteMapsWithOptions(request, runtime);
}

ListErsResponse Alibabacloud_Eflo20220530::Client::listErsWithOptions(shared_ptr<ListErsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erName)) {
    body->insert(pair<string, string>("ErName", *request->erName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterZoneId)) {
    body->insert(pair<string, string>("MasterZoneId", *request->masterZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListErsRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<ListErsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListErs"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListErsResponse(callApi(params, req, runtime));
}

ListErsResponse Alibabacloud_Eflo20220530::Client::listErs(shared_ptr<ListErsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listErsWithOptions(request, runtime);
}

ListInstancesByNcdResponse Alibabacloud_Eflo20220530::Client::listInstancesByNcdWithOptions(shared_ptr<ListInstancesByNcdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxNcd)) {
    body->insert(pair<string, long>("MaxNcd", *request->maxNcd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstancesByNcd"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesByNcdResponse(callApi(params, req, runtime));
}

ListInstancesByNcdResponse Alibabacloud_Eflo20220530::Client::listInstancesByNcd(shared_ptr<ListInstancesByNcdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesByNcdWithOptions(request, runtime);
}

ListLeniPrivateIpAddressesResponse Alibabacloud_Eflo20220530::Client::listLeniPrivateIpAddressesWithOptions(shared_ptr<ListLeniPrivateIpAddressesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticNetworkInterfaceId)) {
    body->insert(pair<string, string>("ElasticNetworkInterfaceId", *request->elasticNetworkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipName)) {
    body->insert(pair<string, string>("IpName", *request->ipName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIpAddress)) {
    body->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLeniPrivateIpAddresses"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLeniPrivateIpAddressesResponse(callApi(params, req, runtime));
}

ListLeniPrivateIpAddressesResponse Alibabacloud_Eflo20220530::Client::listLeniPrivateIpAddresses(shared_ptr<ListLeniPrivateIpAddressesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLeniPrivateIpAddressesWithOptions(request, runtime);
}

ListLniPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::listLniPrivateIpAddressWithOptions(shared_ptr<ListLniPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    body->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipName)) {
    body->insert(pair<string, string>("IpName", *request->ipName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    body->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLniPrivateIpAddress"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLniPrivateIpAddressResponse(callApi(params, req, runtime));
}

ListLniPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::listLniPrivateIpAddress(shared_ptr<ListLniPrivateIpAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLniPrivateIpAddressWithOptions(request, runtime);
}

ListNetworkInterfacesResponse Alibabacloud_Eflo20220530::Client::listNetworkInterfacesWithOptions(shared_ptr<ListNetworkInterfacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    body->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    body->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetId)) {
    body->insert(pair<string, string>("SubnetId", *request->subnetId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListNetworkInterfacesRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<ListNetworkInterfacesRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNetworkInterfaces"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNetworkInterfacesResponse(callApi(params, req, runtime));
}

ListNetworkInterfacesResponse Alibabacloud_Eflo20220530::Client::listNetworkInterfaces(shared_ptr<ListNetworkInterfacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNetworkInterfacesWithOptions(request, runtime);
}

ListNodeInfosForPodResponse Alibabacloud_Eflo20220530::Client::listNodeInfosForPodWithOptions(shared_ptr<ListNodeInfosForPodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodeInfosForPod"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodeInfosForPodResponse(callApi(params, req, runtime));
}

ListNodeInfosForPodResponse Alibabacloud_Eflo20220530::Client::listNodeInfosForPod(shared_ptr<ListNodeInfosForPodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodeInfosForPodWithOptions(request, runtime);
}

ListSubnetsResponse Alibabacloud_Eflo20220530::Client::listSubnetsWithOptions(shared_ptr<ListSubnetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetId)) {
    body->insert(pair<string, string>("SubnetId", *request->subnetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetName)) {
    body->insert(pair<string, string>("SubnetName", *request->subnetName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListSubnetsRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<ListSubnetsRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubnets"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubnetsResponse(callApi(params, req, runtime));
}

ListSubnetsResponse Alibabacloud_Eflo20220530::Client::listSubnets(shared_ptr<ListSubnetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSubnetsWithOptions(request, runtime);
}

ListVccFlowInfosResponse Alibabacloud_Eflo20220530::Client::listVccFlowInfosWithOptions(shared_ptr<ListVccFlowInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    body->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    body->insert(pair<string, long>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    body->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    body->insert(pair<string, long>("To", *request->to));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVccFlowInfos"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVccFlowInfosResponse(callApi(params, req, runtime));
}

ListVccFlowInfosResponse Alibabacloud_Eflo20220530::Client::listVccFlowInfos(shared_ptr<ListVccFlowInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVccFlowInfosWithOptions(request, runtime);
}

ListVccGrantRulesResponse Alibabacloud_Eflo20220530::Client::listVccGrantRulesWithOptions(shared_ptr<ListVccGrantRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forSelect)) {
    body->insert(pair<string, bool>("ForSelect", *request->forSelect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantRuleId)) {
    body->insert(pair<string, string>("GrantRuleId", *request->grantRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantTenantId)) {
    body->insert(pair<string, string>("GrantTenantId", *request->grantTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVccGrantRules"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVccGrantRulesResponse(callApi(params, req, runtime));
}

ListVccGrantRulesResponse Alibabacloud_Eflo20220530::Client::listVccGrantRules(shared_ptr<ListVccGrantRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVccGrantRulesWithOptions(request, runtime);
}

ListVccRouteEntriesResponse Alibabacloud_Eflo20220530::Client::listVccRouteEntriesWithOptions(shared_ptr<ListVccRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidrBlock)) {
    body->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreDetailedRouteEntry)) {
    body->insert(pair<string, bool>("IgnoreDetailedRouteEntry", *request->ignoreDetailedRouteEntry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextHopId)) {
    body->insert(pair<string, string>("NextHopId", *request->nextHopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextHopType)) {
    body->insert(pair<string, string>("NextHopType", *request->nextHopType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeType)) {
    body->insert(pair<string, string>("RouteType", *request->routeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdRouteEntryId)) {
    body->insert(pair<string, string>("VpdRouteEntryId", *request->vpdRouteEntryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVccRouteEntries"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVccRouteEntriesResponse(callApi(params, req, runtime));
}

ListVccRouteEntriesResponse Alibabacloud_Eflo20220530::Client::listVccRouteEntries(shared_ptr<ListVccRouteEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVccRouteEntriesWithOptions(request, runtime);
}

ListVccsResponse Alibabacloud_Eflo20220530::Client::listVccsWithOptions(shared_ptr<ListVccsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    body->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    body->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exStatus)) {
    body->insert(pair<string, string>("ExStatus", *request->exStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterErId)) {
    body->insert(pair<string, string>("FilterErId", *request->filterErId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListVccsRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<ListVccsRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVccs"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVccsResponse(callApi(params, req, runtime));
}

ListVccsResponse Alibabacloud_Eflo20220530::Client::listVccs(shared_ptr<ListVccsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVccsWithOptions(request, runtime);
}

ListVpdGrantRulesResponse Alibabacloud_Eflo20220530::Client::listVpdGrantRulesWithOptions(shared_ptr<ListVpdGrantRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forSelect)) {
    body->insert(pair<string, bool>("ForSelect", *request->forSelect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantRuleId)) {
    body->insert(pair<string, string>("GrantRuleId", *request->grantRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantTenantId)) {
    body->insert(pair<string, string>("GrantTenantId", *request->grantTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVpdGrantRules"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVpdGrantRulesResponse(callApi(params, req, runtime));
}

ListVpdGrantRulesResponse Alibabacloud_Eflo20220530::Client::listVpdGrantRules(shared_ptr<ListVpdGrantRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVpdGrantRulesWithOptions(request, runtime);
}

ListVpdRouteEntriesResponse Alibabacloud_Eflo20220530::Client::listVpdRouteEntriesWithOptions(shared_ptr<ListVpdRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidrBlock)) {
    body->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreDetailedRouteEntry)) {
    body->insert(pair<string, bool>("IgnoreDetailedRouteEntry", *request->ignoreDetailedRouteEntry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextHopId)) {
    body->insert(pair<string, string>("NextHopId", *request->nextHopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextHopType)) {
    body->insert(pair<string, string>("NextHopType", *request->nextHopType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeType)) {
    body->insert(pair<string, string>("RouteType", *request->routeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdRouteEntryId)) {
    body->insert(pair<string, string>("VpdRouteEntryId", *request->vpdRouteEntryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVpdRouteEntries"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVpdRouteEntriesResponse(callApi(params, req, runtime));
}

ListVpdRouteEntriesResponse Alibabacloud_Eflo20220530::Client::listVpdRouteEntries(shared_ptr<ListVpdRouteEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVpdRouteEntriesWithOptions(request, runtime);
}

ListVpdsResponse Alibabacloud_Eflo20220530::Client::listVpdsWithOptions(shared_ptr<ListVpdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterErId)) {
    body->insert(pair<string, string>("FilterErId", *request->filterErId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forSelect)) {
    body->insert(pair<string, bool>("ForSelect", *request->forSelect));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListVpdsRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<ListVpdsRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdName)) {
    body->insert(pair<string, string>("VpdName", *request->vpdName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withDependence)) {
    body->insert(pair<string, bool>("WithDependence", *request->withDependence));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withoutVcc)) {
    body->insert(pair<string, bool>("WithoutVcc", *request->withoutVcc));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVpds"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVpdsResponse(callApi(params, req, runtime));
}

ListVpdsResponse Alibabacloud_Eflo20220530::Client::listVpds(shared_ptr<ListVpdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVpdsWithOptions(request, runtime);
}

QueryInstanceNcdResponse Alibabacloud_Eflo20220530::Client::queryInstanceNcdWithOptions(shared_ptr<QueryInstanceNcdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId1)) {
    body->insert(pair<string, string>("InstanceId1", *request->instanceId1));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId2)) {
    body->insert(pair<string, string>("InstanceId2", *request->instanceId2));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryInstanceNcd"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryInstanceNcdResponse(callApi(params, req, runtime));
}

QueryInstanceNcdResponse Alibabacloud_Eflo20220530::Client::queryInstanceNcd(shared_ptr<QueryInstanceNcdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInstanceNcdWithOptions(request, runtime);
}

RefundVccResponse Alibabacloud_Eflo20220530::Client::refundVccWithOptions(shared_ptr<RefundVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefundVcc"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefundVccResponse(callApi(params, req, runtime));
}

RefundVccResponse Alibabacloud_Eflo20220530::Client::refundVcc(shared_ptr<RefundVccRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refundVccWithOptions(request, runtime);
}

RetryVccResponse Alibabacloud_Eflo20220530::Client::retryVccWithOptions(shared_ptr<RetryVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetryVcc"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RetryVccResponse(callApi(params, req, runtime));
}

RetryVccResponse Alibabacloud_Eflo20220530::Client::retryVcc(shared_ptr<RetryVccRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return retryVccWithOptions(request, runtime);
}

UnAssignPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::unAssignPrivateIpAddressWithOptions(shared_ptr<UnAssignPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipName)) {
    body->insert(pair<string, string>("IpName", *request->ipName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    body->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIpAddress)) {
    body->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetId)) {
    body->insert(pair<string, string>("SubnetId", *request->subnetId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnAssignPrivateIpAddress"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnAssignPrivateIpAddressResponse(callApi(params, req, runtime));
}

UnAssignPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::unAssignPrivateIpAddress(shared_ptr<UnAssignPrivateIpAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unAssignPrivateIpAddressWithOptions(request, runtime);
}

UnAssociateVpdCidrBlockResponse Alibabacloud_Eflo20220530::Client::unAssociateVpdCidrBlockWithOptions(shared_ptr<UnAssociateVpdCidrBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secondaryCidrBlock)) {
    body->insert(pair<string, string>("SecondaryCidrBlock", *request->secondaryCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnAssociateVpdCidrBlock"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnAssociateVpdCidrBlockResponse(callApi(params, req, runtime));
}

UnAssociateVpdCidrBlockResponse Alibabacloud_Eflo20220530::Client::unAssociateVpdCidrBlock(shared_ptr<UnAssociateVpdCidrBlockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unAssociateVpdCidrBlockWithOptions(request, runtime);
}

UnassignLeniPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::unassignLeniPrivateIpAddressWithOptions(shared_ptr<UnassignLeniPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticNetworkInterfaceId)) {
    body->insert(pair<string, string>("ElasticNetworkInterfaceId", *request->elasticNetworkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipName)) {
    body->insert(pair<string, string>("IpName", *request->ipName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnassignLeniPrivateIpAddress"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnassignLeniPrivateIpAddressResponse(callApi(params, req, runtime));
}

UnassignLeniPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::unassignLeniPrivateIpAddress(shared_ptr<UnassignLeniPrivateIpAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unassignLeniPrivateIpAddressWithOptions(request, runtime);
}

UpdateElasticNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::updateElasticNetworkInterfaceWithOptions(shared_ptr<UpdateElasticNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticNetworkInterfaceId)) {
    body->insert(pair<string, string>("ElasticNetworkInterfaceId", *request->elasticNetworkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    body->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateElasticNetworkInterface"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateElasticNetworkInterfaceResponse(callApi(params, req, runtime));
}

UpdateElasticNetworkInterfaceResponse Alibabacloud_Eflo20220530::Client::updateElasticNetworkInterface(shared_ptr<UpdateElasticNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateElasticNetworkInterfaceWithOptions(request, runtime);
}

UpdateErResponse Alibabacloud_Eflo20220530::Client::updateErWithOptions(shared_ptr<UpdateErRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erName)) {
    body->insert(pair<string, string>("ErName", *request->erName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEr"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateErResponse(callApi(params, req, runtime));
}

UpdateErResponse Alibabacloud_Eflo20220530::Client::updateEr(shared_ptr<UpdateErRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateErWithOptions(request, runtime);
}

UpdateErAttachmentResponse Alibabacloud_Eflo20220530::Client::updateErAttachmentWithOptions(shared_ptr<UpdateErAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->erAttachmentId)) {
    body->insert(pair<string, string>("ErAttachmentId", *request->erAttachmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erAttachmentName)) {
    body->insert(pair<string, string>("ErAttachmentName", *request->erAttachmentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateErAttachment"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateErAttachmentResponse(callApi(params, req, runtime));
}

UpdateErAttachmentResponse Alibabacloud_Eflo20220530::Client::updateErAttachment(shared_ptr<UpdateErAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateErAttachmentWithOptions(request, runtime);
}

UpdateErRouteMapResponse Alibabacloud_Eflo20220530::Client::updateErRouteMapWithOptions(shared_ptr<UpdateErRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erId)) {
    body->insert(pair<string, string>("ErId", *request->erId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->erRouteMapId)) {
    body->insert(pair<string, string>("ErRouteMapId", *request->erRouteMapId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateErRouteMap"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateErRouteMapResponse(callApi(params, req, runtime));
}

UpdateErRouteMapResponse Alibabacloud_Eflo20220530::Client::updateErRouteMap(shared_ptr<UpdateErRouteMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateErRouteMapWithOptions(request, runtime);
}

UpdateLeniPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::updateLeniPrivateIpAddressWithOptions(shared_ptr<UpdateLeniPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticNetworkInterfaceId)) {
    body->insert(pair<string, string>("ElasticNetworkInterfaceId", *request->elasticNetworkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipName)) {
    body->insert(pair<string, string>("IpName", *request->ipName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLeniPrivateIpAddress"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLeniPrivateIpAddressResponse(callApi(params, req, runtime));
}

UpdateLeniPrivateIpAddressResponse Alibabacloud_Eflo20220530::Client::updateLeniPrivateIpAddress(shared_ptr<UpdateLeniPrivateIpAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLeniPrivateIpAddressWithOptions(request, runtime);
}

UpdateSubnetResponse Alibabacloud_Eflo20220530::Client::updateSubnetWithOptions(shared_ptr<UpdateSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetId)) {
    body->insert(pair<string, string>("SubnetId", *request->subnetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetName)) {
    body->insert(pair<string, string>("SubnetName", *request->subnetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSubnet"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSubnetResponse(callApi(params, req, runtime));
}

UpdateSubnetResponse Alibabacloud_Eflo20220530::Client::updateSubnet(shared_ptr<UpdateSubnetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSubnetWithOptions(request, runtime);
}

UpdateVccResponse Alibabacloud_Eflo20220530::Client::updateVccWithOptions(shared_ptr<UpdateVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    body->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccName)) {
    body->insert(pair<string, string>("VccName", *request->vccName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVcc"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVccResponse(callApi(params, req, runtime));
}

UpdateVccResponse Alibabacloud_Eflo20220530::Client::updateVcc(shared_ptr<UpdateVccRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVccWithOptions(request, runtime);
}

UpdateVpdResponse Alibabacloud_Eflo20220530::Client::updateVpdWithOptions(shared_ptr<UpdateVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdName)) {
    body->insert(pair<string, string>("VpdName", *request->vpdName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVpd"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVpdResponse(callApi(params, req, runtime));
}

UpdateVpdResponse Alibabacloud_Eflo20220530::Client::updateVpd(shared_ptr<UpdateVpdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVpdWithOptions(request, runtime);
}

