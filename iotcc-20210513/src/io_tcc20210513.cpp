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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->cidrs)) {
    query->insert(pair<string, vector<string>>("Cidrs", *request->cidrs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPoolId)) {
    query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, vector<string>>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPoolId)) {
    query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ips)) {
    query->insert(pair<string, vector<string>>("Ips", *request->ips));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipsFilePath)) {
    query->insert(pair<string, string>("IpsFilePath", *request->ipsFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vSwitchList)) {
    query->insert(pair<string, vector<string>>("VSwitchList", *request->vSwitchList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleDescription)) {
    query->insert(pair<string, string>("AuthorizationRuleDescription", *request->authorizationRuleDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleName)) {
    query->insert(pair<string, string>("AuthorizationRuleName", *request->authorizationRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sourceCidrs)) {
    query->insert(pair<string, vector<string>>("SourceCidrs", *request->sourceCidrs));
  }
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->cidrs)) {
    query->insert(pair<string, vector<string>>("Cidrs", *request->cidrs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPoolDescription)) {
    query->insert(pair<string, string>("ConnectionPoolDescription", *request->connectionPoolDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPoolName)) {
    query->insert(pair<string, string>("ConnectionPoolName", *request->connectionPoolName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    query->insert(pair<string, long>("Count", *request->count));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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

CreateDNSServiceRuleResponse Alibabacloud_IoTCC20210513::Client::createDNSServiceRuleWithOptions(shared_ptr<CreateDNSServiceRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DNSServiceRuleDescription)) {
    query->insert(pair<string, string>("DNSServiceRuleDescription", *request->DNSServiceRuleDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DNSServiceRuleName)) {
    query->insert(pair<string, string>("DNSServiceRuleName", *request->DNSServiceRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDNSServiceRule"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDNSServiceRuleResponse(callApi(params, req, runtime));
}

CreateDNSServiceRuleResponse Alibabacloud_IoTCC20210513::Client::createDNSServiceRule(shared_ptr<CreateDNSServiceRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDNSServiceRuleWithOptions(request, runtime);
}

CreateGroupAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::createGroupAuthorizationRuleWithOptions(shared_ptr<CreateGroupAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleDescription)) {
    query->insert(pair<string, string>("AuthorizationRuleDescription", *request->authorizationRuleDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleName)) {
    query->insert(pair<string, string>("AuthorizationRuleName", *request->authorizationRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sourceCidrs)) {
    query->insert(pair<string, vector<string>>("SourceCidrs", *request->sourceCidrs));
  }
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

CreateGroupDNSServiceRuleResponse Alibabacloud_IoTCC20210513::Client::createGroupDNSServiceRuleWithOptions(shared_ptr<CreateGroupDNSServiceRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DNSServiceRuleDescription)) {
    query->insert(pair<string, string>("DNSServiceRuleDescription", *request->DNSServiceRuleDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DNSServiceRuleName)) {
    query->insert(pair<string, string>("DNSServiceRuleName", *request->DNSServiceRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGroupDNSServiceRule"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGroupDNSServiceRuleResponse(callApi(params, req, runtime));
}

CreateGroupDNSServiceRuleResponse Alibabacloud_IoTCC20210513::Client::createGroupDNSServiceRule(shared_ptr<CreateGroupDNSServiceRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGroupDNSServiceRuleWithOptions(request, runtime);
}

CreateIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::createIoTCloudConnectorWithOptions(shared_ptr<CreateIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->APN)) {
    query->insert(pair<string, string>("APN", *request->APN));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ISP)) {
    query->insert(pair<string, string>("ISP", *request->ISP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorDescription)) {
    query->insert(pair<string, string>("IoTCloudConnectorDescription", *request->ioTCloudConnectorDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorName)) {
    query->insert(pair<string, string>("IoTCloudConnectorName", *request->ioTCloudConnectorName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceUid)) {
    query->insert(pair<string, long>("ResourceUid", *request->resourceUid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->wildcardDomainEnabled)) {
    query->insert(pair<string, bool>("WildcardDomainEnabled", *request->wildcardDomainEnabled));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceDescription)) {
    query->insert(pair<string, string>("ServiceDescription", *request->serviceDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceEntryDescription)) {
    query->insert(pair<string, string>("ServiceEntryDescription", *request->serviceEntryDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceEntryName)) {
    query->insert(pair<string, string>("ServiceEntryName", *request->serviceEntryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleId)) {
    query->insert(pair<string, string>("AuthorizationRuleId", *request->authorizationRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPoolId)) {
    query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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

DeleteDNSServiceRuleResponse Alibabacloud_IoTCC20210513::Client::deleteDNSServiceRuleWithOptions(shared_ptr<DeleteDNSServiceRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DNSServiceRuleId)) {
    query->insert(pair<string, string>("DNSServiceRuleId", *request->DNSServiceRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDNSServiceRule"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDNSServiceRuleResponse(callApi(params, req, runtime));
}

DeleteDNSServiceRuleResponse Alibabacloud_IoTCC20210513::Client::deleteDNSServiceRule(shared_ptr<DeleteDNSServiceRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDNSServiceRuleWithOptions(request, runtime);
}

DeleteGroupAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::deleteGroupAuthorizationRuleWithOptions(shared_ptr<DeleteGroupAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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

DeleteGroupDNSServiceRuleResponse Alibabacloud_IoTCC20210513::Client::deleteGroupDNSServiceRuleWithOptions(shared_ptr<DeleteGroupDNSServiceRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DNSServiceRuleId)) {
    query->insert(pair<string, string>("DNSServiceRuleId", *request->DNSServiceRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGroupDNSServiceRule"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGroupDNSServiceRuleResponse(callApi(params, req, runtime));
}

DeleteGroupDNSServiceRuleResponse Alibabacloud_IoTCC20210513::Client::deleteGroupDNSServiceRule(shared_ptr<DeleteGroupDNSServiceRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGroupDNSServiceRuleWithOptions(request, runtime);
}

DeleteIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::deleteIoTCloudConnectorWithOptions(shared_ptr<DeleteIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceEntryId)) {
    query->insert(pair<string, string>("ServiceEntryId", *request->serviceEntryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPoolId)) {
    query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ips)) {
    query->insert(pair<string, vector<string>>("Ips", *request->ips));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipsFilePath)) {
    query->insert(pair<string, string>("IpsFilePath", *request->ipsFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLogSlsLogStore)) {
    query->insert(pair<string, string>("AccessLogSlsLogStore", *request->accessLogSlsLogStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLogSlsProject)) {
    query->insert(pair<string, string>("AccessLogSlsProject", *request->accessLogSlsProject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPoolId)) {
    query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryRequestId)) {
    query->insert(pair<string, string>("QueryRequestId", *request->queryRequestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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

GetDiagnoseResultForSingleCardResponse Alibabacloud_IoTCC20210513::Client::getDiagnoseResultForSingleCardWithOptions(shared_ptr<GetDiagnoseResultForSingleCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->diagnoseTaskId)) {
    query->insert(pair<string, string>("DiagnoseTaskId", *request->diagnoseTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDiagnoseResultForSingleCard"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDiagnoseResultForSingleCardResponse(callApi(params, req, runtime));
}

GetDiagnoseResultForSingleCardResponse Alibabacloud_IoTCC20210513::Client::getDiagnoseResultForSingleCard(shared_ptr<GetDiagnoseResultForSingleCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDiagnoseResultForSingleCardWithOptions(request, runtime);
}

GetIoTCloudConnectorAccessLogResponse Alibabacloud_IoTCC20210513::Client::getIoTCloudConnectorAccessLogWithOptions(shared_ptr<GetIoTCloudConnectorAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPoolId)) {
    query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualBorderRouterId)) {
    query->insert(pair<string, string>("VirtualBorderRouterId", *request->virtualBorderRouterId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->APN)) {
    query->insert(pair<string, string>("APN", *request->APN));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ISP)) {
    query->insert(pair<string, string>("ISP", *request->ISP));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->authorizationRuleIds)) {
    query->insert(pair<string, vector<string>>("AuthorizationRuleIds", *request->authorizationRuleIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->authorizationRuleName)) {
    query->insert(pair<string, vector<string>>("AuthorizationRuleName", *request->authorizationRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->authorizationRuleStatus)) {
    query->insert(pair<string, vector<string>>("AuthorizationRuleStatus", *request->authorizationRuleStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleType)) {
    query->insert(pair<string, string>("AuthorizationRuleType", *request->authorizationRuleType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->destination)) {
    query->insert(pair<string, vector<string>>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->destinationType)) {
    query->insert(pair<string, vector<string>>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->policy)) {
    query->insert(pair<string, vector<string>>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPoolId)) {
    query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPoolId)) {
    query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->connectionPoolIds)) {
    query->insert(pair<string, vector<string>>("ConnectionPoolIds", *request->connectionPoolIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->connectionPoolName)) {
    query->insert(pair<string, vector<string>>("ConnectionPoolName", *request->connectionPoolName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->connectionPoolStatus)) {
    query->insert(pair<string, vector<string>>("ConnectionPoolStatus", *request->connectionPoolStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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

ListDNSServiceRulesResponse Alibabacloud_IoTCC20210513::Client::listDNSServiceRulesWithOptions(shared_ptr<ListDNSServiceRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->DNSServiceRuleIds)) {
    query->insert(pair<string, vector<string>>("DNSServiceRuleIds", *request->DNSServiceRuleIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->DNSServiceRuleName)) {
    query->insert(pair<string, vector<string>>("DNSServiceRuleName", *request->DNSServiceRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->DNSServiceRuleStatus)) {
    query->insert(pair<string, vector<string>>("DNSServiceRuleStatus", *request->DNSServiceRuleStatus));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->destination)) {
    query->insert(pair<string, vector<string>>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->source)) {
    query->insert(pair<string, vector<string>>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDNSServiceRules"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDNSServiceRulesResponse(callApi(params, req, runtime));
}

ListDNSServiceRulesResponse Alibabacloud_IoTCC20210513::Client::listDNSServiceRules(shared_ptr<ListDNSServiceRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDNSServiceRulesWithOptions(request, runtime);
}

ListDiagnoseInfoForSingleCardResponse Alibabacloud_IoTCC20210513::Client::listDiagnoseInfoForSingleCardWithOptions(shared_ptr<ListDiagnoseInfoForSingleCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDiagnoseInfoForSingleCard"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDiagnoseInfoForSingleCardResponse(callApi(params, req, runtime));
}

ListDiagnoseInfoForSingleCardResponse Alibabacloud_IoTCC20210513::Client::listDiagnoseInfoForSingleCard(shared_ptr<ListDiagnoseInfoForSingleCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDiagnoseInfoForSingleCardWithOptions(request, runtime);
}

ListGroupAuthorizationRulesResponse Alibabacloud_IoTCC20210513::Client::listGroupAuthorizationRulesWithOptions(shared_ptr<ListGroupAuthorizationRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->authorizationRuleIds)) {
    query->insert(pair<string, vector<string>>("AuthorizationRuleIds", *request->authorizationRuleIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->authorizationRuleName)) {
    query->insert(pair<string, vector<string>>("AuthorizationRuleName", *request->authorizationRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->authorizationRuleStatus)) {
    query->insert(pair<string, vector<string>>("AuthorizationRuleStatus", *request->authorizationRuleStatus));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->destination)) {
    query->insert(pair<string, vector<string>>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->destinationType)) {
    query->insert(pair<string, vector<string>>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->policy)) {
    query->insert(pair<string, vector<string>>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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

ListGroupDNSServiceRulesResponse Alibabacloud_IoTCC20210513::Client::listGroupDNSServiceRulesWithOptions(shared_ptr<ListGroupDNSServiceRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->DNSServiceRuleIds)) {
    query->insert(pair<string, vector<string>>("DNSServiceRuleIds", *request->DNSServiceRuleIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->DNSServiceRuleName)) {
    query->insert(pair<string, vector<string>>("DNSServiceRuleName", *request->DNSServiceRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->DNSServiceRuleStatus)) {
    query->insert(pair<string, vector<string>>("DNSServiceRuleStatus", *request->DNSServiceRuleStatus));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->destination)) {
    query->insert(pair<string, vector<string>>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->source)) {
    query->insert(pair<string, vector<string>>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGroupDNSServiceRules"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGroupDNSServiceRulesResponse(callApi(params, req, runtime));
}

ListGroupDNSServiceRulesResponse Alibabacloud_IoTCC20210513::Client::listGroupDNSServiceRules(shared_ptr<ListGroupDNSServiceRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGroupDNSServiceRulesWithOptions(request, runtime);
}

ListIoTCloudConnectorAvailableZonesResponse Alibabacloud_IoTCC20210513::Client::listIoTCloudConnectorAvailableZonesWithOptions(shared_ptr<ListIoTCloudConnectorAvailableZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ioTCloudConnectorGroupIds)) {
    query->insert(pair<string, vector<string>>("IoTCloudConnectorGroupIds", *request->ioTCloudConnectorGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ioTCloudConnectorGroupName)) {
    query->insert(pair<string, vector<string>>("IoTCloudConnectorGroupName", *request->ioTCloudConnectorGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ioTCloudConnectorGroupStatus)) {
    query->insert(pair<string, vector<string>>("IoTCloudConnectorGroupStatus", *request->ioTCloudConnectorGroupStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->APN)) {
    query->insert(pair<string, vector<string>>("APN", *request->APN));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ISP)) {
    query->insert(pair<string, vector<string>>("ISP", *request->ISP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ioTCloudConnectorIds)) {
    query->insert(pair<string, vector<string>>("IoTCloudConnectorIds", *request->ioTCloudConnectorIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ioTCloudConnectorName)) {
    query->insert(pair<string, vector<string>>("IoTCloudConnectorName", *request->ioTCloudConnectorName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ioTCloudConnectorStatus)) {
    query->insert(pair<string, vector<string>>("IoTCloudConnectorStatus", *request->ioTCloudConnectorStatus));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isInGroup)) {
    query->insert(pair<string, bool>("IsInGroup", *request->isInGroup));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vpcId)) {
    query->insert(pair<string, vector<string>>("VpcId", *request->vpcId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceStatuses)) {
    query->insert(pair<string, vector<string>>("ResourceStatuses", *request->resourceStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serviceIds)) {
    query->insert(pair<string, vector<string>>("ServiceIds", *request->serviceIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serviceNames)) {
    query->insert(pair<string, vector<string>>("ServiceNames", *request->serviceNames));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serviceEntryIds)) {
    query->insert(pair<string, vector<string>>("ServiceEntryIds", *request->serviceEntryIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serviceEntryName)) {
    query->insert(pair<string, vector<string>>("ServiceEntryName", *request->serviceEntryName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serviceEntryStatus)) {
    query->insert(pair<string, vector<string>>("ServiceEntryStatus", *request->serviceEntryStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->target)) {
    query->insert(pair<string, vector<string>>("Target", *request->target));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->targetType)) {
    query->insert(pair<string, vector<string>>("TargetType", *request->targetType));
  }
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

MoveAuthorizationRuleToDNSServiceResponse Alibabacloud_IoTCC20210513::Client::moveAuthorizationRuleToDNSServiceWithOptions(shared_ptr<MoveAuthorizationRuleToDNSServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveAuthorizationRuleToDNSService"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveAuthorizationRuleToDNSServiceResponse(callApi(params, req, runtime));
}

MoveAuthorizationRuleToDNSServiceResponse Alibabacloud_IoTCC20210513::Client::moveAuthorizationRuleToDNSService(shared_ptr<MoveAuthorizationRuleToDNSServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveAuthorizationRuleToDNSServiceWithOptions(request, runtime);
}

MoveGroupAuthorizationRuleToDNSServiceResponse Alibabacloud_IoTCC20210513::Client::moveGroupAuthorizationRuleToDNSServiceWithOptions(shared_ptr<MoveGroupAuthorizationRuleToDNSServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveGroupAuthorizationRuleToDNSService"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveGroupAuthorizationRuleToDNSServiceResponse(callApi(params, req, runtime));
}

MoveGroupAuthorizationRuleToDNSServiceResponse Alibabacloud_IoTCC20210513::Client::moveGroupAuthorizationRuleToDNSService(shared_ptr<MoveGroupAuthorizationRuleToDNSServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveGroupAuthorizationRuleToDNSServiceWithOptions(request, runtime);
}

OpenIoTCloudConnectorServiceResponse Alibabacloud_IoTCC20210513::Client::openIoTCloudConnectorServiceWithOptions(shared_ptr<OpenIoTCloudConnectorServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, vector<string>>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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

SubmitDiagnoseTaskForSingleCardResponse Alibabacloud_IoTCC20210513::Client::submitDiagnoseTaskForSingleCardWithOptions(shared_ptr<SubmitDiagnoseTaskForSingleCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationType)) {
    query->insert(pair<string, string>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceUid)) {
    query->insert(pair<string, long>("ResourceUid", *request->resourceUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDiagnoseTaskForSingleCard"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDiagnoseTaskForSingleCardResponse(callApi(params, req, runtime));
}

SubmitDiagnoseTaskForSingleCardResponse Alibabacloud_IoTCC20210513::Client::submitDiagnoseTaskForSingleCard(shared_ptr<SubmitDiagnoseTaskForSingleCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDiagnoseTaskForSingleCardWithOptions(request, runtime);
}

UpdateAuthorizationRuleAttributeResponse Alibabacloud_IoTCC20210513::Client::updateAuthorizationRuleAttributeWithOptions(shared_ptr<UpdateAuthorizationRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleDescription)) {
    query->insert(pair<string, string>("AuthorizationRuleDescription", *request->authorizationRuleDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleId)) {
    query->insert(pair<string, string>("AuthorizationRuleId", *request->authorizationRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleName)) {
    query->insert(pair<string, string>("AuthorizationRuleName", *request->authorizationRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sourceCidrs)) {
    query->insert(pair<string, vector<string>>("SourceCidrs", *request->sourceCidrs));
  }
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->cidrs)) {
    query->insert(pair<string, vector<string>>("Cidrs", *request->cidrs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPoolDescription)) {
    query->insert(pair<string, string>("ConnectionPoolDescription", *request->connectionPoolDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPoolId)) {
    query->insert(pair<string, string>("ConnectionPoolId", *request->connectionPoolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPoolName)) {
    query->insert(pair<string, string>("ConnectionPoolName", *request->connectionPoolName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    query->insert(pair<string, long>("Count", *request->count));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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

UpdateDNSServiceRuleAttributeResponse Alibabacloud_IoTCC20210513::Client::updateDNSServiceRuleAttributeWithOptions(shared_ptr<UpdateDNSServiceRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DNSServiceRuleDescription)) {
    query->insert(pair<string, string>("DNSServiceRuleDescription", *request->DNSServiceRuleDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DNSServiceRuleId)) {
    query->insert(pair<string, string>("DNSServiceRuleId", *request->DNSServiceRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DNSServiceRuleName)) {
    query->insert(pair<string, string>("DNSServiceRuleName", *request->DNSServiceRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDNSServiceRuleAttribute"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDNSServiceRuleAttributeResponse(callApi(params, req, runtime));
}

UpdateDNSServiceRuleAttributeResponse Alibabacloud_IoTCC20210513::Client::updateDNSServiceRuleAttribute(shared_ptr<UpdateDNSServiceRuleAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDNSServiceRuleAttributeWithOptions(request, runtime);
}

UpdateGroupAuthorizationRuleAttributeResponse Alibabacloud_IoTCC20210513::Client::updateGroupAuthorizationRuleAttributeWithOptions(shared_ptr<UpdateGroupAuthorizationRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleDescription)) {
    query->insert(pair<string, string>("AuthorizationRuleDescription", *request->authorizationRuleDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleId)) {
    query->insert(pair<string, string>("AuthorizationRuleId", *request->authorizationRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationRuleName)) {
    query->insert(pair<string, string>("AuthorizationRuleName", *request->authorizationRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sourceCidrs)) {
    query->insert(pair<string, vector<string>>("SourceCidrs", *request->sourceCidrs));
  }
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

UpdateGroupDNSServiceRuleAttributeResponse Alibabacloud_IoTCC20210513::Client::updateGroupDNSServiceRuleAttributeWithOptions(shared_ptr<UpdateGroupDNSServiceRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DNSServiceRuleDescription)) {
    query->insert(pair<string, string>("DNSServiceRuleDescription", *request->DNSServiceRuleDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DNSServiceRuleId)) {
    query->insert(pair<string, string>("DNSServiceRuleId", *request->DNSServiceRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DNSServiceRuleName)) {
    query->insert(pair<string, string>("DNSServiceRuleName", *request->DNSServiceRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGroupDNSServiceRuleAttribute"))},
    {"version", boost::any(string("2021-05-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGroupDNSServiceRuleAttributeResponse(callApi(params, req, runtime));
}

UpdateGroupDNSServiceRuleAttributeResponse Alibabacloud_IoTCC20210513::Client::updateGroupDNSServiceRuleAttribute(shared_ptr<UpdateGroupDNSServiceRuleAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGroupDNSServiceRuleAttributeWithOptions(request, runtime);
}

UpdateIoTCloudConnectorAttributeResponse Alibabacloud_IoTCC20210513::Client::updateIoTCloudConnectorAttributeWithOptions(shared_ptr<UpdateIoTCloudConnectorAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorDescription)) {
    query->insert(pair<string, string>("IoTCloudConnectorDescription", *request->ioTCloudConnectorDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorName)) {
    query->insert(pair<string, string>("IoTCloudConnectorName", *request->ioTCloudConnectorName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->wildcardDomainEnabled)) {
    query->insert(pair<string, bool>("WildcardDomainEnabled", *request->wildcardDomainEnabled));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorGroupId)) {
    query->insert(pair<string, string>("IoTCloudConnectorGroupId", *request->ioTCloudConnectorGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceDescription)) {
    query->insert(pair<string, string>("ServiceDescription", *request->serviceDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioTCloudConnectorId)) {
    query->insert(pair<string, string>("IoTCloudConnectorId", *request->ioTCloudConnectorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceEntryDescription)) {
    query->insert(pair<string, string>("ServiceEntryDescription", *request->serviceEntryDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceEntryId)) {
    query->insert(pair<string, string>("ServiceEntryId", *request->serviceEntryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceEntryName)) {
    query->insert(pair<string, string>("ServiceEntryName", *request->serviceEntryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
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

