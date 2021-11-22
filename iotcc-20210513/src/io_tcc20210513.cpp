// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/io_tcc20210513.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
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

AssociateIpWithConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::associateIpWithConnectionPoolWithOptions(shared_ptr<AssociateIpWithConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateIpWithConnectionPoolResponse(doRPCRequest(make_shared<string>("AssociateIpWithConnectionPool"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateIpWithConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::associateIpWithConnectionPool(shared_ptr<AssociateIpWithConnectionPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateIpWithConnectionPoolWithOptions(request, runtime);
}

AssociateVSwitchWithIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::associateVSwitchWithIoTCloudConnectorWithOptions(shared_ptr<AssociateVSwitchWithIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateVSwitchWithIoTCloudConnectorResponse(doRPCRequest(make_shared<string>("AssociateVSwitchWithIoTCloudConnector"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateVSwitchWithIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::associateVSwitchWithIoTCloudConnector(shared_ptr<AssociateVSwitchWithIoTCloudConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateVSwitchWithIoTCloudConnectorWithOptions(request, runtime);
}

CreateAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::createAuthorizationRuleWithOptions(shared_ptr<CreateAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAuthorizationRuleResponse(doRPCRequest(make_shared<string>("CreateAuthorizationRule"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::createAuthorizationRule(shared_ptr<CreateAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuthorizationRuleWithOptions(request, runtime);
}

CreateConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::createConnectionPoolWithOptions(shared_ptr<CreateConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateConnectionPoolResponse(doRPCRequest(make_shared<string>("CreateConnectionPool"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::createConnectionPool(shared_ptr<CreateConnectionPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConnectionPoolWithOptions(request, runtime);
}

CreateIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::createIoTCloudConnectorWithOptions(shared_ptr<CreateIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateIoTCloudConnectorResponse(doRPCRequest(make_shared<string>("CreateIoTCloudConnector"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::createIoTCloudConnector(shared_ptr<CreateIoTCloudConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIoTCloudConnectorWithOptions(request, runtime);
}

CreateServiceResponse Alibabacloud_IoTCC20210513::Client::createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateServiceResponse(doRPCRequest(make_shared<string>("CreateService"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateServiceResponse Alibabacloud_IoTCC20210513::Client::createService(shared_ptr<CreateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceWithOptions(request, runtime);
}

CreateServiceEntryResponse Alibabacloud_IoTCC20210513::Client::createServiceEntryWithOptions(shared_ptr<CreateServiceEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateServiceEntryResponse(doRPCRequest(make_shared<string>("CreateServiceEntry"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateServiceEntryResponse Alibabacloud_IoTCC20210513::Client::createServiceEntry(shared_ptr<CreateServiceEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceEntryWithOptions(request, runtime);
}

DeleteAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::deleteAuthorizationRuleWithOptions(shared_ptr<DeleteAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAuthorizationRuleResponse(doRPCRequest(make_shared<string>("DeleteAuthorizationRule"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAuthorizationRuleResponse Alibabacloud_IoTCC20210513::Client::deleteAuthorizationRule(shared_ptr<DeleteAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAuthorizationRuleWithOptions(request, runtime);
}

DeleteConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::deleteConnectionPoolWithOptions(shared_ptr<DeleteConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteConnectionPoolResponse(doRPCRequest(make_shared<string>("DeleteConnectionPool"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::deleteConnectionPool(shared_ptr<DeleteConnectionPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConnectionPoolWithOptions(request, runtime);
}

DeleteIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::deleteIoTCloudConnectorWithOptions(shared_ptr<DeleteIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteIoTCloudConnectorResponse(doRPCRequest(make_shared<string>("DeleteIoTCloudConnector"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::deleteIoTCloudConnector(shared_ptr<DeleteIoTCloudConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIoTCloudConnectorWithOptions(request, runtime);
}

DeleteServiceResponse Alibabacloud_IoTCC20210513::Client::deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteServiceResponse(doRPCRequest(make_shared<string>("DeleteService"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteServiceResponse Alibabacloud_IoTCC20210513::Client::deleteService(shared_ptr<DeleteServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceWithOptions(request, runtime);
}

DeleteServiceEntryResponse Alibabacloud_IoTCC20210513::Client::deleteServiceEntryWithOptions(shared_ptr<DeleteServiceEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteServiceEntryResponse(doRPCRequest(make_shared<string>("DeleteServiceEntry"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteServiceEntryResponse Alibabacloud_IoTCC20210513::Client::deleteServiceEntry(shared_ptr<DeleteServiceEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceEntryWithOptions(request, runtime);
}

DisableIoTCloudConnectorAccessLogResponse Alibabacloud_IoTCC20210513::Client::disableIoTCloudConnectorAccessLogWithOptions(shared_ptr<DisableIoTCloudConnectorAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableIoTCloudConnectorAccessLogResponse(doRPCRequest(make_shared<string>("DisableIoTCloudConnectorAccessLog"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableIoTCloudConnectorAccessLogResponse Alibabacloud_IoTCC20210513::Client::disableIoTCloudConnectorAccessLog(shared_ptr<DisableIoTCloudConnectorAccessLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableIoTCloudConnectorAccessLogWithOptions(request, runtime);
}

DissociateIpFromConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::dissociateIpFromConnectionPoolWithOptions(shared_ptr<DissociateIpFromConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DissociateIpFromConnectionPoolResponse(doRPCRequest(make_shared<string>("DissociateIpFromConnectionPool"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DissociateIpFromConnectionPoolResponse Alibabacloud_IoTCC20210513::Client::dissociateIpFromConnectionPool(shared_ptr<DissociateIpFromConnectionPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateIpFromConnectionPoolWithOptions(request, runtime);
}

DissociateVSwitchFromIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::dissociateVSwitchFromIoTCloudConnectorWithOptions(shared_ptr<DissociateVSwitchFromIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DissociateVSwitchFromIoTCloudConnectorResponse(doRPCRequest(make_shared<string>("DissociateVSwitchFromIoTCloudConnector"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DissociateVSwitchFromIoTCloudConnectorResponse Alibabacloud_IoTCC20210513::Client::dissociateVSwitchFromIoTCloudConnector(shared_ptr<DissociateVSwitchFromIoTCloudConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateVSwitchFromIoTCloudConnectorWithOptions(request, runtime);
}

EnableIoTCloudConnectorAccessLogResponse Alibabacloud_IoTCC20210513::Client::enableIoTCloudConnectorAccessLogWithOptions(shared_ptr<EnableIoTCloudConnectorAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableIoTCloudConnectorAccessLogResponse(doRPCRequest(make_shared<string>("EnableIoTCloudConnectorAccessLog"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableIoTCloudConnectorAccessLogResponse Alibabacloud_IoTCC20210513::Client::enableIoTCloudConnectorAccessLog(shared_ptr<EnableIoTCloudConnectorAccessLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableIoTCloudConnectorAccessLogWithOptions(request, runtime);
}

GetConnectionPoolIpOperationResultResponse Alibabacloud_IoTCC20210513::Client::getConnectionPoolIpOperationResultWithOptions(shared_ptr<GetConnectionPoolIpOperationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetConnectionPoolIpOperationResultResponse(doRPCRequest(make_shared<string>("GetConnectionPoolIpOperationResult"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetConnectionPoolIpOperationResultResponse Alibabacloud_IoTCC20210513::Client::getConnectionPoolIpOperationResult(shared_ptr<GetConnectionPoolIpOperationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConnectionPoolIpOperationResultWithOptions(request, runtime);
}

GetIoTCloudConnectorAccessLogResponse Alibabacloud_IoTCC20210513::Client::getIoTCloudConnectorAccessLogWithOptions(shared_ptr<GetIoTCloudConnectorAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetIoTCloudConnectorAccessLogResponse(doRPCRequest(make_shared<string>("GetIoTCloudConnectorAccessLog"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetIoTCloudConnectorAccessLogResponse Alibabacloud_IoTCC20210513::Client::getIoTCloudConnectorAccessLog(shared_ptr<GetIoTCloudConnectorAccessLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIoTCloudConnectorAccessLogWithOptions(request, runtime);
}

GetStsInfoAndOssPathResponse Alibabacloud_IoTCC20210513::Client::getStsInfoAndOssPathWithOptions(shared_ptr<GetStsInfoAndOssPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStsInfoAndOssPathResponse(doRPCRequest(make_shared<string>("GetStsInfoAndOssPath"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStsInfoAndOssPathResponse Alibabacloud_IoTCC20210513::Client::getStsInfoAndOssPath(shared_ptr<GetStsInfoAndOssPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStsInfoAndOssPathWithOptions(request, runtime);
}

GrantVirtualBorderRouterResponse Alibabacloud_IoTCC20210513::Client::grantVirtualBorderRouterWithOptions(shared_ptr<GrantVirtualBorderRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GrantVirtualBorderRouterResponse(doRPCRequest(make_shared<string>("GrantVirtualBorderRouter"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GrantVirtualBorderRouterResponse Alibabacloud_IoTCC20210513::Client::grantVirtualBorderRouter(shared_ptr<GrantVirtualBorderRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantVirtualBorderRouterWithOptions(request, runtime);
}

ListAPNsResponse Alibabacloud_IoTCC20210513::Client::listAPNsWithOptions(shared_ptr<ListAPNsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAPNsResponse(doRPCRequest(make_shared<string>("ListAPNs"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAPNsResponse Alibabacloud_IoTCC20210513::Client::listAPNs(shared_ptr<ListAPNsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAPNsWithOptions(request, runtime);
}

ListAuthorizationRulesResponse Alibabacloud_IoTCC20210513::Client::listAuthorizationRulesWithOptions(shared_ptr<ListAuthorizationRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAuthorizationRulesResponse(doRPCRequest(make_shared<string>("ListAuthorizationRules"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAuthorizationRulesResponse Alibabacloud_IoTCC20210513::Client::listAuthorizationRules(shared_ptr<ListAuthorizationRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthorizationRulesWithOptions(request, runtime);
}

ListConnectionPoolIpsResponse Alibabacloud_IoTCC20210513::Client::listConnectionPoolIpsWithOptions(shared_ptr<ListConnectionPoolIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListConnectionPoolIpsResponse(doRPCRequest(make_shared<string>("ListConnectionPoolIps"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListConnectionPoolIpsResponse Alibabacloud_IoTCC20210513::Client::listConnectionPoolIps(shared_ptr<ListConnectionPoolIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConnectionPoolIpsWithOptions(request, runtime);
}

ListConnectionPoolsResponse Alibabacloud_IoTCC20210513::Client::listConnectionPoolsWithOptions(shared_ptr<ListConnectionPoolsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListConnectionPoolsResponse(doRPCRequest(make_shared<string>("ListConnectionPools"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListConnectionPoolsResponse Alibabacloud_IoTCC20210513::Client::listConnectionPools(shared_ptr<ListConnectionPoolsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConnectionPoolsWithOptions(request, runtime);
}

ListIoTCloudConnectorAvailableZonesResponse Alibabacloud_IoTCC20210513::Client::listIoTCloudConnectorAvailableZonesWithOptions(shared_ptr<ListIoTCloudConnectorAvailableZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListIoTCloudConnectorAvailableZonesResponse(doRPCRequest(make_shared<string>("ListIoTCloudConnectorAvailableZones"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListIoTCloudConnectorAvailableZonesResponse Alibabacloud_IoTCC20210513::Client::listIoTCloudConnectorAvailableZones(shared_ptr<ListIoTCloudConnectorAvailableZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIoTCloudConnectorAvailableZonesWithOptions(request, runtime);
}

ListIoTCloudConnectorsResponse Alibabacloud_IoTCC20210513::Client::listIoTCloudConnectorsWithOptions(shared_ptr<ListIoTCloudConnectorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListIoTCloudConnectorsResponse(doRPCRequest(make_shared<string>("ListIoTCloudConnectors"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListIoTCloudConnectorsResponse Alibabacloud_IoTCC20210513::Client::listIoTCloudConnectors(shared_ptr<ListIoTCloudConnectorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIoTCloudConnectorsWithOptions(request, runtime);
}

ListRegionsResponse Alibabacloud_IoTCC20210513::Client::listRegionsWithOptions(shared_ptr<ListRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRegionsResponse(doRPCRequest(make_shared<string>("ListRegions"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRegionsResponse Alibabacloud_IoTCC20210513::Client::listRegions(shared_ptr<ListRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRegionsWithOptions(request, runtime);
}

ListServiceResponse Alibabacloud_IoTCC20210513::Client::listServiceWithOptions(shared_ptr<ListServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListServiceResponse(doRPCRequest(make_shared<string>("ListService"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListServiceResponse Alibabacloud_IoTCC20210513::Client::listService(shared_ptr<ListServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceWithOptions(request, runtime);
}

ListServiceEntriesResponse Alibabacloud_IoTCC20210513::Client::listServiceEntriesWithOptions(shared_ptr<ListServiceEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListServiceEntriesResponse(doRPCRequest(make_shared<string>("ListServiceEntries"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListServiceEntriesResponse Alibabacloud_IoTCC20210513::Client::listServiceEntries(shared_ptr<ListServiceEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceEntriesWithOptions(request, runtime);
}

OpenIoTCloudConnectorServiceResponse Alibabacloud_IoTCC20210513::Client::openIoTCloudConnectorServiceWithOptions(shared_ptr<OpenIoTCloudConnectorServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OpenIoTCloudConnectorServiceResponse(doRPCRequest(make_shared<string>("OpenIoTCloudConnectorService"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OpenIoTCloudConnectorServiceResponse Alibabacloud_IoTCC20210513::Client::openIoTCloudConnectorService(shared_ptr<OpenIoTCloudConnectorServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openIoTCloudConnectorServiceWithOptions(request, runtime);
}

UpdateAuthorizationRuleAttributeResponse Alibabacloud_IoTCC20210513::Client::updateAuthorizationRuleAttributeWithOptions(shared_ptr<UpdateAuthorizationRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAuthorizationRuleAttributeResponse(doRPCRequest(make_shared<string>("UpdateAuthorizationRuleAttribute"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAuthorizationRuleAttributeResponse Alibabacloud_IoTCC20210513::Client::updateAuthorizationRuleAttribute(shared_ptr<UpdateAuthorizationRuleAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAuthorizationRuleAttributeWithOptions(request, runtime);
}

UpdateConnectionPoolAttributeResponse Alibabacloud_IoTCC20210513::Client::updateConnectionPoolAttributeWithOptions(shared_ptr<UpdateConnectionPoolAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateConnectionPoolAttributeResponse(doRPCRequest(make_shared<string>("UpdateConnectionPoolAttribute"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateConnectionPoolAttributeResponse Alibabacloud_IoTCC20210513::Client::updateConnectionPoolAttribute(shared_ptr<UpdateConnectionPoolAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConnectionPoolAttributeWithOptions(request, runtime);
}

UpdateIoTCloudConnectorAttributeResponse Alibabacloud_IoTCC20210513::Client::updateIoTCloudConnectorAttributeWithOptions(shared_ptr<UpdateIoTCloudConnectorAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateIoTCloudConnectorAttributeResponse(doRPCRequest(make_shared<string>("UpdateIoTCloudConnectorAttribute"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateIoTCloudConnectorAttributeResponse Alibabacloud_IoTCC20210513::Client::updateIoTCloudConnectorAttribute(shared_ptr<UpdateIoTCloudConnectorAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIoTCloudConnectorAttributeWithOptions(request, runtime);
}

UpdateServiceAttributeResponse Alibabacloud_IoTCC20210513::Client::updateServiceAttributeWithOptions(shared_ptr<UpdateServiceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateServiceAttributeResponse(doRPCRequest(make_shared<string>("UpdateServiceAttribute"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateServiceAttributeResponse Alibabacloud_IoTCC20210513::Client::updateServiceAttribute(shared_ptr<UpdateServiceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServiceAttributeWithOptions(request, runtime);
}

UpdateServiceEntryAttributeResponse Alibabacloud_IoTCC20210513::Client::updateServiceEntryAttributeWithOptions(shared_ptr<UpdateServiceEntryAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateServiceEntryAttributeResponse(doRPCRequest(make_shared<string>("UpdateServiceEntryAttribute"), make_shared<string>("2021-05-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateServiceEntryAttributeResponse Alibabacloud_IoTCC20210513::Client::updateServiceEntryAttribute(shared_ptr<UpdateServiceEntryAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServiceEntryAttributeWithOptions(request, runtime);
}

