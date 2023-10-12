// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cmn_20200825.hpp>
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

using namespace Alibabacloud_Cmn20200825;

Alibabacloud_Cmn20200825::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cmn"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cmn20200825::Client::getEndpoint(shared_ptr<string> productId,
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

ApplyIPResponse Alibabacloud_Cmn20200825::Client::applyIPWithOptions(shared_ptr<ApplyIPRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyIPShrinkRequest> request = make_shared<ApplyIPShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->deviceResourceIds)) {
    request->deviceResourceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceResourceIds, make_shared<string>("DeviceResourceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessTypeId)) {
    query->insert(pair<string, string>("BusinessTypeId", *request->businessTypeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessTypeParams)) {
    query->insert(pair<string, string>("BusinessTypeParams", *request->businessTypeParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceResourceId)) {
    query->insert(pair<string, string>("DeviceResourceId", *request->deviceResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceResourceIdsShrink)) {
    query->insert(pair<string, string>("DeviceResourceIds", *request->deviceResourceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipType)) {
    query->insert(pair<string, string>("IpType", *request->ipType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loopbackPort)) {
    query->insert(pair<string, string>("LoopbackPort", *request->loopbackPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netLocation)) {
    query->insert(pair<string, string>("NetLocation", *request->netLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setupProjectId)) {
    query->insert(pair<string, string>("SetupProjectId", *request->setupProjectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyIP"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyIPResponse(callApi(params, req, runtime));
}

ApplyIPResponse Alibabacloud_Cmn20200825::Client::applyIP(shared_ptr<ApplyIPRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyIPWithOptions(request, runtime);
}

AutoDutyResponse Alibabacloud_Cmn20200825::Client::autoDutyWithOptions(shared_ptr<AutoDutyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dutyBatch)) {
    body->insert(pair<string, string>("DutyBatch", *request->dutyBatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dutyName)) {
    body->insert(pair<string, string>("DutyName", *request->dutyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    body->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    body->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AutoDuty"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AutoDutyResponse(callApi(params, req, runtime));
}

AutoDutyResponse Alibabacloud_Cmn20200825::Client::autoDuty(shared_ptr<AutoDutyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return autoDutyWithOptions(request, runtime);
}

CloseEventResponse Alibabacloud_Cmn20200825::Client::closeEventWithOptions(shared_ptr<CloseEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    body->insert(pair<string, string>("EventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventObjectId)) {
    body->insert(pair<string, string>("EventObjectId", *request->eventObjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    body->insert(pair<string, string>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseEvent"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseEventResponse(callApi(params, req, runtime));
}

CloseEventResponse Alibabacloud_Cmn20200825::Client::closeEvent(shared_ptr<CloseEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeEventWithOptions(request, runtime);
}

CreateConfigurationSpecificationResponse Alibabacloud_Cmn20200825::Client::createConfigurationSpecificationWithOptions(shared_ptr<CreateConfigurationSpecificationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateConfigurationSpecificationShrinkRequest> request = make_shared<CreateConfigurationSpecificationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<vector<uint8_t>>>(tmpReq->relatedVariate)) {
    request->relatedVariateShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedVariate, make_shared<string>("RelatedVariate"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->architecture)) {
    body->insert(pair<string, string>("Architecture", *request->architecture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedVariateShrink)) {
    body->insert(pair<string, string>("RelatedVariate", *request->relatedVariateShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    body->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specificationContent)) {
    body->insert(pair<string, string>("SpecificationContent", *request->specificationContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specificationName)) {
    body->insert(pair<string, string>("SpecificationName", *request->specificationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendor)) {
    body->insert(pair<string, string>("Vendor", *request->vendor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConfigurationSpecification"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConfigurationSpecificationResponse(callApi(params, req, runtime));
}

CreateConfigurationSpecificationResponse Alibabacloud_Cmn20200825::Client::createConfigurationSpecification(shared_ptr<CreateConfigurationSpecificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConfigurationSpecificationWithOptions(request, runtime);
}

CreateConfigurationVariateResponse Alibabacloud_Cmn20200825::Client::createConfigurationVariateWithOptions(shared_ptr<CreateConfigurationVariateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formatFunction)) {
    body->insert(pair<string, string>("FormatFunction", *request->formatFunction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variateName)) {
    body->insert(pair<string, string>("VariateName", *request->variateName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConfigurationVariate"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConfigurationVariateResponse(callApi(params, req, runtime));
}

CreateConfigurationVariateResponse Alibabacloud_Cmn20200825::Client::createConfigurationVariate(shared_ptr<CreateConfigurationVariateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConfigurationVariateWithOptions(request, runtime);
}

CreateDedicatedLineResponse Alibabacloud_Cmn20200825::Client::createDedicatedLineWithOptions(shared_ptr<CreateDedicatedLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    body->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contact)) {
    body->insert(pair<string, string>("Contact", *request->contact));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedLineGateway)) {
    body->insert(pair<string, string>("DedicatedLineGateway", *request->dedicatedLineGateway));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedLineIp)) {
    body->insert(pair<string, string>("DedicatedLineIp", *request->dedicatedLineIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedLineRole)) {
    body->insert(pair<string, string>("DedicatedLineRole", *request->dedicatedLineRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    body->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->devicePort)) {
    body->insert(pair<string, string>("DevicePort", *request->devicePort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expirationDate)) {
    body->insert(pair<string, string>("ExpirationDate", *request->expirationDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extAttributes)) {
    body->insert(pair<string, string>("ExtAttributes", *request->extAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isp)) {
    body->insert(pair<string, string>("Isp", *request->isp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispFormId)) {
    body->insert(pair<string, string>("IspFormId", *request->ispFormId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispId)) {
    body->insert(pair<string, string>("IspId", *request->ispId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->onlineDate)) {
    body->insert(pair<string, string>("OnlineDate", *request->onlineDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->physicalSpaceId)) {
    body->insert(pair<string, string>("PhysicalSpaceId", *request->physicalSpaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDedicatedLine"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDedicatedLineResponse(callApi(params, req, runtime));
}

CreateDedicatedLineResponse Alibabacloud_Cmn20200825::Client::createDedicatedLine(shared_ptr<CreateDedicatedLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedLineWithOptions(request, runtime);
}

CreateDeviceResponse Alibabacloud_Cmn20200825::Client::createDeviceWithOptions(shared_ptr<CreateDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceFormId)) {
    body->insert(pair<string, string>("DeviceFormId", *request->deviceFormId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enablePassword)) {
    body->insert(pair<string, string>("EnablePassword", *request->enablePassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extAttributes)) {
    body->insert(pair<string, string>("ExtAttributes", *request->extAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    body->insert(pair<string, string>("HostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    body->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginPassword)) {
    body->insert(pair<string, string>("LoginPassword", *request->loginPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginType)) {
    body->insert(pair<string, string>("LoginType", *request->loginType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginUsername)) {
    body->insert(pair<string, string>("LoginUsername", *request->loginUsername));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mac)) {
    body->insert(pair<string, string>("Mac", *request->mac));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->physicalSpaceId)) {
    body->insert(pair<string, string>("PhysicalSpaceId", *request->physicalSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityDomain)) {
    body->insert(pair<string, string>("SecurityDomain", *request->securityDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceStatus)) {
    body->insert(pair<string, string>("ServiceStatus", *request->serviceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sn)) {
    body->insert(pair<string, string>("Sn", *request->sn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpAccountType)) {
    body->insert(pair<string, string>("SnmpAccountType", *request->snmpAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpAccountVersion)) {
    body->insert(pair<string, string>("SnmpAccountVersion", *request->snmpAccountVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpAuthPassphrase)) {
    body->insert(pair<string, string>("SnmpAuthPassphrase", *request->snmpAuthPassphrase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpAuthProtocol)) {
    body->insert(pair<string, string>("SnmpAuthProtocol", *request->snmpAuthProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpCommunity)) {
    body->insert(pair<string, string>("SnmpCommunity", *request->snmpCommunity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpPrivacyPassphrase)) {
    body->insert(pair<string, string>("SnmpPrivacyPassphrase", *request->snmpPrivacyPassphrase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpPrivacyProtocol)) {
    body->insert(pair<string, string>("SnmpPrivacyProtocol", *request->snmpPrivacyProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpSecurityLevel)) {
    body->insert(pair<string, string>("SnmpSecurityLevel", *request->snmpSecurityLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpUsername)) {
    body->insert(pair<string, string>("SnmpUsername", *request->snmpUsername));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendor)) {
    body->insert(pair<string, string>("Vendor", *request->vendor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDevice"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeviceResponse(callApi(params, req, runtime));
}

CreateDeviceResponse Alibabacloud_Cmn20200825::Client::createDevice(shared_ptr<CreateDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceWithOptions(request, runtime);
}

CreateDeviceFormResponse Alibabacloud_Cmn20200825::Client::createDeviceFormWithOptions(shared_ptr<CreateDeviceFormRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->accountConfig)) {
    body->insert(pair<string, bool>("AccountConfig", *request->accountConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configCompare)) {
    body->insert(pair<string, bool>("ConfigCompare", *request->configCompare));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->detailDisplay)) {
    body->insert(pair<string, bool>("DetailDisplay", *request->detailDisplay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceFormName)) {
    body->insert(pair<string, string>("DeviceFormName", *request->deviceFormName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedDeviceFormId)) {
    body->insert(pair<string, string>("RelatedDeviceFormId", *request->relatedDeviceFormId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceUse)) {
    body->insert(pair<string, string>("ResourceUse", *request->resourceUse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->script)) {
    body->insert(pair<string, string>("Script", *request->script));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uniqueKey)) {
    body->insert(pair<string, string>("UniqueKey", *request->uniqueKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeviceForm"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeviceFormResponse(callApi(params, req, runtime));
}

CreateDeviceFormResponse Alibabacloud_Cmn20200825::Client::createDeviceForm(shared_ptr<CreateDeviceFormRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceFormWithOptions(request, runtime);
}

CreateDevicePropertyResponse Alibabacloud_Cmn20200825::Client::createDevicePropertyWithOptions(shared_ptr<CreateDevicePropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceFormId)) {
    body->insert(pair<string, string>("DeviceFormId", *request->deviceFormId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyContent)) {
    body->insert(pair<string, string>("PropertyContent", *request->propertyContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyFormat)) {
    body->insert(pair<string, string>("PropertyFormat", *request->propertyFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyKey)) {
    body->insert(pair<string, string>("PropertyKey", *request->propertyKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyName)) {
    body->insert(pair<string, string>("PropertyName", *request->propertyName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeviceProperty"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDevicePropertyResponse(callApi(params, req, runtime));
}

CreateDevicePropertyResponse Alibabacloud_Cmn20200825::Client::createDeviceProperty(shared_ptr<CreateDevicePropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDevicePropertyWithOptions(request, runtime);
}

CreateDevicesResponse Alibabacloud_Cmn20200825::Client::createDevicesWithOptions(shared_ptr<CreateDevicesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDevicesShrinkRequest> request = make_shared<CreateDevicesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateDevicesRequestDeviceParamModelList>>(tmpReq->deviceParamModelList)) {
    request->deviceParamModelListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceParamModelList, make_shared<string>("DeviceParamModelList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceFormId)) {
    body->insert(pair<string, string>("DeviceFormId", *request->deviceFormId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceParamModelListShrink)) {
    body->insert(pair<string, string>("DeviceParamModelList", *request->deviceParamModelListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDevices"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDevicesResponse(callApi(params, req, runtime));
}

CreateDevicesResponse Alibabacloud_Cmn20200825::Client::createDevices(shared_ptr<CreateDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDevicesWithOptions(request, runtime);
}

CreateEventDefinitionResponse Alibabacloud_Cmn20200825::Client::createEventDefinitionWithOptions(shared_ptr<CreateEventDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    body->insert(pair<string, string>("EventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    body->insert(pair<string, string>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEventDefinition"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEventDefinitionResponse(callApi(params, req, runtime));
}

CreateEventDefinitionResponse Alibabacloud_Cmn20200825::Client::createEventDefinition(shared_ptr<CreateEventDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEventDefinitionWithOptions(request, runtime);
}

CreateLinkJobResponse Alibabacloud_Cmn20200825::Client::createLinkJobWithOptions(shared_ptr<CreateLinkJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoConfirm)) {
    body->insert(pair<string, bool>("AutoConfirm", *request->autoConfirm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->doubleConvertStrategy)) {
    body->insert(pair<string, string>("DoubleConvertStrategy", *request->doubleConvertStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->singleStrategy)) {
    body->insert(pair<string, string>("SingleStrategy", *request->singleStrategy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLinkJob"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLinkJobResponse(callApi(params, req, runtime));
}

CreateLinkJobResponse Alibabacloud_Cmn20200825::Client::createLinkJob(shared_ptr<CreateLinkJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLinkJobWithOptions(request, runtime);
}

CreateMonitorItemResponse Alibabacloud_Cmn20200825::Client::createMonitorItemWithOptions(shared_ptr<CreateMonitorItemRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateMonitorItemShrinkRequest> request = make_shared<CreateMonitorItemShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateMonitorItemRequestAlarmRuleList>>(tmpReq->alarmRuleList)) {
    request->alarmRuleListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->alarmRuleList, make_shared<string>("AlarmRuleList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmRuleListShrink)) {
    body->insert(pair<string, string>("AlarmRuleList", *request->alarmRuleListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->analysisCode)) {
    body->insert(pair<string, string>("AnalysisCode", *request->analysisCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->collectionType)) {
    body->insert(pair<string, string>("CollectionType", *request->collectionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataItem)) {
    body->insert(pair<string, string>("DataItem", *request->dataItem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceForm)) {
    body->insert(pair<string, string>("DeviceForm", *request->deviceForm));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->effective)) {
    body->insert(pair<string, long>("Effective", *request->effective));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->execInterval)) {
    body->insert(pair<string, long>("ExecInterval", *request->execInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorItemDescription)) {
    body->insert(pair<string, string>("MonitorItemDescription", *request->monitorItemDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorItemName)) {
    body->insert(pair<string, string>("MonitorItemName", *request->monitorItemName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityDomain)) {
    body->insert(pair<string, string>("SecurityDomain", *request->securityDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMonitorItem"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMonitorItemResponse(callApi(params, req, runtime));
}

CreateMonitorItemResponse Alibabacloud_Cmn20200825::Client::createMonitorItem(shared_ptr<CreateMonitorItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMonitorItemWithOptions(request, runtime);
}

CreateOsVersionResponse Alibabacloud_Cmn20200825::Client::createOsVersionWithOptions(shared_ptr<CreateOsVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bootPatch)) {
    body->insert(pair<string, string>("BootPatch", *request->bootPatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTime)) {
    body->insert(pair<string, string>("CreateTime", *request->createTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featurePatch)) {
    body->insert(pair<string, string>("FeaturePatch", *request->featurePatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    body->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osVersion)) {
    body->insert(pair<string, string>("OsVersion", *request->osVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemPatch)) {
    body->insert(pair<string, string>("SystemPatch", *request->systemPatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendor)) {
    body->insert(pair<string, string>("Vendor", *request->vendor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOsVersion"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOsVersionResponse(callApi(params, req, runtime));
}

CreateOsVersionResponse Alibabacloud_Cmn20200825::Client::createOsVersion(shared_ptr<CreateOsVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOsVersionWithOptions(request, runtime);
}

CreatePhysicalSpaceResponse Alibabacloud_Cmn20200825::Client::createPhysicalSpaceWithOptions(shared_ptr<CreatePhysicalSpaceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePhysicalSpaceShrinkRequest> request = make_shared<CreatePhysicalSpaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->securityDomainList)) {
    request->securityDomainListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->securityDomainList, make_shared<string>("SecurityDomainList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    body->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    body->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    body->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentUid)) {
    body->insert(pair<string, string>("ParentUid", *request->parentUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->physicalSpaceName)) {
    body->insert(pair<string, string>("PhysicalSpaceName", *request->physicalSpaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    body->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityDomainListShrink)) {
    body->insert(pair<string, string>("SecurityDomainList", *request->securityDomainListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceAbbreviation)) {
    body->insert(pair<string, string>("SpaceAbbreviation", *request->spaceAbbreviation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceType)) {
    body->insert(pair<string, string>("SpaceType", *request->spaceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePhysicalSpace"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePhysicalSpaceResponse(callApi(params, req, runtime));
}

CreatePhysicalSpaceResponse Alibabacloud_Cmn20200825::Client::createPhysicalSpace(shared_ptr<CreatePhysicalSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPhysicalSpaceWithOptions(request, runtime);
}

CreateRealtimeTaskResponse Alibabacloud_Cmn20200825::Client::createRealtimeTaskWithOptions(shared_ptr<CreateRealtimeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkDuplicatePolicy)) {
    body->insert(pair<string, string>("CheckDuplicatePolicy", *request->checkDuplicatePolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    body->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemName)) {
    body->insert(pair<string, string>("ItemName", *request->itemName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->script)) {
    body->insert(pair<string, string>("Script", *request->script));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRealtimeTask"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRealtimeTaskResponse(callApi(params, req, runtime));
}

CreateRealtimeTaskResponse Alibabacloud_Cmn20200825::Client::createRealtimeTask(shared_ptr<CreateRealtimeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRealtimeTaskWithOptions(request, runtime);
}

CreateResourceInformationResponse Alibabacloud_Cmn20200825::Client::createResourceInformationWithOptions(shared_ptr<CreateResourceInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->architectureId)) {
    body->insert(pair<string, string>("ArchitectureId", *request->architectureId));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateResourceInformationRequestInformation>>(request->information)) {
    bodyFlat->insert(pair<string, vector<CreateResourceInformationRequestInformation>>("Information", *request->information));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceAttribute)) {
    body->insert(pair<string, string>("ResourceAttribute", *request->resourceAttribute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceInformation"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceInformationResponse(callApi(params, req, runtime));
}

CreateResourceInformationResponse Alibabacloud_Cmn20200825::Client::createResourceInformation(shared_ptr<CreateResourceInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourceInformationWithOptions(request, runtime);
}

CreateSetupProjectResponse Alibabacloud_Cmn20200825::Client::createSetupProjectWithOptions(shared_ptr<CreateSetupProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryTime)) {
    body->insert(pair<string, string>("DeliveryTime", *request->deliveryTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSetupProject"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSetupProjectResponse(callApi(params, req, runtime));
}

CreateSetupProjectResponse Alibabacloud_Cmn20200825::Client::createSetupProject(shared_ptr<CreateSetupProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSetupProjectWithOptions(request, runtime);
}

CreateSpaceModelResponse Alibabacloud_Cmn20200825::Client::createSpaceModelWithOptions(shared_ptr<CreateSpaceModelRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSpaceModelShrinkRequest> request = make_shared<CreateSpaceModelShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateSpaceModelRequestSort>>(tmpReq->sort)) {
    request->sortShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sort, make_shared<string>("Sort"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortShrink)) {
    body->insert(pair<string, string>("Sort", *request->sortShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceType)) {
    body->insert(pair<string, string>("SpaceType", *request->spaceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSpaceModel"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSpaceModelResponse(callApi(params, req, runtime));
}

CreateSpaceModelResponse Alibabacloud_Cmn20200825::Client::createSpaceModel(shared_ptr<CreateSpaceModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSpaceModelWithOptions(request, runtime);
}

CreateTaskResponse Alibabacloud_Cmn20200825::Client::createTaskWithOptions(shared_ptr<CreateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTask"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTaskResponse(callApi(params, req, runtime));
}

CreateTaskResponse Alibabacloud_Cmn20200825::Client::createTask(shared_ptr<CreateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTaskWithOptions(request, runtime);
}

CreateTimePeriodResponse Alibabacloud_Cmn20200825::Client::createTimePeriodWithOptions(shared_ptr<CreateTimePeriodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    body->insert(pair<string, string>("Expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timePeriodDescription)) {
    body->insert(pair<string, string>("TimePeriodDescription", *request->timePeriodDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timePeriodName)) {
    body->insert(pair<string, string>("TimePeriodName", *request->timePeriodName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTimePeriod"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTimePeriodResponse(callApi(params, req, runtime));
}

CreateTimePeriodResponse Alibabacloud_Cmn20200825::Client::createTimePeriod(shared_ptr<CreateTimePeriodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTimePeriodWithOptions(request, runtime);
}

DeleteConfigurationSpecificationResponse Alibabacloud_Cmn20200825::Client::deleteConfigurationSpecificationWithOptions(shared_ptr<DeleteConfigurationSpecificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configurationSpecificationId)) {
    body->insert(pair<string, string>("ConfigurationSpecificationId", *request->configurationSpecificationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConfigurationSpecification"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConfigurationSpecificationResponse(callApi(params, req, runtime));
}

DeleteConfigurationSpecificationResponse Alibabacloud_Cmn20200825::Client::deleteConfigurationSpecification(shared_ptr<DeleteConfigurationSpecificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConfigurationSpecificationWithOptions(request, runtime);
}

DeleteConfigurationVariateResponse Alibabacloud_Cmn20200825::Client::deleteConfigurationVariateWithOptions(shared_ptr<DeleteConfigurationVariateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configurationVariateId)) {
    body->insert(pair<string, string>("ConfigurationVariateId", *request->configurationVariateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConfigurationVariate"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConfigurationVariateResponse(callApi(params, req, runtime));
}

DeleteConfigurationVariateResponse Alibabacloud_Cmn20200825::Client::deleteConfigurationVariate(shared_ptr<DeleteConfigurationVariateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConfigurationVariateWithOptions(request, runtime);
}

DeleteDedicatedLineResponse Alibabacloud_Cmn20200825::Client::deleteDedicatedLineWithOptions(shared_ptr<DeleteDedicatedLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedLineId)) {
    body->insert(pair<string, string>("DedicatedLineId", *request->dedicatedLineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDedicatedLine"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDedicatedLineResponse(callApi(params, req, runtime));
}

DeleteDedicatedLineResponse Alibabacloud_Cmn20200825::Client::deleteDedicatedLine(shared_ptr<DeleteDedicatedLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDedicatedLineWithOptions(request, runtime);
}

DeleteDeliveryArchVersionResponse Alibabacloud_Cmn20200825::Client::deleteDeliveryArchVersionWithOptions(shared_ptr<DeleteDeliveryArchVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryArchVersionId)) {
    body->insert(pair<string, string>("DeliveryArchVersionId", *request->deliveryArchVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeliveryArchVersion"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeliveryArchVersionResponse(callApi(params, req, runtime));
}

DeleteDeliveryArchVersionResponse Alibabacloud_Cmn20200825::Client::deleteDeliveryArchVersion(shared_ptr<DeleteDeliveryArchVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeliveryArchVersionWithOptions(request, runtime);
}

DeleteDeliveryProjectResponse Alibabacloud_Cmn20200825::Client::deleteDeliveryProjectWithOptions(shared_ptr<DeleteDeliveryProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryProjectId)) {
    body->insert(pair<string, string>("DeliveryProjectId", *request->deliveryProjectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeliveryProject"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeliveryProjectResponse(callApi(params, req, runtime));
}

DeleteDeliveryProjectResponse Alibabacloud_Cmn20200825::Client::deleteDeliveryProject(shared_ptr<DeleteDeliveryProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeliveryProjectWithOptions(request, runtime);
}

DeleteDeviceResponse Alibabacloud_Cmn20200825::Client::deleteDeviceWithOptions(shared_ptr<DeleteDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    body->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDevice"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeviceResponse(callApi(params, req, runtime));
}

DeleteDeviceResponse Alibabacloud_Cmn20200825::Client::deleteDevice(shared_ptr<DeleteDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceWithOptions(request, runtime);
}

DeleteDeviceFormResponse Alibabacloud_Cmn20200825::Client::deleteDeviceFormWithOptions(shared_ptr<DeleteDeviceFormRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceFormId)) {
    body->insert(pair<string, string>("DeviceFormId", *request->deviceFormId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeviceForm"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeviceFormResponse(callApi(params, req, runtime));
}

DeleteDeviceFormResponse Alibabacloud_Cmn20200825::Client::deleteDeviceForm(shared_ptr<DeleteDeviceFormRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceFormWithOptions(request, runtime);
}

DeleteDevicePropertyResponse Alibabacloud_Cmn20200825::Client::deleteDevicePropertyWithOptions(shared_ptr<DeleteDevicePropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->devicePropertyId)) {
    body->insert(pair<string, string>("DevicePropertyId", *request->devicePropertyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeviceProperty"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDevicePropertyResponse(callApi(params, req, runtime));
}

DeleteDevicePropertyResponse Alibabacloud_Cmn20200825::Client::deleteDeviceProperty(shared_ptr<DeleteDevicePropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDevicePropertyWithOptions(request, runtime);
}

DeleteDeviceResourceResponse Alibabacloud_Cmn20200825::Client::deleteDeviceResourceWithOptions(shared_ptr<DeleteDeviceResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceResourceId)) {
    query->insert(pair<string, string>("DeviceResourceId", *request->deviceResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeviceResource"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeviceResourceResponse(callApi(params, req, runtime));
}

DeleteDeviceResourceResponse Alibabacloud_Cmn20200825::Client::deleteDeviceResource(shared_ptr<DeleteDeviceResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceResourceWithOptions(request, runtime);
}

DeleteDevicesResponse Alibabacloud_Cmn20200825::Client::deleteDevicesWithOptions(shared_ptr<DeleteDevicesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteDevicesShrinkRequest> request = make_shared<DeleteDevicesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->deviceIds)) {
    request->deviceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceIds, make_shared<string>("DeviceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceIdsShrink)) {
    body->insert(pair<string, string>("DeviceIds", *request->deviceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDevices"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDevicesResponse(callApi(params, req, runtime));
}

DeleteDevicesResponse Alibabacloud_Cmn20200825::Client::deleteDevices(shared_ptr<DeleteDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDevicesWithOptions(request, runtime);
}

DeleteEventDefinitionResponse Alibabacloud_Cmn20200825::Client::deleteEventDefinitionWithOptions(shared_ptr<DeleteEventDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    body->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEventDefinition"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEventDefinitionResponse(callApi(params, req, runtime));
}

DeleteEventDefinitionResponse Alibabacloud_Cmn20200825::Client::deleteEventDefinition(shared_ptr<DeleteEventDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEventDefinitionWithOptions(request, runtime);
}

DeleteInspectionTaskResponse Alibabacloud_Cmn20200825::Client::deleteInspectionTaskWithOptions(shared_ptr<DeleteInspectionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInspectionTask"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInspectionTaskResponse(callApi(params, req, runtime));
}

DeleteInspectionTaskResponse Alibabacloud_Cmn20200825::Client::deleteInspectionTask(shared_ptr<DeleteInspectionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInspectionTaskWithOptions(request, runtime);
}

DeleteOsVersionResponse Alibabacloud_Cmn20200825::Client::deleteOsVersionWithOptions(shared_ptr<DeleteOsVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osVersionId)) {
    body->insert(pair<string, string>("OsVersionId", *request->osVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOsVersion"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteOsVersionResponse(callApi(params, req, runtime));
}

DeleteOsVersionResponse Alibabacloud_Cmn20200825::Client::deleteOsVersion(shared_ptr<DeleteOsVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOsVersionWithOptions(request, runtime);
}

DeletePhysicalSpaceResponse Alibabacloud_Cmn20200825::Client::deletePhysicalSpaceWithOptions(shared_ptr<DeletePhysicalSpaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->physicalSpaceId)) {
    body->insert(pair<string, string>("PhysicalSpaceId", *request->physicalSpaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePhysicalSpace"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePhysicalSpaceResponse(callApi(params, req, runtime));
}

DeletePhysicalSpaceResponse Alibabacloud_Cmn20200825::Client::deletePhysicalSpace(shared_ptr<DeletePhysicalSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePhysicalSpaceWithOptions(request, runtime);
}

DeleteResourceInformationResponse Alibabacloud_Cmn20200825::Client::deleteResourceInformationWithOptions(shared_ptr<DeleteResourceInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceInformationId)) {
    body->insert(pair<string, string>("ResourceInformationId", *request->resourceInformationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceInformation"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceInformationResponse(callApi(params, req, runtime));
}

DeleteResourceInformationResponse Alibabacloud_Cmn20200825::Client::deleteResourceInformation(shared_ptr<DeleteResourceInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteResourceInformationWithOptions(request, runtime);
}

DeleteSetupProjectResponse Alibabacloud_Cmn20200825::Client::deleteSetupProjectWithOptions(shared_ptr<DeleteSetupProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->setupProjectId)) {
    body->insert(pair<string, string>("SetupProjectId", *request->setupProjectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSetupProject"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSetupProjectResponse(callApi(params, req, runtime));
}

DeleteSetupProjectResponse Alibabacloud_Cmn20200825::Client::deleteSetupProject(shared_ptr<DeleteSetupProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSetupProjectWithOptions(request, runtime);
}

DeleteSpaceModelResponse Alibabacloud_Cmn20200825::Client::deleteSpaceModelWithOptions(shared_ptr<DeleteSpaceModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceModelId)) {
    query->insert(pair<string, string>("SpaceModelId", *request->spaceModelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSpaceModel"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSpaceModelResponse(callApi(params, req, runtime));
}

DeleteSpaceModelResponse Alibabacloud_Cmn20200825::Client::deleteSpaceModel(shared_ptr<DeleteSpaceModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSpaceModelWithOptions(request, runtime);
}

DisableNotificationResponse Alibabacloud_Cmn20200825::Client::disableNotificationWithOptions(shared_ptr<DisableNotificationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DisableNotificationShrinkRequest> request = make_shared<DisableNotificationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DisableNotificationRequestList>>(tmpReq->list)) {
    request->listShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->list, make_shared<string>("List"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expiryTime)) {
    body->insert(pair<string, string>("ExpiryTime", *request->expiryTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listShrink)) {
    body->insert(pair<string, string>("List", *request->listShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("Reason", *request->reason));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableNotification"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableNotificationResponse(callApi(params, req, runtime));
}

DisableNotificationResponse Alibabacloud_Cmn20200825::Client::disableNotification(shared_ptr<DisableNotificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableNotificationWithOptions(request, runtime);
}

DownloadDeviceResourceResponse Alibabacloud_Cmn20200825::Client::downloadDeviceResourceWithOptions(shared_ptr<DownloadDeviceResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DownloadDeviceResourceShrinkRequest> request = make_shared<DownloadDeviceResourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->deviceResourceIds)) {
    request->deviceResourceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceResourceIds, make_shared<string>("DeviceResourceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadDeviceResource"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadDeviceResourceResponse(callApi(params, req, runtime));
}

DownloadDeviceResourceResponse Alibabacloud_Cmn20200825::Client::downloadDeviceResource(shared_ptr<DownloadDeviceResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadDeviceResourceWithOptions(request, runtime);
}

EnableNotificationResponse Alibabacloud_Cmn20200825::Client::enableNotificationWithOptions(shared_ptr<EnableNotificationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EnableNotificationShrinkRequest> request = make_shared<EnableNotificationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<EnableNotificationRequestList>>(tmpReq->list)) {
    request->listShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->list, make_shared<string>("List"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listShrink)) {
    body->insert(pair<string, string>("List", *request->listShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableNotification"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableNotificationResponse(callApi(params, req, runtime));
}

EnableNotificationResponse Alibabacloud_Cmn20200825::Client::enableNotification(shared_ptr<EnableNotificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableNotificationWithOptions(request, runtime);
}

GetAlarmStatusResponse Alibabacloud_Cmn20200825::Client::getAlarmStatusWithOptions(shared_ptr<GetAlarmStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlarmStatus"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlarmStatusResponse(callApi(params, req, runtime));
}

GetAlarmStatusResponse Alibabacloud_Cmn20200825::Client::getAlarmStatus(shared_ptr<GetAlarmStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlarmStatusWithOptions(request, runtime);
}

GetConfigurationSpecificationResponse Alibabacloud_Cmn20200825::Client::getConfigurationSpecificationWithOptions(shared_ptr<GetConfigurationSpecificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConfigurationSpecification"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConfigurationSpecificationResponse(callApi(params, req, runtime));
}

GetConfigurationSpecificationResponse Alibabacloud_Cmn20200825::Client::getConfigurationSpecification(shared_ptr<GetConfigurationSpecificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConfigurationSpecificationWithOptions(request, runtime);
}

GetConfigurationVariateResponse Alibabacloud_Cmn20200825::Client::getConfigurationVariateWithOptions(shared_ptr<GetConfigurationVariateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConfigurationVariate"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConfigurationVariateResponse(callApi(params, req, runtime));
}

GetConfigurationVariateResponse Alibabacloud_Cmn20200825::Client::getConfigurationVariate(shared_ptr<GetConfigurationVariateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConfigurationVariateWithOptions(request, runtime);
}

GetDedicatedLineResponse Alibabacloud_Cmn20200825::Client::getDedicatedLineWithOptions(shared_ptr<GetDedicatedLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDedicatedLine"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDedicatedLineResponse(callApi(params, req, runtime));
}

GetDedicatedLineResponse Alibabacloud_Cmn20200825::Client::getDedicatedLine(shared_ptr<GetDedicatedLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDedicatedLineWithOptions(request, runtime);
}

GetDeviceResponse Alibabacloud_Cmn20200825::Client::getDeviceWithOptions(shared_ptr<GetDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDevice"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceResponse(callApi(params, req, runtime));
}

GetDeviceResponse Alibabacloud_Cmn20200825::Client::getDevice(shared_ptr<GetDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceWithOptions(request, runtime);
}

GetDeviceConfigResponse Alibabacloud_Cmn20200825::Client::getDeviceConfigWithOptions(shared_ptr<GetDeviceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceConfig"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceConfigResponse(callApi(params, req, runtime));
}

GetDeviceConfigResponse Alibabacloud_Cmn20200825::Client::getDeviceConfig(shared_ptr<GetDeviceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceConfigWithOptions(request, runtime);
}

GetDeviceConfigDateResponse Alibabacloud_Cmn20200825::Client::getDeviceConfigDateWithOptions(shared_ptr<GetDeviceConfigDateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceConfigDate"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceConfigDateResponse(callApi(params, req, runtime));
}

GetDeviceConfigDateResponse Alibabacloud_Cmn20200825::Client::getDeviceConfigDate(shared_ptr<GetDeviceConfigDateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceConfigDateWithOptions(request, runtime);
}

GetDeviceConfigDiffResponse Alibabacloud_Cmn20200825::Client::getDeviceConfigDiffWithOptions(shared_ptr<GetDeviceConfigDiffRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceConfigDiff"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceConfigDiffResponse(callApi(params, req, runtime));
}

GetDeviceConfigDiffResponse Alibabacloud_Cmn20200825::Client::getDeviceConfigDiff(shared_ptr<GetDeviceConfigDiffRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceConfigDiffWithOptions(request, runtime);
}

GetDeviceFormResponse Alibabacloud_Cmn20200825::Client::getDeviceFormWithOptions(shared_ptr<GetDeviceFormRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceForm"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceFormResponse(callApi(params, req, runtime));
}

GetDeviceFormResponse Alibabacloud_Cmn20200825::Client::getDeviceForm(shared_ptr<GetDeviceFormRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceFormWithOptions(request, runtime);
}

GetDeviceOpLogResponse Alibabacloud_Cmn20200825::Client::getDeviceOpLogWithOptions(shared_ptr<GetDeviceOpLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceOpLog"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceOpLogResponse(callApi(params, req, runtime));
}

GetDeviceOpLogResponse Alibabacloud_Cmn20200825::Client::getDeviceOpLog(shared_ptr<GetDeviceOpLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceOpLogWithOptions(request, runtime);
}

GetDevicePropertyResponse Alibabacloud_Cmn20200825::Client::getDevicePropertyWithOptions(shared_ptr<GetDevicePropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceProperty"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDevicePropertyResponse(callApi(params, req, runtime));
}

GetDevicePropertyResponse Alibabacloud_Cmn20200825::Client::getDeviceProperty(shared_ptr<GetDevicePropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDevicePropertyWithOptions(request, runtime);
}

GetDeviceResourceResponse Alibabacloud_Cmn20200825::Client::getDeviceResourceWithOptions(shared_ptr<GetDeviceResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceResource"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceResourceResponse(callApi(params, req, runtime));
}

GetDeviceResourceResponse Alibabacloud_Cmn20200825::Client::getDeviceResource(shared_ptr<GetDeviceResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceResourceWithOptions(request, runtime);
}

GetInspectionTaskResponse Alibabacloud_Cmn20200825::Client::getInspectionTaskWithOptions(shared_ptr<GetInspectionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInspectionTask"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInspectionTaskResponse(callApi(params, req, runtime));
}

GetInspectionTaskResponse Alibabacloud_Cmn20200825::Client::getInspectionTask(shared_ptr<GetInspectionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInspectionTaskWithOptions(request, runtime);
}

GetMonitorItemResponse Alibabacloud_Cmn20200825::Client::getMonitorItemWithOptions(shared_ptr<GetMonitorItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMonitorItem"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMonitorItemResponse(callApi(params, req, runtime));
}

GetMonitorItemResponse Alibabacloud_Cmn20200825::Client::getMonitorItem(shared_ptr<GetMonitorItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMonitorItemWithOptions(request, runtime);
}

GetOsDownloadPathResponse Alibabacloud_Cmn20200825::Client::getOsDownloadPathWithOptions(shared_ptr<GetOsDownloadPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOsDownloadPath"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOsDownloadPathResponse(callApi(params, req, runtime));
}

GetOsDownloadPathResponse Alibabacloud_Cmn20200825::Client::getOsDownloadPath(shared_ptr<GetOsDownloadPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOsDownloadPathWithOptions(request, runtime);
}

GetOsVersionResponse Alibabacloud_Cmn20200825::Client::getOsVersionWithOptions(shared_ptr<GetOsVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOsVersion"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOsVersionResponse(callApi(params, req, runtime));
}

GetOsVersionResponse Alibabacloud_Cmn20200825::Client::getOsVersion(shared_ptr<GetOsVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOsVersionWithOptions(request, runtime);
}

GetOssPolicyResponse Alibabacloud_Cmn20200825::Client::getOssPolicyWithOptions(shared_ptr<GetOssPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOssPolicy"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOssPolicyResponse(callApi(params, req, runtime));
}

GetOssPolicyResponse Alibabacloud_Cmn20200825::Client::getOssPolicy(shared_ptr<GetOssPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOssPolicyWithOptions(request, runtime);
}

GetPhysicalSpaceResponse Alibabacloud_Cmn20200825::Client::getPhysicalSpaceWithOptions(shared_ptr<GetPhysicalSpaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPhysicalSpace"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPhysicalSpaceResponse(callApi(params, req, runtime));
}

GetPhysicalSpaceResponse Alibabacloud_Cmn20200825::Client::getPhysicalSpace(shared_ptr<GetPhysicalSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPhysicalSpaceWithOptions(request, runtime);
}

GetPhysicalSpaceTopoResponse Alibabacloud_Cmn20200825::Client::getPhysicalSpaceTopoWithOptions(shared_ptr<GetPhysicalSpaceTopoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->physicalSpaceId)) {
    query->insert(pair<string, string>("PhysicalSpaceId", *request->physicalSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topoType)) {
    query->insert(pair<string, string>("TopoType", *request->topoType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPhysicalSpaceTopo"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPhysicalSpaceTopoResponse(callApi(params, req, runtime));
}

GetPhysicalSpaceTopoResponse Alibabacloud_Cmn20200825::Client::getPhysicalSpaceTopo(shared_ptr<GetPhysicalSpaceTopoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPhysicalSpaceTopoWithOptions(request, runtime);
}

GetRealtimeTaskResponse Alibabacloud_Cmn20200825::Client::getRealtimeTaskWithOptions(shared_ptr<GetRealtimeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRealtimeTask"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRealtimeTaskResponse(callApi(params, req, runtime));
}

GetRealtimeTaskResponse Alibabacloud_Cmn20200825::Client::getRealtimeTask(shared_ptr<GetRealtimeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRealtimeTaskWithOptions(request, runtime);
}

GetScheduleWorkerResponse Alibabacloud_Cmn20200825::Client::getScheduleWorkerWithOptions(shared_ptr<GetScheduleWorkerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScheduleWorker"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScheduleWorkerResponse(callApi(params, req, runtime));
}

GetScheduleWorkerResponse Alibabacloud_Cmn20200825::Client::getScheduleWorker(shared_ptr<GetScheduleWorkerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getScheduleWorkerWithOptions(request, runtime);
}

GetSetupProjectResponse Alibabacloud_Cmn20200825::Client::getSetupProjectWithOptions(shared_ptr<GetSetupProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSetupProject"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSetupProjectResponse(callApi(params, req, runtime));
}

GetSetupProjectResponse Alibabacloud_Cmn20200825::Client::getSetupProject(shared_ptr<GetSetupProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSetupProjectWithOptions(request, runtime);
}

GetSpaceModelResponse Alibabacloud_Cmn20200825::Client::getSpaceModelWithOptions(shared_ptr<GetSpaceModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSpaceModel"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSpaceModelResponse(callApi(params, req, runtime));
}

GetSpaceModelResponse Alibabacloud_Cmn20200825::Client::getSpaceModel(shared_ptr<GetSpaceModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSpaceModelWithOptions(request, runtime);
}

GetSpaceModelInstanceResponse Alibabacloud_Cmn20200825::Client::getSpaceModelInstanceWithOptions(shared_ptr<GetSpaceModelInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSpaceModelInstance"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSpaceModelInstanceResponse(callApi(params, req, runtime));
}

GetSpaceModelInstanceResponse Alibabacloud_Cmn20200825::Client::getSpaceModelInstance(shared_ptr<GetSpaceModelInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSpaceModelInstanceWithOptions(request, runtime);
}

GetSpaceModelSortResponse Alibabacloud_Cmn20200825::Client::getSpaceModelSortWithOptions(shared_ptr<GetSpaceModelSortRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSpaceModelSort"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSpaceModelSortResponse(callApi(params, req, runtime));
}

GetSpaceModelSortResponse Alibabacloud_Cmn20200825::Client::getSpaceModelSort(shared_ptr<GetSpaceModelSortRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSpaceModelSortWithOptions(request, runtime);
}

GetTaskResponse Alibabacloud_Cmn20200825::Client::getTaskWithOptions(shared_ptr<GetTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTask"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskResponse(callApi(params, req, runtime));
}

GetTaskResponse Alibabacloud_Cmn20200825::Client::getTask(shared_ptr<GetTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskWithOptions(request, runtime);
}

ListAlarmStatusResponse Alibabacloud_Cmn20200825::Client::listAlarmStatusWithOptions(shared_ptr<ListAlarmStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlarmStatus"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlarmStatusResponse(callApi(params, req, runtime));
}

ListAlarmStatusResponse Alibabacloud_Cmn20200825::Client::listAlarmStatus(shared_ptr<ListAlarmStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAlarmStatusWithOptions(request, runtime);
}

ListAlarmStatusHistoriesResponse Alibabacloud_Cmn20200825::Client::listAlarmStatusHistoriesWithOptions(shared_ptr<ListAlarmStatusHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlarmStatusHistories"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlarmStatusHistoriesResponse(callApi(params, req, runtime));
}

ListAlarmStatusHistoriesResponse Alibabacloud_Cmn20200825::Client::listAlarmStatusHistories(shared_ptr<ListAlarmStatusHistoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAlarmStatusHistoriesWithOptions(request, runtime);
}

ListAlarmStatusStatisticsResponse Alibabacloud_Cmn20200825::Client::listAlarmStatusStatisticsWithOptions(shared_ptr<ListAlarmStatusStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlarmStatusStatistics"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlarmStatusStatisticsResponse(callApi(params, req, runtime));
}

ListAlarmStatusStatisticsResponse Alibabacloud_Cmn20200825::Client::listAlarmStatusStatistics(shared_ptr<ListAlarmStatusStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAlarmStatusStatisticsWithOptions(request, runtime);
}

ListArchitectureAttributeResponse Alibabacloud_Cmn20200825::Client::listArchitectureAttributeWithOptions(shared_ptr<ListArchitectureAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListArchitectureAttribute"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListArchitectureAttributeResponse(callApi(params, req, runtime));
}

ListArchitectureAttributeResponse Alibabacloud_Cmn20200825::Client::listArchitectureAttribute(shared_ptr<ListArchitectureAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listArchitectureAttributeWithOptions(request, runtime);
}

ListConfigurationSpecificationsResponse Alibabacloud_Cmn20200825::Client::listConfigurationSpecificationsWithOptions(shared_ptr<ListConfigurationSpecificationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConfigurationSpecifications"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConfigurationSpecificationsResponse(callApi(params, req, runtime));
}

ListConfigurationSpecificationsResponse Alibabacloud_Cmn20200825::Client::listConfigurationSpecifications(shared_ptr<ListConfigurationSpecificationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConfigurationSpecificationsWithOptions(request, runtime);
}

ListConfigurationVariateResponse Alibabacloud_Cmn20200825::Client::listConfigurationVariateWithOptions(shared_ptr<ListConfigurationVariateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConfigurationVariate"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConfigurationVariateResponse(callApi(params, req, runtime));
}

ListConfigurationVariateResponse Alibabacloud_Cmn20200825::Client::listConfigurationVariate(shared_ptr<ListConfigurationVariateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConfigurationVariateWithOptions(request, runtime);
}

ListConnectionPoliciesResponse Alibabacloud_Cmn20200825::Client::listConnectionPoliciesWithOptions(shared_ptr<ListConnectionPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->architectureIterationId)) {
    body->insert(pair<string, string>("ArchitectureIterationId", *request->architectureIterationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPolicyId)) {
    body->insert(pair<string, string>("ConnectionPolicyId", *request->connectionPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->downlinkArchitectureDeviceId)) {
    body->insert(pair<string, string>("DownlinkArchitectureDeviceId", *request->downlinkArchitectureDeviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->downlinkArchitectureModuleId)) {
    body->insert(pair<string, string>("DownlinkArchitectureModuleId", *request->downlinkArchitectureModuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uplinkArchitectureDeviceId)) {
    body->insert(pair<string, string>("UplinkArchitectureDeviceId", *request->uplinkArchitectureDeviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uplinkArchitectureModuleId)) {
    body->insert(pair<string, string>("UplinkArchitectureModuleId", *request->uplinkArchitectureModuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConnectionPolicies"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConnectionPoliciesResponse(callApi(params, req, runtime));
}

ListConnectionPoliciesResponse Alibabacloud_Cmn20200825::Client::listConnectionPolicies(shared_ptr<ListConnectionPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConnectionPoliciesWithOptions(request, runtime);
}

ListDedicatedLinesResponse Alibabacloud_Cmn20200825::Client::listDedicatedLinesWithOptions(shared_ptr<ListDedicatedLinesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDedicatedLines"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDedicatedLinesResponse(callApi(params, req, runtime));
}

ListDedicatedLinesResponse Alibabacloud_Cmn20200825::Client::listDedicatedLines(shared_ptr<ListDedicatedLinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDedicatedLinesWithOptions(request, runtime);
}

ListDeviceFormsResponse Alibabacloud_Cmn20200825::Client::listDeviceFormsWithOptions(shared_ptr<ListDeviceFormsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeviceForms"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeviceFormsResponse(callApi(params, req, runtime));
}

ListDeviceFormsResponse Alibabacloud_Cmn20200825::Client::listDeviceForms(shared_ptr<ListDeviceFormsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceFormsWithOptions(request, runtime);
}

ListDevicePropertiesResponse Alibabacloud_Cmn20200825::Client::listDevicePropertiesWithOptions(shared_ptr<ListDevicePropertiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeviceProperties"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDevicePropertiesResponse(callApi(params, req, runtime));
}

ListDevicePropertiesResponse Alibabacloud_Cmn20200825::Client::listDeviceProperties(shared_ptr<ListDevicePropertiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevicePropertiesWithOptions(request, runtime);
}

ListDeviceResourcesResponse Alibabacloud_Cmn20200825::Client::listDeviceResourcesWithOptions(shared_ptr<ListDeviceResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeviceResources"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeviceResourcesResponse(callApi(params, req, runtime));
}

ListDeviceResourcesResponse Alibabacloud_Cmn20200825::Client::listDeviceResources(shared_ptr<ListDeviceResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceResourcesWithOptions(request, runtime);
}

ListDeviceValuesResponse Alibabacloud_Cmn20200825::Client::listDeviceValuesWithOptions(shared_ptr<ListDeviceValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeviceValues"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeviceValuesResponse(callApi(params, req, runtime));
}

ListDeviceValuesResponse Alibabacloud_Cmn20200825::Client::listDeviceValues(shared_ptr<ListDeviceValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceValuesWithOptions(request, runtime);
}

ListDevicesResponse Alibabacloud_Cmn20200825::Client::listDevicesWithOptions(shared_ptr<ListDevicesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDevicesShrinkRequest> request = make_shared<ListDevicesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->deviceIds)) {
    request->deviceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceIds, make_shared<string>("DeviceIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->hostName)) {
    request->hostNameShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hostName, make_shared<string>("HostName"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->ip)) {
    request->ipShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ip, make_shared<string>("Ip"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->mac)) {
    request->macShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->mac, make_shared<string>("Mac"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->model)) {
    request->modelShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->model, make_shared<string>("Model"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->physicalSpaceIds)) {
    request->physicalSpaceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->physicalSpaceIds, make_shared<string>("PhysicalSpaceIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->securityDomain)) {
    request->securityDomainShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->securityDomain, make_shared<string>("SecurityDomain"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->serviceStatus)) {
    request->serviceStatusShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->serviceStatus, make_shared<string>("ServiceStatus"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->sn)) {
    request->snShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sn, make_shared<string>("Sn"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->vendor)) {
    request->vendorShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->vendor, make_shared<string>("Vendor"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->calculateAmount)) {
    query->insert(pair<string, bool>("CalculateAmount", *request->calculateAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceFormId)) {
    query->insert(pair<string, string>("DeviceFormId", *request->deviceFormId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceFormName)) {
    query->insert(pair<string, string>("DeviceFormName", *request->deviceFormName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceIdsShrink)) {
    query->insert(pair<string, string>("DeviceIds", *request->deviceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extAttributes)) {
    query->insert(pair<string, string>("ExtAttributes", *request->extAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostNameShrink)) {
    query->insert(pair<string, string>("HostName", *request->hostNameShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipShrink)) {
    query->insert(pair<string, string>("Ip", *request->ipShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->macShrink)) {
    query->insert(pair<string, string>("Mac", *request->macShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelShrink)) {
    query->insert(pair<string, string>("Model", *request->modelShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->physicalSpaceId)) {
    query->insert(pair<string, string>("PhysicalSpaceId", *request->physicalSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->physicalSpaceIdsShrink)) {
    query->insert(pair<string, string>("PhysicalSpaceIds", *request->physicalSpaceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityDomainShrink)) {
    query->insert(pair<string, string>("SecurityDomain", *request->securityDomainShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceStatusShrink)) {
    query->insert(pair<string, string>("ServiceStatus", *request->serviceStatusShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snShrink)) {
    query->insert(pair<string, string>("Sn", *request->snShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendorShrink)) {
    query->insert(pair<string, string>("Vendor", *request->vendorShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDevices"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDevicesResponse(callApi(params, req, runtime));
}

ListDevicesResponse Alibabacloud_Cmn20200825::Client::listDevices(shared_ptr<ListDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevicesWithOptions(request, runtime);
}

ListEventDefinitionsResponse Alibabacloud_Cmn20200825::Client::listEventDefinitionsWithOptions(shared_ptr<ListEventDefinitionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEventDefinitions"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEventDefinitionsResponse(callApi(params, req, runtime));
}

ListEventDefinitionsResponse Alibabacloud_Cmn20200825::Client::listEventDefinitions(shared_ptr<ListEventDefinitionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEventDefinitionsWithOptions(request, runtime);
}

ListEventsResponse Alibabacloud_Cmn20200825::Client::listEventsWithOptions(shared_ptr<ListEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEvents"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEventsResponse(callApi(params, req, runtime));
}

ListEventsResponse Alibabacloud_Cmn20200825::Client::listEvents(shared_ptr<ListEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEventsWithOptions(request, runtime);
}

ListInspectionDevicesResponse Alibabacloud_Cmn20200825::Client::listInspectionDevicesWithOptions(shared_ptr<ListInspectionDevicesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListInspectionDevicesShrinkRequest> request = make_shared<ListInspectionDevicesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->model)) {
    request->modelShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->model, make_shared<string>("Model"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInspectionDevices"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInspectionDevicesResponse(callApi(params, req, runtime));
}

ListInspectionDevicesResponse Alibabacloud_Cmn20200825::Client::listInspectionDevices(shared_ptr<ListInspectionDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInspectionDevicesWithOptions(request, runtime);
}

ListInspectionTaskReportsResponse Alibabacloud_Cmn20200825::Client::listInspectionTaskReportsWithOptions(shared_ptr<ListInspectionTaskReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInspectionTaskReports"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInspectionTaskReportsResponse(callApi(params, req, runtime));
}

ListInspectionTaskReportsResponse Alibabacloud_Cmn20200825::Client::listInspectionTaskReports(shared_ptr<ListInspectionTaskReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInspectionTaskReportsWithOptions(request, runtime);
}

ListInspectionTasksResponse Alibabacloud_Cmn20200825::Client::listInspectionTasksWithOptions(shared_ptr<ListInspectionTasksRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListInspectionTasksShrinkRequest> request = make_shared<ListInspectionTasksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->alarmStatus)) {
    request->alarmStatusShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->alarmStatus, make_shared<string>("AlarmStatus"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInspectionTasks"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInspectionTasksResponse(callApi(params, req, runtime));
}

ListInspectionTasksResponse Alibabacloud_Cmn20200825::Client::listInspectionTasks(shared_ptr<ListInspectionTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInspectionTasksWithOptions(request, runtime);
}

ListInstancesResponse Alibabacloud_Cmn20200825::Client::listInstancesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesResponse(callApi(params, req, runtime));
}

ListInstancesResponse Alibabacloud_Cmn20200825::Client::listInstances() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesWithOptions(runtime);
}

ListIpBlocksResponse Alibabacloud_Cmn20200825::Client::listIpBlocksWithOptions(shared_ptr<ListIpBlocksRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListIpBlocksShrinkRequest> request = make_shared<ListIpBlocksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extAttributes)) {
    request->extAttributesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extAttributes, make_shared<string>("ExtAttributes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->ipList)) {
    request->ipListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ipList, make_shared<string>("IpList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIpBlocks"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIpBlocksResponse(callApi(params, req, runtime));
}

ListIpBlocksResponse Alibabacloud_Cmn20200825::Client::listIpBlocks(shared_ptr<ListIpBlocksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIpBlocksWithOptions(request, runtime);
}

ListLinksResponse Alibabacloud_Cmn20200825::Client::listLinksWithOptions(shared_ptr<ListLinksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLinks"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLinksResponse(callApi(params, req, runtime));
}

ListLinksResponse Alibabacloud_Cmn20200825::Client::listLinks(shared_ptr<ListLinksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLinksWithOptions(request, runtime);
}

ListLogsResponse Alibabacloud_Cmn20200825::Client::listLogsWithOptions(shared_ptr<ListLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogs"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLogsResponse(callApi(params, req, runtime));
}

ListLogsResponse Alibabacloud_Cmn20200825::Client::listLogs(shared_ptr<ListLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLogsWithOptions(request, runtime);
}

ListMonitorDataResponse Alibabacloud_Cmn20200825::Client::listMonitorDataWithOptions(shared_ptr<ListMonitorDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMonitorData"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMonitorDataResponse(callApi(params, req, runtime));
}

ListMonitorDataResponse Alibabacloud_Cmn20200825::Client::listMonitorData(shared_ptr<ListMonitorDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMonitorDataWithOptions(request, runtime);
}

ListNotificationHistoriesResponse Alibabacloud_Cmn20200825::Client::listNotificationHistoriesWithOptions(shared_ptr<ListNotificationHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNotificationHistories"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNotificationHistoriesResponse(callApi(params, req, runtime));
}

ListNotificationHistoriesResponse Alibabacloud_Cmn20200825::Client::listNotificationHistories(shared_ptr<ListNotificationHistoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNotificationHistoriesWithOptions(request, runtime);
}

ListNotificationHistoriesStatisticsResponse Alibabacloud_Cmn20200825::Client::listNotificationHistoriesStatisticsWithOptions(shared_ptr<ListNotificationHistoriesStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNotificationHistoriesStatistics"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNotificationHistoriesStatisticsResponse(callApi(params, req, runtime));
}

ListNotificationHistoriesStatisticsResponse Alibabacloud_Cmn20200825::Client::listNotificationHistoriesStatistics(shared_ptr<ListNotificationHistoriesStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNotificationHistoriesStatisticsWithOptions(request, runtime);
}

ListOsVersionsResponse Alibabacloud_Cmn20200825::Client::listOsVersionsWithOptions(shared_ptr<ListOsVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOsVersions"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOsVersionsResponse(callApi(params, req, runtime));
}

ListOsVersionsResponse Alibabacloud_Cmn20200825::Client::listOsVersions(shared_ptr<ListOsVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOsVersionsWithOptions(request, runtime);
}

ListPhysicalSpacesResponse Alibabacloud_Cmn20200825::Client::listPhysicalSpacesWithOptions(shared_ptr<ListPhysicalSpacesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListPhysicalSpacesShrinkRequest> request = make_shared<ListPhysicalSpacesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->physicalSpaceIds)) {
    request->physicalSpaceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->physicalSpaceIds, make_shared<string>("PhysicalSpaceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPhysicalSpaces"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPhysicalSpacesResponse(callApi(params, req, runtime));
}

ListPhysicalSpacesResponse Alibabacloud_Cmn20200825::Client::listPhysicalSpaces(shared_ptr<ListPhysicalSpacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPhysicalSpacesWithOptions(request, runtime);
}

ListRegionsResponse Alibabacloud_Cmn20200825::Client::listRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRegions"))},
    {"version", boost::any(string("2020-08-25"))},
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

ListRegionsResponse Alibabacloud_Cmn20200825::Client::listRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRegionsWithOptions(runtime);
}

ListResourceInformationsResponse Alibabacloud_Cmn20200825::Client::listResourceInformationsWithOptions(shared_ptr<ListResourceInformationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceInformations"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceInformationsResponse(callApi(params, req, runtime));
}

ListResourceInformationsResponse Alibabacloud_Cmn20200825::Client::listResourceInformations(shared_ptr<ListResourceInformationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceInformationsWithOptions(request, runtime);
}

ListResourceInstancesResponse Alibabacloud_Cmn20200825::Client::listResourceInstancesWithOptions(shared_ptr<ListResourceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceInstances"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceInstancesResponse(callApi(params, req, runtime));
}

ListResourceInstancesResponse Alibabacloud_Cmn20200825::Client::listResourceInstances(shared_ptr<ListResourceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceInstancesWithOptions(request, runtime);
}

ListResourceTypesResponse Alibabacloud_Cmn20200825::Client::listResourceTypesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceTypes"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceTypesResponse(callApi(params, req, runtime));
}

ListResourceTypesResponse Alibabacloud_Cmn20200825::Client::listResourceTypes() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceTypesWithOptions(runtime);
}

ListSetupProjectsResponse Alibabacloud_Cmn20200825::Client::listSetupProjectsWithOptions(shared_ptr<ListSetupProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSetupProjects"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSetupProjectsResponse(callApi(params, req, runtime));
}

ListSetupProjectsResponse Alibabacloud_Cmn20200825::Client::listSetupProjects(shared_ptr<ListSetupProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSetupProjectsWithOptions(request, runtime);
}

ListSpaceModelsResponse Alibabacloud_Cmn20200825::Client::listSpaceModelsWithOptions(shared_ptr<ListSpaceModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSpaceModels"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSpaceModelsResponse(callApi(params, req, runtime));
}

ListSpaceModelsResponse Alibabacloud_Cmn20200825::Client::listSpaceModels(shared_ptr<ListSpaceModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSpaceModelsWithOptions(request, runtime);
}

ListTasksHistoriesResponse Alibabacloud_Cmn20200825::Client::listTasksHistoriesWithOptions(shared_ptr<ListTasksHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTasksHistories"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTasksHistoriesResponse(callApi(params, req, runtime));
}

ListTasksHistoriesResponse Alibabacloud_Cmn20200825::Client::listTasksHistories(shared_ptr<ListTasksHistoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTasksHistoriesWithOptions(request, runtime);
}

ListTreePhysicalSpacesResponse Alibabacloud_Cmn20200825::Client::listTreePhysicalSpacesWithOptions(shared_ptr<ListTreePhysicalSpacesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTreePhysicalSpacesShrinkRequest> request = make_shared<ListTreePhysicalSpacesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->physicalSpaceIds)) {
    request->physicalSpaceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->physicalSpaceIds, make_shared<string>("PhysicalSpaceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTreePhysicalSpaces"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTreePhysicalSpacesResponse(callApi(params, req, runtime));
}

ListTreePhysicalSpacesResponse Alibabacloud_Cmn20200825::Client::listTreePhysicalSpaces(shared_ptr<ListTreePhysicalSpacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTreePhysicalSpacesWithOptions(request, runtime);
}

LockSpaceModelResponse Alibabacloud_Cmn20200825::Client::lockSpaceModelWithOptions(shared_ptr<LockSpaceModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceModelId)) {
    query->insert(pair<string, string>("SpaceModelId", *request->spaceModelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LockSpaceModel"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LockSpaceModelResponse(callApi(params, req, runtime));
}

LockSpaceModelResponse Alibabacloud_Cmn20200825::Client::lockSpaceModel(shared_ptr<LockSpaceModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockSpaceModelWithOptions(request, runtime);
}

ReleaseIPResponse Alibabacloud_Cmn20200825::Client::releaseIPWithOptions(shared_ptr<ReleaseIPRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ReleaseIPShrinkRequest> request = make_shared<ReleaseIPShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->deviceResourceIds)) {
    request->deviceResourceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceResourceIds, make_shared<string>("DeviceResourceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceResourceId)) {
    query->insert(pair<string, string>("DeviceResourceId", *request->deviceResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceResourceIdsShrink)) {
    query->insert(pair<string, string>("DeviceResourceIds", *request->deviceResourceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipType)) {
    query->insert(pair<string, string>("IpType", *request->ipType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setupProjectId)) {
    query->insert(pair<string, string>("SetupProjectId", *request->setupProjectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseIP"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseIPResponse(callApi(params, req, runtime));
}

ReleaseIPResponse Alibabacloud_Cmn20200825::Client::releaseIP(shared_ptr<ReleaseIPRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseIPWithOptions(request, runtime);
}

RetryTasksResponse Alibabacloud_Cmn20200825::Client::retryTasksWithOptions(shared_ptr<RetryTasksRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RetryTasksShrinkRequest> request = make_shared<RetryTasksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RetryTasksRequestRetryTasks>>(tmpReq->retryTasks)) {
    request->retryTasksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->retryTasks, make_shared<string>("RetryTasks"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retryTasksShrink)) {
    query->insert(pair<string, string>("RetryTasks", *request->retryTasksShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetryTasks"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RetryTasksResponse(callApi(params, req, runtime));
}

RetryTasksResponse Alibabacloud_Cmn20200825::Client::retryTasks(shared_ptr<RetryTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return retryTasksWithOptions(request, runtime);
}

UpdateConfigurationSpecificationResponse Alibabacloud_Cmn20200825::Client::updateConfigurationSpecificationWithOptions(shared_ptr<UpdateConfigurationSpecificationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateConfigurationSpecificationShrinkRequest> request = make_shared<UpdateConfigurationSpecificationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<vector<uint8_t>>>(tmpReq->relatedVariate)) {
    request->relatedVariateShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedVariate, make_shared<string>("RelatedVariate"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->architecture)) {
    body->insert(pair<string, string>("Architecture", *request->architecture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configurationSpecificationId)) {
    body->insert(pair<string, string>("ConfigurationSpecificationId", *request->configurationSpecificationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedVariateShrink)) {
    body->insert(pair<string, string>("RelatedVariate", *request->relatedVariateShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    body->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specificationContent)) {
    body->insert(pair<string, string>("SpecificationContent", *request->specificationContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specificationName)) {
    body->insert(pair<string, string>("SpecificationName", *request->specificationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendor)) {
    body->insert(pair<string, string>("Vendor", *request->vendor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConfigurationSpecification"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConfigurationSpecificationResponse(callApi(params, req, runtime));
}

UpdateConfigurationSpecificationResponse Alibabacloud_Cmn20200825::Client::updateConfigurationSpecification(shared_ptr<UpdateConfigurationSpecificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConfigurationSpecificationWithOptions(request, runtime);
}

UpdateConfigurationVariateResponse Alibabacloud_Cmn20200825::Client::updateConfigurationVariateWithOptions(shared_ptr<UpdateConfigurationVariateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configurationVariateId)) {
    body->insert(pair<string, string>("ConfigurationVariateId", *request->configurationVariateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formatFunction)) {
    body->insert(pair<string, string>("FormatFunction", *request->formatFunction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variateName)) {
    body->insert(pair<string, string>("VariateName", *request->variateName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConfigurationVariate"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConfigurationVariateResponse(callApi(params, req, runtime));
}

UpdateConfigurationVariateResponse Alibabacloud_Cmn20200825::Client::updateConfigurationVariate(shared_ptr<UpdateConfigurationVariateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConfigurationVariateWithOptions(request, runtime);
}

UpdateDedicatedLineResponse Alibabacloud_Cmn20200825::Client::updateDedicatedLineWithOptions(shared_ptr<UpdateDedicatedLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    body->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contact)) {
    body->insert(pair<string, string>("Contact", *request->contact));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedLineGateway)) {
    body->insert(pair<string, string>("DedicatedLineGateway", *request->dedicatedLineGateway));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedLineId)) {
    body->insert(pair<string, string>("DedicatedLineId", *request->dedicatedLineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedLineIp)) {
    body->insert(pair<string, string>("DedicatedLineIp", *request->dedicatedLineIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedLineRole)) {
    body->insert(pair<string, string>("DedicatedLineRole", *request->dedicatedLineRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    body->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->devicePort)) {
    body->insert(pair<string, string>("DevicePort", *request->devicePort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expirationDate)) {
    body->insert(pair<string, string>("ExpirationDate", *request->expirationDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extAttributes)) {
    body->insert(pair<string, string>("ExtAttributes", *request->extAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isp)) {
    body->insert(pair<string, string>("Isp", *request->isp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispId)) {
    body->insert(pair<string, string>("IspId", *request->ispId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->onlineDate)) {
    body->insert(pair<string, string>("OnlineDate", *request->onlineDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->physicalSpaceId)) {
    body->insert(pair<string, string>("PhysicalSpaceId", *request->physicalSpaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDedicatedLine"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDedicatedLineResponse(callApi(params, req, runtime));
}

UpdateDedicatedLineResponse Alibabacloud_Cmn20200825::Client::updateDedicatedLine(shared_ptr<UpdateDedicatedLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDedicatedLineWithOptions(request, runtime);
}

UpdateDeviceResponse Alibabacloud_Cmn20200825::Client::updateDeviceWithOptions(shared_ptr<UpdateDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    body->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enablePassword)) {
    body->insert(pair<string, string>("EnablePassword", *request->enablePassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extAttributes)) {
    body->insert(pair<string, string>("ExtAttributes", *request->extAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    body->insert(pair<string, string>("HostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    body->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginPassword)) {
    body->insert(pair<string, string>("LoginPassword", *request->loginPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginType)) {
    body->insert(pair<string, string>("LoginType", *request->loginType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginUsername)) {
    body->insert(pair<string, string>("LoginUsername", *request->loginUsername));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mac)) {
    body->insert(pair<string, string>("Mac", *request->mac));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->physicalSpaceId)) {
    body->insert(pair<string, string>("PhysicalSpaceId", *request->physicalSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityDomain)) {
    body->insert(pair<string, string>("SecurityDomain", *request->securityDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceStatus)) {
    body->insert(pair<string, string>("ServiceStatus", *request->serviceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sn)) {
    body->insert(pair<string, string>("Sn", *request->sn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpAccountType)) {
    body->insert(pair<string, string>("SnmpAccountType", *request->snmpAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpAccountVersion)) {
    body->insert(pair<string, string>("SnmpAccountVersion", *request->snmpAccountVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpAuthPassphrase)) {
    body->insert(pair<string, string>("SnmpAuthPassphrase", *request->snmpAuthPassphrase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpAuthProtocol)) {
    body->insert(pair<string, string>("SnmpAuthProtocol", *request->snmpAuthProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpCommunity)) {
    body->insert(pair<string, string>("SnmpCommunity", *request->snmpCommunity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpPrivacyPassphrase)) {
    body->insert(pair<string, string>("SnmpPrivacyPassphrase", *request->snmpPrivacyPassphrase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpPrivacyProtocol)) {
    body->insert(pair<string, string>("SnmpPrivacyProtocol", *request->snmpPrivacyProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpSecurityLevel)) {
    body->insert(pair<string, string>("SnmpSecurityLevel", *request->snmpSecurityLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpUsername)) {
    body->insert(pair<string, string>("SnmpUsername", *request->snmpUsername));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendor)) {
    body->insert(pair<string, string>("Vendor", *request->vendor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDevice"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDeviceResponse(callApi(params, req, runtime));
}

UpdateDeviceResponse Alibabacloud_Cmn20200825::Client::updateDevice(shared_ptr<UpdateDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDeviceWithOptions(request, runtime);
}

UpdateDeviceFormResponse Alibabacloud_Cmn20200825::Client::updateDeviceFormWithOptions(shared_ptr<UpdateDeviceFormRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDeviceFormShrinkRequest> request = make_shared<UpdateDeviceFormShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateDeviceFormRequestAttributeList>>(tmpReq->attributeList)) {
    request->attributeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->attributeList, make_shared<string>("AttributeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->accountConfig)) {
    body->insert(pair<string, bool>("AccountConfig", *request->accountConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attributeListShrink)) {
    body->insert(pair<string, string>("AttributeList", *request->attributeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configCompare)) {
    body->insert(pair<string, bool>("ConfigCompare", *request->configCompare));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->detailDisplay)) {
    body->insert(pair<string, bool>("DetailDisplay", *request->detailDisplay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceFormId)) {
    body->insert(pair<string, string>("DeviceFormId", *request->deviceFormId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedDeviceFormId)) {
    body->insert(pair<string, string>("RelatedDeviceFormId", *request->relatedDeviceFormId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->script)) {
    body->insert(pair<string, string>("Script", *request->script));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDeviceForm"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDeviceFormResponse(callApi(params, req, runtime));
}

UpdateDeviceFormResponse Alibabacloud_Cmn20200825::Client::updateDeviceForm(shared_ptr<UpdateDeviceFormRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDeviceFormWithOptions(request, runtime);
}

UpdateDevicePropertyResponse Alibabacloud_Cmn20200825::Client::updateDevicePropertyWithOptions(shared_ptr<UpdateDevicePropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->devicePropertyId)) {
    body->insert(pair<string, string>("DevicePropertyId", *request->devicePropertyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyContent)) {
    body->insert(pair<string, string>("PropertyContent", *request->propertyContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyFormat)) {
    body->insert(pair<string, string>("PropertyFormat", *request->propertyFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyName)) {
    body->insert(pair<string, string>("PropertyName", *request->propertyName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDeviceProperty"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDevicePropertyResponse(callApi(params, req, runtime));
}

UpdateDevicePropertyResponse Alibabacloud_Cmn20200825::Client::updateDeviceProperty(shared_ptr<UpdateDevicePropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDevicePropertyWithOptions(request, runtime);
}

UpdateDeviceResourceResponse Alibabacloud_Cmn20200825::Client::updateDeviceResourceWithOptions(shared_ptr<UpdateDeviceResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDeviceResourceShrinkRequest> request = make_shared<UpdateDeviceResourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->deviceResourceIds)) {
    request->deviceResourceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceResourceIds, make_shared<string>("DeviceResourceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceResourceId)) {
    body->insert(pair<string, string>("DeviceResourceId", *request->deviceResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceResourceIdsShrink)) {
    body->insert(pair<string, string>("DeviceResourceIds", *request->deviceResourceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setupProjectId)) {
    body->insert(pair<string, string>("SetupProjectId", *request->setupProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateType)) {
    body->insert(pair<string, string>("UpdateType", *request->updateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDeviceResource"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDeviceResourceResponse(callApi(params, req, runtime));
}

UpdateDeviceResourceResponse Alibabacloud_Cmn20200825::Client::updateDeviceResource(shared_ptr<UpdateDeviceResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDeviceResourceWithOptions(request, runtime);
}

UpdateDevicesResponse Alibabacloud_Cmn20200825::Client::updateDevicesWithOptions(shared_ptr<UpdateDevicesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDevicesShrinkRequest> request = make_shared<UpdateDevicesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->deviceIds)) {
    request->deviceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceIds, make_shared<string>("DeviceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceIdsShrink)) {
    body->insert(pair<string, string>("DeviceIds", *request->deviceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enablePassword)) {
    body->insert(pair<string, string>("EnablePassword", *request->enablePassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extAttributes)) {
    body->insert(pair<string, string>("ExtAttributes", *request->extAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginPassword)) {
    body->insert(pair<string, string>("LoginPassword", *request->loginPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginType)) {
    body->insert(pair<string, string>("LoginType", *request->loginType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginUsername)) {
    body->insert(pair<string, string>("LoginUsername", *request->loginUsername));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->physicalSpaceId)) {
    body->insert(pair<string, string>("PhysicalSpaceId", *request->physicalSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->physicalSpaceName)) {
    body->insert(pair<string, string>("PhysicalSpaceName", *request->physicalSpaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityDomain)) {
    body->insert(pair<string, string>("SecurityDomain", *request->securityDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceStatus)) {
    body->insert(pair<string, string>("ServiceStatus", *request->serviceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpAccountType)) {
    body->insert(pair<string, string>("SnmpAccountType", *request->snmpAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpAccountVersion)) {
    body->insert(pair<string, string>("SnmpAccountVersion", *request->snmpAccountVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpAuthPassphrase)) {
    body->insert(pair<string, string>("SnmpAuthPassphrase", *request->snmpAuthPassphrase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpAuthProtocol)) {
    body->insert(pair<string, string>("SnmpAuthProtocol", *request->snmpAuthProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpCommunity)) {
    body->insert(pair<string, string>("SnmpCommunity", *request->snmpCommunity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpPrivacyPassphrase)) {
    body->insert(pair<string, string>("SnmpPrivacyPassphrase", *request->snmpPrivacyPassphrase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpPrivacyProtocol)) {
    body->insert(pair<string, string>("SnmpPrivacyProtocol", *request->snmpPrivacyProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpSecurityLevel)) {
    body->insert(pair<string, string>("SnmpSecurityLevel", *request->snmpSecurityLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snmpUsername)) {
    body->insert(pair<string, string>("SnmpUsername", *request->snmpUsername));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendor)) {
    body->insert(pair<string, string>("Vendor", *request->vendor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDevices"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDevicesResponse(callApi(params, req, runtime));
}

UpdateDevicesResponse Alibabacloud_Cmn20200825::Client::updateDevices(shared_ptr<UpdateDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDevicesWithOptions(request, runtime);
}

UpdateEventDefinitionResponse Alibabacloud_Cmn20200825::Client::updateEventDefinitionWithOptions(shared_ptr<UpdateEventDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    body->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    body->insert(pair<string, string>("EventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    body->insert(pair<string, string>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEventDefinition"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEventDefinitionResponse(callApi(params, req, runtime));
}

UpdateEventDefinitionResponse Alibabacloud_Cmn20200825::Client::updateEventDefinition(shared_ptr<UpdateEventDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEventDefinitionWithOptions(request, runtime);
}

UpdateInformationKeyActionResponse Alibabacloud_Cmn20200825::Client::updateInformationKeyActionWithOptions(shared_ptr<UpdateInformationKeyActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyAction)) {
    query->insert(pair<string, string>("KeyAction", *request->keyAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceInformationId)) {
    query->insert(pair<string, string>("ResourceInformationId", *request->resourceInformationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setupProjectId)) {
    query->insert(pair<string, string>("SetupProjectId", *request->setupProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInformationKeyAction"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInformationKeyActionResponse(callApi(params, req, runtime));
}

UpdateInformationKeyActionResponse Alibabacloud_Cmn20200825::Client::updateInformationKeyAction(shared_ptr<UpdateInformationKeyActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInformationKeyActionWithOptions(request, runtime);
}

UpdateInstanceResponse Alibabacloud_Cmn20200825::Client::updateInstanceWithOptions(shared_ptr<UpdateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstance"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceResponse(callApi(params, req, runtime));
}

UpdateInstanceResponse Alibabacloud_Cmn20200825::Client::updateInstance(shared_ptr<UpdateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInstanceWithOptions(request, runtime);
}

UpdateOsVersionResponse Alibabacloud_Cmn20200825::Client::updateOsVersionWithOptions(shared_ptr<UpdateOsVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bootPatch)) {
    body->insert(pair<string, string>("BootPatch", *request->bootPatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featurePatch)) {
    body->insert(pair<string, string>("FeaturePatch", *request->featurePatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    body->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osVersion)) {
    body->insert(pair<string, string>("OsVersion", *request->osVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osVersionId)) {
    body->insert(pair<string, string>("OsVersionId", *request->osVersionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemPatch)) {
    body->insert(pair<string, string>("SystemPatch", *request->systemPatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendor)) {
    body->insert(pair<string, string>("Vendor", *request->vendor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateOsVersion"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateOsVersionResponse(callApi(params, req, runtime));
}

UpdateOsVersionResponse Alibabacloud_Cmn20200825::Client::updateOsVersion(shared_ptr<UpdateOsVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOsVersionWithOptions(request, runtime);
}

UpdatePhysicalSpaceResponse Alibabacloud_Cmn20200825::Client::updatePhysicalSpaceWithOptions(shared_ptr<UpdatePhysicalSpaceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdatePhysicalSpaceShrinkRequest> request = make_shared<UpdatePhysicalSpaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->securityDomainList)) {
    request->securityDomainListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->securityDomainList, make_shared<string>("SecurityDomainList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    body->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    body->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    body->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moveAction)) {
    body->insert(pair<string, string>("MoveAction", *request->moveAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentUid)) {
    body->insert(pair<string, string>("ParentUid", *request->parentUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->physicalSpaceId)) {
    body->insert(pair<string, string>("PhysicalSpaceId", *request->physicalSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->physicalSpaceName)) {
    body->insert(pair<string, string>("PhysicalSpaceName", *request->physicalSpaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    body->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityDomainListShrink)) {
    body->insert(pair<string, string>("SecurityDomainList", *request->securityDomainListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceAbbreviation)) {
    body->insert(pair<string, string>("SpaceAbbreviation", *request->spaceAbbreviation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceType)) {
    body->insert(pair<string, string>("SpaceType", *request->spaceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUid)) {
    body->insert(pair<string, string>("TargetUid", *request->targetUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePhysicalSpace"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePhysicalSpaceResponse(callApi(params, req, runtime));
}

UpdatePhysicalSpaceResponse Alibabacloud_Cmn20200825::Client::updatePhysicalSpace(shared_ptr<UpdatePhysicalSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePhysicalSpaceWithOptions(request, runtime);
}

UpdateProjectProgressResponse Alibabacloud_Cmn20200825::Client::updateProjectProgressWithOptions(shared_ptr<UpdateProjectProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->progress)) {
    body->insert(pair<string, string>("Progress", *request->progress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setupProjectId)) {
    body->insert(pair<string, string>("SetupProjectId", *request->setupProjectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProjectProgress"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectProgressResponse(callApi(params, req, runtime));
}

UpdateProjectProgressResponse Alibabacloud_Cmn20200825::Client::updateProjectProgress(shared_ptr<UpdateProjectProgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProjectProgressWithOptions(request, runtime);
}

UpdateResourceInformationResponse Alibabacloud_Cmn20200825::Client::updateResourceInformationWithOptions(shared_ptr<UpdateResourceInformationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateResourceInformationShrinkRequest> request = make_shared<UpdateResourceInformationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateResourceInformationRequestInformation>>(tmpReq->information)) {
    request->informationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->information, make_shared<string>("Information"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->informationShrink)) {
    body->insert(pair<string, string>("Information", *request->informationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceAttribute)) {
    body->insert(pair<string, string>("ResourceAttribute", *request->resourceAttribute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceInformationId)) {
    body->insert(pair<string, string>("ResourceInformationId", *request->resourceInformationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceInformation"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourceInformationResponse(callApi(params, req, runtime));
}

UpdateResourceInformationResponse Alibabacloud_Cmn20200825::Client::updateResourceInformation(shared_ptr<UpdateResourceInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateResourceInformationWithOptions(request, runtime);
}

UpdateResourceInstanceResponse Alibabacloud_Cmn20200825::Client::updateResourceInstanceWithOptions(shared_ptr<UpdateResourceInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateResourceInstanceShrinkRequest> request = make_shared<UpdateResourceInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateResourceInstanceRequestResourceInformation>>(tmpReq->resourceInformation)) {
    request->resourceInformationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceInformation, make_shared<string>("ResourceInformation"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceInformationShrink)) {
    query->insert(pair<string, string>("ResourceInformation", *request->resourceInformationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceInformationId)) {
    query->insert(pair<string, string>("ResourceInformationId", *request->resourceInformationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setupProjectId)) {
    query->insert(pair<string, string>("SetupProjectId", *request->setupProjectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceInstance"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourceInstanceResponse(callApi(params, req, runtime));
}

UpdateResourceInstanceResponse Alibabacloud_Cmn20200825::Client::updateResourceInstance(shared_ptr<UpdateResourceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateResourceInstanceWithOptions(request, runtime);
}

UpdateSetupProjectResponse Alibabacloud_Cmn20200825::Client::updateSetupProjectWithOptions(shared_ptr<UpdateSetupProjectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateSetupProjectShrinkRequest> request = make_shared<UpdateSetupProjectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateSetupProjectRequestPackages>>(tmpReq->packages)) {
    request->packagesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->packages, make_shared<string>("Packages"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->architectureId)) {
    body->insert(pair<string, string>("ArchitectureId", *request->architectureId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryTime)) {
    body->insert(pair<string, string>("DeliveryTime", *request->deliveryTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodes)) {
    body->insert(pair<string, string>("Nodes", *request->nodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packagesShrink)) {
    body->insert(pair<string, string>("Packages", *request->packagesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setupProjectId)) {
    body->insert(pair<string, string>("SetupProjectId", *request->setupProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSetupProject"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSetupProjectResponse(callApi(params, req, runtime));
}

UpdateSetupProjectResponse Alibabacloud_Cmn20200825::Client::updateSetupProject(shared_ptr<UpdateSetupProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSetupProjectWithOptions(request, runtime);
}

UpdateSpaceModelResponse Alibabacloud_Cmn20200825::Client::updateSpaceModelWithOptions(shared_ptr<UpdateSpaceModelRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateSpaceModelShrinkRequest> request = make_shared<UpdateSpaceModelShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateSpaceModelRequestSort>>(tmpReq->sort)) {
    request->sortShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sort, make_shared<string>("Sort"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortShrink)) {
    body->insert(pair<string, string>("Sort", *request->sortShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceModelId)) {
    body->insert(pair<string, string>("SpaceModelId", *request->spaceModelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceType)) {
    body->insert(pair<string, string>("SpaceType", *request->spaceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSpaceModel"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSpaceModelResponse(callApi(params, req, runtime));
}

UpdateSpaceModelResponse Alibabacloud_Cmn20200825::Client::updateSpaceModel(shared_ptr<UpdateSpaceModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSpaceModelWithOptions(request, runtime);
}

UpdateSpaceModelInstanceResponse Alibabacloud_Cmn20200825::Client::updateSpaceModelInstanceWithOptions(shared_ptr<UpdateSpaceModelInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("Instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    query->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSpaceModelInstance"))},
    {"version", boost::any(string("2020-08-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSpaceModelInstanceResponse(callApi(params, req, runtime));
}

UpdateSpaceModelInstanceResponse Alibabacloud_Cmn20200825::Client::updateSpaceModelInstance(shared_ptr<UpdateSpaceModelInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSpaceModelInstanceWithOptions(request, runtime);
}

