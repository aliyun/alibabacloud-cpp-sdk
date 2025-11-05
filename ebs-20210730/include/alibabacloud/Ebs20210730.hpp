// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EBS20210730_HPP_
#define ALIBABACLOUD_EBS20210730_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ebs20210730Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ebs20210730.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a replication pair to a replication pair-consistent group. You can use a replication pair-consistent group to batch manage replication pairs. When you call this operation, you can specify parameters, such as ReplicaGroupId, ReplicaPairId, and ClientToken, in the request.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   A replication pair and a replication pair-consistent group replicate in the same direction if they have the same primary region (production region), primary zone (production zone), secondary region (disaster recovery region), and secondary zone (disaster recovery zone). A replication pair can be added only to a replication pair-consistent group that replicates in the same direction as the replication pair.
       * *   Before you can add a replication pair to a replication pair-consistent group, make sure that the pair and the group are in the **Created** (`created`) or **Stopped** (`stopped`) state.
       * *   Up to 17 replication pairs can be added to a single replication pair-consistent group.
       * *   After replication pairs are added to a replication pair-consistent group, the recovery point objective (RPO) of the group takes effect on the pairs in place of their original RPOs.
       *
       * @param request AddDiskReplicaPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDiskReplicaPairResponse
       */
      Models::AddDiskReplicaPairResponse addDiskReplicaPairWithOptions(const Models::AddDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a replication pair to a replication pair-consistent group. You can use a replication pair-consistent group to batch manage replication pairs. When you call this operation, you can specify parameters, such as ReplicaGroupId, ReplicaPairId, and ClientToken, in the request.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   A replication pair and a replication pair-consistent group replicate in the same direction if they have the same primary region (production region), primary zone (production zone), secondary region (disaster recovery region), and secondary zone (disaster recovery zone). A replication pair can be added only to a replication pair-consistent group that replicates in the same direction as the replication pair.
       * *   Before you can add a replication pair to a replication pair-consistent group, make sure that the pair and the group are in the **Created** (`created`) or **Stopped** (`stopped`) state.
       * *   Up to 17 replication pairs can be added to a single replication pair-consistent group.
       * *   After replication pairs are added to a replication pair-consistent group, the recovery point objective (RPO) of the group takes effect on the pairs in place of their original RPOs.
       *
       * @param request AddDiskReplicaPairRequest
       * @return AddDiskReplicaPairResponse
       */
      Models::AddDiskReplicaPairResponse addDiskReplicaPair(const Models::AddDiskReplicaPairRequest &request);

      /**
       * @summary Enables CloudLens for EBS.
       *
       * @description ## Usage notes
       * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       *
       * @param request ApplyLensServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyLensServiceResponse
       */
      Models::ApplyLensServiceResponse applyLensServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables CloudLens for EBS.
       *
       * @description ## Usage notes
       * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       *
       * @return ApplyLensServiceResponse
       */
      Models::ApplyLensServiceResponse applyLensService();

      /**
       * @summary Bind disks into a enterprise-level snapshot policy.
       *
       * @param request BindEnterpriseSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindEnterpriseSnapshotPolicyResponse
       */
      Models::BindEnterpriseSnapshotPolicyResponse bindEnterpriseSnapshotPolicyWithOptions(const Models::BindEnterpriseSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Bind disks into a enterprise-level snapshot policy.
       *
       * @param request BindEnterpriseSnapshotPolicyRequest
       * @return BindEnterpriseSnapshotPolicyResponse
       */
      Models::BindEnterpriseSnapshotPolicyResponse bindEnterpriseSnapshotPolicy(const Models::BindEnterpriseSnapshotPolicyRequest &request);

      /**
       * @summary Disables CloudLens for EBS.
       *
       * @description ## Usage notes
       * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       *
       * @param request CancelLensServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelLensServiceResponse
       */
      Models::CancelLensServiceResponse cancelLensServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables CloudLens for EBS.
       *
       * @description ## Usage notes
       * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       *
       * @return CancelLensServiceResponse
       */
      Models::CancelLensServiceResponse cancelLensService();

      /**
       * @summary Changes the resource group to which an Elastic Block Storage (EBS) resource belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which an Elastic Block Storage (EBS) resource belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Clears the disaster recovery drills that were initiated from the secondary disk of a replication pair and deletes the auto-created drill disks.
       *
       * @param request ClearPairDrillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearPairDrillResponse
       */
      Models::ClearPairDrillResponse clearPairDrillWithOptions(const Models::ClearPairDrillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears the disaster recovery drills that were initiated from the secondary disk of a replication pair and deletes the auto-created drill disks.
       *
       * @param request ClearPairDrillRequest
       * @return ClearPairDrillResponse
       */
      Models::ClearPairDrillResponse clearPairDrill(const Models::ClearPairDrillRequest &request);

      /**
       * @summary Clears the disaster recovery drills that were initiated from the secondary disks of a replication pair-consistent group and deletes the auto-created drill disks.
       *
       * @param request ClearReplicaGroupDrillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearReplicaGroupDrillResponse
       */
      Models::ClearReplicaGroupDrillResponse clearReplicaGroupDrillWithOptions(const Models::ClearReplicaGroupDrillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears the disaster recovery drills that were initiated from the secondary disks of a replication pair-consistent group and deletes the auto-created drill disks.
       *
       * @param request ClearReplicaGroupDrillRequest
       * @return ClearReplicaGroupDrillResponse
       */
      Models::ClearReplicaGroupDrillResponse clearReplicaGroupDrill(const Models::ClearReplicaGroupDrillRequest &request);

      /**
       * @summary Creates a dedicated block storage cluster. When you call this operation, you can specify parameters, such as Azone, Capacity, Type, and PeriodUnit, in the request.
       *
       * @description ## [](#)Usage notes
       * *   Dedicated block storage clusters are physically isolated from public block storage clusters. The owner of each dedicated block storage cluster has exclusive access to all resources in the cluster.
       * *   Disks created in a dedicated block storage cluster can be attached only to Elastic Compute Service (ECS) instances that reside in the same zone as the cluster. Before you create a dedicated block storage cluster, decide the regions and zones in which to deploy your cloud resources.
       * *   Dedicated block storage clusters are classified into basic and performance types. When you create a dedicated block storage cluster, select a cluster type based on your business requirements.
       * *   You are charged for creating dedicated block storage clusters.
       *
       * @param request CreateDedicatedBlockStorageClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDedicatedBlockStorageClusterResponse
       */
      Models::CreateDedicatedBlockStorageClusterResponse createDedicatedBlockStorageClusterWithOptions(const Models::CreateDedicatedBlockStorageClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dedicated block storage cluster. When you call this operation, you can specify parameters, such as Azone, Capacity, Type, and PeriodUnit, in the request.
       *
       * @description ## [](#)Usage notes
       * *   Dedicated block storage clusters are physically isolated from public block storage clusters. The owner of each dedicated block storage cluster has exclusive access to all resources in the cluster.
       * *   Disks created in a dedicated block storage cluster can be attached only to Elastic Compute Service (ECS) instances that reside in the same zone as the cluster. Before you create a dedicated block storage cluster, decide the regions and zones in which to deploy your cloud resources.
       * *   Dedicated block storage clusters are classified into basic and performance types. When you create a dedicated block storage cluster, select a cluster type based on your business requirements.
       * *   You are charged for creating dedicated block storage clusters.
       *
       * @param request CreateDedicatedBlockStorageClusterRequest
       * @return CreateDedicatedBlockStorageClusterResponse
       */
      Models::CreateDedicatedBlockStorageClusterResponse createDedicatedBlockStorageCluster(const Models::CreateDedicatedBlockStorageClusterRequest &request);

      /**
       * @summary Creates a replication pair-consistent group.
       *
       * @description ## [](#)Usage notes
       * The replication pair-consistent group feature allows you to batch manage multiple disks in disaster recovery scenarios. You can restore the data of all disks in the same replication pair-consistent group to the same point in time to allow for disaster recovery of instances.
       * Take note of the following items:
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   Replication pair-consistent groups can be used to implement disaster recovery across zones within the same region and disaster recovery across regions.
       * *   A replication pair and a replication pair-consistent group can replicate in the same direction if they have the same primary region (production region), primary zone (production zone), secondary region (disaster recovery region), and secondary zone (disaster recovery zone). A replication pair can be added to only a replication pair-consistent group that replicates in the same direction as the replication pair.
       * *   After replication pairs are added to a replication pair-consistent group, the recovery point objective (RPO) of the group takes effect on the pairs instead of their original RPOs.
       *
       * @param request CreateDiskReplicaGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiskReplicaGroupResponse
       */
      Models::CreateDiskReplicaGroupResponse createDiskReplicaGroupWithOptions(const Models::CreateDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a replication pair-consistent group.
       *
       * @description ## [](#)Usage notes
       * The replication pair-consistent group feature allows you to batch manage multiple disks in disaster recovery scenarios. You can restore the data of all disks in the same replication pair-consistent group to the same point in time to allow for disaster recovery of instances.
       * Take note of the following items:
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   Replication pair-consistent groups can be used to implement disaster recovery across zones within the same region and disaster recovery across regions.
       * *   A replication pair and a replication pair-consistent group can replicate in the same direction if they have the same primary region (production region), primary zone (production zone), secondary region (disaster recovery region), and secondary zone (disaster recovery zone). A replication pair can be added to only a replication pair-consistent group that replicates in the same direction as the replication pair.
       * *   After replication pairs are added to a replication pair-consistent group, the recovery point objective (RPO) of the group takes effect on the pairs instead of their original RPOs.
       *
       * @param request CreateDiskReplicaGroupRequest
       * @return CreateDiskReplicaGroupResponse
       */
      Models::CreateDiskReplicaGroupResponse createDiskReplicaGroup(const Models::CreateDiskReplicaGroupRequest &request);

      /**
       * @summary Creates a replication pair to asynchronously replicate data between disks.
       *
       * @description ## [](#)Usage notes
       * Async replication is a feature that protects data across regions by using the data replication capability of Elastic Block Storage (EBS). This feature can be used to asynchronously replicate data from a disk in one region to a disk in another region for disaster recovery purposes. You can use this feature to implement disaster recovery for critical business to protect data in your databases and improve business continuity. You are charged on a subscription basis for the bandwidth that is used by the async replication feature.
       * Currently, the async replication feature can asynchronously replicate data only between enhanced SSDs (ESSDs). The functionality of disks in replication pairs is limited.
       * Take note of the following items:
       * *   Make sure that the source disk (primary disk) from which to replicate data and the destination disk (secondary disk) to which to replicate data are created. You can call the [CreateDisk](https://help.aliyun.com/document_detail/25513.html) operation to create disks.
       * *   The secondary disk cannot reside in the same region as the primary disk. For information about the regions that support async replication, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   After you call this operation to create a replication pair for the primary disk and the secondary disk, you must call the [StartDiskReplicaPair](https://help.aliyun.com/document_detail/354205.html) operation to enable async replication to replicate data from the primary disk to the secondary disk cross regions on a periodic basis.
       *
       * @param request CreateDiskReplicaPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiskReplicaPairResponse
       */
      Models::CreateDiskReplicaPairResponse createDiskReplicaPairWithOptions(const Models::CreateDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a replication pair to asynchronously replicate data between disks.
       *
       * @description ## [](#)Usage notes
       * Async replication is a feature that protects data across regions by using the data replication capability of Elastic Block Storage (EBS). This feature can be used to asynchronously replicate data from a disk in one region to a disk in another region for disaster recovery purposes. You can use this feature to implement disaster recovery for critical business to protect data in your databases and improve business continuity. You are charged on a subscription basis for the bandwidth that is used by the async replication feature.
       * Currently, the async replication feature can asynchronously replicate data only between enhanced SSDs (ESSDs). The functionality of disks in replication pairs is limited.
       * Take note of the following items:
       * *   Make sure that the source disk (primary disk) from which to replicate data and the destination disk (secondary disk) to which to replicate data are created. You can call the [CreateDisk](https://help.aliyun.com/document_detail/25513.html) operation to create disks.
       * *   The secondary disk cannot reside in the same region as the primary disk. For information about the regions that support async replication, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   After you call this operation to create a replication pair for the primary disk and the secondary disk, you must call the [StartDiskReplicaPair](https://help.aliyun.com/document_detail/354205.html) operation to enable async replication to replicate data from the primary disk to the secondary disk cross regions on a periodic basis.
       *
       * @param request CreateDiskReplicaPairRequest
       * @return CreateDiskReplicaPairResponse
       */
      Models::CreateDiskReplicaPairResponse createDiskReplicaPair(const Models::CreateDiskReplicaPairRequest &request);

      /**
       * @summary Create an enterprise-level snapshot policy
       *
       * @param tmpReq CreateEnterpriseSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnterpriseSnapshotPolicyResponse
       */
      Models::CreateEnterpriseSnapshotPolicyResponse createEnterpriseSnapshotPolicyWithOptions(const Models::CreateEnterpriseSnapshotPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an enterprise-level snapshot policy
       *
       * @param request CreateEnterpriseSnapshotPolicyRequest
       * @return CreateEnterpriseSnapshotPolicyResponse
       */
      Models::CreateEnterpriseSnapshotPolicyResponse createEnterpriseSnapshotPolicy(const Models::CreateEnterpriseSnapshotPolicyRequest &request);

      /**
       * @summary Deletes a replication pair-consistent group.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   Before you can delete a replication pair-consistent group, make sure that no replication pairs exist in the group.
       * *   The replication pair-consistent group that you want to delete must be in the **Created** (`created`), **Creation Failed** (`create_failed`), **Stopped** (`stopped`), **Failovered** (`failovered`), **Deleting** (`deleting`), **Deletion Failed** (`delete_failed`), or **Invalid** (`invalid`) state.
       *
       * @param request DeleteDiskReplicaGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDiskReplicaGroupResponse
       */
      Models::DeleteDiskReplicaGroupResponse deleteDiskReplicaGroupWithOptions(const Models::DeleteDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a replication pair-consistent group.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   Before you can delete a replication pair-consistent group, make sure that no replication pairs exist in the group.
       * *   The replication pair-consistent group that you want to delete must be in the **Created** (`created`), **Creation Failed** (`create_failed`), **Stopped** (`stopped`), **Failovered** (`failovered`), **Deleting** (`deleting`), **Deletion Failed** (`delete_failed`), or **Invalid** (`invalid`) state.
       *
       * @param request DeleteDiskReplicaGroupRequest
       * @return DeleteDiskReplicaGroupResponse
       */
      Models::DeleteDiskReplicaGroupResponse deleteDiskReplicaGroup(const Models::DeleteDiskReplicaGroupRequest &request);

      /**
       * @summary Deletes replication pairs.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   Only replication pairs that are in the **Stopped** (`stopped`), **Invalid** (`invalid`), or **Failovered** (`failovered`) state can be deleted. This operation deletes only replication pairs. The primary and secondary disks in the deleted replication pairs are retained.
       * *   To delete a replication pair, you must call this operation in the region where the primary disk is located. After the replication pair is deleted, the functionality limits are lifted from the primary and secondary disks. For example, you can attach the secondary disk, resize the disk, or read data from or write data to the disk.
       *
       * @param request DeleteDiskReplicaPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDiskReplicaPairResponse
       */
      Models::DeleteDiskReplicaPairResponse deleteDiskReplicaPairWithOptions(const Models::DeleteDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes replication pairs.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   Only replication pairs that are in the **Stopped** (`stopped`), **Invalid** (`invalid`), or **Failovered** (`failovered`) state can be deleted. This operation deletes only replication pairs. The primary and secondary disks in the deleted replication pairs are retained.
       * *   To delete a replication pair, you must call this operation in the region where the primary disk is located. After the replication pair is deleted, the functionality limits are lifted from the primary and secondary disks. For example, you can attach the secondary disk, resize the disk, or read data from or write data to the disk.
       *
       * @param request DeleteDiskReplicaPairRequest
       * @return DeleteDiskReplicaPairResponse
       */
      Models::DeleteDiskReplicaPairResponse deleteDiskReplicaPair(const Models::DeleteDiskReplicaPairRequest &request);

      /**
       * @summary Delete a enterprise-level snapshot policy.
       *
       * @param request DeleteEnterpriseSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnterpriseSnapshotPolicyResponse
       */
      Models::DeleteEnterpriseSnapshotPolicyResponse deleteEnterpriseSnapshotPolicyWithOptions(const Models::DeleteEnterpriseSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a enterprise-level snapshot policy.
       *
       * @param request DeleteEnterpriseSnapshotPolicyRequest
       * @return DeleteEnterpriseSnapshotPolicyResponse
       */
      Models::DeleteEnterpriseSnapshotPolicyResponse deleteEnterpriseSnapshotPolicy(const Models::DeleteEnterpriseSnapshotPolicyRequest &request);

      /**
       * @summary Queries the details of one or more disks in a dedicated block storage cluster.
       *
       * @description *   You can use one of the following methods to check the responses:
       *     *   Method 1: Use `NextToken` to configure the query token. Set the value to the `NextToken` value that is returned in the last call to the DescribeDisks operation. Then, use `MaxResults` to specify the maximum number of entries to return on each page.
       *     *   Method 2: Use `PageSize` to specify the number of entries to return on each page and then use `PageNumber` to specify the number of the page to return.
       *         You can use only one of the preceding methods. If a large number of entries are to be returned, we recommend that you use method 1. When `NextToken` is specified, `PageSize` and `PageNumber` do not take effect and `TotalCount` in the response is invalid.
       * *   A disk that has the multi-attach feature enabled can be attached to multiple instances. You can query the attachment information of the disk based on the `Attachment` values in the response.
       * When you call an API operation by using Alibaba Cloud CLI, you must specify request parameter values of different data types in the required formats. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeDedicatedBlockStorageClusterDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedBlockStorageClusterDisksResponse
       */
      Models::DescribeDedicatedBlockStorageClusterDisksResponse describeDedicatedBlockStorageClusterDisksWithOptions(const Models::DescribeDedicatedBlockStorageClusterDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more disks in a dedicated block storage cluster.
       *
       * @description *   You can use one of the following methods to check the responses:
       *     *   Method 1: Use `NextToken` to configure the query token. Set the value to the `NextToken` value that is returned in the last call to the DescribeDisks operation. Then, use `MaxResults` to specify the maximum number of entries to return on each page.
       *     *   Method 2: Use `PageSize` to specify the number of entries to return on each page and then use `PageNumber` to specify the number of the page to return.
       *         You can use only one of the preceding methods. If a large number of entries are to be returned, we recommend that you use method 1. When `NextToken` is specified, `PageSize` and `PageNumber` do not take effect and `TotalCount` in the response is invalid.
       * *   A disk that has the multi-attach feature enabled can be attached to multiple instances. You can query the attachment information of the disk based on the `Attachment` values in the response.
       * When you call an API operation by using Alibaba Cloud CLI, you must specify request parameter values of different data types in the required formats. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
       *
       * @param request DescribeDedicatedBlockStorageClusterDisksRequest
       * @return DescribeDedicatedBlockStorageClusterDisksResponse
       */
      Models::DescribeDedicatedBlockStorageClusterDisksResponse describeDedicatedBlockStorageClusterDisks(const Models::DescribeDedicatedBlockStorageClusterDisksRequest &request);

      /**
       * @summary Queries the dedicated block storage clusters that are created.
       *
       * @description ## [](#)Usage notes
       * >  The Dedicated Block Storage Cluster feature is available only in the China (Heyuan), Indonesia (Jakarta), and China (Shenzhen) regions.
       * *   You can specify multiple request parameters to be queried. Specified parameters are evaluated by using the AND operator. Only the specified parameters are included in the filter conditions.
       * *   We recommend that you use NextToken and MaxResults to perform paged queries. We recommend that you use MaxResults to specify the maximum number of entries to return in each request. The return value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. When you call the DescribeDedicatedBlockStorageClusters operation to retrieve a new page of results, set NextToken to the NextToken value that is returned in the previous call and specify MaxResults to limit the number of entries returned.
       *
       * @param request DescribeDedicatedBlockStorageClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedBlockStorageClustersResponse
       */
      Models::DescribeDedicatedBlockStorageClustersResponse describeDedicatedBlockStorageClustersWithOptions(const Models::DescribeDedicatedBlockStorageClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dedicated block storage clusters that are created.
       *
       * @description ## [](#)Usage notes
       * >  The Dedicated Block Storage Cluster feature is available only in the China (Heyuan), Indonesia (Jakarta), and China (Shenzhen) regions.
       * *   You can specify multiple request parameters to be queried. Specified parameters are evaluated by using the AND operator. Only the specified parameters are included in the filter conditions.
       * *   We recommend that you use NextToken and MaxResults to perform paged queries. We recommend that you use MaxResults to specify the maximum number of entries to return in each request. The return value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. When you call the DescribeDedicatedBlockStorageClusters operation to retrieve a new page of results, set NextToken to the NextToken value that is returned in the previous call and specify MaxResults to limit the number of entries returned.
       *
       * @param request DescribeDedicatedBlockStorageClustersRequest
       * @return DescribeDedicatedBlockStorageClustersResponse
       */
      Models::DescribeDedicatedBlockStorageClustersResponse describeDedicatedBlockStorageClusters(const Models::DescribeDedicatedBlockStorageClustersRequest &request);

      /**
       * @summary Queries the risk events of a disk.
       *
       * @description ## Usage notes
       * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       *
       * @param request DescribeDiskEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskEventsResponse
       */
      Models::DescribeDiskEventsResponse describeDiskEventsWithOptions(const Models::DescribeDiskEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the risk events of a disk.
       *
       * @description ## Usage notes
       * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       *
       * @param request DescribeDiskEventsRequest
       * @return DescribeDiskEventsResponse
       */
      Models::DescribeDiskEventsResponse describeDiskEvents(const Models::DescribeDiskEventsRequest &request);

      /**
       * @summary Queries the near real-time monitoring data of a disk.
       *
       * @description ## Usage notes
       * *   CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * *   Up to 400 monitoring data entries can be returned at a time. An error is returned if the value calculated based on the following formula is greater than 400: `(EndTime - StartTime)/Period`.
       * *   You can query the monitoring data collected in the last three days. An error is returned if the time specified by `StartTime` is more than three days prior to the current time.
       *
       * @param request DescribeDiskMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskMonitorDataResponse
       */
      Models::DescribeDiskMonitorDataResponse describeDiskMonitorDataWithOptions(const Models::DescribeDiskMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the near real-time monitoring data of a disk.
       *
       * @description ## Usage notes
       * *   CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * *   Up to 400 monitoring data entries can be returned at a time. An error is returned if the value calculated based on the following formula is greater than 400: `(EndTime - StartTime)/Period`.
       * *   You can query the monitoring data collected in the last three days. An error is returned if the time specified by `StartTime` is more than three days prior to the current time.
       *
       * @param request DescribeDiskMonitorDataRequest
       * @return DescribeDiskMonitorDataResponse
       */
      Models::DescribeDiskMonitorDataResponse describeDiskMonitorData(const Models::DescribeDiskMonitorDataRequest &request);

      /**
       * @summary Queries the near real-time monitoring data of disks. You can query only the burst performance data of ESSD AutoPL disks. The data is aggregated by hour.
       *
       * @description ## Usage notes
       * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       *
       * @param request DescribeDiskMonitorDataListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskMonitorDataListResponse
       */
      Models::DescribeDiskMonitorDataListResponse describeDiskMonitorDataListWithOptions(const Models::DescribeDiskMonitorDataListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the near real-time monitoring data of disks. You can query only the burst performance data of ESSD AutoPL disks. The data is aggregated by hour.
       *
       * @description ## Usage notes
       * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       *
       * @param request DescribeDiskMonitorDataListRequest
       * @return DescribeDiskMonitorDataListResponse
       */
      Models::DescribeDiskMonitorDataListResponse describeDiskMonitorDataList(const Models::DescribeDiskMonitorDataListRequest &request);

      /**
       * @summary Queries the details of replication pair-consistent groups in a specific region.
       *
       * @description ## [](#)Usage notes
       * To perform a paged query, specify the MaxResults and NextToken parameters.
       * During a paged query, when you call the DescribeDiskReplicaGroups operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token, which can be used in the next call to retrieve a new page of results. When you call the DescribeDiskReplicaGroups operation to retrieve a new page of results, set NextToken to the NextToken value returned in the previous call and set MaxResults to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeDiskReplicaGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskReplicaGroupsResponse
       */
      Models::DescribeDiskReplicaGroupsResponse describeDiskReplicaGroupsWithOptions(const Models::DescribeDiskReplicaGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of replication pair-consistent groups in a specific region.
       *
       * @description ## [](#)Usage notes
       * To perform a paged query, specify the MaxResults and NextToken parameters.
       * During a paged query, when you call the DescribeDiskReplicaGroups operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token, which can be used in the next call to retrieve a new page of results. When you call the DescribeDiskReplicaGroups operation to retrieve a new page of results, set NextToken to the NextToken value returned in the previous call and set MaxResults to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeDiskReplicaGroupsRequest
       * @return DescribeDiskReplicaGroupsResponse
       */
      Models::DescribeDiskReplicaGroupsResponse describeDiskReplicaGroups(const Models::DescribeDiskReplicaGroupsRequest &request);

      /**
       * @summary Queries the replication progress of a replication pair.
       *
       * @param request DescribeDiskReplicaPairProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskReplicaPairProgressResponse
       */
      Models::DescribeDiskReplicaPairProgressResponse describeDiskReplicaPairProgressWithOptions(const Models::DescribeDiskReplicaPairProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the replication progress of a replication pair.
       *
       * @param request DescribeDiskReplicaPairProgressRequest
       * @return DescribeDiskReplicaPairProgressResponse
       */
      Models::DescribeDiskReplicaPairProgressResponse describeDiskReplicaPairProgress(const Models::DescribeDiskReplicaPairProgressRequest &request);

      /**
       * @summary Queries information about replication pairs in a specific region.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   When you call this operation for a specific region, if the primary disk (source disk) or secondary disk (destination disk) of a replication pair resides in the region, information about the replication pair is displayed in the response.
       * *   If you want to perform a paged query, configure the `NextToken` and `MaxResults` parameters. During a paged query, when you call the DescribeDiskReplicaPairs operation to retrieve the first page of results, set `MaxResults` to limit the maximum number of entries to return in the call. The return value of NextToken is a pagination token, which can be used in the next call to retrieve a new page of results. When you call the DescribeDiskReplicaPairs operation to retrieve a new page of results, set NextToken to the NextToken value returned in the previous call and set MaxResults to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeDiskReplicaPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskReplicaPairsResponse
       */
      Models::DescribeDiskReplicaPairsResponse describeDiskReplicaPairsWithOptions(const Models::DescribeDiskReplicaPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about replication pairs in a specific region.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   When you call this operation for a specific region, if the primary disk (source disk) or secondary disk (destination disk) of a replication pair resides in the region, information about the replication pair is displayed in the response.
       * *   If you want to perform a paged query, configure the `NextToken` and `MaxResults` parameters. During a paged query, when you call the DescribeDiskReplicaPairs operation to retrieve the first page of results, set `MaxResults` to limit the maximum number of entries to return in the call. The return value of NextToken is a pagination token, which can be used in the next call to retrieve a new page of results. When you call the DescribeDiskReplicaPairs operation to retrieve a new page of results, set NextToken to the NextToken value returned in the previous call and set MaxResults to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeDiskReplicaPairsRequest
       * @return DescribeDiskReplicaPairsResponse
       */
      Models::DescribeDiskReplicaPairsResponse describeDiskReplicaPairs(const Models::DescribeDiskReplicaPairsRequest &request);

      /**
       * @summary Queries the information about enterprise-level snapshot policies. When you call this operation, you can specify parameters, such as PolicyIds, ResourceGroupId, and Tag, in the request.
       *
       * @param request DescribeEnterpriseSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnterpriseSnapshotPolicyResponse
       */
      Models::DescribeEnterpriseSnapshotPolicyResponse describeEnterpriseSnapshotPolicyWithOptions(const Models::DescribeEnterpriseSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about enterprise-level snapshot policies. When you call this operation, you can specify parameters, such as PolicyIds, ResourceGroupId, and Tag, in the request.
       *
       * @param request DescribeEnterpriseSnapshotPolicyRequest
       * @return DescribeEnterpriseSnapshotPolicyResponse
       */
      Models::DescribeEnterpriseSnapshotPolicyResponse describeEnterpriseSnapshotPolicy(const Models::DescribeEnterpriseSnapshotPolicyRequest &request);

      /**
       * @summary Queries the risk events of a disk.
       *
       * @param request DescribeEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEventsWithOptions(const Models::DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the risk events of a disk.
       *
       * @param request DescribeEventsRequest
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEvents(const Models::DescribeEventsRequest &request);

      /**
       * @summary Queries one or more Elastic Block Storage (EBS) devices that you created.
       *
       * @param request DescribeLensMonitorDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLensMonitorDisksResponse
       */
      Models::DescribeLensMonitorDisksResponse describeLensMonitorDisksWithOptions(const Models::DescribeLensMonitorDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more Elastic Block Storage (EBS) devices that you created.
       *
       * @param request DescribeLensMonitorDisksRequest
       * @return DescribeLensMonitorDisksResponse
       */
      Models::DescribeLensMonitorDisksResponse describeLensMonitorDisks(const Models::DescribeLensMonitorDisksRequest &request);

      /**
       * @summary 查询用户开通ebs数据洞察服务状态
       *
       * @description ## Usage notes
       * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       *
       * @param request DescribeLensServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLensServiceStatusResponse
       */
      Models::DescribeLensServiceStatusResponse describeLensServiceStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户开通ebs数据洞察服务状态
       *
       * @description ## Usage notes
       * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       *
       * @return DescribeLensServiceStatusResponse
       */
      Models::DescribeLensServiceStatusResponse describeLensServiceStatus();

      /**
       * @summary Query single metric monitoring information
       *
       * @param tmpReq DescribeMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricDataResponse
       */
      Models::DescribeMetricDataResponse describeMetricDataWithOptions(const Models::DescribeMetricDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query single metric monitoring information
       *
       * @param request DescribeMetricDataRequest
       * @return DescribeMetricDataResponse
       */
      Models::DescribeMetricDataResponse describeMetricData(const Models::DescribeMetricDataRequest &request);

      /**
       * @summary Queries the disaster recovery drills that were performed on the replication pair whose secondary disk resides in a specific region.
       *
       * @param request DescribePairDrillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePairDrillsResponse
       */
      Models::DescribePairDrillsResponse describePairDrillsWithOptions(const Models::DescribePairDrillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the disaster recovery drills that were performed on the replication pair whose secondary disk resides in a specific region.
       *
       * @param request DescribePairDrillsRequest
       * @return DescribePairDrillsResponse
       */
      Models::DescribePairDrillsResponse describePairDrills(const Models::DescribePairDrillsRequest &request);

      /**
       * @summary Queries the details of regions in which Elastic Block Storage (EBS) features (such as async replication, CloudLens for EBS, and Dedicated Block Storage Cluster) are supported.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of regions in which Elastic Block Storage (EBS) features (such as async replication, CloudLens for EBS, and Dedicated Block Storage Cluster) are supported.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the disaster recovery drills that were performed on the replication pair-consistent group whose secondary disk resides in a specific region.
       *
       * @param request DescribeReplicaGroupDrillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReplicaGroupDrillsResponse
       */
      Models::DescribeReplicaGroupDrillsResponse describeReplicaGroupDrillsWithOptions(const Models::DescribeReplicaGroupDrillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the disaster recovery drills that were performed on the replication pair-consistent group whose secondary disk resides in a specific region.
       *
       * @param request DescribeReplicaGroupDrillsRequest
       * @return DescribeReplicaGroupDrillsResponse
       */
      Models::DescribeReplicaGroupDrillsResponse describeReplicaGroupDrills(const Models::DescribeReplicaGroupDrillsRequest &request);

      /**
       * @summary 查询解决方案实例默认配置
       *
       * @param request DescribeSolutionInstanceConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSolutionInstanceConfigurationResponse
       */
      Models::DescribeSolutionInstanceConfigurationResponse describeSolutionInstanceConfigurationWithOptions(const Models::DescribeSolutionInstanceConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询解决方案实例默认配置
       *
       * @param request DescribeSolutionInstanceConfigurationRequest
       * @return DescribeSolutionInstanceConfigurationResponse
       */
      Models::DescribeSolutionInstanceConfigurationResponse describeSolutionInstanceConfiguration(const Models::DescribeSolutionInstanceConfigurationRequest &request);

      /**
       * @summary Centralized Role: Query User Disk Snapshot tagKeys
       *
       * @description ## Interface Description
       * Query the tag key-value pairs of user\\"s cloud disk and snapshot. The search scope can be narrowed down by using filterTagKey.
       *
       * @param request DescribeUserTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserTagKeysResponse
       */
      Models::DescribeUserTagKeysResponse describeUserTagKeysWithOptions(const Models::DescribeUserTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Centralized Role: Query User Disk Snapshot tagKeys
       *
       * @description ## Interface Description
       * Query the tag key-value pairs of user\\"s cloud disk and snapshot. The search scope can be narrowed down by using filterTagKey.
       *
       * @param request DescribeUserTagKeysRequest
       * @return DescribeUserTagKeysResponse
       */
      Models::DescribeUserTagKeysResponse describeUserTagKeys(const Models::DescribeUserTagKeysRequest &request);

      /**
       * @summary Centralized Role: Query User Disk and Snapshot tagValues
       *
       * @description ## Interface Description
       * > The dedicated block storage cluster feature is currently supported in the following regions: South China 2 (Heyuan), Indonesia (Jakarta), and South China 1 (Shenzhen).
       * - The request parameters act as a filter, with a logical AND relationship. If any parameter is empty, the filter does not take effect.
       * - For paginated queries, it is recommended to use the MaxResults and NextToken parameters. Usage instructions: When querying the first page, set only MaxResults to limit the number of returned entries. The NextToken in the response will serve as the token for querying subsequent pages. When querying subsequent pages, set the NextToken parameter to the value obtained from the previous response, and set MaxResults to limit the number of returned entries.
       *
       * @param request DescribeUserTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserTagValuesResponse
       */
      Models::DescribeUserTagValuesResponse describeUserTagValuesWithOptions(const Models::DescribeUserTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Centralized Role: Query User Disk and Snapshot tagValues
       *
       * @description ## Interface Description
       * > The dedicated block storage cluster feature is currently supported in the following regions: South China 2 (Heyuan), Indonesia (Jakarta), and South China 1 (Shenzhen).
       * - The request parameters act as a filter, with a logical AND relationship. If any parameter is empty, the filter does not take effect.
       * - For paginated queries, it is recommended to use the MaxResults and NextToken parameters. Usage instructions: When querying the first page, set only MaxResults to limit the number of returned entries. The NextToken in the response will serve as the token for querying subsequent pages. When querying subsequent pages, set the NextToken parameter to the value obtained from the previous response, and set MaxResults to limit the number of returned entries.
       *
       * @param request DescribeUserTagValuesRequest
       * @return DescribeUserTagValuesResponse
       */
      Models::DescribeUserTagValuesResponse describeUserTagValues(const Models::DescribeUserTagValuesRequest &request);

      /**
       * @summary Enables the failover feature for replication pairs in a replication pair-consistent group. When the primary disks of specific replication pairs in a replication pair-consistent group fail, you can call this operation to enable the read and write permissions on the secondary disks.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair-consistent group must be in the **One-time Syncing** (`manual_syncing`), **Syncing** (`syncing`), **Normal** (`normal`), **Stopping** (`stopping`), **Stop Failed** (`stop_failed`), **Stopped** (`stopped`), **In Failover** (`failovering`), **Failover Failed** (`failover_failed`), or **Failovered** (`failovered`) state.
       * *   After a failover is performed, the replication pair-consistent group enters the **Failovered** (`failovered`) state.
       * *   Before you perform a failover, make sure that the first full data synchronization is completed between the primary site and secondary site.
       *
       * @param request FailoverDiskReplicaGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FailoverDiskReplicaGroupResponse
       */
      Models::FailoverDiskReplicaGroupResponse failoverDiskReplicaGroupWithOptions(const Models::FailoverDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the failover feature for replication pairs in a replication pair-consistent group. When the primary disks of specific replication pairs in a replication pair-consistent group fail, you can call this operation to enable the read and write permissions on the secondary disks.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair-consistent group must be in the **One-time Syncing** (`manual_syncing`), **Syncing** (`syncing`), **Normal** (`normal`), **Stopping** (`stopping`), **Stop Failed** (`stop_failed`), **Stopped** (`stopped`), **In Failover** (`failovering`), **Failover Failed** (`failover_failed`), or **Failovered** (`failovered`) state.
       * *   After a failover is performed, the replication pair-consistent group enters the **Failovered** (`failovered`) state.
       * *   Before you perform a failover, make sure that the first full data synchronization is completed between the primary site and secondary site.
       *
       * @param request FailoverDiskReplicaGroupRequest
       * @return FailoverDiskReplicaGroupResponse
       */
      Models::FailoverDiskReplicaGroupResponse failoverDiskReplicaGroup(const Models::FailoverDiskReplicaGroupRequest &request);

      /**
       * @summary Enables the failover feature for replication pairs.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair for which you want to enable failover cannot be in the **Invalid** (`invalid`) or **Deleted** (`deleted`) state.
       * *   After a failover is performed, the replication pair enters the **Failovered** (`failovered`) state.
       *
       * @param request FailoverDiskReplicaPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FailoverDiskReplicaPairResponse
       */
      Models::FailoverDiskReplicaPairResponse failoverDiskReplicaPairWithOptions(const Models::FailoverDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the failover feature for replication pairs.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair for which you want to enable failover cannot be in the **Invalid** (`invalid`) or **Deleted** (`deleted`) state.
       * *   After a failover is performed, the replication pair enters the **Failovered** (`failovered`) state.
       *
       * @param request FailoverDiskReplicaPairRequest
       * @return FailoverDiskReplicaPairResponse
       */
      Models::FailoverDiskReplicaPairResponse failoverDiskReplicaPair(const Models::FailoverDiskReplicaPairRequest &request);

      /**
       * @summary Centralized Role: Obtain User Usage Report with reportId
       *
       * @param request GetReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReportResponse
       */
      Models::GetReportResponse getReportWithOptions(const Models::GetReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Centralized Role: Obtain User Usage Report with reportId
       *
       * @param request GetReportRequest
       * @return GetReportResponse
       */
      Models::GetReportResponse getReport(const Models::GetReportRequest &request);

      /**
       * @summary 查询异步复制支持的目的地域和可用区
       *
       * @param request ListReplicaEdgeSupportedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReplicaEdgeSupportedResponse
       */
      Models::ListReplicaEdgeSupportedResponse listReplicaEdgeSupportedWithOptions(const Models::ListReplicaEdgeSupportedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询异步复制支持的目的地域和可用区
       *
       * @param request ListReplicaEdgeSupportedRequest
       * @return ListReplicaEdgeSupportedResponse
       */
      Models::ListReplicaEdgeSupportedResponse listReplicaEdgeSupported(const Models::ListReplicaEdgeSupportedRequest &request);

      /**
       * @summary Centralized Role: Query Historical Reports
       *
       * @param request ListReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReportsResponse
       */
      Models::ListReportsResponse listReportsWithOptions(const Models::ListReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Centralized Role: Query Historical Reports
       *
       * @param request ListReportsRequest
       * @return ListReportsResponse
       */
      Models::ListReportsResponse listReports(const Models::ListReportsRequest &request);

      /**
       * @summary Queries the tags that are added to one or more Elastic Block Storage (EBS) resources, or queries the IDs and tags of resources in a specified non-default resource group.
       *
       * @description Specify at least one of the following parameters or parameter pairs in a request to determine a query object:
       * *   `ResourceId.N`
       * *   `Tag.N` parameter pair (`Tag.N.Key` and `Tag.N.Value`)
       * If you set `Tag.N` and `ResourceId.N` at the same time, the EBS resources that match both the parameters are returned.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to one or more Elastic Block Storage (EBS) resources, or queries the IDs and tags of resources in a specified non-default resource group.
       *
       * @description Specify at least one of the following parameters or parameter pairs in a request to determine a query object:
       * *   `ResourceId.N`
       * *   `Tag.N` parameter pair (`Tag.N.Key` and `Tag.N.Value`)
       * If you set `Tag.N` and `ResourceId.N` at the same time, the EBS resources that match both the parameters are returned.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 修改专属集群属性OpenApi
       *
       * @description You can call this operation to modify the information of a dedicated block storage cluster. The information includes the name and description of the cluster.
       *
       * @param request ModifyDedicatedBlockStorageClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedBlockStorageClusterAttributeResponse
       */
      Models::ModifyDedicatedBlockStorageClusterAttributeResponse modifyDedicatedBlockStorageClusterAttributeWithOptions(const Models::ModifyDedicatedBlockStorageClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改专属集群属性OpenApi
       *
       * @description You can call this operation to modify the information of a dedicated block storage cluster. The information includes the name and description of the cluster.
       *
       * @param request ModifyDedicatedBlockStorageClusterAttributeRequest
       * @return ModifyDedicatedBlockStorageClusterAttributeResponse
       */
      Models::ModifyDedicatedBlockStorageClusterAttributeResponse modifyDedicatedBlockStorageClusterAttribute(const Models::ModifyDedicatedBlockStorageClusterAttributeRequest &request);

      /**
       * @summary Modifies the name, description, or recovery point objective (RPO) of a replication pair-consistent group.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair-consistent group must be in the **Created** (`created`) or **Stopped** (`stopped`) state.
       *
       * @param request ModifyDiskReplicaGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskReplicaGroupResponse
       */
      Models::ModifyDiskReplicaGroupResponse modifyDiskReplicaGroupWithOptions(const Models::ModifyDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, or recovery point objective (RPO) of a replication pair-consistent group.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair-consistent group must be in the **Created** (`created`) or **Stopped** (`stopped`) state.
       *
       * @param request ModifyDiskReplicaGroupRequest
       * @return ModifyDiskReplicaGroupResponse
       */
      Models::ModifyDiskReplicaGroupResponse modifyDiskReplicaGroup(const Models::ModifyDiskReplicaGroupRequest &request);

      /**
       * @summary Modifies a replication pair.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   Only replication pairs that are in the **Created** (`created`) or **Stopped** (`stopped`) state can have their names or descriptions modified.
       *
       * @param request ModifyDiskReplicaPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskReplicaPairResponse
       */
      Models::ModifyDiskReplicaPairResponse modifyDiskReplicaPairWithOptions(const Models::ModifyDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a replication pair.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   Only replication pairs that are in the **Created** (`created`) or **Stopped** (`stopped`) state can have their names or descriptions modified.
       *
       * @param request ModifyDiskReplicaPairRequest
       * @return ModifyDiskReplicaPairResponse
       */
      Models::ModifyDiskReplicaPairResponse modifyDiskReplicaPair(const Models::ModifyDiskReplicaPairRequest &request);

      /**
       * @summary Query the throughput status of a dedicated block storage cluster disk which has been set through the SetDedicatedBlockStorageClusterDiskThroughput API.
       *
       * @param request QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse
       */
      Models::QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse queryDedicatedBlockStorageClusterDiskThroughputStatusWithOptions(const Models::QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the throughput status of a dedicated block storage cluster disk which has been set through the SetDedicatedBlockStorageClusterDiskThroughput API.
       *
       * @param request QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest
       * @return QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse
       */
      Models::QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse queryDedicatedBlockStorageClusterDiskThroughputStatus(const Models::QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest &request);

      /**
       * @summary Query dedicated block storage cluster capacity trend data, includ available capacity size and total capacity size.
       *
       * @description Period is the time interval between data retrieval points. When set to 60 (minute interval), a maximum of 1440 data points can be returned; when set to 3600 (hour interval), a maximum of 744 data points can be returned; and when set to 86400 (day interval), a maximum of 366 data points can be returned.
       *
       * @param request QueryDedicatedBlockStorageClusterInventoryDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDedicatedBlockStorageClusterInventoryDataResponse
       */
      Models::QueryDedicatedBlockStorageClusterInventoryDataResponse queryDedicatedBlockStorageClusterInventoryDataWithOptions(const Models::QueryDedicatedBlockStorageClusterInventoryDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query dedicated block storage cluster capacity trend data, includ available capacity size and total capacity size.
       *
       * @description Period is the time interval between data retrieval points. When set to 60 (minute interval), a maximum of 1440 data points can be returned; when set to 3600 (hour interval), a maximum of 744 data points can be returned; and when set to 86400 (day interval), a maximum of 366 data points can be returned.
       *
       * @param request QueryDedicatedBlockStorageClusterInventoryDataRequest
       * @return QueryDedicatedBlockStorageClusterInventoryDataResponse
       */
      Models::QueryDedicatedBlockStorageClusterInventoryDataResponse queryDedicatedBlockStorageClusterInventoryData(const Models::QueryDedicatedBlockStorageClusterInventoryDataRequest &request);

      /**
       * @summary Removes a replication pair from a replication pair-consistent group. After a replication pair is removed from a replication pair-consistent group, the pair is disassociated from the group but is not deleted.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair-consistent group from which you want to remove a replication pair must be in the **Created** (`created`), **Stopped** (`stopped`), or **Invalid** (`invalid`) state.
       *
       * @param request RemoveDiskReplicaPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDiskReplicaPairResponse
       */
      Models::RemoveDiskReplicaPairResponse removeDiskReplicaPairWithOptions(const Models::RemoveDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a replication pair from a replication pair-consistent group. After a replication pair is removed from a replication pair-consistent group, the pair is disassociated from the group but is not deleted.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair-consistent group from which you want to remove a replication pair must be in the **Created** (`created`), **Stopped** (`stopped`), or **Invalid** (`invalid`) state.
       *
       * @param request RemoveDiskReplicaPairRequest
       * @return RemoveDiskReplicaPairResponse
       */
      Models::RemoveDiskReplicaPairResponse removeDiskReplicaPair(const Models::RemoveDiskReplicaPairRequest &request);

      /**
       * @summary Enables the reverse replication feature for replication pairs that belong to a replication pair-consistent group. After reverse replication is enabled, data stored on the original secondary disks is replicated to the original primary disks. When a reverse replication is being performed, the primary and secondary sites of the replication pair-consistent group remain unchanged, but data is replicated from the secondary site to the primary site.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair-consistent group for which you want to enable reverse replication must be in the **Failovered** (`failovered`) state. You can call the `FailoverDiskReplicaPair` operation to enable failover.
       * *   Before a reverse replication is performed, the primary disks must be detached from its associated Elastic Compute Service (ECS) instance and must be in the Unattached state. You can call the [DetachDisk](https://help.aliyun.com/document_detail/25516.html) operation to detach the disks.
       * *   After you enable reverse replication, you must call the `StartDiskReplicaPair` operation again to enable the async replication feature before data can be replicated from the original secondary disks to the original primary disks.
       * *   You can set the ReverseReplicate parameter to false to cancel the **Failovered** (`failovered`) state and restore the original replication direction.
       *
       * @param request ReprotectDiskReplicaGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReprotectDiskReplicaGroupResponse
       */
      Models::ReprotectDiskReplicaGroupResponse reprotectDiskReplicaGroupWithOptions(const Models::ReprotectDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the reverse replication feature for replication pairs that belong to a replication pair-consistent group. After reverse replication is enabled, data stored on the original secondary disks is replicated to the original primary disks. When a reverse replication is being performed, the primary and secondary sites of the replication pair-consistent group remain unchanged, but data is replicated from the secondary site to the primary site.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair-consistent group for which you want to enable reverse replication must be in the **Failovered** (`failovered`) state. You can call the `FailoverDiskReplicaPair` operation to enable failover.
       * *   Before a reverse replication is performed, the primary disks must be detached from its associated Elastic Compute Service (ECS) instance and must be in the Unattached state. You can call the [DetachDisk](https://help.aliyun.com/document_detail/25516.html) operation to detach the disks.
       * *   After you enable reverse replication, you must call the `StartDiskReplicaPair` operation again to enable the async replication feature before data can be replicated from the original secondary disks to the original primary disks.
       * *   You can set the ReverseReplicate parameter to false to cancel the **Failovered** (`failovered`) state and restore the original replication direction.
       *
       * @param request ReprotectDiskReplicaGroupRequest
       * @return ReprotectDiskReplicaGroupResponse
       */
      Models::ReprotectDiskReplicaGroupResponse reprotectDiskReplicaGroup(const Models::ReprotectDiskReplicaGroupRequest &request);

      /**
       * @summary Enables the reverse replication feature for a replication pair.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair for which you want to enable reverse replication must be in the **Failovered** (`failovered`) state. You can call the [FailoverDiskReplicaPair](https://help.aliyun.com/document_detail/354358.html) operation to enable failover.
       * *   The primary disk must be detached from its associated Elastic Compute Service (ECS) instance and is in the Unattached state. You can call the [DetachDisk](https://help.aliyun.com/document_detail/25516.html) operation to detach the disk.
       * *   After you enable reverse replication, you must call the [StartDiskReplicaPair](https://help.aliyun.com/document_detail/354205.html) operation again to activate the replication pair before data can be replicated from the original secondary disk to the original primary disk.
       * *   You can set the ReverseReplicate parameter to false to cancel the **Failovered** (`failovered`) state and restore the original replication direction.
       *
       * @param request ReprotectDiskReplicaPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReprotectDiskReplicaPairResponse
       */
      Models::ReprotectDiskReplicaPairResponse reprotectDiskReplicaPairWithOptions(const Models::ReprotectDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the reverse replication feature for a replication pair.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair for which you want to enable reverse replication must be in the **Failovered** (`failovered`) state. You can call the [FailoverDiskReplicaPair](https://help.aliyun.com/document_detail/354358.html) operation to enable failover.
       * *   The primary disk must be detached from its associated Elastic Compute Service (ECS) instance and is in the Unattached state. You can call the [DetachDisk](https://help.aliyun.com/document_detail/25516.html) operation to detach the disk.
       * *   After you enable reverse replication, you must call the [StartDiskReplicaPair](https://help.aliyun.com/document_detail/354205.html) operation again to activate the replication pair before data can be replicated from the original secondary disk to the original primary disk.
       * *   You can set the ReverseReplicate parameter to false to cancel the **Failovered** (`failovered`) state and restore the original replication direction.
       *
       * @param request ReprotectDiskReplicaPairRequest
       * @return ReprotectDiskReplicaPairResponse
       */
      Models::ReprotectDiskReplicaPairResponse reprotectDiskReplicaPair(const Models::ReprotectDiskReplicaPairRequest &request);

      /**
       * @summary In the elastic type dedicated block storage cluster, you can easily achieve the specified throughput (Bps) for the target disk. You only need to set the cloud disk ID and the target throughput, simplifying the process of configuring.
       *
       * @param request SetDedicatedBlockStorageClusterDiskThroughputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDedicatedBlockStorageClusterDiskThroughputResponse
       */
      Models::SetDedicatedBlockStorageClusterDiskThroughputResponse setDedicatedBlockStorageClusterDiskThroughputWithOptions(const Models::SetDedicatedBlockStorageClusterDiskThroughputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary In the elastic type dedicated block storage cluster, you can easily achieve the specified throughput (Bps) for the target disk. You only need to set the cloud disk ID and the target throughput, simplifying the process of configuring.
       *
       * @param request SetDedicatedBlockStorageClusterDiskThroughputRequest
       * @return SetDedicatedBlockStorageClusterDiskThroughputResponse
       */
      Models::SetDedicatedBlockStorageClusterDiskThroughputResponse setDedicatedBlockStorageClusterDiskThroughput(const Models::SetDedicatedBlockStorageClusterDiskThroughputRequest &request);

      /**
       * @summary Enables the async replication feature for replication pairs that belong to a replication pair-consistent group. When the async replication feature is enabled for the pairs for the first time, the system first performs a full synchronization to synchronize all data from disks at the primary site (primary disks) to disks at the secondary site (secondary disks) and then periodically synchronizes incremental data based on the recovery point objective (RPO) of the replication pair-consistent group.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   If you set the `OneShot` to `false`, the replication pair-consistent group must be in the **Created** (`created` ), **Synchronizing** (`syncing` ), **Normal** (`normal` ), or **Stopped** (`stopped`) state.
       * *   If you set `OneShot` to `true`, the replication pair-consistent group must be in the **Created** (`created` ), **One-time Syncing** (`manual_syncing` ), or **Stopped** (`stopped`) state. The time interval between two consecutive one-time synchronizations must be longer than one half of the recovery point objective (RPO).
       * *   After a replication pair-consistent group is activated, the group enters the **Initial Syncing** (`initial_syncing`) state and the system performs the first async replication to replicate all data from the primary disks to secondary disks.
       *
       * @param request StartDiskReplicaGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDiskReplicaGroupResponse
       */
      Models::StartDiskReplicaGroupResponse startDiskReplicaGroupWithOptions(const Models::StartDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the async replication feature for replication pairs that belong to a replication pair-consistent group. When the async replication feature is enabled for the pairs for the first time, the system first performs a full synchronization to synchronize all data from disks at the primary site (primary disks) to disks at the secondary site (secondary disks) and then periodically synchronizes incremental data based on the recovery point objective (RPO) of the replication pair-consistent group.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   If you set the `OneShot` to `false`, the replication pair-consistent group must be in the **Created** (`created` ), **Synchronizing** (`syncing` ), **Normal** (`normal` ), or **Stopped** (`stopped`) state.
       * *   If you set `OneShot` to `true`, the replication pair-consistent group must be in the **Created** (`created` ), **One-time Syncing** (`manual_syncing` ), or **Stopped** (`stopped`) state. The time interval between two consecutive one-time synchronizations must be longer than one half of the recovery point objective (RPO).
       * *   After a replication pair-consistent group is activated, the group enters the **Initial Syncing** (`initial_syncing`) state and the system performs the first async replication to replicate all data from the primary disks to secondary disks.
       *
       * @param request StartDiskReplicaGroupRequest
       * @return StartDiskReplicaGroupResponse
       */
      Models::StartDiskReplicaGroupResponse startDiskReplicaGroup(const Models::StartDiskReplicaGroupRequest &request);

      /**
       * @summary Activates a replication pair.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   Only replication pairs that are in the **Created** (`created`) or **Stopped** (`stopped`) state can be activated.
       * *   After a replication pair is activated, it enters the **Initial Syncing** (`initial_syncing`) state and the system performs the first asynchronous replication to replicate all data from the primary disk to the secondary disk.
       *
       * @param request StartDiskReplicaPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDiskReplicaPairResponse
       */
      Models::StartDiskReplicaPairResponse startDiskReplicaPairWithOptions(const Models::StartDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates a replication pair.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   Only replication pairs that are in the **Created** (`created`) or **Stopped** (`stopped`) state can be activated.
       * *   After a replication pair is activated, it enters the **Initial Syncing** (`initial_syncing`) state and the system performs the first asynchronous replication to replicate all data from the primary disk to the secondary disk.
       *
       * @param request StartDiskReplicaPairRequest
       * @return StartDiskReplicaPairResponse
       */
      Models::StartDiskReplicaPairResponse startDiskReplicaPair(const Models::StartDiskReplicaPairRequest &request);

      /**
       * @summary Starts a disaster recovery drill to ensure the continued replication and clone the data from the last recovery point of the secondary disk to a new disk. This helps you test the completeness and correctness of applications that are deployed on the disaster recovery site on a regular basis.
       *
       * @description After the disaster recovery drill is complete on the secondary disk, a pay-as-you-go drill disk that has the same capacity and category as the secondary disk is created in the zone where the secondary disk resides. The drill disk contains last-recovery-point data that can be used to test the completeness and correctness of applications.
       *
       * @param request StartPairDrillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartPairDrillResponse
       */
      Models::StartPairDrillResponse startPairDrillWithOptions(const Models::StartPairDrillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a disaster recovery drill to ensure the continued replication and clone the data from the last recovery point of the secondary disk to a new disk. This helps you test the completeness and correctness of applications that are deployed on the disaster recovery site on a regular basis.
       *
       * @description After the disaster recovery drill is complete on the secondary disk, a pay-as-you-go drill disk that has the same capacity and category as the secondary disk is created in the zone where the secondary disk resides. The drill disk contains last-recovery-point data that can be used to test the completeness and correctness of applications.
       *
       * @param request StartPairDrillRequest
       * @return StartPairDrillResponse
       */
      Models::StartPairDrillResponse startPairDrill(const Models::StartPairDrillRequest &request);

      /**
       * @summary Starts a disaster recovery drill in a replication pair-consistent group to ensure the continued replication and restores data from the latest recovery point of secondary disks to new disks. This helps test the completeness and correctness of applications that are deployed on the disaster recovery site on a regular basis.
       *
       * @description After the disaster recovery drill is complete on secondary disks, a pay-as-you-go drill disk is created in the zone where the secondary disk of each replication pair resides. The latest-recovery-point data is restored to the drill disks to test the completeness and correctness of applications.
       *
       * @param request StartReplicaGroupDrillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartReplicaGroupDrillResponse
       */
      Models::StartReplicaGroupDrillResponse startReplicaGroupDrillWithOptions(const Models::StartReplicaGroupDrillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a disaster recovery drill in a replication pair-consistent group to ensure the continued replication and restores data from the latest recovery point of secondary disks to new disks. This helps test the completeness and correctness of applications that are deployed on the disaster recovery site on a regular basis.
       *
       * @description After the disaster recovery drill is complete on secondary disks, a pay-as-you-go drill disk is created in the zone where the secondary disk of each replication pair resides. The latest-recovery-point data is restored to the drill disks to test the completeness and correctness of applications.
       *
       * @param request StartReplicaGroupDrillRequest
       * @return StartReplicaGroupDrillResponse
       */
      Models::StartReplicaGroupDrillResponse startReplicaGroupDrill(const Models::StartReplicaGroupDrillRequest &request);

      /**
       * @summary Stops a replication pair-consistent group. This operation stops all replication pairs in the replication pair-consistent group.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair-consistent group that you want to stop must be in the **One-time Syncing** (`manual_syncing`), **Syncing** (`syncing`), **Normal** (`normal`), **Stopping** (`stopping`), **Stop Failed** (`stop_failed`), or **Stopped** (`stopped`) state.
       * *   When a replication pair-consistent group is stopped, it enters the **Stopped** (`stopped`) state. If a replication pair-consistent group cannot be stopped, the state of the group remains unchanged or changes to **Stop Failed** (`stop_failed`). In this case, try again later.
       *
       * @param request StopDiskReplicaGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDiskReplicaGroupResponse
       */
      Models::StopDiskReplicaGroupResponse stopDiskReplicaGroupWithOptions(const Models::StopDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a replication pair-consistent group. This operation stops all replication pairs in the replication pair-consistent group.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   The replication pair-consistent group that you want to stop must be in the **One-time Syncing** (`manual_syncing`), **Syncing** (`syncing`), **Normal** (`normal`), **Stopping** (`stopping`), **Stop Failed** (`stop_failed`), or **Stopped** (`stopped`) state.
       * *   When a replication pair-consistent group is stopped, it enters the **Stopped** (`stopped`) state. If a replication pair-consistent group cannot be stopped, the state of the group remains unchanged or changes to **Stop Failed** (`stop_failed`). In this case, try again later.
       *
       * @param request StopDiskReplicaGroupRequest
       * @return StopDiskReplicaGroupResponse
       */
      Models::StopDiskReplicaGroupResponse stopDiskReplicaGroup(const Models::StopDiskReplicaGroupRequest &request);

      /**
       * @summary Stops a replication pair.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   Only replication pairs that are in the **Initial Syncing** (`initial_syncing`), **Syncing** (`syncing`), **One-time Syncing** (`manual_syncing`), or **Normal** (`normal`) state can be stopped. When a replication pair is stopped, it enters the Stopped (`stopped`) state. The secondary disk rolls back to the point in time when the last async replication was complete and drops all the data that is being replicated from the primary disk.
       *
       * @param request StopDiskReplicaPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDiskReplicaPairResponse
       */
      Models::StopDiskReplicaPairResponse stopDiskReplicaPairWithOptions(const Models::StopDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a replication pair.
       *
       * @description ## [](#)Usage notes
       * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
       * *   Only replication pairs that are in the **Initial Syncing** (`initial_syncing`), **Syncing** (`syncing`), **One-time Syncing** (`manual_syncing`), or **Normal** (`normal`) state can be stopped. When a replication pair is stopped, it enters the Stopped (`stopped`) state. The secondary disk rolls back to the point in time when the last async replication was complete and drops all the data that is being replicated from the primary disk.
       *
       * @param request StopDiskReplicaPairRequest
       * @return StopDiskReplicaPairResponse
       */
      Models::StopDiskReplicaPairResponse stopDiskReplicaPair(const Models::StopDiskReplicaPairRequest &request);

      /**
       * @summary Creates tags and adds the tags to Elastic Block Storage (EBS) resources.
       *
       * @description Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number of tags is reached, an error message is returned. For more information, see the "Tag limits" section in [Limits](https://help.aliyun.com/document_detail/25412.html).
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates tags and adds the tags to Elastic Block Storage (EBS) resources.
       *
       * @description Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number of tags is reached, an error message is returned. For more information, see the "Tag limits" section in [Limits](https://help.aliyun.com/document_detail/25412.html).
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Unbind disks from a enterprise-level snapshot policy.
       *
       * @param request UnbindEnterpriseSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindEnterpriseSnapshotPolicyResponse
       */
      Models::UnbindEnterpriseSnapshotPolicyResponse unbindEnterpriseSnapshotPolicyWithOptions(const Models::UnbindEnterpriseSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbind disks from a enterprise-level snapshot policy.
       *
       * @param request UnbindEnterpriseSnapshotPolicyRequest
       * @return UnbindEnterpriseSnapshotPolicyResponse
       */
      Models::UnbindEnterpriseSnapshotPolicyResponse unbindEnterpriseSnapshotPolicy(const Models::UnbindEnterpriseSnapshotPolicyRequest &request);

      /**
       * @summary Removes tags from specified Elastic Block Storage (EBS) resources.
       *
       * @description *   You can remove up to 20 tags at a time.
       * *   After a tag is removed from an EBS resource, the tag is automatically deleted if the tag is not added to any instance.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from specified Elastic Block Storage (EBS) resources.
       *
       * @description *   You can remove up to 20 tags at a time.
       * *   After a tag is removed from an EBS resource, the tag is automatically deleted if the tag is not added to any instance.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Search for a enterprise-level snapshot policy.
       *
       * @param tmpReq UpdateEnterpriseSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnterpriseSnapshotPolicyResponse
       */
      Models::UpdateEnterpriseSnapshotPolicyResponse updateEnterpriseSnapshotPolicyWithOptions(const Models::UpdateEnterpriseSnapshotPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search for a enterprise-level snapshot policy.
       *
       * @param request UpdateEnterpriseSnapshotPolicyRequest
       * @return UpdateEnterpriseSnapshotPolicyResponse
       */
      Models::UpdateEnterpriseSnapshotPolicyResponse updateEnterpriseSnapshotPolicy(const Models::UpdateEnterpriseSnapshotPolicyRequest &request);

      /**
       * @summary 更新解决方案实例属性
       *
       * @param request UpdateSolutionInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSolutionInstanceAttributeResponse
       */
      Models::UpdateSolutionInstanceAttributeResponse updateSolutionInstanceAttributeWithOptions(const Models::UpdateSolutionInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新解决方案实例属性
       *
       * @param request UpdateSolutionInstanceAttributeRequest
       * @return UpdateSolutionInstanceAttributeResponse
       */
      Models::UpdateSolutionInstanceAttributeResponse updateSolutionInstanceAttribute(const Models::UpdateSolutionInstanceAttributeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
