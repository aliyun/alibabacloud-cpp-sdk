// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_HSM20231113_HPP_
#define ALIBABACLOUD_HSM20231113_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Hsm20231113Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Hsm20231113.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Enables or disables the audit log feature and delivers audit logs to buckets.
       *
       * @description *   The region of the bucket must be the same as the region where the security audit feature is enabled.
       * *   If the security audit feature is enabled, do not delete Object Storage Service (OSS) buckets. If you delete OSS buckets, audit logs fail to be delivered.
       * *   Only electronic virtual security modules (EVSMs) and general virtual security modules (GVSMs) within the Chinese mainland support the security audit feature.
       *
       * @param request ConfigAuditLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigAuditLogResponse
       */
      Models::ConfigAuditLogResponse configAuditLogWithOptions(const Models::ConfigAuditLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the audit log feature and delivers audit logs to buckets.
       *
       * @description *   The region of the bucket must be the same as the region where the security audit feature is enabled.
       * *   If the security audit feature is enabled, do not delete Object Storage Service (OSS) buckets. If you delete OSS buckets, audit logs fail to be delivered.
       * *   Only electronic virtual security modules (EVSMs) and general virtual security modules (GVSMs) within the Chinese mainland support the security audit feature.
       *
       * @param request ConfigAuditLogRequest
       * @return ConfigAuditLogResponse
       */
      Models::ConfigAuditLogResponse configAuditLog(const Models::ConfigAuditLogRequest &request);

      /**
       * @summary Configures the name and description of a backup.
       *
       * @param request ConfigBackupRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigBackupRemarkResponse
       */
      Models::ConfigBackupRemarkResponse configBackupRemarkWithOptions(const Models::ConfigBackupRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the name and description of a backup.
       *
       * @param request ConfigBackupRemarkRequest
       * @return ConfigBackupRemarkResponse
       */
      Models::ConfigBackupRemarkResponse configBackupRemark(const Models::ConfigBackupRemarkRequest &request);

      /**
       * @summary Modifies the execution mode of a backup task.
       *
       * @description Only hardware security modules (HSMs) in the Chinese mainland support the operation.
       *
       * @param request ConfigBackupTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigBackupTaskResponse
       */
      Models::ConfigBackupTaskResponse configBackupTaskWithOptions(const Models::ConfigBackupTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the execution mode of a backup task.
       *
       * @description Only hardware security modules (HSMs) in the Chinese mainland support the operation.
       *
       * @param request ConfigBackupTaskRequest
       * @return ConfigBackupTaskResponse
       */
      Models::ConfigBackupTaskResponse configBackupTask(const Models::ConfigBackupTaskRequest &request);

      /**
       * @summary Configures a certificate for a cluster of hardware security modules (HSMs) outside the Chinese mainland.
       *
       * @description For more information about how to create a self-signed certificate and a cluster certificate on an Elastic Compute Service (ECS) instance, see [Create a NIST FIPS-validated GVSM cluster](https://help.aliyun.com/document_detail/293585.html).
       *
       * @param request ConfigClusterCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigClusterCertificateResponse
       */
      Models::ConfigClusterCertificateResponse configClusterCertificateWithOptions(const Models::ConfigClusterCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a certificate for a cluster of hardware security modules (HSMs) outside the Chinese mainland.
       *
       * @description For more information about how to create a self-signed certificate and a cluster certificate on an Elastic Compute Service (ECS) instance, see [Create a NIST FIPS-validated GVSM cluster](https://help.aliyun.com/document_detail/293585.html).
       *
       * @param request ConfigClusterCertificateRequest
       * @return ConfigClusterCertificateResponse
       */
      Models::ConfigClusterCertificateResponse configClusterCertificate(const Models::ConfigClusterCertificateRequest &request);

      /**
       * @summary Changes the name of a cluster.
       *
       * @param request ConfigClusterNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigClusterNameResponse
       */
      Models::ConfigClusterNameResponse configClusterNameWithOptions(const Models::ConfigClusterNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of a cluster.
       *
       * @param request ConfigClusterNameRequest
       * @return ConfigClusterNameResponse
       */
      Models::ConfigClusterNameResponse configClusterName(const Models::ConfigClusterNameRequest &request);

      /**
       * @summary Modifies a list of vSwitches that are associated with a hardware security module (HSM) cluster.
       *
       * @description You can call the operation to configure all vSwitches that are associated with a HSM cluster. You can only add new vSwitches. You cannot delete vSwitches.
       *
       * @param tmpReq ConfigClusterSubnetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigClusterSubnetResponse
       */
      Models::ConfigClusterSubnetResponse configClusterSubnetWithOptions(const Models::ConfigClusterSubnetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a list of vSwitches that are associated with a hardware security module (HSM) cluster.
       *
       * @description You can call the operation to configure all vSwitches that are associated with a HSM cluster. You can only add new vSwitches. You cannot delete vSwitches.
       *
       * @param request ConfigClusterSubnetRequest
       * @return ConfigClusterSubnetResponse
       */
      Models::ConfigClusterSubnetResponse configClusterSubnet(const Models::ConfigClusterSubnetRequest &request);

      /**
       * @summary Modifies the IP address whitelist of a cluster.
       *
       * @description The IP address whitelist of a cluster has a higher priority than the IP address whitelist of a hardware security module (HSM) in the cluster. In cluster mode, we recommend that you create an IP address whitelist for your cluster. You do not need to create an IP address for the HSM in the cluster.
       *
       * @param request ConfigClusterWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigClusterWhitelistResponse
       */
      Models::ConfigClusterWhitelistResponse configClusterWhitelistWithOptions(const Models::ConfigClusterWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP address whitelist of a cluster.
       *
       * @description The IP address whitelist of a cluster has a higher priority than the IP address whitelist of a hardware security module (HSM) in the cluster. In cluster mode, we recommend that you create an IP address whitelist for your cluster. You do not need to create an IP address for the HSM in the cluster.
       *
       * @param request ConfigClusterWhitelistRequest
       * @return ConfigClusterWhitelistResponse
       */
      Models::ConfigClusterWhitelistResponse configClusterWhitelist(const Models::ConfigClusterWhitelistRequest &request);

      /**
       * @summary Modifies the description of an image.
       *
       * @param request ConfigImageRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigImageRemarkResponse
       */
      Models::ConfigImageRemarkResponse configImageRemarkWithOptions(const Models::ConfigImageRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of an image.
       *
       * @param request ConfigImageRemarkRequest
       * @return ConfigImageRemarkResponse
       */
      Models::ConfigImageRemarkResponse configImageRemark(const Models::ConfigImageRemarkRequest &request);

      /**
       * @summary Modifies the virtual private cloud (VPC) endpoint of a hardware security module (HSM).
       *
       * @description After you add an HSM to a cluster, you cannot modify the VPC endpoint of the HSM.
       *
       * @param request ConfigInstanceIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigInstanceIpAddressResponse
       */
      Models::ConfigInstanceIpAddressResponse configInstanceIpAddressWithOptions(const Models::ConfigInstanceIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the virtual private cloud (VPC) endpoint of a hardware security module (HSM).
       *
       * @description After you add an HSM to a cluster, you cannot modify the VPC endpoint of the HSM.
       *
       * @param request ConfigInstanceIpAddressRequest
       * @return ConfigInstanceIpAddressResponse
       */
      Models::ConfigInstanceIpAddressResponse configInstanceIpAddress(const Models::ConfigInstanceIpAddressRequest &request);

      /**
       * @summary Modifies the description of a hardware security module (HSM).
       *
       * @param request ConfigInstanceRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigInstanceRemarkResponse
       */
      Models::ConfigInstanceRemarkResponse configInstanceRemarkWithOptions(const Models::ConfigInstanceRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a hardware security module (HSM).
       *
       * @param request ConfigInstanceRemarkRequest
       * @return ConfigInstanceRemarkResponse
       */
      Models::ConfigInstanceRemarkResponse configInstanceRemark(const Models::ConfigInstanceRemarkRequest &request);

      /**
       * @summary Modifies the IP address whitelist of a hardware security module (HSM).
       *
       * @description You can configure the IP address whitelist for HSMs that are not added to a cluster and are in the ACTIVE state.
       *
       * @param request ConfigInstanceWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigInstanceWhitelistResponse
       */
      Models::ConfigInstanceWhitelistResponse configInstanceWhitelistWithOptions(const Models::ConfigInstanceWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP address whitelist of a hardware security module (HSM).
       *
       * @description You can configure the IP address whitelist for HSMs that are not added to a cluster and are in the ACTIVE state.
       *
       * @param request ConfigInstanceWhitelistRequest
       * @return ConfigInstanceWhitelistResponse
       */
      Models::ConfigInstanceWhitelistResponse configInstanceWhitelist(const Models::ConfigInstanceWhitelistRequest &request);

      /**
       * @summary Copies an image to another region.
       *
       * @description This operation requires that the destination region does not have the same image. This operation is available only for hardware security modules (HSMs) outside the Chinese mainland.
       *
       * @param request CopyImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyImageResponse
       */
      Models::CopyImageResponse copyImageWithOptions(const Models::CopyImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies an image to another region.
       *
       * @description This operation requires that the destination region does not have the same image. This operation is available only for hardware security modules (HSMs) outside the Chinese mainland.
       *
       * @param request CopyImageRequest
       * @return CopyImageResponse
       */
      Models::CopyImageResponse copyImage(const Models::CopyImageRequest &request);

      /**
       * @summary Creates a cluster by specifying a hardware security module (HSM) as the master HSM.
       *
       * @description The master HSM that you specify to create a cluster must be in the ACTIVE state.
       *
       * @param request CreateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const Models::CreateClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cluster by specifying a hardware security module (HSM) as the master HSM.
       *
       * @description The master HSM that you specify to create a cluster must be in the ACTIVE state.
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const Models::CreateClusterRequest &request);

      /**
       * @summary Deletes a hardware security module (HSM) cluster.
       *
       * @description You can delete an HSM only if the cluster does not contain HSMs.
       *
       * @param request DeleteClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteClusterWithOptions(const Models::DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a hardware security module (HSM) cluster.
       *
       * @description You can delete an HSM only if the cluster does not contain HSMs.
       *
       * @param request DeleteClusterRequest
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteCluster(const Models::DeleteClusterRequest &request);

      /**
       * @summary Queries the regions that are supported by Cloud Hardware Security Module.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions that are supported by Cloud Hardware Security Module.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary 下载集群托管证书
       *
       * @description ## 请求说明
       * - 该API允许用户获取特定集群的管理证书。
       * - 返回的数据是经过base64编码的证书内容。
       *
       * @param request DownloadClusterManagedCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadClusterManagedCertResponse
       */
      Models::DownloadClusterManagedCertResponse downloadClusterManagedCertWithOptions(const Models::DownloadClusterManagedCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下载集群托管证书
       *
       * @description ## 请求说明
       * - 该API允许用户获取特定集群的管理证书。
       * - 返回的数据是经过base64编码的证书内容。
       *
       * @param request DownloadClusterManagedCertRequest
       * @return DownloadClusterManagedCertResponse
       */
      Models::DownloadClusterManagedCertResponse downloadClusterManagedCert(const Models::DownloadClusterManagedCertRequest &request);

      /**
       * @summary Binds a backup to a specified hardware security module (HSM).
       *
       * @description This operation is available only for backups in the Chinese mainland.
       *
       * @param request EnableBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableBackupResponse
       */
      Models::EnableBackupResponse enableBackupWithOptions(const Models::EnableBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a backup to a specified hardware security module (HSM).
       *
       * @description This operation is available only for backups in the Chinese mainland.
       *
       * @param request EnableBackupRequest
       * @return EnableBackupResponse
       */
      Models::EnableBackupResponse enableBackup(const Models::EnableBackupRequest &request);

      /**
       * @summary Exports the image for a specified hardware security module (HSM).
       *
       * @param request ExportImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportImageResponse
       */
      Models::ExportImageResponse exportImageWithOptions(const Models::ExportImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports the image for a specified hardware security module (HSM).
       *
       * @param request ExportImageRequest
       * @return ExportImageResponse
       */
      Models::ExportImageResponse exportImage(const Models::ExportImageRequest &request);

      /**
       * @summary Queries the status of the audit log feature in the current region.
       *
       * @param request GetAuditLogStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuditLogStatusResponse
       */
      Models::GetAuditLogStatusResponse getAuditLogStatusWithOptions(const Models::GetAuditLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the audit log feature in the current region.
       *
       * @param request GetAuditLogStatusRequest
       * @return GetAuditLogStatusResponse
       */
      Models::GetAuditLogStatusResponse getAuditLogStatus(const Models::GetAuditLogStatusRequest &request);

      /**
       * @summary Queries the information about a specified backup.
       *
       * @param request GetBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBackupResponse
       */
      Models::GetBackupResponse getBackupWithOptions(const Models::GetBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specified backup.
       *
       * @param request GetBackupRequest
       * @return GetBackupResponse
       */
      Models::GetBackupResponse getBackup(const Models::GetBackupRequest &request);

      /**
       * @summary Queries information about a specified cluster.
       *
       * @param request GetClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getClusterWithOptions(const Models::GetClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a specified cluster.
       *
       * @param request GetClusterRequest
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getCluster(const Models::GetClusterRequest &request);

      /**
       * @summary Queries information about an image.
       *
       * @param request GetImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageResponse
       */
      Models::GetImageResponse getImageWithOptions(const Models::GetImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an image.
       *
       * @param request GetImageRequest
       * @return GetImageResponse
       */
      Models::GetImageResponse getImage(const Models::GetImageRequest &request);

      /**
       * @summary Queries information about a specified hardware security module (HSM).
       *
       * @param request GetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a specified hardware security module (HSM).
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @summary Queries the details of an asynchronous task.
       *
       * @param request GetJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResponse
       */
      Models::GetJobResponse getJobWithOptions(const Models::GetJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an asynchronous task.
       *
       * @param request GetJobRequest
       * @return GetJobResponse
       */
      Models::GetJobResponse getJob(const Models::GetJobRequest &request);

      /**
       * @summary Authorizes Cloud Hardware Security Module to deliver logs.
       *
       * @param request InitializeAuditLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeAuditLogResponse
       */
      Models::InitializeAuditLogResponse initializeAuditLogWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes Cloud Hardware Security Module to deliver logs.
       *
       * @return InitializeAuditLogResponse
       */
      Models::InitializeAuditLogResponse initializeAuditLog();

      /**
       * @summary Initializes a cluster.
       *
       * @description *   The cluster is not initialized, but the master hardware security module (HSM) of the cluster is initialized.
       * *   Two or more vSwitches are configured for the cluster.
       *
       * @param request InitializeClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeClusterResponse
       */
      Models::InitializeClusterResponse initializeClusterWithOptions(const Models::InitializeClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes a cluster.
       *
       * @description *   The cluster is not initialized, but the master hardware security module (HSM) of the cluster is initialized.
       * *   Two or more vSwitches are configured for the cluster.
       *
       * @param request InitializeClusterRequest
       * @return InitializeClusterResponse
       */
      Models::InitializeClusterResponse initializeCluster(const Models::InitializeClusterRequest &request);

      /**
       * @summary Adds a hardware security module (HSM) to the current cluster.
       *
       * @description *   You can add the HSM to only the cluster that is in the INITIALIZED state.
       * *   The HSM that you want to add to the cluster is enabled or disabled and is not initialized.
       *
       * @param request JoinClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinClusterResponse
       */
      Models::JoinClusterResponse joinClusterWithOptions(const Models::JoinClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a hardware security module (HSM) to the current cluster.
       *
       * @description *   You can add the HSM to only the cluster that is in the INITIALIZED state.
       * *   The HSM that you want to add to the cluster is enabled or disabled and is not initialized.
       *
       * @param request JoinClusterRequest
       * @return JoinClusterResponse
       */
      Models::JoinClusterResponse joinCluster(const Models::JoinClusterRequest &request);

      /**
       * @summary Removes a hardware security module (HSM) from the current cluster.
       *
       * @description *   If non-master HSMs exist in a cluster, the master HSM cannot be removed from the cluster.
       * *   After the master HSM is removed from a cluster, the cluster enters the TO_DELETE state and cannot be restored to the available state. Proceed with caution.
       *
       * @param request LeaveClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LeaveClusterResponse
       */
      Models::LeaveClusterResponse leaveClusterWithOptions(const Models::LeaveClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a hardware security module (HSM) from the current cluster.
       *
       * @description *   If non-master HSMs exist in a cluster, the master HSM cannot be removed from the cluster.
       * *   After the master HSM is removed from a cluster, the cluster enters the TO_DELETE state and cannot be restored to the available state. Proceed with caution.
       *
       * @param request LeaveClusterRequest
       * @return LeaveClusterResponse
       */
      Models::LeaveClusterResponse leaveCluster(const Models::LeaveClusterRequest &request);

      /**
       * @summary Queries the backups that meet the query conditions.
       *
       * @param request ListBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBackupsResponse
       */
      Models::ListBackupsResponse listBackupsWithOptions(const Models::ListBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backups that meet the query conditions.
       *
       * @param request ListBackupsRequest
       * @return ListBackupsResponse
       */
      Models::ListBackupsResponse listBackups(const Models::ListBackupsRequest &request);

      /**
       * @summary Queries the clusters that meet the query conditions.
       *
       * @param request ListClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClustersWithOptions(const Models::ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the clusters that meet the query conditions.
       *
       * @param request ListClustersRequest
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClusters(const Models::ListClustersRequest &request);

      /**
       * @summary Queries the images that meet the specified conditions.
       *
       * @param request ListImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImagesWithOptions(const Models::ListImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the images that meet the specified conditions.
       *
       * @param request ListImagesRequest
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImages(const Models::ListImagesRequest &request);

      /**
       * @summary Queries the hardware security modules (HSMs) that meet the query conditions.
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the hardware security modules (HSMs) that meet the query conditions.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Moves a resource to a new resource group.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a resource to a new resource group.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Disables a hardware security module (HSM).
       *
       * @description After you disable an HSM, the relevant service operations fail. Proceed with caution.
       *
       * @param request PauseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseInstanceResponse
       */
      Models::PauseInstanceResponse pauseInstanceWithOptions(const Models::PauseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a hardware security module (HSM).
       *
       * @description After you disable an HSM, the relevant service operations fail. Proceed with caution.
       *
       * @param request PauseInstanceRequest
       * @return PauseInstanceResponse
       */
      Models::PauseInstanceResponse pauseInstance(const Models::PauseInstanceRequest &request);

      /**
       * @summary 快速部署集群
       *
       * @param tmpReq QuickDeployClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuickDeployClusterResponse
       */
      Models::QuickDeployClusterResponse quickDeployClusterWithOptions(const Models::QuickDeployClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 快速部署集群
       *
       * @param request QuickDeployClusterRequest
       * @return QuickDeployClusterResponse
       */
      Models::QuickDeployClusterResponse quickDeployCluster(const Models::QuickDeployClusterRequest &request);

      /**
       * @summary Initializes a hardware security module (HSM).
       *
       * @description This operation is supported only for general virtual security modules (GVSMs) in the Chinese mainland.
       *
       * @param request QuickInitInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuickInitInstanceResponse
       */
      Models::QuickInitInstanceResponse quickInitInstanceWithOptions(const Models::QuickInitInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes a hardware security module (HSM).
       *
       * @description This operation is supported only for general virtual security modules (GVSMs) in the Chinese mainland.
       *
       * @param request QuickInitInstanceRequest
       * @return QuickInitInstanceResponse
       */
      Models::QuickInitInstanceResponse quickInitInstance(const Models::QuickInitInstanceRequest &request);

      /**
       * @summary Disassociates a backup from a hardware security module (HSM).
       *
       * @description This operation is available only for HSMs in the Chinese mainland.
       *
       * @param request ResetBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetBackupResponse
       */
      Models::ResetBackupResponse resetBackupWithOptions(const Models::ResetBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a backup from a hardware security module (HSM).
       *
       * @description This operation is available only for HSMs in the Chinese mainland.
       *
       * @param request ResetBackupRequest
       * @return ResetBackupResponse
       */
      Models::ResetBackupResponse resetBackup(const Models::ResetBackupRequest &request);

      /**
       * @summary Resets a hardware security module (HSM).
       *
       * @description After an HSM is reset, all related data is deleted and cannot be recovered. Proceed with caution.
       *
       * @param request ResetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetInstanceResponse
       */
      Models::ResetInstanceResponse resetInstanceWithOptions(const Models::ResetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets a hardware security module (HSM).
       *
       * @description After an HSM is reset, all related data is deleted and cannot be recovered. Proceed with caution.
       *
       * @param request ResetInstanceRequest
       * @return ResetInstanceResponse
       */
      Models::ResetInstanceResponse resetInstance(const Models::ResetInstanceRequest &request);

      /**
       * @summary Restores a hardware security module (HSM) by using an image.
       *
       * @description You can use images to restore only HSMs that are paused or disabled.
       *
       * @param request RestoreInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreInstanceResponse
       */
      Models::RestoreInstanceResponse restoreInstanceWithOptions(const Models::RestoreInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a hardware security module (HSM) by using an image.
       *
       * @description You can use images to restore only HSMs that are paused or disabled.
       *
       * @param request RestoreInstanceRequest
       * @return RestoreInstanceResponse
       */
      Models::RestoreInstanceResponse restoreInstance(const Models::RestoreInstanceRequest &request);

      /**
       * @summary Resumes a disabled hardware security module (HSM).
       *
       * @param request ResumeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstanceWithOptions(const Models::ResumeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a disabled hardware security module (HSM).
       *
       * @param request ResumeInstanceRequest
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstance(const Models::ResumeInstanceRequest &request);

      /**
       * @summary 轮转集群托管证书
       *
       * @description ## 请求说明
       * 该API用于触发指定集群的管理证书轮转过程。通过提供`ClusterId`参数，可以指定需要进行证书轮转的集群。此操作有助于提高集群的安全性，建议定期执行。
       * ### 注意事项
       * - 确保提供的`ClusterId`是有效的，并且用户具有对该集群的操作权限。
       * - 证书轮转可能会影响依赖于旧证书的服务，请在适当的时间窗口内执行此操作。
       *
       * @param request RotateClusterManagedCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RotateClusterManagedCertResponse
       */
      Models::RotateClusterManagedCertResponse rotateClusterManagedCertWithOptions(const Models::RotateClusterManagedCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轮转集群托管证书
       *
       * @description ## 请求说明
       * 该API用于触发指定集群的管理证书轮转过程。通过提供`ClusterId`参数，可以指定需要进行证书轮转的集群。此操作有助于提高集群的安全性，建议定期执行。
       * ### 注意事项
       * - 确保提供的`ClusterId`是有效的，并且用户具有对该集群的操作权限。
       * - 证书轮转可能会影响依赖于旧证书的服务，请在适当的时间窗口内执行此操作。
       *
       * @param request RotateClusterManagedCertRequest
       * @return RotateClusterManagedCertResponse
       */
      Models::RotateClusterManagedCertResponse rotateClusterManagedCert(const Models::RotateClusterManagedCertRequest &request);

      /**
       * @summary Promotes a slave hardware security module (HSM) to the master HSM within the cluster. Clusters that are manually synchronized in the Chinese Mainland do not support this operation.
       *
       * @param request SwitchClusterMasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchClusterMasterResponse
       */
      Models::SwitchClusterMasterResponse switchClusterMasterWithOptions(const Models::SwitchClusterMasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Promotes a slave hardware security module (HSM) to the master HSM within the cluster. Clusters that are manually synchronized in the Chinese Mainland do not support this operation.
       *
       * @param request SwitchClusterMasterRequest
       * @return SwitchClusterMasterResponse
       */
      Models::SwitchClusterMasterResponse switchClusterMaster(const Models::SwitchClusterMasterRequest &request);

      /**
       * @summary Synchronizes the data of hardware security modules (HSMs) in a cluster.
       *
       * @description *   This operation is used for manually synchronizing data within clusters located in the Chinese Mainland. For clusters outside the Chinese Mainland, automatic data synchronization is supported, and this operation is unnecessary. If you attempt to use this operation, a 400 error code will be returned.
       * *   The data synchronization takes approximately 5 minutes. To avoid service interruptions, we recommend performing this operation during off-peak hours.
       *
       * @param request SyncClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncClusterResponse
       */
      Models::SyncClusterResponse syncClusterWithOptions(const Models::SyncClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes the data of hardware security modules (HSMs) in a cluster.
       *
       * @description *   This operation is used for manually synchronizing data within clusters located in the Chinese Mainland. For clusters outside the Chinese Mainland, automatic data synchronization is supported, and this operation is unnecessary. If you attempt to use this operation, a 400 error code will be returned.
       * *   The data synchronization takes approximately 5 minutes. To avoid service interruptions, we recommend performing this operation during off-peak hours.
       *
       * @param request SyncClusterRequest
       * @return SyncClusterResponse
       */
      Models::SyncClusterResponse syncCluster(const Models::SyncClusterRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
