// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ECD20200930_HPP_
#define ALIBABACLOUD_ECD20200930_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ecd20200930Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ecd20200930.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Unlocks a convenience office network that is automatically locked due to a long idle period of time.
       *
       * @description If you do not create any cloud computer in a convenience office network within 15 days, the office network is automatically locked and virtual private cloud (VPC) resources are released. If you want to resume the office network, you can call this operation to unlock the office network.
       *
       * @param request ActivateOfficeSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateOfficeSiteResponse
       */
      Models::ActivateOfficeSiteResponse activateOfficeSiteWithOptions(const Models::ActivateOfficeSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks a convenience office network that is automatically locked due to a long idle period of time.
       *
       * @description If you do not create any cloud computer in a convenience office network within 15 days, the office network is automatically locked and virtual private cloud (VPC) resources are released. If you want to resume the office network, you can call this operation to unlock the office network.
       *
       * @param request ActivateOfficeSiteRequest
       * @return ActivateOfficeSiteResponse
       */
      Models::ActivateOfficeSiteResponse activateOfficeSite(const Models::ActivateOfficeSiteRequest &request);

      /**
       * @summary 添加桌面超卖用户组
       *
       * @param request AddDesktopOversoldUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDesktopOversoldUserGroupResponse
       */
      Models::AddDesktopOversoldUserGroupResponse addDesktopOversoldUserGroupWithOptions(const Models::AddDesktopOversoldUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加桌面超卖用户组
       *
       * @param request AddDesktopOversoldUserGroupRequest
       * @return AddDesktopOversoldUserGroupResponse
       */
      Models::AddDesktopOversoldUserGroupResponse addDesktopOversoldUserGroup(const Models::AddDesktopOversoldUserGroupRequest &request);

      /**
       * @summary Adds trusted devices.
       *
       * @description Each device can be registered in only one Alibaba Cloud account. If you register a device that has been registered in another Alibaba Cloud account, an error is reported.
       *
       * @param request AddDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDevicesResponse
       */
      Models::AddDevicesResponse addDevicesWithOptions(const Models::AddDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds trusted devices.
       *
       * @description Each device can be registered in only one Alibaba Cloud account. If you register a device that has been registered in another Alibaba Cloud account, an error is reported.
       *
       * @param request AddDevicesRequest
       * @return AddDevicesResponse
       */
      Models::AddDevicesResponse addDevices(const Models::AddDevicesRequest &request);

      /**
       * @summary Adds a shared folder to the network disk.
       *
       * @description You can call this operation to share a specific folder with other users. You can also configure the folder permissions.
       *
       * @param tmpReq AddFilePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFilePermissionResponse
       */
      Models::AddFilePermissionResponse addFilePermissionWithOptions(const Models::AddFilePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a shared folder to the network disk.
       *
       * @description You can call this operation to share a specific folder with other users. You can also configure the folder permissions.
       *
       * @param request AddFilePermissionRequest
       * @return AddFilePermissionResponse
       */
      Models::AddFilePermissionResponse addFilePermission(const Models::AddFilePermissionRequest &request);

      /**
       * @summary Adds authorized users for a cloud computer share. The system automatically assigns cloud computers from a share to authorized users based on administrator-configured rules.
       *
       * @param request AddUserToDesktopGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToDesktopGroupResponse
       */
      Models::AddUserToDesktopGroupResponse addUserToDesktopGroupWithOptions(const Models::AddUserToDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds authorized users for a cloud computer share. The system automatically assigns cloud computers from a share to authorized users based on administrator-configured rules.
       *
       * @param request AddUserToDesktopGroupRequest
       * @return AddUserToDesktopGroupResponse
       */
      Models::AddUserToDesktopGroupResponse addUserToDesktopGroup(const Models::AddUserToDesktopGroupRequest &request);

      /**
       * @summary 添加用户到超卖用户组
       *
       * @param request AddUserToDesktopOversoldUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToDesktopOversoldUserGroupResponse
       */
      Models::AddUserToDesktopOversoldUserGroupResponse addUserToDesktopOversoldUserGroupWithOptions(const Models::AddUserToDesktopOversoldUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加用户到超卖用户组
       *
       * @param request AddUserToDesktopOversoldUserGroupRequest
       * @return AddUserToDesktopOversoldUserGroupResponse
       */
      Models::AddUserToDesktopOversoldUserGroupResponse addUserToDesktopOversoldUserGroup(const Models::AddUserToDesktopOversoldUserGroupRequest &request);

      /**
       * @summary 实例开通公网IP
       *
       * @param request AllocateIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateIpAddressResponse
       */
      Models::AllocateIpAddressResponse allocateIpAddressWithOptions(const Models::AllocateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例开通公网IP
       *
       * @param request AllocateIpAddressRequest
       * @return AllocateIpAddressResponse
       */
      Models::AllocateIpAddressResponse allocateIpAddress(const Models::AllocateIpAddressRequest &request);

      /**
       * @summary Apply an automatic snapshot policy to cloud computers. After the automatic snapshot policy is applied to the cloud computers, Elastic Desktop Service automatically creates snapshots for the cloud computers based on the time specified in the automatic snapshot policy.
       *
       * @description You can also associate an automatic snapshot policy with a cloud desktop in the Elastic Desktop Service (EDS) console. To do so, perform the following steps: 1. Log on to the EDS console. 2. Choose Desktops and Groups > Desktops in the left-side navigation pane. 3. Find the cloud desktop that you want to manage on the Cloud Desktops page and choose More > Change Automatic Snapshot Policy in the Actions column. 4. Configure a policy for the cloud desktop as prompted in the Change Automatic Snapshot Policy panel.
       * After you associate an automatic snapshot policy with the cloud desktop, the system creates snapshots for the cloud desktop based on the policy.
       *
       * @param request ApplyAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyAutoSnapshotPolicyResponse
       */
      Models::ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicyWithOptions(const Models::ApplyAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Apply an automatic snapshot policy to cloud computers. After the automatic snapshot policy is applied to the cloud computers, Elastic Desktop Service automatically creates snapshots for the cloud computers based on the time specified in the automatic snapshot policy.
       *
       * @description You can also associate an automatic snapshot policy with a cloud desktop in the Elastic Desktop Service (EDS) console. To do so, perform the following steps: 1. Log on to the EDS console. 2. Choose Desktops and Groups > Desktops in the left-side navigation pane. 3. Find the cloud desktop that you want to manage on the Cloud Desktops page and choose More > Change Automatic Snapshot Policy in the Actions column. 4. Configure a policy for the cloud desktop as prompted in the Change Automatic Snapshot Policy panel.
       * After you associate an automatic snapshot policy with the cloud desktop, the system creates snapshots for the cloud desktop based on the policy.
       *
       * @param request ApplyAutoSnapshotPolicyRequest
       * @return ApplyAutoSnapshotPolicyResponse
       */
      Models::ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicy(const Models::ApplyAutoSnapshotPolicyRequest &request);

      /**
       * @summary Applies for the coordinate permissions.
       *
       * @param request ApplyCoordinatePrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyCoordinatePrivilegeResponse
       */
      Models::ApplyCoordinatePrivilegeResponse applyCoordinatePrivilegeWithOptions(const Models::ApplyCoordinatePrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for the coordinate permissions.
       *
       * @param request ApplyCoordinatePrivilegeRequest
       * @return ApplyCoordinatePrivilegeResponse
       */
      Models::ApplyCoordinatePrivilegeResponse applyCoordinatePrivilege(const Models::ApplyCoordinatePrivilegeRequest &request);

      /**
       * @summary Applies for coordination monitoring. This operation is mainly used in administrator assistance scenarios and education scenarios.
       *
       * @param request ApplyCoordinationForMonitoringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyCoordinationForMonitoringResponse
       */
      Models::ApplyCoordinationForMonitoringResponse applyCoordinationForMonitoringWithOptions(const Models::ApplyCoordinationForMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for coordination monitoring. This operation is mainly used in administrator assistance scenarios and education scenarios.
       *
       * @param request ApplyCoordinationForMonitoringRequest
       * @return ApplyCoordinationForMonitoringResponse
       */
      Models::ApplyCoordinationForMonitoringResponse applyCoordinationForMonitoring(const Models::ApplyCoordinationForMonitoringRequest &request);

      /**
       * @summary Allows you to upgrade images.
       *
       * @description The cloud computers for which you want to allow image updates must be in the Running state.
       *
       * @param request ApproveFotaUpdateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApproveFotaUpdateResponse
       */
      Models::ApproveFotaUpdateResponse approveFotaUpdateWithOptions(const Models::ApproveFotaUpdateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Allows you to upgrade images.
       *
       * @description The cloud computers for which you want to allow image updates must be in the Running state.
       *
       * @param request ApproveFotaUpdateRequest
       * @return ApproveFotaUpdateResponse
       */
      Models::ApproveFotaUpdateResponse approveFotaUpdate(const Models::ApproveFotaUpdateRequest &request);

      /**
       * @summary 实例绑定公网IP
       *
       * @param request AssociateIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateIpAddressResponse
       */
      Models::AssociateIpAddressResponse associateIpAddressWithOptions(const Models::AssociateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例绑定公网IP
       *
       * @param request AssociateIpAddressRequest
       * @return AssociateIpAddressResponse
       */
      Models::AssociateIpAddressResponse associateIpAddress(const Models::AssociateIpAddressRequest &request);

      /**
       * @summary Binds a premium bandwidth plan to an office network. A premium bandwidth plan is used together with only one office network.
       *
       * @param request AssociateNetworkPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateNetworkPackageResponse
       */
      Models::AssociateNetworkPackageResponse associateNetworkPackageWithOptions(const Models::AssociateNetworkPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a premium bandwidth plan to an office network. A premium bandwidth plan is used together with only one office network.
       *
       * @param request AssociateNetworkPackageRequest
       * @return AssociateNetworkPackageResponse
       */
      Models::AssociateNetworkPackageResponse associateNetworkPackage(const Models::AssociateNetworkPackageRequest &request);

      /**
       * @summary 将创建的自定义路由表和同一VPC内的交换机绑定
       *
       * @param request AssociateRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateRouteTableResponse
       */
      Models::AssociateRouteTableResponse associateRouteTableWithOptions(const Models::AssociateRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将创建的自定义路由表和同一VPC内的交换机绑定
       *
       * @param request AssociateRouteTableRequest
       * @return AssociateRouteTableResponse
       */
      Models::AssociateRouteTableResponse associateRouteTable(const Models::AssociateRouteTableRequest &request);

      /**
       * @summary Binds an advanced office network to a Cloud Enterprise Network (CEN) instance.
       *
       * @description Prerequisites
       * *   A CEN instance is created.
       * *   The office network is an advanced office network, and the account system type is convenient account.
       * >  The office network is added to the CEN instance when you create the instance. An office network can be added to only one CEN instance.
       *
       * @param request AttachCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachCenResponse
       */
      Models::AttachCenResponse attachCenWithOptions(const Models::AttachCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds an advanced office network to a Cloud Enterprise Network (CEN) instance.
       *
       * @description Prerequisites
       * *   A CEN instance is created.
       * *   The office network is an advanced office network, and the account system type is convenient account.
       * >  The office network is added to the CEN instance when you create the instance. An office network can be added to only one CEN instance.
       *
       * @param request AttachCenRequest
       * @return AttachCenResponse
       */
      Models::AttachCenResponse attachCen(const Models::AttachCenRequest &request);

      /**
       * @summary Binds a hardware client to a user.
       *
       * @param request AttachEndUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachEndUserResponse
       */
      Models::AttachEndUserResponse attachEndUserWithOptions(const Models::AttachEndUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a hardware client to a user.
       *
       * @param request AttachEndUserRequest
       * @return AttachEndUserResponse
       */
      Models::AttachEndUserResponse attachEndUser(const Models::AttachEndUserRequest &request);

      /**
       * @description *   The cloud computers for which you want to change their policies must be in the Running state.
       * *   After you call this operation, the assignment result is immediately returned. You can call the [DescribeDesktops](https://help.aliyun.com/document_detail/436815.html) operation to query the assignment of the cloud computer. The value of the `ManagementFlags` response parameter indicates the assignment of the cloud computer. A value of `ASSIGNING` indicates that the cloud computer is being assigned, and other values indicate that the cloud computer is assigned.
       * *   We recommend that you check the assignment every 2 to 5 seconds and perform the checks within 50 seconds. Typically, 1 to 5 seconds are required to complete the assignment.
       *
       * @param request BatchModifyEntitlementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchModifyEntitlementResponse
       */
      Models::BatchModifyEntitlementResponse batchModifyEntitlementWithOptions(const Models::BatchModifyEntitlementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description *   The cloud computers for which you want to change their policies must be in the Running state.
       * *   After you call this operation, the assignment result is immediately returned. You can call the [DescribeDesktops](https://help.aliyun.com/document_detail/436815.html) operation to query the assignment of the cloud computer. The value of the `ManagementFlags` response parameter indicates the assignment of the cloud computer. A value of `ASSIGNING` indicates that the cloud computer is being assigned, and other values indicate that the cloud computer is assigned.
       * *   We recommend that you check the assignment every 2 to 5 seconds and perform the checks within 50 seconds. Typically, 1 to 5 seconds are required to complete the assignment.
       *
       * @param request BatchModifyEntitlementRequest
       * @return BatchModifyEntitlementResponse
       */
      Models::BatchModifyEntitlementResponse batchModifyEntitlement(const Models::BatchModifyEntitlementRequest &request);

      /**
       * @summary Binds a configuration group to resources.
       *
       * @param request BindConfigGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindConfigGroupResponse
       */
      Models::BindConfigGroupResponse bindConfigGroupWithOptions(const Models::BindConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a configuration group to resources.
       *
       * @param request BindConfigGroupRequest
       * @return BindConfigGroupResponse
       */
      Models::BindConfigGroupResponse bindConfigGroup(const Models::BindConfigGroupRequest &request);

      /**
       * @summary Cancels an automatic snapshot policy for cloud computers.
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicyWithOptions(const Models::CancelAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an automatic snapshot policy for cloud computers.
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicy(const Models::CancelAutoSnapshotPolicyRequest &request);

      /**
       * @summary Cancels a file sharing task.
       *
       * @param request CancelCdsFileShareLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCdsFileShareLinkResponse
       */
      Models::CancelCdsFileShareLinkResponse cancelCdsFileShareLinkWithOptions(const Models::CancelCdsFileShareLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a file sharing task.
       *
       * @param request CancelCdsFileShareLinkRequest
       * @return CancelCdsFileShareLinkResponse
       */
      Models::CancelCdsFileShareLinkResponse cancelCdsFileShareLink(const Models::CancelCdsFileShareLinkRequest &request);

      /**
       * @summary Cancels monitoring on stream collaboration.
       *
       * @param request CancelCoordinationForMonitoringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCoordinationForMonitoringResponse
       */
      Models::CancelCoordinationForMonitoringResponse cancelCoordinationForMonitoringWithOptions(const Models::CancelCoordinationForMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels monitoring on stream collaboration.
       *
       * @param request CancelCoordinationForMonitoringRequest
       * @return CancelCoordinationForMonitoringResponse
       */
      Models::CancelCoordinationForMonitoringResponse cancelCoordinationForMonitoring(const Models::CancelCoordinationForMonitoringRequest &request);

      /**
       * @summary Cancels the operation of copying an image to another region.
       *
       * @param request CancelCopyImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCopyImageResponse
       */
      Models::CancelCopyImageResponse cancelCopyImageWithOptions(const Models::CancelCopyImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the operation of copying an image to another region.
       *
       * @param request CancelCopyImageRequest
       * @return CancelCopyImageResponse
       */
      Models::CancelCopyImageResponse cancelCopyImage(const Models::CancelCopyImageRequest &request);

      /**
       * @summary Clones a policy based on an existing global policy.
       *
       * @param request CloneCenterPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneCenterPolicyResponse
       */
      Models::CloneCenterPolicyResponse cloneCenterPolicyWithOptions(const Models::CloneCenterPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones a policy based on an existing global policy.
       *
       * @param request CloneCenterPolicyRequest
       * @return CloneCenterPolicyResponse
       */
      Models::CloneCenterPolicyResponse cloneCenterPolicy(const Models::CloneCenterPolicyRequest &request);

      /**
       * @summary Clones an existing policy to quickly create a policy.
       *
       * @param request ClonePolicyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClonePolicyGroupResponse
       */
      Models::ClonePolicyGroupResponse clonePolicyGroupWithOptions(const Models::ClonePolicyGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones an existing policy to quickly create a policy.
       *
       * @param request ClonePolicyGroupRequest
       * @return ClonePolicyGroupResponse
       */
      Models::ClonePolicyGroupResponse clonePolicyGroup(const Models::ClonePolicyGroupRequest &request);

      /**
       * @summary After you create an object upload task, call this operation to upload the object.
       *
       * @param request CompleteCdsFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompleteCdsFileResponse
       */
      Models::CompleteCdsFileResponse completeCdsFileWithOptions(const Models::CompleteCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After you create an object upload task, call this operation to upload the object.
       *
       * @param request CompleteCdsFileRequest
       * @return CompleteCdsFileResponse
       */
      Models::CompleteCdsFileResponse completeCdsFile(const Models::CompleteCdsFileRequest &request);

      /**
       * @summary Configures a conditional forwarder and trust relationship for a high-definition experience (HDX)-based office network (formerly workspace). You can call the operation to configure a trust relationship for an enterprise Active Directory (AD) office network.
       *
       * @param request ConfigADConnectorTrustRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigADConnectorTrustResponse
       */
      Models::ConfigADConnectorTrustResponse configADConnectorTrustWithOptions(const Models::ConfigADConnectorTrustRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a conditional forwarder and trust relationship for a high-definition experience (HDX)-based office network (formerly workspace). You can call the operation to configure a trust relationship for an enterprise Active Directory (AD) office network.
       *
       * @param request ConfigADConnectorTrustRequest
       * @return ConfigADConnectorTrustResponse
       */
      Models::ConfigADConnectorTrustResponse configADConnectorTrust(const Models::ConfigADConnectorTrustRequest &request);

      /**
       * @param request ConfigADConnectorUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigADConnectorUserResponse
       */
      Models::ConfigADConnectorUserResponse configADConnectorUserWithOptions(const Models::ConfigADConnectorUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConfigADConnectorUserRequest
       * @return ConfigADConnectorUserResponse
       */
      Models::ConfigADConnectorUserResponse configADConnectorUser(const Models::ConfigADConnectorUserRequest &request);

      /**
       * @summary Copies a file or a directory.
       *
       * @param request CopyCdsFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyCdsFileResponse
       */
      Models::CopyCdsFileResponse copyCdsFileWithOptions(const Models::CopyCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies a file or a directory.
       *
       * @param request CopyCdsFileRequest
       * @return CopyCdsFileResponse
       */
      Models::CopyCdsFileResponse copyCdsFile(const Models::CopyCdsFileRequest &request);

      /**
       * @summary Copy an image to another region. If you want to share an image across regions, you can call this operation to copy the image to the destination region and then share the image.
       *
       * @param request CopyImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyImageResponse
       */
      Models::CopyImageResponse copyImageWithOptions(const Models::CopyImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copy an image to another region. If you want to share an image across regions, you can call this operation to copy the image to the destination region and then share the image.
       *
       * @param request CopyImageRequest
       * @return CopyImageResponse
       */
      Models::CopyImageResponse copyImage(const Models::CopyImageRequest &request);

      /**
       * @summary Creates a directory of the Active Directory (AD) type.
       *
       * @description An AD directory is used to connect to an enterprise\\"s existing Active Directory and is suitable for large-scale cloud computer deployment. You are charged directory fees when you connect your AD to cloud computers. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188395.html).
       *
       * @param request CreateADConnectorDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateADConnectorDirectoryResponse
       */
      Models::CreateADConnectorDirectoryResponse createADConnectorDirectoryWithOptions(const Models::CreateADConnectorDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a directory of the Active Directory (AD) type.
       *
       * @description An AD directory is used to connect to an enterprise\\"s existing Active Directory and is suitable for large-scale cloud computer deployment. You are charged directory fees when you connect your AD to cloud computers. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188395.html).
       *
       * @param request CreateADConnectorDirectoryRequest
       * @return CreateADConnectorDirectoryResponse
       */
      Models::CreateADConnectorDirectoryResponse createADConnectorDirectory(const Models::CreateADConnectorDirectoryRequest &request);

      /**
       * @summary Creates an enterprise Active Directory (AD) office network (formerly workspace). Elastic Desktop Service supports the following types of accounts: convenience accounts and enterprise AD accounts.
       *
       * @description When you create an enterprise AD office network, the system automatically creates an AD connector to connect to an enterprise AD. You are charged for the AD connector. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188395.html).
       * After you call this operation to create an AD office network, you must perform the following steps to complete AD domain setting:
       * 1.  Configure a conditional forwarder in a Domain Name System (DNS) server.
       * 2.  Configure a trust relationship in an AD domain controller and call the [ConfigADConnectorTrust](https://help.aliyun.com/document_detail/311258.html) operation to configure the trust relationship with the AD office network.
       * 3.  Call the [ListUserAdOrganizationUnits](https://help.aliyun.com/document_detail/311259.html) operation to query a list of organizational units (OUs) of the AD domain, and call the [ConfigADConnectorUser](https://help.aliyun.com/document_detail/311262.html) operation to specify an OU and administrator for the AD office network.
       *     >  When you create the AD office network, take note of the DomainUserName and DomainPassword parameters. If you specify the parameters, you need to only configure a conditional forwarder. If you do not specify the parameters, you must configure a conditional forwarder, trust relationship, and OU as prompted.
       * For more information, see [Create and manage enterprise AD office networks](https://help.aliyun.com/document_detail/214469.html).
       *
       * @param request CreateADConnectorOfficeSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateADConnectorOfficeSiteResponse
       */
      Models::CreateADConnectorOfficeSiteResponse createADConnectorOfficeSiteWithOptions(const Models::CreateADConnectorOfficeSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an enterprise Active Directory (AD) office network (formerly workspace). Elastic Desktop Service supports the following types of accounts: convenience accounts and enterprise AD accounts.
       *
       * @description When you create an enterprise AD office network, the system automatically creates an AD connector to connect to an enterprise AD. You are charged for the AD connector. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188395.html).
       * After you call this operation to create an AD office network, you must perform the following steps to complete AD domain setting:
       * 1.  Configure a conditional forwarder in a Domain Name System (DNS) server.
       * 2.  Configure a trust relationship in an AD domain controller and call the [ConfigADConnectorTrust](https://help.aliyun.com/document_detail/311258.html) operation to configure the trust relationship with the AD office network.
       * 3.  Call the [ListUserAdOrganizationUnits](https://help.aliyun.com/document_detail/311259.html) operation to query a list of organizational units (OUs) of the AD domain, and call the [ConfigADConnectorUser](https://help.aliyun.com/document_detail/311262.html) operation to specify an OU and administrator for the AD office network.
       *     >  When you create the AD office network, take note of the DomainUserName and DomainPassword parameters. If you specify the parameters, you need to only configure a conditional forwarder. If you do not specify the parameters, you must configure a conditional forwarder, trust relationship, and OU as prompted.
       * For more information, see [Create and manage enterprise AD office networks](https://help.aliyun.com/document_detail/214469.html).
       *
       * @param request CreateADConnectorOfficeSiteRequest
       * @return CreateADConnectorOfficeSiteResponse
       */
      Models::CreateADConnectorOfficeSiteResponse createADConnectorOfficeSite(const Models::CreateADConnectorOfficeSiteRequest &request);

      /**
       * @summary Creates a File Storage NAS (NAS) file system and mount the file system to the workspace in which a desktop group resides.
       *
       * @param request CreateAndBindNasFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAndBindNasFileSystemResponse
       */
      Models::CreateAndBindNasFileSystemResponse createAndBindNasFileSystemWithOptions(const Models::CreateAndBindNasFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a File Storage NAS (NAS) file system and mount the file system to the workspace in which a desktop group resides.
       *
       * @param request CreateAndBindNasFileSystemRequest
       * @return CreateAndBindNasFileSystemResponse
       */
      Models::CreateAndBindNasFileSystemResponse createAndBindNasFileSystem(const Models::CreateAndBindNasFileSystemRequest &request);

      /**
       * @summary Creates an automatic snapshot policy. WUYING WorkSpace automatically creates snapshots based on the time specified by the cron expression in the automatic snapshot policy.
       *
       * @description You can call the operation to create an automatic snapshot policy based on a CRON expression. Then, the system automatically creates snapshots of a cloud desktop based on the policy.
       *
       * @param request CreateAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoSnapshotPolicyResponse
       */
      Models::CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicyWithOptions(const Models::CreateAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic snapshot policy. WUYING WorkSpace automatically creates snapshots based on the time specified by the cron expression in the automatic snapshot policy.
       *
       * @description You can call the operation to create an automatic snapshot policy based on a CRON expression. Then, the system automatically creates snapshots of a cloud desktop based on the policy.
       *
       * @param request CreateAutoSnapshotPolicyRequest
       * @return CreateAutoSnapshotPolicyResponse
       */
      Models::CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicy(const Models::CreateAutoSnapshotPolicyRequest &request);

      /**
       * @summary Creates data transfer plans.
       *
       * @param request CreateBandwidthResourcePackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBandwidthResourcePackagesResponse
       */
      Models::CreateBandwidthResourcePackagesResponse createBandwidthResourcePackagesWithOptions(const Models::CreateBandwidthResourcePackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates data transfer plans.
       *
       * @param request CreateBandwidthResourcePackagesRequest
       * @return CreateBandwidthResourcePackagesResponse
       */
      Models::CreateBandwidthResourcePackagesResponse createBandwidthResourcePackages(const Models::CreateBandwidthResourcePackagesRequest &request);

      /**
       * @summary Creates a custom cloud computer template.
       *
       * @description Cloud computer templates include system templates and custom templates. A system template is the default template provided by Alibaba Cloud. You can call this operation to create a custom template.
       *
       * @param request CreateBundleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBundleResponse
       */
      Models::CreateBundleResponse createBundleWithOptions(const Models::CreateBundleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom cloud computer template.
       *
       * @description Cloud computer templates include system templates and custom templates. A system template is the default template provided by Alibaba Cloud. You can call this operation to create a custom template.
       *
       * @param request CreateBundleRequest
       * @return CreateBundleResponse
       */
      Models::CreateBundleResponse createBundle(const Models::CreateBundleRequest &request);

      /**
       * @summary Uploads a file to a cloud disk.
       *
       * @description After the RAM permissions are authenticated, you can call the CreateCdsFile operation to obtain the upload URL of a file and upload the file to a cloud disk.
       *
       * @param request CreateCdsFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCdsFileResponse
       */
      Models::CreateCdsFileResponse createCdsFileWithOptions(const Models::CreateCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a file to a cloud disk.
       *
       * @description After the RAM permissions are authenticated, you can call the CreateCdsFile operation to obtain the upload URL of a file and upload the file to a cloud disk.
       *
       * @param request CreateCdsFileRequest
       * @return CreateCdsFileResponse
       */
      Models::CreateCdsFileResponse createCdsFile(const Models::CreateCdsFileRequest &request);

      /**
       * @summary Creates a file sharing task.
       *
       * @param request CreateCdsFileShareLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCdsFileShareLinkResponse
       */
      Models::CreateCdsFileShareLinkResponse createCdsFileShareLinkWithOptions(const Models::CreateCdsFileShareLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a file sharing task.
       *
       * @param request CreateCdsFileShareLinkRequest
       * @return CreateCdsFileShareLinkResponse
       */
      Models::CreateCdsFileShareLinkResponse createCdsFileShareLink(const Models::CreateCdsFileShareLinkRequest &request);

      /**
       * @summary Creates a center policy.
       *
       * @param request CreateCenterPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCenterPolicyResponse
       */
      Models::CreateCenterPolicyResponse createCenterPolicyWithOptions(const Models::CreateCenterPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a center policy.
       *
       * @param request CreateCenterPolicyRequest
       * @return CreateCenterPolicyResponse
       */
      Models::CreateCenterPolicyResponse createCenterPolicy(const Models::CreateCenterPolicyRequest &request);

      /**
       * @summary Authorizes a user to use a team space.
       *
       * @description The list of teams of a cloud disk in Cloud Drive Service is synchronized from the Organization tab in the Elastic Desktop Service (EDS) console. You can choose Users > Manager User > User > Organization in the console. If you want to authorize a user to use a team space, you must move the user to the corresponding organization. After you move the user, the user can view the menu bar of the team space on a Cloud Drive Service client.
       *
       * @param request CreateCloudDriveGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudDriveGroupResponse
       */
      Models::CreateCloudDriveGroupResponse createCloudDriveGroupWithOptions(const Models::CreateCloudDriveGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes a user to use a team space.
       *
       * @description The list of teams of a cloud disk in Cloud Drive Service is synchronized from the Organization tab in the Elastic Desktop Service (EDS) console. You can choose Users > Manager User > User > Organization in the console. If you want to authorize a user to use a team space, you must move the user to the corresponding organization. After you move the user, the user can view the menu bar of the team space on a Cloud Drive Service client.
       *
       * @param request CreateCloudDriveGroupRequest
       * @return CreateCloudDriveGroupResponse
       */
      Models::CreateCloudDriveGroupResponse createCloudDriveGroup(const Models::CreateCloudDriveGroupRequest &request);

      /**
       * @summary Creates an enterprise drive.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and pricing of Enterprise Drive Service (formerly Cloud Drive Service). For more information, see [Overview](https://help.aliyun.com/document_detail/386301.html).
       *
       * @param request CreateCloudDriveServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudDriveServiceResponse
       */
      Models::CreateCloudDriveServiceResponse createCloudDriveServiceWithOptions(const Models::CreateCloudDriveServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an enterprise drive.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and pricing of Enterprise Drive Service (formerly Cloud Drive Service). For more information, see [Overview](https://help.aliyun.com/document_detail/386301.html).
       *
       * @param request CreateCloudDriveServiceRequest
       * @return CreateCloudDriveServiceResponse
       */
      Models::CreateCloudDriveServiceResponse createCloudDriveService(const Models::CreateCloudDriveServiceRequest &request);

      /**
       * @summary Creates the users of a cloud disk.
       *
       * @param request CreateCloudDriveUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudDriveUsersResponse
       */
      Models::CreateCloudDriveUsersResponse createCloudDriveUsersWithOptions(const Models::CreateCloudDriveUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates the users of a cloud disk.
       *
       * @param request CreateCloudDriveUsersRequest
       * @return CreateCloudDriveUsersResponse
       */
      Models::CreateCloudDriveUsersResponse createCloudDriveUsers(const Models::CreateCloudDriveUsersRequest &request);

      /**
       * @summary Creates a configuration group. A configuration group stores the setup details for scheduled tasks on cloud computers.
       *
       * @param request CreateConfigGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConfigGroupResponse
       */
      Models::CreateConfigGroupResponse createConfigGroupWithOptions(const Models::CreateConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a configuration group. A configuration group stores the setup details for scheduled tasks on cloud computers.
       *
       * @param request CreateConfigGroupRequest
       * @return CreateConfigGroupResponse
       */
      Models::CreateConfigGroupResponse createConfigGroup(const Models::CreateConfigGroupRequest &request);

      /**
       * @summary Creates a shared group.
       *
       * @description *   To learn about the features, application scenarios, usage limits, scaling policies, and other details of shared groups, refer to [Overview](https://help.aliyun.com/document_detail/290959.html).
       * *   Before you call this operation, make sure that the required resources, such as the office network, cloud computer template, and policies, are created.
       *
       * @param request CreateDesktopGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDesktopGroupResponse
       */
      Models::CreateDesktopGroupResponse createDesktopGroupWithOptions(const Models::CreateDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a shared group.
       *
       * @description *   To learn about the features, application scenarios, usage limits, scaling policies, and other details of shared groups, refer to [Overview](https://help.aliyun.com/document_detail/290959.html).
       * *   Before you call this operation, make sure that the required resources, such as the office network, cloud computer template, and policies, are created.
       *
       * @param request CreateDesktopGroupRequest
       * @return CreateDesktopGroupResponse
       */
      Models::CreateDesktopGroupResponse createDesktopGroup(const Models::CreateDesktopGroupRequest &request);

      /**
       * @summary 创建桌面超卖组
       *
       * @param request CreateDesktopOversoldGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDesktopOversoldGroupResponse
       */
      Models::CreateDesktopOversoldGroupResponse createDesktopOversoldGroupWithOptions(const Models::CreateDesktopOversoldGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建桌面超卖组
       *
       * @param request CreateDesktopOversoldGroupRequest
       * @return CreateDesktopOversoldGroupResponse
       */
      Models::CreateDesktopOversoldGroupResponse createDesktopOversoldGroup(const Models::CreateDesktopOversoldGroupRequest &request);

      /**
       * @summary Creates cloud computers. If you specify end users when you create cloud computers, the cloud computers are assigned to the end users after the cloud computers are created.
       *
       * @description Before you create cloud computers, complete the following preparations:
       * *   An office network (formerly called workspace) and users are created. For more information, see:
       *     *   Convenience office network: [CreateSimpleOfficeSite](https://help.aliyun.com/document_detail/215416.html) and [CreateUsers](https://help.aliyun.com/document_detail/437832.html).
       *     *   Active Directory (AD) office network: [CreateADConnectorOfficeSite](https://help.aliyun.com/document_detail/215417.html) and [Create an AD user](https://help.aliyun.com/document_detail/188619.html).
       * *   Make sure a cloud computer template exists. If no cloud computer template exists, call the [CreateBundle](https://help.aliyun.com/document_detail/188883.html) operation to create a template.
       * *   Make sure a policy exists. If no policy exists, call the [CreatePolicyGroup](https://help.aliyun.com/document_detail/188889.html) operation to create a policy.
       * If you want the cloud computers to automatically execute a custom command script, you can use the `UserCommands` field to configure a custom command.
       *
       * @param tmpReq CreateDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDesktopsResponse
       */
      Models::CreateDesktopsResponse createDesktopsWithOptions(const Models::CreateDesktopsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates cloud computers. If you specify end users when you create cloud computers, the cloud computers are assigned to the end users after the cloud computers are created.
       *
       * @description Before you create cloud computers, complete the following preparations:
       * *   An office network (formerly called workspace) and users are created. For more information, see:
       *     *   Convenience office network: [CreateSimpleOfficeSite](https://help.aliyun.com/document_detail/215416.html) and [CreateUsers](https://help.aliyun.com/document_detail/437832.html).
       *     *   Active Directory (AD) office network: [CreateADConnectorOfficeSite](https://help.aliyun.com/document_detail/215417.html) and [Create an AD user](https://help.aliyun.com/document_detail/188619.html).
       * *   Make sure a cloud computer template exists. If no cloud computer template exists, call the [CreateBundle](https://help.aliyun.com/document_detail/188883.html) operation to create a template.
       * *   Make sure a policy exists. If no policy exists, call the [CreatePolicyGroup](https://help.aliyun.com/document_detail/188889.html) operation to create a policy.
       * If you want the cloud computers to automatically execute a custom command script, you can use the `UserCommands` field to configure a custom command.
       *
       * @param request CreateDesktopsRequest
       * @return CreateDesktopsResponse
       */
      Models::CreateDesktopsResponse createDesktops(const Models::CreateDesktopsRequest &request);

      /**
       * @summary Enables the disk encryption feature and adds the service-linked role that is encrypted by Cloud Drive Service to a Resource Access Management (RAM) user.
       *
       * @param request CreateDiskEncryptionServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiskEncryptionServiceResponse
       */
      Models::CreateDiskEncryptionServiceResponse createDiskEncryptionServiceWithOptions(const Models::CreateDiskEncryptionServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the disk encryption feature and adds the service-linked role that is encrypted by Cloud Drive Service to a Resource Access Management (RAM) user.
       *
       * @param request CreateDiskEncryptionServiceRequest
       * @return CreateDiskEncryptionServiceResponse
       */
      Models::CreateDiskEncryptionServiceResponse createDiskEncryptionService(const Models::CreateDiskEncryptionServiceRequest &request);

      /**
       * @summary Creates a user-level storage resource.
       *
       * @param request CreateDriveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDriveResponse
       */
      Models::CreateDriveResponse createDriveWithOptions(const Models::CreateDriveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user-level storage resource.
       *
       * @param request CreateDriveRequest
       * @return CreateDriveResponse
       */
      Models::CreateDriveResponse createDrive(const Models::CreateDriveRequest &request);

      /**
       * @summary Creates a data report export task.
       *
       * @param request CreateEcdReportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEcdReportTaskResponse
       */
      Models::CreateEcdReportTaskResponse createEcdReportTaskWithOptions(const Models::CreateEcdReportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data report export task.
       *
       * @param request CreateEcdReportTaskRequest
       * @return CreateEcdReportTaskResponse
       */
      Models::CreateEcdReportTaskResponse createEcdReportTask(const Models::CreateEcdReportTaskRequest &request);

      /**
       * @summary 添加DNAT条目
       *
       * @param request CreateForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateForwardEntryResponse
       */
      Models::CreateForwardEntryResponse createForwardEntryWithOptions(const Models::CreateForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加DNAT条目
       *
       * @param request CreateForwardEntryRequest
       * @return CreateForwardEntryResponse
       */
      Models::CreateForwardEntryResponse createForwardEntry(const Models::CreateForwardEntryRequest &request);

      /**
       * @summary Creates a custom image based on a deployed cloud computer. Then, you can use the custom image to create cloud computers that have the same configurations. This prevents the repeated settings when you create cloud computers.
       *
       * @param request CreateImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageResponse
       */
      Models::CreateImageResponse createImageWithOptions(const Models::CreateImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom image based on a deployed cloud computer. Then, you can use the custom image to create cloud computers that have the same configurations. This prevents the repeated settings when you create cloud computers.
       *
       * @param request CreateImageRequest
       * @return CreateImageResponse
       */
      Models::CreateImageResponse createImage(const Models::CreateImageRequest &request);

      /**
       * @summary Create a NAS file system.
       *
       * @description <props="china">
       * - Each standard workspace can create one NAS file system to meet the need for sharing files between cloud desktops in the workspace.
       * - The system will automatically create a general-purpose NAS file system (with storage specifications of Capacity and Performance, with capacities of 10 PiB and 1 PiB respectively) and generate a default mount point.
       * - The NAS file system uses pay-as-you-go by default. You need to pay for the actual storage usage. You can also purchase resource packages to offset the storage usage.
       * For more information, see [Creating Shared Storage NAS](https://help.aliyun.com/document_detail/214481.html).
       * <props="intl">
       * - Each standard workspace can create one NAS file system to meet the need for sharing files between cloud desktops in the workspace.
       * - The system will automatically create a general-purpose NAS file system (with storage specifications of Capacity and Performance, with capacities of 10 PiB and 1 PiB respectively) and generate a default mount point.
       * - The NAS file system uses pay-as-you-go by default. You need to pay for the actual storage usage. You can also purchase storage packages to offset the storage usage.
       * For more information, see [Creating Shared Storage NAS](https://help.aliyun.com/document_detail/214481.html).
       *
       * @param request CreateNASFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNASFileSystemResponse
       */
      Models::CreateNASFileSystemResponse createNASFileSystemWithOptions(const Models::CreateNASFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a NAS file system.
       *
       * @description <props="china">
       * - Each standard workspace can create one NAS file system to meet the need for sharing files between cloud desktops in the workspace.
       * - The system will automatically create a general-purpose NAS file system (with storage specifications of Capacity and Performance, with capacities of 10 PiB and 1 PiB respectively) and generate a default mount point.
       * - The NAS file system uses pay-as-you-go by default. You need to pay for the actual storage usage. You can also purchase resource packages to offset the storage usage.
       * For more information, see [Creating Shared Storage NAS](https://help.aliyun.com/document_detail/214481.html).
       * <props="intl">
       * - Each standard workspace can create one NAS file system to meet the need for sharing files between cloud desktops in the workspace.
       * - The system will automatically create a general-purpose NAS file system (with storage specifications of Capacity and Performance, with capacities of 10 PiB and 1 PiB respectively) and generate a default mount point.
       * - The NAS file system uses pay-as-you-go by default. You need to pay for the actual storage usage. You can also purchase storage packages to offset the storage usage.
       * For more information, see [Creating Shared Storage NAS](https://help.aliyun.com/document_detail/214481.html).
       *
       * @param request CreateNASFileSystemRequest
       * @return CreateNASFileSystemResponse
       */
      Models::CreateNASFileSystemResponse createNASFileSystem(const Models::CreateNASFileSystemRequest &request);

      /**
       * @summary 新建NAT网关
       *
       * @param request CreateNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGatewayWithOptions(const Models::CreateNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建NAT网关
       *
       * @param request CreateNatGatewayRequest
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGateway(const Models::CreateNatGatewayRequest &request);

      /**
       * @summary Creates a premium bandwidth plan for an office network.
       *
       * @param request CreateNetworkPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkPackageResponse
       */
      Models::CreateNetworkPackageResponse createNetworkPackageWithOptions(const Models::CreateNetworkPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a premium bandwidth plan for an office network.
       *
       * @param request CreateNetworkPackageRequest
       * @return CreateNetworkPackageResponse
       */
      Models::CreateNetworkPackageResponse createNetworkPackage(const Models::CreateNetworkPackageRequest &request);

      /**
       * @summary Creates a cloud computer policy.
       *
       * @description A cloud computer policy is a collection of rules to manage cloud computers in performance and security. For example, you can create a basic policy that involves the disk mapping, USB redirection, watermarking features and rules such as DNS rules. For more information, see [Policy overview](https://help.aliyun.com/document_detail/189345.html).
       *
       * @param request CreatePolicyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyGroupResponse
       */
      Models::CreatePolicyGroupResponse createPolicyGroupWithOptions(const Models::CreatePolicyGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud computer policy.
       *
       * @description A cloud computer policy is a collection of rules to manage cloud computers in performance and security. For example, you can create a basic policy that involves the disk mapping, USB redirection, watermarking features and rules such as DNS rules. For more information, see [Policy overview](https://help.aliyun.com/document_detail/189345.html).
       *
       * @param request CreatePolicyGroupRequest
       * @return CreatePolicyGroupResponse
       */
      Models::CreatePolicyGroupResponse createPolicyGroup(const Models::CreatePolicyGroupRequest &request);

      /**
       * @summary Creates a Resource Access Management (RAM) directory.
       *
       * @description Before you create a RAM directory, complete the following preparations:
       * *   Call the `CreateVpc` operation to create a virtual private cloud (VPC) in a region supported by Elastic Desktop Service.
       * *   Call the `CreateVSwitch` operation to create a vSwitch in the VPC. The vSwitch is in a zone that is supported by Elastic Desktop Service. You can call the [DescribeZones](https://help.aliyun.com/document_detail/196648.html) operation to obtain the most recent zone list for a region supported by Elastic Desktop Service
       *
       * @param request CreateRAMDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRAMDirectoryResponse
       */
      Models::CreateRAMDirectoryResponse createRAMDirectoryWithOptions(const Models::CreateRAMDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Resource Access Management (RAM) directory.
       *
       * @description Before you create a RAM directory, complete the following preparations:
       * *   Call the `CreateVpc` operation to create a virtual private cloud (VPC) in a region supported by Elastic Desktop Service.
       * *   Call the `CreateVSwitch` operation to create a vSwitch in the VPC. The vSwitch is in a zone that is supported by Elastic Desktop Service. You can call the [DescribeZones](https://help.aliyun.com/document_detail/196648.html) operation to obtain the most recent zone list for a region supported by Elastic Desktop Service
       *
       * @param request CreateRAMDirectoryRequest
       * @return CreateRAMDirectoryResponse
       */
      Models::CreateRAMDirectoryResponse createRAMDirectory(const Models::CreateRAMDirectoryRequest &request);

      /**
       * @summary 新建路由条目
       *
       * @param request CreateRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteEntryResponse
       */
      Models::CreateRouteEntryResponse createRouteEntryWithOptions(const Models::CreateRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建路由条目
       *
       * @param request CreateRouteEntryRequest
       * @return CreateRouteEntryResponse
       */
      Models::CreateRouteEntryResponse createRouteEntry(const Models::CreateRouteEntryRequest &request);

      /**
       * @summary 新建自定义路由表
       *
       * @param request CreateRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteTableResponse
       */
      Models::CreateRouteTableResponse createRouteTableWithOptions(const Models::CreateRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建自定义路由表
       *
       * @param request CreateRouteTableRequest
       * @return CreateRouteTableResponse
       */
      Models::CreateRouteTableResponse createRouteTable(const Models::CreateRouteTableRequest &request);

      /**
       * @summary Creates an office network of the convenience account type. Elastic Desktop Service supports the following types of accounts: convenience accounts and enterprise AD accounts.
       *
       * @param request CreateSimpleOfficeSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSimpleOfficeSiteResponse
       */
      Models::CreateSimpleOfficeSiteResponse createSimpleOfficeSiteWithOptions(const Models::CreateSimpleOfficeSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an office network of the convenience account type. Elastic Desktop Service supports the following types of accounts: convenience accounts and enterprise AD accounts.
       *
       * @param request CreateSimpleOfficeSiteRequest
       * @return CreateSimpleOfficeSiteResponse
       */
      Models::CreateSimpleOfficeSiteResponse createSimpleOfficeSite(const Models::CreateSimpleOfficeSiteRequest &request);

      /**
       * @summary Create a snapshot for a disk of a cloud computer to back up or restore the data on the disk.
       *
       * @description The cloud computer must be in the **Running** or **Stopped** state.
       *
       * @param request CreateSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const Models::CreateSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a snapshot for a disk of a cloud computer to back up or restore the data on the disk.
       *
       * @description The cloud computer must be in the **Running** or **Stopped** state.
       *
       * @param request CreateSnapshotRequest
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshot(const Models::CreateSnapshotRequest &request);

      /**
       * @summary 添加SNAT条目
       *
       * @param request CreateSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnatEntryResponse
       */
      Models::CreateSnatEntryResponse createSnatEntryWithOptions(const Models::CreateSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加SNAT条目
       *
       * @param request CreateSnatEntryRequest
       * @return CreateSnatEntryResponse
       */
      Models::CreateSnatEntryResponse createSnatEntry(const Models::CreateSnatEntryRequest &request);

      /**
       * @summary 新建子网
       *
       * @param request CreateSubnetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSubnetResponse
       */
      Models::CreateSubnetResponse createSubnetWithOptions(const Models::CreateSubnetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建子网
       *
       * @param request CreateSubnetRequest
       * @return CreateSubnetResponse
       */
      Models::CreateSubnetResponse createSubnet(const Models::CreateSubnetRequest &request);

      /**
       * @summary Creates a custom cloud computer template. A cloud computer template (or simply "template") simplifies the process of creating cloud computers by providing a predefined set of configurations. This eliminates the need to manually configure each setting, saving significant time and effort.
       *
       * @description When you call this operation, take note of the following item:
       * *   Most parameters in templates are optional. When you create a template, Elastic Desktop Service (EDS) does not validate the existence or correctness of the parameter values you specify. The parameter values in the template are only verified when you use the template to create cloud computers.
       * *   For parameters that include the region attribute in the template, it\\"s important to note that if the specified region doesn’t match the region where the template is used to create a cloud computer, those parameters will not take effect.
       *
       * @param request CreateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const Models::CreateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom cloud computer template. A cloud computer template (or simply "template") simplifies the process of creating cloud computers by providing a predefined set of configurations. This eliminates the need to manually configure each setting, saving significant time and effort.
       *
       * @description When you call this operation, take note of the following item:
       * *   Most parameters in templates are optional. When you create a template, Elastic Desktop Service (EDS) does not validate the existence or correctness of the parameter values you specify. The parameter values in the template are only verified when you use the template to create cloud computers.
       * *   For parameters that include the region attribute in the template, it\\"s important to note that if the specified region doesn’t match the region where the template is used to create a cloud computer, those parameters will not take effect.
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

      /**
       * @summary Deletes an automatic snapshot policy.
       *
       * @param request DeleteAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoSnapshotPolicyResponse
       */
      Models::DeleteAutoSnapshotPolicyResponse deleteAutoSnapshotPolicyWithOptions(const Models::DeleteAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an automatic snapshot policy.
       *
       * @param request DeleteAutoSnapshotPolicyRequest
       * @return DeleteAutoSnapshotPolicyResponse
       */
      Models::DeleteAutoSnapshotPolicyResponse deleteAutoSnapshotPolicy(const Models::DeleteAutoSnapshotPolicyRequest &request);

      /**
       * @summary Deletes custom cloud computer templates.
       *
       * @param request DeleteBundlesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBundlesResponse
       */
      Models::DeleteBundlesResponse deleteBundlesWithOptions(const Models::DeleteBundlesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes custom cloud computer templates.
       *
       * @param request DeleteBundlesRequest
       * @return DeleteBundlesResponse
       */
      Models::DeleteBundlesResponse deleteBundles(const Models::DeleteBundlesRequest &request);

      /**
       * @summary Delete files or folders from the network disk.
       *
       * @param request DeleteCdsFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCdsFileResponse
       */
      Models::DeleteCdsFileResponse deleteCdsFileWithOptions(const Models::DeleteCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete files or folders from the network disk.
       *
       * @param request DeleteCdsFileRequest
       * @return DeleteCdsFileResponse
       */
      Models::DeleteCdsFileResponse deleteCdsFile(const Models::DeleteCdsFileRequest &request);

      /**
       * @summary Deletes a center policy
       *
       * @param request DeleteCenterPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCenterPolicyResponse
       */
      Models::DeleteCenterPolicyResponse deleteCenterPolicyWithOptions(const Models::DeleteCenterPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a center policy
       *
       * @param request DeleteCenterPolicyRequest
       * @return DeleteCenterPolicyResponse
       */
      Models::DeleteCenterPolicyResponse deleteCenterPolicy(const Models::DeleteCenterPolicyRequest &request);

      /**
       * @summary Deletes team spaces.
       *
       * @param request DeleteCloudDriveGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudDriveGroupsResponse
       */
      Models::DeleteCloudDriveGroupsResponse deleteCloudDriveGroupsWithOptions(const Models::DeleteCloudDriveGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes team spaces.
       *
       * @param request DeleteCloudDriveGroupsRequest
       * @return DeleteCloudDriveGroupsResponse
       */
      Models::DeleteCloudDriveGroupsResponse deleteCloudDriveGroups(const Models::DeleteCloudDriveGroupsRequest &request);

      /**
       * @summary 删除无影网盘中的终端用户
       *
       * @param request DeleteCloudDriveUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudDriveUsersResponse
       */
      Models::DeleteCloudDriveUsersResponse deleteCloudDriveUsersWithOptions(const Models::DeleteCloudDriveUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除无影网盘中的终端用户
       *
       * @param request DeleteCloudDriveUsersRequest
       * @return DeleteCloudDriveUsersResponse
       */
      Models::DeleteCloudDriveUsersResponse deleteCloudDriveUsers(const Models::DeleteCloudDriveUsersRequest &request);

      /**
       * @summary Deletes a configuration group.
       *
       * @param request DeleteConfigGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConfigGroupResponse
       */
      Models::DeleteConfigGroupResponse deleteConfigGroupWithOptions(const Models::DeleteConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a configuration group.
       *
       * @param request DeleteConfigGroupRequest
       * @return DeleteConfigGroupResponse
       */
      Models::DeleteConfigGroupResponse deleteConfigGroup(const Models::DeleteConfigGroupRequest &request);

      /**
       * @summary Releases a cloud computer share.
       *
       * @description *   Before releasing a cloud computer share, ensure that no cloud computers within it are in the Connected state and that no end users have access permissions to it.
       * *   You cannot delete a cloud computer share with an active subscription if it contains cloud computers that have not yet expired.
       * *   Deleting a pay-as-you-go cloud computer share will release all pay-as-you-go cloud computers within it.
       *
       * @param request DeleteDesktopGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDesktopGroupResponse
       */
      Models::DeleteDesktopGroupResponse deleteDesktopGroupWithOptions(const Models::DeleteDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a cloud computer share.
       *
       * @description *   Before releasing a cloud computer share, ensure that no cloud computers within it are in the Connected state and that no end users have access permissions to it.
       * *   You cannot delete a cloud computer share with an active subscription if it contains cloud computers that have not yet expired.
       * *   Deleting a pay-as-you-go cloud computer share will release all pay-as-you-go cloud computers within it.
       *
       * @param request DeleteDesktopGroupRequest
       * @return DeleteDesktopGroupResponse
       */
      Models::DeleteDesktopGroupResponse deleteDesktopGroup(const Models::DeleteDesktopGroupRequest &request);

      /**
       * @summary Releases pay-as-you-go cloud computers or expired subscription cloud computers.
       *
       * @param request DeleteDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDesktopsResponse
       */
      Models::DeleteDesktopsResponse deleteDesktopsWithOptions(const Models::DeleteDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases pay-as-you-go cloud computers or expired subscription cloud computers.
       *
       * @param request DeleteDesktopsRequest
       * @return DeleteDesktopsResponse
       */
      Models::DeleteDesktopsResponse deleteDesktops(const Models::DeleteDesktopsRequest &request);

      /**
       * @summary Deletes trusted devices.
       *
       * @description You can call the operation to manage client devices.
       *
       * @param request DeleteDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDevicesResponse
       */
      Models::DeleteDevicesResponse deleteDevicesWithOptions(const Models::DeleteDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes trusted devices.
       *
       * @description You can call the operation to manage client devices.
       *
       * @param request DeleteDevicesRequest
       * @return DeleteDevicesResponse
       */
      Models::DeleteDevicesResponse deleteDevices(const Models::DeleteDevicesRequest &request);

      /**
       * @summary Deletes one or more directories.
       *
       * @description You cannot delete a directory that has a cloud computer or is used by a cloud computer.
       *
       * @param request DeleteDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDirectoriesResponse
       */
      Models::DeleteDirectoriesResponse deleteDirectoriesWithOptions(const Models::DeleteDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more directories.
       *
       * @description You cannot delete a directory that has a cloud computer or is used by a cloud computer.
       *
       * @param request DeleteDirectoriesRequest
       * @return DeleteDirectoriesResponse
       */
      Models::DeleteDirectoriesResponse deleteDirectories(const Models::DeleteDirectoriesRequest &request);

      /**
       * @summary Deletes a drive.
       *
       * @param request DeleteDriveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDriveResponse
       */
      Models::DeleteDriveResponse deleteDriveWithOptions(const Models::DeleteDriveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a drive.
       *
       * @param request DeleteDriveRequest
       * @return DeleteDriveResponse
       */
      Models::DeleteDriveResponse deleteDrive(const Models::DeleteDriveRequest &request);

      /**
       * @param request DeleteEduRoomRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEduRoomResponse
       */
      Models::DeleteEduRoomResponse deleteEduRoomWithOptions(const Models::DeleteEduRoomRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteEduRoomRequest
       * @return DeleteEduRoomResponse
       */
      Models::DeleteEduRoomResponse deleteEduRoom(const Models::DeleteEduRoomRequest &request);

      /**
       * @summary 删除DNAT条目
       *
       * @param request DeleteForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteForwardEntryResponse
       */
      Models::DeleteForwardEntryResponse deleteForwardEntryWithOptions(const Models::DeleteForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除DNAT条目
       *
       * @param request DeleteForwardEntryRequest
       * @return DeleteForwardEntryResponse
       */
      Models::DeleteForwardEntryResponse deleteForwardEntry(const Models::DeleteForwardEntryRequest &request);

      /**
       * @summary Deletes one or more custom images.
       *
       * @description *   Images include system images and custom images. System images cannot be deleted.
       * *   If an image that you want to delete is referenced by a cloud computer template, call the [DeleteBundles](https://help.aliyun.com/document_detail/436972.html) operation to delete the cloud computer template before you delete the image.
       *
       * @param request DeleteImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImagesResponse
       */
      Models::DeleteImagesResponse deleteImagesWithOptions(const Models::DeleteImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more custom images.
       *
       * @description *   Images include system images and custom images. System images cannot be deleted.
       * *   If an image that you want to delete is referenced by a cloud computer template, call the [DeleteBundles](https://help.aliyun.com/document_detail/436972.html) operation to delete the cloud computer template before you delete the image.
       *
       * @param request DeleteImagesRequest
       * @return DeleteImagesResponse
       */
      Models::DeleteImagesResponse deleteImages(const Models::DeleteImagesRequest &request);

      /**
       * @summary Deletes NAS file systems.
       *
       * @description Before you delete a File Storage NAS (NAS) file system, make sure that the data you want to retain is backed up.
       * >Warning: If a NAS file system is deleted, data stored in the NAS file system cannot be restored. Proceed with caution when you delete NAS file systems.
       *
       * @param request DeleteNASFileSystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNASFileSystemsResponse
       */
      Models::DeleteNASFileSystemsResponse deleteNASFileSystemsWithOptions(const Models::DeleteNASFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes NAS file systems.
       *
       * @description Before you delete a File Storage NAS (NAS) file system, make sure that the data you want to retain is backed up.
       * >Warning: If a NAS file system is deleted, data stored in the NAS file system cannot be restored. Proceed with caution when you delete NAS file systems.
       *
       * @param request DeleteNASFileSystemsRequest
       * @return DeleteNASFileSystemsResponse
       */
      Models::DeleteNASFileSystemsResponse deleteNASFileSystems(const Models::DeleteNASFileSystemsRequest &request);

      /**
       * @summary 删除NAT网关
       *
       * @param request DeleteNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNatGatewayResponse
       */
      Models::DeleteNatGatewayResponse deleteNatGatewayWithOptions(const Models::DeleteNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除NAT网关
       *
       * @param request DeleteNatGatewayRequest
       * @return DeleteNatGatewayResponse
       */
      Models::DeleteNatGatewayResponse deleteNatGateway(const Models::DeleteNatGatewayRequest &request);

      /**
       * @summary Deletes one or more premium bandwidth plans.
       *
       * @param request DeleteNetworkPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkPackagesResponse
       */
      Models::DeleteNetworkPackagesResponse deleteNetworkPackagesWithOptions(const Models::DeleteNetworkPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more premium bandwidth plans.
       *
       * @param request DeleteNetworkPackagesRequest
       * @return DeleteNetworkPackagesResponse
       */
      Models::DeleteNetworkPackagesResponse deleteNetworkPackages(const Models::DeleteNetworkPackagesRequest &request);

      /**
       * @summary Deletes office networks (formerly workspaces).
       *
       * @description Before you delete an office network, make sure that the following operations are complete:
       * *   All cloud computers in the office network are released.
       * *   The data that you want to retain is backed up.
       * >  Resources and data on cloud computers in an office network cannot be restored after you delete it. Proceed with caution.
       *
       * @param request DeleteOfficeSitesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOfficeSitesResponse
       */
      Models::DeleteOfficeSitesResponse deleteOfficeSitesWithOptions(const Models::DeleteOfficeSitesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes office networks (formerly workspaces).
       *
       * @description Before you delete an office network, make sure that the following operations are complete:
       * *   All cloud computers in the office network are released.
       * *   The data that you want to retain is backed up.
       * >  Resources and data on cloud computers in an office network cannot be restored after you delete it. Proceed with caution.
       *
       * @param request DeleteOfficeSitesRequest
       * @return DeleteOfficeSitesResponse
       */
      Models::DeleteOfficeSitesResponse deleteOfficeSites(const Models::DeleteOfficeSitesRequest &request);

      /**
       * @summary Deletes one or more custom cloud computer policies.
       *
       * @description *   You cannot delete the cloud computer policy created by the Elastic Desktop Service (EDS) system.
       * *   You cannot delete the cloud computer policies that are associated with cloud computers.
       *
       * @param request DeletePolicyGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyGroupsResponse
       */
      Models::DeletePolicyGroupsResponse deletePolicyGroupsWithOptions(const Models::DeletePolicyGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more custom cloud computer policies.
       *
       * @description *   You cannot delete the cloud computer policy created by the Elastic Desktop Service (EDS) system.
       * *   You cannot delete the cloud computer policies that are associated with cloud computers.
       *
       * @param request DeletePolicyGroupsRequest
       * @return DeletePolicyGroupsResponse
       */
      Models::DeletePolicyGroupsResponse deletePolicyGroups(const Models::DeletePolicyGroupsRequest &request);

      /**
       * @summary 删除路由条目
       *
       * @param request DeleteRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteEntryResponse
       */
      Models::DeleteRouteEntryResponse deleteRouteEntryWithOptions(const Models::DeleteRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除路由条目
       *
       * @param request DeleteRouteEntryRequest
       * @return DeleteRouteEntryResponse
       */
      Models::DeleteRouteEntryResponse deleteRouteEntry(const Models::DeleteRouteEntryRequest &request);

      /**
       * @summary 删除自定义路由表
       *
       * @param request DeleteRouteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteTableResponse
       */
      Models::DeleteRouteTableResponse deleteRouteTableWithOptions(const Models::DeleteRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义路由表
       *
       * @param request DeleteRouteTableRequest
       * @return DeleteRouteTableResponse
       */
      Models::DeleteRouteTableResponse deleteRouteTable(const Models::DeleteRouteTableRequest &request);

      /**
       * @summary Deletes one or more snapshots.
       *
       * @description If the IDs of the snapshots that you specify do not exist, requests are ignored.
       *
       * @param request DeleteSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshotWithOptions(const Models::DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more snapshots.
       *
       * @description If the IDs of the snapshots that you specify do not exist, requests are ignored.
       *
       * @param request DeleteSnapshotRequest
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshot(const Models::DeleteSnapshotRequest &request);

      /**
       * @summary 删除SNAT条目
       *
       * @param request DeleteSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnatEntryResponse
       */
      Models::DeleteSnatEntryResponse deleteSnatEntryWithOptions(const Models::DeleteSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除SNAT条目
       *
       * @param request DeleteSnatEntryRequest
       * @return DeleteSnatEntryResponse
       */
      Models::DeleteSnatEntryResponse deleteSnatEntry(const Models::DeleteSnatEntryRequest &request);

      /**
       * @summary 删除子网
       *
       * @param request DeleteSubnetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSubnetResponse
       */
      Models::DeleteSubnetResponse deleteSubnetWithOptions(const Models::DeleteSubnetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除子网
       *
       * @param request DeleteSubnetRequest
       * @return DeleteSubnetResponse
       */
      Models::DeleteSubnetResponse deleteSubnet(const Models::DeleteSubnetRequest &request);

      /**
       * @summary Deletes custom cloud computer templates.
       *
       * @description Deleting a template does not affect cloud computers created from it or the associated resources.
       *
       * @param request DeleteTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplatesResponse
       */
      Models::DeleteTemplatesResponse deleteTemplatesWithOptions(const Models::DeleteTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes custom cloud computer templates.
       *
       * @description Deleting a template does not affect cloud computers created from it or the associated resources.
       *
       * @param request DeleteTemplatesRequest
       * @return DeleteTemplatesResponse
       */
      Models::DeleteTemplatesResponse deleteTemplates(const Models::DeleteTemplatesRequest &request);

      /**
       * @summary Delete virtual multi-factor authentication (MFA) devices.
       *
       * @description If an MFA device is deleted, the device is unbound, reset, and disabled. When an Active Directory (AD) user wants to connect to the cloud desktop that is bound to the MFA device, the AD user must bind a new MFA device.
       *
       * @param request DeleteVirtualMFADeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVirtualMFADeviceResponse
       */
      Models::DeleteVirtualMFADeviceResponse deleteVirtualMFADeviceWithOptions(const Models::DeleteVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete virtual multi-factor authentication (MFA) devices.
       *
       * @description If an MFA device is deleted, the device is unbound, reset, and disabled. When an Active Directory (AD) user wants to connect to the cloud desktop that is bound to the MFA device, the AD user must bind a new MFA device.
       *
       * @param request DeleteVirtualMFADeviceRequest
       * @return DeleteVirtualMFADeviceResponse
       */
      Models::DeleteVirtualMFADeviceResponse deleteVirtualMFADevice(const Models::DeleteVirtualMFADeviceRequest &request);

      /**
       * @summary Queries the details of an access control list (ACL) of an office network or a cloud computer.
       *
       * @param request DescribeAclEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclEntriesResponse
       */
      Models::DescribeAclEntriesResponse describeAclEntriesWithOptions(const Models::DescribeAclEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an access control list (ACL) of an office network or a cloud computer.
       *
       * @param request DescribeAclEntriesRequest
       * @return DescribeAclEntriesResponse
       */
      Models::DescribeAclEntriesResponse describeAclEntries(const Models::DescribeAclEntriesRequest &request);

      /**
       * @summary Queries the automatic snapshot policy.
       *
       * @description You can view an automatic snapshot policy that is associated with a cloud desktop in the Elastic Desktop Service (EDS) console. To view the automatic snapshot policy, you can go to the EDS console, choose Deployment > Snapshots in the left-side navigation pane, and then view an automatic snapshot policy on the Snapshots page.
       *
       * @param request DescribeAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoSnapshotPolicyResponse
       */
      Models::DescribeAutoSnapshotPolicyResponse describeAutoSnapshotPolicyWithOptions(const Models::DescribeAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the automatic snapshot policy.
       *
       * @description You can view an automatic snapshot policy that is associated with a cloud desktop in the Elastic Desktop Service (EDS) console. To view the automatic snapshot policy, you can go to the EDS console, choose Deployment > Snapshots in the left-side navigation pane, and then view an automatic snapshot policy on the Snapshots page.
       *
       * @param request DescribeAutoSnapshotPolicyRequest
       * @return DescribeAutoSnapshotPolicyResponse
       */
      Models::DescribeAutoSnapshotPolicyResponse describeAutoSnapshotPolicy(const Models::DescribeAutoSnapshotPolicyRequest &request);

      /**
       * @summary Queries the details of cloud computer templates.
       *
       * @param request DescribeBundlesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBundlesResponse
       */
      Models::DescribeBundlesResponse describeBundlesWithOptions(const Models::DescribeBundlesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of cloud computer templates.
       *
       * @param request DescribeBundlesRequest
       * @return DescribeBundlesResponse
       */
      Models::DescribeBundlesResponse describeBundles(const Models::DescribeBundlesRequest &request);

      /**
       * @summary Queries file sharing links of a cloud disk in Cloud Drive Service.
       *
       * @param request DescribeCdsFileShareLinksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdsFileShareLinksResponse
       */
      Models::DescribeCdsFileShareLinksResponse describeCdsFileShareLinksWithOptions(const Models::DescribeCdsFileShareLinksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries file sharing links of a cloud disk in Cloud Drive Service.
       *
       * @param request DescribeCdsFileShareLinksRequest
       * @return DescribeCdsFileShareLinksResponse
       */
      Models::DescribeCdsFileShareLinksResponse describeCdsFileShareLinks(const Models::DescribeCdsFileShareLinksRequest &request);

      /**
       * @summary Queries the details of all Cloud Enterprise Network (CEN) instances within an Alibaba Cloud account.
       *
       * @param request DescribeCensRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCensResponse
       */
      Models::DescribeCensResponse describeCensWithOptions(const Models::DescribeCensRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of all Cloud Enterprise Network (CEN) instances within an Alibaba Cloud account.
       *
       * @param request DescribeCensRequest
       * @return DescribeCensResponse
       */
      Models::DescribeCensResponse describeCens(const Models::DescribeCensRequest &request);

      /**
       * @summary Queries center policies.
       *
       * @param request DescribeCenterPolicyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCenterPolicyListResponse
       */
      Models::DescribeCenterPolicyListResponse describeCenterPolicyListWithOptions(const Models::DescribeCenterPolicyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries center policies.
       *
       * @param request DescribeCenterPolicyListRequest
       * @return DescribeCenterPolicyListResponse
       */
      Models::DescribeCenterPolicyListResponse describeCenterPolicyList(const Models::DescribeCenterPolicyListRequest &request);

      /**
       * @summary Queries the operation logs of end users. For example, the logs record the events that end users start and stop cloud desktops, and disconnect desktop sessions.
       *
       * @description You can audit the operation logs of regular users to improve security. The operation logs record events such as desktop startup, shutdown, and session disconnection.
       *
       * @param request DescribeClientEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClientEventsResponse
       */
      Models::DescribeClientEventsResponse describeClientEventsWithOptions(const Models::DescribeClientEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs of end users. For example, the logs record the events that end users start and stop cloud desktops, and disconnect desktop sessions.
       *
       * @description You can audit the operation logs of regular users to improve security. The operation logs record events such as desktop startup, shutdown, and session disconnection.
       *
       * @param request DescribeClientEventsRequest
       * @return DescribeClientEventsResponse
       */
      Models::DescribeClientEventsResponse describeClientEvents(const Models::DescribeClientEventsRequest &request);

      /**
       * @summary 查询云盘团队空间列表
       *
       * @param request DescribeCloudDiskGroupDrivesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudDiskGroupDrivesResponse
       */
      Models::DescribeCloudDiskGroupDrivesResponse describeCloudDiskGroupDrivesWithOptions(const Models::DescribeCloudDiskGroupDrivesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云盘团队空间列表
       *
       * @param request DescribeCloudDiskGroupDrivesRequest
       * @return DescribeCloudDiskGroupDrivesResponse
       */
      Models::DescribeCloudDiskGroupDrivesResponse describeCloudDiskGroupDrives(const Models::DescribeCloudDiskGroupDrivesRequest &request);

      /**
       * @summary 查询云盘团队列表
       *
       * @param request DescribeCloudDiskGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudDiskGroupsResponse
       */
      Models::DescribeCloudDiskGroupsResponse describeCloudDiskGroupsWithOptions(const Models::DescribeCloudDiskGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云盘团队列表
       *
       * @param request DescribeCloudDiskGroupsRequest
       * @return DescribeCloudDiskGroupsResponse
       */
      Models::DescribeCloudDiskGroupsResponse describeCloudDiskGroups(const Models::DescribeCloudDiskGroupsRequest &request);

      /**
       * @summary Queries a list of authorized team spaces.
       *
       * @param request DescribeCloudDriveGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudDriveGroupsResponse
       */
      Models::DescribeCloudDriveGroupsResponse describeCloudDriveGroupsWithOptions(const Models::DescribeCloudDriveGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of authorized team spaces.
       *
       * @param request DescribeCloudDriveGroupsRequest
       * @return DescribeCloudDriveGroupsResponse
       */
      Models::DescribeCloudDriveGroupsResponse describeCloudDriveGroups(const Models::DescribeCloudDriveGroupsRequest &request);

      /**
       * @summary 查询pds用户权限
       *
       * @param request DescribeCloudDrivePermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudDrivePermissionsResponse
       */
      Models::DescribeCloudDrivePermissionsResponse describeCloudDrivePermissionsWithOptions(const Models::DescribeCloudDrivePermissionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询pds用户权限
       *
       * @param request DescribeCloudDrivePermissionsRequest
       * @return DescribeCloudDrivePermissionsResponse
       */
      Models::DescribeCloudDrivePermissionsResponse describeCloudDrivePermissions(const Models::DescribeCloudDrivePermissionsRequest &request);

      /**
       * @summary 查询所有无影网盘终端用户的信息
       *
       * @param request DescribeCloudDriveUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudDriveUsersResponse
       */
      Models::DescribeCloudDriveUsersResponse describeCloudDriveUsersWithOptions(const Models::DescribeCloudDriveUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询所有无影网盘终端用户的信息
       *
       * @param request DescribeCloudDriveUsersRequest
       * @return DescribeCloudDriveUsersResponse
       */
      Models::DescribeCloudDriveUsersResponse describeCloudDriveUsers(const Models::DescribeCloudDriveUsersRequest &request);

      /**
       * @summary Queries configuration groups.
       *
       * @param request DescribeConfigGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfigGroupResponse
       */
      Models::DescribeConfigGroupResponse describeConfigGroupWithOptions(const Models::DescribeConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries configuration groups.
       *
       * @param request DescribeConfigGroupRequest
       * @return DescribeConfigGroupResponse
       */
      Models::DescribeConfigGroupResponse describeConfigGroup(const Models::DescribeConfigGroupRequest &request);

      /**
       * @param request DescribeCustomizedListHeadersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomizedListHeadersResponse
       */
      Models::DescribeCustomizedListHeadersResponse describeCustomizedListHeadersWithOptions(const Models::DescribeCustomizedListHeadersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeCustomizedListHeadersRequest
       * @return DescribeCustomizedListHeadersResponse
       */
      Models::DescribeCustomizedListHeadersResponse describeCustomizedListHeaders(const Models::DescribeCustomizedListHeadersRequest &request);

      /**
       * @summary Queries cloud computer shares.
       *
       * @param request DescribeDesktopGroupSessionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDesktopGroupSessionsResponse
       */
      Models::DescribeDesktopGroupSessionsResponse describeDesktopGroupSessionsWithOptions(const Models::DescribeDesktopGroupSessionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cloud computer shares.
       *
       * @param request DescribeDesktopGroupSessionsRequest
       * @return DescribeDesktopGroupSessionsResponse
       */
      Models::DescribeDesktopGroupSessionsResponse describeDesktopGroupSessions(const Models::DescribeDesktopGroupSessionsRequest &request);

      /**
       * @summary Queries cloud computer shares.
       *
       * @param request DescribeDesktopGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDesktopGroupsResponse
       */
      Models::DescribeDesktopGroupsResponse describeDesktopGroupsWithOptions(const Models::DescribeDesktopGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cloud computer shares.
       *
       * @param request DescribeDesktopGroupsRequest
       * @return DescribeDesktopGroupsResponse
       */
      Models::DescribeDesktopGroupsResponse describeDesktopGroups(const Models::DescribeDesktopGroupsRequest &request);

      /**
       * @summary Queries the basic information about cloud computers.
       *
       * @param request DescribeDesktopInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDesktopInfoResponse
       */
      Models::DescribeDesktopInfoResponse describeDesktopInfoWithOptions(const Models::DescribeDesktopInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about cloud computers.
       *
       * @param request DescribeDesktopInfoRequest
       * @return DescribeDesktopInfoResponse
       */
      Models::DescribeDesktopInfoResponse describeDesktopInfo(const Models::DescribeDesktopInfoRequest &request);

      /**
       * @summary 查询超卖组
       *
       * @param request DescribeDesktopOversoldGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDesktopOversoldGroupResponse
       */
      Models::DescribeDesktopOversoldGroupResponse describeDesktopOversoldGroupWithOptions(const Models::DescribeDesktopOversoldGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询超卖组
       *
       * @param request DescribeDesktopOversoldGroupRequest
       * @return DescribeDesktopOversoldGroupResponse
       */
      Models::DescribeDesktopOversoldGroupResponse describeDesktopOversoldGroup(const Models::DescribeDesktopOversoldGroupRequest &request);

      /**
       * @summary 查询超卖组用户
       *
       * @param request DescribeDesktopOversoldUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDesktopOversoldUserResponse
       */
      Models::DescribeDesktopOversoldUserResponse describeDesktopOversoldUserWithOptions(const Models::DescribeDesktopOversoldUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询超卖组用户
       *
       * @param request DescribeDesktopOversoldUserRequest
       * @return DescribeDesktopOversoldUserResponse
       */
      Models::DescribeDesktopOversoldUserResponse describeDesktopOversoldUser(const Models::DescribeDesktopOversoldUserRequest &request);

      /**
       * @summary 查询超卖用户组
       *
       * @param request DescribeDesktopOversoldUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDesktopOversoldUserGroupResponse
       */
      Models::DescribeDesktopOversoldUserGroupResponse describeDesktopOversoldUserGroupWithOptions(const Models::DescribeDesktopOversoldUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询超卖用户组
       *
       * @param request DescribeDesktopOversoldUserGroupRequest
       * @return DescribeDesktopOversoldUserGroupResponse
       */
      Models::DescribeDesktopOversoldUserGroupResponse describeDesktopOversoldUserGroup(const Models::DescribeDesktopOversoldUserGroupRequest &request);

      /**
       * @summary Queries the detailed session information of a cloud computer.
       *
       * @description You can only query data within the last 30 days.
       *
       * @param request DescribeDesktopSessionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDesktopSessionsResponse
       */
      Models::DescribeDesktopSessionsResponse describeDesktopSessionsWithOptions(const Models::DescribeDesktopSessionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed session information of a cloud computer.
       *
       * @description You can only query data within the last 30 days.
       *
       * @param request DescribeDesktopSessionsRequest
       * @return DescribeDesktopSessionsResponse
       */
      Models::DescribeDesktopSessionsResponse describeDesktopSessions(const Models::DescribeDesktopSessionsRequest &request);

      /**
       * @summary Queries the instance types of cloud computers.
       *
       * @description When no values are specified for the `InstanceTypeFamily` and `DesktopTypeId` parameters for a cloud desktop, all types of cloud desktops are queried.
       *
       * @param request DescribeDesktopTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDesktopTypesResponse
       */
      Models::DescribeDesktopTypesResponse describeDesktopTypesWithOptions(const Models::DescribeDesktopTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance types of cloud computers.
       *
       * @description When no values are specified for the `InstanceTypeFamily` and `DesktopTypeId` parameters for a cloud desktop, all types of cloud desktops are queried.
       *
       * @param request DescribeDesktopTypesRequest
       * @return DescribeDesktopTypesResponse
       */
      Models::DescribeDesktopTypesResponse describeDesktopTypes(const Models::DescribeDesktopTypesRequest &request);

      /**
       * @summary Queries the details of cloud computers.
       *
       * @param request DescribeDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDesktopsResponse
       */
      Models::DescribeDesktopsResponse describeDesktopsWithOptions(const Models::DescribeDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of cloud computers.
       *
       * @param request DescribeDesktopsRequest
       * @return DescribeDesktopsResponse
       */
      Models::DescribeDesktopsResponse describeDesktops(const Models::DescribeDesktopsRequest &request);

      /**
       * @summary Queries the cloud computers in a share by billing method.
       *
       * @param request DescribeDesktopsInGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDesktopsInGroupResponse
       */
      Models::DescribeDesktopsInGroupResponse describeDesktopsInGroupWithOptions(const Models::DescribeDesktopsInGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cloud computers in a share by billing method.
       *
       * @param request DescribeDesktopsInGroupRequest
       * @return DescribeDesktopsInGroupResponse
       */
      Models::DescribeDesktopsInGroupResponse describeDesktopsInGroup(const Models::DescribeDesktopsInGroupRequest &request);

      /**
       * @summary Queries the list of trusted devices.
       *
       * @param request DescribeDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDevicesResponse
       */
      Models::DescribeDevicesResponse describeDevicesWithOptions(const Models::DescribeDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of trusted devices.
       *
       * @param request DescribeDevicesRequest
       * @return DescribeDevicesResponse
       */
      Models::DescribeDevicesResponse describeDevices(const Models::DescribeDevicesRequest &request);

      /**
       * @summary Queries the details of directories.
       *
       * @param request DescribeDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDirectoriesResponse
       */
      Models::DescribeDirectoriesResponse describeDirectoriesWithOptions(const Models::DescribeDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of directories.
       *
       * @param request DescribeDirectoriesRequest
       * @return DescribeDirectoriesResponse
       */
      Models::DescribeDirectoriesResponse describeDirectories(const Models::DescribeDirectoriesRequest &request);

      /**
       * @summary Queries user-level storage resources.
       *
       * @param request DescribeDrivesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrivesResponse
       */
      Models::DescribeDrivesResponse describeDrivesWithOptions(const Models::DescribeDrivesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user-level storage resources.
       *
       * @param request DescribeDrivesRequest
       * @return DescribeDrivesResponse
       */
      Models::DescribeDrivesResponse describeDrives(const Models::DescribeDrivesRequest &request);

      /**
       * @summary Queries data report export tasks.
       *
       * @param request DescribeEcdReportTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEcdReportTasksResponse
       */
      Models::DescribeEcdReportTasksResponse describeEcdReportTasksWithOptions(const Models::DescribeEcdReportTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data report export tasks.
       *
       * @param request DescribeEcdReportTasksRequest
       * @return DescribeEcdReportTasksResponse
       */
      Models::DescribeEcdReportTasksResponse describeEcdReportTasks(const Models::DescribeEcdReportTasksRequest &request);

      /**
       * @summary 查询EIP监控
       *
       * @param request DescribeFlowMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowMetricResponse
       */
      Models::DescribeFlowMetricResponse describeFlowMetricWithOptions(const Models::DescribeFlowMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询EIP监控
       *
       * @param request DescribeFlowMetricRequest
       * @return DescribeFlowMetricResponse
       */
      Models::DescribeFlowMetricResponse describeFlowMetric(const Models::DescribeFlowMetricRequest &request);

      /**
       * @summary Queries cloud computer-level traffic statistics of a single office network.
       *
       * @description > You can query only the traffic data in the last 90 days.
       *
       * @param request DescribeFlowStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowStatisticResponse
       */
      Models::DescribeFlowStatisticResponse describeFlowStatisticWithOptions(const Models::DescribeFlowStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cloud computer-level traffic statistics of a single office network.
       *
       * @description > You can query only the traffic data in the last 90 days.
       *
       * @param request DescribeFlowStatisticRequest
       * @return DescribeFlowStatisticResponse
       */
      Models::DescribeFlowStatisticResponse describeFlowStatistic(const Models::DescribeFlowStatisticRequest &request);

      /**
       * @summary 查询DNAT条目
       *
       * @param request DescribeForwardTableEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeForwardTableEntriesResponse
       */
      Models::DescribeForwardTableEntriesResponse describeForwardTableEntriesWithOptions(const Models::DescribeForwardTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询DNAT条目
       *
       * @param request DescribeForwardTableEntriesRequest
       * @return DescribeForwardTableEntriesResponse
       */
      Models::DescribeForwardTableEntriesResponse describeForwardTableEntries(const Models::DescribeForwardTableEntriesRequest &request);

      /**
       * @summary Queries information about the cloud computers whose images can be and are pending to be updated to the specified version.
       *
       * @param request DescribeFotaPendingDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFotaPendingDesktopsResponse
       */
      Models::DescribeFotaPendingDesktopsResponse describeFotaPendingDesktopsWithOptions(const Models::DescribeFotaPendingDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the cloud computers whose images can be and are pending to be updated to the specified version.
       *
       * @param request DescribeFotaPendingDesktopsRequest
       * @return DescribeFotaPendingDesktopsResponse
       */
      Models::DescribeFotaPendingDesktopsResponse describeFotaPendingDesktops(const Models::DescribeFotaPendingDesktopsRequest &request);

      /**
       * @summary Queries a list of update tasks.
       *
       * @param request DescribeFotaTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFotaTasksResponse
       */
      Models::DescribeFotaTasksResponse describeFotaTasksWithOptions(const Models::DescribeFotaTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of update tasks.
       *
       * @param request DescribeFotaTasksRequest
       * @return DescribeFotaTasksResponse
       */
      Models::DescribeFotaTasksResponse describeFotaTasks(const Models::DescribeFotaTasksRequest &request);

      /**
       * @summary Queries the basic information of all cloud computers and the corresponding usage duration records.
       *
       * @description *   Domestic site users query site selection Shanghai, international site users choose Singapore.
       * *   By default, you can query all cloud computers that are deleted or not deleted.
       * *   Deleted cloud computers can be queried only if the deletion time is less than three months.
       * *   Sort criteria cannot be shared with other criteria.
       *
       * @param request DescribeGlobalDesktopRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalDesktopRecordsResponse
       */
      Models::DescribeGlobalDesktopRecordsResponse describeGlobalDesktopRecordsWithOptions(const Models::DescribeGlobalDesktopRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information of all cloud computers and the corresponding usage duration records.
       *
       * @description *   Domestic site users query site selection Shanghai, international site users choose Singapore.
       * *   By default, you can query all cloud computers that are deleted or not deleted.
       * *   Deleted cloud computers can be queried only if the deletion time is less than three months.
       * *   Sort criteria cannot be shared with other criteria.
       *
       * @param request DescribeGlobalDesktopRecordsRequest
       * @return DescribeGlobalDesktopRecordsResponse
       */
      Models::DescribeGlobalDesktopRecordsResponse describeGlobalDesktopRecords(const Models::DescribeGlobalDesktopRecordsRequest &request);

      /**
       * @summary 查询全局定时任务Batch记录
       *
       * @param request DescribeGlobalTimerBatchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalTimerBatchesResponse
       */
      Models::DescribeGlobalTimerBatchesResponse describeGlobalTimerBatchesWithOptions(const Models::DescribeGlobalTimerBatchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询全局定时任务Batch记录
       *
       * @param request DescribeGlobalTimerBatchesRequest
       * @return DescribeGlobalTimerBatchesResponse
       */
      Models::DescribeGlobalTimerBatchesResponse describeGlobalTimerBatches(const Models::DescribeGlobalTimerBatchesRequest &request);

      /**
       * @summary Queries the execution records of scheduled tasks on cloud computers.
       *
       * @param request DescribeGlobalTimerRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalTimerRecordsResponse
       */
      Models::DescribeGlobalTimerRecordsResponse describeGlobalTimerRecordsWithOptions(const Models::DescribeGlobalTimerRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution records of scheduled tasks on cloud computers.
       *
       * @param request DescribeGlobalTimerRecordsRequest
       * @return DescribeGlobalTimerRecordsResponse
       */
      Models::DescribeGlobalTimerRecordsResponse describeGlobalTimerRecords(const Models::DescribeGlobalTimerRecordsRequest &request);

      /**
       * @summary Queries the applications and their processes of an end user.
       *
       * @param request DescribeGuestApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGuestApplicationsResponse
       */
      Models::DescribeGuestApplicationsResponse describeGuestApplicationsWithOptions(const Models::DescribeGuestApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the applications and their processes of an end user.
       *
       * @param request DescribeGuestApplicationsRequest
       * @return DescribeGuestApplicationsResponse
       */
      Models::DescribeGuestApplicationsResponse describeGuestApplications(const Models::DescribeGuestApplicationsRequest &request);

      /**
       * @summary Queries the image modification records of cloud computers.
       *
       * @param request DescribeImageModifiedRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageModifiedRecordsResponse
       */
      Models::DescribeImageModifiedRecordsResponse describeImageModifiedRecordsWithOptions(const Models::DescribeImageModifiedRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the image modification records of cloud computers.
       *
       * @param request DescribeImageModifiedRecordsRequest
       * @return DescribeImageModifiedRecordsResponse
       */
      Models::DescribeImageModifiedRecordsResponse describeImageModifiedRecords(const Models::DescribeImageModifiedRecordsRequest &request);

      /**
       * @summary Queries the recipient Alibaba Cloud accounts with which an image is shared.
       *
       * @description You can call the [ModifyImagePermission](https://help.aliyun.com/document_detail/436982.html) operation to share an image with another cloud computer user or unshare an image. You can call the DescribeImagePermission operation to obtain the Alibaba Cloud accounts with which the current image is shared.
       *
       * @param request DescribeImagePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImagePermissionResponse
       */
      Models::DescribeImagePermissionResponse describeImagePermissionWithOptions(const Models::DescribeImagePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the recipient Alibaba Cloud accounts with which an image is shared.
       *
       * @description You can call the [ModifyImagePermission](https://help.aliyun.com/document_detail/436982.html) operation to share an image with another cloud computer user or unshare an image. You can call the DescribeImagePermission operation to obtain the Alibaba Cloud accounts with which the current image is shared.
       *
       * @param request DescribeImagePermissionRequest
       * @return DescribeImagePermissionResponse
       */
      Models::DescribeImagePermissionResponse describeImagePermission(const Models::DescribeImagePermissionRequest &request);

      /**
       * @summary Queries the information about images.
       *
       * @param request DescribeImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImagesResponse
       */
      Models::DescribeImagesResponse describeImagesWithOptions(const Models::DescribeImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about images.
       *
       * @param request DescribeImagesRequest
       * @return DescribeImagesResponse
       */
      Models::DescribeImagesResponse describeImages(const Models::DescribeImagesRequest &request);

      /**
       * @description *   After you run a command, it may not succeed. You can call this operation to query the execution result.
       * *   You can query the information about execution in the last two weeks. A maximum of 100,000 lines of execution information can be retained.
       *
       * @param request DescribeInvocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocationsWithOptions(const Models::DescribeInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description *   After you run a command, it may not succeed. You can call this operation to query the execution result.
       * *   You can query the information about execution in the last two weeks. A maximum of 100,000 lines of execution information can be retained.
       *
       * @param request DescribeInvocationsRequest
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocations(const Models::DescribeInvocationsRequest &request);

      /**
       * @summary 查询公网IP
       *
       * @param request DescribeIpAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpAddressesResponse
       */
      Models::DescribeIpAddressesResponse describeIpAddressesWithOptions(const Models::DescribeIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询公网IP
       *
       * @param request DescribeIpAddressesRequest
       * @return DescribeIpAddressesResponse
       */
      Models::DescribeIpAddressesResponse describeIpAddresses(const Models::DescribeIpAddressesRequest &request);

      /**
       * @summary Queries Key Management Service (KMS) keys of users. The first time you call this operation, you can try to create a service key for Elastic Desktop Service (EDS) and call the operation to return results.
       *
       * @param request DescribeKmsKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKmsKeysResponse
       */
      Models::DescribeKmsKeysResponse describeKmsKeysWithOptions(const Models::DescribeKmsKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Key Management Service (KMS) keys of users. The first time you call this operation, you can try to create a service key for Elastic Desktop Service (EDS) and call the operation to return results.
       *
       * @param request DescribeKmsKeysRequest
       * @return DescribeKmsKeysResponse
       */
      Models::DescribeKmsKeysResponse describeKmsKeys(const Models::DescribeKmsKeysRequest &request);

      /**
       * @summary Queries the price for changing the specifications of a monthly subscription cloud computer with unlimited hours or a premium bandwidth plan.
       *
       * @param request DescribeModificationPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModificationPriceResponse
       */
      Models::DescribeModificationPriceResponse describeModificationPriceWithOptions(const Models::DescribeModificationPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price for changing the specifications of a monthly subscription cloud computer with unlimited hours or a premium bandwidth plan.
       *
       * @param request DescribeModificationPriceRequest
       * @return DescribeModificationPriceResponse
       */
      Models::DescribeModificationPriceResponse describeModificationPrice(const Models::DescribeModificationPriceRequest &request);

      /**
       * @summary Queries the information about File Storage NAS (NAS) file systems.
       *
       * @param request DescribeNASFileSystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNASFileSystemsResponse
       */
      Models::DescribeNASFileSystemsResponse describeNASFileSystemsWithOptions(const Models::DescribeNASFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about File Storage NAS (NAS) file systems.
       *
       * @param request DescribeNASFileSystemsRequest
       * @return DescribeNASFileSystemsResponse
       */
      Models::DescribeNASFileSystemsResponse describeNASFileSystems(const Models::DescribeNASFileSystemsRequest &request);

      /**
       * @summary 查询NAT详细列表
       *
       * @param request DescribeNatGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatGatewaysResponse
       */
      Models::DescribeNatGatewaysResponse describeNatGatewaysWithOptions(const Models::DescribeNatGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询NAT详细列表
       *
       * @param request DescribeNatGatewaysRequest
       * @return DescribeNatGatewaysResponse
       */
      Models::DescribeNatGatewaysResponse describeNatGateways(const Models::DescribeNatGatewaysRequest &request);

      /**
       * @summary Queries the details of one or more premium bandwidth plans.
       *
       * @param request DescribeNetworkPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkPackagesResponse
       */
      Models::DescribeNetworkPackagesResponse describeNetworkPackagesWithOptions(const Models::DescribeNetworkPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more premium bandwidth plans.
       *
       * @param request DescribeNetworkPackagesRequest
       * @return DescribeNetworkPackagesResponse
       */
      Models::DescribeNetworkPackagesResponse describeNetworkPackages(const Models::DescribeNetworkPackagesRequest &request);

      /**
       * @summary Queries office network properties, including office network ID, name, status, and creation time.
       *
       * @param request DescribeOfficeSitesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOfficeSitesResponse
       */
      Models::DescribeOfficeSitesResponse describeOfficeSitesWithOptions(const Models::DescribeOfficeSitesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries office network properties, including office network ID, name, status, and creation time.
       *
       * @param request DescribeOfficeSitesRequest
       * @return DescribeOfficeSitesResponse
       */
      Models::DescribeOfficeSitesResponse describeOfficeSites(const Models::DescribeOfficeSitesRequest &request);

      /**
       * @summary Queries the details of a cloud computer policy.
       *
       * @param request DescribePolicyGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolicyGroupsResponse
       */
      Models::DescribePolicyGroupsResponse describePolicyGroupsWithOptions(const Models::DescribePolicyGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a cloud computer policy.
       *
       * @param request DescribePolicyGroupsRequest
       * @return DescribePolicyGroupsResponse
       */
      Models::DescribePolicyGroupsResponse describePolicyGroups(const Models::DescribePolicyGroupsRequest &request);

      /**
       * @summary Queries the prices of Elastic Desktop Service (EDS) resources.
       *
       * @description ## Usage notes
       * The request parameters vary based on the type of desktop resources whose price you want to query. Take note of the following items:
       * *   If you set ResourceType to OfficeSite, you must specify InstanceType.
       * *   If you set ResourceType to Bandwidth, the pay-by-data-transfer metering method is used for network billing.
       * *   If you set ResourceType to Desktop, you must specify InstanceType, RootDiskSizeGib, and UserDiskSizeGib. You can specify OsType, PeriodUnit, Period, and Amount based on your business requirements.
       * > Before you call this operation to query the prices of cloud desktops by setting ResourceType to Desktop, you must know the desktop types and disk sizes that EDS provides. The disk sizes vary based on the desktop types. For more information, see [Cloud desktop types](https://help.aliyun.com/document_detail/188609.html).
       *
       * @param request DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the prices of Elastic Desktop Service (EDS) resources.
       *
       * @description ## Usage notes
       * The request parameters vary based on the type of desktop resources whose price you want to query. Take note of the following items:
       * *   If you set ResourceType to OfficeSite, you must specify InstanceType.
       * *   If you set ResourceType to Bandwidth, the pay-by-data-transfer metering method is used for network billing.
       * *   If you set ResourceType to Desktop, you must specify InstanceType, RootDiskSizeGib, and UserDiskSizeGib. You can specify OsType, PeriodUnit, Period, and Amount based on your business requirements.
       * > Before you call this operation to query the prices of cloud desktops by setting ResourceType to Desktop, you must know the desktop types and disk sizes that EDS provides. The disk sizes vary based on the desktop types. For more information, see [Cloud desktop types](https://help.aliyun.com/document_detail/188609.html).
       *
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);

      /**
       * @summary 查询价格用于创建超卖组
       *
       * @param request DescribePriceForCreateDesktopOversoldGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceForCreateDesktopOversoldGroupResponse
       */
      Models::DescribePriceForCreateDesktopOversoldGroupResponse describePriceForCreateDesktopOversoldGroupWithOptions(const Models::DescribePriceForCreateDesktopOversoldGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询价格用于创建超卖组
       *
       * @param request DescribePriceForCreateDesktopOversoldGroupRequest
       * @return DescribePriceForCreateDesktopOversoldGroupResponse
       */
      Models::DescribePriceForCreateDesktopOversoldGroupResponse describePriceForCreateDesktopOversoldGroup(const Models::DescribePriceForCreateDesktopOversoldGroupRequest &request);

      /**
       * @summary 查询价格用于变配超卖组
       *
       * @param request DescribePriceForModifyDesktopOversoldGroupSaleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceForModifyDesktopOversoldGroupSaleResponse
       */
      Models::DescribePriceForModifyDesktopOversoldGroupSaleResponse describePriceForModifyDesktopOversoldGroupSaleWithOptions(const Models::DescribePriceForModifyDesktopOversoldGroupSaleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询价格用于变配超卖组
       *
       * @param request DescribePriceForModifyDesktopOversoldGroupSaleRequest
       * @return DescribePriceForModifyDesktopOversoldGroupSaleResponse
       */
      Models::DescribePriceForModifyDesktopOversoldGroupSaleResponse describePriceForModifyDesktopOversoldGroupSale(const Models::DescribePriceForModifyDesktopOversoldGroupSaleRequest &request);

      /**
       * @summary 查询价格用于续费超卖组
       *
       * @param request DescribePriceForRenewDesktopOversoldGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceForRenewDesktopOversoldGroupResponse
       */
      Models::DescribePriceForRenewDesktopOversoldGroupResponse describePriceForRenewDesktopOversoldGroupWithOptions(const Models::DescribePriceForRenewDesktopOversoldGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询价格用于续费超卖组
       *
       * @param request DescribePriceForRenewDesktopOversoldGroupRequest
       * @return DescribePriceForRenewDesktopOversoldGroupResponse
       */
      Models::DescribePriceForRenewDesktopOversoldGroupResponse describePriceForRenewDesktopOversoldGroup(const Models::DescribePriceForRenewDesktopOversoldGroupRequest &request);

      /**
       * @summary 查询录屏文件列表
       *
       * @param request DescribeRecordFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordFileResponse
       */
      Models::DescribeRecordFileResponse describeRecordFileWithOptions(const Models::DescribeRecordFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询录屏文件列表
       *
       * @param request DescribeRecordFileRequest
       * @return DescribeRecordFileResponse
       */
      Models::DescribeRecordFileResponse describeRecordFile(const Models::DescribeRecordFileRequest &request);

      /**
       * @summary Queries the details of screen recording files.
       *
       * @param request DescribeRecordingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordingsResponse
       */
      Models::DescribeRecordingsResponse describeRecordingsWithOptions(const Models::DescribeRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of screen recording files.
       *
       * @param request DescribeRecordingsRequest
       * @return DescribeRecordingsResponse
       */
      Models::DescribeRecordingsResponse describeRecordings(const Models::DescribeRecordingsRequest &request);

      /**
       * @summary Queries the refund amount for unsubscribing from a cloud computer.
       *
       * @param request DescribeRefundPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRefundPriceResponse
       */
      Models::DescribeRefundPriceResponse describeRefundPriceWithOptions(const Models::DescribeRefundPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the refund amount for unsubscribing from a cloud computer.
       *
       * @param request DescribeRefundPriceRequest
       * @return DescribeRefundPriceResponse
       */
      Models::DescribeRefundPriceResponse describeRefundPrice(const Models::DescribeRefundPriceRequest &request);

      /**
       * @summary Queries the Alibaba Cloud regions that are available for Elastic Desktop Service (EDS).
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Alibaba Cloud regions that are available for Elastic Desktop Service (EDS).
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the renewal price of an Alibaba Cloud Workspace service.
       *
       * @param request DescribeRenewalPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenewalPriceResponse
       */
      Models::DescribeRenewalPriceResponse describeRenewalPriceWithOptions(const Models::DescribeRenewalPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the renewal price of an Alibaba Cloud Workspace service.
       *
       * @param request DescribeRenewalPriceRequest
       * @return DescribeRenewalPriceResponse
       */
      Models::DescribeRenewalPriceResponse describeRenewalPrice(const Models::DescribeRenewalPriceRequest &request);

      /**
       * @param request DescribeResourceByCenterPolicyIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceByCenterPolicyIdResponse
       */
      Models::DescribeResourceByCenterPolicyIdResponse describeResourceByCenterPolicyIdWithOptions(const Models::DescribeResourceByCenterPolicyIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeResourceByCenterPolicyIdRequest
       * @return DescribeResourceByCenterPolicyIdResponse
       */
      Models::DescribeResourceByCenterPolicyIdResponse describeResourceByCenterPolicyId(const Models::DescribeResourceByCenterPolicyIdRequest &request);

      /**
       * @summary 查询路由条目列表
       *
       * @param request DescribeRouteEntryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteEntryListResponse
       */
      Models::DescribeRouteEntryListResponse describeRouteEntryListWithOptions(const Models::DescribeRouteEntryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询路由条目列表
       *
       * @param request DescribeRouteEntryListRequest
       * @return DescribeRouteEntryListResponse
       */
      Models::DescribeRouteEntryListResponse describeRouteEntryList(const Models::DescribeRouteEntryListRequest &request);

      /**
       * @summary 查询路由表列表
       *
       * @param request DescribeRouteTableListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteTableListResponse
       */
      Models::DescribeRouteTableListResponse describeRouteTableListWithOptions(const Models::DescribeRouteTableListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询路由表列表
       *
       * @param request DescribeRouteTableListRequest
       * @return DescribeRouteTableListResponse
       */
      Models::DescribeRouteTableListResponse describeRouteTableList(const Models::DescribeRouteTableListRequest &request);

      /**
       * @summary 查询办公网络维度安全组策略
       *
       * @param request DescribeSecurityGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupAttributeResponse
       */
      Models::DescribeSecurityGroupAttributeResponse describeSecurityGroupAttributeWithOptions(const Models::DescribeSecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询办公网络维度安全组策略
       *
       * @param request DescribeSecurityGroupAttributeRequest
       * @return DescribeSecurityGroupAttributeResponse
       */
      Models::DescribeSecurityGroupAttributeResponse describeSecurityGroupAttribute(const Models::DescribeSecurityGroupAttributeRequest &request);

      /**
       * @summary Queries the session statistics of a region.
       *
       * @description *   This is a central operation and can be called only by using services in the China (Shanghai) region.
       * *   You can query session statistics for the past hour.
       *
       * @param request DescribeSessionStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSessionStatisticResponse
       */
      Models::DescribeSessionStatisticResponse describeSessionStatisticWithOptions(const Models::DescribeSessionStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the session statistics of a region.
       *
       * @description *   This is a central operation and can be called only by using services in the China (Shanghai) region.
       * *   You can query session statistics for the past hour.
       *
       * @param request DescribeSessionStatisticRequest
       * @return DescribeSessionStatisticResponse
       */
      Models::DescribeSessionStatisticResponse describeSessionStatistic(const Models::DescribeSessionStatisticRequest &request);

      /**
       * @summary Queries the snapshots that are created based on a cloud computer and the details of the snapshots.
       *
       * @param request DescribeSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshotsWithOptions(const Models::DescribeSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the snapshots that are created based on a cloud computer and the details of the snapshots.
       *
       * @param request DescribeSnapshotsRequest
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshots(const Models::DescribeSnapshotsRequest &request);

      /**
       * @summary 查询SNAT条目
       *
       * @param request DescribeSnatTableEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnatTableEntriesResponse
       */
      Models::DescribeSnatTableEntriesResponse describeSnatTableEntriesWithOptions(const Models::DescribeSnatTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询SNAT条目
       *
       * @param request DescribeSnatTableEntriesRequest
       * @return DescribeSnatTableEntriesResponse
       */
      Models::DescribeSnatTableEntriesResponse describeSnatTableEntries(const Models::DescribeSnatTableEntriesRequest &request);

      /**
       * @summary 查询子网
       *
       * @param request DescribeSubnetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubnetsResponse
       */
      Models::DescribeSubnetsResponse describeSubnetsWithOptions(const Models::DescribeSubnetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询子网
       *
       * @param request DescribeSubnetsRequest
       * @return DescribeSubnetsResponse
       */
      Models::DescribeSubnetsResponse describeSubnets(const Models::DescribeSubnetsRequest &request);

      /**
       * @summary Queries the details of cloud computer templates.
       *
       * @param request DescribeTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplatesWithOptions(const Models::DescribeTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of cloud computer templates.
       *
       * @param request DescribeTemplatesRequest
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplates(const Models::DescribeTemplatesRequest &request);

      /**
       * @summary Queries a scheduled task configuration group.
       *
       * @param request DescribeTimerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTimerGroupResponse
       */
      Models::DescribeTimerGroupResponse describeTimerGroupWithOptions(const Models::DescribeTimerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a scheduled task configuration group.
       *
       * @param request DescribeTimerGroupRequest
       * @return DescribeTimerGroupResponse
       */
      Models::DescribeTimerGroupResponse describeTimerGroup(const Models::DescribeTimerGroupRequest &request);

      /**
       * @summary 查询超卖组中用户连接数据
       *
       * @param request DescribeUserConnectTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserConnectTimeResponse
       */
      Models::DescribeUserConnectTimeResponse describeUserConnectTimeWithOptions(const Models::DescribeUserConnectTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询超卖组中用户连接数据
       *
       * @param request DescribeUserConnectTimeRequest
       * @return DescribeUserConnectTimeResponse
       */
      Models::DescribeUserConnectTimeResponse describeUserConnectTime(const Models::DescribeUserConnectTimeRequest &request);

      /**
       * @summary Queries the connection records of an authorized user to cloud computers in a cloud computer pool.
       *
       * @param request DescribeUserConnectionRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserConnectionRecordsResponse
       */
      Models::DescribeUserConnectionRecordsResponse describeUserConnectionRecordsWithOptions(const Models::DescribeUserConnectionRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the connection records of an authorized user to cloud computers in a cloud computer pool.
       *
       * @param request DescribeUserConnectionRecordsRequest
       * @return DescribeUserConnectionRecordsResponse
       */
      Models::DescribeUserConnectionRecordsResponse describeUserConnectionRecords(const Models::DescribeUserConnectionRecordsRequest &request);

      /**
       * @summary Queries the configurations of the user profile management (UPM) directory blacklist and whitelist.
       *
       * @param request DescribeUserProfilePathRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserProfilePathRulesResponse
       */
      Models::DescribeUserProfilePathRulesResponse describeUserProfilePathRulesWithOptions(const Models::DescribeUserProfilePathRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the user profile management (UPM) directory blacklist and whitelist.
       *
       * @param request DescribeUserProfilePathRulesRequest
       * @return DescribeUserProfilePathRulesResponse
       */
      Models::DescribeUserProfilePathRulesResponse describeUserProfilePathRules(const Models::DescribeUserProfilePathRulesRequest &request);

      /**
       * @summary Queries the information about authorized users of a cloud computer share, including the usernames, email addresses, mobile numbers, and cloud computer IDs.
       *
       * @param request DescribeUsersInGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsersInGroupResponse
       */
      Models::DescribeUsersInGroupResponse describeUsersInGroupWithOptions(const Models::DescribeUsersInGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about authorized users of a cloud computer share, including the usernames, email addresses, mobile numbers, and cloud computer IDs.
       *
       * @param request DescribeUsersInGroupRequest
       * @return DescribeUsersInGroupResponse
       */
      Models::DescribeUsersInGroupResponse describeUsersInGroup(const Models::DescribeUsersInGroupRequest &request);

      /**
       * @summary Queries the passwords of authorized users of a cloud computer.
       *
       * @param request DescribeUsersPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsersPasswordResponse
       */
      Models::DescribeUsersPasswordResponse describeUsersPasswordWithOptions(const Models::DescribeUsersPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the passwords of authorized users of a cloud computer.
       *
       * @param request DescribeUsersPasswordRequest
       * @return DescribeUsersPasswordResponse
       */
      Models::DescribeUsersPasswordResponse describeUsersPassword(const Models::DescribeUsersPasswordRequest &request);

      /**
       * @summary Queries multi-factor authentication (MFA) devices that are bound to an Active Directory (AD) account.
       *
       * @param request DescribeVirtualMFADevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVirtualMFADevicesResponse
       */
      Models::DescribeVirtualMFADevicesResponse describeVirtualMFADevicesWithOptions(const Models::DescribeVirtualMFADevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries multi-factor authentication (MFA) devices that are bound to an Active Directory (AD) account.
       *
       * @param request DescribeVirtualMFADevicesRequest
       * @return DescribeVirtualMFADevicesResponse
       */
      Models::DescribeVirtualMFADevicesResponse describeVirtualMFADevices(const Models::DescribeVirtualMFADevicesRequest &request);

      /**
       * @summary Queries the zones in a region in which Elastic Desktop Service is supported.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones in a region in which Elastic Desktop Service is supported.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Unbinds an advanced office network from a CEN instance.
       *
       * @param request DetachCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachCenResponse
       */
      Models::DetachCenResponse detachCenWithOptions(const Models::DetachCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds an advanced office network from a CEN instance.
       *
       * @param request DetachCenRequest
       * @return DetachCenResponse
       */
      Models::DetachCenResponse detachCen(const Models::DetachCenRequest &request);

      /**
       * @summary Unbinds a hardware client from a user.
       *
       * @param request DetachEndUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachEndUserResponse
       */
      Models::DetachEndUserResponse detachEndUserWithOptions(const Models::DetachEndUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a hardware client from a user.
       *
       * @param request DetachEndUserRequest
       * @return DetachEndUserResponse
       */
      Models::DetachEndUserResponse detachEndUser(const Models::DetachEndUserRequest &request);

      /**
       * @summary Disables specific cloud computers in a cloud computer share. After you call this operation to disable specific cloud computers, they enter the unavailable state.
       *
       * @param request DisableDesktopsInGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDesktopsInGroupResponse
       */
      Models::DisableDesktopsInGroupResponse disableDesktopsInGroupWithOptions(const Models::DisableDesktopsInGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables specific cloud computers in a cloud computer share. After you call this operation to disable specific cloud computers, they enter the unavailable state.
       *
       * @param request DisableDesktopsInGroupRequest
       * @return DisableDesktopsInGroupResponse
       */
      Models::DisableDesktopsInGroupResponse disableDesktopsInGroup(const Models::DisableDesktopsInGroupRequest &request);

      /**
       * @summary Disconnects from desktop sessions.
       *
       * @param request DisconnectDesktopSessionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisconnectDesktopSessionsResponse
       */
      Models::DisconnectDesktopSessionsResponse disconnectDesktopSessionsWithOptions(const Models::DisconnectDesktopSessionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disconnects from desktop sessions.
       *
       * @param request DisconnectDesktopSessionsRequest
       * @return DisconnectDesktopSessionsResponse
       */
      Models::DisconnectDesktopSessionsResponse disconnectDesktopSessions(const Models::DisconnectDesktopSessionsRequest &request);

      /**
       * @summary 实例解绑/删除公网IP
       *
       * @param request DissociateIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateIpAddressResponse
       */
      Models::DissociateIpAddressResponse dissociateIpAddressWithOptions(const Models::DissociateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例解绑/删除公网IP
       *
       * @param request DissociateIpAddressRequest
       * @return DissociateIpAddressResponse
       */
      Models::DissociateIpAddressResponse dissociateIpAddress(const Models::DissociateIpAddressRequest &request);

      /**
       * @summary Unbinds a premium bandwidth plan from an office network.
       *
       * @param request DissociateNetworkPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateNetworkPackageResponse
       */
      Models::DissociateNetworkPackageResponse dissociateNetworkPackageWithOptions(const Models::DissociateNetworkPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a premium bandwidth plan from an office network.
       *
       * @param request DissociateNetworkPackageRequest
       * @return DissociateNetworkPackageResponse
       */
      Models::DissociateNetworkPackageResponse dissociateNetworkPackage(const Models::DissociateNetworkPackageRequest &request);

      /**
       * @summary Obtains the download link of the target file.
       *
       * @param request DownloadCdsFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadCdsFileResponse
       */
      Models::DownloadCdsFileResponse downloadCdsFileWithOptions(const Models::DownloadCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the download link of the target file.
       *
       * @param request DownloadCdsFileRequest
       * @return DownloadCdsFileResponse
       */
      Models::DownloadCdsFileResponse downloadCdsFile(const Models::DownloadCdsFileRequest &request);

      /**
       * @summary Exports events that occur on a cloud desktop from an Alibaba Cloud Workspace client.
       *
       * @param request ExportClientEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportClientEventsResponse
       */
      Models::ExportClientEventsResponse exportClientEventsWithOptions(const Models::ExportClientEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports events that occur on a cloud desktop from an Alibaba Cloud Workspace client.
       *
       * @param request ExportClientEventsRequest
       * @return ExportClientEventsResponse
       */
      Models::ExportClientEventsResponse exportClientEvents(const Models::ExportClientEventsRequest &request);

      /**
       * @summary Exports cloud computer shares and saves the list as an XLSX file. Each entry includes the ID and name of the cloud computer share, the ID and name of the office network, the cloud computer share template, and the name of the security policy.
       *
       * @param request ExportDesktopGroupInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportDesktopGroupInfoResponse
       */
      Models::ExportDesktopGroupInfoResponse exportDesktopGroupInfoWithOptions(const Models::ExportDesktopGroupInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports cloud computer shares and saves the list as an XLSX file. Each entry includes the ID and name of the cloud computer share, the ID and name of the office network, the cloud computer share template, and the name of the security policy.
       *
       * @param request ExportDesktopGroupInfoRequest
       * @return ExportDesktopGroupInfoResponse
       */
      Models::ExportDesktopGroupInfoResponse exportDesktopGroupInfo(const Models::ExportDesktopGroupInfoRequest &request);

      /**
       * @summary Exports a cloud computer list as a CSV file.
       *
       * @description The cloud computer list exported by calling this operation is saved as a CSV file. Each entry of data of a cloud computer includes the following fields:
       * *   Cloud computer ID and name
       * *   Office network ID and name
       * *   The instance type, OS and protocol of the cloud computer
       * *   System disk and data disk of the cloud computer
       * *   The status
       * *   Purchase method
       * *   The time when the cloud computer expires
       * *   Remaining duration and total duration
       * *   Number of assigned users and number of current users
       * *   Office network type
       * *   The time when the cloud computer was created
       * *   Tags
       * *   Encryption status
       * *   IP
       * *   The hostname
       *
       * @param request ExportDesktopListInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportDesktopListInfoResponse
       */
      Models::ExportDesktopListInfoResponse exportDesktopListInfoWithOptions(const Models::ExportDesktopListInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports a cloud computer list as a CSV file.
       *
       * @description The cloud computer list exported by calling this operation is saved as a CSV file. Each entry of data of a cloud computer includes the following fields:
       * *   Cloud computer ID and name
       * *   Office network ID and name
       * *   The instance type, OS and protocol of the cloud computer
       * *   System disk and data disk of the cloud computer
       * *   The status
       * *   Purchase method
       * *   The time when the cloud computer expires
       * *   Remaining duration and total duration
       * *   Number of assigned users and number of current users
       * *   Office network type
       * *   The time when the cloud computer was created
       * *   Tags
       * *   Encryption status
       * *   IP
       * *   The hostname
       *
       * @param request ExportDesktopListInfoRequest
       * @return ExportDesktopListInfoResponse
       */
      Models::ExportDesktopListInfoResponse exportDesktopListInfo(const Models::ExportDesktopListInfoRequest &request);

      /**
       * @summary Obtains the information about an asynchronous task based on the value of the AsyncTaskId parameter that you obtain by calling the CopyCdsFile operation.
       *
       * @param request GetAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncTaskResponse
       */
      Models::GetAsyncTaskResponse getAsyncTaskWithOptions(const Models::GetAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about an asynchronous task based on the value of the AsyncTaskId parameter that you obtain by calling the CopyCdsFile operation.
       *
       * @param request GetAsyncTaskRequest
       * @return GetAsyncTaskResponse
       */
      Models::GetAsyncTaskResponse getAsyncTask(const Models::GetAsyncTaskRequest &request);

      /**
       * @summary Obtains the credential that is used to connect to a cloud desktop.
       *
       * @description The cloud computer must be in the Running state. The ticket obtained by calling this operation will expire in 10 minutes.
       *
       * @param request GetConnectionTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConnectionTicketResponse
       */
      Models::GetConnectionTicketResponse getConnectionTicketWithOptions(const Models::GetConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the credential that is used to connect to a cloud desktop.
       *
       * @description The cloud computer must be in the Running state. The ticket obtained by calling this operation will expire in 10 minutes.
       *
       * @param request GetConnectionTicketRequest
       * @return GetConnectionTicketResponse
       */
      Models::GetConnectionTicketResponse getConnectionTicket(const Models::GetConnectionTicketRequest &request);

      /**
       * @summary Obtains the credentials of the stream collaboration
       *
       * @param request GetCoordinateTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCoordinateTicketResponse
       */
      Models::GetCoordinateTicketResponse getCoordinateTicketWithOptions(const Models::GetCoordinateTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the credentials of the stream collaboration
       *
       * @param request GetCoordinateTicketRequest
       * @return GetCoordinateTicketResponse
       */
      Models::GetCoordinateTicketResponse getCoordinateTicket(const Models::GetCoordinateTicketRequest &request);

      /**
       * @summary Queries the information about a cloud computer share.
       *
       * @param request GetDesktopGroupDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDesktopGroupDetailResponse
       */
      Models::GetDesktopGroupDetailResponse getDesktopGroupDetailWithOptions(const Models::GetDesktopGroupDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a cloud computer share.
       *
       * @param request GetDesktopGroupDetailRequest
       * @return GetDesktopGroupDetailResponse
       */
      Models::GetDesktopGroupDetailResponse getDesktopGroupDetail(const Models::GetDesktopGroupDetailRequest &request);

      /**
       * @summary Queries whether single sign-on (SSO) is enabled for a workspace.
       *
       * @param request GetOfficeSiteSsoStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOfficeSiteSsoStatusResponse
       */
      Models::GetOfficeSiteSsoStatusResponse getOfficeSiteSsoStatusWithOptions(const Models::GetOfficeSiteSsoStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether single sign-on (SSO) is enabled for a workspace.
       *
       * @param request GetOfficeSiteSsoStatusRequest
       * @return GetOfficeSiteSsoStatusResponse
       */
      Models::GetOfficeSiteSsoStatusResponse getOfficeSiteSsoStatus(const Models::GetOfficeSiteSsoStatusRequest &request);

      /**
       * @summary Obtains the metadata of a Security Assertion Markup Language (SAML) 2.0-based service provider (SP).
       *
       * @description You can call this operation only for workspaces of the Active Directory (AD) and convenience account types.
       *
       * @param request GetSpMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSpMetadataResponse
       */
      Models::GetSpMetadataResponse getSpMetadataWithOptions(const Models::GetSpMetadataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the metadata of a Security Assertion Markup Language (SAML) 2.0-based service provider (SP).
       *
       * @description You can call this operation only for workspaces of the Active Directory (AD) and convenience account types.
       *
       * @param request GetSpMetadataRequest
       * @return GetSpMetadataResponse
       */
      Models::GetSpMetadataResponse getSpMetadata(const Models::GetSpMetadataRequest &request);

      /**
       * @summary Hibernates cloud desktops.
       *
       * @description Hibernating a cloud desktop is in private preview. If you want to try this feature, submit a ticket.
       *
       * @param request HibernateDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HibernateDesktopsResponse
       */
      Models::HibernateDesktopsResponse hibernateDesktopsWithOptions(const Models::HibernateDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Hibernates cloud desktops.
       *
       * @description Hibernating a cloud desktop is in private preview. If you want to try this feature, submit a ticket.
       *
       * @param request HibernateDesktopsRequest
       * @return HibernateDesktopsResponse
       */
      Models::HibernateDesktopsResponse hibernateDesktops(const Models::HibernateDesktopsRequest &request);

      /**
       * @summary Queries the list of files in the network disk and obtain the download link of the file.
       *
       * @param tmpReq ListCdsFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCdsFilesResponse
       */
      Models::ListCdsFilesResponse listCdsFilesWithOptions(const Models::ListCdsFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of files in the network disk and obtain the download link of the file.
       *
       * @param request ListCdsFilesRequest
       * @return ListCdsFilesResponse
       */
      Models::ListCdsFilesResponse listCdsFiles(const Models::ListCdsFilesRequest &request);

      /**
       * @summary Obtains the user information in the AD system if you use an AD directory to connect to an AD system.
       *
       * @description If you use an AD directory to connect to an AD system, you can call this operation to obtain the user information in the AD system.
       *
       * @param request ListDirectoryUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDirectoryUsersResponse
       */
      Models::ListDirectoryUsersResponse listDirectoryUsersWithOptions(const Models::ListDirectoryUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the user information in the AD system if you use an AD directory to connect to an AD system.
       *
       * @description If you use an AD directory to connect to an AD system, you can call this operation to obtain the user information in the AD system.
       *
       * @param request ListDirectoryUsersRequest
       * @return ListDirectoryUsersResponse
       */
      Models::ListDirectoryUsersResponse listDirectoryUsers(const Models::ListDirectoryUsersRequest &request);

      /**
       * @summary Queries the permissions on a shared file on a drive.
       *
       * @param request ListFilePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFilePermissionResponse
       */
      Models::ListFilePermissionResponse listFilePermissionWithOptions(const Models::ListFilePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions on a shared file on a drive.
       *
       * @param request ListFilePermissionRequest
       * @return ListFilePermissionResponse
       */
      Models::ListFilePermissionResponse listFilePermission(const Models::ListFilePermissionRequest &request);

      /**
       * @summary Queries applications installed on a cloud computer.
       *
       * @param request ListInstalledAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstalledAppsResponse
       */
      Models::ListInstalledAppsResponse listInstalledAppsWithOptions(const Models::ListInstalledAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries applications installed on a cloud computer.
       *
       * @param request ListInstalledAppsRequest
       * @return ListInstalledAppsResponse
       */
      Models::ListInstalledAppsResponse listInstalledApps(const Models::ListInstalledAppsRequest &request);

      /**
       * @summary Queries information about an office network, including its status, cloud computer quantity, virtual private cloud (VPC) type, and more.
       *
       * @param request ListOfficeSiteOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOfficeSiteOverviewResponse
       */
      Models::ListOfficeSiteOverviewResponse listOfficeSiteOverviewWithOptions(const Models::ListOfficeSiteOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an office network, including its status, cloud computer quantity, virtual private cloud (VPC) type, and more.
       *
       * @param request ListOfficeSiteOverviewRequest
       * @return ListOfficeSiteOverviewResponse
       */
      Models::ListOfficeSiteOverviewResponse listOfficeSiteOverview(const Models::ListOfficeSiteOverviewRequest &request);

      /**
       * @summary Queries information about Active Directory (AD) accounts after an enterprise AD office network (formerly workspace) interconnects to an AD domain.
       *
       * @param request ListOfficeSiteUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOfficeSiteUsersResponse
       */
      Models::ListOfficeSiteUsersResponse listOfficeSiteUsersWithOptions(const Models::ListOfficeSiteUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about Active Directory (AD) accounts after an enterprise AD office network (formerly workspace) interconnects to an AD domain.
       *
       * @param request ListOfficeSiteUsersRequest
       * @return ListOfficeSiteUsersResponse
       */
      Models::ListOfficeSiteUsersResponse listOfficeSiteUsers(const Models::ListOfficeSiteUsersRequest &request);

      /**
       * @summary Queries the tags of cloud computers.
       *
       * @description You must use at least one of the following parameters in the request to determine the object that you want to query: `ResourceId.N`, `Tag.N.Key`, and `Tag.N.Value`.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of cloud computers.
       *
       * @description You must use at least one of the following parameters in the request to determine the object that you want to query: `ResourceId.N`, `Tag.N.Key`, and `Tag.N.Value`.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the file information of a file transmission task.
       *
       * @param request ListTransferFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransferFilesResponse
       */
      Models::ListTransferFilesResponse listTransferFilesWithOptions(const Models::ListTransferFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the file information of a file transmission task.
       *
       * @param request ListTransferFilesRequest
       * @return ListTransferFilesResponse
       */
      Models::ListTransferFilesResponse listTransferFiles(const Models::ListTransferFilesRequest &request);

      /**
       * @summary Obtains the organizational units (OUs) of an Active Directory (AD) domain that is connected to an enterprise AD office network (formerly workspace).
       *
       * @param request ListUserAdOrganizationUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserAdOrganizationUnitsResponse
       */
      Models::ListUserAdOrganizationUnitsResponse listUserAdOrganizationUnitsWithOptions(const Models::ListUserAdOrganizationUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the organizational units (OUs) of an Active Directory (AD) domain that is connected to an enterprise AD office network (formerly workspace).
       *
       * @param request ListUserAdOrganizationUnitsRequest
       * @return ListUserAdOrganizationUnitsResponse
       */
      Models::ListUserAdOrganizationUnitsResponse listUserAdOrganizationUnits(const Models::ListUserAdOrganizationUnitsRequest &request);

      /**
       * @summary Locks a multi-factor authentication (MFA) device that is in the NORMAL state.
       *
       * @description After a virtual MFA device is locked, its status changes to LOCKED. The Active Directory (AD) user who uses the virtual MFA device is unable to pass MFA and is therefore unable to log on to the client. You can call the [UnlockVirtualMFADevice](https://help.aliyun.com/document_detail/206212.html) operation to unlock the device.
       *
       * @param request LockVirtualMFADeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockVirtualMFADeviceResponse
       */
      Models::LockVirtualMFADeviceResponse lockVirtualMFADeviceWithOptions(const Models::LockVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Locks a multi-factor authentication (MFA) device that is in the NORMAL state.
       *
       * @description After a virtual MFA device is locked, its status changes to LOCKED. The Active Directory (AD) user who uses the virtual MFA device is unable to pass MFA and is therefore unable to log on to the client. You can call the [UnlockVirtualMFADevice](https://help.aliyun.com/document_detail/206212.html) operation to unlock the device.
       *
       * @param request LockVirtualMFADeviceRequest
       * @return LockVirtualMFADeviceResponse
       */
      Models::LockVirtualMFADeviceResponse lockVirtualMFADevice(const Models::LockVirtualMFADeviceRequest &request);

      /**
       * @summary Migrates cloud computers from the current office network (formerly called workspace) to the new office network.
       *
       * @param request MigrateDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateDesktopsResponse
       */
      Models::MigrateDesktopsResponse migrateDesktopsWithOptions(const Models::MigrateDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates cloud computers from the current office network (formerly called workspace) to the new office network.
       *
       * @param request MigrateDesktopsRequest
       * @return MigrateDesktopsResponse
       */
      Models::MigrateDesktopsResponse migrateDesktops(const Models::MigrateDesktopsRequest &request);

      /**
       * @summary Update the protocols of images to Adaptive Streaming Protocol (ASP).
       *
       * @param request MigrateImageProtocolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateImageProtocolResponse
       */
      Models::MigrateImageProtocolResponse migrateImageProtocolWithOptions(const Models::MigrateImageProtocolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the protocols of images to Adaptive Streaming Protocol (ASP).
       *
       * @param request MigrateImageProtocolRequest
       * @return MigrateImageProtocolResponse
       */
      Models::MigrateImageProtocolResponse migrateImageProtocol(const Models::MigrateImageProtocolRequest &request);

      /**
       * @summary Modifies an Active Directory (AD) directory.
       *
       * @description You can modify the following domain name- and Domain Name System (DNS)-related parameters only for Active Directory (AD) directories that are in the ERROR or REGISTERING state: `DomainName`, `SubDomainName`, `DnsAddress.N`, and `SubDomainDnsAddress`.
       *
       * @param request ModifyADConnectorDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyADConnectorDirectoryResponse
       */
      Models::ModifyADConnectorDirectoryResponse modifyADConnectorDirectoryWithOptions(const Models::ModifyADConnectorDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an Active Directory (AD) directory.
       *
       * @description You can modify the following domain name- and Domain Name System (DNS)-related parameters only for Active Directory (AD) directories that are in the ERROR or REGISTERING state: `DomainName`, `SubDomainName`, `DnsAddress.N`, and `SubDomainDnsAddress`.
       *
       * @param request ModifyADConnectorDirectoryRequest
       * @return ModifyADConnectorDirectoryResponse
       */
      Models::ModifyADConnectorDirectoryResponse modifyADConnectorDirectory(const Models::ModifyADConnectorDirectoryRequest &request);

      /**
       * @summary Modifies the basic properties of an enterprise Active Directory (AD) office network, such as the office network name and domain names of the enterprise AD subdomains.
       *
       * @description You can modify parameters of domain names and Domain Name System (DNS) for enterprise AD office networks that are in the `ERROR` or `REGISTERED` state. The parameters include `DomainName`, `SubDomainName`, `DnsAddress.N`, and `SubDomainDnsAddress.N`.
       *
       * @param request ModifyADConnectorOfficeSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyADConnectorOfficeSiteResponse
       */
      Models::ModifyADConnectorOfficeSiteResponse modifyADConnectorOfficeSiteWithOptions(const Models::ModifyADConnectorOfficeSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic properties of an enterprise Active Directory (AD) office network, such as the office network name and domain names of the enterprise AD subdomains.
       *
       * @description You can modify parameters of domain names and Domain Name System (DNS) for enterprise AD office networks that are in the `ERROR` or `REGISTERED` state. The parameters include `DomainName`, `SubDomainName`, `DnsAddress.N`, and `SubDomainDnsAddress.N`.
       *
       * @param request ModifyADConnectorOfficeSiteRequest
       * @return ModifyADConnectorOfficeSiteResponse
       */
      Models::ModifyADConnectorOfficeSiteResponse modifyADConnectorOfficeSite(const Models::ModifyADConnectorOfficeSiteRequest &request);

      /**
       * @summary Modify the Internet access control policy on the office network or cloud computer granularity.
       *
       * @description You can set different Internet access control policies at different granularities to achieve the effect of composite policies. For example, you can disable the Internet access on the office network granularity and enable the Internet access on specific cloud computer granularity. The effect is that all cloud computers in the office network except the specified cloud computers are not allowed to access the Internet.
       *
       * @param request ModifyAclEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAclEntriesResponse
       */
      Models::ModifyAclEntriesResponse modifyAclEntriesWithOptions(const Models::ModifyAclEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the Internet access control policy on the office network or cloud computer granularity.
       *
       * @description You can set different Internet access control policies at different granularities to achieve the effect of composite policies. For example, you can disable the Internet access on the office network granularity and enable the Internet access on specific cloud computer granularity. The effect is that all cloud computers in the office network except the specified cloud computers are not allowed to access the Internet.
       *
       * @param request ModifyAclEntriesRequest
       * @return ModifyAclEntriesResponse
       */
      Models::ModifyAclEntriesResponse modifyAclEntries(const Models::ModifyAclEntriesRequest &request);

      /**
       * @summary Modifies the parameters of an automatic snapshot policy, such as the policy name and snapshot retention period.
       *
       * @param request ModifyAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoSnapshotPolicyResponse
       */
      Models::ModifyAutoSnapshotPolicyResponse modifyAutoSnapshotPolicyWithOptions(const Models::ModifyAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of an automatic snapshot policy, such as the policy name and snapshot retention period.
       *
       * @param request ModifyAutoSnapshotPolicyRequest
       * @return ModifyAutoSnapshotPolicyResponse
       */
      Models::ModifyAutoSnapshotPolicyResponse modifyAutoSnapshotPolicy(const Models::ModifyAutoSnapshotPolicyRequest &request);

      /**
       * @summary Modifies a custom cloud computer template.
       *
       * @description Only custom desktop templates can be modified.
       *
       * @param request ModifyBundleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBundleResponse
       */
      Models::ModifyBundleResponse modifyBundleWithOptions(const Models::ModifyBundleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom cloud computer template.
       *
       * @description Only custom desktop templates can be modified.
       *
       * @param request ModifyBundleRequest
       * @return ModifyBundleResponse
       */
      Models::ModifyBundleResponse modifyBundle(const Models::ModifyBundleRequest &request);

      /**
       * @summary Modifies the attributes of a disk file or folder, such as the file name.
       *
       * @param request ModifyCdsFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCdsFileResponse
       */
      Models::ModifyCdsFileResponse modifyCdsFileWithOptions(const Models::ModifyCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a disk file or folder, such as the file name.
       *
       * @param request ModifyCdsFileRequest
       * @return ModifyCdsFileResponse
       */
      Models::ModifyCdsFileResponse modifyCdsFile(const Models::ModifyCdsFileRequest &request);

      /**
       * @summary Modifies the link for file sharing.
       *
       * @param request ModifyCdsFileShareLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCdsFileShareLinkResponse
       */
      Models::ModifyCdsFileShareLinkResponse modifyCdsFileShareLinkWithOptions(const Models::ModifyCdsFileShareLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the link for file sharing.
       *
       * @param request ModifyCdsFileShareLinkRequest
       * @return ModifyCdsFileShareLinkResponse
       */
      Models::ModifyCdsFileShareLinkResponse modifyCdsFileShareLink(const Models::ModifyCdsFileShareLinkRequest &request);

      /**
       * @summary Modifies a center policy.
       *
       * @param request ModifyCenterPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCenterPolicyResponse
       */
      Models::ModifyCenterPolicyResponse modifyCenterPolicyWithOptions(const Models::ModifyCenterPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a center policy.
       *
       * @param request ModifyCenterPolicyRequest
       * @return ModifyCenterPolicyResponse
       */
      Models::ModifyCenterPolicyResponse modifyCenterPolicy(const Models::ModifyCenterPolicyRequest &request);

      /**
       * @summary Modifies team spaces.
       *
       * @param request ModifyCloudDriveGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudDriveGroupsResponse
       */
      Models::ModifyCloudDriveGroupsResponse modifyCloudDriveGroupsWithOptions(const Models::ModifyCloudDriveGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies team spaces.
       *
       * @param request ModifyCloudDriveGroupsRequest
       * @return ModifyCloudDriveGroupsResponse
       */
      Models::ModifyCloudDriveGroupsResponse modifyCloudDriveGroups(const Models::ModifyCloudDriveGroupsRequest &request);

      /**
       * @summary Modifies the user permissions on Cloud Drive Service, and configures users who have the download permissions and upload and download permissions. By default, the users that are not configured the preceding permissions only have the upload permissions.
       *
       * @param request ModifyCloudDrivePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudDrivePermissionResponse
       */
      Models::ModifyCloudDrivePermissionResponse modifyCloudDrivePermissionWithOptions(const Models::ModifyCloudDrivePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the user permissions on Cloud Drive Service, and configures users who have the download permissions and upload and download permissions. By default, the users that are not configured the preceding permissions only have the upload permissions.
       *
       * @param request ModifyCloudDrivePermissionRequest
       * @return ModifyCloudDrivePermissionResponse
       */
      Models::ModifyCloudDrivePermissionResponse modifyCloudDrivePermission(const Models::ModifyCloudDrivePermissionRequest &request);

      /**
       * @summary 修改无影网盘终端用户的属性
       *
       * @param request ModifyCloudDriveUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudDriveUsersResponse
       */
      Models::ModifyCloudDriveUsersResponse modifyCloudDriveUsersWithOptions(const Models::ModifyCloudDriveUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改无影网盘终端用户的属性
       *
       * @param request ModifyCloudDriveUsersRequest
       * @return ModifyCloudDriveUsersResponse
       */
      Models::ModifyCloudDriveUsersResponse modifyCloudDriveUsers(const Models::ModifyCloudDriveUsersRequest &request);

      /**
       * @summary Modifies the basic information of a configuration group.
       *
       * @param request ModifyConfigGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyConfigGroupResponse
       */
      Models::ModifyConfigGroupResponse modifyConfigGroupWithOptions(const Models::ModifyConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic information of a configuration group.
       *
       * @param request ModifyConfigGroupRequest
       * @return ModifyConfigGroupResponse
       */
      Models::ModifyConfigGroupResponse modifyConfigGroup(const Models::ModifyConfigGroupRequest &request);

      /**
       * @summary Modifies the layouts of cloud computer list headers, such as the required fields and the display and hide settings.
       *
       * @param request ModifyCustomizedListHeadersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomizedListHeadersResponse
       */
      Models::ModifyCustomizedListHeadersResponse modifyCustomizedListHeadersWithOptions(const Models::ModifyCustomizedListHeadersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the layouts of cloud computer list headers, such as the required fields and the display and hide settings.
       *
       * @param request ModifyCustomizedListHeadersRequest
       * @return ModifyCustomizedListHeadersResponse
       */
      Models::ModifyCustomizedListHeadersResponse modifyCustomizedListHeaders(const Models::ModifyCustomizedListHeadersRequest &request);

      /**
       * @summary Changes the billing method of cloud computers to subscription or pay-as-you-go.
       *
       * @description *   Before you call this operation, make sure that you fully understand the billing methods of cloud computers. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188395.html).
       * *   Before you call this operation, make sure that the cloud computers whose billing method you want to change are in the Running or Stopped state and you have no overdue payments in your Alibaba Cloud account.
       * *   After the order payment is completed, the system starts to change the billing method of the cloud computers. During the change, you cannot perform operations, such as starting or stopping the cloud computers, and changing configurations of the cloud computers.
       *
       * @param request ModifyDesktopChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDesktopChargeTypeResponse
       */
      Models::ModifyDesktopChargeTypeResponse modifyDesktopChargeTypeWithOptions(const Models::ModifyDesktopChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of cloud computers to subscription or pay-as-you-go.
       *
       * @description *   Before you call this operation, make sure that you fully understand the billing methods of cloud computers. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188395.html).
       * *   Before you call this operation, make sure that the cloud computers whose billing method you want to change are in the Running or Stopped state and you have no overdue payments in your Alibaba Cloud account.
       * *   After the order payment is completed, the system starts to change the billing method of the cloud computers. During the change, you cannot perform operations, such as starting or stopping the cloud computers, and changing configurations of the cloud computers.
       *
       * @param request ModifyDesktopChargeTypeRequest
       * @return ModifyDesktopChargeTypeResponse
       */
      Models::ModifyDesktopChargeTypeResponse modifyDesktopChargeType(const Models::ModifyDesktopChargeTypeRequest &request);

      /**
       * @summary Modifies a cloud computer share.
       *
       * @description Once a cloud computer share is created, the system automatically provisions cloud computers according to the auto-scaling policy and user connections, all based on the same template and security policy. You can adjust the cloud computer share\\"s configurations, including the share name, template, and policy, for different business scenarios.
       *
       * @param request ModifyDesktopGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDesktopGroupResponse
       */
      Models::ModifyDesktopGroupResponse modifyDesktopGroupWithOptions(const Models::ModifyDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a cloud computer share.
       *
       * @description Once a cloud computer share is created, the system automatically provisions cloud computers according to the auto-scaling policy and user connections, all based on the same template and security policy. You can adjust the cloud computer share\\"s configurations, including the share name, template, and policy, for different business scenarios.
       *
       * @param request ModifyDesktopGroupRequest
       * @return ModifyDesktopGroupResponse
       */
      Models::ModifyDesktopGroupResponse modifyDesktopGroup(const Models::ModifyDesktopGroupRequest &request);

      /**
       * @summary Modifies the hostname of a Windows cloud computer in the Active Directory (AD) office network.
       *
       * @description The Windows cloud computer whose hostname you want to modify must be in an AD office network. After the hostname is modified, the cloud computer is re-created.
       *
       * @param request ModifyDesktopHostNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDesktopHostNameResponse
       */
      Models::ModifyDesktopHostNameResponse modifyDesktopHostNameWithOptions(const Models::ModifyDesktopHostNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the hostname of a Windows cloud computer in the Active Directory (AD) office network.
       *
       * @description The Windows cloud computer whose hostname you want to modify must be in an AD office network. After the hostname is modified, the cloud computer is re-created.
       *
       * @param request ModifyDesktopHostNameRequest
       * @return ModifyDesktopHostNameResponse
       */
      Models::ModifyDesktopHostNameResponse modifyDesktopHostName(const Models::ModifyDesktopHostNameRequest &request);

      /**
       * @summary Changes the name of a cloud computer to a new name.
       *
       * @param request ModifyDesktopNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDesktopNameResponse
       */
      Models::ModifyDesktopNameResponse modifyDesktopNameWithOptions(const Models::ModifyDesktopNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of a cloud computer to a new name.
       *
       * @param request ModifyDesktopNameRequest
       * @return ModifyDesktopNameResponse
       */
      Models::ModifyDesktopNameResponse modifyDesktopName(const Models::ModifyDesktopNameRequest &request);

      /**
       * @summary 修改桌面超卖组
       *
       * @param request ModifyDesktopOversoldGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDesktopOversoldGroupResponse
       */
      Models::ModifyDesktopOversoldGroupResponse modifyDesktopOversoldGroupWithOptions(const Models::ModifyDesktopOversoldGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改桌面超卖组
       *
       * @param request ModifyDesktopOversoldGroupRequest
       * @return ModifyDesktopOversoldGroupResponse
       */
      Models::ModifyDesktopOversoldGroupResponse modifyDesktopOversoldGroup(const Models::ModifyDesktopOversoldGroupRequest &request);

      /**
       * @summary 修改桌面超卖组售卖数据
       *
       * @param request ModifyDesktopOversoldGroupSaleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDesktopOversoldGroupSaleResponse
       */
      Models::ModifyDesktopOversoldGroupSaleResponse modifyDesktopOversoldGroupSaleWithOptions(const Models::ModifyDesktopOversoldGroupSaleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改桌面超卖组售卖数据
       *
       * @param request ModifyDesktopOversoldGroupSaleRequest
       * @return ModifyDesktopOversoldGroupSaleResponse
       */
      Models::ModifyDesktopOversoldGroupSaleResponse modifyDesktopOversoldGroupSale(const Models::ModifyDesktopOversoldGroupSaleRequest &request);

      /**
       * @summary 修改桌面超卖用户组
       *
       * @param request ModifyDesktopOversoldUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDesktopOversoldUserGroupResponse
       */
      Models::ModifyDesktopOversoldUserGroupResponse modifyDesktopOversoldUserGroupWithOptions(const Models::ModifyDesktopOversoldUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改桌面超卖用户组
       *
       * @param request ModifyDesktopOversoldUserGroupRequest
       * @return ModifyDesktopOversoldUserGroupResponse
       */
      Models::ModifyDesktopOversoldUserGroupResponse modifyDesktopOversoldUserGroup(const Models::ModifyDesktopOversoldUserGroupRequest &request);

      /**
       * @summary Changes the instance type of a cloud computer and scales up the disks of the cloud computer.
       *
       * @description Changing the configurations of a cloud computer includes changing the instance type of the cloud computer and scaling up the disks of the cloud computer.
       * *   Before you change the configurations of a cloud computer, you must understand the instance types and disk sizes supported by cloud computers. For more information, see [Cloud computer types](https://help.aliyun.com/document_detail/188609.html). You can call the [DescribeDesktopTypes](https://help.aliyun.com/document_detail/188882.html) operation to query the instance types supported by cloud computers.
       * *   You must change at least one of the following configurations: instance type, system disk size, and data disk size of the cloud computer. You must specify at least one of the following parameters: `DesktopType`, `RootDiskSizeGib`, and `UserDiskSizeGib`. Take note of the following items:
       *     *   The instance type of a cloud computer includes the configurations of vCPUs, memory, and GPUs. You can only change an instance type to another. You cannot change only one of the configurations.
       *     *   You cannot change a cloud computer between the General Office type and the non-General Office type. You cannot yet change a cloud computer between the Graphics type and the non-Graphics type.
       *     *   The system disk and data disks of a cloud computer can only be scaled up and cannot be scaled down.
       *     *   If the billing method of the cloud computer is subscription, the system calculates the price difference based on the configuration difference between the original cloud computer and the new cloud computer. You must make up for the price difference or receive a refund for the price difference.
       *     *   We recommend that you do not change the configurations of a cloud computer twice within 5 minutes.
       *     *   When you change the configurations of a cloud computer, the cloud computer must be in the Stopped state.
       * *   After you change the configurations of a cloud computer, the personal data on the cloud computer is not affected.
       *
       * @param request ModifyDesktopSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDesktopSpecResponse
       */
      Models::ModifyDesktopSpecResponse modifyDesktopSpecWithOptions(const Models::ModifyDesktopSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the instance type of a cloud computer and scales up the disks of the cloud computer.
       *
       * @description Changing the configurations of a cloud computer includes changing the instance type of the cloud computer and scaling up the disks of the cloud computer.
       * *   Before you change the configurations of a cloud computer, you must understand the instance types and disk sizes supported by cloud computers. For more information, see [Cloud computer types](https://help.aliyun.com/document_detail/188609.html). You can call the [DescribeDesktopTypes](https://help.aliyun.com/document_detail/188882.html) operation to query the instance types supported by cloud computers.
       * *   You must change at least one of the following configurations: instance type, system disk size, and data disk size of the cloud computer. You must specify at least one of the following parameters: `DesktopType`, `RootDiskSizeGib`, and `UserDiskSizeGib`. Take note of the following items:
       *     *   The instance type of a cloud computer includes the configurations of vCPUs, memory, and GPUs. You can only change an instance type to another. You cannot change only one of the configurations.
       *     *   You cannot change a cloud computer between the General Office type and the non-General Office type. You cannot yet change a cloud computer between the Graphics type and the non-Graphics type.
       *     *   The system disk and data disks of a cloud computer can only be scaled up and cannot be scaled down.
       *     *   If the billing method of the cloud computer is subscription, the system calculates the price difference based on the configuration difference between the original cloud computer and the new cloud computer. You must make up for the price difference or receive a refund for the price difference.
       *     *   We recommend that you do not change the configurations of a cloud computer twice within 5 minutes.
       *     *   When you change the configurations of a cloud computer, the cloud computer must be in the Stopped state.
       * *   After you change the configurations of a cloud computer, the personal data on the cloud computer is not affected.
       *
       * @param request ModifyDesktopSpecRequest
       * @return ModifyDesktopSpecResponse
       */
      Models::ModifyDesktopSpecResponse modifyDesktopSpec(const Models::ModifyDesktopSpecRequest &request);

      /**
       * @summary Creates or modifies scheduled tasks on cloud computers, such as starting, stopping, restarting, and resetting cloud computers on schedule.
       *
       * @param request ModifyDesktopTimerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDesktopTimerResponse
       */
      Models::ModifyDesktopTimerResponse modifyDesktopTimerWithOptions(const Models::ModifyDesktopTimerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies scheduled tasks on cloud computers, such as starting, stopping, restarting, and resetting cloud computers on schedule.
       *
       * @param request ModifyDesktopTimerRequest
       * @return ModifyDesktopTimerResponse
       */
      Models::ModifyDesktopTimerResponse modifyDesktopTimer(const Models::ModifyDesktopTimerRequest &request);

      /**
       * @summary Changes an existing cloud computer policy for cloud computers.
       *
       * @description The cloud computers for which you want to change their policies must be in the Running state.
       *
       * @param request ModifyDesktopsPolicyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDesktopsPolicyGroupResponse
       */
      Models::ModifyDesktopsPolicyGroupResponse modifyDesktopsPolicyGroupWithOptions(const Models::ModifyDesktopsPolicyGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes an existing cloud computer policy for cloud computers.
       *
       * @description The cloud computers for which you want to change their policies must be in the Running state.
       *
       * @param request ModifyDesktopsPolicyGroupRequest
       * @return ModifyDesktopsPolicyGroupResponse
       */
      Models::ModifyDesktopsPolicyGroupResponse modifyDesktopsPolicyGroup(const Models::ModifyDesktopsPolicyGroupRequest &request);

      /**
       * @summary Changes the performance level (PL) of a system disk or data disk.
       *
       * @description When creating a cloud computer in Elastic Desktop Service (EDS) Enterprise, you can use a template to define specifications that align with your business needs. By default, Enterprise Graphics or High Frequency cloud computers utilize Enterprise SSDs (ESSDs). You can customize the disk capacity and performance level (PL) of these ESSDs, and adjust the PL for both system and data disks as needed.
       * >  Only Enterprise Graphics or High Frequency cloud computers support disk PL adjustments.
       *
       * @param request ModifyDiskSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskSpecResponse
       */
      Models::ModifyDiskSpecResponse modifyDiskSpecWithOptions(const Models::ModifyDiskSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the performance level (PL) of a system disk or data disk.
       *
       * @description When creating a cloud computer in Elastic Desktop Service (EDS) Enterprise, you can use a template to define specifications that align with your business needs. By default, Enterprise Graphics or High Frequency cloud computers utilize Enterprise SSDs (ESSDs). You can customize the disk capacity and performance level (PL) of these ESSDs, and adjust the PL for both system and data disks as needed.
       * >  Only Enterprise Graphics or High Frequency cloud computers support disk PL adjustments.
       *
       * @param request ModifyDiskSpecRequest
       * @return ModifyDiskSpecResponse
       */
      Models::ModifyDiskSpecResponse modifyDiskSpec(const Models::ModifyDiskSpecRequest &request);

      /**
       * @summary Assigns a cloud computer to end users and removes all original end users of the cloud computer.
       *
       * @description *   The cloud computer must be in the Running state.
       * *   After you call this operation, the assignment result is immediately returned. You can call the [DescribeDesktops](https://help.aliyun.com/document_detail/436815.html) operation to query the assignment of the cloud computer. The value of the `ManagementFlags` response parameter indicates the assignment of the cloud computer. A value of `ASSIGNING` indicates that the cloud computer is being assigned, and other values indicate that the cloud computer is assigned.
       * *   We recommend that you check the assignment every 2 to 5 seconds and perform the checks within 50 seconds. Typically, 1 to 5 seconds are required to complete the assignment.
       *
       * @param request ModifyEntitlementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEntitlementResponse
       */
      Models::ModifyEntitlementResponse modifyEntitlementWithOptions(const Models::ModifyEntitlementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns a cloud computer to end users and removes all original end users of the cloud computer.
       *
       * @description *   The cloud computer must be in the Running state.
       * *   After you call this operation, the assignment result is immediately returned. You can call the [DescribeDesktops](https://help.aliyun.com/document_detail/436815.html) operation to query the assignment of the cloud computer. The value of the `ManagementFlags` response parameter indicates the assignment of the cloud computer. A value of `ASSIGNING` indicates that the cloud computer is being assigned, and other values indicate that the cloud computer is assigned.
       * *   We recommend that you check the assignment every 2 to 5 seconds and perform the checks within 50 seconds. Typically, 1 to 5 seconds are required to complete the assignment.
       *
       * @param request ModifyEntitlementRequest
       * @return ModifyEntitlementResponse
       */
      Models::ModifyEntitlementResponse modifyEntitlement(const Models::ModifyEntitlementRequest &request);

      /**
       * @summary Modifies the attributes of an image, including the name and description of the image.
       *
       * @description You can call this operation to modify the attributes of only custom images that are in the Available state.
       *
       * @param request ModifyImageAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageAttributeResponse
       */
      Models::ModifyImageAttributeResponse modifyImageAttributeWithOptions(const Models::ModifyImageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an image, including the name and description of the image.
       *
       * @description You can call this operation to modify the attributes of only custom images that are in the Available state.
       *
       * @param request ModifyImageAttributeRequest
       * @return ModifyImageAttributeResponse
       */
      Models::ModifyImageAttributeResponse modifyImageAttribute(const Models::ModifyImageAttributeRequest &request);

      /**
       * @summary Shares an image with other Alibaba Cloud accounts, or unshares an image from the recipient Alibaba Cloud accounts.
       *
       * @description ### [](#)Security of shared images
       * Elastic Desktop Service cannot guarantee the integrity and security of shared images. When you use a shared image, you must make sure that the image comes from a trusted sharer or account, and you are legally responsible for using the shared image.
       * ### [](#)Quota and billing
       * *   A shared image does not count against the image quotas of principals to which the image is shared.
       * *   After a principal uses a shared image to create a cloud computer, the sharer is not charged for the shared image.
       * *   You are not charged for shared images.
       * ### [](#)Supported sharing behaviors
       * *   You can share custom images with other Alibaba Cloud accounts.
       * *   You can share custom images between accounts in the China site (aliyun.com) and the international site (alibabacloud.com).
       * ### [](#)Unsupported sharing behaviors
       * *   You cannot share images that are shared by other Alibaba Cloud accounts.
       * *   You cannot share encrypted images.
       * *   You cannot share images across regions. If you want to share an image across regions, you must copy the image to the destination region and then share the image. For more information, see [CopyImage](https://help.aliyun.com/document_detail/436978.html).
       *
       * @param request ModifyImagePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImagePermissionResponse
       */
      Models::ModifyImagePermissionResponse modifyImagePermissionWithOptions(const Models::ModifyImagePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shares an image with other Alibaba Cloud accounts, or unshares an image from the recipient Alibaba Cloud accounts.
       *
       * @description ### [](#)Security of shared images
       * Elastic Desktop Service cannot guarantee the integrity and security of shared images. When you use a shared image, you must make sure that the image comes from a trusted sharer or account, and you are legally responsible for using the shared image.
       * ### [](#)Quota and billing
       * *   A shared image does not count against the image quotas of principals to which the image is shared.
       * *   After a principal uses a shared image to create a cloud computer, the sharer is not charged for the shared image.
       * *   You are not charged for shared images.
       * ### [](#)Supported sharing behaviors
       * *   You can share custom images with other Alibaba Cloud accounts.
       * *   You can share custom images between accounts in the China site (aliyun.com) and the international site (alibabacloud.com).
       * ### [](#)Unsupported sharing behaviors
       * *   You cannot share images that are shared by other Alibaba Cloud accounts.
       * *   You cannot share encrypted images.
       * *   You cannot share images across regions. If you want to share an image across regions, you must copy the image to the destination region and then share the image. For more information, see [CopyImage](https://help.aliyun.com/document_detail/436978.html).
       *
       * @param request ModifyImagePermissionRequest
       * @return ModifyImagePermissionResponse
       */
      Models::ModifyImagePermissionResponse modifyImagePermission(const Models::ModifyImagePermissionRequest &request);

      /**
       * @summary Modifies the mount target of a File Storage NAS (NAS) file system.
       *
       * @description When you create a NAS file system, a mount target is automatically generated. By default, the mount target does not need to be changed. If the mount target is deleted by misoperation, you must specify a new mount target for the NAS file system in the workspace. You can call the [CreateMountTarget](https://help.aliyun.com/document_detail/62621.html) operation to create a mount target.
       *
       * @param request ModifyNASDefaultMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNASDefaultMountTargetResponse
       */
      Models::ModifyNASDefaultMountTargetResponse modifyNASDefaultMountTargetWithOptions(const Models::ModifyNASDefaultMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the mount target of a File Storage NAS (NAS) file system.
       *
       * @description When you create a NAS file system, a mount target is automatically generated. By default, the mount target does not need to be changed. If the mount target is deleted by misoperation, you must specify a new mount target for the NAS file system in the workspace. You can call the [CreateMountTarget](https://help.aliyun.com/document_detail/62621.html) operation to create a mount target.
       *
       * @param request ModifyNASDefaultMountTargetRequest
       * @return ModifyNASDefaultMountTargetResponse
       */
      Models::ModifyNASDefaultMountTargetResponse modifyNASDefaultMountTarget(const Models::ModifyNASDefaultMountTargetRequest &request);

      /**
       * @summary Modifies the bandwidth of a premium bandwidth plan.
       *
       * @param request ModifyNetworkPackageBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNetworkPackageBandwidthResponse
       */
      Models::ModifyNetworkPackageBandwidthResponse modifyNetworkPackageBandwidthWithOptions(const Models::ModifyNetworkPackageBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the bandwidth of a premium bandwidth plan.
       *
       * @param request ModifyNetworkPackageBandwidthRequest
       * @return ModifyNetworkPackageBandwidthResponse
       */
      Models::ModifyNetworkPackageBandwidthResponse modifyNetworkPackageBandwidth(const Models::ModifyNetworkPackageBandwidthRequest &request);

      /**
       * @summary Restores or disables a premium bandwidth plan.
       *
       * @description If you want to temporarily disable the Internet access of your cloud computer after the Internet access is enabled for your cloud computer, you can disable the premium bandwidth plan and restore it as needed.
       *
       * @param request ModifyNetworkPackageEnabledRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNetworkPackageEnabledResponse
       */
      Models::ModifyNetworkPackageEnabledResponse modifyNetworkPackageEnabledWithOptions(const Models::ModifyNetworkPackageEnabledRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores or disables a premium bandwidth plan.
       *
       * @description If you want to temporarily disable the Internet access of your cloud computer after the Internet access is enabled for your cloud computer, you can disable the premium bandwidth plan and restore it as needed.
       *
       * @param request ModifyNetworkPackageEnabledRequest
       * @return ModifyNetworkPackageEnabledResponse
       */
      Models::ModifyNetworkPackageEnabledResponse modifyNetworkPackageEnabled(const Models::ModifyNetworkPackageEnabledRequest &request);

      /**
       * @summary Modifies the basic properties of an office network, including the name and local administrator permission settings.
       *
       * @param request ModifyOfficeSiteAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOfficeSiteAttributeResponse
       */
      Models::ModifyOfficeSiteAttributeResponse modifyOfficeSiteAttributeWithOptions(const Models::ModifyOfficeSiteAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic properties of an office network, including the name and local administrator permission settings.
       *
       * @param request ModifyOfficeSiteAttributeRequest
       * @return ModifyOfficeSiteAttributeResponse
       */
      Models::ModifyOfficeSiteAttributeResponse modifyOfficeSiteAttribute(const Models::ModifyOfficeSiteAttributeRequest &request);

      /**
       * @summary Enables or disables the communication between cloud computers in an office network (formerly workspace). If you enable the communication between cloud computers in an office network, the cloud computers can access each other.
       *
       * @param request ModifyOfficeSiteCrossDesktopAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOfficeSiteCrossDesktopAccessResponse
       */
      Models::ModifyOfficeSiteCrossDesktopAccessResponse modifyOfficeSiteCrossDesktopAccessWithOptions(const Models::ModifyOfficeSiteCrossDesktopAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the communication between cloud computers in an office network (formerly workspace). If you enable the communication between cloud computers in an office network, the cloud computers can access each other.
       *
       * @param request ModifyOfficeSiteCrossDesktopAccessRequest
       * @return ModifyOfficeSiteCrossDesktopAccessResponse
       */
      Models::ModifyOfficeSiteCrossDesktopAccessResponse modifyOfficeSiteCrossDesktopAccess(const Models::ModifyOfficeSiteCrossDesktopAccessRequest &request);

      /**
       * @summary Modifies the DNS information of an office network.
       *
       * @param request ModifyOfficeSiteDnsInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOfficeSiteDnsInfoResponse
       */
      Models::ModifyOfficeSiteDnsInfoResponse modifyOfficeSiteDnsInfoWithOptions(const Models::ModifyOfficeSiteDnsInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the DNS information of an office network.
       *
       * @param request ModifyOfficeSiteDnsInfoRequest
       * @return ModifyOfficeSiteDnsInfoResponse
       */
      Models::ModifyOfficeSiteDnsInfoResponse modifyOfficeSiteDnsInfo(const Models::ModifyOfficeSiteDnsInfoRequest &request);

      /**
       * @summary Enables or disables multi-factor authentication (MFA) for an enterprise Active Directory (AD) office network (formerly workspace).
       *
       * @param request ModifyOfficeSiteMfaEnabledRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOfficeSiteMfaEnabledResponse
       */
      Models::ModifyOfficeSiteMfaEnabledResponse modifyOfficeSiteMfaEnabledWithOptions(const Models::ModifyOfficeSiteMfaEnabledRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables multi-factor authentication (MFA) for an enterprise Active Directory (AD) office network (formerly workspace).
       *
       * @param request ModifyOfficeSiteMfaEnabledRequest
       * @return ModifyOfficeSiteMfaEnabledResponse
       */
      Models::ModifyOfficeSiteMfaEnabledResponse modifyOfficeSiteMfaEnabled(const Models::ModifyOfficeSiteMfaEnabledRequest &request);

      /**
       * @summary Modifies the cloud computer policy.
       *
       * @param request ModifyPolicyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPolicyGroupResponse
       */
      Models::ModifyPolicyGroupResponse modifyPolicyGroupWithOptions(const Models::ModifyPolicyGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the cloud computer policy.
       *
       * @param request ModifyPolicyGroupRequest
       * @return ModifyPolicyGroupResponse
       */
      Models::ModifyPolicyGroupResponse modifyPolicyGroup(const Models::ModifyPolicyGroupRequest &request);

      /**
       * @param request ModifyResourceCenterPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceCenterPolicyResponse
       */
      Models::ModifyResourceCenterPolicyResponse modifyResourceCenterPolicyWithOptions(const Models::ModifyResourceCenterPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyResourceCenterPolicyRequest
       * @return ModifyResourceCenterPolicyResponse
       */
      Models::ModifyResourceCenterPolicyResponse modifyResourceCenterPolicy(const Models::ModifyResourceCenterPolicyRequest &request);

      /**
       * @summary 修改办公网络维度安全组策略
       *
       * @param request ModifySecurityGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupAttributeResponse
       */
      Models::ModifySecurityGroupAttributeResponse modifySecurityGroupAttributeWithOptions(const Models::ModifySecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改办公网络维度安全组策略
       *
       * @param request ModifySecurityGroupAttributeRequest
       * @return ModifySecurityGroupAttributeResponse
       */
      Models::ModifySecurityGroupAttributeResponse modifySecurityGroupAttribute(const Models::ModifySecurityGroupAttributeRequest &request);

      /**
       * @summary Modifies a custom cloud computer template.
       *
       * @description **
       * **Warning** This operation employs the full parameter update logic to maintain compatibility between the no-configuration logic and the default update logic. In other words, any unspecified parameters are treated as empty.
       *
       * @param request ModifyTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTemplateResponse
       */
      Models::ModifyTemplateResponse modifyTemplateWithOptions(const Models::ModifyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom cloud computer template.
       *
       * @description **
       * **Warning** This operation employs the full parameter update logic to maintain compatibility between the no-configuration logic and the default update logic. In other words, any unspecified parameters are treated as empty.
       *
       * @param request ModifyTemplateRequest
       * @return ModifyTemplateResponse
       */
      Models::ModifyTemplateResponse modifyTemplate(const Models::ModifyTemplateRequest &request);

      /**
       * @summary Modifies the basic information of a custom cloud computer template, including the template name and template description.
       *
       * @description This operation allows you to modify only the name and description of a custom cloud computer template. To change other parameters of the template, call the [ModifyTemplate](https://help.aliyun.com/document_detail/2925841.html) operation.
       *
       * @param request ModifyTemplateBaseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTemplateBaseInfoResponse
       */
      Models::ModifyTemplateBaseInfoResponse modifyTemplateBaseInfoWithOptions(const Models::ModifyTemplateBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic information of a custom cloud computer template, including the template name and template description.
       *
       * @description This operation allows you to modify only the name and description of a custom cloud computer template. To change other parameters of the template, call the [ModifyTemplate](https://help.aliyun.com/document_detail/2925841.html) operation.
       *
       * @param request ModifyTemplateBaseInfoRequest
       * @return ModifyTemplateBaseInfoResponse
       */
      Models::ModifyTemplateBaseInfoResponse modifyTemplateBaseInfo(const Models::ModifyTemplateBaseInfoRequest &request);

      /**
       * @summary Modifies a scheduled task configuration group.
       *
       * @param request ModifyTimerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTimerGroupResponse
       */
      Models::ModifyTimerGroupResponse modifyTimerGroupWithOptions(const Models::ModifyTimerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scheduled task configuration group.
       *
       * @param request ModifyTimerGroupRequest
       * @return ModifyTimerGroupResponse
       */
      Models::ModifyTimerGroupResponse modifyTimerGroup(const Models::ModifyTimerGroupRequest &request);

      /**
       * @summary Grants permissions on cloud desktops to end users, or revokes the permissions from the end users.
       *
       * @description You can modify end users only for cloud computers that are in the Running state.
       *
       * @param request ModifyUserEntitlementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserEntitlementResponse
       */
      Models::ModifyUserEntitlementResponse modifyUserEntitlementWithOptions(const Models::ModifyUserEntitlementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions on cloud desktops to end users, or revokes the permissions from the end users.
       *
       * @description You can modify end users only for cloud computers that are in the Running state.
       *
       * @param request ModifyUserEntitlementRequest
       * @return ModifyUserEntitlementResponse
       */
      Models::ModifyUserEntitlementResponse modifyUserEntitlement(const Models::ModifyUserEntitlementRequest &request);

      /**
       * @summary Replaces the existing authorized users of a cloud computer share with different users
       *
       * @param request ModifyUserToDesktopGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserToDesktopGroupResponse
       */
      Models::ModifyUserToDesktopGroupResponse modifyUserToDesktopGroupWithOptions(const Models::ModifyUserToDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces the existing authorized users of a cloud computer share with different users
       *
       * @param request ModifyUserToDesktopGroupRequest
       * @return ModifyUserToDesktopGroupResponse
       */
      Models::ModifyUserToDesktopGroupResponse modifyUserToDesktopGroup(const Models::ModifyUserToDesktopGroupRequest &request);

      /**
       * @summary Move files or folders.
       *
       * @param request MoveCdsFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveCdsFileResponse
       */
      Models::MoveCdsFileResponse moveCdsFileWithOptions(const Models::MoveCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Move files or folders.
       *
       * @param request MoveCdsFileRequest
       * @return MoveCdsFileResponse
       */
      Models::MoveCdsFileResponse moveCdsFile(const Models::MoveCdsFileRequest &request);

      /**
       * @summary Restart cloud computers.
       *
       * @description The cloud computers that you want to restart must be in the Running state.
       *
       * @param request RebootDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootDesktopsResponse
       */
      Models::RebootDesktopsResponse rebootDesktopsWithOptions(const Models::RebootDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restart cloud computers.
       *
       * @description The cloud computers that you want to restart must be in the Running state.
       *
       * @param request RebootDesktopsRequest
       * @return RebootDesktopsResponse
       */
      Models::RebootDesktopsResponse rebootDesktops(const Models::RebootDesktopsRequest &request);

      /**
       * @summary Rebuilds images for one or more cloud computers.
       *
       * @description Before you proceed, take note of the following limits:
       * *   You cannot convert a cloud computer\\"s operating system image from one type to another (e.g., Windows to Linux or vice versa) in China (Hong Kong) or overseas regions.
       * *   GPU and non-GPU images are not interchangeable, as graphic-based cloud computers can only use GPU-accelerated images, while other cloud computers are limited to non-GPU-accelerated images.
       * When a cloud computer’s image is updated, the system initializes its system disk by using the new image, resulting in the following effects:
       * *   All data on the original system disk is erased. Snapshots created from the original system disk become unavailable and are automatically deleted.
       * *   If the OS changes, data on the original data disk is cleared, and snapshots created from the original data disk become unavailable and are automatically deleted. If the OS remains the same, data on the original data disk is retained, and snapshots from the original data disk remain available.
       *
       * @param request RebuildDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebuildDesktopsResponse
       */
      Models::RebuildDesktopsResponse rebuildDesktopsWithOptions(const Models::RebuildDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebuilds images for one or more cloud computers.
       *
       * @description Before you proceed, take note of the following limits:
       * *   You cannot convert a cloud computer\\"s operating system image from one type to another (e.g., Windows to Linux or vice versa) in China (Hong Kong) or overseas regions.
       * *   GPU and non-GPU images are not interchangeable, as graphic-based cloud computers can only use GPU-accelerated images, while other cloud computers are limited to non-GPU-accelerated images.
       * When a cloud computer’s image is updated, the system initializes its system disk by using the new image, resulting in the following effects:
       * *   All data on the original system disk is erased. Snapshots created from the original system disk become unavailable and are automatically deleted.
       * *   If the OS changes, data on the original data disk is cleared, and snapshots created from the original data disk become unavailable and are automatically deleted. If the OS remains the same, data on the original data disk is retained, and snapshots from the original data disk remain available.
       *
       * @param request RebuildDesktopsRequest
       * @return RebuildDesktopsResponse
       */
      Models::RebuildDesktopsResponse rebuildDesktops(const Models::RebuildDesktopsRequest &request);

      /**
       * @summary 删除公网IP
       *
       * @param request ReleaseIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseIpAddressResponse
       */
      Models::ReleaseIpAddressResponse releaseIpAddressWithOptions(const Models::ReleaseIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除公网IP
       *
       * @param request ReleaseIpAddressRequest
       * @return ReleaseIpAddressResponse
       */
      Models::ReleaseIpAddressResponse releaseIpAddress(const Models::ReleaseIpAddressRequest &request);

      /**
       * @summary Unshare a folder on the network disk.
       *
       * @param tmpReq RemoveFilePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveFilePermissionResponse
       */
      Models::RemoveFilePermissionResponse removeFilePermissionWithOptions(const Models::RemoveFilePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unshare a folder on the network disk.
       *
       * @param request RemoveFilePermissionRequest
       * @return RemoveFilePermissionResponse
       */
      Models::RemoveFilePermissionResponse removeFilePermission(const Models::RemoveFilePermissionRequest &request);

      /**
       * @summary Revokes user access permissions for a cloud computer share. Once access permissions for a cloud computer share are revoked from a user, the user can no longer access any cloud computers within that share.
       *
       * @param request RemoveUserFromDesktopGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserFromDesktopGroupResponse
       */
      Models::RemoveUserFromDesktopGroupResponse removeUserFromDesktopGroupWithOptions(const Models::RemoveUserFromDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes user access permissions for a cloud computer share. Once access permissions for a cloud computer share are revoked from a user, the user can no longer access any cloud computers within that share.
       *
       * @param request RemoveUserFromDesktopGroupRequest
       * @return RemoveUserFromDesktopGroupResponse
       */
      Models::RemoveUserFromDesktopGroupResponse removeUserFromDesktopGroup(const Models::RemoveUserFromDesktopGroupRequest &request);

      /**
       * @summary 移除超卖用户组用户
       *
       * @param request RemoveUserFromDesktopOversoldUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserFromDesktopOversoldUserGroupResponse
       */
      Models::RemoveUserFromDesktopOversoldUserGroupResponse removeUserFromDesktopOversoldUserGroupWithOptions(const Models::RemoveUserFromDesktopOversoldUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移除超卖用户组用户
       *
       * @param request RemoveUserFromDesktopOversoldUserGroupRequest
       * @return RemoveUserFromDesktopOversoldUserGroupResponse
       */
      Models::RemoveUserFromDesktopOversoldUserGroupResponse removeUserFromDesktopOversoldUserGroup(const Models::RemoveUserFromDesktopOversoldUserGroupRequest &request);

      /**
       * @summary Renews a shared cloud computer.
       *
       * @param request RenewDesktopGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewDesktopGroupResponse
       */
      Models::RenewDesktopGroupResponse renewDesktopGroupWithOptions(const Models::RenewDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a shared cloud computer.
       *
       * @param request RenewDesktopGroupRequest
       * @return RenewDesktopGroupResponse
       */
      Models::RenewDesktopGroupResponse renewDesktopGroup(const Models::RenewDesktopGroupRequest &request);

      /**
       * @summary 续费桌面超卖组
       *
       * @param request RenewDesktopOversoldGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewDesktopOversoldGroupResponse
       */
      Models::RenewDesktopOversoldGroupResponse renewDesktopOversoldGroupWithOptions(const Models::RenewDesktopOversoldGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 续费桌面超卖组
       *
       * @param request RenewDesktopOversoldGroupRequest
       * @return RenewDesktopOversoldGroupResponse
       */
      Models::RenewDesktopOversoldGroupResponse renewDesktopOversoldGroup(const Models::RenewDesktopOversoldGroupRequest &request);

      /**
       * @summary Renews monthly subscription cloud computers.
       *
       * @param request RenewDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewDesktopsResponse
       */
      Models::RenewDesktopsResponse renewDesktopsWithOptions(const Models::RenewDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews monthly subscription cloud computers.
       *
       * @param request RenewDesktopsRequest
       * @return RenewDesktopsResponse
       */
      Models::RenewDesktopsResponse renewDesktops(const Models::RenewDesktopsRequest &request);

      /**
       * @summary Renews premium bandwidth plans.
       *
       * @param request RenewNetworkPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewNetworkPackagesResponse
       */
      Models::RenewNetworkPackagesResponse renewNetworkPackagesWithOptions(const Models::RenewNetworkPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews premium bandwidth plans.
       *
       * @param request RenewNetworkPackagesRequest
       * @return RenewNetworkPackagesResponse
       */
      Models::RenewNetworkPackagesResponse renewNetworkPackages(const Models::RenewNetworkPackagesRequest &request);

      /**
       * @summary Resets cloud computers of a cloud computer share.
       *
       * @description >  You can call this operation to reset only cloud computers from a cloud computer share.
       *
       * @param request ResetDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDesktopsResponse
       */
      Models::ResetDesktopsResponse resetDesktopsWithOptions(const Models::ResetDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets cloud computers of a cloud computer share.
       *
       * @description >  You can call this operation to reset only cloud computers from a cloud computer share.
       *
       * @param request ResetDesktopsRequest
       * @return ResetDesktopsResponse
       */
      Models::ResetDesktopsResponse resetDesktops(const Models::ResetDesktopsRequest &request);

      /**
       * @summary Resets the mount target of a File Storage NAS (NAS) file system.
       *
       * @description When you create a NAS file system, a mount target is automatically generated. By default, you do not need to modify the mount target of the NAS file system. If the mount target is disabled, you need to reset the mount target of the NAS file system.
       *
       * @param request ResetNASDefaultMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetNASDefaultMountTargetResponse
       */
      Models::ResetNASDefaultMountTargetResponse resetNASDefaultMountTargetWithOptions(const Models::ResetNASDefaultMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the mount target of a File Storage NAS (NAS) file system.
       *
       * @description When you create a NAS file system, a mount target is automatically generated. By default, you do not need to modify the mount target of the NAS file system. If the mount target is disabled, you need to reset the mount target of the NAS file system.
       *
       * @param request ResetNASDefaultMountTargetRequest
       * @return ResetNASDefaultMountTargetResponse
       */
      Models::ResetNASDefaultMountTargetResponse resetNASDefaultMountTarget(const Models::ResetNASDefaultMountTargetRequest &request);

      /**
       * @summary Restores the data of a disk from a snapshot.
       *
       * @description Before you call this operation, make sure that the following operations are performed:
       * *   The data that you want to retain is backed up.
       *     > The disk restoration operation is irreversible. After you call this operation, the disk is restored to the status at the point in time when the snapshot was created. Data that is generated between the snapshot creation time and the current time is lost. Before you restore the disk based on the snapshot, make sure that you back up data.
       * *   The cloud computer to which the disk belongs is stopped.
       *
       * @param request ResetSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetSnapshotResponse
       */
      Models::ResetSnapshotResponse resetSnapshotWithOptions(const Models::ResetSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores the data of a disk from a snapshot.
       *
       * @description Before you call this operation, make sure that the following operations are performed:
       * *   The data that you want to retain is backed up.
       *     > The disk restoration operation is irreversible. After you call this operation, the disk is restored to the status at the point in time when the snapshot was created. Data that is generated between the snapshot creation time and the current time is lost. Before you restore the disk based on the snapshot, make sure that you back up data.
       * *   The cloud computer to which the disk belongs is stopped.
       *
       * @param request ResetSnapshotRequest
       * @return ResetSnapshotResponse
       */
      Models::ResetSnapshotResponse resetSnapshot(const Models::ResetSnapshotRequest &request);

      /**
       * @summary Revokes the coordinate permissions.
       *
       * @param request RevokeCoordinatePrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeCoordinatePrivilegeResponse
       */
      Models::RevokeCoordinatePrivilegeResponse revokeCoordinatePrivilegeWithOptions(const Models::RevokeCoordinatePrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the coordinate permissions.
       *
       * @param request RevokeCoordinatePrivilegeRequest
       * @return RevokeCoordinatePrivilegeResponse
       */
      Models::RevokeCoordinatePrivilegeResponse revokeCoordinatePrivilege(const Models::RevokeCoordinatePrivilegeRequest &request);

      /**
       * @summary Runs a PowerShell or batch (.bat) script on Windows cloud desktops.
       *
       * @description You can use the RunCommand operation to run scripts only on Windows cloud desktops.
       *
       * @param request RunCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommandWithOptions(const Models::RunCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a PowerShell or batch (.bat) script on Windows cloud desktops.
       *
       * @description You can use the RunCommand operation to run scripts only on Windows cloud desktops.
       *
       * @param request RunCommandRequest
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommand(const Models::RunCommandRequest &request);

      /**
       * @summary Obtains the verification code that is required when you bind an advanced office network to a Cloud Enterprise Network (CEN) instance that belongs to another Alibaba Cloud account.
       *
       * @description You must call this operation to obtain the verification code that is required when you bind an advanced office network to a CEN instance that belongs to another Alibaba Cloud account. After you call this operation, the system sends a verification code to the email address associated with the Alibaba Cloud account to which the CEN instance belongs.
       *
       * @param request SendVerifyCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendVerifyCodeResponse
       */
      Models::SendVerifyCodeResponse sendVerifyCodeWithOptions(const Models::SendVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the verification code that is required when you bind an advanced office network to a Cloud Enterprise Network (CEN) instance that belongs to another Alibaba Cloud account.
       *
       * @description You must call this operation to obtain the verification code that is required when you bind an advanced office network to a CEN instance that belongs to another Alibaba Cloud account. After you call this operation, the system sends a verification code to the email address associated with the Alibaba Cloud account to which the CEN instance belongs.
       *
       * @param request SendVerifyCodeRequest
       * @return SendVerifyCodeResponse
       */
      Models::SendVerifyCodeResponse sendVerifyCode(const Models::SendVerifyCodeRequest &request);

      /**
       * @summary Configures an auto scaling policy for a multi-session cloud computer. Elastic Desktop Service allows multiple end users to share a cloud computer in a multi-session cloud computer pool. This helps save costs.
       *
       * @param request SetDesktopGroupScaleTimerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDesktopGroupScaleTimerResponse
       */
      Models::SetDesktopGroupScaleTimerResponse setDesktopGroupScaleTimerWithOptions(const Models::SetDesktopGroupScaleTimerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures an auto scaling policy for a multi-session cloud computer. Elastic Desktop Service allows multiple end users to share a cloud computer in a multi-session cloud computer pool. This helps save costs.
       *
       * @param request SetDesktopGroupScaleTimerRequest
       * @return SetDesktopGroupScaleTimerResponse
       */
      Models::SetDesktopGroupScaleTimerResponse setDesktopGroupScaleTimer(const Models::SetDesktopGroupScaleTimerRequest &request);

      /**
       * @summary Configures a scheduled start, stop, restart, or reset task for a cloud computer share.
       *
       * @param request SetDesktopGroupTimerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDesktopGroupTimerResponse
       */
      Models::SetDesktopGroupTimerResponse setDesktopGroupTimerWithOptions(const Models::SetDesktopGroupTimerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a scheduled start, stop, restart, or reset task for a cloud computer share.
       *
       * @param request SetDesktopGroupTimerRequest
       * @return SetDesktopGroupTimerResponse
       */
      Models::SetDesktopGroupTimerResponse setDesktopGroupTimer(const Models::SetDesktopGroupTimerRequest &request);

      /**
       * @summary Sets the status of a scheduled task for a cloud computer share, such as enabling or disabling it.
       *
       * @param request SetDesktopGroupTimerStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDesktopGroupTimerStatusResponse
       */
      Models::SetDesktopGroupTimerStatusResponse setDesktopGroupTimerStatusWithOptions(const Models::SetDesktopGroupTimerStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the status of a scheduled task for a cloud computer share, such as enabling or disabling it.
       *
       * @param request SetDesktopGroupTimerStatusRequest
       * @return SetDesktopGroupTimerStatusResponse
       */
      Models::SetDesktopGroupTimerStatusResponse setDesktopGroupTimerStatus(const Models::SetDesktopGroupTimerStatusRequest &request);

      /**
       * @summary Set the cloud computer maintenance mode.
       *
       * @description If you need to perform some maintenance operations on the cloud computer and want to prohibit end user from connecting and using the cloud computer during this period, you can switch it to maintenance mode.
       *
       * @param request SetDesktopMaintenanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDesktopMaintenanceResponse
       */
      Models::SetDesktopMaintenanceResponse setDesktopMaintenanceWithOptions(const Models::SetDesktopMaintenanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set the cloud computer maintenance mode.
       *
       * @description If you need to perform some maintenance operations on the cloud computer and want to prohibit end user from connecting and using the cloud computer during this period, you can switch it to maintenance mode.
       *
       * @param request SetDesktopMaintenanceRequest
       * @return SetDesktopMaintenanceResponse
       */
      Models::SetDesktopMaintenanceResponse setDesktopMaintenance(const Models::SetDesktopMaintenanceRequest &request);

      /**
       * @summary Configures the single sign-on (SSO) status of an Active Directory (AD) directory.
       *
       * @description This operation is supported only for AD directories, not for RAM directories.
       *
       * @param request SetDirectorySsoStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDirectorySsoStatusResponse
       */
      Models::SetDirectorySsoStatusResponse setDirectorySsoStatusWithOptions(const Models::SetDirectorySsoStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the single sign-on (SSO) status of an Active Directory (AD) directory.
       *
       * @description This operation is supported only for AD directories, not for RAM directories.
       *
       * @param request SetDirectorySsoStatusRequest
       * @return SetDirectorySsoStatusResponse
       */
      Models::SetDirectorySsoStatusResponse setDirectorySsoStatus(const Models::SetDirectorySsoStatusRequest &request);

      /**
       * @summary Uploads the metadata of a Security Assertion Markup Language (SAML) 2.0-based identity provider (IdP).
       *
       * @description You can call this operation only for workspaces of the Active Directory (AD) and convenience account types.
       *
       * @param request SetIdpMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetIdpMetadataResponse
       */
      Models::SetIdpMetadataResponse setIdpMetadataWithOptions(const Models::SetIdpMetadataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads the metadata of a Security Assertion Markup Language (SAML) 2.0-based identity provider (IdP).
       *
       * @description You can call this operation only for workspaces of the Active Directory (AD) and convenience account types.
       *
       * @param request SetIdpMetadataRequest
       * @return SetIdpMetadataResponse
       */
      Models::SetIdpMetadataResponse setIdpMetadata(const Models::SetIdpMetadataRequest &request);

      /**
       * @summary Enables or disables single sign-on (SSO) for a workspace.
       *
       * @param request SetOfficeSiteSsoStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetOfficeSiteSsoStatusResponse
       */
      Models::SetOfficeSiteSsoStatusResponse setOfficeSiteSsoStatusWithOptions(const Models::SetOfficeSiteSsoStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables single sign-on (SSO) for a workspace.
       *
       * @param request SetOfficeSiteSsoStatusRequest
       * @return SetOfficeSiteSsoStatusResponse
       */
      Models::SetOfficeSiteSsoStatusResponse setOfficeSiteSsoStatus(const Models::SetOfficeSiteSsoStatusRequest &request);

      /**
       * @summary Configures directories in the blacklist and whitelist based on the user profile management (UPM) feature.
       *
       * @param tmpReq SetUserProfilePathRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetUserProfilePathRulesResponse
       */
      Models::SetUserProfilePathRulesResponse setUserProfilePathRulesWithOptions(const Models::SetUserProfilePathRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures directories in the blacklist and whitelist based on the user profile management (UPM) feature.
       *
       * @param request SetUserProfilePathRulesRequest
       * @return SetUserProfilePathRulesResponse
       */
      Models::SetUserProfilePathRulesResponse setUserProfilePathRules(const Models::SetUserProfilePathRulesRequest &request);

      /**
       * @summary Starts stopped cloud computers. After the API operation is successfully called, the cloud computers enter the Running state.
       *
       * @description The cloud computers that you want to start must be in the Stopped state.
       *
       * @param request StartDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDesktopsResponse
       */
      Models::StartDesktopsResponse startDesktopsWithOptions(const Models::StartDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts stopped cloud computers. After the API operation is successfully called, the cloud computers enter the Running state.
       *
       * @description The cloud computers that you want to start must be in the Stopped state.
       *
       * @param request StartDesktopsRequest
       * @return StartDesktopsResponse
       */
      Models::StartDesktopsResponse startDesktops(const Models::StartDesktopsRequest &request);

      /**
       * @summary Stop cloud computers that are in the Running state. After the operation is successfully called, the cloud computers enter the Stopped state.
       *
       * @description The cloud computers that you want to stop must be in the Running state.
       *
       * @param request StopDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDesktopsResponse
       */
      Models::StopDesktopsResponse stopDesktopsWithOptions(const Models::StopDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stop cloud computers that are in the Running state. After the operation is successfully called, the cloud computers enter the Stopped state.
       *
       * @description The cloud computers that you want to stop must be in the Running state.
       *
       * @param request StopDesktopsRequest
       * @return StopDesktopsResponse
       */
      Models::StopDesktopsResponse stopDesktops(const Models::StopDesktopsRequest &request);

      /**
       * @summary Stops a Cloud Assistant command that is running on one or more cloud desktops.
       *
       * @description When you stop a one-time execution of a command, the command continues to run on the cloud desktops where it has started to run, and will not run on the cloud desktops where it has not started to run.
       *
       * @param request StopInvocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInvocationResponse
       */
      Models::StopInvocationResponse stopInvocationWithOptions(const Models::StopInvocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a Cloud Assistant command that is running on one or more cloud desktops.
       *
       * @description When you stop a one-time execution of a command, the command continues to run on the cloud desktops where it has started to run, and will not run on the cloud desktops where it has not started to run.
       *
       * @param request StopInvocationRequest
       * @return StopInvocationResponse
       */
      Models::StopInvocationResponse stopInvocation(const Models::StopInvocationRequest &request);

      /**
       * @summary Adds tags to cloud computers. This allows you to filter and manage cloud computers by tag.
       *
       * @description If TagKey is specified, the new TagValue value overrides the original TagValue value.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to cloud computers. This allows you to filter and manage cloud computers by tag.
       *
       * @description If TagKey is specified, the new TagValue value overrides the original TagValue value.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Queries the transmission and approval result for a submitted file.
       *
       * @param request TransferTaskApprovalCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferTaskApprovalCallbackResponse
       */
      Models::TransferTaskApprovalCallbackResponse transferTaskApprovalCallbackWithOptions(const Models::TransferTaskApprovalCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the transmission and approval result for a submitted file.
       *
       * @param request TransferTaskApprovalCallbackRequest
       * @return TransferTaskApprovalCallbackResponse
       */
      Models::TransferTaskApprovalCallbackResponse transferTaskApprovalCallback(const Models::TransferTaskApprovalCallbackRequest &request);

      /**
       * @summary Unbinds a configuration group from resources.
       *
       * @param request UnbindConfigGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindConfigGroupResponse
       */
      Models::UnbindConfigGroupResponse unbindConfigGroupWithOptions(const Models::UnbindConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a configuration group from resources.
       *
       * @param request UnbindConfigGroupRequest
       * @return UnbindConfigGroupResponse
       */
      Models::UnbindConfigGroupResponse unbindConfigGroup(const Models::UnbindConfigGroupRequest &request);

      /**
       * @summary 解绑用户桌面
       *
       * @param request UnbindUserDesktopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindUserDesktopResponse
       */
      Models::UnbindUserDesktopResponse unbindUserDesktopWithOptions(const Models::UnbindUserDesktopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑用户桌面
       *
       * @param request UnbindUserDesktopRequest
       * @return UnbindUserDesktopResponse
       */
      Models::UnbindUserDesktopResponse unbindUserDesktop(const Models::UnbindUserDesktopRequest &request);

      /**
       * @summary Unlocks a virtual multi-factor authentication (MFA) device that is in the LOCKED state.
       *
       * @param request UnlockVirtualMFADeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockVirtualMFADeviceResponse
       */
      Models::UnlockVirtualMFADeviceResponse unlockVirtualMFADeviceWithOptions(const Models::UnlockVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks a virtual multi-factor authentication (MFA) device that is in the LOCKED state.
       *
       * @param request UnlockVirtualMFADeviceRequest
       * @return UnlockVirtualMFADeviceResponse
       */
      Models::UnlockVirtualMFADeviceResponse unlockVirtualMFADevice(const Models::UnlockVirtualMFADeviceRequest &request);

      /**
       * @summary Removes tags from cloud computers. After you remove a tag, if the tag is not added to a cloud computer, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from cloud computers. After you remove a tag, if the tag is not added to a cloud computer, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Enables or disables the auto-push feature for an image update task.
       *
       * @description You can call this operation to manage each image update task. This operation is valid only when the auto-update switch in the image update module for global image updates is turned off. If the auto-update switch is turned on, the switches for each image update task are always turned on. If you want to turn on or off the auto-update switch, go to the Elastic Desktop Service console and choose **Operations > Image Updates** in the left-side navigation pane.
       *
       * @param request UpdateFotaTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFotaTaskResponse
       */
      Models::UpdateFotaTaskResponse updateFotaTaskWithOptions(const Models::UpdateFotaTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the auto-push feature for an image update task.
       *
       * @description You can call this operation to manage each image update task. This operation is valid only when the auto-update switch in the image update module for global image updates is turned off. If the auto-update switch is turned on, the switches for each image update task are always turned on. If you want to turn on or off the auto-update switch, go to the Elastic Desktop Service console and choose **Operations > Image Updates** in the left-side navigation pane.
       *
       * @param request UpdateFotaTaskRequest
       * @return UpdateFotaTaskResponse
       */
      Models::UpdateFotaTaskResponse updateFotaTask(const Models::UpdateFotaTaskRequest &request);

      /**
       * @summary Uploads your custom Windows image.
       *
       * @description >  You can upload only Windows images.
       *
       * @param request UploadImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadImageResponse
       */
      Models::UploadImageResponse uploadImageWithOptions(const Models::UploadImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads your custom Windows image.
       *
       * @description >  You can upload only Windows images.
       *
       * @param request UploadImageRequest
       * @return UploadImageResponse
       */
      Models::UploadImageResponse uploadImage(const Models::UploadImageRequest &request);

      /**
       * @summary Verifies the ID of a Cloud Enterprise Network (CEN) instance and the ID of the Alibaba Cloud account to which the instance belongs and checks whether a CIDR block conflict exists between the routes of the instance and the IPv4 CIDR blocks of the associated office network.
       *
       * @param request VerifyCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyCenResponse
       */
      Models::VerifyCenResponse verifyCenWithOptions(const Models::VerifyCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the ID of a Cloud Enterprise Network (CEN) instance and the ID of the Alibaba Cloud account to which the instance belongs and checks whether a CIDR block conflict exists between the routes of the instance and the IPv4 CIDR blocks of the associated office network.
       *
       * @param request VerifyCenRequest
       * @return VerifyCenResponse
       */
      Models::VerifyCenResponse verifyCen(const Models::VerifyCenRequest &request);

      /**
       * @summary Wakes up cloud computers.
       *
       * @description Only cloud computers that are in the Hibernated state can be waked up.
       *
       * @param request WakeupDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WakeupDesktopsResponse
       */
      Models::WakeupDesktopsResponse wakeupDesktopsWithOptions(const Models::WakeupDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Wakes up cloud computers.
       *
       * @description Only cloud computers that are in the Hibernated state can be waked up.
       *
       * @param request WakeupDesktopsRequest
       * @return WakeupDesktopsResponse
       */
      Models::WakeupDesktopsResponse wakeupDesktops(const Models::WakeupDesktopsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
