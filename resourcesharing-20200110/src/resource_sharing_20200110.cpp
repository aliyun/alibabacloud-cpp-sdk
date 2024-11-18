// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/resource_sharing_20200110.hpp>
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

using namespace Alibabacloud_ResourceSharing20200110;

Alibabacloud_ResourceSharing20200110::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("resourcesharing"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ResourceSharing20200110::Client::getEndpoint(shared_ptr<string> productId,
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

AcceptResourceShareInvitationResponse Alibabacloud_ResourceSharing20200110::Client::acceptResourceShareInvitationWithOptions(shared_ptr<AcceptResourceShareInvitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceShareInvitationId)) {
    query->insert(pair<string, string>("ResourceShareInvitationId", *request->resourceShareInvitationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AcceptResourceShareInvitation"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AcceptResourceShareInvitationResponse(callApi(params, req, runtime));
}

AcceptResourceShareInvitationResponse Alibabacloud_ResourceSharing20200110::Client::acceptResourceShareInvitation(shared_ptr<AcceptResourceShareInvitationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return acceptResourceShareInvitationWithOptions(request, runtime);
}

AssociateResourceShareResponse Alibabacloud_ResourceSharing20200110::Client::associateResourceShareWithOptions(shared_ptr<AssociateResourceShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->permissionNames)) {
    query->insert(pair<string, vector<string>>("PermissionNames", *request->permissionNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceShareId)) {
    query->insert(pair<string, string>("ResourceShareId", *request->resourceShareId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AssociateResourceShareRequestResources>>(request->resources)) {
    query->insert(pair<string, vector<AssociateResourceShareRequestResources>>("Resources", *request->resources));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AssociateResourceShareRequestTargetProperties>>(request->targetProperties)) {
    query->insert(pair<string, vector<AssociateResourceShareRequestTargetProperties>>("TargetProperties", *request->targetProperties));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->targets)) {
    query->insert(pair<string, vector<string>>("Targets", *request->targets));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateResourceShare"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateResourceShareResponse(callApi(params, req, runtime));
}

AssociateResourceShareResponse Alibabacloud_ResourceSharing20200110::Client::associateResourceShare(shared_ptr<AssociateResourceShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateResourceShareWithOptions(request, runtime);
}

AssociateResourceSharePermissionResponse Alibabacloud_ResourceSharing20200110::Client::associateResourceSharePermissionWithOptions(shared_ptr<AssociateResourceSharePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionName)) {
    query->insert(pair<string, string>("PermissionName", *request->permissionName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->replace)) {
    query->insert(pair<string, bool>("Replace", *request->replace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceShareId)) {
    query->insert(pair<string, string>("ResourceShareId", *request->resourceShareId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateResourceSharePermission"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateResourceSharePermissionResponse(callApi(params, req, runtime));
}

AssociateResourceSharePermissionResponse Alibabacloud_ResourceSharing20200110::Client::associateResourceSharePermission(shared_ptr<AssociateResourceSharePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateResourceSharePermissionWithOptions(request, runtime);
}

ChangeResourceGroupResponse Alibabacloud_ResourceSharing20200110::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeResourceGroupResponse(callApi(params, req, runtime));
}

ChangeResourceGroupResponse Alibabacloud_ResourceSharing20200110::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResourceGroupWithOptions(request, runtime);
}

CheckSharingWithResourceDirectoryStatusResponse Alibabacloud_ResourceSharing20200110::Client::checkSharingWithResourceDirectoryStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckSharingWithResourceDirectoryStatus"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckSharingWithResourceDirectoryStatusResponse(callApi(params, req, runtime));
}

CheckSharingWithResourceDirectoryStatusResponse Alibabacloud_ResourceSharing20200110::Client::checkSharingWithResourceDirectoryStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkSharingWithResourceDirectoryStatusWithOptions(runtime);
}

CreateResourceShareResponse Alibabacloud_ResourceSharing20200110::Client::createResourceShareWithOptions(shared_ptr<CreateResourceShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowExternalTargets)) {
    query->insert(pair<string, bool>("AllowExternalTargets", *request->allowExternalTargets));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->permissionNames)) {
    query->insert(pair<string, vector<string>>("PermissionNames", *request->permissionNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceShareName)) {
    query->insert(pair<string, string>("ResourceShareName", *request->resourceShareName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateResourceShareRequestResources>>(request->resources)) {
    query->insert(pair<string, vector<CreateResourceShareRequestResources>>("Resources", *request->resources));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateResourceShareRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateResourceShareRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateResourceShareRequestTargetProperties>>(request->targetProperties)) {
    query->insert(pair<string, vector<CreateResourceShareRequestTargetProperties>>("TargetProperties", *request->targetProperties));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->targets)) {
    query->insert(pair<string, vector<string>>("Targets", *request->targets));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceShare"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceShareResponse(callApi(params, req, runtime));
}

CreateResourceShareResponse Alibabacloud_ResourceSharing20200110::Client::createResourceShare(shared_ptr<CreateResourceShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourceShareWithOptions(request, runtime);
}

DeleteResourceShareResponse Alibabacloud_ResourceSharing20200110::Client::deleteResourceShareWithOptions(shared_ptr<DeleteResourceShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceShareId)) {
    query->insert(pair<string, string>("ResourceShareId", *request->resourceShareId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceShare"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceShareResponse(callApi(params, req, runtime));
}

DeleteResourceShareResponse Alibabacloud_ResourceSharing20200110::Client::deleteResourceShare(shared_ptr<DeleteResourceShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteResourceShareWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_ResourceSharing20200110::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_ResourceSharing20200110::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DisassociateResourceShareResponse Alibabacloud_ResourceSharing20200110::Client::disassociateResourceShareWithOptions(shared_ptr<DisassociateResourceShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwner)) {
    query->insert(pair<string, string>("ResourceOwner", *request->resourceOwner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceShareId)) {
    query->insert(pair<string, string>("ResourceShareId", *request->resourceShareId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DisassociateResourceShareRequestResources>>(request->resources)) {
    query->insert(pair<string, vector<DisassociateResourceShareRequestResources>>("Resources", *request->resources));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->targets)) {
    query->insert(pair<string, vector<string>>("Targets", *request->targets));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisassociateResourceShare"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisassociateResourceShareResponse(callApi(params, req, runtime));
}

DisassociateResourceShareResponse Alibabacloud_ResourceSharing20200110::Client::disassociateResourceShare(shared_ptr<DisassociateResourceShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disassociateResourceShareWithOptions(request, runtime);
}

DisassociateResourceSharePermissionResponse Alibabacloud_ResourceSharing20200110::Client::disassociateResourceSharePermissionWithOptions(shared_ptr<DisassociateResourceSharePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionName)) {
    query->insert(pair<string, string>("PermissionName", *request->permissionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceShareId)) {
    query->insert(pair<string, string>("ResourceShareId", *request->resourceShareId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisassociateResourceSharePermission"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisassociateResourceSharePermissionResponse(callApi(params, req, runtime));
}

DisassociateResourceSharePermissionResponse Alibabacloud_ResourceSharing20200110::Client::disassociateResourceSharePermission(shared_ptr<DisassociateResourceSharePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disassociateResourceSharePermissionWithOptions(request, runtime);
}

EnableSharingWithResourceDirectoryResponse Alibabacloud_ResourceSharing20200110::Client::enableSharingWithResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableSharingWithResourceDirectory"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableSharingWithResourceDirectoryResponse(callApi(params, req, runtime));
}

EnableSharingWithResourceDirectoryResponse Alibabacloud_ResourceSharing20200110::Client::enableSharingWithResourceDirectory() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableSharingWithResourceDirectoryWithOptions(runtime);
}

GetPermissionResponse Alibabacloud_ResourceSharing20200110::Client::getPermissionWithOptions(shared_ptr<GetPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionName)) {
    query->insert(pair<string, string>("PermissionName", *request->permissionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionVersion)) {
    query->insert(pair<string, string>("PermissionVersion", *request->permissionVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPermission"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPermissionResponse(callApi(params, req, runtime));
}

GetPermissionResponse Alibabacloud_ResourceSharing20200110::Client::getPermission(shared_ptr<GetPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPermissionWithOptions(request, runtime);
}

ListPermissionVersionsResponse Alibabacloud_ResourceSharing20200110::Client::listPermissionVersionsWithOptions(shared_ptr<ListPermissionVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionName)) {
    query->insert(pair<string, string>("PermissionName", *request->permissionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPermissionVersions"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPermissionVersionsResponse(callApi(params, req, runtime));
}

ListPermissionVersionsResponse Alibabacloud_ResourceSharing20200110::Client::listPermissionVersions(shared_ptr<ListPermissionVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPermissionVersionsWithOptions(request, runtime);
}

ListPermissionsResponse Alibabacloud_ResourceSharing20200110::Client::listPermissionsWithOptions(shared_ptr<ListPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPermissions"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPermissionsResponse(callApi(params, req, runtime));
}

ListPermissionsResponse Alibabacloud_ResourceSharing20200110::Client::listPermissions(shared_ptr<ListPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPermissionsWithOptions(request, runtime);
}

ListResourceShareAssociationsResponse Alibabacloud_ResourceSharing20200110::Client::listResourceShareAssociationsWithOptions(shared_ptr<ListResourceShareAssociationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->associationStatus)) {
    query->insert(pair<string, string>("AssociationStatus", *request->associationStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->associationType)) {
    query->insert(pair<string, string>("AssociationType", *request->associationType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceShareIds)) {
    query->insert(pair<string, vector<string>>("ResourceShareIds", *request->resourceShareIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceShareAssociations"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceShareAssociationsResponse(callApi(params, req, runtime));
}

ListResourceShareAssociationsResponse Alibabacloud_ResourceSharing20200110::Client::listResourceShareAssociations(shared_ptr<ListResourceShareAssociationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceShareAssociationsWithOptions(request, runtime);
}

ListResourceShareInvitationsResponse Alibabacloud_ResourceSharing20200110::Client::listResourceShareInvitationsWithOptions(shared_ptr<ListResourceShareInvitationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceShareIds)) {
    query->insert(pair<string, vector<string>>("ResourceShareIds", *request->resourceShareIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceShareInvitationIds)) {
    query->insert(pair<string, vector<string>>("ResourceShareInvitationIds", *request->resourceShareInvitationIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceShareInvitations"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceShareInvitationsResponse(callApi(params, req, runtime));
}

ListResourceShareInvitationsResponse Alibabacloud_ResourceSharing20200110::Client::listResourceShareInvitations(shared_ptr<ListResourceShareInvitationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceShareInvitationsWithOptions(request, runtime);
}

ListResourceSharePermissionsResponse Alibabacloud_ResourceSharing20200110::Client::listResourceSharePermissionsWithOptions(shared_ptr<ListResourceSharePermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwner)) {
    query->insert(pair<string, string>("ResourceOwner", *request->resourceOwner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceShareId)) {
    query->insert(pair<string, string>("ResourceShareId", *request->resourceShareId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceSharePermissions"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceSharePermissionsResponse(callApi(params, req, runtime));
}

ListResourceSharePermissionsResponse Alibabacloud_ResourceSharing20200110::Client::listResourceSharePermissions(shared_ptr<ListResourceSharePermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceSharePermissionsWithOptions(request, runtime);
}

ListResourceSharesResponse Alibabacloud_ResourceSharing20200110::Client::listResourceSharesWithOptions(shared_ptr<ListResourceSharesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionName)) {
    query->insert(pair<string, string>("PermissionName", *request->permissionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwner)) {
    query->insert(pair<string, string>("ResourceOwner", *request->resourceOwner));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceShareIds)) {
    query->insert(pair<string, vector<string>>("ResourceShareIds", *request->resourceShareIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceShareName)) {
    query->insert(pair<string, string>("ResourceShareName", *request->resourceShareName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceShareStatus)) {
    query->insert(pair<string, string>("ResourceShareStatus", *request->resourceShareStatus));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListResourceSharesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListResourceSharesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceShares"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceSharesResponse(callApi(params, req, runtime));
}

ListResourceSharesResponse Alibabacloud_ResourceSharing20200110::Client::listResourceShares(shared_ptr<ListResourceSharesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceSharesWithOptions(request, runtime);
}

ListSharedResourcesResponse Alibabacloud_ResourceSharing20200110::Client::listSharedResourcesWithOptions(shared_ptr<ListSharedResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    query->insert(pair<string, vector<string>>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwner)) {
    query->insert(pair<string, string>("ResourceOwner", *request->resourceOwner));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceShareIds)) {
    query->insert(pair<string, vector<string>>("ResourceShareIds", *request->resourceShareIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSharedResources"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSharedResourcesResponse(callApi(params, req, runtime));
}

ListSharedResourcesResponse Alibabacloud_ResourceSharing20200110::Client::listSharedResources(shared_ptr<ListSharedResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSharedResourcesWithOptions(request, runtime);
}

ListSharedTargetsResponse Alibabacloud_ResourceSharing20200110::Client::listSharedTargetsWithOptions(shared_ptr<ListSharedTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwner)) {
    query->insert(pair<string, string>("ResourceOwner", *request->resourceOwner));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceShareIds)) {
    query->insert(pair<string, vector<string>>("ResourceShareIds", *request->resourceShareIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->targets)) {
    query->insert(pair<string, vector<string>>("Targets", *request->targets));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSharedTargets"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSharedTargetsResponse(callApi(params, req, runtime));
}

ListSharedTargetsResponse Alibabacloud_ResourceSharing20200110::Client::listSharedTargets(shared_ptr<ListSharedTargetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSharedTargetsWithOptions(request, runtime);
}

RejectResourceShareInvitationResponse Alibabacloud_ResourceSharing20200110::Client::rejectResourceShareInvitationWithOptions(shared_ptr<RejectResourceShareInvitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceShareInvitationId)) {
    query->insert(pair<string, string>("ResourceShareInvitationId", *request->resourceShareInvitationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RejectResourceShareInvitation"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RejectResourceShareInvitationResponse(callApi(params, req, runtime));
}

RejectResourceShareInvitationResponse Alibabacloud_ResourceSharing20200110::Client::rejectResourceShareInvitation(shared_ptr<RejectResourceShareInvitationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rejectResourceShareInvitationWithOptions(request, runtime);
}

UpdateResourceShareResponse Alibabacloud_ResourceSharing20200110::Client::updateResourceShareWithOptions(shared_ptr<UpdateResourceShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowExternalTargets)) {
    query->insert(pair<string, bool>("AllowExternalTargets", *request->allowExternalTargets));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceShareId)) {
    query->insert(pair<string, string>("ResourceShareId", *request->resourceShareId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceShareName)) {
    query->insert(pair<string, string>("ResourceShareName", *request->resourceShareName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceShare"))},
    {"version", boost::any(string("2020-01-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourceShareResponse(callApi(params, req, runtime));
}

UpdateResourceShareResponse Alibabacloud_ResourceSharing20200110::Client::updateResourceShare(shared_ptr<UpdateResourceShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateResourceShareWithOptions(request, runtime);
}

