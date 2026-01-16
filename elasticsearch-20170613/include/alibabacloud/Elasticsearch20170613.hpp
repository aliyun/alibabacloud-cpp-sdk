// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ELASTICSEARCH20170613_HPP_
#define ALIBABACLOUD_ELASTICSEARCH20170613_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Elasticsearch20170613Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Elasticsearch20170613.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Restores nodes in disabled zones. This operation is available only for multi-zone Elasticsearch clusters.
       *
       * @param request ActivateZonesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateZonesResponse
       */
      Models::ActivateZonesResponse activateZonesWithOptions(const string &InstanceId, const Models::ActivateZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores nodes in disabled zones. This operation is available only for multi-zone Elasticsearch clusters.
       *
       * @param request ActivateZonesRequest
       * @return ActivateZonesResponse
       */
      Models::ActivateZonesResponse activateZones(const string &InstanceId, const Models::ActivateZonesRequest &request);

      /**
       * @summary Connects Elasticsearch clusters.
       *
       * @param request AddConnectableClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddConnectableClusterResponse
       */
      Models::AddConnectableClusterResponse addConnectableClusterWithOptions(const string &InstanceId, const Models::AddConnectableClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Connects Elasticsearch clusters.
       *
       * @param request AddConnectableClusterRequest
       * @return AddConnectableClusterResponse
       */
      Models::AddConnectableClusterResponse addConnectableCluster(const string &InstanceId, const Models::AddConnectableClusterRequest &request);

      /**
       * @summary Call the AddSnapshotRepo to create a reference repository when configuring a cross-cluster OSS repository.
       *
       * @param request AddSnapshotRepoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSnapshotRepoResponse
       */
      Models::AddSnapshotRepoResponse addSnapshotRepoWithOptions(const string &InstanceId, const Models::AddSnapshotRepoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the AddSnapshotRepo to create a reference repository when configuring a cross-cluster OSS repository.
       *
       * @param request AddSnapshotRepoRequest
       * @return AddSnapshotRepoResponse
       */
      Models::AddSnapshotRepoResponse addSnapshotRepo(const string &InstanceId, const Models::AddSnapshotRepoRequest &request);

      /**
       * @summary Restores an Elasticsearch cluster that is frozen after it is released.
       *
       * @param request CancelDeletionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDeletionResponse
       */
      Models::CancelDeletionResponse cancelDeletionWithOptions(const string &InstanceId, const Models::CancelDeletionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores an Elasticsearch cluster that is frozen after it is released.
       *
       * @param request CancelDeletionRequest
       * @return CancelDeletionResponse
       */
      Models::CancelDeletionResponse cancelDeletion(const string &InstanceId, const Models::CancelDeletionRequest &request);

      /**
       * @summary Restores a Logstash cluster that is frozen after it is released.
       *
       * @param request CancelLogstashDeletionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelLogstashDeletionResponse
       */
      Models::CancelLogstashDeletionResponse cancelLogstashDeletionWithOptions(const string &InstanceId, const Models::CancelLogstashDeletionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a Logstash cluster that is frozen after it is released.
       *
       * @param request CancelLogstashDeletionRequest
       * @return CancelLogstashDeletionResponse
       */
      Models::CancelLogstashDeletionResponse cancelLogstashDeletion(const string &InstanceId, const Models::CancelLogstashDeletionRequest &request);

      /**
       * @param request CancelTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTaskWithOptions(const string &InstanceId, const Models::CancelTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CancelTaskRequest
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTask(const string &InstanceId, const Models::CancelTaskRequest &request);

      /**
       * @summary Capacity Planning
       *
       * @param request CapacityPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CapacityPlanResponse
       */
      Models::CapacityPlanResponse capacityPlanWithOptions(const Models::CapacityPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Capacity Planning
       *
       * @param request CapacityPlanRequest
       * @return CapacityPlanResponse
       */
      Models::CapacityPlanResponse capacityPlan(const Models::CapacityPlanRequest &request);

      /**
       * @summary 关闭实例的智能运维功能
       *
       * @param request CloseDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseDiagnosisResponse
       */
      Models::CloseDiagnosisResponse closeDiagnosisWithOptions(const string &InstanceId, const Models::CloseDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭实例的智能运维功能
       *
       * @param request CloseDiagnosisRequest
       * @return CloseDiagnosisResponse
       */
      Models::CloseDiagnosisResponse closeDiagnosis(const string &InstanceId, const Models::CloseDiagnosisRequest &request);

      /**
       * @param request CloseHttpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseHttpsResponse
       */
      Models::CloseHttpsResponse closeHttpsWithOptions(const string &InstanceId, const Models::CloseHttpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CloseHttpsRequest
       * @return CloseHttpsResponse
       */
      Models::CloseHttpsResponse closeHttps(const string &InstanceId, const Models::CloseHttpsRequest &request);

      /**
       * @summary Disable Managed Index
       *
       * @param request CloseManagedIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseManagedIndexResponse
       */
      Models::CloseManagedIndexResponse closeManagedIndexWithOptions(const string &InstanceId, const string &Index, const Models::CloseManagedIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disable Managed Index
       *
       * @param request CloseManagedIndexRequest
       * @return CloseManagedIndexResponse
       */
      Models::CloseManagedIndexResponse closeManagedIndex(const string &InstanceId, const string &Index, const Models::CloseManagedIndexRequest &request);

      /**
       * @summary 创建收集器
       *
       * @param request CreateCollectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCollectorResponse
       */
      Models::CreateCollectorResponse createCollectorWithOptions(const Models::CreateCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建收集器
       *
       * @param request CreateCollectorRequest
       * @return CreateCollectorResponse
       */
      Models::CreateCollectorResponse createCollector(const Models::CreateCollectorRequest &request);

      /**
       * @summary 创建Elasticsearch组合模板
       *
       * @param request CreateComponentIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComponentIndexResponse
       */
      Models::CreateComponentIndexResponse createComponentIndexWithOptions(const string &InstanceId, const string &name, const Models::CreateComponentIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Elasticsearch组合模板
       *
       * @param request CreateComponentIndexRequest
       * @return CreateComponentIndexResponse
       */
      Models::CreateComponentIndexResponse createComponentIndex(const string &InstanceId, const string &name, const Models::CreateComponentIndexRequest &request);

      /**
       * @summary 创建数据流
       *
       * @param request CreateDataStreamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataStreamResponse
       */
      Models::CreateDataStreamResponse createDataStreamWithOptions(const string &InstanceId, const Models::CreateDataStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据流
       *
       * @param request CreateDataStreamRequest
       * @return CreateDataStreamResponse
       */
      Models::CreateDataStreamResponse createDataStream(const string &InstanceId, const Models::CreateDataStreamRequest &request);

      /**
       * @summary 创建索引生命周期策略
       *
       * @param request CreateILMPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateILMPolicyResponse
       */
      Models::CreateILMPolicyResponse createILMPolicyWithOptions(const string &InstanceId, const Models::CreateILMPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建索引生命周期策略
       *
       * @param request CreateILMPolicyRequest
       * @return CreateILMPolicyResponse
       */
      Models::CreateILMPolicyResponse createILMPolicy(const string &InstanceId, const Models::CreateILMPolicyRequest &request);

      /**
       * @summary 创建索引模版
       *
       * @param request CreateIndexTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIndexTemplateResponse
       */
      Models::CreateIndexTemplateResponse createIndexTemplateWithOptions(const string &InstanceId, const Models::CreateIndexTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建索引模版
       *
       * @param request CreateIndexTemplateRequest
       * @return CreateIndexTemplateResponse
       */
      Models::CreateIndexTemplateResponse createIndexTemplate(const string &InstanceId, const Models::CreateIndexTemplateRequest &request);

      /**
       * @summary 创建logstash实例
       *
       * @param request CreateLogstashRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogstashResponse
       */
      Models::CreateLogstashResponse createLogstashWithOptions(const Models::CreateLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建logstash实例
       *
       * @param request CreateLogstashRequest
       * @return CreateLogstashResponse
       */
      Models::CreateLogstashResponse createLogstash(const Models::CreateLogstashRequest &request);

      /**
       * @summary 创建Logstash管道任务
       *
       * @param request CreatePipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelinesResponse
       */
      Models::CreatePipelinesResponse createPipelinesWithOptions(const string &InstanceId, const Models::CreatePipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Logstash管道任务
       *
       * @param request CreatePipelinesRequest
       * @return CreatePipelinesResponse
       */
      Models::CreatePipelinesResponse createPipelines(const string &InstanceId, const Models::CreatePipelinesRequest &request);

      /**
       * @param request CreateSnapshotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const string &InstanceId, const Models::CreateSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateSnapshotRequest
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshot(const string &InstanceId, const Models::CreateSnapshotRequest &request);

      /**
       * @summary 创建私网链接VPC终端节点
       *
       * @description 5FFD9ED4-C2EC-4E89-B22B-1ACB6FE1D\\*\\*\\*
       *
       * @param request CreateVpcEndpointRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcEndpointResponse
       */
      Models::CreateVpcEndpointResponse createVpcEndpointWithOptions(const string &InstanceId, const Models::CreateVpcEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建私网链接VPC终端节点
       *
       * @description 5FFD9ED4-C2EC-4E89-B22B-1ACB6FE1D\\*\\*\\*
       *
       * @param request CreateVpcEndpointRequest
       * @return CreateVpcEndpointResponse
       */
      Models::CreateVpcEndpointResponse createVpcEndpoint(const string &InstanceId, const Models::CreateVpcEndpointRequest &request);

      /**
       * @summary Invoke DeactivateZones to offline certain zones when there are multiple availability zones, and migrate nodes in the offline zones to other availability zones.
       *
       * @param request DeactivateZonesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactivateZonesResponse
       */
      Models::DeactivateZonesResponse deactivateZonesWithOptions(const string &InstanceId, const Models::DeactivateZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke DeactivateZones to offline certain zones when there are multiple availability zones, and migrate nodes in the offline zones to other availability zones.
       *
       * @param request DeactivateZonesRequest
       * @return DeactivateZonesResponse
       */
      Models::DeactivateZonesResponse deactivateZones(const string &InstanceId, const Models::DeactivateZonesRequest &request);

      /**
       * @summary Deletes a shipper.
       *
       * @param request DeleteCollectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCollectorResponse
       */
      Models::DeleteCollectorResponse deleteCollectorWithOptions(const string &ResId, const Models::DeleteCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a shipper.
       *
       * @param request DeleteCollectorRequest
       * @return DeleteCollectorResponse
       */
      Models::DeleteCollectorResponse deleteCollector(const string &ResId, const Models::DeleteCollectorRequest &request);

      /**
       * @summary 删除组合索引模板
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComponentIndexResponse
       */
      Models::DeleteComponentIndexResponse deleteComponentIndexWithOptions(const string &InstanceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除组合索引模板
       *
       * @return DeleteComponentIndexResponse
       */
      Models::DeleteComponentIndexResponse deleteComponentIndex(const string &InstanceId, const string &name);

      /**
       * @param request DeleteConnectedClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConnectedClusterResponse
       */
      Models::DeleteConnectedClusterResponse deleteConnectedClusterWithOptions(const string &InstanceId, const Models::DeleteConnectedClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteConnectedClusterRequest
       * @return DeleteConnectedClusterResponse
       */
      Models::DeleteConnectedClusterResponse deleteConnectedCluster(const string &InstanceId, const Models::DeleteConnectedClusterRequest &request);

      /**
       * @summary 删除数据流
       *
       * @param request DeleteDataStreamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataStreamResponse
       */
      Models::DeleteDataStreamResponse deleteDataStreamWithOptions(const string &InstanceId, const string &DataStream, const Models::DeleteDataStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据流
       *
       * @param request DeleteDataStreamRequest
       * @return DeleteDataStreamResponse
       */
      Models::DeleteDataStreamResponse deleteDataStream(const string &InstanceId, const string &DataStream, const Models::DeleteDataStreamRequest &request);

      /**
       * @param request DeleteDataTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataTaskResponse
       */
      Models::DeleteDataTaskResponse deleteDataTaskWithOptions(const string &InstanceId, const Models::DeleteDataTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteDataTaskRequest
       * @return DeleteDataTaskResponse
       */
      Models::DeleteDataTaskResponse deleteDataTask(const string &InstanceId, const Models::DeleteDataTaskRequest &request);

      /**
       * @summary 删除历史索引模板
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeprecatedTemplateResponse
       */
      Models::DeleteDeprecatedTemplateResponse deleteDeprecatedTemplateWithOptions(const string &InstanceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除历史索引模板
       *
       * @return DeleteDeprecatedTemplateResponse
       */
      Models::DeleteDeprecatedTemplateResponse deleteDeprecatedTemplate(const string &InstanceId, const string &name);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteILMPolicyResponse
       */
      Models::DeleteILMPolicyResponse deleteILMPolicyWithOptions(const string &InstanceId, const string &PolicyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DeleteILMPolicyResponse
       */
      Models::DeleteILMPolicyResponse deleteILMPolicy(const string &InstanceId, const string &PolicyName);

      /**
       * @summary 删除ES集群索引模版
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIndexTemplateResponse
       */
      Models::DeleteIndexTemplateResponse deleteIndexTemplateWithOptions(const string &InstanceId, const string &IndexTemplate, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除ES集群索引模版
       *
       * @return DeleteIndexTemplateResponse
       */
      Models::DeleteIndexTemplateResponse deleteIndexTemplate(const string &InstanceId, const string &IndexTemplate);

      /**
       * @param request DeleteInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const string &InstanceId, const Models::DeleteInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const string &InstanceId, const Models::DeleteInstanceRequest &request);

      /**
       * @summary Releases a Logstash cluster.
       *
       * @description Before you call this operation, take note of the following information: After the cluster is released, the physical resources used by the cluster are reclaimed. The data stored in the cluster is deleted and cannot be recovered. The disks attached to the nodes in the cluster and the snapshots created for the cluster are released.
       *
       * @param request DeleteLogstashRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogstashResponse
       */
      Models::DeleteLogstashResponse deleteLogstashWithOptions(const string &InstanceId, const Models::DeleteLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a Logstash cluster.
       *
       * @description Before you call this operation, take note of the following information: After the cluster is released, the physical resources used by the cluster are reclaimed. The data stored in the cluster is deleted and cannot be recovered. The disks attached to the nodes in the cluster and the snapshots created for the cluster are released.
       *
       * @param request DeleteLogstashRequest
       * @return DeleteLogstashResponse
       */
      Models::DeleteLogstashResponse deleteLogstash(const string &InstanceId, const Models::DeleteLogstashRequest &request);

      /**
       * @summary Deletes a pipeline that is configured for a Logstash cluster.
       *
       * @param request DeletePipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePipelinesResponse
       */
      Models::DeletePipelinesResponse deletePipelinesWithOptions(const string &InstanceId, const Models::DeletePipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a pipeline that is configured for a Logstash cluster.
       *
       * @param request DeletePipelinesRequest
       * @return DeletePipelinesResponse
       */
      Models::DeletePipelinesResponse deletePipelines(const string &InstanceId, const Models::DeletePipelinesRequest &request);

      /**
       * @param request DeleteSnapshotRepoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotRepoResponse
       */
      Models::DeleteSnapshotRepoResponse deleteSnapshotRepoWithOptions(const string &InstanceId, const Models::DeleteSnapshotRepoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteSnapshotRepoRequest
       * @return DeleteSnapshotRepoResponse
       */
      Models::DeleteSnapshotRepoResponse deleteSnapshotRepo(const string &InstanceId, const Models::DeleteSnapshotRepoRequest &request);

      /**
       * @summary 删除服务账号vpc下的终端节点
       *
       * @param request DeleteVpcEndpointRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcEndpointResponse
       */
      Models::DeleteVpcEndpointResponse deleteVpcEndpointWithOptions(const string &InstanceId, const string &EndpointId, const Models::DeleteVpcEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除服务账号vpc下的终端节点
       *
       * @param request DeleteVpcEndpointRequest
       * @return DeleteVpcEndpointResponse
       */
      Models::DeleteVpcEndpointResponse deleteVpcEndpoint(const string &InstanceId, const string &EndpointId, const Models::DeleteVpcEndpointRequest &request);

      /**
       * @summary Queries the information of ES-operator that is installed for a specified Container Service for Kubernetes (ACK) cluster.
       *
       * @description > Before you install a shipper on an ACK cluster, you can call this operation to query the installation status of ES-operator for the ACK cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAckOperatorResponse
       */
      Models::DescribeAckOperatorResponse describeAckOperatorWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of ES-operator that is installed for a specified Container Service for Kubernetes (ACK) cluster.
       *
       * @description > Before you install a shipper on an ACK cluster, you can call this operation to query the installation status of ES-operator for the ACK cluster.
       *
       * @return DescribeAckOperatorResponse
       */
      Models::DescribeAckOperatorResponse describeAckOperator(const string &ClusterId);

      /**
       * @summary Queries the details of a shipper.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCollectorResponse
       */
      Models::DescribeCollectorResponse describeCollectorWithOptions(const string &ResId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a shipper.
       *
       * @return DescribeCollectorResponse
       */
      Models::DescribeCollectorResponse describeCollector(const string &ResId);

      /**
       * @summary 查看组合索引模板详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentIndexResponse
       */
      Models::DescribeComponentIndexResponse describeComponentIndexWithOptions(const string &InstanceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看组合索引模板详情
       *
       * @return DescribeComponentIndexResponse
       */
      Models::DescribeComponentIndexResponse describeComponentIndex(const string &InstanceId, const string &name);

      /**
       * @param request DescribeConnectableClustersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConnectableClustersResponse
       */
      Models::DescribeConnectableClustersResponse describeConnectableClustersWithOptions(const string &InstanceId, const Models::DescribeConnectableClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeConnectableClustersRequest
       * @return DescribeConnectableClustersResponse
       */
      Models::DescribeConnectableClustersResponse describeConnectableClusters(const string &InstanceId, const Models::DescribeConnectableClustersRequest &request);

      /**
       * @summary DescribeDeprecatedTemplate
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeprecatedTemplateResponse
       */
      Models::DescribeDeprecatedTemplateResponse describeDeprecatedTemplateWithOptions(const string &InstanceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeDeprecatedTemplate
       *
       * @return DescribeDeprecatedTemplateResponse
       */
      Models::DescribeDeprecatedTemplateResponse describeDeprecatedTemplate(const string &InstanceId, const string &name);

      /**
       * @param request DescribeDiagnoseReportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnoseReportResponse
       */
      Models::DescribeDiagnoseReportResponse describeDiagnoseReportWithOptions(const string &InstanceId, const string &ReportId, const Models::DescribeDiagnoseReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDiagnoseReportRequest
       * @return DescribeDiagnoseReportResponse
       */
      Models::DescribeDiagnoseReportResponse describeDiagnoseReport(const string &InstanceId, const string &ReportId, const Models::DescribeDiagnoseReportRequest &request);

      /**
       * @param request DescribeDiagnosisSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisSettingsResponse
       */
      Models::DescribeDiagnosisSettingsResponse describeDiagnosisSettingsWithOptions(const string &InstanceId, const Models::DescribeDiagnosisSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDiagnosisSettingsRequest
       * @return DescribeDiagnosisSettingsResponse
       */
      Models::DescribeDiagnosisSettingsResponse describeDiagnosisSettings(const string &InstanceId, const Models::DescribeDiagnosisSettingsRequest &request);

      /**
       * @summary 获取集群动态指标
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDynamicSettingsResponse
       */
      Models::DescribeDynamicSettingsResponse describeDynamicSettingsWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取集群动态指标
       *
       * @return DescribeDynamicSettingsResponse
       */
      Models::DescribeDynamicSettingsResponse describeDynamicSettings(const string &InstanceId);

      /**
       * @summary Queries the health status of an Elasticsearch cluster.
       *
       * @description An Elasticsearch cluster can be in a health state indicated by one of the following colors:
       * *   GREEN: Primary shards and replica shards for the primary shards are normally allocated.
       * *   YELLOW: Primary shards are normally allocated, but replica shards for the primary shards are not normally allocated.
       * *   RED: Primary shards are not normally allocated.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticsearchHealthResponse
       */
      Models::DescribeElasticsearchHealthResponse describeElasticsearchHealthWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health status of an Elasticsearch cluster.
       *
       * @description An Elasticsearch cluster can be in a health state indicated by one of the following colors:
       * *   GREEN: Primary shards and replica shards for the primary shards are normally allocated.
       * *   YELLOW: Primary shards are normally allocated, but replica shards for the primary shards are not normally allocated.
       * *   RED: Primary shards are not normally allocated.
       *
       * @return DescribeElasticsearchHealthResponse
       */
      Models::DescribeElasticsearchHealthResponse describeElasticsearchHealth(const string &InstanceId);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeILMPolicyResponse
       */
      Models::DescribeILMPolicyResponse describeILMPolicyWithOptions(const string &InstanceId, const string &PolicyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DescribeILMPolicyResponse
       */
      Models::DescribeILMPolicyResponse describeILMPolicy(const string &InstanceId, const string &PolicyName);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIndexTemplateResponse
       */
      Models::DescribeIndexTemplateResponse describeIndexTemplateWithOptions(const string &InstanceId, const string &IndexTemplate, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DescribeIndexTemplateResponse
       */
      Models::DescribeIndexTemplateResponse describeIndexTemplate(const string &InstanceId, const string &IndexTemplate);

      /**
       * @summary The name of the dictionary file.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The name of the dictionary file.
       *
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const string &InstanceId);

      /**
       * @summary 获取Elasticsearch集群Kibana节点settings配置
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKibanaSettingsResponse
       */
      Models::DescribeKibanaSettingsResponse describeKibanaSettingsWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Elasticsearch集群Kibana节点settings配置
       *
       * @return DescribeKibanaSettingsResponse
       */
      Models::DescribeKibanaSettingsResponse describeKibanaSettings(const string &InstanceId);

      /**
       * @summary 查看Logstash实例详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogstashResponse
       */
      Models::DescribeLogstashResponse describeLogstashWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看Logstash实例详情
       *
       * @return DescribeLogstashResponse
       */
      Models::DescribeLogstashResponse describeLogstash(const string &InstanceId);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePipelineResponse
       */
      Models::DescribePipelineResponse describePipelineWithOptions(const string &InstanceId, const string &PipelineId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DescribePipelineResponse
       */
      Models::DescribePipelineResponse describePipeline(const string &InstanceId, const string &PipelineId);

      /**
       * @summary Queries the management configurations of pipelines in a Logstash cluster.
       *
       * @param request DescribePipelineManagementConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePipelineManagementConfigResponse
       */
      Models::DescribePipelineManagementConfigResponse describePipelineManagementConfigWithOptions(const string &InstanceId, const Models::DescribePipelineManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the management configurations of pipelines in a Logstash cluster.
       *
       * @param request DescribePipelineManagementConfigRequest
       * @return DescribePipelineManagementConfigResponse
       */
      Models::DescribePipelineManagementConfigResponse describePipelineManagementConfig(const string &InstanceId, const Models::DescribePipelineManagementConfigRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary 查看备份设置
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotSettingResponse
       */
      Models::DescribeSnapshotSettingResponse describeSnapshotSettingWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看备份设置
       *
       * @return DescribeSnapshotSettingResponse
       */
      Models::DescribeSnapshotSettingResponse describeSnapshotSetting(const string &InstanceId);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplatesWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplates(const string &InstanceId);

      /**
       * @summary Queries the configurations of the X-Pack Monitoring feature of a Logstash cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeXpackMonitorConfigResponse
       */
      Models::DescribeXpackMonitorConfigResponse describeXpackMonitorConfigWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the X-Pack Monitoring feature of a Logstash cluster.
       *
       * @return DescribeXpackMonitorConfigResponse
       */
      Models::DescribeXpackMonitorConfigResponse describeXpackMonitorConfig(const string &InstanceId);

      /**
       * @summary 触发ES实例智能诊断
       *
       * @param request DiagnoseInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DiagnoseInstanceResponse
       */
      Models::DiagnoseInstanceResponse diagnoseInstanceWithOptions(const string &InstanceId, const Models::DiagnoseInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 触发ES实例智能诊断
       *
       * @param request DiagnoseInstanceRequest
       * @return DiagnoseInstanceResponse
       */
      Models::DiagnoseInstanceResponse diagnoseInstance(const string &InstanceId, const Models::DiagnoseInstanceRequest &request);

      /**
       * @summary 关闭kibana私网
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableKibanaPvlNetworkResponse
       */
      Models::DisableKibanaPvlNetworkResponse disableKibanaPvlNetworkWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭kibana私网
       *
       * @return DisableKibanaPvlNetworkResponse
       */
      Models::DisableKibanaPvlNetworkResponse disableKibanaPvlNetwork(const string &InstanceId);

      /**
       * @summary 开启v3 kibana私网
       *
       * @param request EnableKibanaPvlNetworkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableKibanaPvlNetworkResponse
       */
      Models::EnableKibanaPvlNetworkResponse enableKibanaPvlNetworkWithOptions(const string &InstanceId, const Models::EnableKibanaPvlNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启v3 kibana私网
       *
       * @param request EnableKibanaPvlNetworkRequest
       * @return EnableKibanaPvlNetworkResponse
       */
      Models::EnableKibanaPvlNetworkResponse enableKibanaPvlNetwork(const string &InstanceId, const Models::EnableKibanaPvlNetworkRequest &request);

      /**
       * @summary Queries the estimated time that is required to restart a Logstash cluster.
       *
       * @param request EstimatedLogstashRestartTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EstimatedLogstashRestartTimeResponse
       */
      Models::EstimatedLogstashRestartTimeResponse estimatedLogstashRestartTimeWithOptions(const string &InstanceId, const Models::EstimatedLogstashRestartTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the estimated time that is required to restart a Logstash cluster.
       *
       * @param request EstimatedLogstashRestartTimeRequest
       * @return EstimatedLogstashRestartTimeResponse
       */
      Models::EstimatedLogstashRestartTimeResponse estimatedLogstashRestartTime(const string &InstanceId, const Models::EstimatedLogstashRestartTimeRequest &request);

      /**
       * @summary Queries the estimated time that is required to restart an Elasticsearch cluster.
       *
       * @param request EstimatedRestartTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EstimatedRestartTimeResponse
       */
      Models::EstimatedRestartTimeResponse estimatedRestartTimeWithOptions(const string &InstanceId, const Models::EstimatedRestartTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the estimated time that is required to restart an Elasticsearch cluster.
       *
       * @param request EstimatedRestartTimeRequest
       * @return EstimatedRestartTimeResponse
       */
      Models::EstimatedRestartTimeResponse estimatedRestartTime(const string &InstanceId, const Models::EstimatedRestartTimeRequest &request);

      /**
       * @summary Call GetClusterDataInformation to obtain the data information about the cluster.
       *
       * @param request GetClusterDataInformationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterDataInformationResponse
       */
      Models::GetClusterDataInformationResponse getClusterDataInformationWithOptions(const Models::GetClusterDataInformationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call GetClusterDataInformation to obtain the data information about the cluster.
       *
       * @param request GetClusterDataInformationRequest
       * @return GetClusterDataInformationResponse
       */
      Models::GetClusterDataInformationResponse getClusterDataInformation(const Models::GetClusterDataInformationRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetElastictaskResponse
       */
      Models::GetElastictaskResponse getElastictaskWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return GetElastictaskResponse
       */
      Models::GetElastictaskResponse getElastictask(const string &InstanceId);

      /**
       * @summary GetEmonAlarmRecordStatisticsDistribute
       *
       * @param request GetEmonAlarmRecordStatisticsDistributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEmonAlarmRecordStatisticsDistributeResponse
       */
      Models::GetEmonAlarmRecordStatisticsDistributeResponse getEmonAlarmRecordStatisticsDistributeWithOptions(const Models::GetEmonAlarmRecordStatisticsDistributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetEmonAlarmRecordStatisticsDistribute
       *
       * @param request GetEmonAlarmRecordStatisticsDistributeRequest
       * @return GetEmonAlarmRecordStatisticsDistributeResponse
       */
      Models::GetEmonAlarmRecordStatisticsDistributeResponse getEmonAlarmRecordStatisticsDistribute(const Models::GetEmonAlarmRecordStatisticsDistributeRequest &request);

      /**
       * @summary 获取高级监控报警自定义Grafana监控报警项
       *
       * @param request GetEmonGrafanaAlertsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEmonGrafanaAlertsResponse
       */
      Models::GetEmonGrafanaAlertsResponse getEmonGrafanaAlertsWithOptions(const string &ProjectId, const Models::GetEmonGrafanaAlertsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取高级监控报警自定义Grafana监控报警项
       *
       * @param request GetEmonGrafanaAlertsRequest
       * @return GetEmonGrafanaAlertsResponse
       */
      Models::GetEmonGrafanaAlertsResponse getEmonGrafanaAlerts(const string &ProjectId, const Models::GetEmonGrafanaAlertsRequest &request);

      /**
       * @summary 获取高级监控报警自定义Grafana监控大盘列表
       *
       * @param request GetEmonGrafanaDashboardsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEmonGrafanaDashboardsResponse
       */
      Models::GetEmonGrafanaDashboardsResponse getEmonGrafanaDashboardsWithOptions(const string &ProjectId, const Models::GetEmonGrafanaDashboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取高级监控报警自定义Grafana监控大盘列表
       *
       * @param request GetEmonGrafanaDashboardsRequest
       * @return GetEmonGrafanaDashboardsResponse
       */
      Models::GetEmonGrafanaDashboardsResponse getEmonGrafanaDashboards(const string &ProjectId, const Models::GetEmonGrafanaDashboardsRequest &request);

      /**
       * @summary GetEmonMonitorData
       *
       * @param request GetEmonMonitorDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEmonMonitorDataResponse
       */
      Models::GetEmonMonitorDataResponse getEmonMonitorDataWithOptions(const string &ProjectId, const Models::GetEmonMonitorDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetEmonMonitorData
       *
       * @param request GetEmonMonitorDataRequest
       * @return GetEmonMonitorDataResponse
       */
      Models::GetEmonMonitorDataResponse getEmonMonitorData(const string &ProjectId, const Models::GetEmonMonitorDataRequest &request);

      /**
       * @summary 统计OpenStore实例的存储容量和使用情况
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpenStoreUsageResponse
       */
      Models::GetOpenStoreUsageResponse getOpenStoreUsageWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 统计OpenStore实例的存储容量和使用情况
       *
       * @return GetOpenStoreUsageResponse
       */
      Models::GetOpenStoreUsageResponse getOpenStoreUsage(const string &InstanceId);

      /**
       * @summary The maximum number of nodes.
       *
       * @param request GetRegionConfigurationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegionConfigurationResponse
       */
      Models::GetRegionConfigurationResponse getRegionConfigurationWithOptions(const Models::GetRegionConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The maximum number of nodes.
       *
       * @param request GetRegionConfigurationRequest
       * @return GetRegionConfigurationResponse
       */
      Models::GetRegionConfigurationResponse getRegionConfiguration(const Models::GetRegionConfigurationRequest &request);

      /**
       * @summary 实例区域商品化配置
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegionalInstanceConfigResponse
       */
      Models::GetRegionalInstanceConfigResponse getRegionalInstanceConfigWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例区域商品化配置
       *
       * @return GetRegionalInstanceConfigResponse
       */
      Models::GetRegionalInstanceConfigResponse getRegionalInstanceConfig();

      /**
       * @summary ES集群可缩容节点
       *
       * @param request GetSuggestShrinkableNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSuggestShrinkableNodesResponse
       */
      Models::GetSuggestShrinkableNodesResponse getSuggestShrinkableNodesWithOptions(const string &InstanceId, const Models::GetSuggestShrinkableNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ES集群可缩容节点
       *
       * @param request GetSuggestShrinkableNodesRequest
       * @return GetSuggestShrinkableNodesResponse
       */
      Models::GetSuggestShrinkableNodesResponse getSuggestShrinkableNodes(const string &InstanceId, const Models::GetSuggestShrinkableNodesRequest &request);

      /**
       * @summary 获取可数据迁移节点
       *
       * @param request GetTransferableNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTransferableNodesResponse
       */
      Models::GetTransferableNodesResponse getTransferableNodesWithOptions(const string &InstanceId, const Models::GetTransferableNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取可数据迁移节点
       *
       * @param request GetTransferableNodesRequest
       * @return GetTransferableNodesResponse
       */
      Models::GetTransferableNodesResponse getTransferableNodes(const string &InstanceId, const Models::GetTransferableNodesRequest &request);

      /**
       * @summary Creates a service-linked role.
       *
       * @description > Before you perform auto scaling for a cluster at the China site (aliyun.com) or you use shippers to collect logs, you must create a service-linked role.
       *
       * @param request InitializeOperationRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeOperationRoleResponse
       */
      Models::InitializeOperationRoleResponse initializeOperationRoleWithOptions(const Models::InitializeOperationRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role.
       *
       * @description > Before you perform auto scaling for a cluster at the China site (aliyun.com) or you use shippers to collect logs, you must create a service-linked role.
       *
       * @param request InitializeOperationRoleRequest
       * @return InitializeOperationRoleResponse
       */
      Models::InitializeOperationRoleResponse initializeOperationRole(const Models::InitializeOperationRoleRequest &request);

      /**
       * @summary Installs ES-operator for a Container Service for Kubernetes (ACK) cluster.
       *
       * @description > Before you install a shipper for an ACK cluster, you must call this operation to install ES-operator for the cluster.
       *
       * @param request InstallAckOperatorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAckOperatorResponse
       */
      Models::InstallAckOperatorResponse installAckOperatorWithOptions(const string &ClusterId, const Models::InstallAckOperatorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs ES-operator for a Container Service for Kubernetes (ACK) cluster.
       *
       * @description > Before you install a shipper for an ACK cluster, you must call this operation to install ES-operator for the cluster.
       *
       * @param request InstallAckOperatorRequest
       * @return InstallAckOperatorResponse
       */
      Models::InstallAckOperatorResponse installAckOperator(const string &ClusterId, const Models::InstallAckOperatorRequest &request);

      /**
       * @summary Call InstallKibanaSystemPlugin to install the Kibana plug-in. The Kibana specification must be 2-Core 4 GB or higher.
       *
       * @param request InstallKibanaSystemPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallKibanaSystemPluginResponse
       */
      Models::InstallKibanaSystemPluginResponse installKibanaSystemPluginWithOptions(const string &InstanceId, const Models::InstallKibanaSystemPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call InstallKibanaSystemPlugin to install the Kibana plug-in. The Kibana specification must be 2-Core 4 GB or higher.
       *
       * @param request InstallKibanaSystemPluginRequest
       * @return InstallKibanaSystemPluginResponse
       */
      Models::InstallKibanaSystemPluginResponse installKibanaSystemPlugin(const string &InstanceId, const Models::InstallKibanaSystemPluginRequest &request);

      /**
       * @summary The returned data also contains **Headers** parameters, indicating that header information is returned.
       *
       * @description ls-cn-oew1qbgl\\*\\*\\*\\*
       *
       * @param request InstallLogstashSystemPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallLogstashSystemPluginResponse
       */
      Models::InstallLogstashSystemPluginResponse installLogstashSystemPluginWithOptions(const string &InstanceId, const Models::InstallLogstashSystemPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The returned data also contains **Headers** parameters, indicating that header information is returned.
       *
       * @description ls-cn-oew1qbgl\\*\\*\\*\\*
       *
       * @param request InstallLogstashSystemPluginRequest
       * @return InstallLogstashSystemPluginResponse
       */
      Models::InstallLogstashSystemPluginResponse installLogstashSystemPlugin(const string &InstanceId, const Models::InstallLogstashSystemPluginRequest &request);

      /**
       * @summary Call InstallSystemPlugin to install a system preset plug-in.
       *
       * @param request InstallSystemPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallSystemPluginResponse
       */
      Models::InstallSystemPluginResponse installSystemPluginWithOptions(const string &InstanceId, const Models::InstallSystemPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call InstallSystemPlugin to install a system preset plug-in.
       *
       * @param request InstallSystemPluginRequest
       * @return InstallSystemPluginResponse
       */
      Models::InstallSystemPluginResponse installSystemPlugin(const string &InstanceId, const Models::InstallSystemPluginRequest &request);

      /**
       * @summary Installs custom plug-ins that are uploaded to the Elasticsearch console.
       *
       * @param request InstallUserPluginsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallUserPluginsResponse
       */
      Models::InstallUserPluginsResponse installUserPluginsWithOptions(const string &InstanceId, const Models::InstallUserPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs custom plug-ins that are uploaded to the Elasticsearch console.
       *
       * @param request InstallUserPluginsRequest
       * @return InstallUserPluginsResponse
       */
      Models::InstallUserPluginsResponse installUserPlugins(const string &InstanceId, const Models::InstallUserPluginsRequest &request);

      /**
       * @param request InterruptElasticsearchTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InterruptElasticsearchTaskResponse
       */
      Models::InterruptElasticsearchTaskResponse interruptElasticsearchTaskWithOptions(const string &InstanceId, const Models::InterruptElasticsearchTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request InterruptElasticsearchTaskRequest
       * @return InterruptElasticsearchTaskResponse
       */
      Models::InterruptElasticsearchTaskResponse interruptElasticsearchTask(const string &InstanceId, const Models::InterruptElasticsearchTaskRequest &request);

      /**
       * @summary After the task is suspended, the Logstash cluster is in the suspended state.
       *
       * @param request InterruptLogstashTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InterruptLogstashTaskResponse
       */
      Models::InterruptLogstashTaskResponse interruptLogstashTaskWithOptions(const string &InstanceId, const Models::InterruptLogstashTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After the task is suspended, the Logstash cluster is in the suspended state.
       *
       * @param request InterruptLogstashTaskRequest
       * @return InterruptLogstashTaskResponse
       */
      Models::InterruptLogstashTaskResponse interruptLogstashTask(const string &InstanceId, const Models::InterruptLogstashTaskRequest &request);

      /**
       * @summary Queries a list of Container Service for Kubernetes (ACK) clusters.
       *
       * @param request ListAckClustersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAckClustersResponse
       */
      Models::ListAckClustersResponse listAckClustersWithOptions(const Models::ListAckClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Container Service for Kubernetes (ACK) clusters.
       *
       * @param request ListAckClustersRequest
       * @return ListAckClustersResponse
       */
      Models::ListAckClustersResponse listAckClusters(const Models::ListAckClustersRequest &request);

      /**
       * @summary Queries all namespaces in a specified Container Service for Kubernetes (ACK) cluster.
       *
       * @description > When you install a shipper on an ACK cluster, you must specify a namespace. You can call this operation to query all namespaces in the ACK cluster, and select a namespace based on your business requirements.
       *
       * @param request ListAckNamespacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAckNamespacesResponse
       */
      Models::ListAckNamespacesResponse listAckNamespacesWithOptions(const string &ClusterId, const Models::ListAckNamespacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all namespaces in a specified Container Service for Kubernetes (ACK) cluster.
       *
       * @description > When you install a shipper on an ACK cluster, you must specify a namespace. You can call this operation to query all namespaces in the ACK cluster, and select a namespace based on your business requirements.
       *
       * @param request ListAckNamespacesRequest
       * @return ListAckNamespacesResponse
       */
      Models::ListAckNamespacesResponse listAckNamespaces(const string &ClusterId, const Models::ListAckNamespacesRequest &request);

      /**
       * @summary 变更记录 变更详情
       *
       * @param request ListActionRecordsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListActionRecordsResponse
       */
      Models::ListActionRecordsResponse listActionRecordsWithOptions(const string &InstanceId, const Models::ListActionRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变更记录 变更详情
       *
       * @param request ListActionRecordsRequest
       * @return ListActionRecordsResponse
       */
      Models::ListActionRecordsResponse listActionRecords(const string &InstanceId, const Models::ListActionRecordsRequest &request);

      /**
       * @summary es-cn-tl32cpgwa002l\\*\\*\\*\\*
       *
       * @param request ListAllNodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllNodeResponse
       */
      Models::ListAllNodeResponse listAllNodeWithOptions(const string &InstanceId, const Models::ListAllNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary es-cn-tl32cpgwa002l\\*\\*\\*\\*
       *
       * @param request ListAllNodeRequest
       * @return ListAllNodeResponse
       */
      Models::ListAllNodeResponse listAllNode(const string &InstanceId, const Models::ListAllNodeRequest &request);

      /**
       * @summary 实例可添加的OSS引用仓库
       *
       * @param request ListAlternativeSnapshotReposRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlternativeSnapshotReposResponse
       */
      Models::ListAlternativeSnapshotReposResponse listAlternativeSnapshotReposWithOptions(const string &InstanceId, const Models::ListAlternativeSnapshotReposRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例可添加的OSS引用仓库
       *
       * @param request ListAlternativeSnapshotReposRequest
       * @return ListAlternativeSnapshotReposResponse
       */
      Models::ListAlternativeSnapshotReposResponse listAlternativeSnapshotRepos(const string &InstanceId, const Models::ListAlternativeSnapshotReposRequest &request);

      /**
       * @summary Queries the Elasticsearch clusters that can be associated with a Logstash cluster when you configure the X-Pack Monitoring feature for the Logstash cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableEsInstanceIdsResponse
       */
      Models::ListAvailableEsInstanceIdsResponse listAvailableEsInstanceIdsWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Elasticsearch clusters that can be associated with a Logstash cluster when you configure the X-Pack Monitoring feature for the Logstash cluster.
       *
       * @return ListAvailableEsInstanceIdsResponse
       */
      Models::ListAvailableEsInstanceIdsResponse listAvailableEsInstanceIds(const string &InstanceId);

      /**
       * @summary Queries shippers.
       *
       * @param request ListCollectorsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCollectorsResponse
       */
      Models::ListCollectorsResponse listCollectorsWithOptions(const Models::ListCollectorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries shippers.
       *
       * @param request ListCollectorsRequest
       * @return ListCollectorsResponse
       */
      Models::ListCollectorsResponse listCollectors(const Models::ListCollectorsRequest &request);

      /**
       * @summary ES集群组合索引列表
       *
       * @param request ListComponentIndicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComponentIndicesResponse
       */
      Models::ListComponentIndicesResponse listComponentIndicesWithOptions(const string &InstanceId, const Models::ListComponentIndicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ES集群组合索引列表
       *
       * @param request ListComponentIndicesRequest
       * @return ListComponentIndicesResponse
       */
      Models::ListComponentIndicesResponse listComponentIndices(const string &InstanceId, const Models::ListComponentIndicesRequest &request);

      /**
       * @summary 获取与当前实例进行网络互通的实例列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectedClustersResponse
       */
      Models::ListConnectedClustersResponse listConnectedClustersWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取与当前实例进行网络互通的实例列表
       *
       * @return ListConnectedClustersResponse
       */
      Models::ListConnectedClustersResponse listConnectedClusters(const string &InstanceId);

      /**
       * @summary 查询数据流
       *
       * @param request ListDataStreamsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataStreamsResponse
       */
      Models::ListDataStreamsResponse listDataStreamsWithOptions(const string &InstanceId, const Models::ListDataStreamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据流
       *
       * @param request ListDataStreamsRequest
       * @return ListDataStreamsResponse
       */
      Models::ListDataStreamsResponse listDataStreams(const string &InstanceId, const Models::ListDataStreamsRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataTasksResponse
       */
      Models::ListDataTasksResponse listDataTasksWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ListDataTasksResponse
       */
      Models::ListDataTasksResponse listDataTasks(const string &InstanceId);

      /**
       * @summary Queries the default configuration files of shippers.
       *
       * @param request ListDefaultCollectorConfigurationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDefaultCollectorConfigurationsResponse
       */
      Models::ListDefaultCollectorConfigurationsResponse listDefaultCollectorConfigurationsWithOptions(const Models::ListDefaultCollectorConfigurationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default configuration files of shippers.
       *
       * @param request ListDefaultCollectorConfigurationsRequest
       * @return ListDefaultCollectorConfigurationsResponse
       */
      Models::ListDefaultCollectorConfigurationsResponse listDefaultCollectorConfigurations(const Models::ListDefaultCollectorConfigurationsRequest &request);

      /**
       * @summary ListDeprecatedTemplates
       *
       * @param request ListDeprecatedTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeprecatedTemplatesResponse
       */
      Models::ListDeprecatedTemplatesResponse listDeprecatedTemplatesWithOptions(const string &InstanceId, const Models::ListDeprecatedTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListDeprecatedTemplates
       *
       * @param request ListDeprecatedTemplatesRequest
       * @return ListDeprecatedTemplatesResponse
       */
      Models::ListDeprecatedTemplatesResponse listDeprecatedTemplates(const string &InstanceId, const Models::ListDeprecatedTemplatesRequest &request);

      /**
       * @summary Queries the indexes for health diagnosis performed on an Elasticsearch cluster.
       *
       * @param request ListDiagnoseIndicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiagnoseIndicesResponse
       */
      Models::ListDiagnoseIndicesResponse listDiagnoseIndicesWithOptions(const string &InstanceId, const Models::ListDiagnoseIndicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the indexes for health diagnosis performed on an Elasticsearch cluster.
       *
       * @param request ListDiagnoseIndicesRequest
       * @return ListDiagnoseIndicesResponse
       */
      Models::ListDiagnoseIndicesResponse listDiagnoseIndices(const string &InstanceId, const Models::ListDiagnoseIndicesRequest &request);

      /**
       * @summary 获取集群诊断报告列表
       *
       * @param request ListDiagnoseReportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiagnoseReportResponse
       */
      Models::ListDiagnoseReportResponse listDiagnoseReportWithOptions(const string &InstanceId, const Models::ListDiagnoseReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取集群诊断报告列表
       *
       * @param request ListDiagnoseReportRequest
       * @return ListDiagnoseReportResponse
       */
      Models::ListDiagnoseReportResponse listDiagnoseReport(const string &InstanceId, const Models::ListDiagnoseReportRequest &request);

      /**
       * @summary Queries the IDs of the historical intelligent O&M reports of an Elasticsearch cluster.
       *
       * @param request ListDiagnoseReportIdsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiagnoseReportIdsResponse
       */
      Models::ListDiagnoseReportIdsResponse listDiagnoseReportIdsWithOptions(const string &InstanceId, const Models::ListDiagnoseReportIdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IDs of the historical intelligent O&M reports of an Elasticsearch cluster.
       *
       * @param request ListDiagnoseReportIdsRequest
       * @return ListDiagnoseReportIdsResponse
       */
      Models::ListDiagnoseReportIdsResponse listDiagnoseReportIds(const string &InstanceId, const Models::ListDiagnoseReportIdsRequest &request);

      /**
       * @summary The diagnostic item is used to check whether data write requests of a cluster are accumulated. If data write requests are accumulated, a bulk rejection occurs. This may cause data loss and severely consume system resources.
       *
       * @param request ListDiagnosisItemsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiagnosisItemsResponse
       */
      Models::ListDiagnosisItemsResponse listDiagnosisItemsWithOptions(const Models::ListDiagnosisItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The diagnostic item is used to check whether data write requests of a cluster are accumulated. If data write requests are accumulated, a bulk rejection occurs. This may cause data loss and severely consume system resources.
       *
       * @param request ListDiagnosisItemsRequest
       * @return ListDiagnosisItemsResponse
       */
      Models::ListDiagnosisItemsResponse listDiagnosisItems(const Models::ListDiagnosisItemsRequest &request);

      /**
       * @param request ListDictInformationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDictInformationResponse
       */
      Models::ListDictInformationResponse listDictInformationWithOptions(const string &InstanceId, const Models::ListDictInformationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListDictInformationRequest
       * @return ListDictInformationResponse
       */
      Models::ListDictInformationResponse listDictInformation(const string &InstanceId, const Models::ListDictInformationRequest &request);

      /**
       * @summary Queries the details of a specified type of dictionary.
       *
       * @param request ListDictsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDictsResponse
       */
      Models::ListDictsResponse listDictsWithOptions(const string &InstanceId, const Models::ListDictsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified type of dictionary.
       *
       * @param request ListDictsRequest
       * @return ListDictsResponse
       */
      Models::ListDictsResponse listDicts(const string &InstanceId, const Models::ListDictsRequest &request);

      /**
       * @summary 查询ecs实例
       *
       * @description **Important** To call this operation, you must create the Aliyun Elasticsearch AccessingOOSRole and the system service role AliyunOOSAccessingECS 4ESRole to Elasticsearch the service account to obtain the ECS access permissions of the primary account. For more information, see [Collect ECS service logs](https://help.aliyun.com/document_detail/146446.html).
       *
       * @param request ListEcsInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEcsInstancesResponse
       */
      Models::ListEcsInstancesResponse listEcsInstancesWithOptions(const Models::ListEcsInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询ecs实例
       *
       * @description **Important** To call this operation, you must create the Aliyun Elasticsearch AccessingOOSRole and the system service role AliyunOOSAccessingECS 4ESRole to Elasticsearch the service account to obtain the ECS access permissions of the primary account. For more information, see [Collect ECS service logs](https://help.aliyun.com/document_detail/146446.html).
       *
       * @param request ListEcsInstancesRequest
       * @return ListEcsInstancesResponse
       */
      Models::ListEcsInstancesResponse listEcsInstances(const Models::ListEcsInstancesRequest &request);

      /**
       * @summary Queries the driver files of a Logstash cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExtendfilesResponse
       */
      Models::ListExtendfilesResponse listExtendfilesWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the driver files of a Logstash cluster.
       *
       * @return ListExtendfilesResponse
       */
      Models::ListExtendfilesResponse listExtendfiles(const string &InstanceId);

      /**
       * @param request ListILMPoliciesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListILMPoliciesResponse
       */
      Models::ListILMPoliciesResponse listILMPoliciesWithOptions(const string &InstanceId, const Models::ListILMPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListILMPoliciesRequest
       * @return ListILMPoliciesResponse
       */
      Models::ListILMPoliciesResponse listILMPolicies(const string &InstanceId, const Models::ListILMPoliciesRequest &request);

      /**
       * @param request ListIndexTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndexTemplatesResponse
       */
      Models::ListIndexTemplatesResponse listIndexTemplatesWithOptions(const string &InstanceId, const Models::ListIndexTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListIndexTemplatesRequest
       * @return ListIndexTemplatesResponse
       */
      Models::ListIndexTemplatesResponse listIndexTemplates(const string &InstanceId, const Models::ListIndexTemplatesRequest &request);

      /**
       * @summary 查询Elasticsearch实例列表
       *
       * @param request ListInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstanceWithOptions(const Models::ListInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Elasticsearch实例列表
       *
       * @param request ListInstanceRequest
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstance(const Models::ListInstanceRequest &request);

      /**
       * @summary 集群触发的硬件运维事件列表
       *
       * @param tmpReq ListInstanceHistoryEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceHistoryEventsResponse
       */
      Models::ListInstanceHistoryEventsResponse listInstanceHistoryEventsWithOptions(const Models::ListInstanceHistoryEventsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 集群触发的硬件运维事件列表
       *
       * @param request ListInstanceHistoryEventsRequest
       * @return ListInstanceHistoryEventsResponse
       */
      Models::ListInstanceHistoryEventsResponse listInstanceHistoryEvents(const Models::ListInstanceHistoryEventsRequest &request);

      /**
       * @summary 获取当前实例先特定的索引列表
       *
       * @param request ListInstanceIndicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceIndicesResponse
       */
      Models::ListInstanceIndicesResponse listInstanceIndicesWithOptions(const string &InstanceId, const Models::ListInstanceIndicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取当前实例先特定的索引列表
       *
       * @param request ListInstanceIndicesRequest
       * @return ListInstanceIndicesResponse
       */
      Models::ListInstanceIndicesResponse listInstanceIndices(const string &InstanceId, const Models::ListInstanceIndicesRequest &request);

      /**
       * @summary Queries a list of Kibana plug-ins.
       *
       * @param request ListKibanaPluginsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKibanaPluginsResponse
       */
      Models::ListKibanaPluginsResponse listKibanaPluginsWithOptions(const string &InstanceId, const Models::ListKibanaPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Kibana plug-ins.
       *
       * @param request ListKibanaPluginsRequest
       * @return ListKibanaPluginsResponse
       */
      Models::ListKibanaPluginsResponse listKibanaPlugins(const string &InstanceId, const Models::ListKibanaPluginsRequest &request);

      /**
       * @summary 查询kibana私网连接信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKibanaPvlNetworkResponse
       */
      Models::ListKibanaPvlNetworkResponse listKibanaPvlNetworkWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询kibana私网连接信息
       *
       * @return ListKibanaPvlNetworkResponse
       */
      Models::ListKibanaPvlNetworkResponse listKibanaPvlNetwork(const string &InstanceId);

      /**
       * @summary Logstash集群列表
       *
       * @param request ListLogstashRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogstashResponse
       */
      Models::ListLogstashResponse listLogstashWithOptions(const Models::ListLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Logstash集群列表
       *
       * @param request ListLogstashRequest
       * @return ListLogstashResponse
       */
      Models::ListLogstashResponse listLogstash(const Models::ListLogstashRequest &request);

      /**
       * @summary 获取Logstash日志
       *
       * @param request ListLogstashLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogstashLogResponse
       */
      Models::ListLogstashLogResponse listLogstashLogWithOptions(const string &InstanceId, const Models::ListLogstashLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Logstash日志
       *
       * @param request ListLogstashLogRequest
       * @return ListLogstashLogResponse
       */
      Models::ListLogstashLogResponse listLogstashLog(const string &InstanceId, const Models::ListLogstashLogRequest &request);

      /**
       * @summary Logstash插件列表
       *
       * @param request ListLogstashPluginsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogstashPluginsResponse
       */
      Models::ListLogstashPluginsResponse listLogstashPluginsWithOptions(const string &InstanceId, const Models::ListLogstashPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Logstash插件列表
       *
       * @param request ListLogstashPluginsRequest
       * @return ListLogstashPluginsResponse
       */
      Models::ListLogstashPluginsResponse listLogstashPlugins(const string &InstanceId, const Models::ListLogstashPluginsRequest &request);

      /**
       * @summary Queries the statuses of Elastic Compute Service (ECS) instances on which a shipper is installed.
       *
       * @param request ListNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const string &ResId, const Models::ListNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statuses of Elastic Compute Service (ECS) instances on which a shipper is installed.
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const string &ResId, const Models::ListNodesRequest &request);

      /**
       * @summary ListPipeline
       *
       * @param request ListPipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineResponse
       */
      Models::ListPipelineResponse listPipelineWithOptions(const string &InstanceId, const Models::ListPipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListPipeline
       *
       * @param request ListPipelineRequest
       * @return ListPipelineResponse
       */
      Models::ListPipelineResponse listPipeline(const string &InstanceId, const Models::ListPipelineRequest &request);

      /**
       * @summary The error message returned.
       *
       * @param request ListPipelineIdsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineIdsResponse
       */
      Models::ListPipelineIdsResponse listPipelineIdsWithOptions(const string &InstanceId, const Models::ListPipelineIdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The error message returned.
       *
       * @param request ListPipelineIdsRequest
       * @return ListPipelineIdsResponse
       */
      Models::ListPipelineIdsResponse listPipelineIds(const string &InstanceId, const Models::ListPipelineIdsRequest &request);

      /**
       * @summary ES系统插件列表
       *
       * @param request ListPluginsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginsResponse
       */
      Models::ListPluginsResponse listPluginsWithOptions(const string &InstanceId, const Models::ListPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ES系统插件列表
       *
       * @param request ListPluginsRequest
       * @return ListPluginsResponse
       */
      Models::ListPluginsResponse listPlugins(const string &InstanceId, const Models::ListPluginsRequest &request);

      /**
       * @summary 查看Elasticsearch集群各种类型的日志
       *
       * @param request ListSearchLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchLogResponse
       */
      Models::ListSearchLogResponse listSearchLogWithOptions(const string &InstanceId, const Models::ListSearchLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看Elasticsearch集群各种类型的日志
       *
       * @param request ListSearchLogRequest
       * @return ListSearchLogResponse
       */
      Models::ListSearchLogResponse listSearchLog(const string &InstanceId, const Models::ListSearchLogRequest &request);

      /**
       * @summary Queries the information about shards that are being restored or shards that are restored. By default, this operation returns only the information about shards that are being restored after you call this operation.
       *
       * @description > The restoration of a shard is a process of synchronizing data from a primary shard to a replica shard. After the restoration is complete, the replica shard is available for data searches.
       *
       * @param request ListShardRecoveriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListShardRecoveriesResponse
       */
      Models::ListShardRecoveriesResponse listShardRecoveriesWithOptions(const string &InstanceId, const Models::ListShardRecoveriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about shards that are being restored or shards that are restored. By default, this operation returns only the information about shards that are being restored after you call this operation.
       *
       * @description > The restoration of a shard is a process of synchronizing data from a primary shard to a replica shard. After the restoration is complete, the replica shard is available for data searches.
       *
       * @param request ListShardRecoveriesRequest
       * @return ListShardRecoveriesResponse
       */
      Models::ListShardRecoveriesResponse listShardRecoveries(const string &InstanceId, const Models::ListShardRecoveriesRequest &request);

      /**
       * @summary 获取跨集群索引仓库列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSnapshotReposByInstanceIdResponse
       */
      Models::ListSnapshotReposByInstanceIdResponse listSnapshotReposByInstanceIdWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取跨集群索引仓库列表
       *
       * @return ListSnapshotReposByInstanceIdResponse
       */
      Models::ListSnapshotReposByInstanceIdResponse listSnapshotReposByInstanceId(const string &InstanceId);

      /**
       * @summary 查看资源和标签关系
       *
       * @param request ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看资源和标签关系
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 查看所有已常见的标签
       *
       * @param request ListTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTagsWithOptions(const Models::ListTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看所有已常见的标签
       *
       * @param request ListTagsRequest
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTags(const Models::ListTagsRequest &request);

      /**
       * @summary Queries the statuses of endpoints in the virtual private cloud (VPC) within the Elasticsearch service account.
       *
       * @param request ListVpcEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcEndpointsResponse
       */
      Models::ListVpcEndpointsResponse listVpcEndpointsWithOptions(const string &InstanceId, const Models::ListVpcEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statuses of endpoints in the virtual private cloud (VPC) within the Elasticsearch service account.
       *
       * @param request ListVpcEndpointsRequest
       * @return ListVpcEndpointsResponse
       */
      Models::ListVpcEndpointsResponse listVpcEndpoints(const string &InstanceId, const Models::ListVpcEndpointsRequest &request);

      /**
       * @summary Call the MigrateToOtherZone to migrate the nodes in the specified zone to the destination zone.
       *
       * @description If the specifications in your zone are insufficient, you can upgrade your instance to nodes in another zone. Before calling this interface, you must ensure that:
       * *   The error message returned because the current account is in a zone that has sufficient resources.
       *     After migrating nodes with current specifications to another zone, you need to manually [upgrade cluster](https://help.aliyun.com/document_detail/96650.html) because the cluster will not be upgraded during the migration process. Therefore, select a zone with sufficient resources to avoid cluster upgrade failure. We recommend that you choose new zones that are in lower alphabetical order. For example, for cn-hangzhou-e and cn-hangzhou-h zones, choose cn-hangzhou-h first.
       * *   The cluster is in the healthy state.
       *     Can be passed`  GET _cat/health?v  `command to view the health status of the cluster.
       *
       * @param request MigrateToOtherZoneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZoneWithOptions(const string &InstanceId, const Models::MigrateToOtherZoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the MigrateToOtherZone to migrate the nodes in the specified zone to the destination zone.
       *
       * @description If the specifications in your zone are insufficient, you can upgrade your instance to nodes in another zone. Before calling this interface, you must ensure that:
       * *   The error message returned because the current account is in a zone that has sufficient resources.
       *     After migrating nodes with current specifications to another zone, you need to manually [upgrade cluster](https://help.aliyun.com/document_detail/96650.html) because the cluster will not be upgraded during the migration process. Therefore, select a zone with sufficient resources to avoid cluster upgrade failure. We recommend that you choose new zones that are in lower alphabetical order. For example, for cn-hangzhou-e and cn-hangzhou-h zones, choose cn-hangzhou-h first.
       * *   The cluster is in the healthy state.
       *     Can be passed`  GET _cat/health?v  `command to view the health status of the cluster.
       *
       * @param request MigrateToOtherZoneRequest
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZone(const string &InstanceId, const Models::MigrateToOtherZoneRequest &request);

      /**
       * @summary Changes the Elastic Compute Service (ECS) instances on which a shipper is installed.
       *
       * @param request ModifyDeployMachineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeployMachineResponse
       */
      Models::ModifyDeployMachineResponse modifyDeployMachineWithOptions(const string &ResId, const Models::ModifyDeployMachineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the Elastic Compute Service (ECS) instances on which a shipper is installed.
       *
       * @param request ModifyDeployMachineRequest
       * @return ModifyDeployMachineResponse
       */
      Models::ModifyDeployMachineResponse modifyDeployMachine(const string &ResId, const Models::ModifyDeployMachineRequest &request);

      /**
       * @param request ModifyElastictaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElastictaskResponse
       */
      Models::ModifyElastictaskResponse modifyElastictaskWithOptions(const string &InstanceId, const Models::ModifyElastictaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyElastictaskRequest
       * @return ModifyElastictaskResponse
       */
      Models::ModifyElastictaskResponse modifyElastictask(const string &InstanceId, const Models::ModifyElastictaskRequest &request);

      /**
       * @summary ## RequestBody
       * You must also specify the following parameters in the RequestBody parameter to specify the maintenance window information.  
       * | Parameter | Type | Required | Example | Description |
       * | --------- | ---- | -------- | ------- | ----------- |
       * | maintainStartTime | String | No | 02:00Z | The start time of the maintenance window. Specify the time in the HH:mmZ format. The time must be in UTC. |
       * | maintainEndTime | String | No | 06:00Z | The end time of the maintenance window. Specify the time in the HH:mmZ format. The time must be displayed in UTC. |
       * | openMaintainTime | boolean | Yes | true | Specifies whether to enable the maintenance window feature. Only **true** is supported, indicating that the feature is enabled. |
       * Examples: 
       * ```
       * {
       *     "openMaintainTime": true,
       *     "maintainStartTime": "03:00Z",
       *     "maintainEndTime": "04:00Z"
       * }
       * ```
       *
       * @description es-cn-n6w1o1x0w001c\\*\\*\\*\\*
       *
       * @param request ModifyInstanceMaintainTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceMaintainTimeResponse
       */
      Models::ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTimeWithOptions(const string &InstanceId, const Models::ModifyInstanceMaintainTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ## RequestBody
       * You must also specify the following parameters in the RequestBody parameter to specify the maintenance window information.  
       * | Parameter | Type | Required | Example | Description |
       * | --------- | ---- | -------- | ------- | ----------- |
       * | maintainStartTime | String | No | 02:00Z | The start time of the maintenance window. Specify the time in the HH:mmZ format. The time must be in UTC. |
       * | maintainEndTime | String | No | 06:00Z | The end time of the maintenance window. Specify the time in the HH:mmZ format. The time must be displayed in UTC. |
       * | openMaintainTime | boolean | Yes | true | Specifies whether to enable the maintenance window feature. Only **true** is supported, indicating that the feature is enabled. |
       * Examples: 
       * ```
       * {
       *     "openMaintainTime": true,
       *     "maintainStartTime": "03:00Z",
       *     "maintainEndTime": "04:00Z"
       * }
       * ```
       *
       * @description es-cn-n6w1o1x0w001c\\*\\*\\*\\*
       *
       * @param request ModifyInstanceMaintainTimeRequest
       * @return ModifyInstanceMaintainTimeResponse
       */
      Models::ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTime(const string &InstanceId, const Models::ModifyInstanceMaintainTimeRequest &request);

      /**
       * @summary >  If you want to add an IP address whitelist, you can set the modifyMode parameter only to Cover. If you set this parameter to Delete or Append, you can only update an IP address whitelist.
       * *   If you set the modifyMode parameter to Cover and leave the ips parameter empty, the system deletes the specified whitelist. If the whitelist specified by using the groupName parameter does not exist, the system creates such a whitelist.
       * *   If you set the modifyMode parameter to Delete, at least one IP address must be retained for the specified whitelist.
       * *   If you set the modifyMode parameter to Append, you must make sure that the specified whitelist exists. Otherwise, the system reports the NotFound error.
       *
       * @description The ID of the cluster.
       *
       * @param request ModifyWhiteIpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWhiteIpsResponse
       */
      Models::ModifyWhiteIpsResponse modifyWhiteIpsWithOptions(const string &InstanceId, const Models::ModifyWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary >  If you want to add an IP address whitelist, you can set the modifyMode parameter only to Cover. If you set this parameter to Delete or Append, you can only update an IP address whitelist.
       * *   If you set the modifyMode parameter to Cover and leave the ips parameter empty, the system deletes the specified whitelist. If the whitelist specified by using the groupName parameter does not exist, the system creates such a whitelist.
       * *   If you set the modifyMode parameter to Delete, at least one IP address must be retained for the specified whitelist.
       * *   If you set the modifyMode parameter to Append, you must make sure that the specified whitelist exists. Otherwise, the system reports the NotFound error.
       *
       * @description The ID of the cluster.
       *
       * @param request ModifyWhiteIpsRequest
       * @return ModifyWhiteIpsResponse
       */
      Models::ModifyWhiteIpsResponse modifyWhiteIps(const string &InstanceId, const Models::ModifyWhiteIpsRequest &request);

      /**
       * @summary Migrates an Elasticsearch cluster to a specified resource group.
       *
       * @param request MoveResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const string &InstanceId, const Models::MoveResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates an Elasticsearch cluster to a specified resource group.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const string &InstanceId, const Models::MoveResourceGroupRequest &request);

      /**
       * @param request OpenDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenDiagnosisResponse
       */
      Models::OpenDiagnosisResponse openDiagnosisWithOptions(const string &InstanceId, const Models::OpenDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request OpenDiagnosisRequest
       * @return OpenDiagnosisResponse
       */
      Models::OpenDiagnosisResponse openDiagnosis(const string &InstanceId, const Models::OpenDiagnosisRequest &request);

      /**
       * @description >  To ensure data security, we recommend that you enable HTTPS.
       *
       * @param request OpenHttpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenHttpsResponse
       */
      Models::OpenHttpsResponse openHttpsWithOptions(const string &InstanceId, const Models::OpenHttpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description >  To ensure data security, we recommend that you enable HTTPS.
       *
       * @param request OpenHttpsRequest
       * @return OpenHttpsResponse
       */
      Models::OpenHttpsResponse openHttps(const string &InstanceId, const Models::OpenHttpsRequest &request);

      /**
       * @summary PostEmonTryAlarmRule
       *
       * @param request PostEmonTryAlarmRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostEmonTryAlarmRuleResponse
       */
      Models::PostEmonTryAlarmRuleResponse postEmonTryAlarmRuleWithOptions(const string &ProjectId, const string &AlarmGroupId, const Models::PostEmonTryAlarmRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary PostEmonTryAlarmRule
       *
       * @param request PostEmonTryAlarmRuleRequest
       * @return PostEmonTryAlarmRuleResponse
       */
      Models::PostEmonTryAlarmRuleResponse postEmonTryAlarmRule(const string &ProjectId, const string &AlarmGroupId, const Models::PostEmonTryAlarmRuleRequest &request);

      /**
       * @param request RecommendTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecommendTemplatesResponse
       */
      Models::RecommendTemplatesResponse recommendTemplatesWithOptions(const string &InstanceId, const Models::RecommendTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecommendTemplatesRequest
       * @return RecommendTemplatesResponse
       */
      Models::RecommendTemplatesResponse recommendTemplates(const string &InstanceId, const Models::RecommendTemplatesRequest &request);

      /**
       * @summary Installs a shipper that failed to be installed when you create the shipper.
       *
       * @param request ReinstallCollectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReinstallCollectorResponse
       */
      Models::ReinstallCollectorResponse reinstallCollectorWithOptions(const string &ResId, const Models::ReinstallCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs a shipper that failed to be installed when you create the shipper.
       *
       * @param request ReinstallCollectorRequest
       * @return ReinstallCollectorResponse
       */
      Models::ReinstallCollectorResponse reinstallCollector(const string &ResId, const Models::ReinstallCollectorRequest &request);

      /**
       * @summary Call RenewInstance to renew a subscription instance.
       *
       * @param request RenewInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const string &InstanceId, const Models::RenewInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call RenewInstance to renew a subscription instance.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const string &InstanceId, const Models::RenewInstanceRequest &request);

      /**
       * @summary Renews a Logstash cluster.
       *
       * @param request RenewLogstashRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewLogstashResponse
       */
      Models::RenewLogstashResponse renewLogstashWithOptions(const string &InstanceId, const Models::RenewLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a Logstash cluster.
       *
       * @param request RenewLogstashRequest
       * @return RenewLogstashResponse
       */
      Models::RenewLogstashResponse renewLogstash(const string &InstanceId, const Models::RenewLogstashRequest &request);

      /**
       * @summary Restarts a shipper.
       *
       * @param request RestartCollectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartCollectorResponse
       */
      Models::RestartCollectorResponse restartCollectorWithOptions(const string &ResId, const Models::RestartCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a shipper.
       *
       * @param request RestartCollectorRequest
       * @return RestartCollectorResponse
       */
      Models::RestartCollectorResponse restartCollector(const string &ResId, const Models::RestartCollectorRequest &request);

      /**
       * @summary You can call this operation to restart a specified Elasticsearch instance.
       *
       * @description >  After the instance is restarted, the instance enters the activating state. After the instance is restarted, its status changes to active. Alibaba Cloud Elasticsearch supports restarting a single node. Restarting a node can be divided into normal restart and blue-green restart.
       *
       * @param request RestartInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const string &InstanceId, const Models::RestartInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to restart a specified Elasticsearch instance.
       *
       * @description >  After the instance is restarted, the instance enters the activating state. After the instance is restarted, its status changes to active. Alibaba Cloud Elasticsearch supports restarting a single node. Restarting a node can be divided into normal restart and blue-green restart.
       *
       * @param request RestartInstanceRequest
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const string &InstanceId, const Models::RestartInstanceRequest &request);

      /**
       * @summary 重启Logstash集群
       *
       * @param request RestartLogstashRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartLogstashResponse
       */
      Models::RestartLogstashResponse restartLogstashWithOptions(const string &InstanceId, const Models::RestartLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启Logstash集群
       *
       * @param request RestartLogstashRequest
       * @return RestartLogstashResponse
       */
      Models::RestartLogstashResponse restartLogstash(const string &InstanceId, const Models::RestartLogstashRequest &request);

      /**
       * @param request ResumeElasticsearchTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeElasticsearchTaskResponse
       */
      Models::ResumeElasticsearchTaskResponse resumeElasticsearchTaskWithOptions(const string &InstanceId, const Models::ResumeElasticsearchTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ResumeElasticsearchTaskRequest
       * @return ResumeElasticsearchTaskResponse
       */
      Models::ResumeElasticsearchTaskResponse resumeElasticsearchTask(const string &InstanceId, const Models::ResumeElasticsearchTaskRequest &request);

      /**
       * @summary Resumes a change task of a Logstash cluster. After the task is resumed, the Logstash cluster is in the activating state.
       *
       * @param request ResumeLogstashTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeLogstashTaskResponse
       */
      Models::ResumeLogstashTaskResponse resumeLogstashTaskWithOptions(const string &InstanceId, const Models::ResumeLogstashTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a change task of a Logstash cluster. After the task is resumed, the Logstash cluster is in the activating state.
       *
       * @param request ResumeLogstashTaskRequest
       * @return ResumeLogstashTaskResponse
       */
      Models::ResumeLogstashTaskResponse resumeLogstashTask(const string &InstanceId, const Models::ResumeLogstashTaskRequest &request);

      /**
       * @summary 滚动数据流，生成新索引
       *
       * @param request RolloverDataStreamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RolloverDataStreamResponse
       */
      Models::RolloverDataStreamResponse rolloverDataStreamWithOptions(const string &InstanceId, const string &DataStream, const Models::RolloverDataStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 滚动数据流，生成新索引
       *
       * @param request RolloverDataStreamRequest
       * @return RolloverDataStreamResponse
       */
      Models::RolloverDataStreamResponse rolloverDataStream(const string &InstanceId, const string &DataStream, const Models::RolloverDataStreamRequest &request);

      /**
       * @summary Runs pipelines in a Logstash cluster.
       *
       * @param request RunPipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunPipelinesResponse
       */
      Models::RunPipelinesResponse runPipelinesWithOptions(const string &InstanceId, const Models::RunPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs pipelines in a Logstash cluster.
       *
       * @param request RunPipelinesRequest
       * @return RunPipelinesResponse
       */
      Models::RunPipelinesResponse runPipelines(const string &InstanceId, const Models::RunPipelinesRequest &request);

      /**
       * @summary ES集群缩节点
       *
       * @param request ShrinkNodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ShrinkNodeResponse
       */
      Models::ShrinkNodeResponse shrinkNodeWithOptions(const string &InstanceId, const Models::ShrinkNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ES集群缩节点
       *
       * @param request ShrinkNodeRequest
       * @return ShrinkNodeResponse
       */
      Models::ShrinkNodeResponse shrinkNode(const string &InstanceId, const Models::ShrinkNodeRequest &request);

      /**
       * @summary Starts a collector to collect data.
       *
       * @param request StartCollectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCollectorResponse
       */
      Models::StartCollectorResponse startCollectorWithOptions(const string &ResId, const Models::StartCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a collector to collect data.
       *
       * @param request StartCollectorRequest
       * @return StartCollectorResponse
       */
      Models::StartCollectorResponse startCollector(const string &ResId, const Models::StartCollectorRequest &request);

      /**
       * @summary Stops a shipper.
       *
       * @param request StopCollectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCollectorResponse
       */
      Models::StopCollectorResponse stopCollectorWithOptions(const string &ResId, const Models::StopCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a shipper.
       *
       * @param request StopCollectorRequest
       * @return StopCollectorResponse
       */
      Models::StopCollectorResponse stopCollector(const string &ResId, const Models::StopCollectorRequest &request);

      /**
       * @summary Stops pipelines in a Logstash cluster.
       *
       * @param request StopPipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopPipelinesResponse
       */
      Models::StopPipelinesResponse stopPipelinesWithOptions(const string &InstanceId, const Models::StopPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops pipelines in a Logstash cluster.
       *
       * @param request StopPipelinesRequest
       * @return StopPipelinesResponse
       */
      Models::StopPipelinesResponse stopPipelines(const string &InstanceId, const Models::StopPipelinesRequest &request);

      /**
       * @summary The information about the clusters and tags.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The information about the clusters and tags.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 缩节点，数据迁移
       *
       * @param request TransferNodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferNodeResponse
       */
      Models::TransferNodeResponse transferNodeWithOptions(const string &InstanceId, const Models::TransferNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 缩节点，数据迁移
       *
       * @param request TransferNodeRequest
       * @return TransferNodeResponse
       */
      Models::TransferNodeResponse transferNode(const string &InstanceId, const Models::TransferNodeRequest &request);

      /**
       * @summary 开关ES集群及Kibana节点公私网访问
       *
       * @param request TriggerNetworkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerNetworkResponse
       */
      Models::TriggerNetworkResponse triggerNetworkWithOptions(const string &InstanceId, const Models::TriggerNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开关ES集群及Kibana节点公私网访问
       *
       * @param request TriggerNetworkRequest
       * @return TriggerNetworkResponse
       */
      Models::TriggerNetworkResponse triggerNetwork(const string &InstanceId, const Models::TriggerNetworkRequest &request);

      /**
       * @summary 可用区关机
       *
       * @param request TurnOffZoneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TurnOffZoneResponse
       */
      Models::TurnOffZoneResponse turnOffZoneWithOptions(const string &instanceId, const Models::TurnOffZoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 可用区关机
       *
       * @param request TurnOffZoneRequest
       * @return TurnOffZoneResponse
       */
      Models::TurnOffZoneResponse turnOffZone(const string &instanceId, const Models::TurnOffZoneRequest &request);

      /**
       * @summary 可用区开机
       *
       * @param request TurnOnZoneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TurnOnZoneResponse
       */
      Models::TurnOnZoneResponse turnOnZoneWithOptions(const string &instanceId, const Models::TurnOnZoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 可用区开机
       *
       * @param request TurnOnZoneRequest
       * @return TurnOnZoneResponse
       */
      Models::TurnOnZoneResponse turnOnZone(const string &instanceId, const Models::TurnOnZoneRequest &request);

      /**
       * @summary Call the UninstallKibanaPlugin to uninstall the Kibana plug-in.
       *
       * @param request UninstallKibanaPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallKibanaPluginResponse
       */
      Models::UninstallKibanaPluginResponse uninstallKibanaPluginWithOptions(const string &InstanceId, const Models::UninstallKibanaPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the UninstallKibanaPlugin to uninstall the Kibana plug-in.
       *
       * @param request UninstallKibanaPluginRequest
       * @return UninstallKibanaPluginResponse
       */
      Models::UninstallKibanaPluginResponse uninstallKibanaPlugin(const string &InstanceId, const Models::UninstallKibanaPluginRequest &request);

      /**
       * @summary 卸载Logstash实例已安装的插件
       *
       * @param request UninstallLogstashPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallLogstashPluginResponse
       */
      Models::UninstallLogstashPluginResponse uninstallLogstashPluginWithOptions(const string &InstanceId, const Models::UninstallLogstashPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 卸载Logstash实例已安装的插件
       *
       * @param request UninstallLogstashPluginRequest
       * @return UninstallLogstashPluginResponse
       */
      Models::UninstallLogstashPluginResponse uninstallLogstashPlugin(const string &InstanceId, const Models::UninstallLogstashPluginRequest &request);

      /**
       * @summary Call UninstallPlugin to uninstall the preset plug-in.
       *
       * @param request UninstallPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallPluginResponse
       */
      Models::UninstallPluginResponse uninstallPluginWithOptions(const string &InstanceId, const Models::UninstallPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call UninstallPlugin to uninstall the preset plug-in.
       *
       * @param request UninstallPluginRequest
       * @return UninstallPluginResponse
       */
      Models::UninstallPluginResponse uninstallPlugin(const string &InstanceId, const Models::UninstallPluginRequest &request);

      /**
       * @summary 删除ES集群实例的用户可见标签
       *
       * @description When you call this operation, take note of the following items:
       * *   You can only delete user tags.
       * > User labels are manually added to instances by users. A system Tag is a tag that Alibaba Cloud services add to instances. System labels are divided into visible labels and invisible labels.
       * *   If you delete a resource tag relationship that is not associated with any resources, you must delete the tags.
       *
       * @param request UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除ES集群实例的用户可见标签
       *
       * @description When you call this operation, take note of the following items:
       * *   You can only delete user tags.
       * > User labels are manually added to instances by users. A system Tag is a tag that Alibaba Cloud services add to instances. System labels are divided into visible labels and invisible labels.
       * *   If you delete a resource tag relationship that is not associated with any resources, you must delete the tags.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary 修改ES集群密码
       *
       * @description 5A2CFF0E-5718-45B5-9D4D-70B3FF\\*\\*\\*\\*
       *
       * @param request UpdateAdminPasswordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAdminPasswordResponse
       */
      Models::UpdateAdminPasswordResponse updateAdminPasswordWithOptions(const string &InstanceId, const Models::UpdateAdminPasswordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改ES集群密码
       *
       * @description 5A2CFF0E-5718-45B5-9D4D-70B3FF\\*\\*\\*\\*
       *
       * @param request UpdateAdminPasswordRequest
       * @return UpdateAdminPasswordResponse
       */
      Models::UpdateAdminPasswordResponse updateAdminPassword(const string &InstanceId, const Models::UpdateAdminPasswordRequest &request);

      /**
       * @summary Call UpdateAdvancedSetting to change the garbage collector configuration for the specified instance.
       *
       * @param request UpdateAdvancedSettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAdvancedSettingResponse
       */
      Models::UpdateAdvancedSettingResponse updateAdvancedSettingWithOptions(const string &InstanceId, const Models::UpdateAdvancedSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call UpdateAdvancedSetting to change the garbage collector configuration for the specified instance.
       *
       * @param request UpdateAdvancedSettingRequest
       * @return UpdateAdvancedSettingResponse
       */
      Models::UpdateAdvancedSettingResponse updateAdvancedSetting(const string &InstanceId, const Models::UpdateAdvancedSettingRequest &request);

      /**
       * @summary Updates the dictionary file of the analysis-aliws plug-in.
       *
       * @description Before you call this operation, take note of the following items:
       * *   Elasticsearch V5.X clusters do not support the analysis-aliws plug-in.
       * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
       * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
       *
       * @param request UpdateAliwsDictRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAliwsDictResponse
       */
      Models::UpdateAliwsDictResponse updateAliwsDictWithOptions(const string &InstanceId, const Models::UpdateAliwsDictRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the dictionary file of the analysis-aliws plug-in.
       *
       * @description Before you call this operation, take note of the following items:
       * *   Elasticsearch V5.X clusters do not support the analysis-aliws plug-in.
       * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
       * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
       *
       * @param request UpdateAliwsDictRequest
       * @return UpdateAliwsDictResponse
       */
      Models::UpdateAliwsDictResponse updateAliwsDict(const string &InstanceId, const Models::UpdateAliwsDictRequest &request);

      /**
       * @deprecated OpenAPI UpdateBlackIps is deprecated
       *
       * @summary 修改ES实例访问黑名单，已废弃
       *
       * @param request UpdateBlackIpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBlackIpsResponse
       */
      Models::UpdateBlackIpsResponse updateBlackIpsWithOptions(const string &InstanceId, const Models::UpdateBlackIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateBlackIps is deprecated
       *
       * @summary 修改ES实例访问黑名单，已废弃
       *
       * @param request UpdateBlackIpsRequest
       * @return UpdateBlackIpsResponse
       */
      Models::UpdateBlackIpsResponse updateBlackIps(const string &InstanceId, const Models::UpdateBlackIpsRequest &request);

      /**
       * @summary Updates the configurations of a shipper.
       *
       * @param request UpdateCollectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCollectorResponse
       */
      Models::UpdateCollectorResponse updateCollectorWithOptions(const string &ResId, const Models::UpdateCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of a shipper.
       *
       * @param request UpdateCollectorRequest
       * @return UpdateCollectorResponse
       */
      Models::UpdateCollectorResponse updateCollector(const string &ResId, const Models::UpdateCollectorRequest &request);

      /**
       * @summary Changes the name of a shipper.
       *
       * @param request UpdateCollectorNameRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCollectorNameResponse
       */
      Models::UpdateCollectorNameResponse updateCollectorNameWithOptions(const string &ResId, const Models::UpdateCollectorNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of a shipper.
       *
       * @param request UpdateCollectorNameRequest
       * @return UpdateCollectorNameResponse
       */
      Models::UpdateCollectorNameResponse updateCollectorName(const string &ResId, const Models::UpdateCollectorNameRequest &request);

      /**
       * @summary 修改ES集群动态索引
       *
       * @param request UpdateComponentIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComponentIndexResponse
       */
      Models::UpdateComponentIndexResponse updateComponentIndexWithOptions(const string &InstanceId, const string &name, const Models::UpdateComponentIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改ES集群动态索引
       *
       * @param request UpdateComponentIndexRequest
       * @return UpdateComponentIndexResponse
       */
      Models::UpdateComponentIndexResponse updateComponentIndex(const string &InstanceId, const string &name, const Models::UpdateComponentIndexRequest &request);

      /**
       * @summary 修改elasticsearch实例名称名称
       *
       * @param request UpdateDescriptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDescriptionResponse
       */
      Models::UpdateDescriptionResponse updateDescriptionWithOptions(const string &InstanceId, const Models::UpdateDescriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改elasticsearch实例名称名称
       *
       * @param request UpdateDescriptionRequest
       * @return UpdateDescriptionResponse
       */
      Models::UpdateDescriptionResponse updateDescription(const string &InstanceId, const Models::UpdateDescriptionRequest &request);

      /**
       * @summary Call UpdateDiagnosisSettings to update the instance of intelligent operation&maintenance (O&M) scene settings.
       *
       * @param request UpdateDiagnosisSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDiagnosisSettingsResponse
       */
      Models::UpdateDiagnosisSettingsResponse updateDiagnosisSettingsWithOptions(const string &InstanceId, const Models::UpdateDiagnosisSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call UpdateDiagnosisSettings to update the instance of intelligent operation&maintenance (O&M) scene settings.
       *
       * @param request UpdateDiagnosisSettingsRequest
       * @return UpdateDiagnosisSettingsResponse
       */
      Models::UpdateDiagnosisSettingsResponse updateDiagnosisSettings(const string &InstanceId, const Models::UpdateDiagnosisSettingsRequest &request);

      /**
       * @summary Updates a dictionary of an Elasticsearch cluster.
       *
       * @description Before you call this operation, take note of the following items:
       * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
       * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
       *
       * @param request UpdateDictRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDictResponse
       */
      Models::UpdateDictResponse updateDictWithOptions(const string &InstanceId, const Models::UpdateDictRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a dictionary of an Elasticsearch cluster.
       *
       * @description Before you call this operation, take note of the following items:
       * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
       * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
       *
       * @param request UpdateDictRequest
       * @return UpdateDictResponse
       */
      Models::UpdateDictResponse updateDict(const string &InstanceId, const Models::UpdateDictRequest &request);

      /**
       * @summary 修改集群动态配置
       *
       * @param request UpdateDynamicSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDynamicSettingsResponse
       */
      Models::UpdateDynamicSettingsResponse updateDynamicSettingsWithOptions(const string &InstanceId, const Models::UpdateDynamicSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改集群动态配置
       *
       * @param request UpdateDynamicSettingsRequest
       * @return UpdateDynamicSettingsResponse
       */
      Models::UpdateDynamicSettingsResponse updateDynamicSettings(const string &InstanceId, const Models::UpdateDynamicSettingsRequest &request);

      /**
       * @param request UpdateExtendConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExtendConfigResponse
       */
      Models::UpdateExtendConfigResponse updateExtendConfigWithOptions(const string &InstanceId, const Models::UpdateExtendConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateExtendConfigRequest
       * @return UpdateExtendConfigResponse
       */
      Models::UpdateExtendConfigResponse updateExtendConfig(const string &InstanceId, const Models::UpdateExtendConfigRequest &request);

      /**
       * @summary Updates the driver files of a Logstash cluster.
       *
       * @description When you call this operation, take note of the following items: You can call this operation only to delete the driver files that are uploaded to a Logstash cluster in the Alibaba Cloud Management Console. You can add or modify driver files only in the Alibaba Cloud Management Console.
       *
       * @param request UpdateExtendfilesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExtendfilesResponse
       */
      Models::UpdateExtendfilesResponse updateExtendfilesWithOptions(const string &InstanceId, const Models::UpdateExtendfilesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the driver files of a Logstash cluster.
       *
       * @description When you call this operation, take note of the following items: You can call this operation only to delete the driver files that are uploaded to a Logstash cluster in the Alibaba Cloud Management Console. You can add or modify driver files only in the Alibaba Cloud Management Console.
       *
       * @param request UpdateExtendfilesRequest
       * @return UpdateExtendfilesResponse
       */
      Models::UpdateExtendfilesResponse updateExtendfiles(const string &InstanceId, const Models::UpdateExtendfilesRequest &request);

      /**
       * @summary Performs a rolling update for the IK dictionaries of an Elasticsearch cluster.
       *
       * @description Before you call this operation, take note of the following items:
       * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
       * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
       *
       * @param request UpdateHotIkDictsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHotIkDictsResponse
       */
      Models::UpdateHotIkDictsResponse updateHotIkDictsWithOptions(const string &InstanceId, const Models::UpdateHotIkDictsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a rolling update for the IK dictionaries of an Elasticsearch cluster.
       *
       * @description Before you call this operation, take note of the following items:
       * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
       * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
       *
       * @param request UpdateHotIkDictsRequest
       * @return UpdateHotIkDictsResponse
       */
      Models::UpdateHotIkDictsResponse updateHotIkDicts(const string &InstanceId, const Models::UpdateHotIkDictsRequest &request);

      /**
       * @summary 修改ES集群索引生命周期策略
       *
       * @param request UpdateILMPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateILMPolicyResponse
       */
      Models::UpdateILMPolicyResponse updateILMPolicyWithOptions(const string &InstanceId, const string &PolicyName, const Models::UpdateILMPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改ES集群索引生命周期策略
       *
       * @param request UpdateILMPolicyRequest
       * @return UpdateILMPolicyResponse
       */
      Models::UpdateILMPolicyResponse updateILMPolicy(const string &InstanceId, const string &PolicyName, const Models::UpdateILMPolicyRequest &request);

      /**
       * @summary 修改ES集群索引模版配置
       *
       * @param request UpdateIndexTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIndexTemplateResponse
       */
      Models::UpdateIndexTemplateResponse updateIndexTemplateWithOptions(const string &InstanceId, const string &IndexTemplate, const Models::UpdateIndexTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改ES集群索引模版配置
       *
       * @param request UpdateIndexTemplateRequest
       * @return UpdateIndexTemplateResponse
       */
      Models::UpdateIndexTemplateResponse updateIndexTemplate(const string &InstanceId, const string &IndexTemplate, const Models::UpdateIndexTemplateRequest &request);

      /**
       * @summary 修改ES集群节点配置
       *
       * @description es-cn-n6w1ptcb30009\\*\\*\\*\\*
       *
       * @param request UpdateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const string &InstanceId, const Models::UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改ES集群节点配置
       *
       * @description es-cn-n6w1ptcb30009\\*\\*\\*\\*
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const string &InstanceId, const Models::UpdateInstanceRequest &request);

      /**
       * @summary Call UpdateInstanceChargeType to change the billing method of a pay-as-you-go instance to subscription.
       *
       * @param request UpdateInstanceChargeTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceChargeTypeResponse
       */
      Models::UpdateInstanceChargeTypeResponse updateInstanceChargeTypeWithOptions(const string &InstanceId, const Models::UpdateInstanceChargeTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call UpdateInstanceChargeType to change the billing method of a pay-as-you-go instance to subscription.
       *
       * @param request UpdateInstanceChargeTypeRequest
       * @return UpdateInstanceChargeTypeResponse
       */
      Models::UpdateInstanceChargeTypeResponse updateInstanceChargeType(const string &InstanceId, const Models::UpdateInstanceChargeTypeRequest &request);

      /**
       * @summary Call UpdateInstanceSettings to update the YML configuration of a specified instance.
       *
       * @description When you call this operation, take note of the following items:
       * When the instance is in the activating, invalid, or inactive state, you cannot update the configuration.
       *
       * @param request UpdateInstanceSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceSettingsResponse
       */
      Models::UpdateInstanceSettingsResponse updateInstanceSettingsWithOptions(const string &InstanceId, const Models::UpdateInstanceSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call UpdateInstanceSettings to update the YML configuration of a specified instance.
       *
       * @description When you call this operation, take note of the following items:
       * When the instance is in the activating, invalid, or inactive state, you cannot update the configuration.
       *
       * @param request UpdateInstanceSettingsRequest
       * @return UpdateInstanceSettingsResponse
       */
      Models::UpdateInstanceSettingsResponse updateInstanceSettings(const string &InstanceId, const Models::UpdateInstanceSettingsRequest &request);

      /**
       * @summary 更新kibana私网链接
       *
       * @param request UpdateKibanaPvlNetworkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKibanaPvlNetworkResponse
       */
      Models::UpdateKibanaPvlNetworkResponse updateKibanaPvlNetworkWithOptions(const string &InstanceId, const Models::UpdateKibanaPvlNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新kibana私网链接
       *
       * @param request UpdateKibanaPvlNetworkRequest
       * @return UpdateKibanaPvlNetworkResponse
       */
      Models::UpdateKibanaPvlNetworkResponse updateKibanaPvlNetwork(const string &InstanceId, const Models::UpdateKibanaPvlNetworkRequest &request);

      /**
       * @summary Call UpdateKibanaSettings to modify the Kibana configuration. Currently, you can only modify the Kibana language configuration.
       *
       * @param request UpdateKibanaSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKibanaSettingsResponse
       */
      Models::UpdateKibanaSettingsResponse updateKibanaSettingsWithOptions(const string &InstanceId, const Models::UpdateKibanaSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call UpdateKibanaSettings to modify the Kibana configuration. Currently, you can only modify the Kibana language configuration.
       *
       * @param request UpdateKibanaSettingsRequest
       * @return UpdateKibanaSettingsResponse
       */
      Models::UpdateKibanaSettingsResponse updateKibanaSettings(const string &InstanceId, const Models::UpdateKibanaSettingsRequest &request);

      /**
       * @summary Updates an IP address whitelist for access to the Kibana console of a specified Elasticsearch cluster.
       *
       * @description *   Before you call this operation, you must make sure that the cluster is not in the activating, invalid, or inactive state.
       * *   You can update an IP address whitelist by using the following parameters:
       *     *   kibanaIPWhitelist
       *     *   modifyMode and whiteIpGroup
       * *   You cannot specify private IP addresses for public IP address whitelists and cannot specify public IP addresses for private IP address whitelists.
       *
       * @param request UpdateKibanaWhiteIpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKibanaWhiteIpsResponse
       */
      Models::UpdateKibanaWhiteIpsResponse updateKibanaWhiteIpsWithOptions(const string &InstanceId, const Models::UpdateKibanaWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an IP address whitelist for access to the Kibana console of a specified Elasticsearch cluster.
       *
       * @description *   Before you call this operation, you must make sure that the cluster is not in the activating, invalid, or inactive state.
       * *   You can update an IP address whitelist by using the following parameters:
       *     *   kibanaIPWhitelist
       *     *   modifyMode and whiteIpGroup
       * *   You cannot specify private IP addresses for public IP address whitelists and cannot specify public IP addresses for private IP address whitelists.
       *
       * @param request UpdateKibanaWhiteIpsRequest
       * @return UpdateKibanaWhiteIpsResponse
       */
      Models::UpdateKibanaWhiteIpsResponse updateKibanaWhiteIps(const string &InstanceId, const Models::UpdateKibanaWhiteIpsRequest &request);

      /**
       * @summary 修改Logstash节点规格磁盘配置
       *
       * @param request UpdateLogstashRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLogstashResponse
       */
      Models::UpdateLogstashResponse updateLogstashWithOptions(const string &InstanceId, const Models::UpdateLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改Logstash节点规格磁盘配置
       *
       * @param request UpdateLogstashRequest
       * @return UpdateLogstashResponse
       */
      Models::UpdateLogstashResponse updateLogstash(const string &InstanceId, const Models::UpdateLogstashRequest &request);

      /**
       * @summary Switches the billing method of a Logstash cluster from pay-as-you-go to subscription.
       *
       * @param request UpdateLogstashChargeTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLogstashChargeTypeResponse
       */
      Models::UpdateLogstashChargeTypeResponse updateLogstashChargeTypeWithOptions(const string &InstanceId, const Models::UpdateLogstashChargeTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the billing method of a Logstash cluster from pay-as-you-go to subscription.
       *
       * @param request UpdateLogstashChargeTypeRequest
       * @return UpdateLogstashChargeTypeResponse
       */
      Models::UpdateLogstashChargeTypeResponse updateLogstashChargeType(const string &InstanceId, const Models::UpdateLogstashChargeTypeRequest &request);

      /**
       * @summary Changes the name of a specified Logstash cluster.
       *
       * @description When you call this operation, take note of the following items: You cannot change the name of a cluster that is in the activating, invalid, or inactive state.
       *
       * @param request UpdateLogstashDescriptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLogstashDescriptionResponse
       */
      Models::UpdateLogstashDescriptionResponse updateLogstashDescriptionWithOptions(const string &InstanceId, const Models::UpdateLogstashDescriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of a specified Logstash cluster.
       *
       * @description When you call this operation, take note of the following items: You cannot change the name of a cluster that is in the activating, invalid, or inactive state.
       *
       * @param request UpdateLogstashDescriptionRequest
       * @return UpdateLogstashDescriptionResponse
       */
      Models::UpdateLogstashDescriptionResponse updateLogstashDescription(const string &InstanceId, const Models::UpdateLogstashDescriptionRequest &request);

      /**
       * @summary Updates the configuration of a specified Logstash cluster.
       *
       * @description When you call this operation, take note of the following items:
       * If the instance is in the Active (activating), Invalid (invalid), and Inactive (inactive) state, the information cannot be updated.
       *
       * @param request UpdateLogstashSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLogstashSettingsResponse
       */
      Models::UpdateLogstashSettingsResponse updateLogstashSettingsWithOptions(const string &InstanceId, const Models::UpdateLogstashSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified Logstash cluster.
       *
       * @description When you call this operation, take note of the following items:
       * If the instance is in the Active (activating), Invalid (invalid), and Inactive (inactive) state, the information cannot be updated.
       *
       * @param request UpdateLogstashSettingsRequest
       * @return UpdateLogstashSettingsResponse
       */
      Models::UpdateLogstashSettingsResponse updateLogstashSettings(const string &InstanceId, const Models::UpdateLogstashSettingsRequest &request);

      /**
       * @summary 修改Logstash管道配置
       *
       * @param request UpdatePipelineManagementConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineManagementConfigResponse
       */
      Models::UpdatePipelineManagementConfigResponse updatePipelineManagementConfigWithOptions(const string &InstanceId, const Models::UpdatePipelineManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改Logstash管道配置
       *
       * @param request UpdatePipelineManagementConfigRequest
       * @return UpdatePipelineManagementConfigResponse
       */
      Models::UpdatePipelineManagementConfigResponse updatePipelineManagementConfig(const string &InstanceId, const Models::UpdatePipelineManagementConfigRequest &request);

      /**
       * @summary Updates a pipeline of a Logstash cluster.
       *
       * @param request UpdatePipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelinesResponse
       */
      Models::UpdatePipelinesResponse updatePipelinesWithOptions(const string &InstanceId, const Models::UpdatePipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a pipeline of a Logstash cluster.
       *
       * @param request UpdatePipelinesRequest
       * @return UpdatePipelinesResponse
       */
      Models::UpdatePipelinesResponse updatePipelines(const string &InstanceId, const Models::UpdatePipelinesRequest &request);

      /**
       * @summary ## RequestBody
       * | Property | Type | Required | Example | Description |
       * | -------- | ---- | -------- | ------- | ----------- |
       * | privateNetworkIpWhiteList | List<String> | No | ["0.0.XX.XX","10.2.XX.XX","192.168.XX.XX/25"] | The list of IP address whitelists. This parameter is available if whiteIpGroup is left empty. The value of this parameter updates the IP address whitelist configurations in the Default whitelist group.  
       * You cannot configure both privateNetworkIpWhiteList and whiteIpGroup. |
       * | whiteIpGroup | Object | No |  | You can update the whitelist configurations of an instance by using a whitelist group. You can update only one whitelist group.  
       * You cannot configure both privateNetworkIpWhiteList and whiteIpGroup. |
       * | └ groupName | String | No | test_group_name | The group name of the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
       * | └ ips | List<String> | No | ["0.0.0.0", "10.2.XX.XX"] | The list of IP addresses in the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
       * > **Notice**  The addition and deletion of whitelist groups are implemented by calling modifyMode to Cover. Delete and Append cannot add or delete whitelist groups at the same time. You can only modify the IP address list in the whitelist group. Take note of the following items: - If the modifyMode parameter is set to Cover, the whitelist group is deleted if ips is empty. If groupName is not in the list of existing whitelist group names, a whitelist group is created.
       * - If the modifyMode parameter is set to Delete, you must retain at least one IP address for the deleted ips.
       * - If the modifyMode parameter is set to Append, make sure that the whitelist group name has been created. Otherwise, the NotFound error message appears.
       *
       * @description >  In the following returned example, only the parameters in the returned data list are guaranteed to be included, and the parameters not mentioned are for reference only. For more information about the parameters, see [ListInstance](https://help.aliyun.com/document_detail/142230.html). You cannot force a dependency in a program to get these parameters.
       *
       * @param request UpdatePrivateNetworkWhiteIpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrivateNetworkWhiteIpsResponse
       */
      Models::UpdatePrivateNetworkWhiteIpsResponse updatePrivateNetworkWhiteIpsWithOptions(const string &InstanceId, const Models::UpdatePrivateNetworkWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ## RequestBody
       * | Property | Type | Required | Example | Description |
       * | -------- | ---- | -------- | ------- | ----------- |
       * | privateNetworkIpWhiteList | List<String> | No | ["0.0.XX.XX","10.2.XX.XX","192.168.XX.XX/25"] | The list of IP address whitelists. This parameter is available if whiteIpGroup is left empty. The value of this parameter updates the IP address whitelist configurations in the Default whitelist group.  
       * You cannot configure both privateNetworkIpWhiteList and whiteIpGroup. |
       * | whiteIpGroup | Object | No |  | You can update the whitelist configurations of an instance by using a whitelist group. You can update only one whitelist group.  
       * You cannot configure both privateNetworkIpWhiteList and whiteIpGroup. |
       * | └ groupName | String | No | test_group_name | The group name of the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
       * | └ ips | List<String> | No | ["0.0.0.0", "10.2.XX.XX"] | The list of IP addresses in the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
       * > **Notice**  The addition and deletion of whitelist groups are implemented by calling modifyMode to Cover. Delete and Append cannot add or delete whitelist groups at the same time. You can only modify the IP address list in the whitelist group. Take note of the following items: - If the modifyMode parameter is set to Cover, the whitelist group is deleted if ips is empty. If groupName is not in the list of existing whitelist group names, a whitelist group is created.
       * - If the modifyMode parameter is set to Delete, you must retain at least one IP address for the deleted ips.
       * - If the modifyMode parameter is set to Append, make sure that the whitelist group name has been created. Otherwise, the NotFound error message appears.
       *
       * @description >  In the following returned example, only the parameters in the returned data list are guaranteed to be included, and the parameters not mentioned are for reference only. For more information about the parameters, see [ListInstance](https://help.aliyun.com/document_detail/142230.html). You cannot force a dependency in a program to get these parameters.
       *
       * @param request UpdatePrivateNetworkWhiteIpsRequest
       * @return UpdatePrivateNetworkWhiteIpsResponse
       */
      Models::UpdatePrivateNetworkWhiteIpsResponse updatePrivateNetworkWhiteIps(const string &InstanceId, const Models::UpdatePrivateNetworkWhiteIpsRequest &request);

      /**
       * @summary Call UpdatePublicNetwork to open or close the public network address of the specified elasticsearch instance.
       *
       * @description When you call this operation, take note of the following items:
       * When the instance is in the activating, invalid, or inactive state, its configuration cannot be updated.
       *
       * @param request UpdatePublicNetworkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePublicNetworkResponse
       */
      Models::UpdatePublicNetworkResponse updatePublicNetworkWithOptions(const string &InstanceId, const Models::UpdatePublicNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call UpdatePublicNetwork to open or close the public network address of the specified elasticsearch instance.
       *
       * @description When you call this operation, take note of the following items:
       * When the instance is in the activating, invalid, or inactive state, its configuration cannot be updated.
       *
       * @param request UpdatePublicNetworkRequest
       * @return UpdatePublicNetworkResponse
       */
      Models::UpdatePublicNetworkResponse updatePublicNetwork(const string &InstanceId, const Models::UpdatePublicNetworkRequest &request);

      /**
       * @summary ## RequestBody
       * | Property | Type | Required | Example | Description |
       * | -------- | ---- | -------- | ------- | ----------- |
       * | publicIpWhitelist | List<String> | Yes | ["0.0.0.0/0","0.0.0.0/1"] | The list of IP address whitelists. This parameter is available if whiteIpGroup is left empty. The value of this parameter updates the IP address whitelist configurations in the Default whitelist group.  
       * You cannot configure both publicIpWhitelist and whiteIpGroup. |
       * | whiteIpGroup | Object | No |  | You can update the whitelist configurations of an instance by using a whitelist group. You can update only one whitelist group.  
       * You cannot configure both publicIpWhitelist and whiteIpGroup. |
       * | └ groupName | String | No | test_group_name | The group name of the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
       * | └ ips | List<String> | No | ["0.0.0.0", "10.2.XX.XX"] | The list of IP addresses in the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
       * > **Notice**  The addition and deletion of whitelist groups are implemented by calling modifyMode to Cover. Delete and Append cannot add or delete whitelist groups at the same time. You can only modify the IP address list in the whitelist group. Take note of the following items: - If the modifyMode parameter is set to Cover, the whitelist group is deleted if ips is empty. If groupName is not in the list of existing whitelist group names, a whitelist group is created.
       * - If the modifyMode parameter is set to Delete, you must retain at least one IP address for the deleted ips.
       * - If the modifyMode parameter is set to Append, make sure that the whitelist group name has been created. Otherwise, the NotFound error message appears.
       *
       * @description >  In the following example, only the parameters in the returned data list are guaranteed to be included. The parameters that are not mentioned are for reference only. For more information about the parameters, see [ListInstance](https://help.aliyun.com/document_detail/142230.html). You cannot force a dependency in a program to get these parameters.
       *
       * @param request UpdatePublicWhiteIpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePublicWhiteIpsResponse
       */
      Models::UpdatePublicWhiteIpsResponse updatePublicWhiteIpsWithOptions(const string &InstanceId, const Models::UpdatePublicWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ## RequestBody
       * | Property | Type | Required | Example | Description |
       * | -------- | ---- | -------- | ------- | ----------- |
       * | publicIpWhitelist | List<String> | Yes | ["0.0.0.0/0","0.0.0.0/1"] | The list of IP address whitelists. This parameter is available if whiteIpGroup is left empty. The value of this parameter updates the IP address whitelist configurations in the Default whitelist group.  
       * You cannot configure both publicIpWhitelist and whiteIpGroup. |
       * | whiteIpGroup | Object | No |  | You can update the whitelist configurations of an instance by using a whitelist group. You can update only one whitelist group.  
       * You cannot configure both publicIpWhitelist and whiteIpGroup. |
       * | └ groupName | String | No | test_group_name | The group name of the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
       * | └ ips | List<String> | No | ["0.0.0.0", "10.2.XX.XX"] | The list of IP addresses in the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
       * > **Notice**  The addition and deletion of whitelist groups are implemented by calling modifyMode to Cover. Delete and Append cannot add or delete whitelist groups at the same time. You can only modify the IP address list in the whitelist group. Take note of the following items: - If the modifyMode parameter is set to Cover, the whitelist group is deleted if ips is empty. If groupName is not in the list of existing whitelist group names, a whitelist group is created.
       * - If the modifyMode parameter is set to Delete, you must retain at least one IP address for the deleted ips.
       * - If the modifyMode parameter is set to Append, make sure that the whitelist group name has been created. Otherwise, the NotFound error message appears.
       *
       * @description >  In the following example, only the parameters in the returned data list are guaranteed to be included. The parameters that are not mentioned are for reference only. For more information about the parameters, see [ListInstance](https://help.aliyun.com/document_detail/142230.html). You cannot force a dependency in a program to get these parameters.
       *
       * @param request UpdatePublicWhiteIpsRequest
       * @return UpdatePublicWhiteIpsResponse
       */
      Models::UpdatePublicWhiteIpsResponse updatePublicWhiteIps(const string &InstanceId, const Models::UpdatePublicWhiteIpsRequest &request);

      /**
       * @summary 更改ES集群高可用策略
       *
       * @param request UpdateReadWritePolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateReadWritePolicyResponse
       */
      Models::UpdateReadWritePolicyResponse updateReadWritePolicyWithOptions(const string &InstanceId, const Models::UpdateReadWritePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更改ES集群高可用策略
       *
       * @param request UpdateReadWritePolicyRequest
       * @return UpdateReadWritePolicyResponse
       */
      Models::UpdateReadWritePolicyResponse updateReadWritePolicy(const string &InstanceId, const Models::UpdateReadWritePolicyRequest &request);

      /**
       * @summary Call UpdateSnapshotSetting to update the data backup configuration of the specified instance.
       *
       * @param request UpdateSnapshotSettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSnapshotSettingResponse
       */
      Models::UpdateSnapshotSettingResponse updateSnapshotSettingWithOptions(const string &InstanceId, const Models::UpdateSnapshotSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call UpdateSnapshotSetting to update the data backup configuration of the specified instance.
       *
       * @param request UpdateSnapshotSettingRequest
       * @return UpdateSnapshotSettingResponse
       */
      Models::UpdateSnapshotSettingResponse updateSnapshotSetting(const string &InstanceId, const Models::UpdateSnapshotSettingRequest &request);

      /**
       * @summary Updates the synonym dictionaries of an Elasticsearch cluster.
       *
       * @description Before you call this operation, take note of the following items:
       * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
       * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
       *
       * @param request UpdateSynonymsDictsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSynonymsDictsResponse
       */
      Models::UpdateSynonymsDictsResponse updateSynonymsDictsWithOptions(const string &InstanceId, const Models::UpdateSynonymsDictsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the synonym dictionaries of an Elasticsearch cluster.
       *
       * @description Before you call this operation, take note of the following items:
       * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
       * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
       *
       * @param request UpdateSynonymsDictsRequest
       * @return UpdateSynonymsDictsResponse
       */
      Models::UpdateSynonymsDictsResponse updateSynonymsDicts(const string &InstanceId, const Models::UpdateSynonymsDictsRequest &request);

      /**
       * @param request UpdateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplateWithOptions(const string &InstanceId, const string &TemplateName, const Models::UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const string &InstanceId, const string &TemplateName, const Models::UpdateTemplateRequest &request);

      /**
       * @summary >  If you want to add an IP address whitelist, you can set the modifyMode parameter only to Cover. If you set this parameter to Delete or Append, you can only update an IP address whitelist.
       * *   If you set the modifyMode parameter to Cover and leave the ips parameter empty, the system deletes the specified whitelist. If the whitelist specified by using the groupName parameter does not exist, the system creates such a whitelist.
       * *   If you set the modifyMode parameter to Delete, at least one IP address must be retained for the specified whitelist.
       * *   If you set the modifyMode parameter to Append, you must make sure that the specified whitelist exists. Otherwise, the system reports the NotFound error.
       *
       * @description > For more information about the parameters displayed in the following sample code but not provided in the preceding tables, see [ListInstance](https://help.aliyun.com/document_detail/142230.html). You cannot force your program to obtain these parameters.
       *
       * @param request UpdateWhiteIpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWhiteIpsResponse
       */
      Models::UpdateWhiteIpsResponse updateWhiteIpsWithOptions(const string &InstanceId, const Models::UpdateWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary >  If you want to add an IP address whitelist, you can set the modifyMode parameter only to Cover. If you set this parameter to Delete or Append, you can only update an IP address whitelist.
       * *   If you set the modifyMode parameter to Cover and leave the ips parameter empty, the system deletes the specified whitelist. If the whitelist specified by using the groupName parameter does not exist, the system creates such a whitelist.
       * *   If you set the modifyMode parameter to Delete, at least one IP address must be retained for the specified whitelist.
       * *   If you set the modifyMode parameter to Append, you must make sure that the specified whitelist exists. Otherwise, the system reports the NotFound error.
       *
       * @description > For more information about the parameters displayed in the following sample code but not provided in the preceding tables, see [ListInstance](https://help.aliyun.com/document_detail/142230.html). You cannot force your program to obtain these parameters.
       *
       * @param request UpdateWhiteIpsRequest
       * @return UpdateWhiteIpsResponse
       */
      Models::UpdateWhiteIpsResponse updateWhiteIps(const string &InstanceId, const Models::UpdateWhiteIpsRequest &request);

      /**
       * @summary 修改Logstash实例的X-Pack监控报警配置。
       *
       * @param request UpdateXpackMonitorConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateXpackMonitorConfigResponse
       */
      Models::UpdateXpackMonitorConfigResponse updateXpackMonitorConfigWithOptions(const string &InstanceId, const Models::UpdateXpackMonitorConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改Logstash实例的X-Pack监控报警配置。
       *
       * @param request UpdateXpackMonitorConfigRequest
       * @return UpdateXpackMonitorConfigResponse
       */
      Models::UpdateXpackMonitorConfigResponse updateXpackMonitorConfig(const string &InstanceId, const Models::UpdateXpackMonitorConfigRequest &request);

      /**
       * @summary ES集群版本升级
       *
       * @description 5A2CFF0E-5718-45B5-9D4D-70B3FF\\*\\*\\*\\*
       *
       * @param request UpgradeEngineVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeEngineVersionResponse
       */
      Models::UpgradeEngineVersionResponse upgradeEngineVersionWithOptions(const string &InstanceId, const Models::UpgradeEngineVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ES集群版本升级
       *
       * @description 5A2CFF0E-5718-45B5-9D4D-70B3FF\\*\\*\\*\\*
       *
       * @param request UpgradeEngineVersionRequest
       * @return UpgradeEngineVersionResponse
       */
      Models::UpgradeEngineVersionResponse upgradeEngineVersion(const string &InstanceId, const Models::UpgradeEngineVersionRequest &request);

      /**
       * @summary Tests the connectivity between a Logstash cluster and its associated Elasticsearch cluster when you configure the X-Pack Monitoring feature for the Logstash cluster.
       *
       * @description > Before you enable the X-Pack Monitoring feature for a Logstash cluster, you must associate the Logstash cluster with an Elasticsearch cluster. This way, you can view the monitoring data of the Logstash cluster in the Kibana console of the Elasticsearch cluster.
       *
       * @param request ValidateConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateConnectionResponse
       */
      Models::ValidateConnectionResponse validateConnectionWithOptions(const string &InstanceId, const Models::ValidateConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests the connectivity between a Logstash cluster and its associated Elasticsearch cluster when you configure the X-Pack Monitoring feature for the Logstash cluster.
       *
       * @description > Before you enable the X-Pack Monitoring feature for a Logstash cluster, you must associate the Logstash cluster with an Elasticsearch cluster. This way, you can view the monitoring data of the Logstash cluster in the Kibana console of the Elasticsearch cluster.
       *
       * @param request ValidateConnectionRequest
       * @return ValidateConnectionResponse
       */
      Models::ValidateConnectionResponse validateConnection(const string &InstanceId, const Models::ValidateConnectionRequest &request);

      /**
       * @summary 校验缩节点合法性
       *
       * @param request ValidateShrinkNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateShrinkNodesResponse
       */
      Models::ValidateShrinkNodesResponse validateShrinkNodesWithOptions(const string &InstanceId, const Models::ValidateShrinkNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验缩节点合法性
       *
       * @param request ValidateShrinkNodesRequest
       * @return ValidateShrinkNodesResponse
       */
      Models::ValidateShrinkNodesResponse validateShrinkNodes(const string &InstanceId, const Models::ValidateShrinkNodesRequest &request);

      /**
       * @param request ValidateSlrPermissionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateSlrPermissionResponse
       */
      Models::ValidateSlrPermissionResponse validateSlrPermissionWithOptions(const Models::ValidateSlrPermissionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ValidateSlrPermissionRequest
       * @return ValidateSlrPermissionResponse
       */
      Models::ValidateSlrPermissionResponse validateSlrPermission(const Models::ValidateSlrPermissionRequest &request);

      /**
       * @summary 缩节点校验数据迁移合法性
       *
       * @param request ValidateTransferableNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateTransferableNodesResponse
       */
      Models::ValidateTransferableNodesResponse validateTransferableNodesWithOptions(const string &InstanceId, const Models::ValidateTransferableNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 缩节点校验数据迁移合法性
       *
       * @param request ValidateTransferableNodesRequest
       * @return ValidateTransferableNodesResponse
       */
      Models::ValidateTransferableNodesResponse validateTransferableNodes(const string &InstanceId, const Models::ValidateTransferableNodesRequest &request);

      /**
       * @summary The configurations of dedicated master nodes.
       *
       * @description The configurations of warm nodes.
       *
       * @param request CreateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The configurations of dedicated master nodes.
       *
       * @description The configurations of warm nodes.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
