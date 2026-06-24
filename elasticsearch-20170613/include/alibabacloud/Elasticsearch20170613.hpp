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
       * @summary Resumes an offline zone. This operation is valid only for multi-zone instances.
       *
       * @param request ActivateZonesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateZonesResponse
       */
      Models::ActivateZonesResponse activateZonesWithOptions(const string &InstanceId, const Models::ActivateZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an offline zone. This operation is valid only for multi-zone instances.
       *
       * @param request ActivateZonesRequest
       * @return ActivateZonesResponse
       */
      Models::ActivateZonesResponse activateZones(const string &InstanceId, const Models::ActivateZonesRequest &request);

      /**
       * @summary Configures network connectivity to establish a connection between different instances.
       *
       * @param request AddConnectableClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddConnectableClusterResponse
       */
      Models::AddConnectableClusterResponse addConnectableClusterWithOptions(const string &InstanceId, const Models::AddConnectableClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures network connectivity to establish a connection between different instances.
       *
       * @param request AddConnectableClusterRequest
       * @return AddConnectableClusterResponse
       */
      Models::AddConnectableClusterResponse addConnectableCluster(const string &InstanceId, const Models::AddConnectableClusterRequest &request);

      /**
       * @summary Creates a reference repository when setting up a cross-cluster OSS repository.
       *
       * @param request AddSnapshotRepoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSnapshotRepoResponse
       */
      Models::AddSnapshotRepoResponse addSnapshotRepoWithOptions(const string &InstanceId, const Models::AddSnapshotRepoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a reference repository when setting up a cross-cluster OSS repository.
       *
       * @param request AddSnapshotRepoRequest
       * @return AddSnapshotRepoResponse
       */
      Models::AddSnapshotRepoResponse addSnapshotRepo(const string &InstanceId, const Models::AddSnapshotRepoRequest &request);

      /**
       * @summary Recovers a frozen Elasticsearch instance that was released.
       *
       * @param request CancelDeletionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDeletionResponse
       */
      Models::CancelDeletionResponse cancelDeletionWithOptions(const string &InstanceId, const Models::CancelDeletionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recovers a frozen Elasticsearch instance that was released.
       *
       * @param request CancelDeletionRequest
       * @return CancelDeletionResponse
       */
      Models::CancelDeletionResponse cancelDeletion(const string &InstanceId, const Models::CancelDeletionRequest &request);

      /**
       * @summary Resumes a frozen Logstash instance that was frozen after release.
       *
       * @param request CancelLogstashDeletionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelLogstashDeletionResponse
       */
      Models::CancelLogstashDeletionResponse cancelLogstashDeletionWithOptions(const string &InstanceId, const Models::CancelLogstashDeletionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a frozen Logstash instance that was frozen after release.
       *
       * @param request CancelLogstashDeletionRequest
       * @return CancelLogstashDeletionResponse
       */
      Models::CancelLogstashDeletionResponse cancelLogstashDeletion(const string &InstanceId, const Models::CancelLogstashDeletionRequest &request);

      /**
       * @summary Cancels a running data migration task.
       *
       * @param request CancelTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTaskWithOptions(const string &InstanceId, const Models::CancelTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a running data migration task.
       *
       * @param request CancelTaskRequest
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTask(const string &InstanceId, const Models::CancelTaskRequest &request);

      /**
       * @summary Recommends optimal cluster capacity planning configurations based on business scenarios, QPS, and log generation volume.
       *
       * @param request CapacityPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CapacityPlanResponse
       */
      Models::CapacityPlanResponse capacityPlanWithOptions(const Models::CapacityPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recommends optimal cluster capacity planning configurations based on business scenarios, QPS, and log generation volume.
       *
       * @param request CapacityPlanRequest
       * @return CapacityPlanResponse
       */
      Models::CapacityPlanResponse capacityPlan(const Models::CapacityPlanRequest &request);

      /**
       * @summary Disables the intelligent O&M feature for an instance.
       *
       * @param request CloseDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseDiagnosisResponse
       */
      Models::CloseDiagnosisResponse closeDiagnosisWithOptions(const string &InstanceId, const Models::CloseDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the intelligent O&M feature for an instance.
       *
       * @param request CloseDiagnosisRequest
       * @return CloseDiagnosisResponse
       */
      Models::CloseDiagnosisResponse closeDiagnosis(const string &InstanceId, const Models::CloseDiagnosisRequest &request);

      /**
       * @summary Disables the HTTPS protocol for a cluster.
       *
       * @param request CloseHttpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseHttpsResponse
       */
      Models::CloseHttpsResponse closeHttpsWithOptions(const string &InstanceId, const Models::CloseHttpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the HTTPS protocol for a cluster.
       *
       * @param request CloseHttpsRequest
       * @return CloseHttpsResponse
       */
      Models::CloseHttpsResponse closeHttps(const string &InstanceId, const Models::CloseHttpsRequest &request);

      /**
       * @summary Disables the cloud managed feature for a specified index in an Indexing Service cluster. This operation is irreversible. After the feature is disabled, it cannot be enabled again.
       *
       * @param request CloseManagedIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseManagedIndexResponse
       */
      Models::CloseManagedIndexResponse closeManagedIndexWithOptions(const string &InstanceId, const string &Index, const Models::CloseManagedIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the cloud managed feature for a specified index in an Indexing Service cluster. This operation is irreversible. After the feature is disabled, it cannot be enabled again.
       *
       * @param request CloseManagedIndexRequest
       * @return CloseManagedIndexResponse
       */
      Models::CloseManagedIndexResponse closeManagedIndex(const string &InstanceId, const string &Index, const Models::CloseManagedIndexRequest &request);

      /**
       * @summary Creates a collector to collect data from a specified service.
       *
       * @param request CreateCollectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCollectorResponse
       */
      Models::CreateCollectorResponse createCollectorWithOptions(const Models::CreateCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a collector to collect data from a specified service.
       *
       * @param request CreateCollectorRequest
       * @return CreateCollectorResponse
       */
      Models::CreateCollectorResponse createCollector(const Models::CreateCollectorRequest &request);

      /**
       * @summary Creates an Elasticsearch composable template.
       *
       * @description For more information, see [Store large volumes of data by using OpenStore](https://help.aliyun.com/document_detail/317694.html).
       *
       * @param request CreateComponentIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComponentIndexResponse
       */
      Models::CreateComponentIndexResponse createComponentIndexWithOptions(const string &InstanceId, const string &name, const Models::CreateComponentIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Elasticsearch composable template.
       *
       * @description For more information, see [Store large volumes of data by using OpenStore](https://help.aliyun.com/document_detail/317694.html).
       *
       * @param request CreateComponentIndexRequest
       * @return CreateComponentIndexResponse
       */
      Models::CreateComponentIndexResponse createComponentIndex(const string &InstanceId, const string &name, const Models::CreateComponentIndexRequest &request);

      /**
       * @summary Creates a data stream to manage a set of indexes.
       *
       * @description > The data stream name you create must have a one-to-one correspondence with the index pattern in the index template, and the index template must have the data stream feature enabled. For example, if the index pattern in the index template is ds-\\*, the corresponding data stream name should be ds-.
       *
       * @param request CreateDataStreamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataStreamResponse
       */
      Models::CreateDataStreamResponse createDataStreamWithOptions(const string &InstanceId, const Models::CreateDataStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data stream to manage a set of indexes.
       *
       * @description > The data stream name you create must have a one-to-one correspondence with the index pattern in the index template, and the index template must have the data stream feature enabled. For example, if the index pattern in the index template is ds-\\*, the corresponding data stream name should be ds-.
       *
       * @param request CreateDataStreamRequest
       * @return CreateDataStreamResponse
       */
      Models::CreateDataStreamResponse createDataStream(const string &InstanceId, const Models::CreateDataStreamRequest &request);

      /**
       * @summary Creates an index lifecycle policy. If a policy with the specified name already exists, the existing policy is replaced and its version is incremented.
       *
       * @param request CreateILMPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateILMPolicyResponse
       */
      Models::CreateILMPolicyResponse createILMPolicyWithOptions(const string &InstanceId, const Models::CreateILMPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an index lifecycle policy. If a policy with the specified name already exists, the existing policy is replaced and its version is incremented.
       *
       * @param request CreateILMPolicyRequest
       * @return CreateILMPolicyResponse
       */
      Models::CreateILMPolicyResponse createILMPolicy(const string &InstanceId, const Models::CreateILMPolicyRequest &request);

      /**
       * @summary Creates a cluster index template that can be used for component-based index template settings.
       *
       * @param request CreateIndexTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIndexTemplateResponse
       */
      Models::CreateIndexTemplateResponse createIndexTemplateWithOptions(const string &InstanceId, const Models::CreateIndexTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cluster index template that can be used for component-based index template settings.
       *
       * @param request CreateIndexTemplateRequest
       * @return CreateIndexTemplateResponse
       */
      Models::CreateIndexTemplateResponse createIndexTemplate(const string &InstanceId, const Models::CreateIndexTemplateRequest &request);

      /**
       * @summary Creates a Logstash instance by calling CreateLogstash.
       *
       * @description Before calling this operation, note the following:
       * - Make sure that you are familiar with the billing method and pricing of Logstash. <props="china"><ph>For more information, see [Billing](https://help.aliyun.com/document_detail/260882.html).</ph>
       * - To create an instance, complete real-name verification. <props="china"><ph>For more information, see [Real-name verification](https://help.aliyun.com/document_detail/37175.html).</ph>.
       *
       * @param request CreateLogstashRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogstashResponse
       */
      Models::CreateLogstashResponse createLogstashWithOptions(const Models::CreateLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Logstash instance by calling CreateLogstash.
       *
       * @description Before calling this operation, note the following:
       * - Make sure that you are familiar with the billing method and pricing of Logstash. <props="china"><ph>For more information, see [Billing](https://help.aliyun.com/document_detail/260882.html).</ph>
       * - To create an instance, complete real-name verification. <props="china"><ph>For more information, see [Real-name verification](https://help.aliyun.com/document_detail/37175.html).</ph>.
       *
       * @param request CreateLogstashRequest
       * @return CreateLogstashResponse
       */
      Models::CreateLogstashResponse createLogstash(const Models::CreateLogstashRequest &request);

      /**
       * @summary Creates a Logstash pipeline to collect data.
       *
       * @param request CreatePipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelinesResponse
       */
      Models::CreatePipelinesResponse createPipelinesWithOptions(const string &InstanceId, const Models::CreatePipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Logstash pipeline to collect data.
       *
       * @param request CreatePipelinesRequest
       * @return CreatePipelinesResponse
       */
      Models::CreatePipelinesResponse createPipelines(const string &InstanceId, const Models::CreatePipelinesRequest &request);

      /**
       * @summary Calls CreateSnapshot to manually create a snapshot backup of a cluster.
       *
       * @param request CreateSnapshotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const string &InstanceId, const Models::CreateSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls CreateSnapshot to manually create a snapshot backup of a cluster.
       *
       * @param request CreateSnapshotRequest
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshot(const string &InstanceId, const Models::CreateSnapshotRequest &request);

      /**
       * @summary Creates a PrivateLink VPC endpoint to connect to an endpoint service created in a user VPC.
       *
       * @description For more information about this API operation, see [Configure private connectivity for an instance](https://help.aliyun.com/document_detail/279559.html).
       *
       * @param request CreateVpcEndpointRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcEndpointResponse
       */
      Models::CreateVpcEndpointResponse createVpcEndpointWithOptions(const string &InstanceId, const Models::CreateVpcEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a PrivateLink VPC endpoint to connect to an endpoint service created in a user VPC.
       *
       * @description For more information about this API operation, see [Configure private connectivity for an instance](https://help.aliyun.com/document_detail/279559.html).
       *
       * @param request CreateVpcEndpointRequest
       * @return CreateVpcEndpointResponse
       */
      Models::CreateVpcEndpointResponse createVpcEndpoint(const string &InstanceId, const Models::CreateVpcEndpointRequest &request);

      /**
       * @summary Takes part of the zones offline when multiple zones are available, and migrates the nodes in the offline zones to other zones.
       *
       * @param request DeactivateZonesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactivateZonesResponse
       */
      Models::DeactivateZonesResponse deactivateZonesWithOptions(const string &InstanceId, const Models::DeactivateZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Takes part of the zones offline when multiple zones are available, and migrates the nodes in the offline zones to other zones.
       *
       * @param request DeactivateZonesRequest
       * @return DeactivateZonesResponse
       */
      Models::DeactivateZonesResponse deactivateZones(const string &InstanceId, const Models::DeactivateZonesRequest &request);

      /**
       * @summary Deletes a specified collector.
       *
       * @param request DeleteCollectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCollectorResponse
       */
      Models::DeleteCollectorResponse deleteCollectorWithOptions(const string &ResId, const Models::DeleteCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified collector.
       *
       * @param request DeleteCollectorRequest
       * @return DeleteCollectorResponse
       */
      Models::DeleteCollectorResponse deleteCollector(const string &ResId, const Models::DeleteCollectorRequest &request);

      /**
       * @summary Deletes a component index template of Elasticsearch.
       *
       * @description For more information, see [Store massive amounts of data by using OpenStore](https://help.aliyun.com/document_detail/317694.html).
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComponentIndexResponse
       */
      Models::DeleteComponentIndexResponse deleteComponentIndexWithOptions(const string &InstanceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a component index template of Elasticsearch.
       *
       * @description For more information, see [Store massive amounts of data by using OpenStore](https://help.aliyun.com/document_detail/317694.html).
       *
       * @return DeleteComponentIndexResponse
       */
      Models::DeleteComponentIndexResponse deleteComponentIndex(const string &InstanceId, const string &name);

      /**
       * @summary Deletes the network connectivity between two instances.
       *
       * @param request DeleteConnectedClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConnectedClusterResponse
       */
      Models::DeleteConnectedClusterResponse deleteConnectedClusterWithOptions(const string &InstanceId, const Models::DeleteConnectedClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the network connectivity between two instances.
       *
       * @param request DeleteConnectedClusterRequest
       * @return DeleteConnectedClusterResponse
       */
      Models::DeleteConnectedClusterResponse deleteConnectedCluster(const string &InstanceId, const Models::DeleteConnectedClusterRequest &request);

      /**
       * @summary Deletes a specified cluster data stream.
       *
       * @description > - Deleting a data stream also deletes its backing indexes. Proceed with caution.- When an index template has associated data streams, you must delete the data streams associated with the index template before you can delete the index template. On the data stream list page, view the data stream details to find the index template that matches the data stream.
       *
       * @param request DeleteDataStreamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataStreamResponse
       */
      Models::DeleteDataStreamResponse deleteDataStreamWithOptions(const string &InstanceId, const string &DataStream, const Models::DeleteDataStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified cluster data stream.
       *
       * @description > - Deleting a data stream also deletes its backing indexes. Proceed with caution.- When an index template has associated data streams, you must delete the data streams associated with the index template before you can delete the index template. On the data stream list page, view the data stream details to find the index template that matches the data stream.
       *
       * @param request DeleteDataStreamRequest
       * @return DeleteDataStreamResponse
       */
      Models::DeleteDataStreamResponse deleteDataStream(const string &InstanceId, const string &DataStream, const Models::DeleteDataStreamRequest &request);

      /**
       * @summary Deletes an Elasticsearch index migration task.
       *
       * @param request DeleteDataTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataTaskResponse
       */
      Models::DeleteDataTaskResponse deleteDataTaskWithOptions(const string &InstanceId, const Models::DeleteDataTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Elasticsearch index migration task.
       *
       * @param request DeleteDataTaskRequest
       * @return DeleteDataTaskResponse
       */
      Models::DeleteDataTaskResponse deleteDataTask(const string &InstanceId, const Models::DeleteDataTaskRequest &request);

      /**
       * @summary Deletes a historical index template.
       *
       * @description For more information, see [Store massive amounts of data through OpenStore](https://help.aliyun.com/document_detail/317694.html).
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeprecatedTemplateResponse
       */
      Models::DeleteDeprecatedTemplateResponse deleteDeprecatedTemplateWithOptions(const string &InstanceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a historical index template.
       *
       * @description For more information, see [Store massive amounts of data through OpenStore](https://help.aliyun.com/document_detail/317694.html).
       *
       * @return DeleteDeprecatedTemplateResponse
       */
      Models::DeleteDeprecatedTemplateResponse deleteDeprecatedTemplate(const string &InstanceId, const string &name);

      /**
       * @summary Deletes a specified index lifecycle policy.
       *
       * @description > You cannot delete a policy that is currently in use. If the policy is being used to manage any index, the request fails and returns an error.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteILMPolicyResponse
       */
      Models::DeleteILMPolicyResponse deleteILMPolicyWithOptions(const string &InstanceId, const string &PolicyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified index lifecycle policy.
       *
       * @description > You cannot delete a policy that is currently in use. If the policy is being used to manage any index, the request fails and returns an error.
       *
       * @return DeleteILMPolicyResponse
       */
      Models::DeleteILMPolicyResponse deleteILMPolicy(const string &InstanceId, const string &PolicyName);

      /**
       * @summary Deletes a specified index template.
       *
       * @description > Before deleting an index template, delete the data streams associated with the index template. Otherwise, the index template cannot be deleted.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIndexTemplateResponse
       */
      Models::DeleteIndexTemplateResponse deleteIndexTemplateWithOptions(const string &InstanceId, const string &IndexTemplate, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified index template.
       *
       * @description > Before deleting an index template, delete the data streams associated with the index template. Otherwise, the index template cannot be deleted.
       *
       * @return DeleteIndexTemplateResponse
       */
      Models::DeleteIndexTemplateResponse deleteIndexTemplate(const string &InstanceId, const string &IndexTemplate);

      /**
       * @summary All physical resources used by the instance are reclaimed, all related data is permanently lost and cannot be recovered, and the cloud disks mounted to the instance nodes along with their corresponding snapshots are released.
       *
       * @description Before you invoke this operation, note the following:
       * Data cannot be recovered after the instance is released. Back up your data before releasing the instance. For more information, see [Snapshot backup and recovery commands](https://help.aliyun.com/document_detail/65675.html).
       *
       * @param request DeleteInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const string &InstanceId, const Models::DeleteInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary All physical resources used by the instance are reclaimed, all related data is permanently lost and cannot be recovered, and the cloud disks mounted to the instance nodes along with their corresponding snapshots are released.
       *
       * @description Before you invoke this operation, note the following:
       * Data cannot be recovered after the instance is released. Back up your data before releasing the instance. For more information, see [Snapshot backup and recovery commands](https://help.aliyun.com/document_detail/65675.html).
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const string &InstanceId, const Models::DeleteInstanceRequest &request);

      /**
       * @summary Proactively releases a Logstash instance.
       *
       * @description Before calling this operation, note the following:
       * After the instance is released, all physical resources used by the instance are reclaimed, all related data is permanently lost and cannot be recovered, cloud disks mounted to the instance nodes are also released, and the corresponding snapshots are deleted.
       *
       * @param request DeleteLogstashRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogstashResponse
       */
      Models::DeleteLogstashResponse deleteLogstashWithOptions(const string &InstanceId, const Models::DeleteLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Proactively releases a Logstash instance.
       *
       * @description Before calling this operation, note the following:
       * After the instance is released, all physical resources used by the instance are reclaimed, all related data is permanently lost and cannot be recovered, cloud disks mounted to the instance nodes are also released, and the corresponding snapshots are deleted.
       *
       * @param request DeleteLogstashRequest
       * @return DeleteLogstashResponse
       */
      Models::DeleteLogstashResponse deleteLogstash(const string &InstanceId, const Models::DeleteLogstashRequest &request);

      /**
       * @summary Deletes pipelines configured for a Logstash instance.
       *
       * @param request DeletePipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePipelinesResponse
       */
      Models::DeletePipelinesResponse deletePipelinesWithOptions(const string &InstanceId, const Models::DeletePipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes pipelines configured for a Logstash instance.
       *
       * @param request DeletePipelinesRequest
       * @return DeletePipelinesResponse
       */
      Models::DeletePipelinesResponse deletePipelines(const string &InstanceId, const Models::DeletePipelinesRequest &request);

      /**
       * @summary Deletes a cross-cluster OSS reference repository from an instance.
       *
       * @param request DeleteSnapshotRepoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotRepoResponse
       */
      Models::DeleteSnapshotRepoResponse deleteSnapshotRepoWithOptions(const string &InstanceId, const Models::DeleteSnapshotRepoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cross-cluster OSS reference repository from an instance.
       *
       * @param request DeleteSnapshotRepoRequest
       * @return DeleteSnapshotRepoResponse
       */
      Models::DeleteSnapshotRepoResponse deleteSnapshotRepo(const string &InstanceId, const Models::DeleteSnapshotRepoRequest &request);

      /**
       * @summary Calls DeleteVpcEndpoint to delete a VPC endpoint under a service account.
       *
       * @param request DeleteVpcEndpointRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcEndpointResponse
       */
      Models::DeleteVpcEndpointResponse deleteVpcEndpointWithOptions(const string &InstanceId, const string &EndpointId, const Models::DeleteVpcEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DeleteVpcEndpoint to delete a VPC endpoint under a service account.
       *
       * @param request DeleteVpcEndpointRequest
       * @return DeleteVpcEndpointResponse
       */
      Models::DeleteVpcEndpointResponse deleteVpcEndpoint(const string &InstanceId, const string &EndpointId, const Models::DeleteVpcEndpointRequest &request);

      /**
       * @summary Calls the DescribeAckOperator operation to query the Elasticsearch Operator information installed on a specified Container Service for Kubernetes (ACK) cluster.
       *
       * @description > Before installing a collector on an ACK cluster, you can call this operation to check the installation status of the Elasticsearch Operator on the target cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAckOperatorResponse
       */
      Models::DescribeAckOperatorResponse describeAckOperatorWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeAckOperator operation to query the Elasticsearch Operator information installed on a specified Container Service for Kubernetes (ACK) cluster.
       *
       * @description > Before installing a collector on an ACK cluster, you can call this operation to check the installation status of the Elasticsearch Operator on the target cluster.
       *
       * @return DescribeAckOperatorResponse
       */
      Models::DescribeAckOperatorResponse describeAckOperator(const string &ClusterId);

      /**
       * @summary Retrieves the details of a collector instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCollectorResponse
       */
      Models::DescribeCollectorResponse describeCollectorWithOptions(const string &ResId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a collector instance.
       *
       * @return DescribeCollectorResponse
       */
      Models::DescribeCollectorResponse describeCollector(const string &ResId);

      /**
       * @summary Queries the details of a composable index template in Elasticsearch.
       *
       * @description For more information, see [Use OpenStore to store massive amounts of data](https://help.aliyun.com/document_detail/317694.html).
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentIndexResponse
       */
      Models::DescribeComponentIndexResponse describeComponentIndexWithOptions(const string &InstanceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a composable index template in Elasticsearch.
       *
       * @description For more information, see [Use OpenStore to store massive amounts of data](https://help.aliyun.com/document_detail/317694.html).
       *
       * @return DescribeComponentIndexResponse
       */
      Models::DescribeComponentIndexResponse describeComponentIndex(const string &InstanceId, const string &name);

      /**
       * @summary Retrieves a list of instances that can establish private network peering with the current instance. Instances that are already connected are not included.
       *
       * @param request DescribeConnectableClustersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConnectableClustersResponse
       */
      Models::DescribeConnectableClustersResponse describeConnectableClustersWithOptions(const string &InstanceId, const Models::DescribeConnectableClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of instances that can establish private network peering with the current instance. Instances that are already connected are not included.
       *
       * @param request DescribeConnectableClustersRequest
       * @return DescribeConnectableClustersResponse
       */
      Models::DescribeConnectableClustersResponse describeConnectableClusters(const string &InstanceId, const Models::DescribeConnectableClustersRequest &request);

      /**
       * @summary Queries the details of a historical index template.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeprecatedTemplateResponse
       */
      Models::DescribeDeprecatedTemplateResponse describeDeprecatedTemplateWithOptions(const string &InstanceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a historical index template.
       *
       * @return DescribeDeprecatedTemplateResponse
       */
      Models::DescribeDeprecatedTemplateResponse describeDeprecatedTemplate(const string &InstanceId, const string &name);

      /**
       * @summary Calls the DescribeDiagnoseReport operation to view historical reports of intelligent O&M.
       *
       * @param request DescribeDiagnoseReportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnoseReportResponse
       */
      Models::DescribeDiagnoseReportResponse describeDiagnoseReportWithOptions(const string &InstanceId, const string &ReportId, const Models::DescribeDiagnoseReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeDiagnoseReport operation to view historical reports of intelligent O&M.
       *
       * @param request DescribeDiagnoseReportRequest
       * @return DescribeDiagnoseReportResponse
       */
      Models::DescribeDiagnoseReportResponse describeDiagnoseReport(const string &InstanceId, const string &ReportId, const Models::DescribeDiagnoseReportRequest &request);

      /**
       * @summary Calls the DescribeDiagnosisSettings operation to obtain the scenario settings of intelligent O&M.
       *
       * @param request DescribeDiagnosisSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisSettingsResponse
       */
      Models::DescribeDiagnosisSettingsResponse describeDiagnosisSettingsWithOptions(const string &InstanceId, const Models::DescribeDiagnosisSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeDiagnosisSettings operation to obtain the scenario settings of intelligent O&M.
       *
       * @param request DescribeDiagnosisSettingsRequest
       * @return DescribeDiagnosisSettingsResponse
       */
      Models::DescribeDiagnosisSettingsResponse describeDiagnosisSettings(const string &InstanceId, const Models::DescribeDiagnosisSettingsRequest &request);

      /**
       * @summary Retrieves dynamic metrics of a cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDynamicSettingsResponse
       */
      Models::DescribeDynamicSettingsResponse describeDynamicSettingsWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves dynamic metrics of a cluster.
       *
       * @return DescribeDynamicSettingsResponse
       */
      Models::DescribeDynamicSettingsResponse describeDynamicSettings(const string &InstanceId);

      /**
       * @summary Queries the health status of a cluster to check whether it is running properly.
       *
       * @description The instance health status. The following three states are supported:
       * - GREEN: Primary and replica shards are allocated properly.
       * - YELLOW: Primary shards are allocated properly, but replica shards are not allocated properly.
       * - RED: Primary shards are not allocated properly.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticsearchHealthResponse
       */
      Models::DescribeElasticsearchHealthResponse describeElasticsearchHealthWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health status of a cluster to check whether it is running properly.
       *
       * @description The instance health status. The following three states are supported:
       * - GREEN: Primary and replica shards are allocated properly.
       * - YELLOW: Primary shards are allocated properly, but replica shards are not allocated properly.
       * - RED: Primary shards are not allocated properly.
       *
       * @return DescribeElasticsearchHealthResponse
       */
      Models::DescribeElasticsearchHealthResponse describeElasticsearchHealth(const string &InstanceId);

      /**
       * @summary Queries the details of a specified index lifecycle policy.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeILMPolicyResponse
       */
      Models::DescribeILMPolicyResponse describeILMPolicyWithOptions(const string &InstanceId, const string &PolicyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified index lifecycle policy.
       *
       * @return DescribeILMPolicyResponse
       */
      Models::DescribeILMPolicyResponse describeILMPolicy(const string &InstanceId, const string &PolicyName);

      /**
       * @summary Returns information about an index template.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIndexTemplateResponse
       */
      Models::DescribeIndexTemplateResponse describeIndexTemplateWithOptions(const string &InstanceId, const string &IndexTemplate, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns information about an index template.
       *
       * @return DescribeIndexTemplateResponse
       */
      Models::DescribeIndexTemplateResponse describeIndexTemplate(const string &InstanceId, const string &IndexTemplate);

      /**
       * @summary Queries the details of a specified instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified instance.
       *
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const string &InstanceId);

      /**
       * @summary Retrieves the Kibana node configuration of an Elasticsearch instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKibanaSettingsResponse
       */
      Models::DescribeKibanaSettingsResponse describeKibanaSettingsWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the Kibana node configuration of an Elasticsearch instance.
       *
       * @return DescribeKibanaSettingsResponse
       */
      Models::DescribeKibanaSettingsResponse describeKibanaSettings(const string &InstanceId);

      /**
       * @summary Queries the details of a Logstash instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogstashResponse
       */
      Models::DescribeLogstashResponse describeLogstashWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Logstash instance.
       *
       * @return DescribeLogstashResponse
       */
      Models::DescribeLogstashResponse describeLogstash(const string &InstanceId);

      /**
       * @summary Retrieves the pipeline information of a Logstash instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePipelineResponse
       */
      Models::DescribePipelineResponse describePipelineWithOptions(const string &InstanceId, const string &PipelineId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the pipeline information of a Logstash instance.
       *
       * @return DescribePipelineResponse
       */
      Models::DescribePipelineResponse describePipeline(const string &InstanceId, const string &PipelineId);

      /**
       * @summary Calls DescribePipelineManagementConfig to retrieve the pipeline management configuration of a Logstash instance.
       *
       * @param request DescribePipelineManagementConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePipelineManagementConfigResponse
       */
      Models::DescribePipelineManagementConfigResponse describePipelineManagementConfigWithOptions(const string &InstanceId, const Models::DescribePipelineManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribePipelineManagementConfig to retrieve the pipeline management configuration of a Logstash instance.
       *
       * @param request DescribePipelineManagementConfigRequest
       * @return DescribePipelineManagementConfigResponse
       */
      Models::DescribePipelineManagementConfigResponse describePipelineManagementConfig(const string &InstanceId, const Models::DescribePipelineManagementConfigRequest &request);

      /**
       * @summary Retrieves the region information of Alibaba Cloud Elasticsearch.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the region information of Alibaba Cloud Elasticsearch.
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary Retrieves the snapshot backup settings and backup cycle of a cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotSettingResponse
       */
      Models::DescribeSnapshotSettingResponse describeSnapshotSettingWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the snapshot backup settings and backup cycle of a cluster.
       *
       * @return DescribeSnapshotSettingResponse
       */
      Models::DescribeSnapshotSettingResponse describeSnapshotSetting(const string &InstanceId);

      /**
       * @summary Retrieves the scenario-specific template configuration and cluster settings of an instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplatesWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the scenario-specific template configuration and cluster settings of an instance.
       *
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplates(const string &InstanceId);

      /**
       * @summary Retrieves the X-Pack monitoring configuration of a Logstash instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeXpackMonitorConfigResponse
       */
      Models::DescribeXpackMonitorConfigResponse describeXpackMonitorConfigWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the X-Pack monitoring configuration of a Logstash instance.
       *
       * @return DescribeXpackMonitorConfigResponse
       */
      Models::DescribeXpackMonitorConfigResponse describeXpackMonitorConfig(const string &InstanceId);

      /**
       * @summary Calls DiagnoseInstance to immediately diagnose an instance.
       *
       * @param request DiagnoseInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DiagnoseInstanceResponse
       */
      Models::DiagnoseInstanceResponse diagnoseInstanceWithOptions(const string &InstanceId, const Models::DiagnoseInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DiagnoseInstance to immediately diagnose an instance.
       *
       * @param request DiagnoseInstanceRequest
       * @return DiagnoseInstanceResponse
       */
      Models::DiagnoseInstanceResponse diagnoseInstance(const string &InstanceId, const Models::DiagnoseInstanceRequest &request);

      /**
       * @summary Disables Kibana private network access.
       *
       * @description This API operation supports only cloud-native instances. For legacy architecture instances, use the TriggerNetwork method.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableKibanaPvlNetworkResponse
       */
      Models::DisableKibanaPvlNetworkResponse disableKibanaPvlNetworkWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables Kibana private network access.
       *
       * @description This API operation supports only cloud-native instances. For legacy architecture instances, use the TriggerNetwork method.
       *
       * @return DisableKibanaPvlNetworkResponse
       */
      Models::DisableKibanaPvlNetworkResponse disableKibanaPvlNetwork(const string &InstanceId);

      /**
       * @summary Invokes the EnableKibanaPvlNetwork operation to enable private network access for Kibana.
       *
       * @description 1. This API operation is supported only for cloud-native instances. For legacy architecture instances, use the TriggerNetwork method.
       * 2. The Kibana specification must be greater than 1 vCPU and 2 GB of memory.
       *
       * @param request EnableKibanaPvlNetworkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableKibanaPvlNetworkResponse
       */
      Models::EnableKibanaPvlNetworkResponse enableKibanaPvlNetworkWithOptions(const string &InstanceId, const Models::EnableKibanaPvlNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the EnableKibanaPvlNetwork operation to enable private network access for Kibana.
       *
       * @description 1. This API operation is supported only for cloud-native instances. For legacy architecture instances, use the TriggerNetwork method.
       * 2. The Kibana specification must be greater than 1 vCPU and 2 GB of memory.
       *
       * @param request EnableKibanaPvlNetworkRequest
       * @return EnableKibanaPvlNetworkResponse
       */
      Models::EnableKibanaPvlNetworkResponse enableKibanaPvlNetwork(const string &InstanceId, const Models::EnableKibanaPvlNetworkRequest &request);

      /**
       * @summary Retrieves the estimated restart time of a Logstash instance.
       *
       * @param request EstimatedLogstashRestartTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EstimatedLogstashRestartTimeResponse
       */
      Models::EstimatedLogstashRestartTimeResponse estimatedLogstashRestartTimeWithOptions(const string &InstanceId, const Models::EstimatedLogstashRestartTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the estimated restart time of a Logstash instance.
       *
       * @param request EstimatedLogstashRestartTimeRequest
       * @return EstimatedLogstashRestartTimeResponse
       */
      Models::EstimatedLogstashRestartTimeResponse estimatedLogstashRestartTime(const string &InstanceId, const Models::EstimatedLogstashRestartTimeRequest &request);

      /**
       * @summary Retrieves the estimated restart time for an instance.
       *
       * @param request EstimatedRestartTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EstimatedRestartTimeResponse
       */
      Models::EstimatedRestartTimeResponse estimatedRestartTimeWithOptions(const string &InstanceId, const Models::EstimatedRestartTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the estimated restart time for an instance.
       *
       * @param request EstimatedRestartTimeRequest
       * @return EstimatedRestartTimeResponse
       */
      Models::EstimatedRestartTimeResponse estimatedRestartTime(const string &InstanceId, const Models::EstimatedRestartTimeRequest &request);

      /**
       * @summary Retrieves index migration data information.
       *
       * @param request GetClusterDataInformationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterDataInformationResponse
       */
      Models::GetClusterDataInformationResponse getClusterDataInformationWithOptions(const Models::GetClusterDataInformationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves index migration data information.
       *
       * @param request GetClusterDataInformationRequest
       * @return GetClusterDataInformationResponse
       */
      Models::GetClusterDataInformationResponse getClusterDataInformation(const Models::GetClusterDataInformationRequest &request);

      /**
       * @summary Retrieves the elastic scaling rules of a cluster. Elastic nodes must be purchased when the instance is created.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetElastictaskResponse
       */
      Models::GetElastictaskResponse getElastictaskWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the elastic scaling rules of a cluster. Elastic nodes must be purchased when the instance is created.
       *
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
       * @summary Calls GetEmonGrafanaAlerts to retrieve the Grafana alert list.
       *
       * @param request GetEmonGrafanaAlertsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEmonGrafanaAlertsResponse
       */
      Models::GetEmonGrafanaAlertsResponse getEmonGrafanaAlertsWithOptions(const string &ProjectId, const Models::GetEmonGrafanaAlertsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls GetEmonGrafanaAlerts to retrieve the Grafana alert list.
       *
       * @param request GetEmonGrafanaAlertsRequest
       * @return GetEmonGrafanaAlertsResponse
       */
      Models::GetEmonGrafanaAlertsResponse getEmonGrafanaAlerts(const string &ProjectId, const Models::GetEmonGrafanaAlertsRequest &request);

      /**
       * @summary Calls GetEmonGrafanaDashboards to retrieve the list of Grafana dashboards.
       *
       * @param request GetEmonGrafanaDashboardsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEmonGrafanaDashboardsResponse
       */
      Models::GetEmonGrafanaDashboardsResponse getEmonGrafanaDashboardsWithOptions(const string &ProjectId, const Models::GetEmonGrafanaDashboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls GetEmonGrafanaDashboards to retrieve the list of Grafana dashboards.
       *
       * @param request GetEmonGrafanaDashboardsRequest
       * @return GetEmonGrafanaDashboardsResponse
       */
      Models::GetEmonGrafanaDashboardsResponse getEmonGrafanaDashboards(const string &ProjectId, const Models::GetEmonGrafanaDashboardsRequest &request);

      /**
       * @summary Queries the Grafana metric monitoring data of an Elasticsearch instance.
       *
       * @param request GetEmonMonitorDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEmonMonitorDataResponse
       */
      Models::GetEmonMonitorDataResponse getEmonMonitorDataWithOptions(const string &ProjectId, const Models::GetEmonMonitorDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Grafana metric monitoring data of an Elasticsearch instance.
       *
       * @param request GetEmonMonitorDataRequest
       * @return GetEmonMonitorDataResponse
       */
      Models::GetEmonMonitorDataResponse getEmonMonitorData(const string &ProjectId, const Models::GetEmonMonitorDataRequest &request);

      /**
       * @summary Retrieve keystore information
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKeystoresResponse
       */
      Models::GetKeystoresResponse getKeystoresWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve keystore information
       *
       * @return GetKeystoresResponse
       */
      Models::GetKeystoresResponse getKeystores(const string &InstanceId);

      /**
       * @summary Queries the storage capacity and usage of an OpenStore instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpenStoreUsageResponse
       */
      Models::GetOpenStoreUsageResponse getOpenStoreUsageWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage capacity and usage of an OpenStore instance.
       *
       * @return GetOpenStoreUsageResponse
       */
      Models::GetOpenStoreUsageResponse getOpenStoreUsage(const string &InstanceId);

      /**
       * @summary Retrieves the current region information.
       *
       * @param request GetRegionConfigurationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegionConfigurationResponse
       */
      Models::GetRegionConfigurationResponse getRegionConfigurationWithOptions(const Models::GetRegionConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the current region information.
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
       * @summary Retrieves the nodes that can be removed based on the specified node type and quantity.
       *
       * @param request GetSuggestShrinkableNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSuggestShrinkableNodesResponse
       */
      Models::GetSuggestShrinkableNodesResponse getSuggestShrinkableNodesWithOptions(const string &InstanceId, const Models::GetSuggestShrinkableNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the nodes that can be removed based on the specified node type and quantity.
       *
       * @param request GetSuggestShrinkableNodesRequest
       * @return GetSuggestShrinkableNodesResponse
       */
      Models::GetSuggestShrinkableNodesResponse getSuggestShrinkableNodes(const string &InstanceId, const Models::GetSuggestShrinkableNodesRequest &request);

      /**
       * @summary Retrieves the nodes available for data migration based on the specified node type and count.
       *
       * @param request GetTransferableNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTransferableNodesResponse
       */
      Models::GetTransferableNodesResponse getTransferableNodesWithOptions(const string &InstanceId, const Models::GetTransferableNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the nodes available for data migration based on the specified node type and count.
       *
       * @param request GetTransferableNodesRequest
       * @return GetTransferableNodesResponse
       */
      Models::GetTransferableNodesResponse getTransferableNodes(const string &InstanceId, const Models::GetTransferableNodesRequest &request);

      /**
       * @summary Continue restarting the remaining edge zones of the Elasticsearch instance after the phased release is completed.
       *
       * @param request GrayPublishRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrayPublishResponse
       */
      Models::GrayPublishResponse grayPublishWithOptions(const string &InstanceId, const Models::GrayPublishRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Continue restarting the remaining edge zones of the Elasticsearch instance after the phased release is completed.
       *
       * @param request GrayPublishRequest
       * @return GrayPublishResponse
       */
      Models::GrayPublishResponse grayPublish(const string &InstanceId, const Models::GrayPublishRequest &request);

      /**
       * @summary Initialize AI model
       *
       * @param request InitModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitModelResponse
       */
      Models::InitModelResponse initModelWithOptions(const string &InstanceId, const Models::InitModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initialize AI model
       *
       * @param request InitModelRequest
       * @return InitModelResponse
       */
      Models::InitModelResponse initModel(const string &InstanceId, const Models::InitModelRequest &request);

      /**
       * @summary Calls the InitializeOperationRole operation to create a service-linked role.
       *
       * @description > Before you use a collector to collect logs from different data sources or perform elastic scaling tasks for a cluster (applicable only to the China site), you must create a service-linked role.
       *
       * @param request InitializeOperationRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeOperationRoleResponse
       */
      Models::InitializeOperationRoleResponse initializeOperationRoleWithOptions(const Models::InitializeOperationRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the InitializeOperationRole operation to create a service-linked role.
       *
       * @description > Before you use a collector to collect logs from different data sources or perform elastic scaling tasks for a cluster (applicable only to the China site), you must create a service-linked role.
       *
       * @param request InitializeOperationRoleRequest
       * @return InitializeOperationRoleResponse
       */
      Models::InitializeOperationRoleResponse initializeOperationRole(const Models::InitializeOperationRoleRequest &request);

      /**
       * @summary Installs the ACK Operator on a specified Container Service cluster.
       *
       * @description > Before installing a collector on an ACK cluster, call this operation to install the Elasticsearch Operator on the target cluster.
       *
       * @param request InstallAckOperatorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAckOperatorResponse
       */
      Models::InstallAckOperatorResponse installAckOperatorWithOptions(const string &ClusterId, const Models::InstallAckOperatorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs the ACK Operator on a specified Container Service cluster.
       *
       * @description > Before installing a collector on an ACK cluster, call this operation to install the Elasticsearch Operator on the target cluster.
       *
       * @param request InstallAckOperatorRequest
       * @return InstallAckOperatorResponse
       */
      Models::InstallAckOperatorResponse installAckOperator(const string &ClusterId, const Models::InstallAckOperatorRequest &request);

      /**
       * @summary Installs preset plug-ins for Kibana. The Kibana instance must have specifications of 2 vCPUs and 4 GB of memory or higher.
       *
       * @param request InstallKibanaSystemPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallKibanaSystemPluginResponse
       */
      Models::InstallKibanaSystemPluginResponse installKibanaSystemPluginWithOptions(const string &InstanceId, const Models::InstallKibanaSystemPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs preset plug-ins for Kibana. The Kibana instance must have specifications of 2 vCPUs and 4 GB of memory or higher.
       *
       * @param request InstallKibanaSystemPluginRequest
       * @return InstallKibanaSystemPluginResponse
       */
      Models::InstallKibanaSystemPluginResponse installKibanaSystemPlugin(const string &InstanceId, const Models::InstallKibanaSystemPluginRequest &request);

      /**
       * @summary Installs system plugins for a specified Logstash instance.
       *
       * @description Before calling this operation, note the following:
       * The plugins to be installed must be included in the Alibaba Cloud Logstash [default system plugin list](https://help.aliyun.com/document_detail/139626.html). External open source plugins are not supported.
       *
       * @param request InstallLogstashSystemPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallLogstashSystemPluginResponse
       */
      Models::InstallLogstashSystemPluginResponse installLogstashSystemPluginWithOptions(const string &InstanceId, const Models::InstallLogstashSystemPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs system plugins for a specified Logstash instance.
       *
       * @description Before calling this operation, note the following:
       * The plugins to be installed must be included in the Alibaba Cloud Logstash [default system plugin list](https://help.aliyun.com/document_detail/139626.html). External open source plugins are not supported.
       *
       * @param request InstallLogstashSystemPluginRequest
       * @return InstallLogstashSystemPluginResponse
       */
      Models::InstallLogstashSystemPluginResponse installLogstashSystemPlugin(const string &InstanceId, const Models::InstallLogstashSystemPluginRequest &request);

      /**
       * @summary Installs system plug-ins on an Elasticsearch instance.
       *
       * @param request InstallSystemPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallSystemPluginResponse
       */
      Models::InstallSystemPluginResponse installSystemPluginWithOptions(const string &InstanceId, const Models::InstallSystemPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs system plug-ins on an Elasticsearch instance.
       *
       * @param request InstallSystemPluginRequest
       * @return InstallSystemPluginResponse
       */
      Models::InstallSystemPluginResponse installSystemPlugin(const string &InstanceId, const Models::InstallSystemPluginRequest &request);

      /**
       * @summary Installs custom plugins that have been uploaded to the Elasticsearch console.
       *
       * @description > The custom plugin installation feature is being upgraded internally and is temporarily unavailable. If you urgently need this feature, submit a ticket to contact us.
       *
       * @param request InstallUserPluginsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallUserPluginsResponse
       */
      Models::InstallUserPluginsResponse installUserPluginsWithOptions(const string &InstanceId, const Models::InstallUserPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs custom plugins that have been uploaded to the Elasticsearch console.
       *
       * @description > The custom plugin installation feature is being upgraded internally and is temporarily unavailable. If you urgently need this feature, submit a ticket to contact us.
       *
       * @param request InstallUserPluginsRequest
       * @return InstallUserPluginsResponse
       */
      Models::InstallUserPluginsResponse installUserPlugins(const string &InstanceId, const Models::InstallUserPluginsRequest &request);

      /**
       * @summary Interrupts an instance change task. This operation is valid only for instances in the Effecting state. After the interruption, the instance enters the suspended state.
       *
       * @param request InterruptElasticsearchTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InterruptElasticsearchTaskResponse
       */
      Models::InterruptElasticsearchTaskResponse interruptElasticsearchTaskWithOptions(const string &InstanceId, const Models::InterruptElasticsearchTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Interrupts an instance change task. This operation is valid only for instances in the Effecting state. After the interruption, the instance enters the suspended state.
       *
       * @param request InterruptElasticsearchTaskRequest
       * @return InterruptElasticsearchTaskResponse
       */
      Models::InterruptElasticsearchTaskResponse interruptElasticsearchTask(const string &InstanceId, const Models::InterruptElasticsearchTaskRequest &request);

      /**
       * @summary After the interruption, the instance enters the suspended state.
       *
       * @param request InterruptLogstashTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InterruptLogstashTaskResponse
       */
      Models::InterruptLogstashTaskResponse interruptLogstashTaskWithOptions(const string &InstanceId, const Models::InterruptLogstashTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After the interruption, the instance enters the suspended state.
       *
       * @param request InterruptLogstashTaskRequest
       * @return InterruptLogstashTaskResponse
       */
      Models::InterruptLogstashTaskResponse interruptLogstashTask(const string &InstanceId, const Models::InterruptLogstashTaskRequest &request);

      /**
       * @summary Retrieves the list of Container Service for Kubernetes (ACK) clusters.
       *
       * @param request ListAckClustersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAckClustersResponse
       */
      Models::ListAckClustersResponse listAckClustersWithOptions(const Models::ListAckClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of Container Service for Kubernetes (ACK) clusters.
       *
       * @param request ListAckClustersRequest
       * @return ListAckClustersResponse
       */
      Models::ListAckClustersResponse listAckClusters(const Models::ListAckClustersRequest &request);

      /**
       * @summary Queries all namespaces in a specified Container Service for Kubernetes (ACK) cluster.
       *
       * @description This operation is deprecated and will be taken offline soon.
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
       * @description This operation is deprecated and will be taken offline soon.
       *
       * @param request ListAckNamespacesRequest
       * @return ListAckNamespacesResponse
       */
      Models::ListAckNamespacesResponse listAckNamespaces(const string &ClusterId, const Models::ListAckNamespacesRequest &request);

      /**
       * @summary Release notes Release notes details.
       *
       * @param request ListActionRecordsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListActionRecordsResponse
       */
      Models::ListActionRecordsResponse listActionRecordsWithOptions(const string &InstanceId, const Models::ListActionRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Release notes Release notes details.
       *
       * @param request ListActionRecordsRequest
       * @return ListActionRecordsResponse
       */
      Models::ListActionRecordsResponse listActionRecords(const string &InstanceId, const Models::ListActionRecordsRequest &request);

      /**
       * @summary Retrieves information about all nodes in an Elasticsearch cluster.
       *
       * @param request ListAllNodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllNodeResponse
       */
      Models::ListAllNodeResponse listAllNodeWithOptions(const string &InstanceId, const Models::ListAllNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about all nodes in an Elasticsearch cluster.
       *
       * @param request ListAllNodeRequest
       * @return ListAllNodeResponse
       */
      Models::ListAllNodeResponse listAllNode(const string &InstanceId, const Models::ListAllNodeRequest &request);

      /**
       * @summary Retrieves the OSS reference repositories that can be added to the current instance.
       *
       * @param request ListAlternativeSnapshotReposRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlternativeSnapshotReposResponse
       */
      Models::ListAlternativeSnapshotReposResponse listAlternativeSnapshotReposWithOptions(const string &InstanceId, const Models::ListAlternativeSnapshotReposRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OSS reference repositories that can be added to the current instance.
       *
       * @param request ListAlternativeSnapshotReposRequest
       * @return ListAlternativeSnapshotReposResponse
       */
      Models::ListAlternativeSnapshotReposResponse listAlternativeSnapshotRepos(const string &InstanceId, const Models::ListAlternativeSnapshotReposRequest &request);

      /**
       * @summary Retrieves a list of available Elasticsearch instances when configuring X-Pack monitoring for a Logstash instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableEsInstanceIdsResponse
       */
      Models::ListAvailableEsInstanceIdsResponse listAvailableEsInstanceIdsWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of available Elasticsearch instances when configuring X-Pack monitoring for a Logstash instance.
       *
       * @return ListAvailableEsInstanceIdsResponse
       */
      Models::ListAvailableEsInstanceIdsResponse listAvailableEsInstanceIds(const string &InstanceId);

      /**
       * @summary Retrieves a list of collectors.
       *
       * @param request ListCollectorsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCollectorsResponse
       */
      Models::ListCollectorsResponse listCollectorsWithOptions(const Models::ListCollectorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of collectors.
       *
       * @param request ListCollectorsRequest
       * @return ListCollectorsResponse
       */
      Models::ListCollectorsResponse listCollectors(const Models::ListCollectorsRequest &request);

      /**
       * @summary Retrieves the list of composable templates for an Elasticsearch instance.
       *
       * @description For more information, see [Store massive amounts of data through OpenStore](https://help.aliyun.com/document_detail/317694.html).
       *
       * @param request ListComponentIndicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComponentIndicesResponse
       */
      Models::ListComponentIndicesResponse listComponentIndicesWithOptions(const string &InstanceId, const Models::ListComponentIndicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of composable templates for an Elasticsearch instance.
       *
       * @description For more information, see [Store massive amounts of data through OpenStore](https://help.aliyun.com/document_detail/317694.html).
       *
       * @param request ListComponentIndicesRequest
       * @return ListComponentIndicesResponse
       */
      Models::ListComponentIndicesResponse listComponentIndices(const string &InstanceId, const Models::ListComponentIndicesRequest &request);

      /**
       * @summary Retrieves a list of instances that have established private network peering with the current instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectedClustersResponse
       */
      Models::ListConnectedClustersResponse listConnectedClustersWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of instances that have established private network peering with the current instance.
       *
       * @return ListConnectedClustersResponse
       */
      Models::ListConnectedClustersResponse listConnectedClusters(const string &InstanceId);

      /**
       * @summary Retrieves the list of index data streams in an Elasticsearch cluster.
       *
       * @param request ListDataStreamsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataStreamsResponse
       */
      Models::ListDataStreamsResponse listDataStreamsWithOptions(const string &InstanceId, const Models::ListDataStreamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of index data streams in an Elasticsearch cluster.
       *
       * @param request ListDataStreamsRequest
       * @return ListDataStreamsResponse
       */
      Models::ListDataStreamsResponse listDataStreams(const string &InstanceId, const Models::ListDataStreamsRequest &request);

      /**
       * @summary Retrieves a list of data migration tasks between different Elasticsearch clusters.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataTasksResponse
       */
      Models::ListDataTasksResponse listDataTasksWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data migration tasks between different Elasticsearch clusters.
       *
       * @return ListDataTasksResponse
       */
      Models::ListDataTasksResponse listDataTasks(const string &InstanceId);

      /**
       * @summary Invokes the ListDefaultCollectorConfigurations operation to retrieve the default configuration file of a collector.
       *
       * @param request ListDefaultCollectorConfigurationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDefaultCollectorConfigurationsResponse
       */
      Models::ListDefaultCollectorConfigurationsResponse listDefaultCollectorConfigurationsWithOptions(const Models::ListDefaultCollectorConfigurationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the ListDefaultCollectorConfigurations operation to retrieve the default configuration file of a collector.
       *
       * @param request ListDefaultCollectorConfigurationsRequest
       * @return ListDefaultCollectorConfigurationsResponse
       */
      Models::ListDefaultCollectorConfigurationsResponse listDefaultCollectorConfigurations(const Models::ListDefaultCollectorConfigurationsRequest &request);

      /**
       * @summary Queries the list of historical index templates.
       *
       * @description For more information, see [Use OpenStore to store large volumes of data](https://help.aliyun.com/document_detail/317694.html).
       *
       * @param request ListDeprecatedTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeprecatedTemplatesResponse
       */
      Models::ListDeprecatedTemplatesResponse listDeprecatedTemplatesWithOptions(const string &InstanceId, const Models::ListDeprecatedTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of historical index templates.
       *
       * @description For more information, see [Use OpenStore to store large volumes of data](https://help.aliyun.com/document_detail/317694.html).
       *
       * @param request ListDeprecatedTemplatesRequest
       * @return ListDeprecatedTemplatesResponse
       */
      Models::ListDeprecatedTemplatesResponse listDeprecatedTemplates(const string &InstanceId, const Models::ListDeprecatedTemplatesRequest &request);

      /**
       * @summary Retrieves the diagnostic indexes from the intelligent O&M module for a specified instance.
       *
       * @param request ListDiagnoseIndicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiagnoseIndicesResponse
       */
      Models::ListDiagnoseIndicesResponse listDiagnoseIndicesWithOptions(const string &InstanceId, const Models::ListDiagnoseIndicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the diagnostic indexes from the intelligent O&M module for a specified instance.
       *
       * @param request ListDiagnoseIndicesRequest
       * @return ListDiagnoseIndicesResponse
       */
      Models::ListDiagnoseIndicesResponse listDiagnoseIndices(const string &InstanceId, const Models::ListDiagnoseIndicesRequest &request);

      /**
       * @summary Calls ListDiagnoseReport to retrieve historical reports of intelligent O&M.
       *
       * @param request ListDiagnoseReportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiagnoseReportResponse
       */
      Models::ListDiagnoseReportResponse listDiagnoseReportWithOptions(const string &InstanceId, const Models::ListDiagnoseReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ListDiagnoseReport to retrieve historical reports of intelligent O&M.
       *
       * @param request ListDiagnoseReportRequest
       * @return ListDiagnoseReportResponse
       */
      Models::ListDiagnoseReportResponse listDiagnoseReport(const string &InstanceId, const Models::ListDiagnoseReportRequest &request);

      /**
       * @summary Retrieves all IDs of Intelligent O&M Center historical reports.
       *
       * @param request ListDiagnoseReportIdsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiagnoseReportIdsResponse
       */
      Models::ListDiagnoseReportIdsResponse listDiagnoseReportIdsWithOptions(const string &InstanceId, const Models::ListDiagnoseReportIdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all IDs of Intelligent O&M Center historical reports.
       *
       * @param request ListDiagnoseReportIdsRequest
       * @return ListDiagnoseReportIdsResponse
       */
      Models::ListDiagnoseReportIdsResponse listDiagnoseReportIds(const string &InstanceId, const Models::ListDiagnoseReportIdsRequest &request);

      /**
       * @summary Lists the intelligent diagnostic items for an Elasticsearch instance.
       *
       * @param request ListDiagnosisItemsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiagnosisItemsResponse
       */
      Models::ListDiagnosisItemsResponse listDiagnosisItemsWithOptions(const Models::ListDiagnosisItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the intelligent diagnostic items for an Elasticsearch instance.
       *
       * @param request ListDiagnosisItemsRequest
       * @return ListDiagnosisItemsResponse
       */
      Models::ListDiagnosisItemsResponse listDiagnosisItems(const Models::ListDiagnosisItemsRequest &request);

      /**
       * @summary Queries the information of a specified dictionary.
       *
       * @param request ListDictInformationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDictInformationResponse
       */
      Models::ListDictInformationResponse listDictInformationWithOptions(const string &InstanceId, const Models::ListDictInformationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a specified dictionary.
       *
       * @param request ListDictInformationRequest
       * @return ListDictInformationResponse
       */
      Models::ListDictInformationResponse listDictInformation(const string &InstanceId, const Models::ListDictInformationRequest &request);

      /**
       * @summary Queries the details of the dictionary list for a specified type.
       *
       * @param request ListDictsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDictsResponse
       */
      Models::ListDictsResponse listDictsWithOptions(const string &InstanceId, const Models::ListDictsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the dictionary list for a specified type.
       *
       * @param request ListDictsRequest
       * @return ListDictsResponse
       */
      Models::ListDictsResponse listDicts(const string &InstanceId, const Models::ListDictsRequest &request);

      /**
       * @summary Retrieves the list of ECS instances under the current user\\"s VPC and vSwitch.
       *
       * @description >Notice:  Before calling this operation, create the AliyunElasticsearchAccessingOOSRole and AliyunOOSAccessingECS4ESRole service-linked roles. These roles allow the Elasticsearch service account to obtain ECS access permissions of the Alibaba Cloud account. For more information, see [Collect ECS service logs](https://help.aliyun.com/document_detail/146446.html).
       * .
       *
       * @param request ListEcsInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEcsInstancesResponse
       */
      Models::ListEcsInstancesResponse listEcsInstancesWithOptions(const Models::ListEcsInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of ECS instances under the current user\\"s VPC and vSwitch.
       *
       * @description >Notice:  Before calling this operation, create the AliyunElasticsearchAccessingOOSRole and AliyunOOSAccessingECS4ESRole service-linked roles. These roles allow the Elasticsearch service account to obtain ECS access permissions of the Alibaba Cloud account. For more information, see [Collect ECS service logs](https://help.aliyun.com/document_detail/146446.html).
       * .
       *
       * @param request ListEcsInstancesRequest
       * @return ListEcsInstancesResponse
       */
      Models::ListEcsInstancesResponse listEcsInstances(const Models::ListEcsInstancesRequest &request);

      /**
       * @summary Obtain Event List
       *
       * @param request ListEventRecordsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventRecordsResponse
       */
      Models::ListEventRecordsResponse listEventRecordsWithOptions(const string &eventType, const Models::ListEventRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain Event List
       *
       * @param request ListEventRecordsRequest
       * @return ListEventRecordsResponse
       */
      Models::ListEventRecordsResponse listEventRecords(const string &eventType, const Models::ListEventRecordsRequest &request);

      /**
       * @summary Retrieves the extension file configuration of a Logstash instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExtendfilesResponse
       */
      Models::ListExtendfilesResponse listExtendfilesWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the extension file configuration of a Logstash instance.
       *
       * @return ListExtendfilesResponse
       */
      Models::ListExtendfilesResponse listExtendfiles(const string &InstanceId);

      /**
       * @summary Queries the list of index lifecycle policies that have been created for a cluster.
       *
       * @param request ListILMPoliciesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListILMPoliciesResponse
       */
      Models::ListILMPoliciesResponse listILMPoliciesWithOptions(const string &InstanceId, const Models::ListILMPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of index lifecycle policies that have been created for a cluster.
       *
       * @param request ListILMPoliciesRequest
       * @return ListILMPoliciesResponse
       */
      Models::ListILMPoliciesResponse listILMPolicies(const string &InstanceId, const Models::ListILMPoliciesRequest &request);

      /**
       * @summary Queries a list of index templates.
       *
       * @param request ListIndexTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndexTemplatesResponse
       */
      Models::ListIndexTemplatesResponse listIndexTemplatesWithOptions(const string &InstanceId, const Models::ListIndexTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of index templates.
       *
       * @param request ListIndexTemplatesRequest
       * @return ListIndexTemplatesResponse
       */
      Models::ListIndexTemplatesResponse listIndexTemplates(const string &InstanceId, const Models::ListIndexTemplatesRequest &request);

      /**
       * @summary Queries the information about Elasticsearch instances.
       *
       * @param request ListInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstanceWithOptions(const Models::ListInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about Elasticsearch instances.
       *
       * @param request ListInstanceRequest
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstance(const Models::ListInstanceRequest &request);

      /**
       * @summary Queries the list of hardware O&M events triggered by an Elasticsearch cluster.
       *
       * @param tmpReq ListInstanceHistoryEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceHistoryEventsResponse
       */
      Models::ListInstanceHistoryEventsResponse listInstanceHistoryEventsWithOptions(const Models::ListInstanceHistoryEventsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of hardware O&M events triggered by an Elasticsearch cluster.
       *
       * @param request ListInstanceHistoryEventsRequest
       * @return ListInstanceHistoryEventsResponse
       */
      Models::ListInstanceHistoryEventsResponse listInstanceHistoryEvents(const Models::ListInstanceHistoryEventsRequest &request);

      /**
       * @summary Filters system indexes from the index list of a cluster.
       *
       * @description The ListInstanceIndices operation is applicable only to Elasticsearch instances that have the indexing service enabled. Query index information by using the Elasticsearch API. For more information, see [cat indices API
       * ](https://www.elastic.co/guide/en/elasticsearch/reference/current/cat-indices.html).
       *
       * @param request ListInstanceIndicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceIndicesResponse
       */
      Models::ListInstanceIndicesResponse listInstanceIndicesWithOptions(const string &InstanceId, const Models::ListInstanceIndicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Filters system indexes from the index list of a cluster.
       *
       * @description The ListInstanceIndices operation is applicable only to Elasticsearch instances that have the indexing service enabled. Query index information by using the Elasticsearch API. For more information, see [cat indices API
       * ](https://www.elastic.co/guide/en/elasticsearch/reference/current/cat-indices.html).
       *
       * @param request ListInstanceIndicesRequest
       * @return ListInstanceIndicesResponse
       */
      Models::ListInstanceIndicesResponse listInstanceIndices(const string &InstanceId, const Models::ListInstanceIndicesRequest &request);

      /**
       * @summary Retrieves the list of plugins installed on the Kibana node of an Elasticsearch instance.
       *
       * @param request ListKibanaPluginsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKibanaPluginsResponse
       */
      Models::ListKibanaPluginsResponse listKibanaPluginsWithOptions(const string &InstanceId, const Models::ListKibanaPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of plugins installed on the Kibana node of an Elasticsearch instance.
       *
       * @param request ListKibanaPluginsRequest
       * @return ListKibanaPluginsResponse
       */
      Models::ListKibanaPluginsResponse listKibanaPlugins(const string &InstanceId, const Models::ListKibanaPluginsRequest &request);

      /**
       * @summary Queries the details of the Kibana private network connection.
       *
       * @description This API operation supports only cloud-native instances.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKibanaPvlNetworkResponse
       */
      Models::ListKibanaPvlNetworkResponse listKibanaPvlNetworkWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the Kibana private network connection.
       *
       * @description This API operation supports only cloud-native instances.
       *
       * @return ListKibanaPvlNetworkResponse
       */
      Models::ListKibanaPvlNetworkResponse listKibanaPvlNetwork(const string &InstanceId);

      /**
       * @summary Displays the details of all or specified Logstash instances in a list.
       *
       * @param request ListLogstashRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogstashResponse
       */
      Models::ListLogstashResponse listLogstashWithOptions(const Models::ListLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays the details of all or specified Logstash instances in a list.
       *
       * @param request ListLogstashRequest
       * @return ListLogstashResponse
       */
      Models::ListLogstashResponse listLogstash(const Models::ListLogstashRequest &request);

      /**
       * @summary Queries the logs of a Logstash instance.
       *
       * @param request ListLogstashLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogstashLogResponse
       */
      Models::ListLogstashLogResponse listLogstashLogWithOptions(const string &InstanceId, const Models::ListLogstashLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of a Logstash instance.
       *
       * @param request ListLogstashLogRequest
       * @return ListLogstashLogResponse
       */
      Models::ListLogstashLogResponse listLogstashLog(const string &InstanceId, const Models::ListLogstashLogRequest &request);

      /**
       * @summary Calls ListLogstashPlugins to retrieve detailed information about all or specified plugins.
       *
       * @param request ListLogstashPluginsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogstashPluginsResponse
       */
      Models::ListLogstashPluginsResponse listLogstashPluginsWithOptions(const string &InstanceId, const Models::ListLogstashPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ListLogstashPlugins to retrieve detailed information about all or specified plugins.
       *
       * @param request ListLogstashPluginsRequest
       * @return ListLogstashPluginsResponse
       */
      Models::ListLogstashPluginsResponse listLogstashPlugins(const string &InstanceId, const Models::ListLogstashPluginsRequest &request);

      /**
       * @summary Historical report list of intelligent O&M.
       *
       * @param request ListNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const string &ResId, const Models::ListNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Historical report list of intelligent O&M.
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const string &ResId, const Models::ListNodesRequest &request);

      /**
       * @summary Retrieves the pipeline list of a Logstash instance.
       *
       * @param request ListPipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineResponse
       */
      Models::ListPipelineResponse listPipelineWithOptions(const string &InstanceId, const Models::ListPipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the pipeline list of a Logstash instance.
       *
       * @param request ListPipelineRequest
       * @return ListPipelineResponse
       */
      Models::ListPipelineResponse listPipeline(const string &InstanceId, const Models::ListPipelineRequest &request);

      /**
       * @summary Retrieves the list of pipeline IDs for a Logstash instance.
       *
       * @description > Pipeline management is divided into configuration file management and Kibana pipeline management. Kibana pipeline management is not available in the console for some regions.
       *
       * @param request ListPipelineIdsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineIdsResponse
       */
      Models::ListPipelineIdsResponse listPipelineIdsWithOptions(const string &InstanceId, const Models::ListPipelineIdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of pipeline IDs for a Logstash instance.
       *
       * @description > Pipeline management is divided into configuration file management and Kibana pipeline management. Kibana pipeline management is not available in the console for some regions.
       *
       * @param request ListPipelineIdsRequest
       * @return ListPipelineIdsResponse
       */
      Models::ListPipelineIdsResponse listPipelineIds(const string &InstanceId, const Models::ListPipelineIdsRequest &request);

      /**
       * @summary Retrieves the plugin list of a specified Alibaba Cloud Elasticsearch instance.
       *
       * @param request ListPluginsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginsResponse
       */
      Models::ListPluginsResponse listPluginsWithOptions(const string &InstanceId, const Models::ListPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the plugin list of a specified Alibaba Cloud Elasticsearch instance.
       *
       * @param request ListPluginsRequest
       * @return ListPluginsResponse
       */
      Models::ListPluginsResponse listPlugins(const string &InstanceId, const Models::ListPluginsRequest &request);

      /**
       * @summary Queries logs of different types for an Elasticsearch instance.
       *
       * @param request ListSearchLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchLogResponse
       */
      Models::ListSearchLogResponse listSearchLogWithOptions(const string &InstanceId, const Models::ListSearchLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries logs of different types for an Elasticsearch instance.
       *
       * @param request ListSearchLogRequest
       * @return ListSearchLogResponse
       */
      Models::ListSearchLogResponse listSearchLog(const string &InstanceId, const Models::ListSearchLogRequest &request);

      /**
       * @summary Queries the data progress list of ongoing and completed shard recoveries. By default, only ongoing shard recovery information is returned.
       *
       * @description > Shard recovery is the process of synchronizing data from a primary shard to a replica shard. After recovery is complete, the replica shard becomes available for search.
       *
       * @param request ListShardRecoveriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListShardRecoveriesResponse
       */
      Models::ListShardRecoveriesResponse listShardRecoveriesWithOptions(const string &InstanceId, const Models::ListShardRecoveriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data progress list of ongoing and completed shard recoveries. By default, only ongoing shard recovery information is returned.
       *
       * @description > Shard recovery is the process of synchronizing data from a primary shard to a replica shard. After recovery is complete, the replica shard becomes available for search.
       *
       * @param request ListShardRecoveriesRequest
       * @return ListShardRecoveriesResponse
       */
      Models::ListShardRecoveriesResponse listShardRecoveries(const string &InstanceId, const Models::ListShardRecoveriesRequest &request);

      /**
       * @summary Retrieves the list of cross-cluster OSS repository settings for the current instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSnapshotReposByInstanceIdResponse
       */
      Models::ListSnapshotReposByInstanceIdResponse listSnapshotReposByInstanceIdWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of cross-cluster OSS repository settings for the current instance.
       *
       * @return ListSnapshotReposByInstanceIdResponse
       */
      Models::ListSnapshotReposByInstanceIdResponse listSnapshotReposByInstanceId(const string &InstanceId);

      /**
       * @summary Statistics of management event records
       *
       * @param request ListStatsEventRecordsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStatsEventRecordsResponse
       */
      Models::ListStatsEventRecordsResponse listStatsEventRecordsWithOptions(const Models::ListStatsEventRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Statistics of management event records
       *
       * @param request ListStatsEventRecordsRequest
       * @return ListStatsEventRecordsResponse
       */
      Models::ListStatsEventRecordsResponse listStatsEventRecords(const Models::ListStatsEventRecordsRequest &request);

      /**
       * @summary Retrieves the relationships between all instances and tags.
       *
       * @param request ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the relationships between all instances and tags.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries all labels created by the user in the current region.
       *
       * @param request ListTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTagsWithOptions(const Models::ListTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all labels created by the user in the current region.
       *
       * @param request ListTagsRequest
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTags(const Models::ListTagsRequest &request);

      /**
       * @summary Custom plugin list
       *
       * @param request ListUserPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserPluginResponse
       */
      Models::ListUserPluginResponse listUserPluginWithOptions(const string &instanceId, const Models::ListUserPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Custom plugin list
       *
       * @param request ListUserPluginRequest
       * @return ListUserPluginResponse
       */
      Models::ListUserPluginResponse listUserPlugin(const string &instanceId, const Models::ListUserPluginRequest &request);

      /**
       * @summary Queries the status of endpoints in the VPC of a service account.
       *
       * @param request ListVpcEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcEndpointsResponse
       */
      Models::ListVpcEndpointsResponse listVpcEndpointsWithOptions(const string &InstanceId, const Models::ListVpcEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of endpoints in the VPC of a service account.
       *
       * @param request ListVpcEndpointsRequest
       * @return ListVpcEndpointsResponse
       */
      Models::ListVpcEndpointsResponse listVpcEndpoints(const string &InstanceId, const Models::ListVpcEndpointsRequest &request);

      /**
       * @summary Migrates nodes in a specified zone to a destination zone.
       *
       * @description When you upgrade the specifications of an instance and encounter insufficient inventory in the current zone, you can resolve this issue by migrating zone nodes. Before calling this operation, make sure that:
       * - Your account has a zone with sufficient resources.
       *    After migrating nodes of the current specifications to another zone, you must manually [upgrade the cluster](https://help.aliyun.com/document_detail/96650.html). The cluster is not upgraded during the migration. Therefore, select a zone with sufficient resources to avoid cluster upgrade failures. Select a zone with a later alphabetical order first. For example, between ap-southeast-1e and ap-southeast-1h, select ap-southeast-1h first.
       * - The cluster is in a healthy state.
       *    You can run the `GET _cat/health?v` command to check the cluster health status.
       *
       * @param request MigrateToOtherZoneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZoneWithOptions(const string &InstanceId, const Models::MigrateToOtherZoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates nodes in a specified zone to a destination zone.
       *
       * @description When you upgrade the specifications of an instance and encounter insufficient inventory in the current zone, you can resolve this issue by migrating zone nodes. Before calling this operation, make sure that:
       * - Your account has a zone with sufficient resources.
       *    After migrating nodes of the current specifications to another zone, you must manually [upgrade the cluster](https://help.aliyun.com/document_detail/96650.html). The cluster is not upgraded during the migration. Therefore, select a zone with sufficient resources to avoid cluster upgrade failures. Select a zone with a later alphabetical order first. For example, between ap-southeast-1e and ap-southeast-1h, select ap-southeast-1h first.
       * - The cluster is in a healthy state.
       *    You can run the `GET _cat/health?v` command to check the cluster health status.
       *
       * @param request MigrateToOtherZoneRequest
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZone(const string &InstanceId, const Models::MigrateToOtherZoneRequest &request);

      /**
       * @summary Updates the ECS instances on which a collector is installed.
       *
       * @param request ModifyDeployMachineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeployMachineResponse
       */
      Models::ModifyDeployMachineResponse modifyDeployMachineWithOptions(const string &ResId, const Models::ModifyDeployMachineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the ECS instances on which a collector is installed.
       *
       * @param request ModifyDeployMachineRequest
       * @return ModifyDeployMachineResponse
       */
      Models::ModifyDeployMachineResponse modifyDeployMachine(const string &ResId, const Models::ModifyDeployMachineRequest &request);

      /**
       * @summary Updates the elastic scaling rules of a cluster.
       *
       * @param request ModifyElastictaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElastictaskResponse
       */
      Models::ModifyElastictaskResponse modifyElastictaskWithOptions(const string &InstanceId, const Models::ModifyElastictaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the elastic scaling rules of a cluster.
       *
       * @param request ModifyElastictaskRequest
       * @return ModifyElastictaskResponse
       */
      Models::ModifyElastictaskResponse modifyElastictask(const string &InstanceId, const Models::ModifyElastictaskRequest &request);

      /**
       * @summary Modifies and enables the maintenance window for an instance.
       *
       * @description Before calling this operation, note the following:
       * - Before the scheduled maintenance, Alibaba Cloud sends SMS messages and emails to the contacts configured in your Alibaba Cloud account. Check your messages promptly.
       * - On the day of instance maintenance, to ensure stability throughout the maintenance process, the instance enters the Effective state before the maintenance window begins. While the instance is in this state, access to the cluster and query operations such as performance monitoring are not affected. However, cluster change operations such as cluster upgrades and restarts are temporarily unavailable.
       * - During the maintenance window, transient disconnections may occur. Ensure that your application has a reconnection mechanism.
       *
       * @param request ModifyInstanceMaintainTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceMaintainTimeResponse
       */
      Models::ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTimeWithOptions(const string &InstanceId, const Models::ModifyInstanceMaintainTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies and enables the maintenance window for an instance.
       *
       * @description Before calling this operation, note the following:
       * - Before the scheduled maintenance, Alibaba Cloud sends SMS messages and emails to the contacts configured in your Alibaba Cloud account. Check your messages promptly.
       * - On the day of instance maintenance, to ensure stability throughout the maintenance process, the instance enters the Effective state before the maintenance window begins. While the instance is in this state, access to the cluster and query operations such as performance monitoring are not affected. However, cluster change operations such as cluster upgrades and restarts are temporarily unavailable.
       * - During the maintenance window, transient disconnections may occur. Ensure that your application has a reconnection mechanism.
       *
       * @param request ModifyInstanceMaintainTimeRequest
       * @return ModifyInstanceMaintainTimeResponse
       */
      Models::ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTime(const string &InstanceId, const Models::ModifyInstanceMaintainTimeRequest &request);

      /**
       * @summary For O&M events in the Event Center, you can specify a restart event, and the system will restart the specified edge zone of the relevant instance at the scheduled time.
       *
       * @param request ModifyScheduleExecuteTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScheduleExecuteTimeResponse
       */
      Models::ModifyScheduleExecuteTimeResponse modifyScheduleExecuteTimeWithOptions(const string &instanceId, const Models::ModifyScheduleExecuteTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary For O&M events in the Event Center, you can specify a restart event, and the system will restart the specified edge zone of the relevant instance at the scheduled time.
       *
       * @param request ModifyScheduleExecuteTimeRequest
       * @return ModifyScheduleExecuteTimeResponse
       */
      Models::ModifyScheduleExecuteTimeResponse modifyScheduleExecuteTime(const string &instanceId, const Models::ModifyScheduleExecuteTimeRequest &request);

      /**
       * @summary Calls ModifyWhiteIps to update the access whitelist of a specified instance.
       *
       * @description ## Before you begin
       * - You cannot update information for an instance whose instance status is activating, invalid, or freeze (inactive).
       * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters:
       *     - IP whitelist list: whiteIpList, nodeType, networkType
       *     - IP whitelist group: modifyMode, whiteIpGroup
       * - The public network access whitelist does not support private network IP addresses, and the internal-facing whitelist does not support public IP addresses.
       *
       * @param request ModifyWhiteIpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWhiteIpsResponse
       */
      Models::ModifyWhiteIpsResponse modifyWhiteIpsWithOptions(const string &InstanceId, const Models::ModifyWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ModifyWhiteIps to update the access whitelist of a specified instance.
       *
       * @description ## Before you begin
       * - You cannot update information for an instance whose instance status is activating, invalid, or freeze (inactive).
       * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters:
       *     - IP whitelist list: whiteIpList, nodeType, networkType
       *     - IP whitelist group: modifyMode, whiteIpGroup
       * - The public network access whitelist does not support private network IP addresses, and the internal-facing whitelist does not support public IP addresses.
       *
       * @param request ModifyWhiteIpsRequest
       * @return ModifyWhiteIpsResponse
       */
      Models::ModifyWhiteIpsResponse modifyWhiteIps(const string &InstanceId, const Models::ModifyWhiteIpsRequest &request);

      /**
       * @summary Modifies the resource group to which an instance belongs.
       *
       * @param request MoveResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const string &InstanceId, const Models::MoveResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group to which an instance belongs.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const string &InstanceId, const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Enables the intelligent O&M feature for an instance.
       *
       * @param request OpenDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenDiagnosisResponse
       */
      Models::OpenDiagnosisResponse openDiagnosisWithOptions(const string &InstanceId, const Models::OpenDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the intelligent O&M feature for an instance.
       *
       * @param request OpenDiagnosisRequest
       * @return OpenDiagnosisResponse
       */
      Models::OpenDiagnosisResponse openDiagnosis(const string &InstanceId, const Models::OpenDiagnosisRequest &request);

      /**
       * @summary Enables the HTTPS protocol. Before enabling HTTPS, make sure that you have purchased client nodes.
       *
       * @description > - To ensure data security, enable the HTTPS protocol.
       * - Except for versions 8.5 and 7.16<props="china"><ph> and version 7.10 in some regions</ph>, make sure that you have purchased client nodes before enabling HTTPS.
       *
       * @param request OpenHttpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenHttpsResponse
       */
      Models::OpenHttpsResponse openHttpsWithOptions(const string &InstanceId, const Models::OpenHttpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the HTTPS protocol. Before enabling HTTPS, make sure that you have purchased client nodes.
       *
       * @description > - To ensure data security, enable the HTTPS protocol.
       * - Except for versions 8.5 and 7.16<props="china"><ph> and version 7.10 in some regions</ph>, make sure that you have purchased client nodes before enabling HTTPS.
       *
       * @param request OpenHttpsRequest
       * @return OpenHttpsResponse
       */
      Models::OpenHttpsResponse openHttps(const string &InstanceId, const Models::OpenHttpsRequest &request);

      /**
       * @summary Upload a custom plugin to the plugin repository. After uploading, the plugin is in the pending installation status.
       *
       * @param request PluginAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PluginAnalysisResponse
       */
      Models::PluginAnalysisResponse pluginAnalysisWithOptions(const string &instanceId, const Models::PluginAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload a custom plugin to the plugin repository. After uploading, the plugin is in the pending installation status.
       *
       * @param request PluginAnalysisRequest
       * @return PluginAnalysisResponse
       */
      Models::PluginAnalysisResponse pluginAnalysis(const string &instanceId, const Models::PluginAnalysisRequest &request);

      /**
       * @summary Sends a test alert message by calling PostEmonTryAlarmRule.
       *
       * @description > This API operation can be called up to 10 times per hour.
       *
       * @param request PostEmonTryAlarmRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostEmonTryAlarmRuleResponse
       */
      Models::PostEmonTryAlarmRuleResponse postEmonTryAlarmRuleWithOptions(const string &ProjectId, const string &AlarmGroupId, const Models::PostEmonTryAlarmRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a test alert message by calling PostEmonTryAlarmRule.
       *
       * @description > This API operation can be called up to 10 times per hour.
       *
       * @param request PostEmonTryAlarmRuleRequest
       * @return PostEmonTryAlarmRuleResponse
       */
      Models::PostEmonTryAlarmRuleResponse postEmonTryAlarmRule(const string &ProjectId, const string &AlarmGroupId, const Models::PostEmonTryAlarmRuleRequest &request);

      /**
       * @summary Calls RecommendTemplates to retrieve recommended cluster configurations.
       *
       * @param request RecommendTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecommendTemplatesResponse
       */
      Models::RecommendTemplatesResponse recommendTemplatesWithOptions(const string &InstanceId, const Models::RecommendTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls RecommendTemplates to retrieve recommended cluster configurations.
       *
       * @param request RecommendTemplatesRequest
       * @return RecommendTemplatesResponse
       */
      Models::RecommendTemplatesResponse recommendTemplates(const string &InstanceId, const Models::RecommendTemplatesRequest &request);

      /**
       * @summary Retries the installation of a collector that failed to install during creation.
       *
       * @param request ReinstallCollectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReinstallCollectorResponse
       */
      Models::ReinstallCollectorResponse reinstallCollectorWithOptions(const string &ResId, const Models::ReinstallCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries the installation of a collector that failed to install during creation.
       *
       * @param request ReinstallCollectorRequest
       * @return ReinstallCollectorResponse
       */
      Models::ReinstallCollectorResponse reinstallCollector(const string &ResId, const Models::ReinstallCollectorRequest &request);

      /**
       * @summary You can delete uploaded but uninstalled plugins from the plugin library.
       *
       * @param request RemovePluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePluginResponse
       */
      Models::RemovePluginResponse removePluginWithOptions(const string &instanceId, const Models::RemovePluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can delete uploaded but uninstalled plugins from the plugin library.
       *
       * @param request RemovePluginRequest
       * @return RemovePluginResponse
       */
      Models::RemovePluginResponse removePlugin(const string &instanceId, const Models::RemovePluginRequest &request);

      /**
       * @summary Renews a subscription Elasticsearch instance.
       *
       * @param request RenewInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const string &InstanceId, const Models::RenewInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a subscription Elasticsearch instance.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const string &InstanceId, const Models::RenewInstanceRequest &request);

      /**
       * @summary Renews a specified Logstash instance.
       *
       * @param request RenewLogstashRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewLogstashResponse
       */
      Models::RenewLogstashResponse renewLogstashWithOptions(const string &InstanceId, const Models::RenewLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a specified Logstash instance.
       *
       * @param request RenewLogstashRequest
       * @return RenewLogstashResponse
       */
      Models::RenewLogstashResponse renewLogstash(const string &InstanceId, const Models::RenewLogstashRequest &request);

      /**
       * @summary Restarts a collector to perform data collection.
       *
       * @param request RestartCollectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartCollectorResponse
       */
      Models::RestartCollectorResponse restartCollectorWithOptions(const string &ResId, const Models::RestartCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a collector to perform data collection.
       *
       * @param request RestartCollectorRequest
       * @return RestartCollectorResponse
       */
      Models::RestartCollectorResponse restartCollector(const string &ResId, const Models::RestartCollectorRequest &request);

      /**
       * @summary Restarts an Elasticsearch cluster.
       *
       * @description > After the restart, the instance enters the activating state. After the restart is complete, the instance status changes to active. Alibaba Cloud Elasticsearch supports single-node restarts. Node restarts are classified into normal restarts and blue-green restarts.
       *
       * @param request RestartInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const string &InstanceId, const Models::RestartInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an Elasticsearch cluster.
       *
       * @description > After the restart, the instance enters the activating state. After the restart is complete, the instance status changes to active. Alibaba Cloud Elasticsearch supports single-node restarts. Node restarts are classified into normal restarts and blue-green restarts.
       *
       * @param request RestartInstanceRequest
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const string &InstanceId, const Models::RestartInstanceRequest &request);

      /**
       * @summary Restarts a specified instance. After the restart, the instance enters the activating (activing) state.
       *
       * @param request RestartLogstashRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartLogstashResponse
       */
      Models::RestartLogstashResponse restartLogstashWithOptions(const string &InstanceId, const Models::RestartLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a specified instance. After the restart, the instance enters the activating (activing) state.
       *
       * @param request RestartLogstashRequest
       * @return RestartLogstashResponse
       */
      Models::RestartLogstashResponse restartLogstash(const string &InstanceId, const Models::RestartLogstashRequest &request);

      /**
       * @summary Resumes an interrupted change task for an instance.
       *
       * @param request ResumeElasticsearchTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeElasticsearchTaskResponse
       */
      Models::ResumeElasticsearchTaskResponse resumeElasticsearchTaskWithOptions(const string &InstanceId, const Models::ResumeElasticsearchTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an interrupted change task for an instance.
       *
       * @param request ResumeElasticsearchTaskRequest
       * @return ResumeElasticsearchTaskResponse
       */
      Models::ResumeElasticsearchTaskResponse resumeElasticsearchTask(const string &InstanceId, const Models::ResumeElasticsearchTaskRequest &request);

      /**
       * @summary Resumes an interrupted instance change task. After the task is resumed, the instance enters the activating state.
       *
       * @param request ResumeLogstashTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeLogstashTaskResponse
       */
      Models::ResumeLogstashTaskResponse resumeLogstashTaskWithOptions(const string &InstanceId, const Models::ResumeLogstashTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an interrupted instance change task. After the task is resumed, the instance enters the activating state.
       *
       * @param request ResumeLogstashTaskRequest
       * @return ResumeLogstashTaskResponse
       */
      Models::ResumeLogstashTaskResponse resumeLogstashTask(const string &InstanceId, const Models::ResumeLogstashTaskRequest &request);

      /**
       * @summary Creates a new index for a data stream or index alias.
       *
       * @param request RolloverDataStreamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RolloverDataStreamResponse
       */
      Models::RolloverDataStreamResponse rolloverDataStreamWithOptions(const string &InstanceId, const string &DataStream, const Models::RolloverDataStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new index for a data stream or index alias.
       *
       * @param request RolloverDataStreamRequest
       * @return RolloverDataStreamResponse
       */
      Models::RolloverDataStreamResponse rolloverDataStream(const string &InstanceId, const string &DataStream, const Models::RolloverDataStreamRequest &request);

      /**
       * @summary Deploys Logstash pipelines immediately.
       *
       * @param request RunPipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunPipelinesResponse
       */
      Models::RunPipelinesResponse runPipelinesWithOptions(const string &InstanceId, const Models::RunPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys Logstash pipelines immediately.
       *
       * @param request RunPipelinesRequest
       * @return RunPipelinesResponse
       */
      Models::RunPipelinesResponse runPipelines(const string &InstanceId, const Models::RunPipelinesRequest &request);

      /**
       * @summary Scales in nodes of a specified role in an Elasticsearch cluster.
       *
       * @description Note the following when you invoke this operation:
       * Before scaling in data nodes of a cluster, perform data migration from the nodes to be removed to other nodes. After you confirm that the nodes to be removed contain no data, proceed with the scale-in operation.
       *
       * @param request ShrinkNodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ShrinkNodeResponse
       */
      Models::ShrinkNodeResponse shrinkNodeWithOptions(const string &InstanceId, const Models::ShrinkNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales in nodes of a specified role in an Elasticsearch cluster.
       *
       * @description Note the following when you invoke this operation:
       * Before scaling in data nodes of a cluster, perform data migration from the nodes to be removed to other nodes. After you confirm that the nodes to be removed contain no data, proceed with the scale-in operation.
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
       * @summary Calls StopCollector to stop a running collector.
       *
       * @param request StopCollectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCollectorResponse
       */
      Models::StopCollectorResponse stopCollectorWithOptions(const string &ResId, const Models::StopCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls StopCollector to stop a running collector.
       *
       * @param request StopCollectorRequest
       * @return StopCollectorResponse
       */
      Models::StopCollectorResponse stopCollector(const string &ResId, const Models::StopCollectorRequest &request);

      /**
       * @summary Stops Logstash pipelines by calling StopPipelines.
       *
       * @param request StopPipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopPipelinesResponse
       */
      Models::StopPipelinesResponse stopPipelinesWithOptions(const string &InstanceId, const Models::StopPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops Logstash pipelines by calling StopPipelines.
       *
       * @param request StopPipelinesRequest
       * @return StopPipelinesResponse
       */
      Models::StopPipelinesResponse stopPipelines(const string &InstanceId, const Models::StopPipelinesRequest &request);

      /**
       * @summary Creates tag-resource relationships for a specified instance.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates tag-resource relationships for a specified instance.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Performs data migration on a node to facilitate node scale-in operations.
       *
       * @param request TransferNodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferNodeResponse
       */
      Models::TransferNodeResponse transferNodeWithOptions(const string &InstanceId, const Models::TransferNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs data migration on a node to facilitate node scale-in operations.
       *
       * @param request TransferNodeRequest
       * @return TransferNodeResponse
       */
      Models::TransferNodeResponse transferNode(const string &InstanceId, const Models::TransferNodeRequest &request);

      /**
       * @summary Enables or shuts down public or private network access for an Elasticsearch or Kibana cluster.
       *
       * @param request TriggerNetworkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerNetworkResponse
       */
      Models::TriggerNetworkResponse triggerNetworkWithOptions(const string &InstanceId, const Models::TriggerNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or shuts down public or private network access for an Elasticsearch or Kibana cluster.
       *
       * @param request TriggerNetworkRequest
       * @return TriggerNetworkResponse
       */
      Models::TriggerNetworkResponse triggerNetwork(const string &InstanceId, const Models::TriggerNetworkRequest &request);

      /**
       * @summary Disables an existing zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
       *
       * @description Disables an existing zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
       *
       * @param request TurnOffZoneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TurnOffZoneResponse
       */
      Models::TurnOffZoneResponse turnOffZoneWithOptions(const string &instanceId, const Models::TurnOffZoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an existing zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
       *
       * @description Disables an existing zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
       *
       * @param request TurnOffZoneRequest
       * @return TurnOffZoneResponse
       */
      Models::TurnOffZoneResponse turnOffZone(const string &instanceId, const Models::TurnOffZoneRequest &request);

      /**
       * @summary Reopens an offline zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
       *
       * @description Reopens an offline zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
       *
       * @param request TurnOnZoneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TurnOnZoneResponse
       */
      Models::TurnOnZoneResponse turnOnZoneWithOptions(const string &instanceId, const Models::TurnOnZoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reopens an offline zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
       *
       * @description Reopens an offline zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
       *
       * @param request TurnOnZoneRequest
       * @return TurnOnZoneResponse
       */
      Models::TurnOnZoneResponse turnOnZone(const string &instanceId, const Models::TurnOnZoneRequest &request);

      /**
       * @summary Uninstalls plug-ins from the Kibana node of an Elasticsearch instance.
       *
       * @param request UninstallKibanaPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallKibanaPluginResponse
       */
      Models::UninstallKibanaPluginResponse uninstallKibanaPluginWithOptions(const string &InstanceId, const Models::UninstallKibanaPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls plug-ins from the Kibana node of an Elasticsearch instance.
       *
       * @param request UninstallKibanaPluginRequest
       * @return UninstallKibanaPluginResponse
       */
      Models::UninstallKibanaPluginResponse uninstallKibanaPlugin(const string &InstanceId, const Models::UninstallKibanaPluginRequest &request);

      /**
       * @summary Uninstalls installed plug-ins from a Logstash instance.
       *
       * @param request UninstallLogstashPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallLogstashPluginResponse
       */
      Models::UninstallLogstashPluginResponse uninstallLogstashPluginWithOptions(const string &InstanceId, const Models::UninstallLogstashPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls installed plug-ins from a Logstash instance.
       *
       * @param request UninstallLogstashPluginRequest
       * @return UninstallLogstashPluginResponse
       */
      Models::UninstallLogstashPluginResponse uninstallLogstashPlugin(const string &InstanceId, const Models::UninstallLogstashPluginRequest &request);

      /**
       * @summary Uninstalls system plug-ins from an Elasticsearch instance.
       *
       * @param request UninstallPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallPluginResponse
       */
      Models::UninstallPluginResponse uninstallPluginWithOptions(const string &InstanceId, const Models::UninstallPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls system plug-ins from an Elasticsearch instance.
       *
       * @param request UninstallPluginRequest
       * @return UninstallPluginResponse
       */
      Models::UninstallPluginResponse uninstallPlugin(const string &InstanceId, const Models::UninstallPluginRequest &request);

      /**
       * @summary Deletes user resource tag associations for a specified instance.
       *
       * @description When calling this operation, note the following:
       * - Only user tags can be deleted.
       *   
       *     > User tags are tags that users manually add to instances. System tags are tags that Alibaba Cloud services add to user instances. System tags are classified into visible tags and invisible tags.
       * - If a tag is not associated with any resource, the tag is also deleted when the resource tag association is deleted.
       *
       * @param request UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes user resource tag associations for a specified instance.
       *
       * @description When calling this operation, note the following:
       * - Only user tags can be deleted.
       *   
       *     > User tags are tags that users manually add to instances. System tags are tags that Alibaba Cloud services add to user instances. System tags are classified into visible tags and invisible tags.
       * - If a tag is not associated with any resource, the tag is also deleted when the resource tag association is deleted.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the password of the elastic account for a specified Elasticsearch instance.
       *
       * @description When you invoke this operation, note the following:
       * You cannot update information when the instance status is activating, invalid, or freeze (inactive).
       *
       * @param request UpdateAdminPasswordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAdminPasswordResponse
       */
      Models::UpdateAdminPasswordResponse updateAdminPasswordWithOptions(const string &InstanceId, const Models::UpdateAdminPasswordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the password of the elastic account for a specified Elasticsearch instance.
       *
       * @description When you invoke this operation, note the following:
       * You cannot update information when the instance status is activating, invalid, or freeze (inactive).
       *
       * @param request UpdateAdminPasswordRequest
       * @return UpdateAdminPasswordResponse
       */
      Models::UpdateAdminPasswordResponse updateAdminPassword(const string &InstanceId, const Models::UpdateAdminPasswordRequest &request);

      /**
       * @summary Changes the garbage collector configuration of a specified Elasticsearch instance.
       *
       * @param request UpdateAdvancedSettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAdvancedSettingResponse
       */
      Models::UpdateAdvancedSettingResponse updateAdvancedSettingWithOptions(const string &InstanceId, const Models::UpdateAdvancedSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the garbage collector configuration of a specified Elasticsearch instance.
       *
       * @param request UpdateAdvancedSettingRequest
       * @return UpdateAdvancedSettingResponse
       */
      Models::UpdateAdvancedSettingResponse updateAdvancedSetting(const string &InstanceId, const Models::UpdateAdvancedSettingRequest &request);

      /**
       * @summary Updates the dictionary of the AliNLP tokenizer plugin (analysis-aliws).
       *
       * @description When calling this operation, note the following:
       * - Instances of version 5.x do not support the AliNLP tokenizer plugin.
       * - If the dictionary file is sourced from OSS, ensure that the OSS bucket has public-read permission.
       * - If a previously uploaded dictionary is not configured with ORIGIN, calling this operation will delete the dictionary file.
       *
       * @param request UpdateAliwsDictRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAliwsDictResponse
       */
      Models::UpdateAliwsDictResponse updateAliwsDictWithOptions(const string &InstanceId, const Models::UpdateAliwsDictRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the dictionary of the AliNLP tokenizer plugin (analysis-aliws).
       *
       * @description When calling this operation, note the following:
       * - Instances of version 5.x do not support the AliNLP tokenizer plugin.
       * - If the dictionary file is sourced from OSS, ensure that the OSS bucket has public-read permission.
       * - If a previously uploaded dictionary is not configured with ORIGIN, calling this operation will delete the dictionary file.
       *
       * @param request UpdateAliwsDictRequest
       * @return UpdateAliwsDictResponse
       */
      Models::UpdateAliwsDictResponse updateAliwsDict(const string &InstanceId, const Models::UpdateAliwsDictRequest &request);

      /**
       * @deprecated OpenAPI UpdateBlackIps is deprecated
       *
       * @summary Modifies the access blacklist of an Elasticsearch instance. This operation is deprecated.
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
       * @summary Modifies the access blacklist of an Elasticsearch instance. This operation is deprecated.
       *
       * @param request UpdateBlackIpsRequest
       * @return UpdateBlackIpsResponse
       */
      Models::UpdateBlackIpsResponse updateBlackIps(const string &InstanceId, const Models::UpdateBlackIpsRequest &request);

      /**
       * @summary Modifies the configuration of a collector.
       *
       * @param request UpdateCollectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCollectorResponse
       */
      Models::UpdateCollectorResponse updateCollectorWithOptions(const string &ResId, const Models::UpdateCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a collector.
       *
       * @param request UpdateCollectorRequest
       * @return UpdateCollectorResponse
       */
      Models::UpdateCollectorResponse updateCollector(const string &ResId, const Models::UpdateCollectorRequest &request);

      /**
       * @summary Calls UpdateCollectorName to modify the name of a collector.
       *
       * @param request UpdateCollectorNameRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCollectorNameResponse
       */
      Models::UpdateCollectorNameResponse updateCollectorNameWithOptions(const string &ResId, const Models::UpdateCollectorNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls UpdateCollectorName to modify the name of a collector.
       *
       * @param request UpdateCollectorNameRequest
       * @return UpdateCollectorNameResponse
       */
      Models::UpdateCollectorNameResponse updateCollectorName(const string &ResId, const Models::UpdateCollectorNameRequest &request);

      /**
       * @summary Updates a composable index template for an Elasticsearch instance.
       *
       * @description For more information, see [Use OpenStore to store massive amounts of data](https://help.aliyun.com/document_detail/317694.html).
       *
       * @param request UpdateComponentIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComponentIndexResponse
       */
      Models::UpdateComponentIndexResponse updateComponentIndexWithOptions(const string &InstanceId, const string &name, const Models::UpdateComponentIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a composable index template for an Elasticsearch instance.
       *
       * @description For more information, see [Use OpenStore to store massive amounts of data](https://help.aliyun.com/document_detail/317694.html).
       *
       * @param request UpdateComponentIndexRequest
       * @return UpdateComponentIndexResponse
       */
      Models::UpdateComponentIndexResponse updateComponentIndex(const string &InstanceId, const string &name, const Models::UpdateComponentIndexRequest &request);

      /**
       * @summary Changes the name of an Elasticsearch instance.
       *
       * @param request UpdateDescriptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDescriptionResponse
       */
      Models::UpdateDescriptionResponse updateDescriptionWithOptions(const string &InstanceId, const Models::UpdateDescriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of an Elasticsearch instance.
       *
       * @param request UpdateDescriptionRequest
       * @return UpdateDescriptionResponse
       */
      Models::UpdateDescriptionResponse updateDescription(const string &InstanceId, const Models::UpdateDescriptionRequest &request);

      /**
       * @summary Modifies the intelligent O&M scenario settings of a specified Elasticsearch instance.
       *
       * @param request UpdateDiagnosisSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDiagnosisSettingsResponse
       */
      Models::UpdateDiagnosisSettingsResponse updateDiagnosisSettingsWithOptions(const string &InstanceId, const Models::UpdateDiagnosisSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the intelligent O&M scenario settings of a specified Elasticsearch instance.
       *
       * @param request UpdateDiagnosisSettingsRequest
       * @return UpdateDiagnosisSettingsResponse
       */
      Models::UpdateDiagnosisSettingsResponse updateDiagnosisSettings(const string &InstanceId, const Models::UpdateDiagnosisSettingsRequest &request);

      /**
       * @summary Updates the user dictionary of an Elasticsearch instance.
       *
       * @description When calling this operation, note the following:
       * - If the dictionary file originates from OSS, ensure that the OSS storage space is publicly readable.
       * - If previously uploaded dictionaries are not configured with ORIGIN, the dictionary files will be deleted after this operation is called.
       *
       * @param request UpdateDictRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDictResponse
       */
      Models::UpdateDictResponse updateDictWithOptions(const string &InstanceId, const Models::UpdateDictRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the user dictionary of an Elasticsearch instance.
       *
       * @description When calling this operation, note the following:
       * - If the dictionary file originates from OSS, ensure that the OSS storage space is publicly readable.
       * - If previously uploaded dictionaries are not configured with ORIGIN, the dictionary files will be deleted after this operation is called.
       *
       * @param request UpdateDictRequest
       * @return UpdateDictResponse
       */
      Models::UpdateDictResponse updateDict(const string &InstanceId, const Models::UpdateDictRequest &request);

      /**
       * @summary Modify Cluster Dynamic Configuration
       *
       * @param request UpdateDynamicSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDynamicSettingsResponse
       */
      Models::UpdateDynamicSettingsResponse updateDynamicSettingsWithOptions(const string &InstanceId, const Models::UpdateDynamicSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Cluster Dynamic Configuration
       *
       * @param request UpdateDynamicSettingsRequest
       * @return UpdateDynamicSettingsResponse
       */
      Models::UpdateDynamicSettingsResponse updateDynamicSettings(const string &InstanceId, const Models::UpdateDynamicSettingsRequest &request);

      /**
       * @summary Modifies the scenario-based configuration template of an Elasticsearch instance.
       *
       * @param request UpdateExtendConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExtendConfigResponse
       */
      Models::UpdateExtendConfigResponse updateExtendConfigWithOptions(const string &InstanceId, const Models::UpdateExtendConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the scenario-based configuration template of an Elasticsearch instance.
       *
       * @param request UpdateExtendConfigRequest
       * @return UpdateExtendConfigResponse
       */
      Models::UpdateExtendConfigResponse updateExtendConfig(const string &InstanceId, const Models::UpdateExtendConfigRequest &request);

      /**
       * @summary Updates the extension file configuration of a Logstash instance.
       *
       * @description When calling this operation, note the following: Currently, this operation only supports deleting extension files that have been uploaded through the console. To add or modify extension files, perform the operations in the console.
       *
       * @param request UpdateExtendfilesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExtendfilesResponse
       */
      Models::UpdateExtendfilesResponse updateExtendfilesWithOptions(const string &InstanceId, const Models::UpdateExtendfilesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the extension file configuration of a Logstash instance.
       *
       * @description When calling this operation, note the following: Currently, this operation only supports deleting extension files that have been uploaded through the console. To add or modify extension files, perform the operations in the console.
       *
       * @param request UpdateExtendfilesRequest
       * @return UpdateExtendfilesResponse
       */
      Models::UpdateExtendfilesResponse updateExtendfiles(const string &InstanceId, const Models::UpdateExtendfilesRequest &request);

      /**
       * @summary Toggle the FalconSeek cloud-native kernel attribute for instances of Version 8.17.
       *
       * @param request UpdateFalconSeekRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFalconSeekResponse
       */
      Models::UpdateFalconSeekResponse updateFalconSeekWithOptions(const string &InstanceId, const Models::UpdateFalconSeekRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Toggle the FalconSeek cloud-native kernel attribute for instances of Version 8.17.
       *
       * @param request UpdateFalconSeekRequest
       * @return UpdateFalconSeekResponse
       */
      Models::UpdateFalconSeekResponse updateFalconSeek(const string &InstanceId, const Models::UpdateFalconSeekRequest &request);

      /**
       * @summary Updates the IK hot-word dictionary of an Alibaba Cloud Elasticsearch instance.
       *
       * @description When calling this operation, note the following:
       * - If the dictionary file is sourced from OSS, make sure the OSS bucket has public-read permission.
       * - If a previously uploaded dictionary is not configured with ORIGIN, the dictionary file will be deleted after this operation is called.
       *
       * @param request UpdateHotIkDictsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHotIkDictsResponse
       */
      Models::UpdateHotIkDictsResponse updateHotIkDictsWithOptions(const string &InstanceId, const Models::UpdateHotIkDictsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the IK hot-word dictionary of an Alibaba Cloud Elasticsearch instance.
       *
       * @description When calling this operation, note the following:
       * - If the dictionary file is sourced from OSS, make sure the OSS bucket has public-read permission.
       * - If a previously uploaded dictionary is not configured with ORIGIN, the dictionary file will be deleted after this operation is called.
       *
       * @param request UpdateHotIkDictsRequest
       * @return UpdateHotIkDictsResponse
       */
      Models::UpdateHotIkDictsResponse updateHotIkDicts(const string &InstanceId, const Models::UpdateHotIkDictsRequest &request);

      /**
       * @summary Modifies the lifecycle policy of an Elasticsearch index.
       *
       * @param request UpdateILMPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateILMPolicyResponse
       */
      Models::UpdateILMPolicyResponse updateILMPolicyWithOptions(const string &InstanceId, const string &PolicyName, const Models::UpdateILMPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the lifecycle policy of an Elasticsearch index.
       *
       * @param request UpdateILMPolicyRequest
       * @return UpdateILMPolicyResponse
       */
      Models::UpdateILMPolicyResponse updateILMPolicy(const string &InstanceId, const string &PolicyName, const Models::UpdateILMPolicyRequest &request);

      /**
       * @summary Modifies the template configuration of an Elasticsearch instance.
       *
       * @param request UpdateIndexTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIndexTemplateResponse
       */
      Models::UpdateIndexTemplateResponse updateIndexTemplateWithOptions(const string &InstanceId, const string &IndexTemplate, const Models::UpdateIndexTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the template configuration of an Elasticsearch instance.
       *
       * @param request UpdateIndexTemplateRequest
       * @return UpdateIndexTemplateResponse
       */
      Models::UpdateIndexTemplateResponse updateIndexTemplate(const string &InstanceId, const string &IndexTemplate, const Models::UpdateIndexTemplateRequest &request);

      /**
       * @summary Upgrades the configuration of an Elasticsearch cluster, including the number of nodes, roles, specifications, and disk configurations.
       *
       * @description When you call this operation, note the following items:
       * For more precautions, see [Upgrade cluster configuration](https://help.aliyun.com/document_detail/96650.html) and [Downgrade cluster configuration](https://help.aliyun.com/document_detail/198887.html).
       *
       * @param request UpdateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const string &InstanceId, const Models::UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the configuration of an Elasticsearch cluster, including the number of nodes, roles, specifications, and disk configurations.
       *
       * @description When you call this operation, note the following items:
       * For more precautions, see [Upgrade cluster configuration](https://help.aliyun.com/document_detail/96650.html) and [Downgrade cluster configuration](https://help.aliyun.com/document_detail/198887.html).
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const string &InstanceId, const Models::UpdateInstanceRequest &request);

      /**
       * @summary Transforms the billing method of an Elasticsearch instance from pay-as-you-go to a subscription instance.
       *
       * @param request UpdateInstanceChargeTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceChargeTypeResponse
       */
      Models::UpdateInstanceChargeTypeResponse updateInstanceChargeTypeWithOptions(const string &InstanceId, const Models::UpdateInstanceChargeTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transforms the billing method of an Elasticsearch instance from pay-as-you-go to a subscription instance.
       *
       * @param request UpdateInstanceChargeTypeRequest
       * @return UpdateInstanceChargeTypeResponse
       */
      Models::UpdateInstanceChargeTypeResponse updateInstanceChargeType(const string &InstanceId, const Models::UpdateInstanceChargeTypeRequest &request);

      /**
       * @summary Modifies the YML parameter settings of a specified Elasticsearch instance.
       *
       * @description When you invoke this operation, note the following:
       * You cannot update the configuration when the instance status is activating, invalid, or inactive (freeze).
       *
       * @param request UpdateInstanceSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceSettingsResponse
       */
      Models::UpdateInstanceSettingsResponse updateInstanceSettingsWithOptions(const string &InstanceId, const Models::UpdateInstanceSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the YML parameter settings of a specified Elasticsearch instance.
       *
       * @description When you invoke this operation, note the following:
       * You cannot update the configuration when the instance status is activating, invalid, or inactive (freeze).
       *
       * @param request UpdateInstanceSettingsRequest
       * @return UpdateInstanceSettingsResponse
       */
      Models::UpdateInstanceSettingsResponse updateInstanceSettings(const string &InstanceId, const Models::UpdateInstanceSettingsRequest &request);

      /**
       * @summary Update keystore
       *
       * @param request UpdateKeystoresRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKeystoresResponse
       */
      Models::UpdateKeystoresResponse updateKeystoresWithOptions(const string &InstanceId, const Models::UpdateKeystoresRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update keystore
       *
       * @param request UpdateKeystoresRequest
       * @return UpdateKeystoresResponse
       */
      Models::UpdateKeystoresResponse updateKeystores(const string &InstanceId, const Models::UpdateKeystoresRequest &request);

      /**
       * @summary Update Kibana private network access
       *
       * @description 1. This API operation supports only cloud-native instances. For instances of the legacy architecture, use the TriggerNetwork operation.
       * 2. The Kibana specifications must be greater than 1 vCPU and 2 GB of memory.
       *
       * @param request UpdateKibanaPvlNetworkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKibanaPvlNetworkResponse
       */
      Models::UpdateKibanaPvlNetworkResponse updateKibanaPvlNetworkWithOptions(const string &InstanceId, const Models::UpdateKibanaPvlNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Kibana private network access
       *
       * @description 1. This API operation supports only cloud-native instances. For instances of the legacy architecture, use the TriggerNetwork operation.
       * 2. The Kibana specifications must be greater than 1 vCPU and 2 GB of memory.
       *
       * @param request UpdateKibanaPvlNetworkRequest
       * @return UpdateKibanaPvlNetworkResponse
       */
      Models::UpdateKibanaPvlNetworkResponse updateKibanaPvlNetwork(const string &InstanceId, const Models::UpdateKibanaPvlNetworkRequest &request);

      /**
       * @summary Modifies the Kibana configuration. Currently, only the Kibana language configuration can be modified.
       *
       * @param request UpdateKibanaSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKibanaSettingsResponse
       */
      Models::UpdateKibanaSettingsResponse updateKibanaSettingsWithOptions(const string &InstanceId, const Models::UpdateKibanaSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Kibana configuration. Currently, only the Kibana language configuration can be modified.
       *
       * @param request UpdateKibanaSettingsRequest
       * @return UpdateKibanaSettingsResponse
       */
      Models::UpdateKibanaSettingsResponse updateKibanaSettings(const string &InstanceId, const Models::UpdateKibanaSettingsRequest &request);

      /**
       * @summary Enable or disable Alibaba Cloud account authentication for Kibana. After Alibaba Cloud account authentication is enabled, you must log on with your Alibaba Cloud account before you can use Kibana features.
       *
       * @param request UpdateKibanaSsoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKibanaSsoResponse
       */
      Models::UpdateKibanaSsoResponse updateKibanaSsoWithOptions(const string &InstanceId, const Models::UpdateKibanaSsoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable or disable Alibaba Cloud account authentication for Kibana. After Alibaba Cloud account authentication is enabled, you must log on with your Alibaba Cloud account before you can use Kibana features.
       *
       * @param request UpdateKibanaSsoRequest
       * @return UpdateKibanaSsoResponse
       */
      Models::UpdateKibanaSsoResponse updateKibanaSso(const string &InstanceId, const Models::UpdateKibanaSsoRequest &request);

      /**
       * @summary Updates the Kibana access whitelist of a specified Alibaba Cloud Elasticsearch instance.
       *
       * @description ## Before you begin
       * - When you invoke this operation, you cannot update information if the instance status is activating, invalid, or freeze (inactive).
       * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters, as follows: 
       *     - IP whitelist list: kibanaIPWhitelist
       *     - IP whitelist group: modifyMode, whiteIpGroup
       * - The public network access whitelist does not support private IP addresses, and the internal-facing whitelist does not support public IP addresses.
       *
       * @param request UpdateKibanaWhiteIpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKibanaWhiteIpsResponse
       */
      Models::UpdateKibanaWhiteIpsResponse updateKibanaWhiteIpsWithOptions(const string &InstanceId, const Models::UpdateKibanaWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the Kibana access whitelist of a specified Alibaba Cloud Elasticsearch instance.
       *
       * @description ## Before you begin
       * - When you invoke this operation, you cannot update information if the instance status is activating, invalid, or freeze (inactive).
       * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters, as follows: 
       *     - IP whitelist list: kibanaIPWhitelist
       *     - IP whitelist group: modifyMode, whiteIpGroup
       * - The public network access whitelist does not support private IP addresses, and the internal-facing whitelist does not support public IP addresses.
       *
       * @param request UpdateKibanaWhiteIpsRequest
       * @return UpdateKibanaWhiteIpsResponse
       */
      Models::UpdateKibanaWhiteIpsResponse updateKibanaWhiteIps(const string &InstanceId, const Models::UpdateKibanaWhiteIpsRequest &request);

      /**
       * @summary Modifies some information about a specified instance, such as the number of nodes, quota, name, and disk size.
       *
       * @description ### Before you begin
       * You cannot modify instance information when the instance status is activating, invalid, or freeze (inactive).
       *
       * @param request UpdateLogstashRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLogstashResponse
       */
      Models::UpdateLogstashResponse updateLogstashWithOptions(const string &InstanceId, const Models::UpdateLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies some information about a specified instance, such as the number of nodes, quota, name, and disk size.
       *
       * @description ### Before you begin
       * You cannot modify instance information when the instance status is activating, invalid, or freeze (inactive).
       *
       * @param request UpdateLogstashRequest
       * @return UpdateLogstashResponse
       */
      Models::UpdateLogstashResponse updateLogstash(const string &InstanceId, const Models::UpdateLogstashRequest &request);

      /**
       * @summary Converts a pay-as-you-go Alibaba Cloud Logstash instance to a subscription instance.
       *
       * @param request UpdateLogstashChargeTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLogstashChargeTypeResponse
       */
      Models::UpdateLogstashChargeTypeResponse updateLogstashChargeTypeWithOptions(const string &InstanceId, const Models::UpdateLogstashChargeTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a pay-as-you-go Alibaba Cloud Logstash instance to a subscription instance.
       *
       * @param request UpdateLogstashChargeTypeRequest
       * @return UpdateLogstashChargeTypeResponse
       */
      Models::UpdateLogstashChargeTypeResponse updateLogstashChargeType(const string &InstanceId, const Models::UpdateLogstashChargeTypeRequest &request);

      /**
       * @summary Modifies the name of a specified Logstash instance.
       *
       * @description When you call this operation, take note of the following items:
       * You cannot modify the instance name when the instance status is activating, invalid, or freeze (inactive).
       *
       * @param request UpdateLogstashDescriptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLogstashDescriptionResponse
       */
      Models::UpdateLogstashDescriptionResponse updateLogstashDescriptionWithOptions(const string &InstanceId, const Models::UpdateLogstashDescriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a specified Logstash instance.
       *
       * @description When you call this operation, take note of the following items:
       * You cannot modify the instance name when the instance status is activating, invalid, or freeze (inactive).
       *
       * @param request UpdateLogstashDescriptionRequest
       * @return UpdateLogstashDescriptionResponse
       */
      Models::UpdateLogstashDescriptionResponse updateLogstashDescription(const string &InstanceId, const Models::UpdateLogstashDescriptionRequest &request);

      /**
       * @summary Updates the configuration of a specified Logstash instance.
       *
       * @description When you invoke this operation, note the following: The instance configuration cannot be updated when the instance status is activating, invalid, or freeze (inactive).
       *
       * @param request UpdateLogstashSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLogstashSettingsResponse
       */
      Models::UpdateLogstashSettingsResponse updateLogstashSettingsWithOptions(const string &InstanceId, const Models::UpdateLogstashSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified Logstash instance.
       *
       * @description When you invoke this operation, note the following: The instance configuration cannot be updated when the instance status is activating, invalid, or freeze (inactive).
       *
       * @param request UpdateLogstashSettingsRequest
       * @return UpdateLogstashSettingsResponse
       */
      Models::UpdateLogstashSettingsResponse updateLogstashSettings(const string &InstanceId, const Models::UpdateLogstashSettingsRequest &request);

      /**
       * @summary Modifies the pipeline management method for a specified Logstash instance.
       *
       * @description > Pipeline management methods include configuration file management and Kibana pipeline management. The console no longer supports Kibana pipeline management. You can use this feature only through the API.
       *
       * @param request UpdatePipelineManagementConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineManagementConfigResponse
       */
      Models::UpdatePipelineManagementConfigResponse updatePipelineManagementConfigWithOptions(const string &InstanceId, const Models::UpdatePipelineManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the pipeline management method for a specified Logstash instance.
       *
       * @description > Pipeline management methods include configuration file management and Kibana pipeline management. The console no longer supports Kibana pipeline management. You can use this feature only through the API.
       *
       * @param request UpdatePipelineManagementConfigRequest
       * @return UpdatePipelineManagementConfigResponse
       */
      Models::UpdatePipelineManagementConfigResponse updatePipelineManagementConfig(const string &InstanceId, const Models::UpdatePipelineManagementConfigRequest &request);

      /**
       * @summary Calls UpdatePipelines to update Logstash pipeline information.
       *
       * @param request UpdatePipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelinesResponse
       */
      Models::UpdatePipelinesResponse updatePipelinesWithOptions(const string &InstanceId, const Models::UpdatePipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls UpdatePipelines to update Logstash pipeline information.
       *
       * @param request UpdatePipelinesRequest
       * @return UpdatePipelinesResponse
       */
      Models::UpdatePipelinesResponse updatePipelines(const string &InstanceId, const Models::UpdatePipelinesRequest &request);

      /**
       * @summary Updates the VPC private network access whitelist of a specified instance.
       *
       * @description ## Before you begin
       * - You cannot update the VPC private network access whitelist of an instance when the instance status is Activating (activating), Invalid (invalid), or Freeze (inactive).
       * - You can update the whitelist in two ways: by using an IP whitelist list or by using an IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters:
       *     - IP whitelist list: privateNetworkIpWhiteList
       *     - IP whitelist group: modifyMode, whiteIpGroup
       * - The public network access whitelist does not support private IP addresses, and the private network access whitelist does not support public IP addresses.
       *
       * @param request UpdatePrivateNetworkWhiteIpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrivateNetworkWhiteIpsResponse
       */
      Models::UpdatePrivateNetworkWhiteIpsResponse updatePrivateNetworkWhiteIpsWithOptions(const string &InstanceId, const Models::UpdatePrivateNetworkWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the VPC private network access whitelist of a specified instance.
       *
       * @description ## Before you begin
       * - You cannot update the VPC private network access whitelist of an instance when the instance status is Activating (activating), Invalid (invalid), or Freeze (inactive).
       * - You can update the whitelist in two ways: by using an IP whitelist list or by using an IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters:
       *     - IP whitelist list: privateNetworkIpWhiteList
       *     - IP whitelist group: modifyMode, whiteIpGroup
       * - The public network access whitelist does not support private IP addresses, and the private network access whitelist does not support public IP addresses.
       *
       * @param request UpdatePrivateNetworkWhiteIpsRequest
       * @return UpdatePrivateNetworkWhiteIpsResponse
       */
      Models::UpdatePrivateNetworkWhiteIpsResponse updatePrivateNetworkWhiteIps(const string &InstanceId, const Models::UpdatePrivateNetworkWhiteIpsRequest &request);

      /**
       * @summary Enables or disables the public network address for a specified Elasticsearch instance.
       *
       * @description When you call this operation, note the following:
       * You cannot update information when the instance status is activating, invalid, or freeze (inactive).
       *
       * @param request UpdatePublicNetworkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePublicNetworkResponse
       */
      Models::UpdatePublicNetworkResponse updatePublicNetworkWithOptions(const string &InstanceId, const Models::UpdatePublicNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the public network address for a specified Elasticsearch instance.
       *
       * @description When you call this operation, note the following:
       * You cannot update information when the instance status is activating, invalid, or freeze (inactive).
       *
       * @param request UpdatePublicNetworkRequest
       * @return UpdatePublicNetworkResponse
       */
      Models::UpdatePublicNetworkResponse updatePublicNetwork(const string &InstanceId, const Models::UpdatePublicNetworkRequest &request);

      /**
       * @summary Updates the public endpoint access whitelist of a specified Elasticsearch instance.
       *
       * @description ## Before you begin
       * - You cannot update the public endpoint access whitelist of an instance when the instance status is activating, invalid, or inactive (freeze).
       * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters:   
       *     - IP whitelist list: publicIpWhitelist
       *     - IP whitelist group: modifyMode, whiteIpGroup
       * - The public network access whitelist does not support private network IP addresses, and the private network access whitelist does not support public network IP addresses.
       *
       * @param request UpdatePublicWhiteIpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePublicWhiteIpsResponse
       */
      Models::UpdatePublicWhiteIpsResponse updatePublicWhiteIpsWithOptions(const string &InstanceId, const Models::UpdatePublicWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the public endpoint access whitelist of a specified Elasticsearch instance.
       *
       * @description ## Before you begin
       * - You cannot update the public endpoint access whitelist of an instance when the instance status is activating, invalid, or inactive (freeze).
       * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters:   
       *     - IP whitelist list: publicIpWhitelist
       *     - IP whitelist group: modifyMode, whiteIpGroup
       * - The public network access whitelist does not support private network IP addresses, and the private network access whitelist does not support public network IP addresses.
       *
       * @param request UpdatePublicWhiteIpsRequest
       * @return UpdatePublicWhiteIpsResponse
       */
      Models::UpdatePublicWhiteIpsResponse updatePublicWhiteIps(const string &InstanceId, const Models::UpdatePublicWhiteIpsRequest &request);

      /**
       * @summary Enables or disables the write high availability feature for a cluster. Currently, only instances in the China (Beijing) region are supported.
       *
       * @param request UpdateReadWritePolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateReadWritePolicyResponse
       */
      Models::UpdateReadWritePolicyResponse updateReadWritePolicyWithOptions(const string &InstanceId, const Models::UpdateReadWritePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the write high availability feature for a cluster. Currently, only instances in the China (Beijing) region are supported.
       *
       * @param request UpdateReadWritePolicyRequest
       * @return UpdateReadWritePolicyResponse
       */
      Models::UpdateReadWritePolicyResponse updateReadWritePolicy(const string &InstanceId, const Models::UpdateReadWritePolicyRequest &request);

      /**
       * @summary Updates the data backup configuration of a specified instance.
       *
       * @param request UpdateSnapshotSettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSnapshotSettingResponse
       */
      Models::UpdateSnapshotSettingResponse updateSnapshotSettingWithOptions(const string &InstanceId, const Models::UpdateSnapshotSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the data backup configuration of a specified instance.
       *
       * @param request UpdateSnapshotSettingRequest
       * @return UpdateSnapshotSettingResponse
       */
      Models::UpdateSnapshotSettingResponse updateSnapshotSetting(const string &InstanceId, const Models::UpdateSnapshotSettingRequest &request);

      /**
       * @summary Updates the synonym dictionary of an Alibaba Cloud Elasticsearch instance.
       *
       * @description When calling this operation, note the following:
       * - If the dictionary file is sourced from OSS, make sure the OSS bucket has public-read permission.
       * - If a previously uploaded dictionary is not configured with ORIGIN, the dictionary file will be deleted after this operation is called.
       *
       * @param request UpdateSynonymsDictsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSynonymsDictsResponse
       */
      Models::UpdateSynonymsDictsResponse updateSynonymsDictsWithOptions(const string &InstanceId, const Models::UpdateSynonymsDictsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the synonym dictionary of an Alibaba Cloud Elasticsearch instance.
       *
       * @description When calling this operation, note the following:
       * - If the dictionary file is sourced from OSS, make sure the OSS bucket has public-read permission.
       * - If a previously uploaded dictionary is not configured with ORIGIN, the dictionary file will be deleted after this operation is called.
       *
       * @param request UpdateSynonymsDictsRequest
       * @return UpdateSynonymsDictsResponse
       */
      Models::UpdateSynonymsDictsResponse updateSynonymsDicts(const string &InstanceId, const Models::UpdateSynonymsDictsRequest &request);

      /**
       * @summary Modifies the scenario-specific template configuration of a cluster.
       *
       * @param request UpdateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplateWithOptions(const string &InstanceId, const string &TemplateName, const Models::UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the scenario-specific template configuration of a cluster.
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const string &InstanceId, const string &TemplateName, const Models::UpdateTemplateRequest &request);

      /**
       * @summary Modifies the VPC internal-facing access whitelist of an Elasticsearch instance.
       *
       * @description ## Before you begin
       * - You cannot update information when the instance status is activating, invalid, or freeze (inactive).
       * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time, and they support different parameters besides InstanceId and clientToken. The details are as follows: 
       *     - IP whitelist list: esIPWhitelist
       *     - IP whitelist group: modifyMode, whiteIpGroup
       * - The public access whitelist does not support private network IP addresses, and the internal-facing access whitelist does not support public IP addresses.
       *
       * @param request UpdateWhiteIpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWhiteIpsResponse
       */
      Models::UpdateWhiteIpsResponse updateWhiteIpsWithOptions(const string &InstanceId, const Models::UpdateWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the VPC internal-facing access whitelist of an Elasticsearch instance.
       *
       * @description ## Before you begin
       * - You cannot update information when the instance status is activating, invalid, or freeze (inactive).
       * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time, and they support different parameters besides InstanceId and clientToken. The details are as follows: 
       *     - IP whitelist list: esIPWhitelist
       *     - IP whitelist group: modifyMode, whiteIpGroup
       * - The public access whitelist does not support private network IP addresses, and the internal-facing access whitelist does not support public IP addresses.
       *
       * @param request UpdateWhiteIpsRequest
       * @return UpdateWhiteIpsResponse
       */
      Models::UpdateWhiteIpsResponse updateWhiteIps(const string &InstanceId, const Models::UpdateWhiteIpsRequest &request);

      /**
       * @summary Updates the X-Pack monitoring and alerting configuration of a Logstash instance.
       *
       * @param request UpdateXpackMonitorConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateXpackMonitorConfigResponse
       */
      Models::UpdateXpackMonitorConfigResponse updateXpackMonitorConfigWithOptions(const string &InstanceId, const Models::UpdateXpackMonitorConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the X-Pack monitoring and alerting configuration of a Logstash instance.
       *
       * @param request UpdateXpackMonitorConfigRequest
       * @return UpdateXpackMonitorConfigResponse
       */
      Models::UpdateXpackMonitorConfigResponse updateXpackMonitorConfig(const string &InstanceId, const Models::UpdateXpackMonitorConfigRequest &request);

      /**
       * @summary Upgrades the version of an Elasticsearch instance. Both major version upgrades and kernel version upgrades are supported.
       *
       * @description > The version upgrade feature currently supports only the following upgrade paths: 5.5.3 to 5.6.16, 5.6.16 to 6.3.2, and 6.3.2 to 6.7.0. Upgrades between other versions are not supported. For more information, see [Upgrade version](https://help.aliyun.com/document_detail/148786.html).
       *
       * @param request UpgradeEngineVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeEngineVersionResponse
       */
      Models::UpgradeEngineVersionResponse upgradeEngineVersionWithOptions(const string &InstanceId, const Models::UpgradeEngineVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the version of an Elasticsearch instance. Both major version upgrades and kernel version upgrades are supported.
       *
       * @description > The version upgrade feature currently supports only the following upgrade paths: 5.5.3 to 5.6.16, 5.6.16 to 6.3.2, and 6.3.2 to 6.7.0. Upgrades between other versions are not supported. For more information, see [Upgrade version](https://help.aliyun.com/document_detail/148786.html).
       *
       * @param request UpgradeEngineVersionRequest
       * @return UpgradeEngineVersionResponse
       */
      Models::UpgradeEngineVersionResponse upgradeEngineVersion(const string &InstanceId, const Models::UpgradeEngineVersionRequest &request);

      /**
       * @summary Query whether a minor version is available for upgrade.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeInfoResponse
       */
      Models::UpgradeInfoResponse upgradeInfoWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query whether a minor version is available for upgrade.
       *
       * @return UpgradeInfoResponse
       */
      Models::UpgradeInfoResponse upgradeInfo(const string &instanceId);

      /**
       * @summary Validates the connectivity of an Elasticsearch instance that provides X-Pack monitoring.
       *
       * @description > To enable X-Pack monitoring for Logstash, configure an Elasticsearch instance. After the configuration, you can monitor the Logstash instance in the Kibana console of the corresponding Elasticsearch instance.
       *
       * @param request ValidateConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateConnectionResponse
       */
      Models::ValidateConnectionResponse validateConnectionWithOptions(const string &InstanceId, const Models::ValidateConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates the connectivity of an Elasticsearch instance that provides X-Pack monitoring.
       *
       * @description > To enable X-Pack monitoring for Logstash, configure an Elasticsearch instance. After the configuration, you can monitor the Logstash instance in the Kibana console of the corresponding Elasticsearch instance.
       *
       * @param request ValidateConnectionRequest
       * @return ValidateConnectionResponse
       */
      Models::ValidateConnectionResponse validateConnection(const string &InstanceId, const Models::ValidateConnectionRequest &request);

      /**
       * @summary Checks whether specific nodes in a specified instance can be scaled in.
       *
       * @param request ValidateShrinkNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateShrinkNodesResponse
       */
      Models::ValidateShrinkNodesResponse validateShrinkNodesWithOptions(const string &InstanceId, const Models::ValidateShrinkNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether specific nodes in a specified instance can be scaled in.
       *
       * @param request ValidateShrinkNodesRequest
       * @return ValidateShrinkNodesResponse
       */
      Models::ValidateShrinkNodesResponse validateShrinkNodes(const string &InstanceId, const Models::ValidateShrinkNodesRequest &request);

      /**
       * @summary Verifies the service-linked role (SLR) permission of the current account.
       *
       * @description > When you use a collector to collect logs from different data sources, you must first authorize the creation of a service-linked role. You can call this operation to check whether the service-linked role has been created.
       *
       * @param request ValidateSlrPermissionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateSlrPermissionResponse
       */
      Models::ValidateSlrPermissionResponse validateSlrPermissionWithOptions(const Models::ValidateSlrPermissionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the service-linked role (SLR) permission of the current account.
       *
       * @description > When you use a collector to collect logs from different data sources, you must first authorize the creation of a service-linked role. You can call this operation to check whether the service-linked role has been created.
       *
       * @param request ValidateSlrPermissionRequest
       * @return ValidateSlrPermissionResponse
       */
      Models::ValidateSlrPermissionResponse validateSlrPermission(const Models::ValidateSlrPermissionRequest &request);

      /**
       * @summary Validates whether data on specific nodes in a specified instance can be migrated.
       *
       * @param request ValidateTransferableNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateTransferableNodesResponse
       */
      Models::ValidateTransferableNodesResponse validateTransferableNodesWithOptions(const string &InstanceId, const Models::ValidateTransferableNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates whether data on specific nodes in a specified instance can be migrated.
       *
       * @param request ValidateTransferableNodesRequest
       * @return ValidateTransferableNodesResponse
       */
      Models::ValidateTransferableNodesResponse validateTransferableNodes(const string &InstanceId, const Models::ValidateTransferableNodesRequest &request);

      /**
       * @summary Creates an Elasticsearch instance.
       *
       * @description ### Precautions
       * - Before using this operation, make sure that you fully understand the billing methods and pricing of Elasticsearch. For more information, see [Alibaba Cloud Elasticsearch pricing](https://www.aliyun.com/price/product?spm=a2c4g.11186623.2.7.657d2cbeRoSPCd#/elasticsearch/detail).
       * - Real-name verification is required to create instances.<props="china"><ph> For more information, see [Real-name verification](https://help.aliyun.com/document_detail/37175.html).</ph>
       * - You do not need to specify a zone when creating an instance. By default, the instance is in the same zone as the selected VPC.
       *
       * @param request CreateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Elasticsearch instance.
       *
       * @description ### Precautions
       * - Before using this operation, make sure that you fully understand the billing methods and pricing of Elasticsearch. For more information, see [Alibaba Cloud Elasticsearch pricing](https://www.aliyun.com/price/product?spm=a2c4g.11186623.2.7.657d2cbeRoSPCd#/elasticsearch/detail).
       * - Real-name verification is required to create instances.<props="china"><ph> For more information, see [Real-name verification](https://help.aliyun.com/document_detail/37175.html).</ph>
       * - You do not need to specify a zone when creating an instance. By default, the instance is in the same zone as the selected VPC.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
