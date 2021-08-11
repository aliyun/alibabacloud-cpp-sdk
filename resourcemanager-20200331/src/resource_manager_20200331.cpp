// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/resource_manager_20200331.hpp>
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

using namespace Alibabacloud_ResourceManager20200331;

Alibabacloud_ResourceManager20200331::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("resourcemanager"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ResourceManager20200331::Client::getEndpoint(shared_ptr<string> productId,
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

AcceptHandshakeResponse Alibabacloud_ResourceManager20200331::Client::acceptHandshakeWithOptions(shared_ptr<AcceptHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AcceptHandshakeResponse(doRPCRequest(make_shared<string>("AcceptHandshake"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AcceptHandshakeResponse Alibabacloud_ResourceManager20200331::Client::acceptHandshake(shared_ptr<AcceptHandshakeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return acceptHandshakeWithOptions(request, runtime);
}

AttachControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::attachControlPolicyWithOptions(shared_ptr<AttachControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachControlPolicyResponse(doRPCRequest(make_shared<string>("AttachControlPolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::attachControlPolicy(shared_ptr<AttachControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachControlPolicyWithOptions(request, runtime);
}

AttachPolicyResponse Alibabacloud_ResourceManager20200331::Client::attachPolicyWithOptions(shared_ptr<AttachPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachPolicyResponse(doRPCRequest(make_shared<string>("AttachPolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachPolicyResponse Alibabacloud_ResourceManager20200331::Client::attachPolicy(shared_ptr<AttachPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachPolicyWithOptions(request, runtime);
}

CancelCreateCloudAccountResponse Alibabacloud_ResourceManager20200331::Client::cancelCreateCloudAccountWithOptions(shared_ptr<CancelCreateCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelCreateCloudAccountResponse(doRPCRequest(make_shared<string>("CancelCreateCloudAccount"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelCreateCloudAccountResponse Alibabacloud_ResourceManager20200331::Client::cancelCreateCloudAccount(shared_ptr<CancelCreateCloudAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelCreateCloudAccountWithOptions(request, runtime);
}

CancelHandshakeResponse Alibabacloud_ResourceManager20200331::Client::cancelHandshakeWithOptions(shared_ptr<CancelHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelHandshakeResponse(doRPCRequest(make_shared<string>("CancelHandshake"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelHandshakeResponse Alibabacloud_ResourceManager20200331::Client::cancelHandshake(shared_ptr<CancelHandshakeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelHandshakeWithOptions(request, runtime);
}

CancelPromoteResourceAccountResponse Alibabacloud_ResourceManager20200331::Client::cancelPromoteResourceAccountWithOptions(shared_ptr<CancelPromoteResourceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelPromoteResourceAccountResponse(doRPCRequest(make_shared<string>("CancelPromoteResourceAccount"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelPromoteResourceAccountResponse Alibabacloud_ResourceManager20200331::Client::cancelPromoteResourceAccount(shared_ptr<CancelPromoteResourceAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelPromoteResourceAccountWithOptions(request, runtime);
}

CreateCloudAccountResponse Alibabacloud_ResourceManager20200331::Client::createCloudAccountWithOptions(shared_ptr<CreateCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCloudAccountResponse(doRPCRequest(make_shared<string>("CreateCloudAccount"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCloudAccountResponse Alibabacloud_ResourceManager20200331::Client::createCloudAccount(shared_ptr<CreateCloudAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCloudAccountWithOptions(request, runtime);
}

CreateControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::createControlPolicyWithOptions(shared_ptr<CreateControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateControlPolicyResponse(doRPCRequest(make_shared<string>("CreateControlPolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::createControlPolicy(shared_ptr<CreateControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createControlPolicyWithOptions(request, runtime);
}

CreateFolderResponse Alibabacloud_ResourceManager20200331::Client::createFolderWithOptions(shared_ptr<CreateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFolderResponse(doRPCRequest(make_shared<string>("CreateFolder"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFolderResponse Alibabacloud_ResourceManager20200331::Client::createFolder(shared_ptr<CreateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFolderWithOptions(request, runtime);
}

CreatePolicyResponse Alibabacloud_ResourceManager20200331::Client::createPolicyWithOptions(shared_ptr<CreatePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePolicyResponse(doRPCRequest(make_shared<string>("CreatePolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePolicyResponse Alibabacloud_ResourceManager20200331::Client::createPolicy(shared_ptr<CreatePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPolicyWithOptions(request, runtime);
}

CreatePolicyVersionResponse Alibabacloud_ResourceManager20200331::Client::createPolicyVersionWithOptions(shared_ptr<CreatePolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePolicyVersionResponse(doRPCRequest(make_shared<string>("CreatePolicyVersion"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePolicyVersionResponse Alibabacloud_ResourceManager20200331::Client::createPolicyVersion(shared_ptr<CreatePolicyVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPolicyVersionWithOptions(request, runtime);
}

CreateResourceAccountResponse Alibabacloud_ResourceManager20200331::Client::createResourceAccountWithOptions(shared_ptr<CreateResourceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateResourceAccountResponse(doRPCRequest(make_shared<string>("CreateResourceAccount"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateResourceAccountResponse Alibabacloud_ResourceManager20200331::Client::createResourceAccount(shared_ptr<CreateResourceAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourceAccountWithOptions(request, runtime);
}

CreateResourceGroupResponse Alibabacloud_ResourceManager20200331::Client::createResourceGroupWithOptions(shared_ptr<CreateResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateResourceGroupResponse(doRPCRequest(make_shared<string>("CreateResourceGroup"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateResourceGroupResponse Alibabacloud_ResourceManager20200331::Client::createResourceGroup(shared_ptr<CreateResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourceGroupWithOptions(request, runtime);
}

CreateRoleResponse Alibabacloud_ResourceManager20200331::Client::createRoleWithOptions(shared_ptr<CreateRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRoleResponse(doRPCRequest(make_shared<string>("CreateRole"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRoleResponse Alibabacloud_ResourceManager20200331::Client::createRole(shared_ptr<CreateRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRoleWithOptions(request, runtime);
}

CreateServiceLinkedRoleResponse Alibabacloud_ResourceManager20200331::Client::createServiceLinkedRoleWithOptions(shared_ptr<CreateServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateServiceLinkedRoleResponse(doRPCRequest(make_shared<string>("CreateServiceLinkedRole"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateServiceLinkedRoleResponse Alibabacloud_ResourceManager20200331::Client::createServiceLinkedRole(shared_ptr<CreateServiceLinkedRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceLinkedRoleWithOptions(request, runtime);
}

DeclineHandshakeResponse Alibabacloud_ResourceManager20200331::Client::declineHandshakeWithOptions(shared_ptr<DeclineHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeclineHandshakeResponse(doRPCRequest(make_shared<string>("DeclineHandshake"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeclineHandshakeResponse Alibabacloud_ResourceManager20200331::Client::declineHandshake(shared_ptr<DeclineHandshakeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return declineHandshakeWithOptions(request, runtime);
}

DeleteControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::deleteControlPolicyWithOptions(shared_ptr<DeleteControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteControlPolicyResponse(doRPCRequest(make_shared<string>("DeleteControlPolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::deleteControlPolicy(shared_ptr<DeleteControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteControlPolicyWithOptions(request, runtime);
}

DeleteFolderResponse Alibabacloud_ResourceManager20200331::Client::deleteFolderWithOptions(shared_ptr<DeleteFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFolderResponse(doRPCRequest(make_shared<string>("DeleteFolder"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFolderResponse Alibabacloud_ResourceManager20200331::Client::deleteFolder(shared_ptr<DeleteFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFolderWithOptions(request, runtime);
}

DeletePolicyResponse Alibabacloud_ResourceManager20200331::Client::deletePolicyWithOptions(shared_ptr<DeletePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePolicyResponse(doRPCRequest(make_shared<string>("DeletePolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePolicyResponse Alibabacloud_ResourceManager20200331::Client::deletePolicy(shared_ptr<DeletePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePolicyWithOptions(request, runtime);
}

DeletePolicyVersionResponse Alibabacloud_ResourceManager20200331::Client::deletePolicyVersionWithOptions(shared_ptr<DeletePolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePolicyVersionResponse(doRPCRequest(make_shared<string>("DeletePolicyVersion"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePolicyVersionResponse Alibabacloud_ResourceManager20200331::Client::deletePolicyVersion(shared_ptr<DeletePolicyVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePolicyVersionWithOptions(request, runtime);
}

DeleteResourceGroupResponse Alibabacloud_ResourceManager20200331::Client::deleteResourceGroupWithOptions(shared_ptr<DeleteResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteResourceGroupResponse(doRPCRequest(make_shared<string>("DeleteResourceGroup"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteResourceGroupResponse Alibabacloud_ResourceManager20200331::Client::deleteResourceGroup(shared_ptr<DeleteResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteResourceGroupWithOptions(request, runtime);
}

DeleteRoleResponse Alibabacloud_ResourceManager20200331::Client::deleteRoleWithOptions(shared_ptr<DeleteRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRoleResponse(doRPCRequest(make_shared<string>("DeleteRole"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRoleResponse Alibabacloud_ResourceManager20200331::Client::deleteRole(shared_ptr<DeleteRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRoleWithOptions(request, runtime);
}

DeleteServiceLinkedRoleResponse Alibabacloud_ResourceManager20200331::Client::deleteServiceLinkedRoleWithOptions(shared_ptr<DeleteServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteServiceLinkedRoleResponse(doRPCRequest(make_shared<string>("DeleteServiceLinkedRole"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteServiceLinkedRoleResponse Alibabacloud_ResourceManager20200331::Client::deleteServiceLinkedRole(shared_ptr<DeleteServiceLinkedRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceLinkedRoleWithOptions(request, runtime);
}

DeregisterDelegatedAdministratorResponse Alibabacloud_ResourceManager20200331::Client::deregisterDelegatedAdministratorWithOptions(shared_ptr<DeregisterDelegatedAdministratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeregisterDelegatedAdministratorResponse(doRPCRequest(make_shared<string>("DeregisterDelegatedAdministrator"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeregisterDelegatedAdministratorResponse Alibabacloud_ResourceManager20200331::Client::deregisterDelegatedAdministrator(shared_ptr<DeregisterDelegatedAdministratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deregisterDelegatedAdministratorWithOptions(request, runtime);
}

DestroyResourceDirectoryResponse Alibabacloud_ResourceManager20200331::Client::destroyResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DestroyResourceDirectoryResponse(doRPCRequest(make_shared<string>("DestroyResourceDirectory"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DestroyResourceDirectoryResponse Alibabacloud_ResourceManager20200331::Client::destroyResourceDirectory() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return destroyResourceDirectoryWithOptions(runtime);
}

DetachControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::detachControlPolicyWithOptions(shared_ptr<DetachControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachControlPolicyResponse(doRPCRequest(make_shared<string>("DetachControlPolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::detachControlPolicy(shared_ptr<DetachControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachControlPolicyWithOptions(request, runtime);
}

DetachPolicyResponse Alibabacloud_ResourceManager20200331::Client::detachPolicyWithOptions(shared_ptr<DetachPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachPolicyResponse(doRPCRequest(make_shared<string>("DetachPolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachPolicyResponse Alibabacloud_ResourceManager20200331::Client::detachPolicy(shared_ptr<DetachPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachPolicyWithOptions(request, runtime);
}

DisableControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::disableControlPolicyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DisableControlPolicyResponse(doRPCRequest(make_shared<string>("DisableControlPolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::disableControlPolicy() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableControlPolicyWithOptions(runtime);
}

EnableControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::enableControlPolicyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return EnableControlPolicyResponse(doRPCRequest(make_shared<string>("EnableControlPolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::enableControlPolicy() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableControlPolicyWithOptions(runtime);
}

GetAccountResponse Alibabacloud_ResourceManager20200331::Client::getAccountWithOptions(shared_ptr<GetAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAccountResponse(doRPCRequest(make_shared<string>("GetAccount"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAccountResponse Alibabacloud_ResourceManager20200331::Client::getAccount(shared_ptr<GetAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountWithOptions(request, runtime);
}

GetControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::getControlPolicyWithOptions(shared_ptr<GetControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetControlPolicyResponse(doRPCRequest(make_shared<string>("GetControlPolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::getControlPolicy(shared_ptr<GetControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getControlPolicyWithOptions(request, runtime);
}

GetControlPolicyEnablementStatusResponse Alibabacloud_ResourceManager20200331::Client::getControlPolicyEnablementStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return GetControlPolicyEnablementStatusResponse(doRPCRequest(make_shared<string>("GetControlPolicyEnablementStatus"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetControlPolicyEnablementStatusResponse Alibabacloud_ResourceManager20200331::Client::getControlPolicyEnablementStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getControlPolicyEnablementStatusWithOptions(runtime);
}

GetFolderResponse Alibabacloud_ResourceManager20200331::Client::getFolderWithOptions(shared_ptr<GetFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetFolderResponse(doRPCRequest(make_shared<string>("GetFolder"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetFolderResponse Alibabacloud_ResourceManager20200331::Client::getFolder(shared_ptr<GetFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFolderWithOptions(request, runtime);
}

GetHandshakeResponse Alibabacloud_ResourceManager20200331::Client::getHandshakeWithOptions(shared_ptr<GetHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHandshakeResponse(doRPCRequest(make_shared<string>("GetHandshake"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHandshakeResponse Alibabacloud_ResourceManager20200331::Client::getHandshake(shared_ptr<GetHandshakeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHandshakeWithOptions(request, runtime);
}

GetPayerForAccountResponse Alibabacloud_ResourceManager20200331::Client::getPayerForAccountWithOptions(shared_ptr<GetPayerForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPayerForAccountResponse(doRPCRequest(make_shared<string>("GetPayerForAccount"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPayerForAccountResponse Alibabacloud_ResourceManager20200331::Client::getPayerForAccount(shared_ptr<GetPayerForAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPayerForAccountWithOptions(request, runtime);
}

GetPolicyResponse Alibabacloud_ResourceManager20200331::Client::getPolicyWithOptions(shared_ptr<GetPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPolicyResponse(doRPCRequest(make_shared<string>("GetPolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPolicyResponse Alibabacloud_ResourceManager20200331::Client::getPolicy(shared_ptr<GetPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPolicyWithOptions(request, runtime);
}

GetPolicyVersionResponse Alibabacloud_ResourceManager20200331::Client::getPolicyVersionWithOptions(shared_ptr<GetPolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPolicyVersionResponse(doRPCRequest(make_shared<string>("GetPolicyVersion"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPolicyVersionResponse Alibabacloud_ResourceManager20200331::Client::getPolicyVersion(shared_ptr<GetPolicyVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPolicyVersionWithOptions(request, runtime);
}

GetResourceDirectoryResponse Alibabacloud_ResourceManager20200331::Client::getResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return GetResourceDirectoryResponse(doRPCRequest(make_shared<string>("GetResourceDirectory"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetResourceDirectoryResponse Alibabacloud_ResourceManager20200331::Client::getResourceDirectory() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceDirectoryWithOptions(runtime);
}

GetResourceGroupResponse Alibabacloud_ResourceManager20200331::Client::getResourceGroupWithOptions(shared_ptr<GetResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetResourceGroupResponse(doRPCRequest(make_shared<string>("GetResourceGroup"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetResourceGroupResponse Alibabacloud_ResourceManager20200331::Client::getResourceGroup(shared_ptr<GetResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceGroupWithOptions(request, runtime);
}

GetRoleResponse Alibabacloud_ResourceManager20200331::Client::getRoleWithOptions(shared_ptr<GetRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRoleResponse(doRPCRequest(make_shared<string>("GetRole"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRoleResponse Alibabacloud_ResourceManager20200331::Client::getRole(shared_ptr<GetRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRoleWithOptions(request, runtime);
}

GetServiceLinkedRoleDeletionStatusResponse Alibabacloud_ResourceManager20200331::Client::getServiceLinkedRoleDeletionStatusWithOptions(shared_ptr<GetServiceLinkedRoleDeletionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetServiceLinkedRoleDeletionStatusResponse(doRPCRequest(make_shared<string>("GetServiceLinkedRoleDeletionStatus"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetServiceLinkedRoleDeletionStatusResponse Alibabacloud_ResourceManager20200331::Client::getServiceLinkedRoleDeletionStatus(shared_ptr<GetServiceLinkedRoleDeletionStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceLinkedRoleDeletionStatusWithOptions(request, runtime);
}

InitResourceDirectoryResponse Alibabacloud_ResourceManager20200331::Client::initResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return InitResourceDirectoryResponse(doRPCRequest(make_shared<string>("InitResourceDirectory"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InitResourceDirectoryResponse Alibabacloud_ResourceManager20200331::Client::initResourceDirectory() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initResourceDirectoryWithOptions(runtime);
}

InviteAccountToResourceDirectoryResponse Alibabacloud_ResourceManager20200331::Client::inviteAccountToResourceDirectoryWithOptions(shared_ptr<InviteAccountToResourceDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InviteAccountToResourceDirectoryResponse(doRPCRequest(make_shared<string>("InviteAccountToResourceDirectory"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InviteAccountToResourceDirectoryResponse Alibabacloud_ResourceManager20200331::Client::inviteAccountToResourceDirectory(shared_ptr<InviteAccountToResourceDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return inviteAccountToResourceDirectoryWithOptions(request, runtime);
}

ListAccountsResponse Alibabacloud_ResourceManager20200331::Client::listAccountsWithOptions(shared_ptr<ListAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAccountsResponse(doRPCRequest(make_shared<string>("ListAccounts"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAccountsResponse Alibabacloud_ResourceManager20200331::Client::listAccounts(shared_ptr<ListAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccountsWithOptions(request, runtime);
}

ListAccountsForParentResponse Alibabacloud_ResourceManager20200331::Client::listAccountsForParentWithOptions(shared_ptr<ListAccountsForParentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAccountsForParentResponse(doRPCRequest(make_shared<string>("ListAccountsForParent"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAccountsForParentResponse Alibabacloud_ResourceManager20200331::Client::listAccountsForParent(shared_ptr<ListAccountsForParentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccountsForParentWithOptions(request, runtime);
}

ListAncestorsResponse Alibabacloud_ResourceManager20200331::Client::listAncestorsWithOptions(shared_ptr<ListAncestorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAncestorsResponse(doRPCRequest(make_shared<string>("ListAncestors"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAncestorsResponse Alibabacloud_ResourceManager20200331::Client::listAncestors(shared_ptr<ListAncestorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAncestorsWithOptions(request, runtime);
}

ListControlPoliciesResponse Alibabacloud_ResourceManager20200331::Client::listControlPoliciesWithOptions(shared_ptr<ListControlPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListControlPoliciesResponse(doRPCRequest(make_shared<string>("ListControlPolicies"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListControlPoliciesResponse Alibabacloud_ResourceManager20200331::Client::listControlPolicies(shared_ptr<ListControlPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listControlPoliciesWithOptions(request, runtime);
}

ListControlPolicyAttachmentsForTargetResponse Alibabacloud_ResourceManager20200331::Client::listControlPolicyAttachmentsForTargetWithOptions(shared_ptr<ListControlPolicyAttachmentsForTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListControlPolicyAttachmentsForTargetResponse(doRPCRequest(make_shared<string>("ListControlPolicyAttachmentsForTarget"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListControlPolicyAttachmentsForTargetResponse Alibabacloud_ResourceManager20200331::Client::listControlPolicyAttachmentsForTarget(shared_ptr<ListControlPolicyAttachmentsForTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listControlPolicyAttachmentsForTargetWithOptions(request, runtime);
}

ListDelegatedAdministratorsResponse Alibabacloud_ResourceManager20200331::Client::listDelegatedAdministratorsWithOptions(shared_ptr<ListDelegatedAdministratorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDelegatedAdministratorsResponse(doRPCRequest(make_shared<string>("ListDelegatedAdministrators"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDelegatedAdministratorsResponse Alibabacloud_ResourceManager20200331::Client::listDelegatedAdministrators(shared_ptr<ListDelegatedAdministratorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDelegatedAdministratorsWithOptions(request, runtime);
}

ListDelegatedServicesForAccountResponse Alibabacloud_ResourceManager20200331::Client::listDelegatedServicesForAccountWithOptions(shared_ptr<ListDelegatedServicesForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDelegatedServicesForAccountResponse(doRPCRequest(make_shared<string>("ListDelegatedServicesForAccount"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDelegatedServicesForAccountResponse Alibabacloud_ResourceManager20200331::Client::listDelegatedServicesForAccount(shared_ptr<ListDelegatedServicesForAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDelegatedServicesForAccountWithOptions(request, runtime);
}

ListFoldersForParentResponse Alibabacloud_ResourceManager20200331::Client::listFoldersForParentWithOptions(shared_ptr<ListFoldersForParentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFoldersForParentResponse(doRPCRequest(make_shared<string>("ListFoldersForParent"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFoldersForParentResponse Alibabacloud_ResourceManager20200331::Client::listFoldersForParent(shared_ptr<ListFoldersForParentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFoldersForParentWithOptions(request, runtime);
}

ListHandshakesForAccountResponse Alibabacloud_ResourceManager20200331::Client::listHandshakesForAccountWithOptions(shared_ptr<ListHandshakesForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHandshakesForAccountResponse(doRPCRequest(make_shared<string>("ListHandshakesForAccount"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHandshakesForAccountResponse Alibabacloud_ResourceManager20200331::Client::listHandshakesForAccount(shared_ptr<ListHandshakesForAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHandshakesForAccountWithOptions(request, runtime);
}

ListHandshakesForResourceDirectoryResponse Alibabacloud_ResourceManager20200331::Client::listHandshakesForResourceDirectoryWithOptions(shared_ptr<ListHandshakesForResourceDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHandshakesForResourceDirectoryResponse(doRPCRequest(make_shared<string>("ListHandshakesForResourceDirectory"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHandshakesForResourceDirectoryResponse Alibabacloud_ResourceManager20200331::Client::listHandshakesForResourceDirectory(shared_ptr<ListHandshakesForResourceDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHandshakesForResourceDirectoryWithOptions(request, runtime);
}

ListPoliciesResponse Alibabacloud_ResourceManager20200331::Client::listPoliciesWithOptions(shared_ptr<ListPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPoliciesResponse(doRPCRequest(make_shared<string>("ListPolicies"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPoliciesResponse Alibabacloud_ResourceManager20200331::Client::listPolicies(shared_ptr<ListPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPoliciesWithOptions(request, runtime);
}

ListPolicyAttachmentsResponse Alibabacloud_ResourceManager20200331::Client::listPolicyAttachmentsWithOptions(shared_ptr<ListPolicyAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPolicyAttachmentsResponse(doRPCRequest(make_shared<string>("ListPolicyAttachments"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPolicyAttachmentsResponse Alibabacloud_ResourceManager20200331::Client::listPolicyAttachments(shared_ptr<ListPolicyAttachmentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPolicyAttachmentsWithOptions(request, runtime);
}

ListPolicyVersionsResponse Alibabacloud_ResourceManager20200331::Client::listPolicyVersionsWithOptions(shared_ptr<ListPolicyVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPolicyVersionsResponse(doRPCRequest(make_shared<string>("ListPolicyVersions"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPolicyVersionsResponse Alibabacloud_ResourceManager20200331::Client::listPolicyVersions(shared_ptr<ListPolicyVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPolicyVersionsWithOptions(request, runtime);
}

ListResourceGroupsResponse Alibabacloud_ResourceManager20200331::Client::listResourceGroupsWithOptions(shared_ptr<ListResourceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListResourceGroupsResponse(doRPCRequest(make_shared<string>("ListResourceGroups"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListResourceGroupsResponse Alibabacloud_ResourceManager20200331::Client::listResourceGroups(shared_ptr<ListResourceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceGroupsWithOptions(request, runtime);
}

ListResourcesResponse Alibabacloud_ResourceManager20200331::Client::listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListResourcesResponse(doRPCRequest(make_shared<string>("ListResources"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListResourcesResponse Alibabacloud_ResourceManager20200331::Client::listResources(shared_ptr<ListResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourcesWithOptions(request, runtime);
}

ListRolesResponse Alibabacloud_ResourceManager20200331::Client::listRolesWithOptions(shared_ptr<ListRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRolesResponse(doRPCRequest(make_shared<string>("ListRoles"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRolesResponse Alibabacloud_ResourceManager20200331::Client::listRoles(shared_ptr<ListRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRolesWithOptions(request, runtime);
}

ListTargetAttachmentsForControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::listTargetAttachmentsForControlPolicyWithOptions(shared_ptr<ListTargetAttachmentsForControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTargetAttachmentsForControlPolicyResponse(doRPCRequest(make_shared<string>("ListTargetAttachmentsForControlPolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTargetAttachmentsForControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::listTargetAttachmentsForControlPolicy(shared_ptr<ListTargetAttachmentsForControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTargetAttachmentsForControlPolicyWithOptions(request, runtime);
}

ListTrustedServiceStatusResponse Alibabacloud_ResourceManager20200331::Client::listTrustedServiceStatusWithOptions(shared_ptr<ListTrustedServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTrustedServiceStatusResponse(doRPCRequest(make_shared<string>("ListTrustedServiceStatus"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTrustedServiceStatusResponse Alibabacloud_ResourceManager20200331::Client::listTrustedServiceStatus(shared_ptr<ListTrustedServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTrustedServiceStatusWithOptions(request, runtime);
}

MoveAccountResponse Alibabacloud_ResourceManager20200331::Client::moveAccountWithOptions(shared_ptr<MoveAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MoveAccountResponse(doRPCRequest(make_shared<string>("MoveAccount"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MoveAccountResponse Alibabacloud_ResourceManager20200331::Client::moveAccount(shared_ptr<MoveAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveAccountWithOptions(request, runtime);
}

PromoteResourceAccountResponse Alibabacloud_ResourceManager20200331::Client::promoteResourceAccountWithOptions(shared_ptr<PromoteResourceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PromoteResourceAccountResponse(doRPCRequest(make_shared<string>("PromoteResourceAccount"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PromoteResourceAccountResponse Alibabacloud_ResourceManager20200331::Client::promoteResourceAccount(shared_ptr<PromoteResourceAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return promoteResourceAccountWithOptions(request, runtime);
}

RegisterDelegatedAdministratorResponse Alibabacloud_ResourceManager20200331::Client::registerDelegatedAdministratorWithOptions(shared_ptr<RegisterDelegatedAdministratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterDelegatedAdministratorResponse(doRPCRequest(make_shared<string>("RegisterDelegatedAdministrator"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterDelegatedAdministratorResponse Alibabacloud_ResourceManager20200331::Client::registerDelegatedAdministrator(shared_ptr<RegisterDelegatedAdministratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerDelegatedAdministratorWithOptions(request, runtime);
}

RemoveCloudAccountResponse Alibabacloud_ResourceManager20200331::Client::removeCloudAccountWithOptions(shared_ptr<RemoveCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveCloudAccountResponse(doRPCRequest(make_shared<string>("RemoveCloudAccount"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveCloudAccountResponse Alibabacloud_ResourceManager20200331::Client::removeCloudAccount(shared_ptr<RemoveCloudAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeCloudAccountWithOptions(request, runtime);
}

ResendCreateCloudAccountEmailResponse Alibabacloud_ResourceManager20200331::Client::resendCreateCloudAccountEmailWithOptions(shared_ptr<ResendCreateCloudAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResendCreateCloudAccountEmailResponse(doRPCRequest(make_shared<string>("ResendCreateCloudAccountEmail"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResendCreateCloudAccountEmailResponse Alibabacloud_ResourceManager20200331::Client::resendCreateCloudAccountEmail(shared_ptr<ResendCreateCloudAccountEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resendCreateCloudAccountEmailWithOptions(request, runtime);
}

ResendPromoteResourceAccountEmailResponse Alibabacloud_ResourceManager20200331::Client::resendPromoteResourceAccountEmailWithOptions(shared_ptr<ResendPromoteResourceAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResendPromoteResourceAccountEmailResponse(doRPCRequest(make_shared<string>("ResendPromoteResourceAccountEmail"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResendPromoteResourceAccountEmailResponse Alibabacloud_ResourceManager20200331::Client::resendPromoteResourceAccountEmail(shared_ptr<ResendPromoteResourceAccountEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resendPromoteResourceAccountEmailWithOptions(request, runtime);
}

SetDefaultPolicyVersionResponse Alibabacloud_ResourceManager20200331::Client::setDefaultPolicyVersionWithOptions(shared_ptr<SetDefaultPolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDefaultPolicyVersionResponse(doRPCRequest(make_shared<string>("SetDefaultPolicyVersion"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDefaultPolicyVersionResponse Alibabacloud_ResourceManager20200331::Client::setDefaultPolicyVersion(shared_ptr<SetDefaultPolicyVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultPolicyVersionWithOptions(request, runtime);
}

UpdateAccountResponse Alibabacloud_ResourceManager20200331::Client::updateAccountWithOptions(shared_ptr<UpdateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAccountResponse(doRPCRequest(make_shared<string>("UpdateAccount"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAccountResponse Alibabacloud_ResourceManager20200331::Client::updateAccount(shared_ptr<UpdateAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAccountWithOptions(request, runtime);
}

UpdateControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::updateControlPolicyWithOptions(shared_ptr<UpdateControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateControlPolicyResponse(doRPCRequest(make_shared<string>("UpdateControlPolicy"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateControlPolicyResponse Alibabacloud_ResourceManager20200331::Client::updateControlPolicy(shared_ptr<UpdateControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateControlPolicyWithOptions(request, runtime);
}

UpdateFolderResponse Alibabacloud_ResourceManager20200331::Client::updateFolderWithOptions(shared_ptr<UpdateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateFolderResponse(doRPCRequest(make_shared<string>("UpdateFolder"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateFolderResponse Alibabacloud_ResourceManager20200331::Client::updateFolder(shared_ptr<UpdateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFolderWithOptions(request, runtime);
}

UpdateResourceGroupResponse Alibabacloud_ResourceManager20200331::Client::updateResourceGroupWithOptions(shared_ptr<UpdateResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateResourceGroupResponse(doRPCRequest(make_shared<string>("UpdateResourceGroup"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateResourceGroupResponse Alibabacloud_ResourceManager20200331::Client::updateResourceGroup(shared_ptr<UpdateResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateResourceGroupWithOptions(request, runtime);
}

UpdateRoleResponse Alibabacloud_ResourceManager20200331::Client::updateRoleWithOptions(shared_ptr<UpdateRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateRoleResponse(doRPCRequest(make_shared<string>("UpdateRole"), make_shared<string>("2020-03-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRoleResponse Alibabacloud_ResourceManager20200331::Client::updateRole(shared_ptr<UpdateRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRoleWithOptions(request, runtime);
}

