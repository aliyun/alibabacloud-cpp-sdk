// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/io_tcc20210513.hpp>
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

using namespace Alibabacloud_IoTCC20210513;

Alibabacloud_IoTCC20210513::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("iotcc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_IoTCC20210513::Client::getEndpoint(shared_ptr<string> productId,
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

AddCidrToConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::addCidrToConnectionPoolWithOptions(shared_ptr<AddCidrToConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("Cidrs", *request->cidrs));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCidrToConnectionPool"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCidrToConnectionPoolResponse(callApi(params, req, runtime));
}

AddCidrToConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::addCidrToConnectionPool(shared_ptr<AddCidrToConnectionPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCidrToConnectionPoolWithOptions(request, runtime);
}

AddIoTCloudConnectorToGroupResponse Alibabacloud_IoTCC20210513::Client::addIoTCloudConnectorToGroupWithOptions(shared_ptr<AddIoTCloudConnectorToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  query->insert(pair<string, vector<string>>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddIoTCloudConnectorToGroup"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddIoTCloudConnectorToGroupResponse(callApi(params, req, runtime));
}

AddIoTCloudConnectorToGroupResponse Alibabacloud_IoTCC20210513::Client::addIoTCloudConnectorToGroup(shared_ptr<AddIoTCloudConnectorToGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addIoTCloudConnectorToGroupWithOptions(request, runtime);
}

AssociateIpWithConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::associateIpWithConnectionPoolWithOptions(shared_ptr<AssociateIpWithConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, vector<string>>("Ips", *request->ips));
  query->insert(pair<string, string>("IpsFilePath", *request->ipsFilePath));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateIpWithConnectionPool"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateIpWithConnectionPoolResponse(callApi(params, req, runtime));
}

AssociateIpWithConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::associateIpWithConnectionPool(shared_ptr<AssociateIpWithConnectionPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateIpWithConnectionPoolWithOptions(request, runtime);
}

AssociateVSwitchWithIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::associateVSwitchWithIoTCloudConnectorWithOptions(shared_ptr<AssociateVSwitchWithIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("VSwitchList", *request->vSwitchList));
  query->insert(pair<string, string>("VpcId", *request->vpcId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateVSwitchWithIoTCloudConnector"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateVSwitchWithIoTCloudConnectorResponse(callApi(params, req, runtime));
}

AssociateVSwitchWithIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::associateVSwitchWithIoTCloudConnector(shared_ptr<AssociateVSwitchWithIoTCloudConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateVSwitchWithIoTCloudConnectorWithOptions(request, runtime);
}

CreateAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::createAuthorizationRuleWithOptions(shared_ptr<CreateAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AuthorizationRuleDescription", *request->authorizationRuleDescription));
  query->insert(pair<string, string>("AuthorizationRuleName", *request->authorizationRuleName));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Destination", *request->destination));
  query->insert(pair<string, string>("DestinationType", *request->destinationType));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("Policy", *request->policy));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("SourceCidrs", *request->sourceCidrs));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAuthorizationRule"))},
    {"version", boost::any(string("2021-05-13"))},
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

CreateAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::createAuthorizationRule(shared_ptr<CreateAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuthorizationRuleWithOptions(request, runtime);
}

CreateConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::createConnectionPoolWithOptions(shared_ptr<CreateConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("Cidrs", *request->cidrs));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("ConnectionPoolDescription", *request->connectionPoolDescription));
  query->insert(pair<string, string>("ConnectionPoolName", *request->connectionPoolName));
  query->insert(pair<string, long>("Count", *request->count));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConnectionPool"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConnectionPoolResponse(callApi(params, req, runtime));
}

CreateConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::createConnectionPool(shared_ptr<CreateConnectionPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConnectionPoolWithOptions(request, runtime);
}

CreateGroupAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::createGroupAuthorizationRuleWithOptions(shared_ptr<CreateGroupAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AuthorizationRuleDescription", *request->authorizationRuleDescription));
  query->insert(pair<string, string>("AuthorizationRuleName", *request->authorizationRuleName));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Destination", *request->destination));
  query->insert(pair<string, string>("DestinationType", *request->destinationType));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  query->insert(pair<string, string>("Policy", *request->policy));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("SourceCidrs", *request->sourceCidrs));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGroupAuthorizationRule"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGroupAuthorizationRuleResponse(callApi(params, req, runtime));
}

CreateGroupAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::createGroupAuthorizationRule(shared_ptr<CreateGroupAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGroupAuthorizationRuleWithOptions(request, runtime);
}

CreateIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::createIoTCloudConnectorWithOptions(shared_ptr<CreateIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("APN", *request->APN));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("ISP", *request->ISP));
  query->insert(pair<string, string>("IoTCloudConnectorDescription", *request->ioTCloudConnectorDescription));
  query->insert(pair<string, string>("IoTCloudConnectorName", *request->ioTCloudConnectorName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, long>("ResourceUid", *request->resourceUid));
  query->insert(pair<string, bool>("WildcardDomainEnabled", *request->wildcardDomainEnabled));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIoTCloudConnector"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIoTCloudConnectorResponse(callApi(params, req, runtime));
}

CreateIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::createIoTCloudConnector(shared_ptr<CreateIoTCloudConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIoTCloudConnectorWithOptions(request, runtime);
}

CreateIoTCloudConnectorGroupResponse Alibabacloud_IoTCC20210513::Client::createIoTCloudConnectorGroupWithOptions(shared_ptr<CreateIoTCloudConnectorGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIoTCloudConnectorGroup"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIoTCloudConnectorGroupResponse(callApi(params, req, runtime));
}

CreateIoTCloudConnectorGroupResponse Alibabacloud_IoTCC20210513::Client::createIoTCloudConnectorGroup(shared_ptr<CreateIoTCloudConnectorGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIoTCloudConnectorGroupWithOptions(request, runtime);
}

CreateServiceResponse Alibabacloud_IoTCC20210513::Client::createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ServiceDescription", *request->serviceDescription));
  query->insert(pair<string, string>("ServiceName", *request->serviceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateService"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceResponse(callApi(params, req, runtime));
}

CreateServiceResponse Alibabacloud_IoTCC20210513::Client::createService(shared_ptr<CreateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceWithOptions(request, runtime);
}

CreateServiceEntryResponse Alibabacloud_IoTCC20210513::Client::createServiceEntryWithOptions(shared_ptr<CreateServiceEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ServiceEntryDescription", *request->serviceEntryDescription));
  query->insert(pair<string, string>("ServiceEntryName", *request->serviceEntryName));
  query->insert(pair<string, string>("ServiceId", *request->serviceId));
  query->insert(pair<string, string>("Target", *request->target));
  query->insert(pair<string, string>("TargetType", *request->targetType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceEntry"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceEntryResponse(callApi(params, req, runtime));
}

CreateServiceEntryResponse Alibabacloud_IoTCC20210513::Client::createServiceEntry(shared_ptr<CreateServiceEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceEntryWithOptions(request, runtime);
}

DeleteAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::deleteAuthorizationRuleWithOptions(shared_ptr<DeleteAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AuthorizationRuleId", *request->authorizationRuleId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAuthorizationRule"))},
    {"version", boost::any(string("2021-05-13"))},
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

DeleteAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::deleteAuthorizationRule(shared_ptr<DeleteAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAuthorizationRuleWithOptions(request, runtime);
}

DeleteConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::deleteConnectionPoolWithOptions(shared_ptr<DeleteConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConnectionPool"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConnectionPoolResponse(callApi(params, req, runtime));
}

DeleteConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::deleteConnectionPool(shared_ptr<DeleteConnectionPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConnectionPoolWithOptions(request, runtime);
}

DeleteGroupAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::deleteGroupAuthorizationRuleWithOptions(shared_ptr<DeleteGroupAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AuthorizationRuleId", *request->authorizationRuleId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGroupAuthorizationRule"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGroupAuthorizationRuleResponse(callApi(params, req, runtime));
}

DeleteGroupAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::deleteGroupAuthorizationRule(shared_ptr<DeleteGroupAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGroupAuthorizationRuleWithOptions(request, runtime);
}

DeleteIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::deleteIoTCloudConnectorWithOptions(shared_ptr<DeleteIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIoTCloudConnector"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIoTCloudConnectorResponse(callApi(params, req, runtime));
}

DeleteIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::deleteIoTCloudConnector(shared_ptr<DeleteIoTCloudConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIoTCloudConnectorWithOptions(request, runtime);
}

DeleteIoTCloudConnectorGroupResponse Alibabacloud_IoTCC20210513::Client::deleteIoTCloudConnectorGroupWithOptions(shared_ptr<DeleteIoTCloudConnectorGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIoTCloudConnectorGroup"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIoTCloudConnectorGroupResponse(callApi(params, req, runtime));
}

DeleteIoTCloudConnectorGroupResponse Alibabacloud_IoTCC20210513::Client::deleteIoTCloudConnectorGroup(shared_ptr<DeleteIoTCloudConnectorGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIoTCloudConnectorGroupWithOptions(request, runtime);
}

DeleteServiceResponse Alibabacloud_IoTCC20210513::Client::deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ServiceId", *request->serviceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteService"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceResponse(callApi(params, req, runtime));
}

DeleteServiceResponse Alibabacloud_IoTCC20210513::Client::deleteService(shared_ptr<DeleteServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceWithOptions(request, runtime);
}

DeleteServiceEntryResponse Alibabacloud_IoTCC20210513::Client::deleteServiceEntryWithOptions(shared_ptr<DeleteServiceEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ServiceEntryId", *request->serviceEntryId));
  query->insert(pair<string, string>("ServiceId", *request->serviceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceEntry"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceEntryResponse(callApi(params, req, runtime));
}

DeleteServiceEntryResponse Alibabacloud_IoTCC20210513::Client::deleteServiceEntry(shared_ptr<DeleteServiceEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceEntryWithOptions(request, runtime);
}

DisableIoTCloudConnectorAccessLogResponse Alibabacloud_IoTCC20210513::Client::disableIoTCloudConnectorAccessLogWithOptions(shared_ptr<DisableIoTCloudConnectorAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableIoTCloudConnectorAccessLog"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableIoTCloudConnectorAccessLogResponse(callApi(params, req, runtime));
}

DisableIoTCloudConnectorAccessLogResponse Alibabacloud_IoTCC20210513::Client::disableIoTCloudConnectorAccessLog(shared_ptr<DisableIoTCloudConnectorAccessLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableIoTCloudConnectorAccessLogWithOptions(request, runtime);
}

DissociateIpFromConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::dissociateIpFromConnectionPoolWithOptions(shared_ptr<DissociateIpFromConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, vector<string>>("Ips", *request->ips));
  query->insert(pair<string, string>("IpsFilePath", *request->ipsFilePath));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DissociateIpFromConnectionPool"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DissociateIpFromConnectionPoolResponse(callApi(params, req, runtime));
}

DissociateIpFromConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::dissociateIpFromConnectionPool(shared_ptr<DissociateIpFromConnectionPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateIpFromConnectionPoolWithOptions(request, runtime);
}

DissociateVSwitchFromIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::dissociateVSwitchFromIoTCloudConnectorWithOptions(shared_ptr<DissociateVSwitchFromIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DissociateVSwitchFromIoTCloudConnector"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DissociateVSwitchFromIoTCloudConnectorResponse(callApi(params, req, runtime));
}

DissociateVSwitchFromIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::dissociateVSwitchFromIoTCloudConnector(shared_ptr<DissociateVSwitchFromIoTCloudConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateVSwitchFromIoTCloudConnectorWithOptions(request, runtime);
}

EnableIoTCloudConnectorAccessLogResponse Alibabacloud_IoTCC20210513::Client::enableIoTCloudConnectorAccessLogWithOptions(shared_ptr<EnableIoTCloudConnectorAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccessLogSlsLogStore", *request->accessLogSlsLogStore));
  query->insert(pair<string, string>("AccessLogSlsProject", *request->accessLogSlsProject));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableIoTCloudConnectorAccessLog"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableIoTCloudConnectorAccessLogResponse(callApi(params, req, runtime));
}

EnableIoTCloudConnectorAccessLogResponse Alibabacloud_IoTCC20210513::Client::enableIoTCloudConnectorAccessLog(shared_ptr<EnableIoTCloudConnectorAccessLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableIoTCloudConnectorAccessLogWithOptions(request, runtime);
}

GetConnectionPoolIpOperationResultResponse Alibabacloud_IoTCC20210513::Client::getConnectionPoolIpOperationResultWithOptions(shared_ptr<GetConnectionPoolIpOperationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("QueryRequestId", *request->queryRequestId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConnectionPoolIpOperationResult"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConnectionPoolIpOperationResultResponse(callApi(params, req, runtime));
}

GetConnectionPoolIpOperationResultResponse Alibabacloud_IoTCC20210513::Client::getConnectionPoolIpOperationResult(shared_ptr<GetConnectionPoolIpOperationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConnectionPoolIpOperationResultWithOptions(request, runtime);
}

GetIoTCloudConnectorAccessLogResponse Alibabacloud_IoTCC20210513::Client::getIoTCloudConnectorAccessLogWithOptions(shared_ptr<GetIoTCloudConnectorAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIoTCloudConnectorAccessLog"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIoTCloudConnectorAccessLogResponse(callApi(params, req, runtime));
}

GetIoTCloudConnectorAccessLogResponse Alibabacloud_IoTCC20210513::Client::getIoTCloudConnectorAccessLog(shared_ptr<GetIoTCloudConnectorAccessLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIoTCloudConnectorAccessLogWithOptions(request, runtime);
}

GetStsInfoAndOssPathResponse Alibabacloud_IoTCC20210513::Client::getStsInfoAndOssPathWithOptions(shared_ptr<GetStsInfoAndOssPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("FileName", *request->fileName));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStsInfoAndOssPath"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStsInfoAndOssPathResponse(callApi(params, req, runtime));
}

GetStsInfoAndOssPathResponse Alibabacloud_IoTCC20210513::Client::getStsInfoAndOssPath(shared_ptr<GetStsInfoAndOssPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStsInfoAndOssPathWithOptions(request, runtime);
}

GrantVirtualBorderRouterResponse Alibabacloud_IoTCC20210513::Client::grantVirtualBorderRouterWithOptions(shared_ptr<GrantVirtualBorderRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("VirtualBorderRouterId", *request->virtualBorderRouterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantVirtualBorderRouter"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantVirtualBorderRouterResponse(callApi(params, req, runtime));
}

GrantVirtualBorderRouterResponse Alibabacloud_IoTCC20210513::Client::grantVirtualBorderRouter(shared_ptr<GrantVirtualBorderRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantVirtualBorderRouterWithOptions(request, runtime);
}

ListAPNsResponse Alibabacloud_IoTCC20210513::Client::listAPNsWithOptions(shared_ptr<ListAPNsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("APN", *request->APN));
  query->insert(pair<string, string>("ISP", *request->ISP));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAPNs"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAPNsResponse(callApi(params, req, runtime));
}

ListAPNsResponse Alibabacloud_IoTCC20210513::Client::listAPNs(shared_ptr<ListAPNsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAPNsWithOptions(request, runtime);
}

ListAuthorizationRulesResponse Alibabacloud_IoTCC20210513::Client::listAuthorizationRulesWithOptions(shared_ptr<ListAuthorizationRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("AuthorizationRuleIds", *request->authorizationRuleIds));
  query->insert(pair<string, vector<string>>("AuthorizationRuleName", *request->authorizationRuleName));
  query->insert(pair<string, vector<string>>("AuthorizationRuleStatus", *request->authorizationRuleStatus));
  query->insert(pair<string, vector<string>>("Destination", *request->destination));
  query->insert(pair<string, vector<string>>("DestinationType", *request->destinationType));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, vector<string>>("Policy", *request->policy));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAuthorizationRules"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAuthorizationRulesResponse(callApi(params, req, runtime));
}

ListAuthorizationRulesResponse Alibabacloud_IoTCC20210513::Client::listAuthorizationRules(shared_ptr<ListAuthorizationRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthorizationRulesWithOptions(request, runtime);
}

ListConnectionPoolAllIpsResponse Alibabacloud_IoTCC20210513::Client::listConnectionPoolAllIpsWithOptions(shared_ptr<ListConnectionPoolAllIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("Ip", *request->ip));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConnectionPoolAllIps"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConnectionPoolAllIpsResponse(callApi(params, req, runtime));
}

ListConnectionPoolAllIpsResponse Alibabacloud_IoTCC20210513::Client::listConnectionPoolAllIps(shared_ptr<ListConnectionPoolAllIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConnectionPoolAllIpsWithOptions(request, runtime);
}

ListConnectionPoolIpsResponse Alibabacloud_IoTCC20210513::Client::listConnectionPoolIpsWithOptions(shared_ptr<ListConnectionPoolIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("Ip", *request->ip));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConnectionPoolIps"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConnectionPoolIpsResponse(callApi(params, req, runtime));
}

ListConnectionPoolIpsResponse Alibabacloud_IoTCC20210513::Client::listConnectionPoolIps(shared_ptr<ListConnectionPoolIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConnectionPoolIpsWithOptions(request, runtime);
}

ListConnectionPoolsResponse Alibabacloud_IoTCC20210513::Client::listConnectionPoolsWithOptions(shared_ptr<ListConnectionPoolsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("ConnectionPoolIds", *request->connectionPoolIds));
  query->insert(pair<string, vector<string>>("ConnectionPoolName", *request->connectionPoolName));
  query->insert(pair<string, vector<string>>("ConnectionPoolStatus", *request->connectionPoolStatus));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConnectionPools"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConnectionPoolsResponse(callApi(params, req, runtime));
}

ListConnectionPoolsResponse Alibabacloud_IoTCC20210513::Client::listConnectionPools(shared_ptr<ListConnectionPoolsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConnectionPoolsWithOptions(request, runtime);
}

ListGroupAuthorizationRulesResponse Alibabacloud_IoTCC20210513::Client::listGroupAuthorizationRulesWithOptions(shared_ptr<ListGroupAuthorizationRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("AuthorizationRuleIds", *request->authorizationRuleIds));
  query->insert(pair<string, vector<string>>("AuthorizationRuleName", *request->authorizationRuleName));
  query->insert(pair<string, vector<string>>("AuthorizationRuleStatus", *request->authorizationRuleStatus));
  query->insert(pair<string, vector<string>>("Destination", *request->destination));
  query->insert(pair<string, vector<string>>("DestinationType", *request->destinationType));
  query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, vector<string>>("Policy", *request->policy));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGroupAuthorizationRules"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGroupAuthorizationRulesResponse(callApi(params, req, runtime));
}

ListGroupAuthorizationRulesResponse Alibabacloud_IoTCC20210513::Client::listGroupAuthorizationRules(shared_ptr<ListGroupAuthorizationRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGroupAuthorizationRulesWithOptions(request, runtime);
}

ListIoTCloudConnectorAvailableZonesResponse Alibabacloud_IoTCC20210513::Client::listIoTCloudConnectorAvailableZonesWithOptions(shared_ptr<ListIoTCloudConnectorAvailableZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIoTCloudConnectorAvailableZones"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIoTCloudConnectorAvailableZonesResponse(callApi(params, req, runtime));
}

ListIoTCloudConnectorAvailableZonesResponse Alibabacloud_IoTCC20210513::Client::listIoTCloudConnectorAvailableZones(shared_ptr<ListIoTCloudConnectorAvailableZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIoTCloudConnectorAvailableZonesWithOptions(request, runtime);
}

ListIoTCloudConnectorGroupsResponse Alibabacloud_IoTCC20210513::Client::listIoTCloudConnectorGroupsWithOptions(shared_ptr<ListIoTCloudConnectorGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("IoTCloudConnectorGroupIds", *request->ioTCloudConnectorGroupIds));
  query->insert(pair<string, vector<string>>("IoTCloudConnectorGroupName", *request->ioTCloudConnectorGroupName));
  query->insert(pair<string, vector<string>>("IoTCloudConnectorGroupStatus", *request->ioTCloudConnectorGroupStatus));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIoTCloudConnectorGroups"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIoTCloudConnectorGroupsResponse(callApi(params, req, runtime));
}

ListIoTCloudConnectorGroupsResponse Alibabacloud_IoTCC20210513::Client::listIoTCloudConnectorGroups(shared_ptr<ListIoTCloudConnectorGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIoTCloudConnectorGroupsWithOptions(request, runtime);
}

ListIoTCloudConnectorsResponse Alibabacloud_IoTCC20210513::Client::listIoTCloudConnectorsWithOptions(shared_ptr<ListIoTCloudConnectorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("APN", *request->APN));
  query->insert(pair<string, vector<string>>("ISP", *request->ISP));
  query->insert(pair<string, vector<string>>("IoTCloudConnectorIds", *request->ioTCloudConnectorIds));
  query->insert(pair<string, vector<string>>("IoTCloudConnectorName", *request->ioTCloudConnectorName));
  query->insert(pair<string, vector<string>>("IoTCloudConnectorStatus", *request->ioTCloudConnectorStatus));
  query->insert(pair<string, bool>("IsInGroup", *request->isInGroup));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("VpcId", *request->vpcId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIoTCloudConnectors"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIoTCloudConnectorsResponse(callApi(params, req, runtime));
}

ListIoTCloudConnectorsResponse Alibabacloud_IoTCC20210513::Client::listIoTCloudConnectors(shared_ptr<ListIoTCloudConnectorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIoTCloudConnectorsWithOptions(request, runtime);
}

ListRegionsResponse Alibabacloud_IoTCC20210513::Client::listRegionsWithOptions(shared_ptr<ListRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRegions"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRegionsResponse(callApi(params, req, runtime));
}

ListRegionsResponse Alibabacloud_IoTCC20210513::Client::listRegions(shared_ptr<ListRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRegionsWithOptions(request, runtime);
}

ListServiceResponse Alibabacloud_IoTCC20210513::Client::listServiceWithOptions(shared_ptr<ListServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("ResourceStatuses", *request->resourceStatuses));
  query->insert(pair<string, vector<string>>("ServiceIds", *request->serviceIds));
  query->insert(pair<string, vector<string>>("ServiceNames", *request->serviceNames));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListService"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceResponse(callApi(params, req, runtime));
}

ListServiceResponse Alibabacloud_IoTCC20210513::Client::listService(shared_ptr<ListServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceWithOptions(request, runtime);
}

ListServiceEntriesResponse Alibabacloud_IoTCC20210513::Client::listServiceEntriesWithOptions(shared_ptr<ListServiceEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("ServiceEntryIds", *request->serviceEntryIds));
  query->insert(pair<string, vector<string>>("ServiceEntryName", *request->serviceEntryName));
  query->insert(pair<string, vector<string>>("ServiceEntryStatus", *request->serviceEntryStatus));
  query->insert(pair<string, string>("ServiceId", *request->serviceId));
  query->insert(pair<string, vector<string>>("Target", *request->target));
  query->insert(pair<string, vector<string>>("TargetType", *request->targetType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceEntries"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceEntriesResponse(callApi(params, req, runtime));
}

ListServiceEntriesResponse Alibabacloud_IoTCC20210513::Client::listServiceEntries(shared_ptr<ListServiceEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceEntriesWithOptions(request, runtime);
}

OpenIoTCloudConnectorServiceResponse Alibabacloud_IoTCC20210513::Client::openIoTCloudConnectorServiceWithOptions(shared_ptr<OpenIoTCloudConnectorServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenIoTCloudConnectorService"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenIoTCloudConnectorServiceResponse(callApi(params, req, runtime));
}

OpenIoTCloudConnectorServiceResponse Alibabacloud_IoTCC20210513::Client::openIoTCloudConnectorService(shared_ptr<OpenIoTCloudConnectorServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openIoTCloudConnectorServiceWithOptions(request, runtime);
}

RemoveIoTCloudConnectorFromGroupResponse Alibabacloud_IoTCC20210513::Client::removeIoTCloudConnectorFromGroupWithOptions(shared_ptr<RemoveIoTCloudConnectorFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  query->insert(pair<string, vector<string>>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveIoTCloudConnectorFromGroup"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveIoTCloudConnectorFromGroupResponse(callApi(params, req, runtime));
}

RemoveIoTCloudConnectorFromGroupResponse Alibabacloud_IoTCC20210513::Client::removeIoTCloudConnectorFromGroup(shared_ptr<RemoveIoTCloudConnectorFromGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeIoTCloudConnectorFromGroupWithOptions(request, runtime);
}

UpdateAuthorizationRuleAttributeResponse Alibabacloud_IoTCC20210513::Client::updateAuthorizationRuleAttributeWithOptions(shared_ptr<UpdateAuthorizationRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AuthorizationRuleDescription", *request->authorizationRuleDescription));
  query->insert(pair<string, string>("AuthorizationRuleId", *request->authorizationRuleId));
  query->insert(pair<string, string>("AuthorizationRuleName", *request->authorizationRuleName));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Destination", *request->destination));
  query->insert(pair<string, string>("DestinationType", *request->destinationType));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("Policy", *request->policy));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("SourceCidrs", *request->sourceCidrs));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAuthorizationRuleAttribute"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAuthorizationRuleAttributeResponse(callApi(params, req, runtime));
}

UpdateAuthorizationRuleAttributeResponse Alibabacloud_IoTCC20210513::Client::updateAuthorizationRuleAttribute(shared_ptr<UpdateAuthorizationRuleAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAuthorizationRuleAttributeWithOptions(request, runtime);
}

UpdateConnectionPoolAttributeResponse Alibabacloud_IoTCC20210513::Client::updateConnectionPoolAttributeWithOptions(shared_ptr<UpdateConnectionPoolAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("Cidrs", *request->cidrs));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("ConnectionPoolDescription", *request->connectionPoolDescription));
  query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  query->insert(pair<string, string>("ConnectionPoolName", *request->connectionPoolName));
  query->insert(pair<string, long>("Count", *request->count));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConnectionPoolAttribute"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConnectionPoolAttributeResponse(callApi(params, req, runtime));
}

UpdateConnectionPoolAttributeResponse Alibabacloud_IoTCC20210513::Client::updateConnectionPoolAttribute(shared_ptr<UpdateConnectionPoolAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConnectionPoolAttributeWithOptions(request, runtime);
}

UpdateGroupAuthorizationRuleAttributeResponse Alibabacloud_IoTCC20210513::Client::updateGroupAuthorizationRuleAttributeWithOptions(shared_ptr<UpdateGroupAuthorizationRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AuthorizationRuleDescription", *request->authorizationRuleDescription));
  query->insert(pair<string, string>("AuthorizationRuleId", *request->authorizationRuleId));
  query->insert(pair<string, string>("AuthorizationRuleName", *request->authorizationRuleName));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Destination", *request->destination));
  query->insert(pair<string, string>("DestinationType", *request->destinationType));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  query->insert(pair<string, string>("Policy", *request->policy));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("SourceCidrs", *request->sourceCidrs));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGroupAuthorizationRuleAttribute"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGroupAuthorizationRuleAttributeResponse(callApi(params, req, runtime));
}

UpdateGroupAuthorizationRuleAttributeResponse Alibabacloud_IoTCC20210513::Client::updateGroupAuthorizationRuleAttribute(shared_ptr<UpdateGroupAuthorizationRuleAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGroupAuthorizationRuleAttributeWithOptions(request, runtime);
}

UpdateIoTCloudConnectorAttributeResponse Alibabacloud_IoTCC20210513::Client::updateIoTCloudConnectorAttributeWithOptions(shared_ptr<UpdateIoTCloudConnectorAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorDescription", *request->ioTCloudConnectorDescription));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("IoTCloudConnectorName", *request->ioTCloudConnectorName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, bool>("WildcardDomainEnabled", *request->wildcardDomainEnabled));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIoTCloudConnectorAttribute"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIoTCloudConnectorAttributeResponse(callApi(params, req, runtime));
}

UpdateIoTCloudConnectorAttributeResponse Alibabacloud_IoTCC20210513::Client::updateIoTCloudConnectorAttribute(shared_ptr<UpdateIoTCloudConnectorAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIoTCloudConnectorAttributeWithOptions(request, runtime);
}

UpdateIoTCloudConnectorGroupAttributeResponse Alibabacloud_IoTCC20210513::Client::updateIoTCloudConnectorGroupAttributeWithOptions(shared_ptr<UpdateIoTCloudConnectorGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIoTCloudConnectorGroupAttribute"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIoTCloudConnectorGroupAttributeResponse(callApi(params, req, runtime));
}

UpdateIoTCloudConnectorGroupAttributeResponse Alibabacloud_IoTCC20210513::Client::updateIoTCloudConnectorGroupAttribute(shared_ptr<UpdateIoTCloudConnectorGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIoTCloudConnectorGroupAttributeWithOptions(request, runtime);
}

UpdateServiceAttributeResponse Alibabacloud_IoTCC20210513::Client::updateServiceAttributeWithOptions(shared_ptr<UpdateServiceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ServiceDescription", *request->serviceDescription));
  query->insert(pair<string, string>("ServiceId", *request->serviceId));
  query->insert(pair<string, string>("ServiceName", *request->serviceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceAttribute"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceAttributeResponse(callApi(params, req, runtime));
}

UpdateServiceAttributeResponse Alibabacloud_IoTCC20210513::Client::updateServiceAttribute(shared_ptr<UpdateServiceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServiceAttributeWithOptions(request, runtime);
}

UpdateServiceEntryAttributeResponse Alibabacloud_IoTCC20210513::Client::updateServiceEntryAttributeWithOptions(shared_ptr<UpdateServiceEntryAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ServiceEntryDescription", *request->serviceEntryDescription));
  query->insert(pair<string, string>("ServiceEntryId", *request->serviceEntryId));
  query->insert(pair<string, string>("ServiceEntryName", *request->serviceEntryName));
  query->insert(pair<string, string>("ServiceId", *request->serviceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceEntryAttribute"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceEntryAttributeResponse(callApi(params, req, runtime));
}

UpdateServiceEntryAttributeResponse Alibabacloud_IoTCC20210513::Client::updateServiceEntryAttribute(shared_ptr<UpdateServiceEntryAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServiceEntryAttributeWithOptions(request, runtime);
}

