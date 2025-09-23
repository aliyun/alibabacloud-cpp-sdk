#include <darabonba/Core.hpp>
#include <alibabacloud/ResourceSharing20200110.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::ResourceSharing20200110::Models;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{

AlibabaCloud::ResourceSharing20200110::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("resourcesharing", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Accepts a resource sharing invitation.
 *
 * @description ### [](#)
 * *   A principal needs to accept or reject a resource sharing invitation only if the principal is not the management account or a member of a resource directory. If you share resources with an object in a resource directory, the system automatically accepts the resource sharing invitation for the object.
 * *   A resource sharing invitation is valid for seven days. A principal must accept or reject the invitation within the validity period.
 * This topic provides an example on how to call the API operation to accept the resource sharing invitation whose ID is `i-pMnItMX19fBJ****` in the `cn-hangzhou` region.
 *
 * @param request AcceptResourceShareInvitationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcceptResourceShareInvitationResponse
 */
AcceptResourceShareInvitationResponse Client::acceptResourceShareInvitationWithOptions(const AcceptResourceShareInvitationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceShareInvitationId()) {
    query["ResourceShareInvitationId"] = request.resourceShareInvitationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AcceptResourceShareInvitation"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AcceptResourceShareInvitationResponse>();
}

/**
 * @summary Accepts a resource sharing invitation.
 *
 * @description ### [](#)
 * *   A principal needs to accept or reject a resource sharing invitation only if the principal is not the management account or a member of a resource directory. If you share resources with an object in a resource directory, the system automatically accepts the resource sharing invitation for the object.
 * *   A resource sharing invitation is valid for seven days. A principal must accept or reject the invitation within the validity period.
 * This topic provides an example on how to call the API operation to accept the resource sharing invitation whose ID is `i-pMnItMX19fBJ****` in the `cn-hangzhou` region.
 *
 * @param request AcceptResourceShareInvitationRequest
 * @return AcceptResourceShareInvitationResponse
 */
AcceptResourceShareInvitationResponse Client::acceptResourceShareInvitation(const AcceptResourceShareInvitationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptResourceShareInvitationWithOptions(request, runtime);
}

/**
 * @summary Associates resources or principals with a resource share.
 *
 * @description This topic provides an example on how to call the API operation to associate the vSwitch `vsw-bp183p93qs667muql****` and the member `172050525300****` with the resource share `rs-6GRmdD3X****` in the `cn-hangzhou` region. After the association, the vSwitch is shared with the member.
 *
 * @param request AssociateResourceShareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateResourceShareResponse
 */
AssociateResourceShareResponse Client::associateResourceShareWithOptions(const AssociateResourceShareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPermissionNames()) {
    query["PermissionNames"] = request.permissionNames();
  }

  if (!!request.hasResourceArns()) {
    query["ResourceArns"] = request.resourceArns();
  }

  if (!!request.hasResourceShareId()) {
    query["ResourceShareId"] = request.resourceShareId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
  }

  if (!!request.hasTargetProperties()) {
    query["TargetProperties"] = request.targetProperties();
  }

  if (!!request.hasTargets()) {
    query["Targets"] = request.targets();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateResourceShare"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateResourceShareResponse>();
}

/**
 * @summary Associates resources or principals with a resource share.
 *
 * @description This topic provides an example on how to call the API operation to associate the vSwitch `vsw-bp183p93qs667muql****` and the member `172050525300****` with the resource share `rs-6GRmdD3X****` in the `cn-hangzhou` region. After the association, the vSwitch is shared with the member.
 *
 * @param request AssociateResourceShareRequest
 * @return AssociateResourceShareResponse
 */
AssociateResourceShareResponse Client::associateResourceShare(const AssociateResourceShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateResourceShareWithOptions(request, runtime);
}

/**
 * @summary Associates permissions with a resource share.
 *
 * @description This topic provides an example on how to call the API operation to associate the `AliyunRSDefaultPermissionVSwitch` permission with the `rs-6GRmdD3X****` resource share in the `cn-hangzhou` region.
 *
 * @param request AssociateResourceSharePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateResourceSharePermissionResponse
 */
AssociateResourceSharePermissionResponse Client::associateResourceSharePermissionWithOptions(const AssociateResourceSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPermissionName()) {
    query["PermissionName"] = request.permissionName();
  }

  if (!!request.hasReplace()) {
    query["Replace"] = request.replace();
  }

  if (!!request.hasResourceShareId()) {
    query["ResourceShareId"] = request.resourceShareId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateResourceSharePermission"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateResourceSharePermissionResponse>();
}

/**
 * @summary Associates permissions with a resource share.
 *
 * @description This topic provides an example on how to call the API operation to associate the `AliyunRSDefaultPermissionVSwitch` permission with the `rs-6GRmdD3X****` resource share in the `cn-hangzhou` region.
 *
 * @param request AssociateResourceSharePermissionRequest
 * @return AssociateResourceSharePermissionResponse
 */
AssociateResourceSharePermissionResponse Client::associateResourceSharePermission(const AssociateResourceSharePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateResourceSharePermissionWithOptions(request, runtime);
}

/**
 * @summary Transfers a resource share from one resource group to another.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Transfers a resource share from one resource group to another.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Checks the status of resource sharing within a resource directory.
 *
 * @param request CheckSharingWithResourceDirectoryStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckSharingWithResourceDirectoryStatusResponse
 */
CheckSharingWithResourceDirectoryStatusResponse Client::checkSharingWithResourceDirectoryStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "CheckSharingWithResourceDirectoryStatus"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckSharingWithResourceDirectoryStatusResponse>();
}

/**
 * @summary Checks the status of resource sharing within a resource directory.
 *
 * @return CheckSharingWithResourceDirectoryStatusResponse
 */
CheckSharingWithResourceDirectoryStatusResponse Client::checkSharingWithResourceDirectoryStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkSharingWithResourceDirectoryStatusWithOptions(runtime);
}

/**
 * @summary Creates a resource share.
 *
 * @description Resource Sharing allows you to share your resources with one or more accounts and access the resources shared by other accounts. For more information, see [Resource Sharing overview](https://help.aliyun.com/document_detail/160622.html).
 * This topic provides an example on how to call the API operation to create a resource share named `test` in the `cn-hangzhou` region to share the vSwitch `vsw-bp183p93qs667muql****` with the member `172050525300****` in a resource directory. In this example, the management account of the resource directory is used to call this API operation.
 *
 * @param request CreateResourceShareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceShareResponse
 */
CreateResourceShareResponse Client::createResourceShareWithOptions(const CreateResourceShareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowExternalTargets()) {
    query["AllowExternalTargets"] = request.allowExternalTargets();
  }

  if (!!request.hasPermissionNames()) {
    query["PermissionNames"] = request.permissionNames();
  }

  if (!!request.hasResourceArns()) {
    query["ResourceArns"] = request.resourceArns();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceShareName()) {
    query["ResourceShareName"] = request.resourceShareName();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTargetProperties()) {
    query["TargetProperties"] = request.targetProperties();
  }

  if (!!request.hasTargets()) {
    query["Targets"] = request.targets();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateResourceShare"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceShareResponse>();
}

/**
 * @summary Creates a resource share.
 *
 * @description Resource Sharing allows you to share your resources with one or more accounts and access the resources shared by other accounts. For more information, see [Resource Sharing overview](https://help.aliyun.com/document_detail/160622.html).
 * This topic provides an example on how to call the API operation to create a resource share named `test` in the `cn-hangzhou` region to share the vSwitch `vsw-bp183p93qs667muql****` with the member `172050525300****` in a resource directory. In this example, the management account of the resource directory is used to call this API operation.
 *
 * @param request CreateResourceShareRequest
 * @return CreateResourceShareResponse
 */
CreateResourceShareResponse Client::createResourceShare(const CreateResourceShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourceShareWithOptions(request, runtime);
}

/**
 * @summary Deletes a resource share.
 *
 * @description After a resource share is deleted, all principals in the resource share can no longer access the resources in the resource share. However, the resources are not deleted with the resource share.
 * A resource share that is deleted is in the `Deleted` state. The system deletes the record of the resource share within 48 hours to 96 hours.
 * This topic provides an example on how to call the API operation to delete the resource share `rs-qSkW1HBY****` in the `cn-hangzhou` region.
 *
 * @param request DeleteResourceShareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceShareResponse
 */
DeleteResourceShareResponse Client::deleteResourceShareWithOptions(const DeleteResourceShareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceShareId()) {
    query["ResourceShareId"] = request.resourceShareId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceShare"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceShareResponse>();
}

/**
 * @summary Deletes a resource share.
 *
 * @description After a resource share is deleted, all principals in the resource share can no longer access the resources in the resource share. However, the resources are not deleted with the resource share.
 * A resource share that is deleted is in the `Deleted` state. The system deletes the record of the resource share within 48 hours to 96 hours.
 * This topic provides an example on how to call the API operation to delete the resource share `rs-qSkW1HBY****` in the `cn-hangzhou` region.
 *
 * @param request DeleteResourceShareRequest
 * @return DeleteResourceShareResponse
 */
DeleteResourceShareResponse Client::deleteResourceShare(const DeleteResourceShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResourceShareWithOptions(request, runtime);
}

/**
 * @summary Queries the regions where the Resource Sharing service is available.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries the regions where the Resource Sharing service is available.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Disassociates resources or principals from a resource share.
 *
 * @description *   A resource owner can call this API operation to disassociate shared resources or principals from a resource share.
 * *   If a principal does not belong to a resource directory, the principal can call this API operation to exit the resource share. For more information, see [Exit a resource share](https://help.aliyun.com/document_detail/440614.html).
 * This topic provides an example on how to use the management account of a resource directory to call the API operation to disassociate the member `172050525300****` from the resource share `rs-6GRmdD3X****` in the `cn-hangzhou` region. After the member is disassociated from the resource share, the member cannot share the resources in the resource share.
 *
 * @param request DisassociateResourceShareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisassociateResourceShareResponse
 */
DisassociateResourceShareResponse Client::disassociateResourceShareWithOptions(const DisassociateResourceShareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceArns()) {
    query["ResourceArns"] = request.resourceArns();
  }

  if (!!request.hasResourceOwner()) {
    query["ResourceOwner"] = request.resourceOwner();
  }

  if (!!request.hasResourceShareId()) {
    query["ResourceShareId"] = request.resourceShareId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
  }

  if (!!request.hasTargets()) {
    query["Targets"] = request.targets();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisassociateResourceShare"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociateResourceShareResponse>();
}

/**
 * @summary Disassociates resources or principals from a resource share.
 *
 * @description *   A resource owner can call this API operation to disassociate shared resources or principals from a resource share.
 * *   If a principal does not belong to a resource directory, the principal can call this API operation to exit the resource share. For more information, see [Exit a resource share](https://help.aliyun.com/document_detail/440614.html).
 * This topic provides an example on how to use the management account of a resource directory to call the API operation to disassociate the member `172050525300****` from the resource share `rs-6GRmdD3X****` in the `cn-hangzhou` region. After the member is disassociated from the resource share, the member cannot share the resources in the resource share.
 *
 * @param request DisassociateResourceShareRequest
 * @return DisassociateResourceShareResponse
 */
DisassociateResourceShareResponse Client::disassociateResourceShare(const DisassociateResourceShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateResourceShareWithOptions(request, runtime);
}

/**
 * @summary Disassociates a permission from a resource share. You can disassociate a permission from a resource share only if the resource share does not contain resources of the type indicated by the permission.
 *
 * @description This topic provides an example on how to call the API operation to disassociate the `AliyunRSDefaultPermissionVSwitch` permission from the `rs-6GRmdD3X****` resource share in the `cn-hangzhou` region.
 *
 * @param request DisassociateResourceSharePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisassociateResourceSharePermissionResponse
 */
DisassociateResourceSharePermissionResponse Client::disassociateResourceSharePermissionWithOptions(const DisassociateResourceSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPermissionName()) {
    query["PermissionName"] = request.permissionName();
  }

  if (!!request.hasResourceShareId()) {
    query["ResourceShareId"] = request.resourceShareId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisassociateResourceSharePermission"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociateResourceSharePermissionResponse>();
}

/**
 * @summary Disassociates a permission from a resource share. You can disassociate a permission from a resource share only if the resource share does not contain resources of the type indicated by the permission.
 *
 * @description This topic provides an example on how to call the API operation to disassociate the `AliyunRSDefaultPermissionVSwitch` permission from the `rs-6GRmdD3X****` resource share in the `cn-hangzhou` region.
 *
 * @param request DisassociateResourceSharePermissionRequest
 * @return DisassociateResourceSharePermissionResponse
 */
DisassociateResourceSharePermissionResponse Client::disassociateResourceSharePermission(const DisassociateResourceSharePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateResourceSharePermissionWithOptions(request, runtime);
}

/**
 * @summary Enables resource sharing for a resource directory.
 *
 * @description You can share your resources with all members in your resource directory, all members in a specific folder in your resource directory, or a specific member in your resource directory as a resource owner only after you enable resource sharing for your resource directory.
 * You can call this API operation only by using the management account of your resource directory or a RAM user or RAM role to which the required permissions are granted within the management account.
 *
 * @param request EnableSharingWithResourceDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSharingWithResourceDirectoryResponse
 */
EnableSharingWithResourceDirectoryResponse Client::enableSharingWithResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "EnableSharingWithResourceDirectory"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSharingWithResourceDirectoryResponse>();
}

/**
 * @summary Enables resource sharing for a resource directory.
 *
 * @description You can share your resources with all members in your resource directory, all members in a specific folder in your resource directory, or a specific member in your resource directory as a resource owner only after you enable resource sharing for your resource directory.
 * You can call this API operation only by using the management account of your resource directory or a RAM user or RAM role to which the required permissions are granted within the management account.
 *
 * @return EnableSharingWithResourceDirectoryResponse
 */
EnableSharingWithResourceDirectoryResponse Client::enableSharingWithResourceDirectory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSharingWithResourceDirectoryWithOptions(runtime);
}

/**
 * @summary Queries the information about a permission.
 *
 * @description This topic provides an example on how to call the API operation to query the information about the `AliyunRSDefaultPermissionVSwitch` permission whose version is `v1` in the `cn-hangzhou` region.
 *
 * @param request GetPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPermissionResponse
 */
GetPermissionResponse Client::getPermissionWithOptions(const GetPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPermissionName()) {
    query["PermissionName"] = request.permissionName();
  }

  if (!!request.hasPermissionVersion()) {
    query["PermissionVersion"] = request.permissionVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPermission"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPermissionResponse>();
}

/**
 * @summary Queries the information about a permission.
 *
 * @description This topic provides an example on how to call the API operation to query the information about the `AliyunRSDefaultPermissionVSwitch` permission whose version is `v1` in the `cn-hangzhou` region.
 *
 * @param request GetPermissionRequest
 * @return GetPermissionResponse
 */
GetPermissionResponse Client::getPermission(const GetPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPermissionWithOptions(request, runtime);
}

/**
 * @summary Queries the versions of a permission.
 *
 * @description This topic provides an example on how to call the API operation to query the versions of the `AliyunRSDefaultPermissionVSwitch` permission in the `cn-hangzhou` region.
 *
 * @param request ListPermissionVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPermissionVersionsResponse
 */
ListPermissionVersionsResponse Client::listPermissionVersionsWithOptions(const ListPermissionVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPermissionName()) {
    query["PermissionName"] = request.permissionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPermissionVersions"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPermissionVersionsResponse>();
}

/**
 * @summary Queries the versions of a permission.
 *
 * @description This topic provides an example on how to call the API operation to query the versions of the `AliyunRSDefaultPermissionVSwitch` permission in the `cn-hangzhou` region.
 *
 * @param request ListPermissionVersionsRequest
 * @return ListPermissionVersionsResponse
 */
ListPermissionVersionsResponse Client::listPermissionVersions(const ListPermissionVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPermissionVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the default permission.
 *
 * @description This topic provides an example on how to call the API operation to query the information about the default permission for the `VSwitch` resource type in the `cn-hangzhou` region.
 *
 * @param request ListPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPermissionsResponse
 */
ListPermissionsResponse Client::listPermissionsWithOptions(const ListPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPermissions"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPermissionsResponse>();
}

/**
 * @summary Queries the information about the default permission.
 *
 * @description This topic provides an example on how to call the API operation to query the information about the default permission for the `VSwitch` resource type in the `cn-hangzhou` region.
 *
 * @param request ListPermissionsRequest
 * @return ListPermissionsResponse
 */
ListPermissionsResponse Client::listPermissions(const ListPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPermissionsWithOptions(request, runtime);
}

/**
 * @summary Queries the association records of resource shares.
 *
 * @description This topic provides an example on how to call the API operation to query the association records of the resource shares that are created by using the current Alibaba Cloud account in the `cn-hangzhou` region. The response shows the following records:
 * *   The resource `vsw-bp1upw03qyz8n7us9****` of the `VSwitch` type has been associated with the resource share `rs-6GRmdD3X****`. The resource is in the `Associated` state. This indicates that the resource is being shared.
 * *   The resource `vsw-bp183p93qs667muql****` of the `VSwitch` type has been disassociated from the resource share `rs-6GRmdD3X****`. The resource is in the `Disassociated` state. This indicates that the sharing of the resource is stopped.
 *
 * @param request ListResourceShareAssociationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceShareAssociationsResponse
 */
ListResourceShareAssociationsResponse Client::listResourceShareAssociationsWithOptions(const ListResourceShareAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssociationStatus()) {
    query["AssociationStatus"] = request.associationStatus();
  }

  if (!!request.hasAssociationType()) {
    query["AssociationType"] = request.associationType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceArn()) {
    query["ResourceArn"] = request.resourceArn();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceShareIds()) {
    query["ResourceShareIds"] = request.resourceShareIds();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceShareAssociations"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceShareAssociationsResponse>();
}

/**
 * @summary Queries the association records of resource shares.
 *
 * @description This topic provides an example on how to call the API operation to query the association records of the resource shares that are created by using the current Alibaba Cloud account in the `cn-hangzhou` region. The response shows the following records:
 * *   The resource `vsw-bp1upw03qyz8n7us9****` of the `VSwitch` type has been associated with the resource share `rs-6GRmdD3X****`. The resource is in the `Associated` state. This indicates that the resource is being shared.
 * *   The resource `vsw-bp183p93qs667muql****` of the `VSwitch` type has been disassociated from the resource share `rs-6GRmdD3X****`. The resource is in the `Disassociated` state. This indicates that the sharing of the resource is stopped.
 *
 * @param request ListResourceShareAssociationsRequest
 * @return ListResourceShareAssociationsResponse
 */
ListResourceShareAssociationsResponse Client::listResourceShareAssociations(const ListResourceShareAssociationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceShareAssociationsWithOptions(request, runtime);
}

/**
 * @summary Queries the resource sharing invitations that are received.
 *
 * @description ### [](#)
 * This topic provides an example on how to call the API operation to query the resource sharing invitations that are received by the current account in the `cn-hangzhou` region. The response shows that one invitation is received by the current account and is waiting for confirmation.
 *
 * @param request ListResourceShareInvitationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceShareInvitationsResponse
 */
ListResourceShareInvitationsResponse Client::listResourceShareInvitationsWithOptions(const ListResourceShareInvitationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceShareIds()) {
    query["ResourceShareIds"] = request.resourceShareIds();
  }

  if (!!request.hasResourceShareInvitationIds()) {
    query["ResourceShareInvitationIds"] = request.resourceShareInvitationIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceShareInvitations"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceShareInvitationsResponse>();
}

/**
 * @summary Queries the resource sharing invitations that are received.
 *
 * @description ### [](#)
 * This topic provides an example on how to call the API operation to query the resource sharing invitations that are received by the current account in the `cn-hangzhou` region. The response shows that one invitation is received by the current account and is waiting for confirmation.
 *
 * @param request ListResourceShareInvitationsRequest
 * @return ListResourceShareInvitationsResponse
 */
ListResourceShareInvitationsResponse Client::listResourceShareInvitations(const ListResourceShareInvitationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceShareInvitationsWithOptions(request, runtime);
}

/**
 * @summary Queries the permissions that are associated with a resource share.
 *
 * @description This topic provides an example on how to call the API operation to query the permissions that are associated with the resource share created by using the current Alibaba Cloud account in the `cn-hangzhou` region.
 *
 * @param request ListResourceSharePermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceSharePermissionsResponse
 */
ListResourceSharePermissionsResponse Client::listResourceSharePermissionsWithOptions(const ListResourceSharePermissionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceOwner()) {
    query["ResourceOwner"] = request.resourceOwner();
  }

  if (!!request.hasResourceShareId()) {
    query["ResourceShareId"] = request.resourceShareId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceSharePermissions"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceSharePermissionsResponse>();
}

/**
 * @summary Queries the permissions that are associated with a resource share.
 *
 * @description This topic provides an example on how to call the API operation to query the permissions that are associated with the resource share created by using the current Alibaba Cloud account in the `cn-hangzhou` region.
 *
 * @param request ListResourceSharePermissionsRequest
 * @return ListResourceSharePermissionsResponse
 */
ListResourceSharePermissionsResponse Client::listResourceSharePermissions(const ListResourceSharePermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceSharePermissionsWithOptions(request, runtime);
}

/**
 * @summary Queries resource shares.
 *
 * @description This topic provides an example on how to call the API operation to query the resource shares that are created by using the current Alibaba Cloud account in the `cn-hangzhou` region. The response shows that the following resource shares are created within the account `151266687691****`:
 * *   `rs-hX9wC5jO****`, which is in the `Deleted` state
 * *   `rs-PqysnzIj****`, which is in the `Active` state
 *
 * @param request ListResourceSharesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceSharesResponse
 */
ListResourceSharesResponse Client::listResourceSharesWithOptions(const ListResourceSharesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPermissionName()) {
    query["PermissionName"] = request.permissionName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwner()) {
    query["ResourceOwner"] = request.resourceOwner();
  }

  if (!!request.hasResourceShareIds()) {
    query["ResourceShareIds"] = request.resourceShareIds();
  }

  if (!!request.hasResourceShareName()) {
    query["ResourceShareName"] = request.resourceShareName();
  }

  if (!!request.hasResourceShareStatus()) {
    query["ResourceShareStatus"] = request.resourceShareStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceShares"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceSharesResponse>();
}

/**
 * @summary Queries resource shares.
 *
 * @description This topic provides an example on how to call the API operation to query the resource shares that are created by using the current Alibaba Cloud account in the `cn-hangzhou` region. The response shows that the following resource shares are created within the account `151266687691****`:
 * *   `rs-hX9wC5jO****`, which is in the `Deleted` state
 * *   `rs-PqysnzIj****`, which is in the `Active` state
 *
 * @param request ListResourceSharesRequest
 * @return ListResourceSharesResponse
 */
ListResourceSharesResponse Client::listResourceShares(const ListResourceSharesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceSharesWithOptions(request, runtime);
}

/**
 * @summary Queries the resources you share with other accounts or the resources other accounts share with you.
 *
 * @description This topic provides an example on how to call the API operation to query the resources that you share with other accounts in the `cn-hangzhou` region. The response shows that in the resource share `rs-6GRmdD3X****`, you share the `vsw-bp1upw03qyz8n7us9****` resource of the `VSwitch` type with other accounts.
 *
 * @param request ListSharedResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSharedResourcesResponse
 */
ListSharedResourcesResponse Client::listSharedResourcesWithOptions(const ListSharedResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceArns()) {
    query["ResourceArns"] = request.resourceArns();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceOwner()) {
    query["ResourceOwner"] = request.resourceOwner();
  }

  if (!!request.hasResourceShareIds()) {
    query["ResourceShareIds"] = request.resourceShareIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSharedResources"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSharedResourcesResponse>();
}

/**
 * @summary Queries the resources you share with other accounts or the resources other accounts share with you.
 *
 * @description This topic provides an example on how to call the API operation to query the resources that you share with other accounts in the `cn-hangzhou` region. The response shows that in the resource share `rs-6GRmdD3X****`, you share the `vsw-bp1upw03qyz8n7us9****` resource of the `VSwitch` type with other accounts.
 *
 * @param request ListSharedResourcesRequest
 * @return ListSharedResourcesResponse
 */
ListSharedResourcesResponse Client::listSharedResources(const ListSharedResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSharedResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries principals.
 *
 * @description If you are a resource owner, you can query the principals with which you share your resources. If you are a principal, you can query the resources that are shared with you.
 * This topic provides an example on how to call the API operation to query the principals with which you share your resources in the `cn-hangzhou` region. The response shows that you share your resources with the principals `114240524784****` and `172050525300****`.
 *
 * @param request ListSharedTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSharedTargetsResponse
 */
ListSharedTargetsResponse Client::listSharedTargetsWithOptions(const ListSharedTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceArn()) {
    query["ResourceArn"] = request.resourceArn();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwner()) {
    query["ResourceOwner"] = request.resourceOwner();
  }

  if (!!request.hasResourceShareIds()) {
    query["ResourceShareIds"] = request.resourceShareIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTargets()) {
    query["Targets"] = request.targets();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSharedTargets"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSharedTargetsResponse>();
}

/**
 * @summary Queries principals.
 *
 * @description If you are a resource owner, you can query the principals with which you share your resources. If you are a principal, you can query the resources that are shared with you.
 * This topic provides an example on how to call the API operation to query the principals with which you share your resources in the `cn-hangzhou` region. The response shows that you share your resources with the principals `114240524784****` and `172050525300****`.
 *
 * @param request ListSharedTargetsRequest
 * @return ListSharedTargetsResponse
 */
ListSharedTargetsResponse Client::listSharedTargets(const ListSharedTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSharedTargetsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to resource shares.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags that are added to resource shares.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary 拒绝组织外共享邀请
 *
 * @description This topic provides an example on how to call the API operation to reject the resource sharing invitation `i-yyTWbkjHArYh****` in the `cn-hangzhou` region.
 *
 * @param request RejectResourceShareInvitationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectResourceShareInvitationResponse
 */
RejectResourceShareInvitationResponse Client::rejectResourceShareInvitationWithOptions(const RejectResourceShareInvitationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceShareInvitationId()) {
    query["ResourceShareInvitationId"] = request.resourceShareInvitationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RejectResourceShareInvitation"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RejectResourceShareInvitationResponse>();
}

/**
 * @summary 拒绝组织外共享邀请
 *
 * @description This topic provides an example on how to call the API operation to reject the resource sharing invitation `i-yyTWbkjHArYh****` in the `cn-hangzhou` region.
 *
 * @param request RejectResourceShareInvitationRequest
 * @return RejectResourceShareInvitationResponse
 */
RejectResourceShareInvitationResponse Client::rejectResourceShareInvitation(const RejectResourceShareInvitationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectResourceShareInvitationWithOptions(request, runtime);
}

/**
 * @summary Adds tags to a resource share.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds tags to a resource share.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from resource shares.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from resource shares.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary 调用UpdateResourceShare修改共享单元基本信息。
 *
 * @description You can call this API operation to change the name or resource sharing scope of a resource share.
 * This topic provides an example on how to call the API operation to change the name of the resource share `rs-qSkW1HBY****` in the `cn-hangzhou` region from `test` to `new`.
 *
 * @param request UpdateResourceShareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceShareResponse
 */
UpdateResourceShareResponse Client::updateResourceShareWithOptions(const UpdateResourceShareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowExternalTargets()) {
    query["AllowExternalTargets"] = request.allowExternalTargets();
  }

  if (!!request.hasResourceShareId()) {
    query["ResourceShareId"] = request.resourceShareId();
  }

  if (!!request.hasResourceShareName()) {
    query["ResourceShareName"] = request.resourceShareName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateResourceShare"},
    {"version" , "2020-01-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceShareResponse>();
}

/**
 * @summary 调用UpdateResourceShare修改共享单元基本信息。
 *
 * @description You can call this API operation to change the name or resource sharing scope of a resource share.
 * This topic provides an example on how to call the API operation to change the name of the resource share `rs-qSkW1HBY****` in the `cn-hangzhou` region from `test` to `new`.
 *
 * @param request UpdateResourceShareRequest
 * @return UpdateResourceShareResponse
 */
UpdateResourceShareResponse Client::updateResourceShare(const UpdateResourceShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResourceShareWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110