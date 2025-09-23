// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RESOURCESHARING20200110_HPP_
#define ALIBABACLOUD_RESOURCESHARING20200110_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ResourceSharing20200110Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ResourceSharing20200110.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

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
      Models::AcceptResourceShareInvitationResponse acceptResourceShareInvitationWithOptions(const Models::AcceptResourceShareInvitationRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::AcceptResourceShareInvitationResponse acceptResourceShareInvitation(const Models::AcceptResourceShareInvitationRequest &request);

      /**
       * @summary Associates resources or principals with a resource share.
       *
       * @description This topic provides an example on how to call the API operation to associate the vSwitch `vsw-bp183p93qs667muql****` and the member `172050525300****` with the resource share `rs-6GRmdD3X****` in the `cn-hangzhou` region. After the association, the vSwitch is shared with the member.
       *
       * @param request AssociateResourceShareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateResourceShareResponse
       */
      Models::AssociateResourceShareResponse associateResourceShareWithOptions(const Models::AssociateResourceShareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates resources or principals with a resource share.
       *
       * @description This topic provides an example on how to call the API operation to associate the vSwitch `vsw-bp183p93qs667muql****` and the member `172050525300****` with the resource share `rs-6GRmdD3X****` in the `cn-hangzhou` region. After the association, the vSwitch is shared with the member.
       *
       * @param request AssociateResourceShareRequest
       * @return AssociateResourceShareResponse
       */
      Models::AssociateResourceShareResponse associateResourceShare(const Models::AssociateResourceShareRequest &request);

      /**
       * @summary Associates permissions with a resource share.
       *
       * @description This topic provides an example on how to call the API operation to associate the `AliyunRSDefaultPermissionVSwitch` permission with the `rs-6GRmdD3X****` resource share in the `cn-hangzhou` region.
       *
       * @param request AssociateResourceSharePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateResourceSharePermissionResponse
       */
      Models::AssociateResourceSharePermissionResponse associateResourceSharePermissionWithOptions(const Models::AssociateResourceSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates permissions with a resource share.
       *
       * @description This topic provides an example on how to call the API operation to associate the `AliyunRSDefaultPermissionVSwitch` permission with the `rs-6GRmdD3X****` resource share in the `cn-hangzhou` region.
       *
       * @param request AssociateResourceSharePermissionRequest
       * @return AssociateResourceSharePermissionResponse
       */
      Models::AssociateResourceSharePermissionResponse associateResourceSharePermission(const Models::AssociateResourceSharePermissionRequest &request);

      /**
       * @summary Transfers a resource share from one resource group to another.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transfers a resource share from one resource group to another.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Checks the status of resource sharing within a resource directory.
       *
       * @param request CheckSharingWithResourceDirectoryStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSharingWithResourceDirectoryStatusResponse
       */
      Models::CheckSharingWithResourceDirectoryStatusResponse checkSharingWithResourceDirectoryStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the status of resource sharing within a resource directory.
       *
       * @return CheckSharingWithResourceDirectoryStatusResponse
       */
      Models::CheckSharingWithResourceDirectoryStatusResponse checkSharingWithResourceDirectoryStatus();

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
      Models::CreateResourceShareResponse createResourceShareWithOptions(const Models::CreateResourceShareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource share.
       *
       * @description Resource Sharing allows you to share your resources with one or more accounts and access the resources shared by other accounts. For more information, see [Resource Sharing overview](https://help.aliyun.com/document_detail/160622.html).
       * This topic provides an example on how to call the API operation to create a resource share named `test` in the `cn-hangzhou` region to share the vSwitch `vsw-bp183p93qs667muql****` with the member `172050525300****` in a resource directory. In this example, the management account of the resource directory is used to call this API operation.
       *
       * @param request CreateResourceShareRequest
       * @return CreateResourceShareResponse
       */
      Models::CreateResourceShareResponse createResourceShare(const Models::CreateResourceShareRequest &request);

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
      Models::DeleteResourceShareResponse deleteResourceShareWithOptions(const Models::DeleteResourceShareRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteResourceShareResponse deleteResourceShare(const Models::DeleteResourceShareRequest &request);

      /**
       * @summary Queries the regions where the Resource Sharing service is available.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where the Resource Sharing service is available.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

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
      Models::DisassociateResourceShareResponse disassociateResourceShareWithOptions(const Models::DisassociateResourceShareRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DisassociateResourceShareResponse disassociateResourceShare(const Models::DisassociateResourceShareRequest &request);

      /**
       * @summary Disassociates a permission from a resource share. You can disassociate a permission from a resource share only if the resource share does not contain resources of the type indicated by the permission.
       *
       * @description This topic provides an example on how to call the API operation to disassociate the `AliyunRSDefaultPermissionVSwitch` permission from the `rs-6GRmdD3X****` resource share in the `cn-hangzhou` region.
       *
       * @param request DisassociateResourceSharePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateResourceSharePermissionResponse
       */
      Models::DisassociateResourceSharePermissionResponse disassociateResourceSharePermissionWithOptions(const Models::DisassociateResourceSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a permission from a resource share. You can disassociate a permission from a resource share only if the resource share does not contain resources of the type indicated by the permission.
       *
       * @description This topic provides an example on how to call the API operation to disassociate the `AliyunRSDefaultPermissionVSwitch` permission from the `rs-6GRmdD3X****` resource share in the `cn-hangzhou` region.
       *
       * @param request DisassociateResourceSharePermissionRequest
       * @return DisassociateResourceSharePermissionResponse
       */
      Models::DisassociateResourceSharePermissionResponse disassociateResourceSharePermission(const Models::DisassociateResourceSharePermissionRequest &request);

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
      Models::EnableSharingWithResourceDirectoryResponse enableSharingWithResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables resource sharing for a resource directory.
       *
       * @description You can share your resources with all members in your resource directory, all members in a specific folder in your resource directory, or a specific member in your resource directory as a resource owner only after you enable resource sharing for your resource directory.
       * You can call this API operation only by using the management account of your resource directory or a RAM user or RAM role to which the required permissions are granted within the management account.
       *
       * @return EnableSharingWithResourceDirectoryResponse
       */
      Models::EnableSharingWithResourceDirectoryResponse enableSharingWithResourceDirectory();

      /**
       * @summary Queries the information about a permission.
       *
       * @description This topic provides an example on how to call the API operation to query the information about the `AliyunRSDefaultPermissionVSwitch` permission whose version is `v1` in the `cn-hangzhou` region.
       *
       * @param request GetPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPermissionResponse
       */
      Models::GetPermissionResponse getPermissionWithOptions(const Models::GetPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a permission.
       *
       * @description This topic provides an example on how to call the API operation to query the information about the `AliyunRSDefaultPermissionVSwitch` permission whose version is `v1` in the `cn-hangzhou` region.
       *
       * @param request GetPermissionRequest
       * @return GetPermissionResponse
       */
      Models::GetPermissionResponse getPermission(const Models::GetPermissionRequest &request);

      /**
       * @summary Queries the versions of a permission.
       *
       * @description This topic provides an example on how to call the API operation to query the versions of the `AliyunRSDefaultPermissionVSwitch` permission in the `cn-hangzhou` region.
       *
       * @param request ListPermissionVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPermissionVersionsResponse
       */
      Models::ListPermissionVersionsResponse listPermissionVersionsWithOptions(const Models::ListPermissionVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the versions of a permission.
       *
       * @description This topic provides an example on how to call the API operation to query the versions of the `AliyunRSDefaultPermissionVSwitch` permission in the `cn-hangzhou` region.
       *
       * @param request ListPermissionVersionsRequest
       * @return ListPermissionVersionsResponse
       */
      Models::ListPermissionVersionsResponse listPermissionVersions(const Models::ListPermissionVersionsRequest &request);

      /**
       * @summary Queries the information about the default permission.
       *
       * @description This topic provides an example on how to call the API operation to query the information about the default permission for the `VSwitch` resource type in the `cn-hangzhou` region.
       *
       * @param request ListPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPermissionsResponse
       */
      Models::ListPermissionsResponse listPermissionsWithOptions(const Models::ListPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the default permission.
       *
       * @description This topic provides an example on how to call the API operation to query the information about the default permission for the `VSwitch` resource type in the `cn-hangzhou` region.
       *
       * @param request ListPermissionsRequest
       * @return ListPermissionsResponse
       */
      Models::ListPermissionsResponse listPermissions(const Models::ListPermissionsRequest &request);

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
      Models::ListResourceShareAssociationsResponse listResourceShareAssociationsWithOptions(const Models::ListResourceShareAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListResourceShareAssociationsResponse listResourceShareAssociations(const Models::ListResourceShareAssociationsRequest &request);

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
      Models::ListResourceShareInvitationsResponse listResourceShareInvitationsWithOptions(const Models::ListResourceShareInvitationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource sharing invitations that are received.
       *
       * @description ### [](#)
       * This topic provides an example on how to call the API operation to query the resource sharing invitations that are received by the current account in the `cn-hangzhou` region. The response shows that one invitation is received by the current account and is waiting for confirmation.
       *
       * @param request ListResourceShareInvitationsRequest
       * @return ListResourceShareInvitationsResponse
       */
      Models::ListResourceShareInvitationsResponse listResourceShareInvitations(const Models::ListResourceShareInvitationsRequest &request);

      /**
       * @summary Queries the permissions that are associated with a resource share.
       *
       * @description This topic provides an example on how to call the API operation to query the permissions that are associated with the resource share created by using the current Alibaba Cloud account in the `cn-hangzhou` region.
       *
       * @param request ListResourceSharePermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceSharePermissionsResponse
       */
      Models::ListResourceSharePermissionsResponse listResourceSharePermissionsWithOptions(const Models::ListResourceSharePermissionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions that are associated with a resource share.
       *
       * @description This topic provides an example on how to call the API operation to query the permissions that are associated with the resource share created by using the current Alibaba Cloud account in the `cn-hangzhou` region.
       *
       * @param request ListResourceSharePermissionsRequest
       * @return ListResourceSharePermissionsResponse
       */
      Models::ListResourceSharePermissionsResponse listResourceSharePermissions(const Models::ListResourceSharePermissionsRequest &request);

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
      Models::ListResourceSharesResponse listResourceSharesWithOptions(const Models::ListResourceSharesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListResourceSharesResponse listResourceShares(const Models::ListResourceSharesRequest &request);

      /**
       * @summary Queries the resources you share with other accounts or the resources other accounts share with you.
       *
       * @description This topic provides an example on how to call the API operation to query the resources that you share with other accounts in the `cn-hangzhou` region. The response shows that in the resource share `rs-6GRmdD3X****`, you share the `vsw-bp1upw03qyz8n7us9****` resource of the `VSwitch` type with other accounts.
       *
       * @param request ListSharedResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSharedResourcesResponse
       */
      Models::ListSharedResourcesResponse listSharedResourcesWithOptions(const Models::ListSharedResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources you share with other accounts or the resources other accounts share with you.
       *
       * @description This topic provides an example on how to call the API operation to query the resources that you share with other accounts in the `cn-hangzhou` region. The response shows that in the resource share `rs-6GRmdD3X****`, you share the `vsw-bp1upw03qyz8n7us9****` resource of the `VSwitch` type with other accounts.
       *
       * @param request ListSharedResourcesRequest
       * @return ListSharedResourcesResponse
       */
      Models::ListSharedResourcesResponse listSharedResources(const Models::ListSharedResourcesRequest &request);

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
      Models::ListSharedTargetsResponse listSharedTargetsWithOptions(const Models::ListSharedTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries principals.
       *
       * @description If you are a resource owner, you can query the principals with which you share your resources. If you are a principal, you can query the resources that are shared with you.
       * This topic provides an example on how to call the API operation to query the principals with which you share your resources in the `cn-hangzhou` region. The response shows that you share your resources with the principals `114240524784****` and `172050525300****`.
       *
       * @param request ListSharedTargetsRequest
       * @return ListSharedTargetsResponse
       */
      Models::ListSharedTargetsResponse listSharedTargets(const Models::ListSharedTargetsRequest &request);

      /**
       * @summary Queries the tags that are added to resource shares.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to resource shares.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 拒绝组织外共享邀请
       *
       * @description This topic provides an example on how to call the API operation to reject the resource sharing invitation `i-yyTWbkjHArYh****` in the `cn-hangzhou` region.
       *
       * @param request RejectResourceShareInvitationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectResourceShareInvitationResponse
       */
      Models::RejectResourceShareInvitationResponse rejectResourceShareInvitationWithOptions(const Models::RejectResourceShareInvitationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 拒绝组织外共享邀请
       *
       * @description This topic provides an example on how to call the API operation to reject the resource sharing invitation `i-yyTWbkjHArYh****` in the `cn-hangzhou` region.
       *
       * @param request RejectResourceShareInvitationRequest
       * @return RejectResourceShareInvitationResponse
       */
      Models::RejectResourceShareInvitationResponse rejectResourceShareInvitation(const Models::RejectResourceShareInvitationRequest &request);

      /**
       * @summary Adds tags to a resource share.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to a resource share.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from resource shares.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resource shares.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

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
      Models::UpdateResourceShareResponse updateResourceShareWithOptions(const Models::UpdateResourceShareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用UpdateResourceShare修改共享单元基本信息。
       *
       * @description You can call this API operation to change the name or resource sharing scope of a resource share.
       * This topic provides an example on how to call the API operation to change the name of the resource share `rs-qSkW1HBY****` in the `cn-hangzhou` region from `test` to `new`.
       *
       * @param request UpdateResourceShareRequest
       * @return UpdateResourceShareResponse
       */
      Models::UpdateResourceShareResponse updateResourceShare(const Models::UpdateResourceShareRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
