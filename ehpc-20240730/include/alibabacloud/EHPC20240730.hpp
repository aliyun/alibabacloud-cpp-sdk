// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EHPC20240730_HPP_
#define ALIBABACLOUD_EHPC20240730_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EHPC20240730Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EHPC20240730.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds Elastic Compute Service (ECS) instances as compute nodes to Elastic High Performance Computing (E-HPC) clusters.
       *
       * @description The ECS instances must meet the following requirements:
       * *   The ECS instances do not belong to any E-HPC cluster.
       * *   The ECS instances reside in the same virtual private cloud (VPC) as the cluster.
       * *   The ECS instances are in the Stopped state.
       * Take of the following limits:
       * *   You can specify multiple instance IDs to add them at a time. However, the instances must be of the same type.
       * *   When an instance is added to the cluster, [the system disk is reset](https://help.aliyun.com/zh/ecs/user-guide/re-initialize-a-system-disk) by using the image specified by the input parameters.
       * *   If the instance has data disks, they are not automatically created and mounted after the instance is added.
       * *   The hostname of the instance remains the same. Therefore, you must ensure that the hostname of the instance to be added is different from the hostname of an existing node in the cluster.
       *
       * @param tmpReq AttachNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachNodesResponse
       */
      Models::AttachNodesResponse attachNodesWithOptions(const Models::AttachNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds Elastic Compute Service (ECS) instances as compute nodes to Elastic High Performance Computing (E-HPC) clusters.
       *
       * @description The ECS instances must meet the following requirements:
       * *   The ECS instances do not belong to any E-HPC cluster.
       * *   The ECS instances reside in the same virtual private cloud (VPC) as the cluster.
       * *   The ECS instances are in the Stopped state.
       * Take of the following limits:
       * *   You can specify multiple instance IDs to add them at a time. However, the instances must be of the same type.
       * *   When an instance is added to the cluster, [the system disk is reset](https://help.aliyun.com/zh/ecs/user-guide/re-initialize-a-system-disk) by using the image specified by the input parameters.
       * *   If the instance has data disks, they are not automatically created and mounted after the instance is added.
       * *   The hostname of the instance remains the same. Therefore, you must ensure that the hostname of the instance to be added is different from the hostname of an existing node in the cluster.
       *
       * @param request AttachNodesRequest
       * @return AttachNodesResponse
       */
      Models::AttachNodesResponse attachNodes(const Models::AttachNodesRequest &request);

      /**
       * @summary Attaches shared storage to an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @description ## [](#)Usage notes
       * When you call this operation, take note of the following items:
       * *   The file system that you want to attach must be created in advance in the same virtual private cloud (VPC) as the destination cluster. For more information, see [Create a file system](https://help.aliyun.com/document_detail/27530.html) and [Manage mount targets](https://help.aliyun.com/document_detail/27531.html).
       * *   E-HPC clusters support Apsara File Storage NAS file systems.
       *
       * @param tmpReq AttachSharedStoragesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachSharedStoragesResponse
       */
      Models::AttachSharedStoragesResponse attachSharedStoragesWithOptions(const Models::AttachSharedStoragesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches shared storage to an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @description ## [](#)Usage notes
       * When you call this operation, take note of the following items:
       * *   The file system that you want to attach must be created in advance in the same virtual private cloud (VPC) as the destination cluster. For more information, see [Create a file system](https://help.aliyun.com/document_detail/27530.html) and [Manage mount targets](https://help.aliyun.com/document_detail/27531.html).
       * *   E-HPC clusters support Apsara File Storage NAS file systems.
       *
       * @param request AttachSharedStoragesRequest
       * @return AttachSharedStoragesResponse
       */
      Models::AttachSharedStoragesResponse attachSharedStorages(const Models::AttachSharedStoragesRequest &request);

      /**
       * @summary Creates a pay-as-you-go or subscription Elastic High Performance Computing (E-HPC) cluster.
       *
       * @description ## [](#)Usage notes
       * Before you call this operation, make sure that you are familiar with the billing and pricing of E-HPC. For more information, see [Overview](https://help.aliyun.com/document_detail/2842985.html).
       *
       * @param tmpReq CreateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const Models::CreateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pay-as-you-go or subscription Elastic High Performance Computing (E-HPC) cluster.
       *
       * @description ## [](#)Usage notes
       * Before you call this operation, make sure that you are familiar with the billing and pricing of E-HPC. For more information, see [Overview](https://help.aliyun.com/document_detail/2842985.html).
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const Models::CreateClusterRequest &request);

      /**
       * @summary Creates a job for a cluster.
       *
       * @description Before you call this operation, make sure that you understand the billing and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of E-HPC.
       *
       * @param tmpReq CreateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const Models::CreateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a job for a cluster.
       *
       * @description Before you call this operation, make sure that you understand the billing and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of E-HPC.
       *
       * @param request CreateJobRequest
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJob(const Models::CreateJobRequest &request);

      /**
       * @summary Creates compute nodes for an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @description ## [](#)
       *
       * @param tmpReq CreateNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNodesResponse
       */
      Models::CreateNodesResponse createNodesWithOptions(const Models::CreateNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates compute nodes for an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @description ## [](#)
       *
       * @param request CreateNodesRequest
       * @return CreateNodesResponse
       */
      Models::CreateNodesResponse createNodes(const Models::CreateNodesRequest &request);

      /**
       * @summary Creates a queue for an Enterprise High Performance Computing (E-HPC) cluster.
       *
       * @param tmpReq CreateQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQueueResponse
       */
      Models::CreateQueueResponse createQueueWithOptions(const Models::CreateQueueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a queue for an Enterprise High Performance Computing (E-HPC) cluster.
       *
       * @param request CreateQueueRequest
       * @return CreateQueueResponse
       */
      Models::CreateQueueResponse createQueue(const Models::CreateQueueRequest &request);

      /**
       * @summary Adds users to an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param tmpReq CreateUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUsersResponse
       */
      Models::CreateUsersResponse createUsersWithOptions(const Models::CreateUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds users to an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param request CreateUsersRequest
       * @return CreateUsersResponse
       */
      Models::CreateUsersResponse createUsers(const Models::CreateUsersRequest &request);

      /**
       * @summary Releases an Enterprise High Performance Computing (E-HPC) cluster.
       *
       * @description ## [](#)Usage notes
       * Make sure that data of the cluster to be deleted is backed up before you call this operation.
       * > After a cluster is released, you cannot restore the data stored in the cluster. Exercise caution when you release a cluster.
       *
       * @param request DeleteClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteClusterWithOptions(const Models::DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an Enterprise High Performance Computing (E-HPC) cluster.
       *
       * @description ## [](#)Usage notes
       * Make sure that data of the cluster to be deleted is backed up before you call this operation.
       * > After a cluster is released, you cannot restore the data stored in the cluster. Exercise caution when you release a cluster.
       *
       * @param request DeleteClusterRequest
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteCluster(const Models::DeleteClusterRequest &request);

      /**
       * @summary Deletes compute nodes from an Enterprise High Performance Computing (E-HPC) cluster at a time.
       *
       * @description ## [](#)Usage notes
       * Before you delete a compute node, we recommend that you export all job data from the node to prevent data loss.
       *
       * @param tmpReq DeleteNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNodesResponse
       */
      Models::DeleteNodesResponse deleteNodesWithOptions(const Models::DeleteNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes compute nodes from an Enterprise High Performance Computing (E-HPC) cluster at a time.
       *
       * @description ## [](#)Usage notes
       * Before you delete a compute node, we recommend that you export all job data from the node to prevent data loss.
       *
       * @param request DeleteNodesRequest
       * @return DeleteNodesResponse
       */
      Models::DeleteNodesResponse deleteNodes(const Models::DeleteNodesRequest &request);

      /**
       * @summary Deletes queues from an Enterprise High Performance Computing (E-HPC) cluster.
       *
       * @description ## [](#)Usage notes
       * Before you delete a queue, you must delete all compute nodes in the queue.
       *
       * @param tmpReq DeleteQueuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQueuesResponse
       */
      Models::DeleteQueuesResponse deleteQueuesWithOptions(const Models::DeleteQueuesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes queues from an Enterprise High Performance Computing (E-HPC) cluster.
       *
       * @description ## [](#)Usage notes
       * Before you delete a queue, you must delete all compute nodes in the queue.
       *
       * @param request DeleteQueuesRequest
       * @return DeleteQueuesResponse
       */
      Models::DeleteQueuesResponse deleteQueues(const Models::DeleteQueuesRequest &request);

      /**
       * @summary Deletes users from a cluster.
       *
       * @param tmpReq DeleteUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUsersResponse
       */
      Models::DeleteUsersResponse deleteUsersWithOptions(const Models::DeleteUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes users from a cluster.
       *
       * @param request DeleteUsersRequest
       * @return DeleteUsersResponse
       */
      Models::DeleteUsersResponse deleteUsers(const Models::DeleteUsersRequest &request);

      /**
       * @summary Queries the details of an addon template.
       *
       * @param request DescribeAddonTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAddonTemplateResponse
       */
      Models::DescribeAddonTemplateResponse describeAddonTemplateWithOptions(const Models::DescribeAddonTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an addon template.
       *
       * @param request DescribeAddonTemplateRequest
       * @return DescribeAddonTemplateResponse
       */
      Models::DescribeAddonTemplateResponse describeAddonTemplate(const Models::DescribeAddonTemplateRequest &request);

      /**
       * @summary Unmounts shared storage from the mount directory of a cluster.
       *
       * @param tmpReq DetachSharedStoragesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachSharedStoragesResponse
       */
      Models::DetachSharedStoragesResponse detachSharedStoragesWithOptions(const Models::DetachSharedStoragesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unmounts shared storage from the mount directory of a cluster.
       *
       * @param request DetachSharedStoragesRequest
       * @return DetachSharedStoragesResponse
       */
      Models::DetachSharedStoragesResponse detachSharedStorages(const Models::DetachSharedStoragesRequest &request);

      /**
       * @summary Queries the details of an installed addon.
       *
       * @param request GetAddonRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAddonResponse
       */
      Models::GetAddonResponse getAddonWithOptions(const Models::GetAddonRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an installed addon.
       *
       * @param request GetAddonRequest
       * @return GetAddonResponse
       */
      Models::GetAddonResponse getAddon(const Models::GetAddonRequest &request);

      /**
       * @summary Queries information about an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param request GetClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getClusterWithOptions(const Models::GetClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param request GetClusterRequest
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getCluster(const Models::GetClusterRequest &request);

      /**
       * @summary Query logs based on a request ID. Logs for specific actions can be queried thanks to an Action-Stage-Method three-layer log splitting structure.
       *
       * @param request GetCommonLogDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCommonLogDetailResponse
       */
      Models::GetCommonLogDetailResponse getCommonLogDetailWithOptions(const Models::GetCommonLogDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query logs based on a request ID. Logs for specific actions can be queried thanks to an Action-Stage-Method three-layer log splitting structure.
       *
       * @param request GetCommonLogDetailRequest
       * @return GetCommonLogDetailResponse
       */
      Models::GetCommonLogDetailResponse getCommonLogDetail(const Models::GetCommonLogDetailRequest &request);

      /**
       * @summary Obtains the details of a job.
       *
       * @param request GetJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResponse
       */
      Models::GetJobResponse getJobWithOptions(const Models::GetJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a job.
       *
       * @param request GetJobRequest
       * @return GetJobResponse
       */
      Models::GetJobResponse getJob(const Models::GetJobRequest &request);

      /**
       * @summary Queries the output logs of a job, including standard output logs and error output logs.
       *
       * @description ## [](#)Usage notes
       * Currently, only Slurm and PBS Pro schedulers for Standard Edition clusters are supported.
       *
       * @param request GetJobLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobLogResponse
       */
      Models::GetJobLogResponse getJobLogWithOptions(const Models::GetJobLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the output logs of a job, including standard output logs and error output logs.
       *
       * @description ## [](#)Usage notes
       * Currently, only Slurm and PBS Pro schedulers for Standard Edition clusters are supported.
       *
       * @param request GetJobLogRequest
       * @return GetJobLogResponse
       */
      Models::GetJobLogResponse getJobLog(const Models::GetJobLogRequest &request);

      /**
       * @summary Queries the details of a queue in an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param request GetQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQueueResponse
       */
      Models::GetQueueResponse getQueueWithOptions(const Models::GetQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a queue in an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param request GetQueueRequest
       * @return GetQueueResponse
       */
      Models::GetQueueResponse getQueue(const Models::GetQueueRequest &request);

      /**
       * @summary Installs an addon.
       *
       * @description ## [](#)Usage notes
       * Take note of the following items when you call this operation:
       * *   The cluster must be in the `Running` state.
       * *   Clusters fall into two types:
       *     *   Regular clusters on Alibaba Cloud Public Cloud
       *     *   Managed clusters on Alibaba Cloud Public Cloud
       *
       * @param request InstallAddonRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAddonResponse
       */
      Models::InstallAddonResponse installAddonWithOptions(const Models::InstallAddonRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs an addon.
       *
       * @description ## [](#)Usage notes
       * Take note of the following items when you call this operation:
       * *   The cluster must be in the `Running` state.
       * *   Clusters fall into two types:
       *     *   Regular clusters on Alibaba Cloud Public Cloud
       *     *   Managed clusters on Alibaba Cloud Public Cloud
       *
       * @param request InstallAddonRequest
       * @return InstallAddonResponse
       */
      Models::InstallAddonResponse installAddon(const Models::InstallAddonRequest &request);

      /**
       * @summary Install software for the specified cluster.
       *
       * @description ## Interface Description
       * When calling this interface, please note the following:
       * - The cluster status must be `Running`. 
       * - If the cluster series is `Serverless`, ensure that there is at least one login node or compute node in the cluster; otherwise, software cannot be added to the target cluster.
       *
       * @param tmpReq InstallSoftwaresRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallSoftwaresResponse
       */
      Models::InstallSoftwaresResponse installSoftwaresWithOptions(const Models::InstallSoftwaresRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Install software for the specified cluster.
       *
       * @description ## Interface Description
       * When calling this interface, please note the following:
       * - The cluster status must be `Running`. 
       * - If the cluster series is `Serverless`, ensure that there is at least one login node or compute node in the cluster; otherwise, software cannot be added to the target cluster.
       *
       * @param request InstallSoftwaresRequest
       * @return InstallSoftwaresResponse
       */
      Models::InstallSoftwaresResponse installSoftwares(const Models::InstallSoftwaresRequest &request);

      /**
       * @summary Queries supported addon templates.
       *
       * @param request ListAddonTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddonTemplatesResponse
       */
      Models::ListAddonTemplatesResponse listAddonTemplatesWithOptions(const Models::ListAddonTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries supported addon templates.
       *
       * @param request ListAddonTemplatesRequest
       * @return ListAddonTemplatesResponse
       */
      Models::ListAddonTemplatesResponse listAddonTemplates(const Models::ListAddonTemplatesRequest &request);

      /**
       * @summary Queries installed addons of an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param tmpReq ListAddonsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddonsResponse
       */
      Models::ListAddonsResponse listAddonsWithOptions(const Models::ListAddonsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries installed addons of an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param request ListAddonsRequest
       * @return ListAddonsResponse
       */
      Models::ListAddonsResponse listAddons(const Models::ListAddonsRequest &request);

      /**
       * @summary Queries the file systems that can be attached in a region.
       *
       * @param request ListAvailableFileSystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableFileSystemsResponse
       */
      Models::ListAvailableFileSystemsResponse listAvailableFileSystemsWithOptions(const Models::ListAvailableFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the file systems that can be attached in a region.
       *
       * @param request ListAvailableFileSystemsRequest
       * @return ListAvailableFileSystemsResponse
       */
      Models::ListAvailableFileSystemsResponse listAvailableFileSystems(const Models::ListAvailableFileSystemsRequest &request);

      /**
       * @summary Queries images that are available for Elastic High Performance Computing (E-HPC) clusters.
       *
       * @param tmpReq ListAvailableImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableImagesResponse
       */
      Models::ListAvailableImagesResponse listAvailableImagesWithOptions(const Models::ListAvailableImagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries images that are available for Elastic High Performance Computing (E-HPC) clusters.
       *
       * @param request ListAvailableImagesRequest
       * @return ListAvailableImagesResponse
       */
      Models::ListAvailableImagesResponse listAvailableImages(const Models::ListAvailableImagesRequest &request);

      /**
       * @summary Queries all clusters of a user in each region.
       *
       * @param tmpReq ListClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClustersWithOptions(const Models::ListClustersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all clusters of a user in each region.
       *
       * @param request ListClustersRequest
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClusters(const Models::ListClustersRequest &request);

      /**
       * @summary Queries the logs of a cluster that are generated within a time range.
       *
       * @param tmpReq ListCommonLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCommonLogsResponse
       */
      Models::ListCommonLogsResponse listCommonLogsWithOptions(const Models::ListCommonLogsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of a cluster that are generated within a time range.
       *
       * @param request ListCommonLogsRequest
       * @return ListCommonLogsResponse
       */
      Models::ListCommonLogsResponse listCommonLogs(const Models::ListCommonLogsRequest &request);

      /**
       * @summary Queries the installed software of a cluster.
       *
       * @param request ListInstalledSoftwaresRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstalledSoftwaresResponse
       */
      Models::ListInstalledSoftwaresResponse listInstalledSoftwaresWithOptions(const Models::ListInstalledSoftwaresRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the installed software of a cluster.
       *
       * @param request ListInstalledSoftwaresRequest
       * @return ListInstalledSoftwaresResponse
       */
      Models::ListInstalledSoftwaresResponse listInstalledSoftwares(const Models::ListInstalledSoftwaresRequest &request);

      /**
       * @summary Queries the jobs in a cluster.
       *
       * @param tmpReq ListJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const Models::ListJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the jobs in a cluster.
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const Models::ListJobsRequest &request);

      /**
       * @summary Queries the nodes of an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param tmpReq ListNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const Models::ListNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the nodes of an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const Models::ListNodesRequest &request);

      /**
       * @summary Queries queues in an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param tmpReq ListQueuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueuesResponse
       */
      Models::ListQueuesResponse listQueuesWithOptions(const Models::ListQueuesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries queues in an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param request ListQueuesRequest
       * @return ListQueuesResponse
       */
      Models::ListQueuesResponse listQueues(const Models::ListQueuesRequest &request);

      /**
       * @summary 查询产品支持的地域列表。
       *
       * @param request ListRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const Models::ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询产品支持的地域列表。
       *
       * @param request ListRegionsRequest
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions(const Models::ListRegionsRequest &request);

      /**
       * @summary Queries the shared storage that is attached to a cluster.
       *
       * @param request ListSharedStoragesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSharedStoragesResponse
       */
      Models::ListSharedStoragesResponse listSharedStoragesWithOptions(const Models::ListSharedStoragesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the shared storage that is attached to a cluster.
       *
       * @param request ListSharedStoragesRequest
       * @return ListSharedStoragesResponse
       */
      Models::ListSharedStoragesResponse listSharedStorages(const Models::ListSharedStoragesRequest &request);

      /**
       * @summary Queries the software that can be installed in an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param request ListSoftwaresRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSoftwaresResponse
       */
      Models::ListSoftwaresResponse listSoftwaresWithOptions(const Models::ListSoftwaresRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the software that can be installed in an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param request ListSoftwaresRequest
       * @return ListSoftwaresResponse
       */
      Models::ListSoftwaresResponse listSoftwares(const Models::ListSoftwaresRequest &request);

      /**
       * @summary Queries the users of a cluster.
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the users of a cluster.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Stops uncompleted jobs in a batch in an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param tmpReq StopJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopJobsResponse
       */
      Models::StopJobsResponse stopJobsWithOptions(const Models::StopJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops uncompleted jobs in a batch in an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param request StopJobsRequest
       * @return StopJobsResponse
       */
      Models::StopJobsResponse stopJobs(const Models::StopJobsRequest &request);

      /**
       * @summary Uninstalls an addon.
       *
       * @description ## [](#)Usage notes
       * Take note of the following items when you call this operation:
       * *   The cluster must be in the `Running` state.
       * *   Clusters fall into the following types:
       *     *   Regular clusters on Alibaba Cloud Public Cloud
       *     *   Managed clusters on Alibaba Cloud Public Cloud
       *
       * @param request UnInstallAddonRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnInstallAddonResponse
       */
      Models::UnInstallAddonResponse unInstallAddonWithOptions(const Models::UnInstallAddonRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls an addon.
       *
       * @description ## [](#)Usage notes
       * Take note of the following items when you call this operation:
       * *   The cluster must be in the `Running` state.
       * *   Clusters fall into the following types:
       *     *   Regular clusters on Alibaba Cloud Public Cloud
       *     *   Managed clusters on Alibaba Cloud Public Cloud
       *
       * @param request UnInstallAddonRequest
       * @return UnInstallAddonResponse
       */
      Models::UnInstallAddonResponse unInstallAddon(const Models::UnInstallAddonRequest &request);

      /**
       * @summary Uninstalls software systems from an Enterprise High Performance Computing (E-HPC) cluster.
       *
       * @description ## Interface Description
       * When calling this interface, please note:
       * The cluster status must be `Running`.
       *
       * @param tmpReq UninstallSoftwaresRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallSoftwaresResponse
       */
      Models::UninstallSoftwaresResponse uninstallSoftwaresWithOptions(const Models::UninstallSoftwaresRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls software systems from an Enterprise High Performance Computing (E-HPC) cluster.
       *
       * @description ## Interface Description
       * When calling this interface, please note:
       * The cluster status must be `Running`.
       *
       * @param request UninstallSoftwaresRequest
       * @return UninstallSoftwaresResponse
       */
      Models::UninstallSoftwaresResponse uninstallSoftwares(const Models::UninstallSoftwaresRequest &request);

      /**
       * @summary Modify the basic information of a specified cluster.
       *
       * @param tmpReq UpdateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClusterResponse
       */
      Models::UpdateClusterResponse updateClusterWithOptions(const Models::UpdateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the basic information of a specified cluster.
       *
       * @param request UpdateClusterRequest
       * @return UpdateClusterResponse
       */
      Models::UpdateClusterResponse updateCluster(const Models::UpdateClusterRequest &request);

      /**
       * @summary Updates the configurations of compute nodes in an Enterprise High Performance Computing (E-HPC) cluster.
       *
       * @description ## [](#)Usage notes
       * Before you delete a compute node, we recommend that you export all job data from the node to prevent data loss.
       *
       * @param tmpReq UpdateNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNodesResponse
       */
      Models::UpdateNodesResponse updateNodesWithOptions(const Models::UpdateNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of compute nodes in an Enterprise High Performance Computing (E-HPC) cluster.
       *
       * @description ## [](#)Usage notes
       * Before you delete a compute node, we recommend that you export all job data from the node to prevent data loss.
       *
       * @param request UpdateNodesRequest
       * @return UpdateNodesResponse
       */
      Models::UpdateNodesResponse updateNodes(const Models::UpdateNodesRequest &request);

      /**
       * @summary Modifies the configurations of a queue in an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param tmpReq UpdateQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQueueResponse
       */
      Models::UpdateQueueResponse updateQueueWithOptions(const Models::UpdateQueueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a queue in an Elastic High Performance Computing (E-HPC) cluster.
       *
       * @param request UpdateQueueRequest
       * @return UpdateQueueResponse
       */
      Models::UpdateQueueResponse updateQueue(const Models::UpdateQueueRequest &request);

      /**
       * @summary Updates the information of a user in an Elastic High Performance Computing (E-HPC) cluster, including the user group and password.
       *
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a user in an Elastic High Performance Computing (E-HPC) cluster, including the user group and password.
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
