// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ecd_20200930.hpp>
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

using namespace Alibabacloud_Ecd20200930;

Alibabacloud_Ecd20200930::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ecd"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ecd20200930::Client::getEndpoint(shared_ptr<string> productId,
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

AddUserToDesktopGroupResponse Alibabacloud_Ecd20200930::Client::addUserToDesktopGroupWithOptions(shared_ptr<AddUserToDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddUserToDesktopGroupResponse(doRPCRequest(make_shared<string>("AddUserToDesktopGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddUserToDesktopGroupResponse Alibabacloud_Ecd20200930::Client::addUserToDesktopGroup(shared_ptr<AddUserToDesktopGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserToDesktopGroupWithOptions(request, runtime);
}

AddUserToSecurityCenterWhiteListResponse Alibabacloud_Ecd20200930::Client::addUserToSecurityCenterWhiteListWithOptions(shared_ptr<AddUserToSecurityCenterWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddUserToSecurityCenterWhiteListResponse(doRPCRequest(make_shared<string>("AddUserToSecurityCenterWhiteList"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddUserToSecurityCenterWhiteListResponse Alibabacloud_Ecd20200930::Client::addUserToSecurityCenterWhiteList(shared_ptr<AddUserToSecurityCenterWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserToSecurityCenterWhiteListWithOptions(request, runtime);
}

AttachCenResponse Alibabacloud_Ecd20200930::Client::attachCenWithOptions(shared_ptr<AttachCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachCenResponse(doRPCRequest(make_shared<string>("AttachCen"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachCenResponse Alibabacloud_Ecd20200930::Client::attachCen(shared_ptr<AttachCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachCenWithOptions(request, runtime);
}

CheckUserInSecurityCenterWhiteListResponse Alibabacloud_Ecd20200930::Client::checkUserInSecurityCenterWhiteListWithOptions(shared_ptr<CheckUserInSecurityCenterWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckUserInSecurityCenterWhiteListResponse(doRPCRequest(make_shared<string>("CheckUserInSecurityCenterWhiteList"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckUserInSecurityCenterWhiteListResponse Alibabacloud_Ecd20200930::Client::checkUserInSecurityCenterWhiteList(shared_ptr<CheckUserInSecurityCenterWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkUserInSecurityCenterWhiteListWithOptions(request, runtime);
}

ClonePolicyGroupResponse Alibabacloud_Ecd20200930::Client::clonePolicyGroupWithOptions(shared_ptr<ClonePolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ClonePolicyGroupResponse(doRPCRequest(make_shared<string>("ClonePolicyGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ClonePolicyGroupResponse Alibabacloud_Ecd20200930::Client::clonePolicyGroup(shared_ptr<ClonePolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clonePolicyGroupWithOptions(request, runtime);
}

CreateADConnectorDirectoryResponse Alibabacloud_Ecd20200930::Client::createADConnectorDirectoryWithOptions(shared_ptr<CreateADConnectorDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateADConnectorDirectoryResponse(doRPCRequest(make_shared<string>("CreateADConnectorDirectory"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateADConnectorDirectoryResponse Alibabacloud_Ecd20200930::Client::createADConnectorDirectory(shared_ptr<CreateADConnectorDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createADConnectorDirectoryWithOptions(request, runtime);
}

CreateADConnectorOfficeSiteResponse Alibabacloud_Ecd20200930::Client::createADConnectorOfficeSiteWithOptions(shared_ptr<CreateADConnectorOfficeSiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateADConnectorOfficeSiteResponse(doRPCRequest(make_shared<string>("CreateADConnectorOfficeSite"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateADConnectorOfficeSiteResponse Alibabacloud_Ecd20200930::Client::createADConnectorOfficeSite(shared_ptr<CreateADConnectorOfficeSiteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createADConnectorOfficeSiteWithOptions(request, runtime);
}

CreateBundleResponse Alibabacloud_Ecd20200930::Client::createBundleWithOptions(shared_ptr<CreateBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateBundleResponse(doRPCRequest(make_shared<string>("CreateBundle"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateBundleResponse Alibabacloud_Ecd20200930::Client::createBundle(shared_ptr<CreateBundleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBundleWithOptions(request, runtime);
}

CreateDesktopGroupResponse Alibabacloud_Ecd20200930::Client::createDesktopGroupWithOptions(shared_ptr<CreateDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDesktopGroupResponse(doRPCRequest(make_shared<string>("CreateDesktopGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDesktopGroupResponse Alibabacloud_Ecd20200930::Client::createDesktopGroup(shared_ptr<CreateDesktopGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDesktopGroupWithOptions(request, runtime);
}

CreateDesktopsResponse Alibabacloud_Ecd20200930::Client::createDesktopsWithOptions(shared_ptr<CreateDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDesktopsResponse(doRPCRequest(make_shared<string>("CreateDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDesktopsResponse Alibabacloud_Ecd20200930::Client::createDesktops(shared_ptr<CreateDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDesktopsWithOptions(request, runtime);
}

CreateDesktopsLiteResponse Alibabacloud_Ecd20200930::Client::createDesktopsLiteWithOptions(shared_ptr<CreateDesktopsLiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDesktopsLiteResponse(doRPCRequest(make_shared<string>("CreateDesktopsLite"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDesktopsLiteResponse Alibabacloud_Ecd20200930::Client::createDesktopsLite(shared_ptr<CreateDesktopsLiteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDesktopsLiteWithOptions(request, runtime);
}

CreateImageResponse Alibabacloud_Ecd20200930::Client::createImageWithOptions(shared_ptr<CreateImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateImageResponse(doRPCRequest(make_shared<string>("CreateImage"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateImageResponse Alibabacloud_Ecd20200930::Client::createImage(shared_ptr<CreateImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageWithOptions(request, runtime);
}

CreateNASFileSystemResponse Alibabacloud_Ecd20200930::Client::createNASFileSystemWithOptions(shared_ptr<CreateNASFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateNASFileSystemResponse(doRPCRequest(make_shared<string>("CreateNASFileSystem"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateNASFileSystemResponse Alibabacloud_Ecd20200930::Client::createNASFileSystem(shared_ptr<CreateNASFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNASFileSystemWithOptions(request, runtime);
}

CreateNetworkPackageResponse Alibabacloud_Ecd20200930::Client::createNetworkPackageWithOptions(shared_ptr<CreateNetworkPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateNetworkPackageResponse(doRPCRequest(make_shared<string>("CreateNetworkPackage"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateNetworkPackageResponse Alibabacloud_Ecd20200930::Client::createNetworkPackage(shared_ptr<CreateNetworkPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNetworkPackageWithOptions(request, runtime);
}

CreatePolicyGroupResponse Alibabacloud_Ecd20200930::Client::createPolicyGroupWithOptions(shared_ptr<CreatePolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePolicyGroupResponse(doRPCRequest(make_shared<string>("CreatePolicyGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePolicyGroupResponse Alibabacloud_Ecd20200930::Client::createPolicyGroup(shared_ptr<CreatePolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPolicyGroupWithOptions(request, runtime);
}

CreateRAMDirectoryResponse Alibabacloud_Ecd20200930::Client::createRAMDirectoryWithOptions(shared_ptr<CreateRAMDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRAMDirectoryResponse(doRPCRequest(make_shared<string>("CreateRAMDirectory"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRAMDirectoryResponse Alibabacloud_Ecd20200930::Client::createRAMDirectory(shared_ptr<CreateRAMDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRAMDirectoryWithOptions(request, runtime);
}

CreateScaleStrategyResponse Alibabacloud_Ecd20200930::Client::createScaleStrategyWithOptions(shared_ptr<CreateScaleStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateScaleStrategyResponse(doRPCRequest(make_shared<string>("CreateScaleStrategy"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateScaleStrategyResponse Alibabacloud_Ecd20200930::Client::createScaleStrategy(shared_ptr<CreateScaleStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScaleStrategyWithOptions(request, runtime);
}

CreateServiceLinkedRoleResponse Alibabacloud_Ecd20200930::Client::createServiceLinkedRoleWithOptions(shared_ptr<CreateServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateServiceLinkedRoleResponse(doRPCRequest(make_shared<string>("CreateServiceLinkedRole"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateServiceLinkedRoleResponse Alibabacloud_Ecd20200930::Client::createServiceLinkedRole(shared_ptr<CreateServiceLinkedRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceLinkedRoleWithOptions(request, runtime);
}

CreateSimpleOfficeSiteResponse Alibabacloud_Ecd20200930::Client::createSimpleOfficeSiteWithOptions(shared_ptr<CreateSimpleOfficeSiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSimpleOfficeSiteResponse(doRPCRequest(make_shared<string>("CreateSimpleOfficeSite"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSimpleOfficeSiteResponse Alibabacloud_Ecd20200930::Client::createSimpleOfficeSite(shared_ptr<CreateSimpleOfficeSiteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSimpleOfficeSiteWithOptions(request, runtime);
}

CreateSnapshotResponse Alibabacloud_Ecd20200930::Client::createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSnapshotResponse(doRPCRequest(make_shared<string>("CreateSnapshot"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSnapshotResponse Alibabacloud_Ecd20200930::Client::createSnapshot(shared_ptr<CreateSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSnapshotWithOptions(request, runtime);
}

DeleteBundlesResponse Alibabacloud_Ecd20200930::Client::deleteBundlesWithOptions(shared_ptr<DeleteBundlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteBundlesResponse(doRPCRequest(make_shared<string>("DeleteBundles"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteBundlesResponse Alibabacloud_Ecd20200930::Client::deleteBundles(shared_ptr<DeleteBundlesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBundlesWithOptions(request, runtime);
}

DeleteDesktopGroupResponse Alibabacloud_Ecd20200930::Client::deleteDesktopGroupWithOptions(shared_ptr<DeleteDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDesktopGroupResponse(doRPCRequest(make_shared<string>("DeleteDesktopGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDesktopGroupResponse Alibabacloud_Ecd20200930::Client::deleteDesktopGroup(shared_ptr<DeleteDesktopGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDesktopGroupWithOptions(request, runtime);
}

DeleteDesktopsResponse Alibabacloud_Ecd20200930::Client::deleteDesktopsWithOptions(shared_ptr<DeleteDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDesktopsResponse(doRPCRequest(make_shared<string>("DeleteDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDesktopsResponse Alibabacloud_Ecd20200930::Client::deleteDesktops(shared_ptr<DeleteDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDesktopsWithOptions(request, runtime);
}

DeleteDirectoriesResponse Alibabacloud_Ecd20200930::Client::deleteDirectoriesWithOptions(shared_ptr<DeleteDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDirectoriesResponse(doRPCRequest(make_shared<string>("DeleteDirectories"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDirectoriesResponse Alibabacloud_Ecd20200930::Client::deleteDirectories(shared_ptr<DeleteDirectoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDirectoriesWithOptions(request, runtime);
}

DeleteImagesResponse Alibabacloud_Ecd20200930::Client::deleteImagesWithOptions(shared_ptr<DeleteImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteImagesResponse(doRPCRequest(make_shared<string>("DeleteImages"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteImagesResponse Alibabacloud_Ecd20200930::Client::deleteImages(shared_ptr<DeleteImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImagesWithOptions(request, runtime);
}

DeleteNASFileSystemsResponse Alibabacloud_Ecd20200930::Client::deleteNASFileSystemsWithOptions(shared_ptr<DeleteNASFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteNASFileSystemsResponse(doRPCRequest(make_shared<string>("DeleteNASFileSystems"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteNASFileSystemsResponse Alibabacloud_Ecd20200930::Client::deleteNASFileSystems(shared_ptr<DeleteNASFileSystemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNASFileSystemsWithOptions(request, runtime);
}

DeleteNetworkPackagesResponse Alibabacloud_Ecd20200930::Client::deleteNetworkPackagesWithOptions(shared_ptr<DeleteNetworkPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteNetworkPackagesResponse(doRPCRequest(make_shared<string>("DeleteNetworkPackages"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteNetworkPackagesResponse Alibabacloud_Ecd20200930::Client::deleteNetworkPackages(shared_ptr<DeleteNetworkPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNetworkPackagesWithOptions(request, runtime);
}

DeleteOfficeSitesResponse Alibabacloud_Ecd20200930::Client::deleteOfficeSitesWithOptions(shared_ptr<DeleteOfficeSitesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteOfficeSitesResponse(doRPCRequest(make_shared<string>("DeleteOfficeSites"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteOfficeSitesResponse Alibabacloud_Ecd20200930::Client::deleteOfficeSites(shared_ptr<DeleteOfficeSitesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOfficeSitesWithOptions(request, runtime);
}

DeletePolicyGroupsResponse Alibabacloud_Ecd20200930::Client::deletePolicyGroupsWithOptions(shared_ptr<DeletePolicyGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePolicyGroupsResponse(doRPCRequest(make_shared<string>("DeletePolicyGroups"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePolicyGroupsResponse Alibabacloud_Ecd20200930::Client::deletePolicyGroups(shared_ptr<DeletePolicyGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePolicyGroupsWithOptions(request, runtime);
}

DeleteScaleStrategyResponse Alibabacloud_Ecd20200930::Client::deleteScaleStrategyWithOptions(shared_ptr<DeleteScaleStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteScaleStrategyResponse(doRPCRequest(make_shared<string>("DeleteScaleStrategy"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteScaleStrategyResponse Alibabacloud_Ecd20200930::Client::deleteScaleStrategy(shared_ptr<DeleteScaleStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScaleStrategyWithOptions(request, runtime);
}

DeleteSnapshotResponse Alibabacloud_Ecd20200930::Client::deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSnapshotResponse(doRPCRequest(make_shared<string>("DeleteSnapshot"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSnapshotResponse Alibabacloud_Ecd20200930::Client::deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnapshotWithOptions(request, runtime);
}

DeleteVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::deleteVirtualMFADeviceWithOptions(shared_ptr<DeleteVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVirtualMFADeviceResponse(doRPCRequest(make_shared<string>("DeleteVirtualMFADevice"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::deleteVirtualMFADevice(shared_ptr<DeleteVirtualMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVirtualMFADeviceWithOptions(request, runtime);
}

DescribeAlarmEventStackInfoResponse Alibabacloud_Ecd20200930::Client::describeAlarmEventStackInfoWithOptions(shared_ptr<DescribeAlarmEventStackInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAlarmEventStackInfoResponse(doRPCRequest(make_shared<string>("DescribeAlarmEventStackInfo"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAlarmEventStackInfoResponse Alibabacloud_Ecd20200930::Client::describeAlarmEventStackInfo(shared_ptr<DescribeAlarmEventStackInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlarmEventStackInfoWithOptions(request, runtime);
}

DescribeBundlesResponse Alibabacloud_Ecd20200930::Client::describeBundlesWithOptions(shared_ptr<DescribeBundlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBundlesResponse(doRPCRequest(make_shared<string>("DescribeBundles"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBundlesResponse Alibabacloud_Ecd20200930::Client::describeBundles(shared_ptr<DescribeBundlesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBundlesWithOptions(request, runtime);
}

DescribeCensResponse Alibabacloud_Ecd20200930::Client::describeCensWithOptions(shared_ptr<DescribeCensRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCensResponse(doRPCRequest(make_shared<string>("DescribeCens"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCensResponse Alibabacloud_Ecd20200930::Client::describeCens(shared_ptr<DescribeCensRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCensWithOptions(request, runtime);
}

DescribeClientEventsResponse Alibabacloud_Ecd20200930::Client::describeClientEventsWithOptions(shared_ptr<DescribeClientEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClientEventsResponse(doRPCRequest(make_shared<string>("DescribeClientEvents"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClientEventsResponse Alibabacloud_Ecd20200930::Client::describeClientEvents(shared_ptr<DescribeClientEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClientEventsWithOptions(request, runtime);
}

DescribeDesktopIdsByVulNamesResponse Alibabacloud_Ecd20200930::Client::describeDesktopIdsByVulNamesWithOptions(shared_ptr<DescribeDesktopIdsByVulNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDesktopIdsByVulNamesResponse(doRPCRequest(make_shared<string>("DescribeDesktopIdsByVulNames"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDesktopIdsByVulNamesResponse Alibabacloud_Ecd20200930::Client::describeDesktopIdsByVulNames(shared_ptr<DescribeDesktopIdsByVulNamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopIdsByVulNamesWithOptions(request, runtime);
}

DescribeDesktopPolicysResponse Alibabacloud_Ecd20200930::Client::describeDesktopPolicysWithOptions(shared_ptr<DescribeDesktopPolicysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDesktopPolicysResponse(doRPCRequest(make_shared<string>("DescribeDesktopPolicys"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDesktopPolicysResponse Alibabacloud_Ecd20200930::Client::describeDesktopPolicys(shared_ptr<DescribeDesktopPolicysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopPolicysWithOptions(request, runtime);
}

DescribeDesktopsResponse Alibabacloud_Ecd20200930::Client::describeDesktopsWithOptions(shared_ptr<DescribeDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDesktopsResponse(doRPCRequest(make_shared<string>("DescribeDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDesktopsResponse Alibabacloud_Ecd20200930::Client::describeDesktops(shared_ptr<DescribeDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopsWithOptions(request, runtime);
}

DescribeDesktopsInGroupResponse Alibabacloud_Ecd20200930::Client::describeDesktopsInGroupWithOptions(shared_ptr<DescribeDesktopsInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDesktopsInGroupResponse(doRPCRequest(make_shared<string>("DescribeDesktopsInGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDesktopsInGroupResponse Alibabacloud_Ecd20200930::Client::describeDesktopsInGroup(shared_ptr<DescribeDesktopsInGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopsInGroupWithOptions(request, runtime);
}

DescribeDesktopTypesResponse Alibabacloud_Ecd20200930::Client::describeDesktopTypesWithOptions(shared_ptr<DescribeDesktopTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDesktopTypesResponse(doRPCRequest(make_shared<string>("DescribeDesktopTypes"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDesktopTypesResponse Alibabacloud_Ecd20200930::Client::describeDesktopTypes(shared_ptr<DescribeDesktopTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopTypesWithOptions(request, runtime);
}

DescribeDirectoriesResponse Alibabacloud_Ecd20200930::Client::describeDirectoriesWithOptions(shared_ptr<DescribeDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDirectoriesResponse(doRPCRequest(make_shared<string>("DescribeDirectories"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDirectoriesResponse Alibabacloud_Ecd20200930::Client::describeDirectories(shared_ptr<DescribeDirectoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDirectoriesWithOptions(request, runtime);
}

DescribeFrontVulPatchListResponse Alibabacloud_Ecd20200930::Client::describeFrontVulPatchListWithOptions(shared_ptr<DescribeFrontVulPatchListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFrontVulPatchListResponse(doRPCRequest(make_shared<string>("DescribeFrontVulPatchList"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFrontVulPatchListResponse Alibabacloud_Ecd20200930::Client::describeFrontVulPatchList(shared_ptr<DescribeFrontVulPatchListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFrontVulPatchListWithOptions(request, runtime);
}

DescribeGroupedVulResponse Alibabacloud_Ecd20200930::Client::describeGroupedVulWithOptions(shared_ptr<DescribeGroupedVulRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupedVulResponse(doRPCRequest(make_shared<string>("DescribeGroupedVul"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupedVulResponse Alibabacloud_Ecd20200930::Client::describeGroupedVul(shared_ptr<DescribeGroupedVulRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupedVulWithOptions(request, runtime);
}

DescribeImagesResponse Alibabacloud_Ecd20200930::Client::describeImagesWithOptions(shared_ptr<DescribeImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeImagesResponse(doRPCRequest(make_shared<string>("DescribeImages"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImagesResponse Alibabacloud_Ecd20200930::Client::describeImages(shared_ptr<DescribeImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImagesWithOptions(request, runtime);
}

DescribeInvocationsResponse Alibabacloud_Ecd20200930::Client::describeInvocationsWithOptions(shared_ptr<DescribeInvocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInvocationsResponse(doRPCRequest(make_shared<string>("DescribeInvocations"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInvocationsResponse Alibabacloud_Ecd20200930::Client::describeInvocations(shared_ptr<DescribeInvocationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInvocationsWithOptions(request, runtime);
}

DescribeModificationPriceResponse Alibabacloud_Ecd20200930::Client::describeModificationPriceWithOptions(shared_ptr<DescribeModificationPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeModificationPriceResponse(doRPCRequest(make_shared<string>("DescribeModificationPrice"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeModificationPriceResponse Alibabacloud_Ecd20200930::Client::describeModificationPrice(shared_ptr<DescribeModificationPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeModificationPriceWithOptions(request, runtime);
}

DescribeNASFileSystemsResponse Alibabacloud_Ecd20200930::Client::describeNASFileSystemsWithOptions(shared_ptr<DescribeNASFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeNASFileSystemsResponse(doRPCRequest(make_shared<string>("DescribeNASFileSystems"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeNASFileSystemsResponse Alibabacloud_Ecd20200930::Client::describeNASFileSystems(shared_ptr<DescribeNASFileSystemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNASFileSystemsWithOptions(request, runtime);
}

DescribeNetworkPackagesResponse Alibabacloud_Ecd20200930::Client::describeNetworkPackagesWithOptions(shared_ptr<DescribeNetworkPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeNetworkPackagesResponse(doRPCRequest(make_shared<string>("DescribeNetworkPackages"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeNetworkPackagesResponse Alibabacloud_Ecd20200930::Client::describeNetworkPackages(shared_ptr<DescribeNetworkPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNetworkPackagesWithOptions(request, runtime);
}

DescribeOfficeSitesResponse Alibabacloud_Ecd20200930::Client::describeOfficeSitesWithOptions(shared_ptr<DescribeOfficeSitesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeOfficeSitesResponse(doRPCRequest(make_shared<string>("DescribeOfficeSites"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeOfficeSitesResponse Alibabacloud_Ecd20200930::Client::describeOfficeSites(shared_ptr<DescribeOfficeSitesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOfficeSitesWithOptions(request, runtime);
}

DescribePolicyGroupsResponse Alibabacloud_Ecd20200930::Client::describePolicyGroupsWithOptions(shared_ptr<DescribePolicyGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePolicyGroupsResponse(doRPCRequest(make_shared<string>("DescribePolicyGroups"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePolicyGroupsResponse Alibabacloud_Ecd20200930::Client::describePolicyGroups(shared_ptr<DescribePolicyGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolicyGroupsWithOptions(request, runtime);
}

DescribePostPaidDesktopBillsResponse Alibabacloud_Ecd20200930::Client::describePostPaidDesktopBillsWithOptions(shared_ptr<DescribePostPaidDesktopBillsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePostPaidDesktopBillsResponse(doRPCRequest(make_shared<string>("DescribePostPaidDesktopBills"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePostPaidDesktopBillsResponse Alibabacloud_Ecd20200930::Client::describePostPaidDesktopBills(shared_ptr<DescribePostPaidDesktopBillsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePostPaidDesktopBillsWithOptions(request, runtime);
}

DescribePriceResponse Alibabacloud_Ecd20200930::Client::describePriceWithOptions(shared_ptr<DescribePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePriceResponse(doRPCRequest(make_shared<string>("DescribePrice"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePriceResponse Alibabacloud_Ecd20200930::Client::describePrice(shared_ptr<DescribePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePriceWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Ecd20200930::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Ecd20200930::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeScaleStrategysResponse Alibabacloud_Ecd20200930::Client::describeScaleStrategysWithOptions(shared_ptr<DescribeScaleStrategysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScaleStrategysResponse(doRPCRequest(make_shared<string>("DescribeScaleStrategys"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScaleStrategysResponse Alibabacloud_Ecd20200930::Client::describeScaleStrategys(shared_ptr<DescribeScaleStrategysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScaleStrategysWithOptions(request, runtime);
}

DescribeScanTaskProgressResponse Alibabacloud_Ecd20200930::Client::describeScanTaskProgressWithOptions(shared_ptr<DescribeScanTaskProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScanTaskProgressResponse(doRPCRequest(make_shared<string>("DescribeScanTaskProgress"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScanTaskProgressResponse Alibabacloud_Ecd20200930::Client::describeScanTaskProgress(shared_ptr<DescribeScanTaskProgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScanTaskProgressWithOptions(request, runtime);
}

DescribeSecurityEventOperationsResponse Alibabacloud_Ecd20200930::Client::describeSecurityEventOperationsWithOptions(shared_ptr<DescribeSecurityEventOperationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityEventOperationsResponse(doRPCRequest(make_shared<string>("DescribeSecurityEventOperations"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityEventOperationsResponse Alibabacloud_Ecd20200930::Client::describeSecurityEventOperations(shared_ptr<DescribeSecurityEventOperationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityEventOperationsWithOptions(request, runtime);
}

DescribeSecurityEventOperationStatusResponse Alibabacloud_Ecd20200930::Client::describeSecurityEventOperationStatusWithOptions(shared_ptr<DescribeSecurityEventOperationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityEventOperationStatusResponse(doRPCRequest(make_shared<string>("DescribeSecurityEventOperationStatus"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityEventOperationStatusResponse Alibabacloud_Ecd20200930::Client::describeSecurityEventOperationStatus(shared_ptr<DescribeSecurityEventOperationStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityEventOperationStatusWithOptions(request, runtime);
}

DescribeSnapshotsResponse Alibabacloud_Ecd20200930::Client::describeSnapshotsWithOptions(shared_ptr<DescribeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSnapshotsResponse(doRPCRequest(make_shared<string>("DescribeSnapshots"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSnapshotsResponse Alibabacloud_Ecd20200930::Client::describeSnapshots(shared_ptr<DescribeSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnapshotsWithOptions(request, runtime);
}

DescribeSuspEventOverviewResponse Alibabacloud_Ecd20200930::Client::describeSuspEventOverviewWithOptions(shared_ptr<DescribeSuspEventOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSuspEventOverviewResponse(doRPCRequest(make_shared<string>("DescribeSuspEventOverview"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSuspEventOverviewResponse Alibabacloud_Ecd20200930::Client::describeSuspEventOverview(shared_ptr<DescribeSuspEventOverviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSuspEventOverviewWithOptions(request, runtime);
}

DescribeSuspEventQuaraFilesResponse Alibabacloud_Ecd20200930::Client::describeSuspEventQuaraFilesWithOptions(shared_ptr<DescribeSuspEventQuaraFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSuspEventQuaraFilesResponse(doRPCRequest(make_shared<string>("DescribeSuspEventQuaraFiles"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSuspEventQuaraFilesResponse Alibabacloud_Ecd20200930::Client::describeSuspEventQuaraFiles(shared_ptr<DescribeSuspEventQuaraFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSuspEventQuaraFilesWithOptions(request, runtime);
}

DescribeSuspEventsResponse Alibabacloud_Ecd20200930::Client::describeSuspEventsWithOptions(shared_ptr<DescribeSuspEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSuspEventsResponse(doRPCRequest(make_shared<string>("DescribeSuspEvents"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSuspEventsResponse Alibabacloud_Ecd20200930::Client::describeSuspEvents(shared_ptr<DescribeSuspEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSuspEventsWithOptions(request, runtime);
}

DescribeUserConnectionRecordsResponse Alibabacloud_Ecd20200930::Client::describeUserConnectionRecordsWithOptions(shared_ptr<DescribeUserConnectionRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserConnectionRecordsResponse(doRPCRequest(make_shared<string>("DescribeUserConnectionRecords"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserConnectionRecordsResponse Alibabacloud_Ecd20200930::Client::describeUserConnectionRecords(shared_ptr<DescribeUserConnectionRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserConnectionRecordsWithOptions(request, runtime);
}

DescribeUsersInGroupResponse Alibabacloud_Ecd20200930::Client::describeUsersInGroupWithOptions(shared_ptr<DescribeUsersInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUsersInGroupResponse(doRPCRequest(make_shared<string>("DescribeUsersInGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUsersInGroupResponse Alibabacloud_Ecd20200930::Client::describeUsersInGroup(shared_ptr<DescribeUsersInGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUsersInGroupWithOptions(request, runtime);
}

DescribeVirtualMFADevicesResponse Alibabacloud_Ecd20200930::Client::describeVirtualMFADevicesWithOptions(shared_ptr<DescribeVirtualMFADevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVirtualMFADevicesResponse(doRPCRequest(make_shared<string>("DescribeVirtualMFADevices"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVirtualMFADevicesResponse Alibabacloud_Ecd20200930::Client::describeVirtualMFADevices(shared_ptr<DescribeVirtualMFADevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVirtualMFADevicesWithOptions(request, runtime);
}

DescribeVulDetailsResponse Alibabacloud_Ecd20200930::Client::describeVulDetailsWithOptions(shared_ptr<DescribeVulDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVulDetailsResponse(doRPCRequest(make_shared<string>("DescribeVulDetails"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVulDetailsResponse Alibabacloud_Ecd20200930::Client::describeVulDetails(shared_ptr<DescribeVulDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVulDetailsWithOptions(request, runtime);
}

DescribeVulListResponse Alibabacloud_Ecd20200930::Client::describeVulListWithOptions(shared_ptr<DescribeVulListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVulListResponse(doRPCRequest(make_shared<string>("DescribeVulList"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVulListResponse Alibabacloud_Ecd20200930::Client::describeVulList(shared_ptr<DescribeVulListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVulListWithOptions(request, runtime);
}

DescribeVulOverviewResponse Alibabacloud_Ecd20200930::Client::describeVulOverviewWithOptions(shared_ptr<DescribeVulOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVulOverviewResponse(doRPCRequest(make_shared<string>("DescribeVulOverview"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVulOverviewResponse Alibabacloud_Ecd20200930::Client::describeVulOverview(shared_ptr<DescribeVulOverviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVulOverviewWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_Ecd20200930::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeZonesResponse(doRPCRequest(make_shared<string>("DescribeZones"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeZonesResponse Alibabacloud_Ecd20200930::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

DetachCenResponse Alibabacloud_Ecd20200930::Client::detachCenWithOptions(shared_ptr<DetachCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachCenResponse(doRPCRequest(make_shared<string>("DetachCen"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachCenResponse Alibabacloud_Ecd20200930::Client::detachCen(shared_ptr<DetachCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachCenWithOptions(request, runtime);
}

DoCheckResourceResponse Alibabacloud_Ecd20200930::Client::doCheckResourceWithOptions(shared_ptr<DoCheckResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DoCheckResourceResponse(doRPCRequest(make_shared<string>("DoCheckResource"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DoCheckResourceResponse Alibabacloud_Ecd20200930::Client::doCheckResource(shared_ptr<DoCheckResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return doCheckResourceWithOptions(request, runtime);
}

DoLogicalDeleteResourceResponse Alibabacloud_Ecd20200930::Client::doLogicalDeleteResourceWithOptions(shared_ptr<DoLogicalDeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DoLogicalDeleteResourceResponse(doRPCRequest(make_shared<string>("DoLogicalDeleteResource"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DoLogicalDeleteResourceResponse Alibabacloud_Ecd20200930::Client::doLogicalDeleteResource(shared_ptr<DoLogicalDeleteResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return doLogicalDeleteResourceWithOptions(request, runtime);
}

DoPhysicalDeleteResourceResponse Alibabacloud_Ecd20200930::Client::doPhysicalDeleteResourceWithOptions(shared_ptr<DoPhysicalDeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DoPhysicalDeleteResourceResponse(doRPCRequest(make_shared<string>("DoPhysicalDeleteResource"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DoPhysicalDeleteResourceResponse Alibabacloud_Ecd20200930::Client::doPhysicalDeleteResource(shared_ptr<DoPhysicalDeleteResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return doPhysicalDeleteResourceWithOptions(request, runtime);
}

GetConnectionTicketResponse Alibabacloud_Ecd20200930::Client::getConnectionTicketWithOptions(shared_ptr<GetConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetConnectionTicketResponse(doRPCRequest(make_shared<string>("GetConnectionTicket"), make_shared<string>("2020-09-30"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetConnectionTicketResponse Alibabacloud_Ecd20200930::Client::getConnectionTicket(shared_ptr<GetConnectionTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConnectionTicketWithOptions(request, runtime);
}

GetDesktopGroupDetailResponse Alibabacloud_Ecd20200930::Client::getDesktopGroupDetailWithOptions(shared_ptr<GetDesktopGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDesktopGroupDetailResponse(doRPCRequest(make_shared<string>("GetDesktopGroupDetail"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDesktopGroupDetailResponse Alibabacloud_Ecd20200930::Client::getDesktopGroupDetail(shared_ptr<GetDesktopGroupDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDesktopGroupDetailWithOptions(request, runtime);
}

GetDesktopUsersResponse Alibabacloud_Ecd20200930::Client::getDesktopUsersWithOptions(shared_ptr<GetDesktopUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDesktopUsersResponse(doRPCRequest(make_shared<string>("GetDesktopUsers"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDesktopUsersResponse Alibabacloud_Ecd20200930::Client::getDesktopUsers(shared_ptr<GetDesktopUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDesktopUsersWithOptions(request, runtime);
}

GetDirectorySsoStatusResponse Alibabacloud_Ecd20200930::Client::getDirectorySsoStatusWithOptions(shared_ptr<GetDirectorySsoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDirectorySsoStatusResponse(doRPCRequest(make_shared<string>("GetDirectorySsoStatus"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDirectorySsoStatusResponse Alibabacloud_Ecd20200930::Client::getDirectorySsoStatus(shared_ptr<GetDirectorySsoStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDirectorySsoStatusWithOptions(request, runtime);
}

GetOfficeSiteSsoStatusResponse Alibabacloud_Ecd20200930::Client::getOfficeSiteSsoStatusWithOptions(shared_ptr<GetOfficeSiteSsoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOfficeSiteSsoStatusResponse(doRPCRequest(make_shared<string>("GetOfficeSiteSsoStatus"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOfficeSiteSsoStatusResponse Alibabacloud_Ecd20200930::Client::getOfficeSiteSsoStatus(shared_ptr<GetOfficeSiteSsoStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOfficeSiteSsoStatusWithOptions(request, runtime);
}

GetSpMetadataResponse Alibabacloud_Ecd20200930::Client::getSpMetadataWithOptions(shared_ptr<GetSpMetadataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSpMetadataResponse(doRPCRequest(make_shared<string>("GetSpMetadata"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSpMetadataResponse Alibabacloud_Ecd20200930::Client::getSpMetadata(shared_ptr<GetSpMetadataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSpMetadataWithOptions(request, runtime);
}

HandleSecurityEventsResponse Alibabacloud_Ecd20200930::Client::handleSecurityEventsWithOptions(shared_ptr<HandleSecurityEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HandleSecurityEventsResponse(doRPCRequest(make_shared<string>("HandleSecurityEvents"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HandleSecurityEventsResponse Alibabacloud_Ecd20200930::Client::handleSecurityEvents(shared_ptr<HandleSecurityEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return handleSecurityEventsWithOptions(request, runtime);
}

ListDirectoryUsersResponse Alibabacloud_Ecd20200930::Client::listDirectoryUsersWithOptions(shared_ptr<ListDirectoryUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDirectoryUsersResponse(doRPCRequest(make_shared<string>("ListDirectoryUsers"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDirectoryUsersResponse Alibabacloud_Ecd20200930::Client::listDirectoryUsers(shared_ptr<ListDirectoryUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDirectoryUsersWithOptions(request, runtime);
}

ListOfficeSiteOverviewResponse Alibabacloud_Ecd20200930::Client::listOfficeSiteOverviewWithOptions(shared_ptr<ListOfficeSiteOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOfficeSiteOverviewResponse(doRPCRequest(make_shared<string>("ListOfficeSiteOverview"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOfficeSiteOverviewResponse Alibabacloud_Ecd20200930::Client::listOfficeSiteOverview(shared_ptr<ListOfficeSiteOverviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOfficeSiteOverviewWithOptions(request, runtime);
}

ListOfficeSiteUsersResponse Alibabacloud_Ecd20200930::Client::listOfficeSiteUsersWithOptions(shared_ptr<ListOfficeSiteUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOfficeSiteUsersResponse(doRPCRequest(make_shared<string>("ListOfficeSiteUsers"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOfficeSiteUsersResponse Alibabacloud_Ecd20200930::Client::listOfficeSiteUsers(shared_ptr<ListOfficeSiteUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOfficeSiteUsersWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Ecd20200930::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Ecd20200930::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

LockVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::lockVirtualMFADeviceWithOptions(shared_ptr<LockVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return LockVirtualMFADeviceResponse(doRPCRequest(make_shared<string>("LockVirtualMFADevice"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

LockVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::lockVirtualMFADevice(shared_ptr<LockVirtualMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockVirtualMFADeviceWithOptions(request, runtime);
}

ModifyADConnectorDirectoryResponse Alibabacloud_Ecd20200930::Client::modifyADConnectorDirectoryWithOptions(shared_ptr<ModifyADConnectorDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyADConnectorDirectoryResponse(doRPCRequest(make_shared<string>("ModifyADConnectorDirectory"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyADConnectorDirectoryResponse Alibabacloud_Ecd20200930::Client::modifyADConnectorDirectory(shared_ptr<ModifyADConnectorDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyADConnectorDirectoryWithOptions(request, runtime);
}

ModifyADConnectorOfficeSiteResponse Alibabacloud_Ecd20200930::Client::modifyADConnectorOfficeSiteWithOptions(shared_ptr<ModifyADConnectorOfficeSiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyADConnectorOfficeSiteResponse(doRPCRequest(make_shared<string>("ModifyADConnectorOfficeSite"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyADConnectorOfficeSiteResponse Alibabacloud_Ecd20200930::Client::modifyADConnectorOfficeSite(shared_ptr<ModifyADConnectorOfficeSiteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyADConnectorOfficeSiteWithOptions(request, runtime);
}

ModifyBundleResponse Alibabacloud_Ecd20200930::Client::modifyBundleWithOptions(shared_ptr<ModifyBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyBundleResponse(doRPCRequest(make_shared<string>("ModifyBundle"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyBundleResponse Alibabacloud_Ecd20200930::Client::modifyBundle(shared_ptr<ModifyBundleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBundleWithOptions(request, runtime);
}

ModifyDesktopGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopGroupWithOptions(shared_ptr<ModifyDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDesktopGroupResponse(doRPCRequest(make_shared<string>("ModifyDesktopGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDesktopGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopGroup(shared_ptr<ModifyDesktopGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopGroupWithOptions(request, runtime);
}

ModifyDesktopNameResponse Alibabacloud_Ecd20200930::Client::modifyDesktopNameWithOptions(shared_ptr<ModifyDesktopNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDesktopNameResponse(doRPCRequest(make_shared<string>("ModifyDesktopName"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDesktopNameResponse Alibabacloud_Ecd20200930::Client::modifyDesktopName(shared_ptr<ModifyDesktopNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopNameWithOptions(request, runtime);
}

ModifyDesktopPolicysResponse Alibabacloud_Ecd20200930::Client::modifyDesktopPolicysWithOptions(shared_ptr<ModifyDesktopPolicysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDesktopPolicysResponse(doRPCRequest(make_shared<string>("ModifyDesktopPolicys"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDesktopPolicysResponse Alibabacloud_Ecd20200930::Client::modifyDesktopPolicys(shared_ptr<ModifyDesktopPolicysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopPolicysWithOptions(request, runtime);
}

ModifyDesktopSpecResponse Alibabacloud_Ecd20200930::Client::modifyDesktopSpecWithOptions(shared_ptr<ModifyDesktopSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDesktopSpecResponse(doRPCRequest(make_shared<string>("ModifyDesktopSpec"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDesktopSpecResponse Alibabacloud_Ecd20200930::Client::modifyDesktopSpec(shared_ptr<ModifyDesktopSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopSpecWithOptions(request, runtime);
}

ModifyDesktopsPolicyGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopsPolicyGroupWithOptions(shared_ptr<ModifyDesktopsPolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDesktopsPolicyGroupResponse(doRPCRequest(make_shared<string>("ModifyDesktopsPolicyGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDesktopsPolicyGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopsPolicyGroup(shared_ptr<ModifyDesktopsPolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopsPolicyGroupWithOptions(request, runtime);
}

ModifyEntitlementResponse Alibabacloud_Ecd20200930::Client::modifyEntitlementWithOptions(shared_ptr<ModifyEntitlementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyEntitlementResponse(doRPCRequest(make_shared<string>("ModifyEntitlement"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyEntitlementResponse Alibabacloud_Ecd20200930::Client::modifyEntitlement(shared_ptr<ModifyEntitlementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEntitlementWithOptions(request, runtime);
}

ModifyImageAttributeResponse Alibabacloud_Ecd20200930::Client::modifyImageAttributeWithOptions(shared_ptr<ModifyImageAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyImageAttributeResponse(doRPCRequest(make_shared<string>("ModifyImageAttribute"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyImageAttributeResponse Alibabacloud_Ecd20200930::Client::modifyImageAttribute(shared_ptr<ModifyImageAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyImageAttributeWithOptions(request, runtime);
}

ModifyNASDefaultMountTargetResponse Alibabacloud_Ecd20200930::Client::modifyNASDefaultMountTargetWithOptions(shared_ptr<ModifyNASDefaultMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyNASDefaultMountTargetResponse(doRPCRequest(make_shared<string>("ModifyNASDefaultMountTarget"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyNASDefaultMountTargetResponse Alibabacloud_Ecd20200930::Client::modifyNASDefaultMountTarget(shared_ptr<ModifyNASDefaultMountTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNASDefaultMountTargetWithOptions(request, runtime);
}

ModifyNetworkPackageResponse Alibabacloud_Ecd20200930::Client::modifyNetworkPackageWithOptions(shared_ptr<ModifyNetworkPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyNetworkPackageResponse(doRPCRequest(make_shared<string>("ModifyNetworkPackage"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyNetworkPackageResponse Alibabacloud_Ecd20200930::Client::modifyNetworkPackage(shared_ptr<ModifyNetworkPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNetworkPackageWithOptions(request, runtime);
}

ModifyNetworkPackageEnabledResponse Alibabacloud_Ecd20200930::Client::modifyNetworkPackageEnabledWithOptions(shared_ptr<ModifyNetworkPackageEnabledRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyNetworkPackageEnabledResponse(doRPCRequest(make_shared<string>("ModifyNetworkPackageEnabled"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyNetworkPackageEnabledResponse Alibabacloud_Ecd20200930::Client::modifyNetworkPackageEnabled(shared_ptr<ModifyNetworkPackageEnabledRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNetworkPackageEnabledWithOptions(request, runtime);
}

ModifyOfficeSiteAttributeResponse Alibabacloud_Ecd20200930::Client::modifyOfficeSiteAttributeWithOptions(shared_ptr<ModifyOfficeSiteAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyOfficeSiteAttributeResponse(doRPCRequest(make_shared<string>("ModifyOfficeSiteAttribute"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyOfficeSiteAttributeResponse Alibabacloud_Ecd20200930::Client::modifyOfficeSiteAttribute(shared_ptr<ModifyOfficeSiteAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyOfficeSiteAttributeWithOptions(request, runtime);
}

ModifyOfficeSiteCrossDesktopAccessResponse Alibabacloud_Ecd20200930::Client::modifyOfficeSiteCrossDesktopAccessWithOptions(shared_ptr<ModifyOfficeSiteCrossDesktopAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyOfficeSiteCrossDesktopAccessResponse(doRPCRequest(make_shared<string>("ModifyOfficeSiteCrossDesktopAccess"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyOfficeSiteCrossDesktopAccessResponse Alibabacloud_Ecd20200930::Client::modifyOfficeSiteCrossDesktopAccess(shared_ptr<ModifyOfficeSiteCrossDesktopAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyOfficeSiteCrossDesktopAccessWithOptions(request, runtime);
}

ModifyOfficeSiteMfaEnabledResponse Alibabacloud_Ecd20200930::Client::modifyOfficeSiteMfaEnabledWithOptions(shared_ptr<ModifyOfficeSiteMfaEnabledRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyOfficeSiteMfaEnabledResponse(doRPCRequest(make_shared<string>("ModifyOfficeSiteMfaEnabled"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyOfficeSiteMfaEnabledResponse Alibabacloud_Ecd20200930::Client::modifyOfficeSiteMfaEnabled(shared_ptr<ModifyOfficeSiteMfaEnabledRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyOfficeSiteMfaEnabledWithOptions(request, runtime);
}

ModifyOperateVulResponse Alibabacloud_Ecd20200930::Client::modifyOperateVulWithOptions(shared_ptr<ModifyOperateVulRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyOperateVulResponse(doRPCRequest(make_shared<string>("ModifyOperateVul"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyOperateVulResponse Alibabacloud_Ecd20200930::Client::modifyOperateVul(shared_ptr<ModifyOperateVulRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyOperateVulWithOptions(request, runtime);
}

ModifyPolicyGroupResponse Alibabacloud_Ecd20200930::Client::modifyPolicyGroupWithOptions(shared_ptr<ModifyPolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPolicyGroupResponse(doRPCRequest(make_shared<string>("ModifyPolicyGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPolicyGroupResponse Alibabacloud_Ecd20200930::Client::modifyPolicyGroup(shared_ptr<ModifyPolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPolicyGroupWithOptions(request, runtime);
}

ModifyScaleStrategyResponse Alibabacloud_Ecd20200930::Client::modifyScaleStrategyWithOptions(shared_ptr<ModifyScaleStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyScaleStrategyResponse(doRPCRequest(make_shared<string>("ModifyScaleStrategy"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyScaleStrategyResponse Alibabacloud_Ecd20200930::Client::modifyScaleStrategy(shared_ptr<ModifyScaleStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScaleStrategyWithOptions(request, runtime);
}

ModifyUserToDesktopGroupResponse Alibabacloud_Ecd20200930::Client::modifyUserToDesktopGroupWithOptions(shared_ptr<ModifyUserToDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyUserToDesktopGroupResponse(doRPCRequest(make_shared<string>("ModifyUserToDesktopGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyUserToDesktopGroupResponse Alibabacloud_Ecd20200930::Client::modifyUserToDesktopGroup(shared_ptr<ModifyUserToDesktopGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserToDesktopGroupWithOptions(request, runtime);
}

OperateVulsResponse Alibabacloud_Ecd20200930::Client::operateVulsWithOptions(shared_ptr<OperateVulsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OperateVulsResponse(doRPCRequest(make_shared<string>("OperateVuls"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OperateVulsResponse Alibabacloud_Ecd20200930::Client::operateVuls(shared_ptr<OperateVulsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateVulsWithOptions(request, runtime);
}

PayOrderCallbackResponse Alibabacloud_Ecd20200930::Client::payOrderCallbackWithOptions(shared_ptr<PayOrderCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PayOrderCallbackResponse(doRPCRequest(make_shared<string>("PayOrderCallback"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PayOrderCallbackResponse Alibabacloud_Ecd20200930::Client::payOrderCallback(shared_ptr<PayOrderCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return payOrderCallbackWithOptions(request, runtime);
}

RebootDesktopsResponse Alibabacloud_Ecd20200930::Client::rebootDesktopsWithOptions(shared_ptr<RebootDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RebootDesktopsResponse(doRPCRequest(make_shared<string>("RebootDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RebootDesktopsResponse Alibabacloud_Ecd20200930::Client::rebootDesktops(shared_ptr<RebootDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebootDesktopsWithOptions(request, runtime);
}

RebuildDesktopsResponse Alibabacloud_Ecd20200930::Client::rebuildDesktopsWithOptions(shared_ptr<RebuildDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RebuildDesktopsResponse(doRPCRequest(make_shared<string>("RebuildDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RebuildDesktopsResponse Alibabacloud_Ecd20200930::Client::rebuildDesktops(shared_ptr<RebuildDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebuildDesktopsWithOptions(request, runtime);
}

RecreateDesktopGroupResponse Alibabacloud_Ecd20200930::Client::recreateDesktopGroupWithOptions(shared_ptr<RecreateDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RecreateDesktopGroupResponse(doRPCRequest(make_shared<string>("RecreateDesktopGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecreateDesktopGroupResponse Alibabacloud_Ecd20200930::Client::recreateDesktopGroup(shared_ptr<RecreateDesktopGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recreateDesktopGroupWithOptions(request, runtime);
}

RemoveUserFromDesktopGroupResponse Alibabacloud_Ecd20200930::Client::removeUserFromDesktopGroupWithOptions(shared_ptr<RemoveUserFromDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveUserFromDesktopGroupResponse(doRPCRequest(make_shared<string>("RemoveUserFromDesktopGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveUserFromDesktopGroupResponse Alibabacloud_Ecd20200930::Client::removeUserFromDesktopGroup(shared_ptr<RemoveUserFromDesktopGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUserFromDesktopGroupWithOptions(request, runtime);
}

RenewDesktopsResponse Alibabacloud_Ecd20200930::Client::renewDesktopsWithOptions(shared_ptr<RenewDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenewDesktopsResponse(doRPCRequest(make_shared<string>("RenewDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenewDesktopsResponse Alibabacloud_Ecd20200930::Client::renewDesktops(shared_ptr<RenewDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewDesktopsWithOptions(request, runtime);
}

ResetNASDefaultMountTargetResponse Alibabacloud_Ecd20200930::Client::resetNASDefaultMountTargetWithOptions(shared_ptr<ResetNASDefaultMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetNASDefaultMountTargetResponse(doRPCRequest(make_shared<string>("ResetNASDefaultMountTarget"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetNASDefaultMountTargetResponse Alibabacloud_Ecd20200930::Client::resetNASDefaultMountTarget(shared_ptr<ResetNASDefaultMountTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetNASDefaultMountTargetWithOptions(request, runtime);
}

ResetSnapshotResponse Alibabacloud_Ecd20200930::Client::resetSnapshotWithOptions(shared_ptr<ResetSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetSnapshotResponse(doRPCRequest(make_shared<string>("ResetSnapshot"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetSnapshotResponse Alibabacloud_Ecd20200930::Client::resetSnapshot(shared_ptr<ResetSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetSnapshotWithOptions(request, runtime);
}

RollbackSuspEventQuaraFileResponse Alibabacloud_Ecd20200930::Client::rollbackSuspEventQuaraFileWithOptions(shared_ptr<RollbackSuspEventQuaraFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RollbackSuspEventQuaraFileResponse(doRPCRequest(make_shared<string>("RollbackSuspEventQuaraFile"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RollbackSuspEventQuaraFileResponse Alibabacloud_Ecd20200930::Client::rollbackSuspEventQuaraFile(shared_ptr<RollbackSuspEventQuaraFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackSuspEventQuaraFileWithOptions(request, runtime);
}

RunCommandResponse Alibabacloud_Ecd20200930::Client::runCommandWithOptions(shared_ptr<RunCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RunCommandResponse(doRPCRequest(make_shared<string>("RunCommand"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RunCommandResponse Alibabacloud_Ecd20200930::Client::runCommand(shared_ptr<RunCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCommandWithOptions(request, runtime);
}

SetDirectorySsoStatusResponse Alibabacloud_Ecd20200930::Client::setDirectorySsoStatusWithOptions(shared_ptr<SetDirectorySsoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDirectorySsoStatusResponse(doRPCRequest(make_shared<string>("SetDirectorySsoStatus"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDirectorySsoStatusResponse Alibabacloud_Ecd20200930::Client::setDirectorySsoStatus(shared_ptr<SetDirectorySsoStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDirectorySsoStatusWithOptions(request, runtime);
}

SetIdpMetadataResponse Alibabacloud_Ecd20200930::Client::setIdpMetadataWithOptions(shared_ptr<SetIdpMetadataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetIdpMetadataResponse(doRPCRequest(make_shared<string>("SetIdpMetadata"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetIdpMetadataResponse Alibabacloud_Ecd20200930::Client::setIdpMetadata(shared_ptr<SetIdpMetadataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setIdpMetadataWithOptions(request, runtime);
}

SetOfficeSiteSsoStatusResponse Alibabacloud_Ecd20200930::Client::setOfficeSiteSsoStatusWithOptions(shared_ptr<SetOfficeSiteSsoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetOfficeSiteSsoStatusResponse(doRPCRequest(make_shared<string>("SetOfficeSiteSsoStatus"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetOfficeSiteSsoStatusResponse Alibabacloud_Ecd20200930::Client::setOfficeSiteSsoStatus(shared_ptr<SetOfficeSiteSsoStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setOfficeSiteSsoStatusWithOptions(request, runtime);
}

StartDesktopsResponse Alibabacloud_Ecd20200930::Client::startDesktopsWithOptions(shared_ptr<StartDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartDesktopsResponse(doRPCRequest(make_shared<string>("StartDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartDesktopsResponse Alibabacloud_Ecd20200930::Client::startDesktops(shared_ptr<StartDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDesktopsWithOptions(request, runtime);
}

StartVirusScanTaskResponse Alibabacloud_Ecd20200930::Client::startVirusScanTaskWithOptions(shared_ptr<StartVirusScanTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartVirusScanTaskResponse(doRPCRequest(make_shared<string>("StartVirusScanTask"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartVirusScanTaskResponse Alibabacloud_Ecd20200930::Client::startVirusScanTask(shared_ptr<StartVirusScanTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startVirusScanTaskWithOptions(request, runtime);
}

StopDesktopsResponse Alibabacloud_Ecd20200930::Client::stopDesktopsWithOptions(shared_ptr<StopDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopDesktopsResponse(doRPCRequest(make_shared<string>("StopDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopDesktopsResponse Alibabacloud_Ecd20200930::Client::stopDesktops(shared_ptr<StopDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDesktopsWithOptions(request, runtime);
}

StopInvocationResponse Alibabacloud_Ecd20200930::Client::stopInvocationWithOptions(shared_ptr<StopInvocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopInvocationResponse(doRPCRequest(make_shared<string>("StopInvocation"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopInvocationResponse Alibabacloud_Ecd20200930::Client::stopInvocation(shared_ptr<StopInvocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInvocationWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Ecd20200930::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Ecd20200930::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnlockVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::unlockVirtualMFADeviceWithOptions(shared_ptr<UnlockVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnlockVirtualMFADeviceResponse(doRPCRequest(make_shared<string>("UnlockVirtualMFADevice"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnlockVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::unlockVirtualMFADevice(shared_ptr<UnlockVirtualMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockVirtualMFADeviceWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Ecd20200930::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Ecd20200930::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

