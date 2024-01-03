// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/idaas_doraemon_20210520.hpp>
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

using namespace Alibabacloud_Idaas-doraemon20210520;

Alibabacloud_Idaas-doraemon20210520::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "idaas-doraemon.cn-hangzhou.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("idaas-doraemon"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Idaas-doraemon20210520::Client::getEndpoint(shared_ptr<string> productId,
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

CreateAuthenticatorRegistrationResponse Alibabacloud_Idaas-doraemon20210520::Client::createAuthenticatorRegistrationWithOptions(shared_ptr<CreateAuthenticatorRegistrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorType)) {
    query->insert(pair<string, string>("AuthenticatorType", *request->authenticatorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientExtendParamsJson)) {
    query->insert(pair<string, string>("ClientExtendParamsJson", *request->clientExtendParamsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientExtendParamsJsonSign)) {
    query->insert(pair<string, string>("ClientExtendParamsJsonSign", *request->clientExtendParamsJsonSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrationContext)) {
    query->insert(pair<string, string>("RegistrationContext", *request->registrationContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverExtendParamsJson)) {
    query->insert(pair<string, string>("ServerExtendParamsJson", *request->serverExtendParamsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDisplayName)) {
    query->insert(pair<string, string>("UserDisplayName", *request->userDisplayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAuthenticatorRegistration"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAuthenticatorRegistrationResponse(callApi(params, req, runtime));
}

CreateAuthenticatorRegistrationResponse Alibabacloud_Idaas-doraemon20210520::Client::createAuthenticatorRegistration(shared_ptr<CreateAuthenticatorRegistrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuthenticatorRegistrationWithOptions(request, runtime);
}

CreateUserAuthenticateOptionsResponse Alibabacloud_Idaas-doraemon20210520::Client::createUserAuthenticateOptionsWithOptions(shared_ptr<CreateUserAuthenticateOptionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorType)) {
    query->insert(pair<string, string>("AuthenticatorType", *request->authenticatorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bindHashBase64)) {
    query->insert(pair<string, string>("BindHashBase64", *request->bindHashBase64));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientExtendParamsJson)) {
    query->insert(pair<string, string>("ClientExtendParamsJson", *request->clientExtendParamsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientExtendParamsJsonSign)) {
    query->insert(pair<string, string>("ClientExtendParamsJsonSign", *request->clientExtendParamsJsonSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverExtendParamsJson)) {
    query->insert(pair<string, string>("ServerExtendParamsJson", *request->serverExtendParamsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUserAuthenticateOptions"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUserAuthenticateOptionsResponse(callApi(params, req, runtime));
}

CreateUserAuthenticateOptionsResponse Alibabacloud_Idaas-doraemon20210520::Client::createUserAuthenticateOptions(shared_ptr<CreateUserAuthenticateOptionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserAuthenticateOptionsWithOptions(request, runtime);
}

DeregisterAuthenticatorResponse Alibabacloud_Idaas-doraemon20210520::Client::deregisterAuthenticatorWithOptions(shared_ptr<DeregisterAuthenticatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorUuid)) {
    query->insert(pair<string, string>("AuthenticatorUuid", *request->authenticatorUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeregisterAuthenticator"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeregisterAuthenticatorResponse(callApi(params, req, runtime));
}

DeregisterAuthenticatorResponse Alibabacloud_Idaas-doraemon20210520::Client::deregisterAuthenticator(shared_ptr<DeregisterAuthenticatorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deregisterAuthenticatorWithOptions(request, runtime);
}

FetchAccessTokenResponse Alibabacloud_Idaas-doraemon20210520::Client::fetchAccessTokenWithOptions(shared_ptr<FetchAccessTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobileExtendParamsJson)) {
    query->insert(pair<string, string>("MobileExtendParamsJson", *request->mobileExtendParamsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobileExtendParamsJsonSign)) {
    query->insert(pair<string, string>("MobileExtendParamsJsonSign", *request->mobileExtendParamsJsonSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverExtendParamsJson)) {
    query->insert(pair<string, string>("ServerExtendParamsJson", *request->serverExtendParamsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XClientIp)) {
    query->insert(pair<string, string>("XClientIp", *request->XClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FetchAccessToken"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FetchAccessTokenResponse(callApi(params, req, runtime));
}

FetchAccessTokenResponse Alibabacloud_Idaas-doraemon20210520::Client::fetchAccessToken(shared_ptr<FetchAccessTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fetchAccessTokenWithOptions(request, runtime);
}

GetAuthenticatorResponse Alibabacloud_Idaas-doraemon20210520::Client::getAuthenticatorWithOptions(shared_ptr<GetAuthenticatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorUuid)) {
    query->insert(pair<string, string>("AuthenticatorUuid", *request->authenticatorUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAuthenticator"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAuthenticatorResponse(callApi(params, req, runtime));
}

GetAuthenticatorResponse Alibabacloud_Idaas-doraemon20210520::Client::getAuthenticator(shared_ptr<GetAuthenticatorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuthenticatorWithOptions(request, runtime);
}

ListAuthenticationLogsResponse Alibabacloud_Idaas-doraemon20210520::Client::listAuthenticationLogsWithOptions(shared_ptr<ListAuthenticationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorType)) {
    query->insert(pair<string, string>("AuthenticatorType", *request->authenticatorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorUuid)) {
    query->insert(pair<string, string>("AuthenticatorUuid", *request->authenticatorUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialId)) {
    query->insert(pair<string, string>("CredentialId", *request->credentialId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fromTime)) {
    query->insert(pair<string, long>("FromTime", *request->fromTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logTag)) {
    query->insert(pair<string, string>("LogTag", *request->logTag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->toTime)) {
    query->insert(pair<string, long>("ToTime", *request->toTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAuthenticationLogs"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAuthenticationLogsResponse(callApi(params, req, runtime));
}

ListAuthenticationLogsResponse Alibabacloud_Idaas-doraemon20210520::Client::listAuthenticationLogs(shared_ptr<ListAuthenticationLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthenticationLogsWithOptions(request, runtime);
}

ListAuthenticatorOpsLogsResponse Alibabacloud_Idaas-doraemon20210520::Client::listAuthenticatorOpsLogsWithOptions(shared_ptr<ListAuthenticatorOpsLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorType)) {
    query->insert(pair<string, string>("AuthenticatorType", *request->authenticatorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorUuid)) {
    query->insert(pair<string, string>("AuthenticatorUuid", *request->authenticatorUuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fromTime)) {
    query->insert(pair<string, long>("FromTime", *request->fromTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->toTime)) {
    query->insert(pair<string, long>("ToTime", *request->toTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAuthenticatorOpsLogs"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAuthenticatorOpsLogsResponse(callApi(params, req, runtime));
}

ListAuthenticatorOpsLogsResponse Alibabacloud_Idaas-doraemon20210520::Client::listAuthenticatorOpsLogs(shared_ptr<ListAuthenticatorOpsLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthenticatorOpsLogsWithOptions(request, runtime);
}

ListAuthenticatorsResponse Alibabacloud_Idaas-doraemon20210520::Client::listAuthenticatorsWithOptions(shared_ptr<ListAuthenticatorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorType)) {
    query->insert(pair<string, string>("AuthenticatorType", *request->authenticatorType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAuthenticators"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAuthenticatorsResponse(callApi(params, req, runtime));
}

ListAuthenticatorsResponse Alibabacloud_Idaas-doraemon20210520::Client::listAuthenticators(shared_ptr<ListAuthenticatorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthenticatorsWithOptions(request, runtime);
}

ListCostUnitOrdersResponse Alibabacloud_Idaas-doraemon20210520::Client::listCostUnitOrdersWithOptions(shared_ptr<ListCostUnitOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginDate)) {
    query->insert(pair<string, string>("BeginDate", *request->beginDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->finalDate)) {
    query->insert(pair<string, string>("FinalDate", *request->finalDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCostUnitOrders"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCostUnitOrdersResponse(callApi(params, req, runtime));
}

ListCostUnitOrdersResponse Alibabacloud_Idaas-doraemon20210520::Client::listCostUnitOrders(shared_ptr<ListCostUnitOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCostUnitOrdersWithOptions(request, runtime);
}

ListOrderConsumeStatisticRecordsResponse Alibabacloud_Idaas-doraemon20210520::Client::listOrderConsumeStatisticRecordsWithOptions(shared_ptr<ListOrderConsumeStatisticRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliOrderCode)) {
    query->insert(pair<string, string>("AliOrderCode", *request->aliOrderCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    query->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statisticTimeMax)) {
    query->insert(pair<string, string>("StatisticTimeMax", *request->statisticTimeMax));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statisticTimeMin)) {
    query->insert(pair<string, string>("StatisticTimeMin", *request->statisticTimeMin));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOrderConsumeStatisticRecords"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOrderConsumeStatisticRecordsResponse(callApi(params, req, runtime));
}

ListOrderConsumeStatisticRecordsResponse Alibabacloud_Idaas-doraemon20210520::Client::listOrderConsumeStatisticRecords(shared_ptr<ListOrderConsumeStatisticRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOrderConsumeStatisticRecordsWithOptions(request, runtime);
}

ListPwnedPasswordsResponse Alibabacloud_Idaas-doraemon20210520::Client::listPwnedPasswordsWithOptions(shared_ptr<ListPwnedPasswordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->prefixHexPasswordSha1Hash)) {
    query->insert(pair<string, string>("PrefixHexPasswordSha1Hash", *request->prefixHexPasswordSha1Hash));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPwnedPasswords"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPwnedPasswordsResponse(callApi(params, req, runtime));
}

ListPwnedPasswordsResponse Alibabacloud_Idaas-doraemon20210520::Client::listPwnedPasswords(shared_ptr<ListPwnedPasswordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPwnedPasswordsWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_Idaas-doraemon20210520::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsers"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsersResponse(callApi(params, req, runtime));
}

ListUsersResponse Alibabacloud_Idaas-doraemon20210520::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

QuerySmsReportsResponse Alibabacloud_Idaas-doraemon20210520::Client::querySmsReportsWithOptions(shared_ptr<QuerySmsReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySmsReports"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySmsReportsResponse(callApi(params, req, runtime));
}

QuerySmsReportsResponse Alibabacloud_Idaas-doraemon20210520::Client::querySmsReports(shared_ptr<QuerySmsReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmsReportsWithOptions(request, runtime);
}

QuerySmsUpsResponse Alibabacloud_Idaas-doraemon20210520::Client::querySmsUpsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySmsUps"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySmsUpsResponse(callApi(params, req, runtime));
}

QuerySmsUpsResponse Alibabacloud_Idaas-doraemon20210520::Client::querySmsUps() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmsUpsWithOptions(runtime);
}

RegisterAuthenticatorResponse Alibabacloud_Idaas-doraemon20210520::Client::registerAuthenticatorWithOptions(shared_ptr<RegisterAuthenticatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorName)) {
    query->insert(pair<string, string>("AuthenticatorName", *request->authenticatorName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorType)) {
    query->insert(pair<string, string>("AuthenticatorType", *request->authenticatorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientExtendParamsJson)) {
    query->insert(pair<string, string>("ClientExtendParamsJson", *request->clientExtendParamsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientExtendParamsJsonSign)) {
    query->insert(pair<string, string>("ClientExtendParamsJsonSign", *request->clientExtendParamsJsonSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logParams)) {
    query->insert(pair<string, string>("LogParams", *request->logParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrationContext)) {
    query->insert(pair<string, string>("RegistrationContext", *request->registrationContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requireChallengeBase64)) {
    query->insert(pair<string, string>("RequireChallengeBase64", *request->requireChallengeBase64));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverExtendParamsJson)) {
    query->insert(pair<string, string>("ServerExtendParamsJson", *request->serverExtendParamsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSourceIp)) {
    query->insert(pair<string, string>("UserSourceIp", *request->userSourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterAuthenticator"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterAuthenticatorResponse(callApi(params, req, runtime));
}

RegisterAuthenticatorResponse Alibabacloud_Idaas-doraemon20210520::Client::registerAuthenticator(shared_ptr<RegisterAuthenticatorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerAuthenticatorWithOptions(request, runtime);
}

ServiceInvokeResponse Alibabacloud_Idaas-doraemon20210520::Client::serviceInvokeWithOptions(shared_ptr<ServiceInvokeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->doraemonAction)) {
    query->insert(pair<string, string>("DoraemonAction", *request->doraemonAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobileExtendParamsJson)) {
    query->insert(pair<string, string>("MobileExtendParamsJson", *request->mobileExtendParamsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobileExtendParamsJsonSign)) {
    query->insert(pair<string, string>("MobileExtendParamsJsonSign", *request->mobileExtendParamsJsonSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverExtendParamsJson)) {
    query->insert(pair<string, string>("ServerExtendParamsJson", *request->serverExtendParamsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    query->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->testModel)) {
    query->insert(pair<string, bool>("TestModel", *request->testModel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XClientIp)) {
    query->insert(pair<string, string>("XClientIp", *request->XClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ServiceInvoke"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ServiceInvokeResponse(callApi(params, req, runtime));
}

ServiceInvokeResponse Alibabacloud_Idaas-doraemon20210520::Client::serviceInvoke(shared_ptr<ServiceInvokeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return serviceInvokeWithOptions(request, runtime);
}

UpdateAuthenticatorAttributeResponse Alibabacloud_Idaas-doraemon20210520::Client::updateAuthenticatorAttributeWithOptions(shared_ptr<UpdateAuthenticatorAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorName)) {
    query->insert(pair<string, string>("AuthenticatorName", *request->authenticatorName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorUuid)) {
    query->insert(pair<string, string>("AuthenticatorUuid", *request->authenticatorUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAuthenticatorAttribute"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAuthenticatorAttributeResponse(callApi(params, req, runtime));
}

UpdateAuthenticatorAttributeResponse Alibabacloud_Idaas-doraemon20210520::Client::updateAuthenticatorAttribute(shared_ptr<UpdateAuthenticatorAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAuthenticatorAttributeWithOptions(request, runtime);
}

VerifyIdTokenResponse Alibabacloud_Idaas-doraemon20210520::Client::verifyIdTokenWithOptions(shared_ptr<VerifyIdTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtIdToken)) {
    query->insert(pair<string, string>("JwtIdToken", *request->jwtIdToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyIdToken"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyIdTokenResponse(callApi(params, req, runtime));
}

VerifyIdTokenResponse Alibabacloud_Idaas-doraemon20210520::Client::verifyIdToken(shared_ptr<VerifyIdTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyIdTokenWithOptions(request, runtime);
}

VerifyUserAuthenticationResponse Alibabacloud_Idaas-doraemon20210520::Client::verifyUserAuthenticationWithOptions(shared_ptr<VerifyUserAuthenticationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationExternalId)) {
    query->insert(pair<string, string>("ApplicationExternalId", *request->applicationExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticationContext)) {
    query->insert(pair<string, string>("AuthenticationContext", *request->authenticationContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticatorType)) {
    query->insert(pair<string, string>("AuthenticatorType", *request->authenticatorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientExtendParamsJson)) {
    query->insert(pair<string, string>("ClientExtendParamsJson", *request->clientExtendParamsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientExtendParamsJsonSign)) {
    query->insert(pair<string, string>("ClientExtendParamsJsonSign", *request->clientExtendParamsJsonSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logParams)) {
    query->insert(pair<string, string>("LogParams", *request->logParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logTag)) {
    query->insert(pair<string, string>("LogTag", *request->logTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requireBindHashBase64)) {
    query->insert(pair<string, string>("RequireBindHashBase64", *request->requireBindHashBase64));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requireChallengeBase64)) {
    query->insert(pair<string, string>("RequireChallengeBase64", *request->requireChallengeBase64));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverExtendParamsJson)) {
    query->insert(pair<string, string>("ServerExtendParamsJson", *request->serverExtendParamsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSourceIp)) {
    query->insert(pair<string, string>("UserSourceIp", *request->userSourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyUserAuthentication"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyUserAuthenticationResponse(callApi(params, req, runtime));
}

VerifyUserAuthenticationResponse Alibabacloud_Idaas-doraemon20210520::Client::verifyUserAuthentication(shared_ptr<VerifyUserAuthenticationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyUserAuthenticationWithOptions(request, runtime);
}

