// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/idaas_doraemon_20210520.hpp>
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAuthenticatorRegistrationResponse(doRPCRequest(make_shared<string>("CreateAuthenticatorRegistration"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAuthenticatorRegistrationResponse Alibabacloud_Idaas-doraemon20210520::Client::createAuthenticatorRegistration(shared_ptr<CreateAuthenticatorRegistrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuthenticatorRegistrationWithOptions(request, runtime);
}

CreateUserAuthenticateOptionsResponse Alibabacloud_Idaas-doraemon20210520::Client::createUserAuthenticateOptionsWithOptions(shared_ptr<CreateUserAuthenticateOptionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUserAuthenticateOptionsResponse(doRPCRequest(make_shared<string>("CreateUserAuthenticateOptions"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUserAuthenticateOptionsResponse Alibabacloud_Idaas-doraemon20210520::Client::createUserAuthenticateOptions(shared_ptr<CreateUserAuthenticateOptionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserAuthenticateOptionsWithOptions(request, runtime);
}

DeregisterAuthenticatorResponse Alibabacloud_Idaas-doraemon20210520::Client::deregisterAuthenticatorWithOptions(shared_ptr<DeregisterAuthenticatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeregisterAuthenticatorResponse(doRPCRequest(make_shared<string>("DeregisterAuthenticator"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeregisterAuthenticatorResponse Alibabacloud_Idaas-doraemon20210520::Client::deregisterAuthenticator(shared_ptr<DeregisterAuthenticatorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deregisterAuthenticatorWithOptions(request, runtime);
}

FetchAccessTokenResponse Alibabacloud_Idaas-doraemon20210520::Client::fetchAccessTokenWithOptions(shared_ptr<FetchAccessTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FetchAccessTokenResponse(doRPCRequest(make_shared<string>("FetchAccessToken"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FetchAccessTokenResponse Alibabacloud_Idaas-doraemon20210520::Client::fetchAccessToken(shared_ptr<FetchAccessTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fetchAccessTokenWithOptions(request, runtime);
}

GetAuthenticatorResponse Alibabacloud_Idaas-doraemon20210520::Client::getAuthenticatorWithOptions(shared_ptr<GetAuthenticatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAuthenticatorResponse(doRPCRequest(make_shared<string>("GetAuthenticator"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAuthenticatorResponse Alibabacloud_Idaas-doraemon20210520::Client::getAuthenticator(shared_ptr<GetAuthenticatorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuthenticatorWithOptions(request, runtime);
}

ListAuthenticationLogsResponse Alibabacloud_Idaas-doraemon20210520::Client::listAuthenticationLogsWithOptions(shared_ptr<ListAuthenticationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAuthenticationLogsResponse(doRPCRequest(make_shared<string>("ListAuthenticationLogs"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAuthenticationLogsResponse Alibabacloud_Idaas-doraemon20210520::Client::listAuthenticationLogs(shared_ptr<ListAuthenticationLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthenticationLogsWithOptions(request, runtime);
}

ListAuthenticatorOpsLogsResponse Alibabacloud_Idaas-doraemon20210520::Client::listAuthenticatorOpsLogsWithOptions(shared_ptr<ListAuthenticatorOpsLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAuthenticatorOpsLogsResponse(doRPCRequest(make_shared<string>("ListAuthenticatorOpsLogs"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAuthenticatorOpsLogsResponse Alibabacloud_Idaas-doraemon20210520::Client::listAuthenticatorOpsLogs(shared_ptr<ListAuthenticatorOpsLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthenticatorOpsLogsWithOptions(request, runtime);
}

ListAuthenticatorsResponse Alibabacloud_Idaas-doraemon20210520::Client::listAuthenticatorsWithOptions(shared_ptr<ListAuthenticatorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAuthenticatorsResponse(doRPCRequest(make_shared<string>("ListAuthenticators"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAuthenticatorsResponse Alibabacloud_Idaas-doraemon20210520::Client::listAuthenticators(shared_ptr<ListAuthenticatorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthenticatorsWithOptions(request, runtime);
}

ListPwnedPasswordsResponse Alibabacloud_Idaas-doraemon20210520::Client::listPwnedPasswordsWithOptions(shared_ptr<ListPwnedPasswordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPwnedPasswordsResponse(doRPCRequest(make_shared<string>("ListPwnedPasswords"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPwnedPasswordsResponse Alibabacloud_Idaas-doraemon20210520::Client::listPwnedPasswords(shared_ptr<ListPwnedPasswordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPwnedPasswordsWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_Idaas-doraemon20210520::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUsersResponse(doRPCRequest(make_shared<string>("ListUsers"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUsersResponse Alibabacloud_Idaas-doraemon20210520::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

RegisterAuthenticatorResponse Alibabacloud_Idaas-doraemon20210520::Client::registerAuthenticatorWithOptions(shared_ptr<RegisterAuthenticatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterAuthenticatorResponse(doRPCRequest(make_shared<string>("RegisterAuthenticator"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterAuthenticatorResponse Alibabacloud_Idaas-doraemon20210520::Client::registerAuthenticator(shared_ptr<RegisterAuthenticatorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerAuthenticatorWithOptions(request, runtime);
}

ServiceInvokeResponse Alibabacloud_Idaas-doraemon20210520::Client::serviceInvokeWithOptions(shared_ptr<ServiceInvokeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ServiceInvokeResponse(doRPCRequest(make_shared<string>("ServiceInvoke"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ServiceInvokeResponse Alibabacloud_Idaas-doraemon20210520::Client::serviceInvoke(shared_ptr<ServiceInvokeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return serviceInvokeWithOptions(request, runtime);
}

UpdateAuthenticatorAttributeResponse Alibabacloud_Idaas-doraemon20210520::Client::updateAuthenticatorAttributeWithOptions(shared_ptr<UpdateAuthenticatorAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAuthenticatorAttributeResponse(doRPCRequest(make_shared<string>("UpdateAuthenticatorAttribute"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAuthenticatorAttributeResponse Alibabacloud_Idaas-doraemon20210520::Client::updateAuthenticatorAttribute(shared_ptr<UpdateAuthenticatorAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAuthenticatorAttributeWithOptions(request, runtime);
}

VerifyUserAuthenticationResponse Alibabacloud_Idaas-doraemon20210520::Client::verifyUserAuthenticationWithOptions(shared_ptr<VerifyUserAuthenticationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VerifyUserAuthenticationResponse(doRPCRequest(make_shared<string>("VerifyUserAuthentication"), make_shared<string>("2021-05-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

VerifyUserAuthenticationResponse Alibabacloud_Idaas-doraemon20210520::Client::verifyUserAuthentication(shared_ptr<VerifyUserAuthenticationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyUserAuthenticationWithOptions(request, runtime);
}

