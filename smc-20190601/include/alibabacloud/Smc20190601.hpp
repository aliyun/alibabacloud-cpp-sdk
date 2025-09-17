// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SMC20190601_HPP_
#define ALIBABACLOUD_SMC20190601_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Smc20190601Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Smc20190601.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Associates multiple migration sources with a workgroup.
       *
       * @description A migration source can be associated with only one workgroup.
       *
       * @param request AssociateSourceServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateSourceServersResponse
       */
      Models::AssociateSourceServersResponse associateSourceServersWithOptions(const Models::AssociateSourceServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates multiple migration sources with a workgroup.
       *
       * @description A migration source can be associated with only one workgroup.
       *
       * @param request AssociateSourceServersRequest
       * @return AssociateSourceServersResponse
       */
      Models::AssociateSourceServersResponse associateSourceServers(const Models::AssociateSourceServersRequest &request);

      /**
       * @summary Creates an activation code.
       *
       * @description If you want to import the information of migration sources by using an activation code, you can call this operation to create one.
       *
       * @param request CreateAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessTokenResponse
       */
      Models::CreateAccessTokenResponse createAccessTokenWithOptions(const Models::CreateAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an activation code.
       *
       * @description If you want to import the information of migration sources by using an activation code, you can call this operation to create one.
       *
       * @param request CreateAccessTokenRequest
       * @return CreateAccessTokenResponse
       */
      Models::CreateAccessTokenResponse createAccessToken(const Models::CreateAccessTokenRequest &request);

      /**
       * @summary Server Migration Center (SMC) allows you to migrate Alibaba Cloud ECS instances across zones in the same region. You can also change the instance type (vCPU and memory) within the same instance family to meet your business requirements. You can use this API to create a cross-zone migration job.
       *
       * @description For more information about the limits and impacts of cross-zone migration, see [Cross-zone ECS instance migration](https://help.aliyun.com/document_detail/476797.html).
       *
       * @param request CreateCrossZoneMigrationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCrossZoneMigrationJobResponse
       */
      Models::CreateCrossZoneMigrationJobResponse createCrossZoneMigrationJobWithOptions(const Models::CreateCrossZoneMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Server Migration Center (SMC) allows you to migrate Alibaba Cloud ECS instances across zones in the same region. You can also change the instance type (vCPU and memory) within the same instance family to meet your business requirements. You can use this API to create a cross-zone migration job.
       *
       * @description For more information about the limits and impacts of cross-zone migration, see [Cross-zone ECS instance migration](https://help.aliyun.com/document_detail/476797.html).
       *
       * @param request CreateCrossZoneMigrationJobRequest
       * @return CreateCrossZoneMigrationJobResponse
       */
      Models::CreateCrossZoneMigrationJobResponse createCrossZoneMigrationJob(const Models::CreateCrossZoneMigrationJobRequest &request);

      /**
       * @summary Creates a migration job for a source server.
       *
       * @description ## Usage notes
       * *   You can create migration jobs only for source servers that are in the Available state.
       * *   Each source server can be associated with only one migration job that is in the Ready, Running, Stopped, Waiting, InError, or Expired state.
       * *   You can create a maximum of 1,000 migration jobs within each Alibaba Cloud account.
       * *   If you migrate a source server to an image, you must specify the ImageName, SystemDiskSize, and DataDisk parameters.
       * *   If you use a virtual private cloud (VPC) to migrate data, the VSwitchId parameter is required and the VpcId parameter is optional.
       * *   Server Migration Center (SMC) allows you to migrate source servers to Docker container images. This allows you to migrate containerized applications in a cost-effective way.
       *
       * @param request CreateReplicationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReplicationJobResponse
       */
      Models::CreateReplicationJobResponse createReplicationJobWithOptions(const Models::CreateReplicationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a migration job for a source server.
       *
       * @description ## Usage notes
       * *   You can create migration jobs only for source servers that are in the Available state.
       * *   Each source server can be associated with only one migration job that is in the Ready, Running, Stopped, Waiting, InError, or Expired state.
       * *   You can create a maximum of 1,000 migration jobs within each Alibaba Cloud account.
       * *   If you migrate a source server to an image, you must specify the ImageName, SystemDiskSize, and DataDisk parameters.
       * *   If you use a virtual private cloud (VPC) to migrate data, the VSwitchId parameter is required and the VpcId parameter is optional.
       * *   Server Migration Center (SMC) allows you to migrate source servers to Docker container images. This allows you to migrate containerized applications in a cost-effective way.
       *
       * @param request CreateReplicationJobRequest
       * @return CreateReplicationJobResponse
       */
      Models::CreateReplicationJobResponse createReplicationJob(const Models::CreateReplicationJobRequest &request);

      /**
       * @summary Creates a workgroup. You can create a workgroup to manage the lifecycles of multiple migration tasks at a time. This is suitable for scenarios in which multiple servers are migrated.
       *
       * @description *   You can create up to 50 workgroups within an Alibaba Cloud account.
       * *   A workgroup can be associated with a maximum of 50 migration sources.
       * *   A migration source can be associated with only one workgroup.
       *
       * @param request CreateWorkgroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkgroupResponse
       */
      Models::CreateWorkgroupResponse createWorkgroupWithOptions(const Models::CreateWorkgroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workgroup. You can create a workgroup to manage the lifecycles of multiple migration tasks at a time. This is suitable for scenarios in which multiple servers are migrated.
       *
       * @description *   You can create up to 50 workgroups within an Alibaba Cloud account.
       * *   A workgroup can be associated with a maximum of 50 migration sources.
       * *   A migration source can be associated with only one workgroup.
       *
       * @param request CreateWorkgroupRequest
       * @return CreateWorkgroupResponse
       */
      Models::CreateWorkgroupResponse createWorkgroup(const Models::CreateWorkgroupRequest &request);

      /**
       * @summary Stops an incremental migration job that periodically runs. After you call this operation to stop an incremental migration job, the migration job is complete.
       *
       * @description ## Usage notes
       * *   The incremental migration job must be in the Waiting state.
       * *   After you call this operation, the incremental migration job no longer periodically runs. In the meantime, Server Migration Center (SMC) determines whether to perform a full data migration for the last time based on the value of the `SyncData` parameter. If you set the SyncData parameter to `false`, SMC releases intermediate resources without data migration before the migration job is complete. If you set the SyncData parameter to `true`, SMC performs a full data migration and releases intermediate resources before the migration job is complete.
       *
       * @param request CutOverReplicationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CutOverReplicationJobResponse
       */
      Models::CutOverReplicationJobResponse cutOverReplicationJobWithOptions(const Models::CutOverReplicationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an incremental migration job that periodically runs. After you call this operation to stop an incremental migration job, the migration job is complete.
       *
       * @description ## Usage notes
       * *   The incremental migration job must be in the Waiting state.
       * *   After you call this operation, the incremental migration job no longer periodically runs. In the meantime, Server Migration Center (SMC) determines whether to perform a full data migration for the last time based on the value of the `SyncData` parameter. If you set the SyncData parameter to `false`, SMC releases intermediate resources without data migration before the migration job is complete. If you set the SyncData parameter to `true`, SMC performs a full data migration and releases intermediate resources before the migration job is complete.
       *
       * @param request CutOverReplicationJobRequest
       * @return CutOverReplicationJobResponse
       */
      Models::CutOverReplicationJobResponse cutOverReplicationJob(const Models::CutOverReplicationJobRequest &request);

      /**
       * @summary Deletes an activation code.
       *
       * @description You can call this operation to delete an activation code if you no longer need to import the information about migration sources by using the activation code or if the activation code has expired.
       *
       * @param request DeleteAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessTokenResponse
       */
      Models::DeleteAccessTokenResponse deleteAccessTokenWithOptions(const Models::DeleteAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an activation code.
       *
       * @description You can call this operation to delete an activation code if you no longer need to import the information about migration sources by using the activation code or if the activation code has expired.
       *
       * @param request DeleteAccessTokenRequest
       * @return DeleteAccessTokenResponse
       */
      Models::DeleteAccessTokenResponse deleteAccessToken(const Models::DeleteAccessTokenRequest &request);

      /**
       * @summary Deletes a migration job.
       *
       * @description ## Usage notes
       * *   Deleted migration jobs cannot be restored.
       * *   After a migration job is deleted, associated resources, such as the intermediate instance, are automatically released.
       *
       * @param request DeleteReplicationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteReplicationJobResponse
       */
      Models::DeleteReplicationJobResponse deleteReplicationJobWithOptions(const Models::DeleteReplicationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a migration job.
       *
       * @description ## Usage notes
       * *   Deleted migration jobs cannot be restored.
       * *   After a migration job is deleted, associated resources, such as the intermediate instance, are automatically released.
       *
       * @param request DeleteReplicationJobRequest
       * @return DeleteReplicationJobResponse
       */
      Models::DeleteReplicationJobResponse deleteReplicationJob(const Models::DeleteReplicationJobRequest &request);

      /**
       * @summary Deletes a migration source.
       *
       * @description ## Usage notes
       * *   If a migration job is created for the migration source and the migration job is in the Running state, the migration source cannot be deleted.
       * *   If a migration job is created for the migration source but the migration job is not in the Running state, you can set the `Force` parameter to true to delete the migration source.
       *
       * @param request DeleteSourceServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSourceServerResponse
       */
      Models::DeleteSourceServerResponse deleteSourceServerWithOptions(const Models::DeleteSourceServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a migration source.
       *
       * @description ## Usage notes
       * *   If a migration job is created for the migration source and the migration job is in the Running state, the migration source cannot be deleted.
       * *   If a migration job is created for the migration source but the migration job is not in the Running state, you can set the `Force` parameter to true to delete the migration source.
       *
       * @param request DeleteSourceServerRequest
       * @return DeleteSourceServerResponse
       */
      Models::DeleteSourceServerResponse deleteSourceServer(const Models::DeleteSourceServerRequest &request);

      /**
       * @summary Deletes a workgroup.
       *
       * @description To delete a workgroup, you must delete or dissociate the migration source that is associated with the workgroup. For more information, see [DeleteSourceServer](https://help.aliyun.com/document_detail/2402124.html).
       *
       * @param request DeleteWorkgroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkgroupResponse
       */
      Models::DeleteWorkgroupResponse deleteWorkgroupWithOptions(const Models::DeleteWorkgroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workgroup.
       *
       * @description To delete a workgroup, you must delete or dissociate the migration source that is associated with the workgroup. For more information, see [DeleteSourceServer](https://help.aliyun.com/document_detail/2402124.html).
       *
       * @param request DeleteWorkgroupRequest
       * @return DeleteWorkgroupResponse
       */
      Models::DeleteWorkgroupResponse deleteWorkgroup(const Models::DeleteWorkgroupRequest &request);

      /**
       * @summary Queries the details of migration jobs.
       *
       * @description ## Usage notes
       * *   You can specify multiple request parameters to be queried. Specified parameters are evaluated by using the AND operator. Only the specified parameters are used as filter conditions.
       * *   Server Migration Center (SMC) allows you to migrate source servers to Docker container images. You can use SMC to migrate containerized applications in a cost-effective way. For more information, see [Terms](https://help.aliyun.com/document_detail/60744.html).
       *
       * @param request DescribeReplicationJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReplicationJobsResponse
       */
      Models::DescribeReplicationJobsResponse describeReplicationJobsWithOptions(const Models::DescribeReplicationJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of migration jobs.
       *
       * @description ## Usage notes
       * *   You can specify multiple request parameters to be queried. Specified parameters are evaluated by using the AND operator. Only the specified parameters are used as filter conditions.
       * *   Server Migration Center (SMC) allows you to migrate source servers to Docker container images. You can use SMC to migrate containerized applications in a cost-effective way. For more information, see [Terms](https://help.aliyun.com/document_detail/60744.html).
       *
       * @param request DescribeReplicationJobsRequest
       * @return DescribeReplicationJobsResponse
       */
      Models::DescribeReplicationJobsResponse describeReplicationJobs(const Models::DescribeReplicationJobsRequest &request);

      /**
       * @summary Queries the information about one or more source servers.
       *
       * @description ## [](#)Usage notes
       * You can specify multiple request parameters to filter instances. Specified parameters have logical AND relations. Only the specified parameters are used as filter conditions.
       *
       * @param request DescribeSourceServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSourceServersResponse
       */
      Models::DescribeSourceServersResponse describeSourceServersWithOptions(const Models::DescribeSourceServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about one or more source servers.
       *
       * @description ## [](#)Usage notes
       * You can specify multiple request parameters to filter instances. Specified parameters have logical AND relations. Only the specified parameters are used as filter conditions.
       *
       * @param request DescribeSourceServersRequest
       * @return DescribeSourceServersResponse
       */
      Models::DescribeSourceServersResponse describeSourceServers(const Models::DescribeSourceServersRequest &request);

      /**
       * @summary Queries the information about workgroups. After you create a workgroup, you can query the information about the workgroup, such as the name, description, and alert information.
       *
       * @param request DescribeWorkgroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWorkgroupsResponse
       */
      Models::DescribeWorkgroupsResponse describeWorkgroupsWithOptions(const Models::DescribeWorkgroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about workgroups. After you create a workgroup, you can query the information about the workgroup, such as the name, description, and alert information.
       *
       * @param request DescribeWorkgroupsRequest
       * @return DescribeWorkgroupsResponse
       */
      Models::DescribeWorkgroupsResponse describeWorkgroups(const Models::DescribeWorkgroupsRequest &request);

      /**
       * @summary Disables an activation code.
       *
       * @description To prevent an activation code from being leaked, you can call this operation to disable the activation code. Disabled activation codes can no longer be used to import the information about migration sources. However, migration sources whose information has been imported are not affected.
       *
       * @param request DisableAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAccessTokenResponse
       */
      Models::DisableAccessTokenResponse disableAccessTokenWithOptions(const Models::DisableAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an activation code.
       *
       * @description To prevent an activation code from being leaked, you can call this operation to disable the activation code. Disabled activation codes can no longer be used to import the information about migration sources. However, migration sources whose information has been imported are not affected.
       *
       * @param request DisableAccessTokenRequest
       * @return DisableAccessTokenResponse
       */
      Models::DisableAccessTokenResponse disableAccessToken(const Models::DisableAccessTokenRequest &request);

      /**
       * @summary Disassociates migration sources from a workgroup. If you do not need to use a workgroup to migrate migration sources, you can disassociate the migration sources from the workgroup.
       *
       * @param request DisassociateSourceServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateSourceServersResponse
       */
      Models::DisassociateSourceServersResponse disassociateSourceServersWithOptions(const Models::DisassociateSourceServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates migration sources from a workgroup. If you do not need to use a workgroup to migrate migration sources, you can disassociate the migration sources from the workgroup.
       *
       * @param request DisassociateSourceServersRequest
       * @return DisassociateSourceServersResponse
       */
      Models::DisassociateSourceServersResponse disassociateSourceServers(const Models::DisassociateSourceServersRequest &request);

      /**
       * @summary Queries activation codes and the usage details of the activation codes.
       *
       * @description You can call this operation to query activation codes and the usage details of the activation codes. An activation code can be in the activated, unactivated, or expired state.
       *
       * @param request ListAccessTokensRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessTokensResponse
       */
      Models::ListAccessTokensResponse listAccessTokensWithOptions(const Models::ListAccessTokensRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries activation codes and the usage details of the activation codes.
       *
       * @description You can call this operation to query activation codes and the usage details of the activation codes. An activation code can be in the activated, unactivated, or expired state.
       *
       * @param request ListAccessTokensRequest
       * @return ListAccessTokensResponse
       */
      Models::ListAccessTokensResponse listAccessTokens(const Models::ListAccessTokensRequest &request);

      /**
       * @summary Queries the tags that are attached to Server Migration Center (SMC) resources. SMC resources include migration sources and migration jobs.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are attached to Server Migration Center (SMC) resources. SMC resources include migration sources and migration jobs.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the parameters of a migration job.
       *
       * @description ## Usage notes
       * Before you modify the parameters of a migration job, take note of the following information:
       * *   The `Name` and `Description` parameters can be modified during the lifecycle of the migration job.
       * *   The `Frequency` and `MaxNumberOfImageToKeep` parameters can be modified only before the migration job is executed or when the migration job is in the `Waiting` state.
       * *   Other parameters can be modified only before the migration job is executed.
       *
       * @param request ModifyReplicationJobAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReplicationJobAttributeResponse
       */
      Models::ModifyReplicationJobAttributeResponse modifyReplicationJobAttributeWithOptions(const Models::ModifyReplicationJobAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of a migration job.
       *
       * @description ## Usage notes
       * Before you modify the parameters of a migration job, take note of the following information:
       * *   The `Name` and `Description` parameters can be modified during the lifecycle of the migration job.
       * *   The `Frequency` and `MaxNumberOfImageToKeep` parameters can be modified only before the migration job is executed or when the migration job is in the `Waiting` state.
       * *   Other parameters can be modified only before the migration job is executed.
       *
       * @param request ModifyReplicationJobAttributeRequest
       * @return ModifyReplicationJobAttributeResponse
       */
      Models::ModifyReplicationJobAttributeResponse modifyReplicationJobAttribute(const Models::ModifyReplicationJobAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a migration source.
       *
       * @description ## Usage notes
       * You can call this operation regardless of the status of the migration source.
       *
       * @param request ModifySourceServerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySourceServerAttributeResponse
       */
      Models::ModifySourceServerAttributeResponse modifySourceServerAttributeWithOptions(const Models::ModifySourceServerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a migration source.
       *
       * @description ## Usage notes
       * You can call this operation regardless of the status of the migration source.
       *
       * @param request ModifySourceServerAttributeRequest
       * @return ModifySourceServerAttributeResponse
       */
      Models::ModifySourceServerAttributeResponse modifySourceServerAttribute(const Models::ModifySourceServerAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a workgroup.
       *
       * @param request ModifyWorkgroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWorkgroupAttributeResponse
       */
      Models::ModifyWorkgroupAttributeResponse modifyWorkgroupAttributeWithOptions(const Models::ModifyWorkgroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a workgroup.
       *
       * @param request ModifyWorkgroupAttributeRequest
       * @return ModifyWorkgroupAttributeResponse
       */
      Models::ModifyWorkgroupAttributeResponse modifyWorkgroupAttribute(const Models::ModifyWorkgroupAttributeRequest &request);

      /**
       * @summary Starts a migration job.
       *
       * @description ## Usage notes
       * This operation can only be used to start the migration jobs that are in the Ready, Stopped, or InError state.
       *
       * @param request StartReplicationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartReplicationJobResponse
       */
      Models::StartReplicationJobResponse startReplicationJobWithOptions(const Models::StartReplicationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a migration job.
       *
       * @description ## Usage notes
       * This operation can only be used to start the migration jobs that are in the Ready, Stopped, or InError state.
       *
       * @param request StartReplicationJobRequest
       * @return StartReplicationJobResponse
       */
      Models::StartReplicationJobResponse startReplicationJob(const Models::StartReplicationJobRequest &request);

      /**
       * @summary Pauses a migration job.
       *
       * @description ## Usage notes
       * You can call this operation to pause only a migration job whose primary status is Running and business status is Syncing.
       *
       * @param request StopReplicationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopReplicationJobResponse
       */
      Models::StopReplicationJobResponse stopReplicationJobWithOptions(const Models::StopReplicationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses a migration job.
       *
       * @description ## Usage notes
       * You can call this operation to pause only a migration job whose primary status is Running and business status is Syncing.
       *
       * @param request StopReplicationJobRequest
       * @return StopReplicationJobResponse
       */
      Models::StopReplicationJobResponse stopReplicationJob(const Models::StopReplicationJobRequest &request);

      /**
       * @summary Creates tags and adds them to Server Migration Center (SMC) resources. The SMC resources include migration sources and jobs.
       *
       * @description ## Usage notes
       * Up to 20 tags can be added to each SMC resource.
       * Before you add tags to an SMC resource, Alibaba Cloud checks the number of the tags that have been added to the resource. If the maximum number is reached, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates tags and adds them to Server Migration Center (SMC) resources. The SMC resources include migration sources and jobs.
       *
       * @description ## Usage notes
       * Up to 20 tags can be added to each SMC resource.
       * Before you add tags to an SMC resource, Alibaba Cloud checks the number of the tags that have been added to the resource. If the maximum number is reached, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags that are added to Server Migration Center (SMC) resources. The SMC resources include migration sources and jobs.
       *
       * @description You can call this operation to remove tags that are added to one or more SMC resources and delete the tags if the tags are no longer used.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags that are added to Server Migration Center (SMC) resources. The SMC resources include migration sources and jobs.
       *
       * @description You can call this operation to remove tags that are added to one or more SMC resources and delete the tags if the tags are no longer used.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
