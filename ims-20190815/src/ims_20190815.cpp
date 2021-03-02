// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ims_20190815.hpp>
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

using namespace Alibabacloud_Ims20190815;

Alibabacloud_Ims20190815::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ims"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ims20190815::Client::getEndpoint(shared_ptr<string> productId,
                                                     shared_ptr<string> regionId,
                                                     shared_ptr<string> endpointRule,
                                                     shared_ptr<string> network,
                                                     shared_ptr<string> suffix,
                                                     shared_ptr<map<string, string>> endpointMap,
                                                     shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AddUserToGroupResponse Alibabacloud_Ims20190815::Client::addUserToGroupWithOptions(shared_ptr<AddUserToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddUserToGroupResponse(doRPCRequest(make_shared<string>("AddUserToGroup"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddUserToGroupResponse Alibabacloud_Ims20190815::Client::addUserToGroup(shared_ptr<AddUserToGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserToGroupWithOptions(request, runtime);
}

BindMFADeviceResponse Alibabacloud_Ims20190815::Client::bindMFADeviceWithOptions(shared_ptr<BindMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindMFADeviceResponse(doRPCRequest(make_shared<string>("BindMFADevice"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindMFADeviceResponse Alibabacloud_Ims20190815::Client::bindMFADevice(shared_ptr<BindMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindMFADeviceWithOptions(request, runtime);
}

ChangePasswordResponse Alibabacloud_Ims20190815::Client::changePasswordWithOptions(shared_ptr<ChangePasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangePasswordResponse(doRPCRequest(make_shared<string>("ChangePassword"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangePasswordResponse Alibabacloud_Ims20190815::Client::changePassword(shared_ptr<ChangePasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changePasswordWithOptions(request, runtime);
}

CreateAccessKeyResponse Alibabacloud_Ims20190815::Client::createAccessKeyWithOptions(shared_ptr<CreateAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAccessKeyResponse(doRPCRequest(make_shared<string>("CreateAccessKey"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAccessKeyResponse Alibabacloud_Ims20190815::Client::createAccessKey(shared_ptr<CreateAccessKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccessKeyWithOptions(request, runtime);
}

CreateApplicationResponse Alibabacloud_Ims20190815::Client::createApplicationWithOptions(shared_ptr<CreateApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateApplicationResponse(doRPCRequest(make_shared<string>("CreateApplication"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateApplicationResponse Alibabacloud_Ims20190815::Client::createApplication(shared_ptr<CreateApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApplicationWithOptions(request, runtime);
}

CreateAppSecretResponse Alibabacloud_Ims20190815::Client::createAppSecretWithOptions(shared_ptr<CreateAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAppSecretResponse(doRPCRequest(make_shared<string>("CreateAppSecret"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAppSecretResponse Alibabacloud_Ims20190815::Client::createAppSecret(shared_ptr<CreateAppSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppSecretWithOptions(request, runtime);
}

CreateGroupResponse Alibabacloud_Ims20190815::Client::createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateGroupResponse(doRPCRequest(make_shared<string>("CreateGroup"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateGroupResponse Alibabacloud_Ims20190815::Client::createGroup(shared_ptr<CreateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGroupWithOptions(request, runtime);
}

CreateLoginProfileResponse Alibabacloud_Ims20190815::Client::createLoginProfileWithOptions(shared_ptr<CreateLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLoginProfileResponse(doRPCRequest(make_shared<string>("CreateLoginProfile"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLoginProfileResponse Alibabacloud_Ims20190815::Client::createLoginProfile(shared_ptr<CreateLoginProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoginProfileWithOptions(request, runtime);
}

CreateSAMLProviderResponse Alibabacloud_Ims20190815::Client::createSAMLProviderWithOptions(shared_ptr<CreateSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSAMLProviderResponse(doRPCRequest(make_shared<string>("CreateSAMLProvider"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSAMLProviderResponse Alibabacloud_Ims20190815::Client::createSAMLProvider(shared_ptr<CreateSAMLProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSAMLProviderWithOptions(request, runtime);
}

CreateUserResponse Alibabacloud_Ims20190815::Client::createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUserResponse(doRPCRequest(make_shared<string>("CreateUser"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUserResponse Alibabacloud_Ims20190815::Client::createUser(shared_ptr<CreateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserWithOptions(request, runtime);
}

CreateVirtualMFADeviceResponse Alibabacloud_Ims20190815::Client::createVirtualMFADeviceWithOptions(shared_ptr<CreateVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVirtualMFADeviceResponse(doRPCRequest(make_shared<string>("CreateVirtualMFADevice"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVirtualMFADeviceResponse Alibabacloud_Ims20190815::Client::createVirtualMFADevice(shared_ptr<CreateVirtualMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVirtualMFADeviceWithOptions(request, runtime);
}

DeleteAccessKeyResponse Alibabacloud_Ims20190815::Client::deleteAccessKeyWithOptions(shared_ptr<DeleteAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAccessKeyResponse(doRPCRequest(make_shared<string>("DeleteAccessKey"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAccessKeyResponse Alibabacloud_Ims20190815::Client::deleteAccessKey(shared_ptr<DeleteAccessKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccessKeyWithOptions(request, runtime);
}

DeleteApplicationResponse Alibabacloud_Ims20190815::Client::deleteApplicationWithOptions(shared_ptr<DeleteApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteApplicationResponse(doRPCRequest(make_shared<string>("DeleteApplication"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteApplicationResponse Alibabacloud_Ims20190815::Client::deleteApplication(shared_ptr<DeleteApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApplicationWithOptions(request, runtime);
}

DeleteAppSecretResponse Alibabacloud_Ims20190815::Client::deleteAppSecretWithOptions(shared_ptr<DeleteAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAppSecretResponse(doRPCRequest(make_shared<string>("DeleteAppSecret"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAppSecretResponse Alibabacloud_Ims20190815::Client::deleteAppSecret(shared_ptr<DeleteAppSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppSecretWithOptions(request, runtime);
}

DeleteGroupResponse Alibabacloud_Ims20190815::Client::deleteGroupWithOptions(shared_ptr<DeleteGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteGroupResponse(doRPCRequest(make_shared<string>("DeleteGroup"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteGroupResponse Alibabacloud_Ims20190815::Client::deleteGroup(shared_ptr<DeleteGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGroupWithOptions(request, runtime);
}

DeleteLoginProfileResponse Alibabacloud_Ims20190815::Client::deleteLoginProfileWithOptions(shared_ptr<DeleteLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteLoginProfileResponse(doRPCRequest(make_shared<string>("DeleteLoginProfile"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteLoginProfileResponse Alibabacloud_Ims20190815::Client::deleteLoginProfile(shared_ptr<DeleteLoginProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLoginProfileWithOptions(request, runtime);
}

DeleteSAMLProviderResponse Alibabacloud_Ims20190815::Client::deleteSAMLProviderWithOptions(shared_ptr<DeleteSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSAMLProviderResponse(doRPCRequest(make_shared<string>("DeleteSAMLProvider"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSAMLProviderResponse Alibabacloud_Ims20190815::Client::deleteSAMLProvider(shared_ptr<DeleteSAMLProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSAMLProviderWithOptions(request, runtime);
}

DeleteUserResponse Alibabacloud_Ims20190815::Client::deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteUserResponse(doRPCRequest(make_shared<string>("DeleteUser"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteUserResponse Alibabacloud_Ims20190815::Client::deleteUser(shared_ptr<DeleteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserWithOptions(request, runtime);
}

DeleteVirtualMFADeviceResponse Alibabacloud_Ims20190815::Client::deleteVirtualMFADeviceWithOptions(shared_ptr<DeleteVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVirtualMFADeviceResponse(doRPCRequest(make_shared<string>("DeleteVirtualMFADevice"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVirtualMFADeviceResponse Alibabacloud_Ims20190815::Client::deleteVirtualMFADevice(shared_ptr<DeleteVirtualMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVirtualMFADeviceWithOptions(request, runtime);
}

DisableVirtualMFAResponse Alibabacloud_Ims20190815::Client::disableVirtualMFAWithOptions(shared_ptr<DisableVirtualMFARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableVirtualMFAResponse(doRPCRequest(make_shared<string>("DisableVirtualMFA"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableVirtualMFAResponse Alibabacloud_Ims20190815::Client::disableVirtualMFA(shared_ptr<DisableVirtualMFARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableVirtualMFAWithOptions(request, runtime);
}

GenerateCredentialReportResponse Alibabacloud_Ims20190815::Client::generateCredentialReportWithOptions(shared_ptr<GenerateCredentialReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateCredentialReportResponse(doRPCRequest(make_shared<string>("GenerateCredentialReport"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateCredentialReportResponse Alibabacloud_Ims20190815::Client::generateCredentialReport(shared_ptr<GenerateCredentialReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateCredentialReportWithOptions(request, runtime);
}

GetAccessKeyLastUsedResponse Alibabacloud_Ims20190815::Client::getAccessKeyLastUsedWithOptions(shared_ptr<GetAccessKeyLastUsedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAccessKeyLastUsedResponse(doRPCRequest(make_shared<string>("GetAccessKeyLastUsed"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAccessKeyLastUsedResponse Alibabacloud_Ims20190815::Client::getAccessKeyLastUsed(shared_ptr<GetAccessKeyLastUsedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccessKeyLastUsedWithOptions(request, runtime);
}

GetAccountMFAInfoResponse Alibabacloud_Ims20190815::Client::getAccountMFAInfoWithOptions(shared_ptr<GetAccountMFAInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAccountMFAInfoResponse(doRPCRequest(make_shared<string>("GetAccountMFAInfo"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAccountMFAInfoResponse Alibabacloud_Ims20190815::Client::getAccountMFAInfo(shared_ptr<GetAccountMFAInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountMFAInfoWithOptions(request, runtime);
}

GetAccountSecurityPracticeReportResponse Alibabacloud_Ims20190815::Client::getAccountSecurityPracticeReportWithOptions(shared_ptr<GetAccountSecurityPracticeReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAccountSecurityPracticeReportResponse(doRPCRequest(make_shared<string>("GetAccountSecurityPracticeReport"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAccountSecurityPracticeReportResponse Alibabacloud_Ims20190815::Client::getAccountSecurityPracticeReport(shared_ptr<GetAccountSecurityPracticeReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountSecurityPracticeReportWithOptions(request, runtime);
}

GetAccountSummaryResponse Alibabacloud_Ims20190815::Client::getAccountSummaryWithOptions(shared_ptr<GetAccountSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAccountSummaryResponse(doRPCRequest(make_shared<string>("GetAccountSummary"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAccountSummaryResponse Alibabacloud_Ims20190815::Client::getAccountSummary(shared_ptr<GetAccountSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountSummaryWithOptions(request, runtime);
}

GetApplicationResponse Alibabacloud_Ims20190815::Client::getApplicationWithOptions(shared_ptr<GetApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetApplicationResponse(doRPCRequest(make_shared<string>("GetApplication"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetApplicationResponse Alibabacloud_Ims20190815::Client::getApplication(shared_ptr<GetApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getApplicationWithOptions(request, runtime);
}

GetAppSecretResponse Alibabacloud_Ims20190815::Client::getAppSecretWithOptions(shared_ptr<GetAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAppSecretResponse(doRPCRequest(make_shared<string>("GetAppSecret"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAppSecretResponse Alibabacloud_Ims20190815::Client::getAppSecret(shared_ptr<GetAppSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppSecretWithOptions(request, runtime);
}

GetCredentialReportResponse Alibabacloud_Ims20190815::Client::getCredentialReportWithOptions(shared_ptr<GetCredentialReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCredentialReportResponse(doRPCRequest(make_shared<string>("GetCredentialReport"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCredentialReportResponse Alibabacloud_Ims20190815::Client::getCredentialReport(shared_ptr<GetCredentialReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCredentialReportWithOptions(request, runtime);
}

GetDefaultDomainResponse Alibabacloud_Ims20190815::Client::getDefaultDomainWithOptions(shared_ptr<GetDefaultDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDefaultDomainResponse(doRPCRequest(make_shared<string>("GetDefaultDomain"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDefaultDomainResponse Alibabacloud_Ims20190815::Client::getDefaultDomain(shared_ptr<GetDefaultDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDefaultDomainWithOptions(request, runtime);
}

GetGroupResponse Alibabacloud_Ims20190815::Client::getGroupWithOptions(shared_ptr<GetGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetGroupResponse(doRPCRequest(make_shared<string>("GetGroup"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetGroupResponse Alibabacloud_Ims20190815::Client::getGroup(shared_ptr<GetGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGroupWithOptions(request, runtime);
}

GetLoginProfileResponse Alibabacloud_Ims20190815::Client::getLoginProfileWithOptions(shared_ptr<GetLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLoginProfileResponse(doRPCRequest(make_shared<string>("GetLoginProfile"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLoginProfileResponse Alibabacloud_Ims20190815::Client::getLoginProfile(shared_ptr<GetLoginProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoginProfileWithOptions(request, runtime);
}

GetPasswordPolicyResponse Alibabacloud_Ims20190815::Client::getPasswordPolicyWithOptions(shared_ptr<GetPasswordPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPasswordPolicyResponse(doRPCRequest(make_shared<string>("GetPasswordPolicy"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPasswordPolicyResponse Alibabacloud_Ims20190815::Client::getPasswordPolicy(shared_ptr<GetPasswordPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPasswordPolicyWithOptions(request, runtime);
}

GetSAMLProviderResponse Alibabacloud_Ims20190815::Client::getSAMLProviderWithOptions(shared_ptr<GetSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSAMLProviderResponse(doRPCRequest(make_shared<string>("GetSAMLProvider"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSAMLProviderResponse Alibabacloud_Ims20190815::Client::getSAMLProvider(shared_ptr<GetSAMLProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSAMLProviderWithOptions(request, runtime);
}

GetSecurityPreferenceResponse Alibabacloud_Ims20190815::Client::getSecurityPreferenceWithOptions(shared_ptr<GetSecurityPreferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSecurityPreferenceResponse(doRPCRequest(make_shared<string>("GetSecurityPreference"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSecurityPreferenceResponse Alibabacloud_Ims20190815::Client::getSecurityPreference(shared_ptr<GetSecurityPreferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSecurityPreferenceWithOptions(request, runtime);
}

GetUserResponse Alibabacloud_Ims20190815::Client::getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserResponse(doRPCRequest(make_shared<string>("GetUser"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserResponse Alibabacloud_Ims20190815::Client::getUser(shared_ptr<GetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserWithOptions(request, runtime);
}

GetUserMFAInfoResponse Alibabacloud_Ims20190815::Client::getUserMFAInfoWithOptions(shared_ptr<GetUserMFAInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserMFAInfoResponse(doRPCRequest(make_shared<string>("GetUserMFAInfo"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserMFAInfoResponse Alibabacloud_Ims20190815::Client::getUserMFAInfo(shared_ptr<GetUserMFAInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserMFAInfoWithOptions(request, runtime);
}

GetUserSsoSettingsResponse Alibabacloud_Ims20190815::Client::getUserSsoSettingsWithOptions(shared_ptr<GetUserSsoSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserSsoSettingsResponse(doRPCRequest(make_shared<string>("GetUserSsoSettings"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserSsoSettingsResponse Alibabacloud_Ims20190815::Client::getUserSsoSettings(shared_ptr<GetUserSsoSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserSsoSettingsWithOptions(request, runtime);
}

ListAccessKeysResponse Alibabacloud_Ims20190815::Client::listAccessKeysWithOptions(shared_ptr<ListAccessKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAccessKeysResponse(doRPCRequest(make_shared<string>("ListAccessKeys"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAccessKeysResponse Alibabacloud_Ims20190815::Client::listAccessKeys(shared_ptr<ListAccessKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccessKeysWithOptions(request, runtime);
}

ListApplicationsResponse Alibabacloud_Ims20190815::Client::listApplicationsWithOptions(shared_ptr<ListApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListApplicationsResponse(doRPCRequest(make_shared<string>("ListApplications"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListApplicationsResponse Alibabacloud_Ims20190815::Client::listApplications(shared_ptr<ListApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApplicationsWithOptions(request, runtime);
}

ListAppSecretIdsResponse Alibabacloud_Ims20190815::Client::listAppSecretIdsWithOptions(shared_ptr<ListAppSecretIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAppSecretIdsResponse(doRPCRequest(make_shared<string>("ListAppSecretIds"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAppSecretIdsResponse Alibabacloud_Ims20190815::Client::listAppSecretIds(shared_ptr<ListAppSecretIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppSecretIdsWithOptions(request, runtime);
}

ListGroupsResponse Alibabacloud_Ims20190815::Client::listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListGroupsResponse(doRPCRequest(make_shared<string>("ListGroups"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListGroupsResponse Alibabacloud_Ims20190815::Client::listGroups(shared_ptr<ListGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGroupsWithOptions(request, runtime);
}

ListGroupsForUserResponse Alibabacloud_Ims20190815::Client::listGroupsForUserWithOptions(shared_ptr<ListGroupsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListGroupsForUserResponse(doRPCRequest(make_shared<string>("ListGroupsForUser"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListGroupsForUserResponse Alibabacloud_Ims20190815::Client::listGroupsForUser(shared_ptr<ListGroupsForUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGroupsForUserWithOptions(request, runtime);
}

ListPredefinedScopesResponse Alibabacloud_Ims20190815::Client::listPredefinedScopesWithOptions(shared_ptr<ListPredefinedScopesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPredefinedScopesResponse(doRPCRequest(make_shared<string>("ListPredefinedScopes"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPredefinedScopesResponse Alibabacloud_Ims20190815::Client::listPredefinedScopes(shared_ptr<ListPredefinedScopesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPredefinedScopesWithOptions(request, runtime);
}

ListSAMLProvidersResponse Alibabacloud_Ims20190815::Client::listSAMLProvidersWithOptions(shared_ptr<ListSAMLProvidersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSAMLProvidersResponse(doRPCRequest(make_shared<string>("ListSAMLProviders"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSAMLProvidersResponse Alibabacloud_Ims20190815::Client::listSAMLProviders(shared_ptr<ListSAMLProvidersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSAMLProvidersWithOptions(request, runtime);
}

ListUserBasicInfosResponse Alibabacloud_Ims20190815::Client::listUserBasicInfosWithOptions(shared_ptr<ListUserBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUserBasicInfosResponse(doRPCRequest(make_shared<string>("ListUserBasicInfos"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUserBasicInfosResponse Alibabacloud_Ims20190815::Client::listUserBasicInfos(shared_ptr<ListUserBasicInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserBasicInfosWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_Ims20190815::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUsersResponse(doRPCRequest(make_shared<string>("ListUsers"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUsersResponse Alibabacloud_Ims20190815::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

ListUsersForGroupResponse Alibabacloud_Ims20190815::Client::listUsersForGroupWithOptions(shared_ptr<ListUsersForGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUsersForGroupResponse(doRPCRequest(make_shared<string>("ListUsersForGroup"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUsersForGroupResponse Alibabacloud_Ims20190815::Client::listUsersForGroup(shared_ptr<ListUsersForGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersForGroupWithOptions(request, runtime);
}

ListVirtualMFADevicesResponse Alibabacloud_Ims20190815::Client::listVirtualMFADevicesWithOptions(shared_ptr<ListVirtualMFADevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVirtualMFADevicesResponse(doRPCRequest(make_shared<string>("ListVirtualMFADevices"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVirtualMFADevicesResponse Alibabacloud_Ims20190815::Client::listVirtualMFADevices(shared_ptr<ListVirtualMFADevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVirtualMFADevicesWithOptions(request, runtime);
}

RemoveUserFromGroupResponse Alibabacloud_Ims20190815::Client::removeUserFromGroupWithOptions(shared_ptr<RemoveUserFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveUserFromGroupResponse(doRPCRequest(make_shared<string>("RemoveUserFromGroup"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveUserFromGroupResponse Alibabacloud_Ims20190815::Client::removeUserFromGroup(shared_ptr<RemoveUserFromGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUserFromGroupWithOptions(request, runtime);
}

SetDefaultDomainResponse Alibabacloud_Ims20190815::Client::setDefaultDomainWithOptions(shared_ptr<SetDefaultDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDefaultDomainResponse(doRPCRequest(make_shared<string>("SetDefaultDomain"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDefaultDomainResponse Alibabacloud_Ims20190815::Client::setDefaultDomain(shared_ptr<SetDefaultDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultDomainWithOptions(request, runtime);
}

SetPasswordPolicyResponse Alibabacloud_Ims20190815::Client::setPasswordPolicyWithOptions(shared_ptr<SetPasswordPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetPasswordPolicyResponse(doRPCRequest(make_shared<string>("SetPasswordPolicy"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetPasswordPolicyResponse Alibabacloud_Ims20190815::Client::setPasswordPolicy(shared_ptr<SetPasswordPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setPasswordPolicyWithOptions(request, runtime);
}

SetSecurityPreferenceResponse Alibabacloud_Ims20190815::Client::setSecurityPreferenceWithOptions(shared_ptr<SetSecurityPreferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetSecurityPreferenceResponse(doRPCRequest(make_shared<string>("SetSecurityPreference"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetSecurityPreferenceResponse Alibabacloud_Ims20190815::Client::setSecurityPreference(shared_ptr<SetSecurityPreferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSecurityPreferenceWithOptions(request, runtime);
}

SetUserSsoSettingsResponse Alibabacloud_Ims20190815::Client::setUserSsoSettingsWithOptions(shared_ptr<SetUserSsoSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetUserSsoSettingsResponse(doRPCRequest(make_shared<string>("SetUserSsoSettings"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetUserSsoSettingsResponse Alibabacloud_Ims20190815::Client::setUserSsoSettings(shared_ptr<SetUserSsoSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setUserSsoSettingsWithOptions(request, runtime);
}

UnbindMFADeviceResponse Alibabacloud_Ims20190815::Client::unbindMFADeviceWithOptions(shared_ptr<UnbindMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindMFADeviceResponse(doRPCRequest(make_shared<string>("UnbindMFADevice"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindMFADeviceResponse Alibabacloud_Ims20190815::Client::unbindMFADevice(shared_ptr<UnbindMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindMFADeviceWithOptions(request, runtime);
}

UpdateAccessKeyResponse Alibabacloud_Ims20190815::Client::updateAccessKeyWithOptions(shared_ptr<UpdateAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAccessKeyResponse(doRPCRequest(make_shared<string>("UpdateAccessKey"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAccessKeyResponse Alibabacloud_Ims20190815::Client::updateAccessKey(shared_ptr<UpdateAccessKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAccessKeyWithOptions(request, runtime);
}

UpdateApplicationResponse Alibabacloud_Ims20190815::Client::updateApplicationWithOptions(shared_ptr<UpdateApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateApplicationResponse(doRPCRequest(make_shared<string>("UpdateApplication"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateApplicationResponse Alibabacloud_Ims20190815::Client::updateApplication(shared_ptr<UpdateApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateApplicationWithOptions(request, runtime);
}

UpdateGroupResponse Alibabacloud_Ims20190815::Client::updateGroupWithOptions(shared_ptr<UpdateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateGroupResponse(doRPCRequest(make_shared<string>("UpdateGroup"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateGroupResponse Alibabacloud_Ims20190815::Client::updateGroup(shared_ptr<UpdateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGroupWithOptions(request, runtime);
}

UpdateLoginProfileResponse Alibabacloud_Ims20190815::Client::updateLoginProfileWithOptions(shared_ptr<UpdateLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateLoginProfileResponse(doRPCRequest(make_shared<string>("UpdateLoginProfile"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateLoginProfileResponse Alibabacloud_Ims20190815::Client::updateLoginProfile(shared_ptr<UpdateLoginProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLoginProfileWithOptions(request, runtime);
}

UpdateSAMLProviderResponse Alibabacloud_Ims20190815::Client::updateSAMLProviderWithOptions(shared_ptr<UpdateSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSAMLProviderResponse(doRPCRequest(make_shared<string>("UpdateSAMLProvider"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSAMLProviderResponse Alibabacloud_Ims20190815::Client::updateSAMLProvider(shared_ptr<UpdateSAMLProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSAMLProviderWithOptions(request, runtime);
}

UpdateUserResponse Alibabacloud_Ims20190815::Client::updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateUserResponse(doRPCRequest(make_shared<string>("UpdateUser"), make_shared<string>("2019-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateUserResponse Alibabacloud_Ims20190815::Client::updateUser(shared_ptr<UpdateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserWithOptions(request, runtime);
}

