// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CMS20240330_HPP_
#define ALIBABACLOUD_CMS20240330_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cms20240330Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cms20240330.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Write to the context
       *
       * @param request AddContextsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddContextsResponse
       */
      Models::AddContextsResponse addContextsWithOptions(const string &workspace, const string &contextStoreName, const Models::AddContextsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Write to the context
       *
       * @param request AddContextsRequest
       * @return AddContextsResponse
       */
      Models::AddContextsResponse addContexts(const string &workspace, const string &contextStoreName, const Models::AddContextsRequest &request);

      /**
       * @summary Add new facts, messages, or metadata to a user’s memory store. The AddMemories endpoint accepts raw text or conversation turns and commits them asynchronously, preparing the memories for subsequent search, retrieval, and graph queries.
       *
       * @param request AddMemoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMemoriesResponse
       */
      Models::AddMemoriesResponse addMemoriesWithOptions(const string &workspace, const string &memoryStoreName, const Models::AddMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add new facts, messages, or metadata to a user’s memory store. The AddMemories endpoint accepts raw text or conversation turns and commits them asynchronously, preparing the memories for subsequent search, retrieval, and graph queries.
       *
       * @param request AddMemoriesRequest
       * @return AddMemoriesResponse
       */
      Models::AddMemoriesResponse addMemories(const string &workspace, const string &memoryStoreName, const Models::AddMemoriesRequest &request);

      /**
       * @summary Changes the resource group of a resource.
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group of a resource.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Installs an add-on.
       *
       * @description Creates a release for an add-on.
       *
       * @param request CreateAddonReleaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAddonReleaseResponse
       */
      Models::CreateAddonReleaseResponse createAddonReleaseWithOptions(const string &policyId, const Models::CreateAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs an add-on.
       *
       * @description Creates a release for an add-on.
       *
       * @param request CreateAddonReleaseRequest
       * @return CreateAddonReleaseResponse
       */
      Models::CreateAddonReleaseResponse createAddonRelease(const string &policyId, const Models::CreateAddonReleaseRequest &request);

      /**
       * @summary Creates an aggregation task group.
       *
       * @param request CreateAggTaskGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggTaskGroupResponse
       */
      Models::CreateAggTaskGroupResponse createAggTaskGroupWithOptions(const string &instanceId, const Models::CreateAggTaskGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an aggregation task group.
       *
       * @param request CreateAggTaskGroupRequest
       * @return CreateAggTaskGroupResponse
       */
      Models::CreateAggTaskGroupResponse createAggTaskGroup(const string &instanceId, const Models::CreateAggTaskGroupRequest &request);

      /**
       * @summary Create a webhook
       *
       * @description Creates an alert webhook to use as a notification recipient.
       *
       * @param request CreateAlertWebhookRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlertWebhookResponse
       */
      Models::CreateAlertWebhookResponse createAlertWebhookWithOptions(const Models::CreateAlertWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a webhook
       *
       * @description Creates an alert webhook to use as a notification recipient.
       *
       * @param request CreateAlertWebhookRequest
       * @return CreateAlertWebhookResponse
       */
      Models::CreateAlertWebhookResponse createAlertWebhook(const Models::CreateAlertWebhookRequest &request);

      /**
       * @summary Creates a business trace.
       *
       * @param request CreateBizTraceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBizTraceResponse
       */
      Models::CreateBizTraceResponse createBizTraceWithOptions(const Models::CreateBizTraceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a business trace.
       *
       * @param request CreateBizTraceRequest
       * @return CreateBizTraceResponse
       */
      Models::CreateBizTraceResponse createBizTrace(const Models::CreateBizTraceRequest &request);

      /**
       * @summary Creates a cloud resource.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudResourceResponse
       */
      Models::CreateCloudResourceResponse createCloudResourceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud resource.
       *
       * @return CreateCloudResourceResponse
       */
      Models::CreateCloudResourceResponse createCloudResource();

      /**
       * @summary Creates a context store.
       *
       * @param request CreateContextStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContextStoreResponse
       */
      Models::CreateContextStoreResponse createContextStoreWithOptions(const string &workspace, const Models::CreateContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a context store.
       *
       * @param request CreateContextStoreRequest
       * @return CreateContextStoreResponse
       */
      Models::CreateContextStoreResponse createContextStore(const string &workspace, const Models::CreateContextStoreRequest &request);

      /**
       * @summary Creates an API key for a context store.
       *
       * @param request CreateContextStoreAPIKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContextStoreAPIKeyResponse
       */
      Models::CreateContextStoreAPIKeyResponse createContextStoreAPIKeyWithOptions(const string &workspace, const string &contextStoreName, const Models::CreateContextStoreAPIKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API key for a context store.
       *
       * @param request CreateContextStoreAPIKeyRequest
       * @return CreateContextStoreAPIKeyResponse
       */
      Models::CreateContextStoreAPIKeyResponse createContextStoreAPIKey(const string &workspace, const string &contextStoreName, const Models::CreateContextStoreAPIKeyRequest &request);

      /**
       * @summary Creates a dataset.
       *
       * @param request CreateDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDatasetWithOptions(const string &workspace, const Models::CreateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataset.
       *
       * @param request CreateDatasetRequest
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDataset(const string &workspace, const Models::CreateDatasetRequest &request);

      /**
       * @summary Create a data delivery task to deliver metric data from a data source to a storage destination or message queue. This task supports three delivery types: Prometheus Remote Write, Kafka, and MaxCompute. You can also use tags to filter which metrics are delivered and attach custom tags to them.
       *
       * @param request CreateDeliveryTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeliveryTaskResponse
       */
      Models::CreateDeliveryTaskResponse createDeliveryTaskWithOptions(const Models::CreateDeliveryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a data delivery task to deliver metric data from a data source to a storage destination or message queue. This task supports three delivery types: Prometheus Remote Write, Kafka, and MaxCompute. You can also use tags to filter which metrics are delivered and attach custom tags to them.
       *
       * @param request CreateDeliveryTaskRequest
       * @return CreateDeliveryTaskResponse
       */
      Models::CreateDeliveryTaskResponse createDeliveryTask(const Models::CreateDeliveryTaskRequest &request);

      /**
       * @summary Creates storage for an EntityStore.
       *
       * @param request CreateEntityStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEntityStoreResponse
       */
      Models::CreateEntityStoreResponse createEntityStoreWithOptions(const string &workspaceName, const Models::CreateEntityStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates storage for an EntityStore.
       *
       * @param request CreateEntityStoreRequest
       * @return CreateEntityStoreResponse
       */
      Models::CreateEntityStoreResponse createEntityStore(const string &workspaceName, const Models::CreateEntityStoreRequest &request);

      /**
       * @summary Creates an Integration Center policy.
       *
       * @description This operation creates an event integration.
       *
       * @param request CreateIntegrationPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIntegrationPolicyResponse
       */
      Models::CreateIntegrationPolicyResponse createIntegrationPolicyWithOptions(const Models::CreateIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Integration Center policy.
       *
       * @description This operation creates an event integration.
       *
       * @param request CreateIntegrationPolicyRequest
       * @return CreateIntegrationPolicyResponse
       */
      Models::CreateIntegrationPolicyResponse createIntegrationPolicy(const Models::CreateIntegrationPolicyRequest &request);

      /**
       * @summary Creates a MemoryStore.
       *
       * @param request CreateMemoryStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemoryStoreResponse
       */
      Models::CreateMemoryStoreResponse createMemoryStoreWithOptions(const string &workspace, const Models::CreateMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a MemoryStore.
       *
       * @param request CreateMemoryStoreRequest
       * @return CreateMemoryStoreResponse
       */
      Models::CreateMemoryStoreResponse createMemoryStore(const string &workspace, const Models::CreateMemoryStoreRequest &request);

      /**
       * @summary Create a pipeline.
       *
       * @param request CreatePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipelineWithOptions(const string &workspace, const Models::CreatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a pipeline.
       *
       * @param request CreatePipelineRequest
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipeline(const string &workspace, const Models::CreatePipelineRequest &request);

      /**
       * @summary Creates a Prometheus instance for monitoring.
       *
       * @param request CreatePrometheusInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusInstanceResponse
       */
      Models::CreatePrometheusInstanceResponse createPrometheusInstanceWithOptions(const Models::CreatePrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Prometheus instance for monitoring.
       *
       * @param request CreatePrometheusInstanceRequest
       * @return CreatePrometheusInstanceResponse
       */
      Models::CreatePrometheusInstanceResponse createPrometheusInstance(const Models::CreatePrometheusInstanceRequest &request);

      /**
       * @summary Creates a Prometheus view.
       *
       * @description 用于创建一个站点监控任务
       *
       * @param request CreatePrometheusViewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusViewResponse
       */
      Models::CreatePrometheusViewResponse createPrometheusViewWithOptions(const Models::CreatePrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Prometheus view.
       *
       * @description 用于创建一个站点监控任务
       *
       * @param request CreatePrometheusViewRequest
       * @return CreatePrometheusViewResponse
       */
      Models::CreatePrometheusViewResponse createPrometheusView(const Models::CreatePrometheusViewRequest &request);

      /**
       * @summary Creates a virtual instance for Prometheus monitoring.
       *
       * @description Creates a virtual instance for Prometheus monitoring.
       *
       * @param request CreatePrometheusVirtualInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusVirtualInstanceResponse
       */
      Models::CreatePrometheusVirtualInstanceResponse createPrometheusVirtualInstanceWithOptions(const Models::CreatePrometheusVirtualInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual instance for Prometheus monitoring.
       *
       * @description Creates a virtual instance for Prometheus monitoring.
       *
       * @param request CreatePrometheusVirtualInstanceRequest
       * @return CreatePrometheusVirtualInstanceResponse
       */
      Models::CreatePrometheusVirtualInstanceResponse createPrometheusVirtualInstance(const Models::CreatePrometheusVirtualInstanceRequest &request);

      /**
       * @summary Creates a service for application observability.
       *
       * @param request CreateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createServiceWithOptions(const string &workspace, const Models::CreateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service for application observability.
       *
       * @param request CreateServiceRequest
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createService(const string &workspace, const Models::CreateServiceRequest &request);

      /**
       * @summary Creates application observability and prepares the prerequisite resources required for integration.
       *
       * @param request CreateServiceObservabilityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceObservabilityResponse
       */
      Models::CreateServiceObservabilityResponse createServiceObservabilityWithOptions(const string &workspace, const string &type, const Models::CreateServiceObservabilityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates application observability and prepares the prerequisite resources required for integration.
       *
       * @param request CreateServiceObservabilityRequest
       * @return CreateServiceObservabilityResponse
       */
      Models::CreateServiceObservabilityResponse createServiceObservability(const string &workspace, const string &type, const Models::CreateServiceObservabilityRequest &request);

      /**
       * @summary To share a console page or embed it into a third-party system without requiring a password, you can call the CreateTicket operation to generate a ticket. You can then use the ticket to create a password-free link.
       *
       * @param request CreateTicketRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicketWithOptions(const Models::CreateTicketRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To share a console page or embed it into a third-party system without requiring a password, you can call the CreateTicket operation to generate a ticket. You can then use the ticket to create a password-free link.
       *
       * @param request CreateTicketRequest
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicket(const Models::CreateTicketRequest &request);

      /**
       * @summary Creates a Umodel configuration.
       *
       * @description Creates a Umodel configuration in a specified workspace.
       *
       * @param request CreateUmodelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUmodelResponse
       */
      Models::CreateUmodelResponse createUmodelWithOptions(const string &workspace, const Models::CreateUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Umodel configuration.
       *
       * @description Creates a Umodel configuration in a specified workspace.
       *
       * @param request CreateUmodelRequest
       * @return CreateUmodelResponse
       */
      Models::CreateUmodelResponse createUmodel(const string &workspace, const Models::CreateUmodelRequest &request);

      /**
       * @summary Deletes add-on release information.
       *
       * @param request DeleteAddonReleaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAddonReleaseResponse
       */
      Models::DeleteAddonReleaseResponse deleteAddonReleaseWithOptions(const string &policyId, const Models::DeleteAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes add-on release information.
       *
       * @param request DeleteAddonReleaseRequest
       * @return DeleteAddonReleaseResponse
       */
      Models::DeleteAddonReleaseResponse deleteAddonRelease(const string &policyId, const Models::DeleteAddonReleaseRequest &request);

      /**
       * @summary Deletes an aggregation task group.
       *
       * @param request DeleteAggTaskGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAggTaskGroupResponse
       */
      Models::DeleteAggTaskGroupResponse deleteAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const Models::DeleteAggTaskGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an aggregation task group.
       *
       * @param request DeleteAggTaskGroupRequest
       * @return DeleteAggTaskGroupResponse
       */
      Models::DeleteAggTaskGroupResponse deleteAggTaskGroup(const string &instanceId, const string &groupId, const Models::DeleteAggTaskGroupRequest &request);

      /**
       * @summary Deletes one or more alert webhooks.
       *
       * @param tmpReq DeleteAlertWebhooksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertWebhooksResponse
       */
      Models::DeleteAlertWebhooksResponse deleteAlertWebhooksWithOptions(const Models::DeleteAlertWebhooksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more alert webhooks.
       *
       * @param request DeleteAlertWebhooksRequest
       * @return DeleteAlertWebhooksResponse
       */
      Models::DeleteAlertWebhooksResponse deleteAlertWebhooks(const Models::DeleteAlertWebhooksRequest &request);

      /**
       * @summary Deletes a business trace.
       *
       * @param request DeleteBizTraceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBizTraceResponse
       */
      Models::DeleteBizTraceResponse deleteBizTraceWithOptions(const string &bizTraceId, const Models::DeleteBizTraceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a business trace.
       *
       * @param request DeleteBizTraceRequest
       * @return DeleteBizTraceResponse
       */
      Models::DeleteBizTraceResponse deleteBizTrace(const string &bizTraceId, const Models::DeleteBizTraceRequest &request);

      /**
       * @summary Deletes a cloud resource.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudResourceResponse
       */
      Models::DeleteCloudResourceResponse deleteCloudResourceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cloud resource.
       *
       * @return DeleteCloudResourceResponse
       */
      Models::DeleteCloudResourceResponse deleteCloudResource();

      /**
       * @summary Deletes a context.
       *
       * @param request DeleteContextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContextResponse
       */
      Models::DeleteContextResponse deleteContextWithOptions(const string &workspace, const string &contextStoreName, const string &contextId, const Models::DeleteContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a context.
       *
       * @param request DeleteContextRequest
       * @return DeleteContextResponse
       */
      Models::DeleteContextResponse deleteContext(const string &workspace, const string &contextStoreName, const string &contextId, const Models::DeleteContextRequest &request);

      /**
       * @summary Deletes a context store.
       *
       * @param request DeleteContextStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContextStoreResponse
       */
      Models::DeleteContextStoreResponse deleteContextStoreWithOptions(const string &workspace, const string &contextStoreName, const Models::DeleteContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a context store.
       *
       * @param request DeleteContextStoreRequest
       * @return DeleteContextStoreResponse
       */
      Models::DeleteContextStoreResponse deleteContextStore(const string &workspace, const string &contextStoreName, const Models::DeleteContextStoreRequest &request);

      /**
       * @summary Deletes an API key.
       *
       * @param request DeleteContextStoreAPIKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContextStoreAPIKeyResponse
       */
      Models::DeleteContextStoreAPIKeyResponse deleteContextStoreAPIKeyWithOptions(const string &workspace, const string &contextStoreName, const string &name, const Models::DeleteContextStoreAPIKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an API key.
       *
       * @param request DeleteContextStoreAPIKeyRequest
       * @return DeleteContextStoreAPIKeyResponse
       */
      Models::DeleteContextStoreAPIKeyResponse deleteContextStoreAPIKey(const string &workspace, const string &contextStoreName, const string &name, const Models::DeleteContextStoreAPIKeyRequest &request);

      /**
       * @summary Deletes contexts in bulk.
       *
       * @param request DeleteContextsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContextsResponse
       */
      Models::DeleteContextsResponse deleteContextsWithOptions(const string &workspace, const string &contextStoreName, const Models::DeleteContextsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes contexts in bulk.
       *
       * @param request DeleteContextsRequest
       * @return DeleteContextsResponse
       */
      Models::DeleteContextsResponse deleteContexts(const string &workspace, const string &contextStoreName, const Models::DeleteContextsRequest &request);

      /**
       * @summary Deletes a dataset.
       *
       * @param request DeleteDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDatasetWithOptions(const string &workspace, const string &datasetName, const Models::DeleteDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataset.
       *
       * @param request DeleteDatasetRequest
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDataset(const string &workspace, const string &datasetName, const Models::DeleteDatasetRequest &request);

      /**
       * @summary Deletes a delivery task.
       *
       * @param request DeleteDeliveryTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeliveryTaskResponse
       */
      Models::DeleteDeliveryTaskResponse deleteDeliveryTaskWithOptions(const string &taskId, const Models::DeleteDeliveryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a delivery task.
       *
       * @param request DeleteDeliveryTaskRequest
       * @return DeleteDeliveryTaskResponse
       */
      Models::DeleteDeliveryTaskResponse deleteDeliveryTask(const string &taskId, const Models::DeleteDeliveryTaskRequest &request);

      /**
       * @summary Deletes an EntityStore.
       *
       * @param request DeleteEntityStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEntityStoreResponse
       */
      Models::DeleteEntityStoreResponse deleteEntityStoreWithOptions(const string &workspaceName, const Models::DeleteEntityStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an EntityStore.
       *
       * @param request DeleteEntityStoreRequest
       * @return DeleteEntityStoreResponse
       */
      Models::DeleteEntityStoreResponse deleteEntityStore(const string &workspaceName, const Models::DeleteEntityStoreRequest &request);

      /**
       * @summary Deletes an Integration Center policy.
       *
       * @param request DeleteIntegrationPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIntegrationPolicyResponse
       */
      Models::DeleteIntegrationPolicyResponse deleteIntegrationPolicyWithOptions(const string &policyId, const Models::DeleteIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Integration Center policy.
       *
       * @param request DeleteIntegrationPolicyRequest
       * @return DeleteIntegrationPolicyResponse
       */
      Models::DeleteIntegrationPolicyResponse deleteIntegrationPolicy(const string &policyId, const Models::DeleteIntegrationPolicyRequest &request);

      /**
       * @summary Deletes memories based on filter properties. You must set at least one filter property. If no filter properties are set, a validation error is returned.
       *
       * @param request DeleteMemoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoriesResponse
       */
      Models::DeleteMemoriesResponse deleteMemoriesWithOptions(const string &workspace, const string &memoryStoreName, const Models::DeleteMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes memories based on filter properties. You must set at least one filter property. If no filter properties are set, a validation error is returned.
       *
       * @param request DeleteMemoriesRequest
       * @return DeleteMemoriesResponse
       */
      Models::DeleteMemoriesResponse deleteMemories(const string &workspace, const string &memoryStoreName, const Models::DeleteMemoriesRequest &request);

      /**
       * @summary Deletes a memory.
       *
       * @param request DeleteMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemoryWithOptions(const string &workspace, const string &memoryStoreName, const string &memoryId, const Models::DeleteMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a memory.
       *
       * @param request DeleteMemoryRequest
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemory(const string &workspace, const string &memoryStoreName, const string &memoryId, const Models::DeleteMemoryRequest &request);

      /**
       * @summary Deletes a Memory Store.
       *
       * @param request DeleteMemoryStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryStoreResponse
       */
      Models::DeleteMemoryStoreResponse deleteMemoryStoreWithOptions(const string &workspace, const string &memoryStoreName, const Models::DeleteMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Memory Store.
       *
       * @param request DeleteMemoryStoreRequest
       * @return DeleteMemoryStoreResponse
       */
      Models::DeleteMemoryStoreResponse deleteMemoryStore(const string &workspace, const string &memoryStoreName, const Models::DeleteMemoryStoreRequest &request);

      /**
       * @summary Deletes a pipeline.
       *
       * @param request DeletePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePipelineResponse
       */
      Models::DeletePipelineResponse deletePipelineWithOptions(const string &workspace, const string &pipelineName, const Models::DeletePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a pipeline.
       *
       * @param request DeletePipelineRequest
       * @return DeletePipelineResponse
       */
      Models::DeletePipelineResponse deletePipeline(const string &workspace, const string &pipelineName, const Models::DeletePipelineRequest &request);

      /**
       * @summary Deletes a Prometheus instance.
       *
       * @description Deletes a Prometheus instance.
       *
       * @param request DeletePrometheusInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrometheusInstanceResponse
       */
      Models::DeletePrometheusInstanceResponse deletePrometheusInstanceWithOptions(const string &prometheusInstanceId, const Models::DeletePrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Prometheus instance.
       *
       * @description Deletes a Prometheus instance.
       *
       * @param request DeletePrometheusInstanceRequest
       * @return DeletePrometheusInstanceResponse
       */
      Models::DeletePrometheusInstanceResponse deletePrometheusInstance(const string &prometheusInstanceId, const Models::DeletePrometheusInstanceRequest &request);

      /**
       * @summary Deletes a Prometheus view instance.
       *
       * @description Deletes a Prometheus view instance.
       *
       * @param request DeletePrometheusViewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrometheusViewResponse
       */
      Models::DeletePrometheusViewResponse deletePrometheusViewWithOptions(const string &prometheusViewId, const Models::DeletePrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Prometheus view instance.
       *
       * @description Deletes a Prometheus view instance.
       *
       * @param request DeletePrometheusViewRequest
       * @return DeletePrometheusViewResponse
       */
      Models::DeletePrometheusViewResponse deletePrometheusView(const string &prometheusViewId, const Models::DeletePrometheusViewRequest &request);

      /**
       * @summary Deletes a Prometheus virtual instance by its ID.
       *
       * @param request DeletePrometheusVirtualInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrometheusVirtualInstanceResponse
       */
      Models::DeletePrometheusVirtualInstanceResponse deletePrometheusVirtualInstanceWithOptions(const string &prometheusInstanceId, const Models::DeletePrometheusVirtualInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Prometheus virtual instance by its ID.
       *
       * @param request DeletePrometheusVirtualInstanceRequest
       * @return DeletePrometheusVirtualInstanceResponse
       */
      Models::DeletePrometheusVirtualInstanceResponse deletePrometheusVirtualInstance(const string &prometheusInstanceId, const Models::DeletePrometheusVirtualInstanceRequest &request);

      /**
       * @summary Deletes an Application Monitoring service.
       *
       * @param request DeleteServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteServiceWithOptions(const string &workspace, const string &serviceId, const Models::DeleteServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Application Monitoring service.
       *
       * @param request DeleteServiceRequest
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteService(const string &workspace, const string &serviceId, const Models::DeleteServiceRequest &request);

      /**
       * @summary Deletes a Umodel configuration.
       *
       * @description Deletes a Umodel from a specified workspace.
       *
       * @param request DeleteUmodelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUmodelResponse
       */
      Models::DeleteUmodelResponse deleteUmodelWithOptions(const string &workspace, const Models::DeleteUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Umodel configuration.
       *
       * @description Deletes a Umodel from a specified workspace.
       *
       * @param request DeleteUmodelRequest
       * @return DeleteUmodelResponse
       */
      Models::DeleteUmodelResponse deleteUmodel(const string &workspace, const Models::DeleteUmodelRequest &request);

      /**
       * @summary Deletes a public Umodel schema reference.
       *
       * @param request DeleteUmodelCommonSchemaRefRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUmodelCommonSchemaRefResponse
       */
      Models::DeleteUmodelCommonSchemaRefResponse deleteUmodelCommonSchemaRefWithOptions(const string &workspace, const Models::DeleteUmodelCommonSchemaRefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a public Umodel schema reference.
       *
       * @param request DeleteUmodelCommonSchemaRefRequest
       * @return DeleteUmodelCommonSchemaRefResponse
       */
      Models::DeleteUmodelCommonSchemaRefResponse deleteUmodelCommonSchemaRef(const string &workspace, const Models::DeleteUmodelCommonSchemaRefRequest &request);

      /**
       * @summary Deletes Umodel elements.
       *
       * @description Deletes Umodel data from a specified workspace.
       *
       * @param request DeleteUmodelDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUmodelDataResponse
       */
      Models::DeleteUmodelDataResponse deleteUmodelDataWithOptions(const string &workspace, const Models::DeleteUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes Umodel elements.
       *
       * @description Deletes Umodel data from a specified workspace.
       *
       * @param request DeleteUmodelDataRequest
       * @return DeleteUmodelDataResponse
       */
      Models::DeleteUmodelDataResponse deleteUmodelData(const string &workspace, const Models::DeleteUmodelDataRequest &request);

      /**
       * @summary Deletes a workspace.
       *
       * @param request DeleteWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const string &workspaceName, const Models::DeleteWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workspace.
       *
       * @param request DeleteWorkspaceRequest
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &workspaceName, const Models::DeleteWorkspaceRequest &request);

      /**
       * @summary Query metadata
       *
       * @description Queries the details of CloudMonitor metric metadata.
       *
       * @param tmpReq DescribeMetricMetaListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricMetaListResponse
       */
      Models::DescribeMetricMetaListResponse describeMetricMetaListWithOptions(const Models::DescribeMetricMetaListRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query metadata
       *
       * @description Queries the details of CloudMonitor metric metadata.
       *
       * @param request DescribeMetricMetaListRequest
       * @return DescribeMetricMetaListResponse
       */
      Models::DescribeMetricMetaListResponse describeMetricMetaList(const Models::DescribeMetricMetaListRequest &request);

      /**
       * @summary Retrieves a list of regions.
       *
       * @param request DescribeRegionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Executes SQL and SPL queries.
       *
       * @param request ExecuteQueryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteQueryResponse
       */
      Models::ExecuteQueryResponse executeQueryWithOptions(const string &workspace, const string &datasetName, const Models::ExecuteQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes SQL and SPL queries.
       *
       * @param request ExecuteQueryRequest
       * @return ExecuteQueryResponse
       */
      Models::ExecuteQueryResponse executeQuery(const string &workspace, const string &datasetName, const Models::ExecuteQueryRequest &request);

      /**
       * @summary Retrieves the details of an add-on.
       *
       * @description Retrieves the details of an add-on.
       *
       * @param request GetAddonRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAddonResponse
       */
      Models::GetAddonResponse getAddonWithOptions(const string &addonName, const Models::GetAddonRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an add-on.
       *
       * @description Retrieves the details of an add-on.
       *
       * @param request GetAddonRequest
       * @return GetAddonResponse
       */
      Models::GetAddonResponse getAddon(const string &addonName, const Models::GetAddonRequest &request);

      /**
       * @summary Details of an add-on schema.
       *
       * @description This topic provides an example of how to modify version `1` of alert template `123456`. In this example, the alert level is set to `Critical`, the statistical method is set to `Average`, the comparison operator for the alert threshold is set to `GreaterThanOrEqualToThreshold`, the alert threshold is set to `90`, and the number of retries is set to `3`. The response indicates that the alert template was successfully modified.
       *
       * @param request GetAddonCodeTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAddonCodeTemplateResponse
       */
      Models::GetAddonCodeTemplateResponse getAddonCodeTemplateWithOptions(const string &addonName, const Models::GetAddonCodeTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Details of an add-on schema.
       *
       * @description This topic provides an example of how to modify version `1` of alert template `123456`. In this example, the alert level is set to `Critical`, the statistical method is set to `Average`, the comparison operator for the alert threshold is set to `GreaterThanOrEqualToThreshold`, the alert threshold is set to `90`, and the number of retries is set to `3`. The response indicates that the alert template was successfully modified.
       *
       * @param request GetAddonCodeTemplateRequest
       * @return GetAddonCodeTemplateResponse
       */
      Models::GetAddonCodeTemplateResponse getAddonCodeTemplate(const string &addonName, const Models::GetAddonCodeTemplateRequest &request);

      /**
       * @summary Queries the details and accessed state of an add-on release.
       *
       * @param request GetAddonReleaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAddonReleaseResponse
       */
      Models::GetAddonReleaseResponse getAddonReleaseWithOptions(const string &releaseName, const string &policyId, const Models::GetAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details and accessed state of an add-on release.
       *
       * @param request GetAddonReleaseRequest
       * @return GetAddonReleaseResponse
       */
      Models::GetAddonReleaseResponse getAddonRelease(const string &releaseName, const string &policyId, const Models::GetAddonReleaseRequest &request);

      /**
       * @summary The details of an add-on schema.
       *
       * @description Retrieves the schema of an add-on.
       *
       * @param request GetAddonSchemaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAddonSchemaResponse
       */
      Models::GetAddonSchemaResponse getAddonSchemaWithOptions(const string &addonName, const Models::GetAddonSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The details of an add-on schema.
       *
       * @description Retrieves the schema of an add-on.
       *
       * @param request GetAddonSchemaRequest
       * @return GetAddonSchemaResponse
       */
      Models::GetAddonSchemaResponse getAddonSchema(const string &addonName, const Models::GetAddonSchemaRequest &request);

      /**
       * @summary Queries an aggregation task group.
       *
       * @param request GetAggTaskGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggTaskGroupResponse
       */
      Models::GetAggTaskGroupResponse getAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const Models::GetAggTaskGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an aggregation task group.
       *
       * @param request GetAggTaskGroupRequest
       * @return GetAggTaskGroupResponse
       */
      Models::GetAggTaskGroupResponse getAggTaskGroup(const string &instanceId, const string &groupId, const Models::GetAggTaskGroupRequest &request);

      /**
       * @summary Queries a business trace.
       *
       * @param request GetBizTraceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBizTraceResponse
       */
      Models::GetBizTraceResponse getBizTraceWithOptions(const string &bizTraceId, const Models::GetBizTraceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a business trace.
       *
       * @param request GetBizTraceRequest
       * @return GetBizTraceResponse
       */
      Models::GetBizTraceResponse getBizTrace(const string &bizTraceId, const Models::GetBizTraceRequest &request);

      /**
       * @summary Retrieves information about cloud resources.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCloudResourceResponse
       */
      Models::GetCloudResourceResponse getCloudResourceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about cloud resources.
       *
       * @return GetCloudResourceResponse
       */
      Models::GetCloudResourceResponse getCloudResource();

      /**
       * @summary Queries data from the Cloud Resource Center.
       *
       * @param request GetCloudResourceDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCloudResourceDataResponse
       */
      Models::GetCloudResourceDataResponse getCloudResourceDataWithOptions(const Models::GetCloudResourceDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data from the Cloud Resource Center.
       *
       * @param request GetCloudResourceDataRequest
       * @return GetCloudResourceDataResponse
       */
      Models::GetCloudResourceDataResponse getCloudResourceData(const Models::GetCloudResourceDataRequest &request);

      /**
       * @summary Checks whether a Prometheus service or product is activated.
       *
       * @description The product and service request parameters cannot be specified in the same request.
       *
       * @param request GetCmsServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCmsServiceResponse
       */
      Models::GetCmsServiceResponse getCmsServiceWithOptions(const Models::GetCmsServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a Prometheus service or product is activated.
       *
       * @description The product and service request parameters cannot be specified in the same request.
       *
       * @param request GetCmsServiceRequest
       * @return GetCmsServiceResponse
       */
      Models::GetCmsServiceResponse getCmsService(const Models::GetCmsServiceRequest &request);

      /**
       * @summary Retrieves a single context.
       *
       * @param request GetContextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextResponse
       */
      Models::GetContextResponse getContextWithOptions(const string &workspace, const string &contextStoreName, const string &contextId, const Models::GetContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a single context.
       *
       * @param request GetContextRequest
       * @return GetContextResponse
       */
      Models::GetContextResponse getContext(const string &workspace, const string &contextStoreName, const string &contextId, const Models::GetContextRequest &request);

      /**
       * @summary Retrieves the details of a specified context store.
       *
       * @param request GetContextStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextStoreResponse
       */
      Models::GetContextStoreResponse getContextStoreWithOptions(const string &workspace, const string &contextStoreName, const Models::GetContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified context store.
       *
       * @param request GetContextStoreRequest
       * @return GetContextStoreResponse
       */
      Models::GetContextStoreResponse getContextStore(const string &workspace, const string &contextStoreName, const Models::GetContextStoreRequest &request);

      /**
       * @summary Retrieves the details of a specified dataset.
       *
       * @param request GetDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDatasetWithOptions(const string &workspace, const string &datasetName, const Models::GetDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified dataset.
       *
       * @param request GetDatasetRequest
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDataset(const string &workspace, const string &datasetName, const Models::GetDatasetRequest &request);

      /**
       * @summary View data delivery task details
       *
       * @param request GetDeliveryTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeliveryTaskResponse
       */
      Models::GetDeliveryTaskResponse getDeliveryTaskWithOptions(const string &taskId, const Models::GetDeliveryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View data delivery task details
       *
       * @param request GetDeliveryTaskRequest
       * @return GetDeliveryTaskResponse
       */
      Models::GetDeliveryTaskResponse getDeliveryTask(const string &taskId, const Models::GetDeliveryTaskRequest &request);

      /**
       * @summary Retrieves the storage information of an EntityStore.
       *
       * @param request GetEntityStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEntityStoreResponse
       */
      Models::GetEntityStoreResponse getEntityStoreWithOptions(const string &workspaceName, const Models::GetEntityStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the storage information of an EntityStore.
       *
       * @param request GetEntityStoreRequest
       * @return GetEntityStoreResponse
       */
      Models::GetEntityStoreResponse getEntityStore(const string &workspaceName, const Models::GetEntityStoreRequest &request);

      /**
       * @summary Queries the entity and relational data in a specified workspace to retrieve entity data for a specific time range.
       *
       * @param request GetEntityStoreDataRequest
       * @param headers GetEntityStoreDataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEntityStoreDataResponse
       */
      Models::GetEntityStoreDataResponse getEntityStoreDataWithOptions(const string &workspace, const Models::GetEntityStoreDataRequest &request, const Models::GetEntityStoreDataHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the entity and relational data in a specified workspace to retrieve entity data for a specific time range.
       *
       * @param request GetEntityStoreDataRequest
       * @return GetEntityStoreDataResponse
       */
      Models::GetEntityStoreDataResponse getEntityStoreData(const string &workspace, const Models::GetEntityStoreDataRequest &request);

      /**
       * @summary Retrieves the details of an Integration Center policy.
       *
       * @param request GetIntegrationPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIntegrationPolicyResponse
       */
      Models::GetIntegrationPolicyResponse getIntegrationPolicyWithOptions(const string &policyId, const Models::GetIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an Integration Center policy.
       *
       * @param request GetIntegrationPolicyRequest
       * @return GetIntegrationPolicyResponse
       */
      Models::GetIntegrationPolicyResponse getIntegrationPolicy(const string &policyId, const Models::GetIntegrationPolicyRequest &request);

      /**
       * @summary Queries the Integration Center version for a container cluster.
       *
       * @description This operation is not available in the API Explorer.
       *
       * @param request GetIntegrationVersionForCSRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIntegrationVersionForCSResponse
       */
      Models::GetIntegrationVersionForCSResponse getIntegrationVersionForCSWithOptions(const Models::GetIntegrationVersionForCSRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Integration Center version for a container cluster.
       *
       * @description This operation is not available in the API Explorer.
       *
       * @param request GetIntegrationVersionForCSRequest
       * @return GetIntegrationVersionForCSResponse
       */
      Models::GetIntegrationVersionForCSResponse getIntegrationVersionForCS(const Models::GetIntegrationVersionForCSRequest &request);

      /**
       * @summary Retrieves all memories.
       *
       * @param request GetMemoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoriesResponse
       */
      Models::GetMemoriesResponse getMemoriesWithOptions(const string &workspace, const string &memoryStoreName, const Models::GetMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all memories.
       *
       * @param request GetMemoriesRequest
       * @return GetMemoriesResponse
       */
      Models::GetMemoriesResponse getMemories(const string &workspace, const string &memoryStoreName, const Models::GetMemoriesRequest &request);

      /**
       * @summary Retrieves a single memory.
       *
       * @param request GetMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryResponse
       */
      Models::GetMemoryResponse getMemoryWithOptions(const string &workspace, const string &memoryStoreName, const string &memoryId, const Models::GetMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a single memory.
       *
       * @param request GetMemoryRequest
       * @return GetMemoryResponse
       */
      Models::GetMemoryResponse getMemory(const string &workspace, const string &memoryStoreName, const string &memoryId, const Models::GetMemoryRequest &request);

      /**
       * @summary Retrieve memory history.
       *
       * @param request GetMemoryHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryHistoryResponse
       */
      Models::GetMemoryHistoryResponse getMemoryHistoryWithOptions(const string &workspace, const string &memoryStoreName, const string &memoryId, const Models::GetMemoryHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve memory history.
       *
       * @param request GetMemoryHistoryRequest
       * @return GetMemoryHistoryResponse
       */
      Models::GetMemoryHistoryResponse getMemoryHistory(const string &workspace, const string &memoryStoreName, const string &memoryId, const Models::GetMemoryHistoryRequest &request);

      /**
       * @summary Query a memory store.
       *
       * @param request GetMemoryStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryStoreResponse
       */
      Models::GetMemoryStoreResponse getMemoryStoreWithOptions(const string &workspace, const string &memoryStoreName, const Models::GetMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a memory store.
       *
       * @param request GetMemoryStoreRequest
       * @return GetMemoryStoreResponse
       */
      Models::GetMemoryStoreResponse getMemoryStore(const string &workspace, const string &memoryStoreName, const Models::GetMemoryStoreRequest &request);

      /**
       * @summary Query pipeline
       *
       * @param request GetPipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineResponse
       */
      Models::GetPipelineResponse getPipelineWithOptions(const string &workspace, const string &pipelineName, const Models::GetPipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query pipeline
       *
       * @param request GetPipelineRequest
       * @return GetPipelineResponse
       */
      Models::GetPipelineResponse getPipeline(const string &workspace, const string &pipelineName, const Models::GetPipelineRequest &request);

      /**
       * @summary Retrieves the details of a specific Prometheus instance.
       *
       * @description Gets the details of a Prometheus instance.
       *
       * @param request GetPrometheusInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrometheusInstanceResponse
       */
      Models::GetPrometheusInstanceResponse getPrometheusInstanceWithOptions(const string &prometheusInstanceId, const Models::GetPrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific Prometheus instance.
       *
       * @description Gets the details of a Prometheus instance.
       *
       * @param request GetPrometheusInstanceRequest
       * @return GetPrometheusInstanceResponse
       */
      Models::GetPrometheusInstanceResponse getPrometheusInstance(const string &prometheusInstanceId, const Models::GetPrometheusInstanceRequest &request);

      /**
       * @summary Retrieves the user settings for Prometheus.
       *
       * @param request GetPrometheusUserSettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrometheusUserSettingResponse
       */
      Models::GetPrometheusUserSettingResponse getPrometheusUserSettingWithOptions(const Models::GetPrometheusUserSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the user settings for Prometheus.
       *
       * @param request GetPrometheusUserSettingRequest
       * @return GetPrometheusUserSettingResponse
       */
      Models::GetPrometheusUserSettingResponse getPrometheusUserSetting(const Models::GetPrometheusUserSettingRequest &request);

      /**
       * @summary Retrieves the details of a specified Prometheus view instance.
       *
       * @description Retrieves the details of a specified Prometheus view instance.
       *
       * @param request GetPrometheusViewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrometheusViewResponse
       */
      Models::GetPrometheusViewResponse getPrometheusViewWithOptions(const string &prometheusViewId, const Models::GetPrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified Prometheus view instance.
       *
       * @description Retrieves the details of a specified Prometheus view instance.
       *
       * @param request GetPrometheusViewRequest
       * @return GetPrometheusViewResponse
       */
      Models::GetPrometheusViewResponse getPrometheusView(const string &prometheusViewId, const Models::GetPrometheusViewRequest &request);

      /**
       * @summary Retrieves the details of an Application Monitoring service.
       *
       * @param request GetServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getServiceWithOptions(const string &workspace, const string &serviceId, const Models::GetServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an Application Monitoring service.
       *
       * @param request GetServiceRequest
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getService(const string &workspace, const string &serviceId, const Models::GetServiceRequest &request);

      /**
       * @summary Retrieves an application observability instance.
       *
       * @param request GetServiceObservabilityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceObservabilityResponse
       */
      Models::GetServiceObservabilityResponse getServiceObservabilityWithOptions(const string &workspace, const string &type, const Models::GetServiceObservabilityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an application observability instance.
       *
       * @param request GetServiceObservabilityRequest
       * @return GetServiceObservabilityResponse
       */
      Models::GetServiceObservabilityResponse getServiceObservability(const string &workspace, const string &type, const Models::GetServiceObservabilityRequest &request);

      /**
       * @summary Retrieves the configuration of a Umodel.
       *
       * @description Retrieves the configuration of a Umodel.
       *
       * @param request GetUmodelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUmodelResponse
       */
      Models::GetUmodelResponse getUmodelWithOptions(const string &workspace, const Models::GetUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration of a Umodel.
       *
       * @description Retrieves the configuration of a Umodel.
       *
       * @param request GetUmodelRequest
       * @return GetUmodelResponse
       */
      Models::GetUmodelResponse getUmodel(const string &workspace, const Models::GetUmodelRequest &request);

      /**
       * @summary Retrieves the referenced common Umodel schema.
       *
       * @param request GetUmodelCommonSchemaRefRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUmodelCommonSchemaRefResponse
       */
      Models::GetUmodelCommonSchemaRefResponse getUmodelCommonSchemaRefWithOptions(const string &workspace, const Models::GetUmodelCommonSchemaRefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the referenced common Umodel schema.
       *
       * @param request GetUmodelCommonSchemaRefRequest
       * @return GetUmodelCommonSchemaRefResponse
       */
      Models::GetUmodelCommonSchemaRefResponse getUmodelCommonSchemaRef(const string &workspace, const Models::GetUmodelCommonSchemaRefRequest &request);

      /**
       * @summary Retrieves graph data associated with a Umodel.
       *
       * @description This operation retrieves the graph data associated with a Umodel.
       *
       * @param request GetUmodelDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUmodelDataResponse
       */
      Models::GetUmodelDataResponse getUmodelDataWithOptions(const string &workspace, const Models::GetUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves graph data associated with a Umodel.
       *
       * @description This operation retrieves the graph data associated with a Umodel.
       *
       * @param request GetUmodelDataRequest
       * @return GetUmodelDataResponse
       */
      Models::GetUmodelDataResponse getUmodelData(const string &workspace, const Models::GetUmodelDataRequest &request);

      /**
       * @summary Retrieves a workspace.
       *
       * @param request GetWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspaceWithOptions(const string &workspaceName, const Models::GetWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a workspace.
       *
       * @param request GetWorkspaceRequest
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspace(const string &workspaceName, const Models::GetWorkspaceRequest &request);

      /**
       * @summary Lists the releases for an add-on.
       *
       * @description This operation retrieves a list of integration configurations.
       *
       * @param request ListAddonReleasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddonReleasesResponse
       */
      Models::ListAddonReleasesResponse listAddonReleasesWithOptions(const string &policyId, const Models::ListAddonReleasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the releases for an add-on.
       *
       * @description This operation retrieves a list of integration configurations.
       *
       * @param request ListAddonReleasesRequest
       * @return ListAddonReleasesResponse
       */
      Models::ListAddonReleasesResponse listAddonReleases(const string &policyId, const Models::ListAddonReleasesRequest &request);

      /**
       * @summary Lists the products in the new Integration Center by group.
       *
       * @description Creates a site monitoring job.
       *
       * @param request ListAddonsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddonsResponse
       */
      Models::ListAddonsResponse listAddonsWithOptions(const Models::ListAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the products in the new Integration Center by group.
       *
       * @description Creates a site monitoring job.
       *
       * @param request ListAddonsRequest
       * @return ListAddonsResponse
       */
      Models::ListAddonsResponse listAddons(const Models::ListAddonsRequest &request);

      /**
       * @summary Queries a list of aggregation task groups.
       *
       * @param tmpReq ListAggTaskGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggTaskGroupsResponse
       */
      Models::ListAggTaskGroupsResponse listAggTaskGroupsWithOptions(const string &instanceId, const Models::ListAggTaskGroupsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of aggregation task groups.
       *
       * @param request ListAggTaskGroupsRequest
       * @return ListAggTaskGroupsResponse
       */
      Models::ListAggTaskGroupsResponse listAggTaskGroups(const string &instanceId, const Models::ListAggTaskGroupsRequest &request);

      /**
       * @summary Queries alert action integrations.
       *
       * @param tmpReq ListAlertActionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertActionsResponse
       */
      Models::ListAlertActionsResponse listAlertActionsWithOptions(const Models::ListAlertActionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert action integrations.
       *
       * @param request ListAlertActionsRequest
       * @return ListAlertActionsResponse
       */
      Models::ListAlertActionsResponse listAlertActions(const Models::ListAlertActionsRequest &request);

      /**
       * @summary Queries a list of alert webhooks.
       *
       * @param tmpReq ListAlertRobotsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertRobotsResponse
       */
      Models::ListAlertRobotsResponse listAlertRobotsWithOptions(const Models::ListAlertRobotsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of alert webhooks.
       *
       * @param request ListAlertRobotsRequest
       * @return ListAlertRobotsResponse
       */
      Models::ListAlertRobotsResponse listAlertRobots(const Models::ListAlertRobotsRequest &request);

      /**
       * @summary Query webhooks
       *
       * @param tmpReq ListAlertWebhooksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertWebhooksResponse
       */
      Models::ListAlertWebhooksResponse listAlertWebhooksWithOptions(const Models::ListAlertWebhooksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query webhooks
       *
       * @param request ListAlertWebhooksRequest
       * @return ListAlertWebhooksResponse
       */
      Models::ListAlertWebhooksResponse listAlertWebhooks(const Models::ListAlertWebhooksRequest &request);

      /**
       * @summary Lists business traces.
       *
       * @param request ListBizTracesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBizTracesResponse
       */
      Models::ListBizTracesResponse listBizTracesWithOptions(const Models::ListBizTracesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists business traces.
       *
       * @param request ListBizTracesRequest
       * @return ListBizTracesResponse
       */
      Models::ListBizTracesResponse listBizTraces(const Models::ListBizTracesRequest &request);

      /**
       * @summary Queries contact groups.
       *
       * @param tmpReq ListContactGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContactGroupsResponse
       */
      Models::ListContactGroupsResponse listContactGroupsWithOptions(const Models::ListContactGroupsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries contact groups.
       *
       * @param request ListContactGroupsRequest
       * @return ListContactGroupsResponse
       */
      Models::ListContactGroupsResponse listContactGroups(const Models::ListContactGroupsRequest &request);

      /**
       * @summary Query contacts
       *
       * @param tmpReq ListContactsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContactsResponse
       */
      Models::ListContactsResponse listContactsWithOptions(const Models::ListContactsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query contacts
       *
       * @param request ListContactsRequest
       * @return ListContactsResponse
       */
      Models::ListContactsResponse listContacts(const Models::ListContactsRequest &request);

      /**
       * @summary Lists API keys.
       *
       * @param request ListContextStoreAPIKeysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContextStoreAPIKeysResponse
       */
      Models::ListContextStoreAPIKeysResponse listContextStoreAPIKeysWithOptions(const string &workspace, const string &contextStoreName, const Models::ListContextStoreAPIKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists API keys.
       *
       * @param request ListContextStoreAPIKeysRequest
       * @return ListContextStoreAPIKeysResponse
       */
      Models::ListContextStoreAPIKeysResponse listContextStoreAPIKeys(const string &workspace, const string &contextStoreName, const Models::ListContextStoreAPIKeysRequest &request);

      /**
       * @summary Retrieves a list of context stores.
       *
       * @param request ListContextStoresRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContextStoresResponse
       */
      Models::ListContextStoresResponse listContextStoresWithOptions(const string &workspace, const Models::ListContextStoresRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of context stores.
       *
       * @param request ListContextStoresRequest
       * @return ListContextStoresResponse
       */
      Models::ListContextStoresResponse listContextStores(const string &workspace, const Models::ListContextStoresRequest &request);

      /**
       * @summary Retrieves a list of datasets in a specified workspace.
       *
       * @param request ListDatasetsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasetsWithOptions(const string &workspace, const Models::ListDatasetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of datasets in a specified workspace.
       *
       * @param request ListDatasetsRequest
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasets(const string &workspace, const Models::ListDatasetsRequest &request);

      /**
       * @summary Retrieves a list of data delivery tasks.
       *
       * @param tmpReq ListDeliveryTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeliveryTasksResponse
       */
      Models::ListDeliveryTasksResponse listDeliveryTasksWithOptions(const Models::ListDeliveryTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data delivery tasks.
       *
       * @param request ListDeliveryTasksRequest
       * @return ListDeliveryTasksResponse
       */
      Models::ListDeliveryTasksResponse listDeliveryTasks(const Models::ListDeliveryTasksRequest &request);

      /**
       * @summary Queries a list of policies in the Integration Center.
       *
       * @description Queries a list of integrations.
       *
       * @param tmpReq ListIntegrationPoliciesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPoliciesResponse
       */
      Models::ListIntegrationPoliciesResponse listIntegrationPoliciesWithOptions(const Models::ListIntegrationPoliciesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of policies in the Integration Center.
       *
       * @description Queries a list of integrations.
       *
       * @param request ListIntegrationPoliciesRequest
       * @return ListIntegrationPoliciesResponse
       */
      Models::ListIntegrationPoliciesResponse listIntegrationPolicies(const Models::ListIntegrationPoliciesRequest &request);

      /**
       * @summary Lists the add-ons that are installed for a specified policy.
       *
       * @description Lists the add-ons that are installed for a specified policy.
       *
       * @param request ListIntegrationPolicyAddonsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyAddonsResponse
       */
      Models::ListIntegrationPolicyAddonsResponse listIntegrationPolicyAddonsWithOptions(const string &policyId, const Models::ListIntegrationPolicyAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the add-ons that are installed for a specified policy.
       *
       * @description Lists the add-ons that are installed for a specified policy.
       *
       * @param request ListIntegrationPolicyAddonsRequest
       * @return ListIntegrationPolicyAddonsResponse
       */
      Models::ListIntegrationPolicyAddonsResponse listIntegrationPolicyAddons(const string &policyId, const Models::ListIntegrationPolicyAddonsRequest &request);

      /**
       * @summary Returns information about collectors for an Integration Center policy.
       *
       * @param request ListIntegrationPolicyCollectorsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyCollectorsResponse
       */
      Models::ListIntegrationPolicyCollectorsResponse listIntegrationPolicyCollectorsWithOptions(const string &policyId, const Models::ListIntegrationPolicyCollectorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns information about collectors for an Integration Center policy.
       *
       * @param request ListIntegrationPolicyCollectorsRequest
       * @return ListIntegrationPolicyCollectorsResponse
       */
      Models::ListIntegrationPolicyCollectorsResponse listIntegrationPolicyCollectors(const string &policyId, const Models::ListIntegrationPolicyCollectorsRequest &request);

      /**
       * @summary Lists the custom service discovery rules for an Integration Center policy.
       *
       * @param request ListIntegrationPolicyCustomScrapeJobRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyCustomScrapeJobRulesResponse
       */
      Models::ListIntegrationPolicyCustomScrapeJobRulesResponse listIntegrationPolicyCustomScrapeJobRulesWithOptions(const string &policyId, const Models::ListIntegrationPolicyCustomScrapeJobRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the custom service discovery rules for an Integration Center policy.
       *
       * @param request ListIntegrationPolicyCustomScrapeJobRulesRequest
       * @return ListIntegrationPolicyCustomScrapeJobRulesResponse
       */
      Models::ListIntegrationPolicyCustomScrapeJobRulesResponse listIntegrationPolicyCustomScrapeJobRules(const string &policyId, const Models::ListIntegrationPolicyCustomScrapeJobRulesRequest &request);

      /**
       * @summary Queries a list of integration policy dashboards.
       *
       * @description This topic provides an example of how to query a list of integration policy dashboards.
       *
       * @param request ListIntegrationPolicyDashboardsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyDashboardsResponse
       */
      Models::ListIntegrationPolicyDashboardsResponse listIntegrationPolicyDashboardsWithOptions(const string &policyId, const Models::ListIntegrationPolicyDashboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of integration policy dashboards.
       *
       * @description This topic provides an example of how to query a list of integration policy dashboards.
       *
       * @param request ListIntegrationPolicyDashboardsRequest
       * @return ListIntegrationPolicyDashboardsResponse
       */
      Models::ListIntegrationPolicyDashboardsResponse listIntegrationPolicyDashboards(const string &policyId, const Models::ListIntegrationPolicyDashboardsRequest &request);

      /**
       * @summary Lists the PodMonitor resources for an Integration Center policy.
       *
       * @description This topic provides an example of how to list the PodMonitor resources for an Integration Center policy.
       *
       * @param request ListIntegrationPolicyPodMonitorsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyPodMonitorsResponse
       */
      Models::ListIntegrationPolicyPodMonitorsResponse listIntegrationPolicyPodMonitorsWithOptions(const string &policyId, const Models::ListIntegrationPolicyPodMonitorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the PodMonitor resources for an Integration Center policy.
       *
       * @description This topic provides an example of how to list the PodMonitor resources for an Integration Center policy.
       *
       * @param request ListIntegrationPolicyPodMonitorsRequest
       * @return ListIntegrationPolicyPodMonitorsResponse
       */
      Models::ListIntegrationPolicyPodMonitorsResponse listIntegrationPolicyPodMonitors(const string &policyId, const Models::ListIntegrationPolicyPodMonitorsRequest &request);

      /**
       * @summary Retrieves the ServiceMonitor information for an Integration Center policy.
       *
       * @param request ListIntegrationPolicyServiceMonitorsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyServiceMonitorsResponse
       */
      Models::ListIntegrationPolicyServiceMonitorsResponse listIntegrationPolicyServiceMonitorsWithOptions(const string &policyId, const Models::ListIntegrationPolicyServiceMonitorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the ServiceMonitor information for an Integration Center policy.
       *
       * @param request ListIntegrationPolicyServiceMonitorsRequest
       * @return ListIntegrationPolicyServiceMonitorsResponse
       */
      Models::ListIntegrationPolicyServiceMonitorsResponse listIntegrationPolicyServiceMonitors(const string &policyId, const Models::ListIntegrationPolicyServiceMonitorsRequest &request);

      /**
       * @summary Lists the storage requirements for an Integration Center policy.
       *
       * @description When a policy is active, alert notifications are not sent for alerts that occur in the application group.
       * This topic provides an example of creating a policy named `PauseNotify`. This policy pauses alert notifications for application group `7301****` from `1622949300000` to `1623208500000` (from `2021-06-06 11:15:00` to `2021-06-09 11:15:00` UTC+8).
       *
       * @param request ListIntegrationPolicyStorageRequirementsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyStorageRequirementsResponse
       */
      Models::ListIntegrationPolicyStorageRequirementsResponse listIntegrationPolicyStorageRequirementsWithOptions(const string &policyId, const Models::ListIntegrationPolicyStorageRequirementsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the storage requirements for an Integration Center policy.
       *
       * @description When a policy is active, alert notifications are not sent for alerts that occur in the application group.
       * This topic provides an example of creating a policy named `PauseNotify`. This policy pauses alert notifications for application group `7301****` from `1622949300000` to `1623208500000` (from `2021-06-06 11:15:00` to `2021-06-09 11:15:00` UTC+8).
       *
       * @param request ListIntegrationPolicyStorageRequirementsRequest
       * @return ListIntegrationPolicyStorageRequirementsResponse
       */
      Models::ListIntegrationPolicyStorageRequirementsResponse listIntegrationPolicyStorageRequirements(const string &policyId, const Models::ListIntegrationPolicyStorageRequirementsRequest &request);

      /**
       * @summary Retrieves a list of memory stores.
       *
       * @param request ListMemoryStoresRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemoryStoresResponse
       */
      Models::ListMemoryStoresResponse listMemoryStoresWithOptions(const string &workspace, const Models::ListMemoryStoresRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of memory stores.
       *
       * @param request ListMemoryStoresRequest
       * @return ListMemoryStoresResponse
       */
      Models::ListMemoryStoresResponse listMemoryStores(const string &workspace, const Models::ListMemoryStoresRequest &request);

      /**
       * @summary Queries a list of pipelines in a workspace.
       *
       * @param request ListPipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelinesResponse
       */
      Models::ListPipelinesResponse listPipelinesWithOptions(const string &workspace, const Models::ListPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of pipelines in a workspace.
       *
       * @param request ListPipelinesRequest
       * @return ListPipelinesResponse
       */
      Models::ListPipelinesResponse listPipelines(const string &workspace, const Models::ListPipelinesRequest &request);

      /**
       * @summary Retrieves a list of dashboards for a Prometheus instance.
       *
       * @description Retrieves a list of dashboards for a Prometheus instance.
       *
       * @param request ListPrometheusDashboardsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusDashboardsResponse
       */
      Models::ListPrometheusDashboardsResponse listPrometheusDashboardsWithOptions(const string &prometheusInstanceId, const Models::ListPrometheusDashboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of dashboards for a Prometheus instance.
       *
       * @description Retrieves a list of dashboards for a Prometheus instance.
       *
       * @param request ListPrometheusDashboardsRequest
       * @return ListPrometheusDashboardsResponse
       */
      Models::ListPrometheusDashboardsResponse listPrometheusDashboards(const string &prometheusInstanceId, const Models::ListPrometheusDashboardsRequest &request);

      /**
       * @summary Lists Prometheus instances.
       *
       * @description Lists Prometheus instances.
       *
       * @param tmpReq ListPrometheusInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusInstancesResponse
       */
      Models::ListPrometheusInstancesResponse listPrometheusInstancesWithOptions(const Models::ListPrometheusInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists Prometheus instances.
       *
       * @description Lists Prometheus instances.
       *
       * @param request ListPrometheusInstancesRequest
       * @return ListPrometheusInstancesResponse
       */
      Models::ListPrometheusInstancesResponse listPrometheusInstances(const Models::ListPrometheusInstancesRequest &request);

      /**
       * @summary Lists the Prometheus view instances.
       *
       * @description Lists the Prometheus view instances.
       *
       * @param tmpReq ListPrometheusViewsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusViewsResponse
       */
      Models::ListPrometheusViewsResponse listPrometheusViewsWithOptions(const Models::ListPrometheusViewsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the Prometheus view instances.
       *
       * @description Lists the Prometheus view instances.
       *
       * @param request ListPrometheusViewsRequest
       * @return ListPrometheusViewsResponse
       */
      Models::ListPrometheusViewsResponse listPrometheusViews(const Models::ListPrometheusViewsRequest &request);

      /**
       * @summary Retrieves Prometheus virtual instances.
       *
       * @param request ListPrometheusVirtualInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusVirtualInstancesResponse
       */
      Models::ListPrometheusVirtualInstancesResponse listPrometheusVirtualInstancesWithOptions(const Models::ListPrometheusVirtualInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves Prometheus virtual instances.
       *
       * @param request ListPrometheusVirtualInstancesRequest
       * @return ListPrometheusVirtualInstancesResponse
       */
      Models::ListPrometheusVirtualInstancesResponse listPrometheusVirtualInstances(const Models::ListPrometheusVirtualInstancesRequest &request);

      /**
       * @summary Queries a list of application observability services.
       *
       * @param tmpReq ListServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServicesWithOptions(const string &workspace, const Models::ListServicesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of application observability services.
       *
       * @param request ListServicesRequest
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServices(const string &workspace, const Models::ListServicesRequest &request);

      /**
       * @summary Queries the tags attached to resources.
       *
       * @param tmpReq ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags attached to resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Retrieves a list of workspaces.
       *
       * @param tmpReq ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of workspaces.
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary Manages alert rules.
       *
       * @param tmpReq ManageAlertRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManageAlertRulesResponse
       */
      Models::ManageAlertRulesResponse manageAlertRulesWithOptions(const Models::ManageAlertRulesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manages alert rules.
       *
       * @param request ManageAlertRulesRequest
       * @return ManageAlertRulesResponse
       */
      Models::ManageAlertRulesResponse manageAlertRules(const Models::ManageAlertRulesRequest &request);

      /**
       * @summary This operation enables monitoring services, including CloudMonitor Enterprise, Managed Service for Prometheus, and Log Service.
       *
       * @param request OpenCmsServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenCmsServiceResponse
       */
      Models::OpenCmsServiceResponse openCmsServiceWithOptions(const Models::OpenCmsServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation enables monitoring services, including CloudMonitor Enterprise, Managed Service for Prometheus, and Log Service.
       *
       * @param request OpenCmsServiceRequest
       * @return OpenCmsServiceResponse
       */
      Models::OpenCmsServiceResponse openCmsService(const Models::OpenCmsServiceRequest &request);

      /**
       * @summary Creates a workspace.
       *
       * @param request PutWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutWorkspaceResponse
       */
      Models::PutWorkspaceResponse putWorkspaceWithOptions(const string &workspaceName, const Models::PutWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace.
       *
       * @param request PutWorkspaceRequest
       * @return PutWorkspaceResponse
       */
      Models::PutWorkspaceResponse putWorkspace(const string &workspaceName, const Models::PutWorkspaceRequest &request);

      /**
       * @summary Retrieves a list of alert rules.
       *
       * @description This topic provides an example of how to retrieve a list of alert rules. In this example, a successful response returns two alert rules: `ECS_Template1` and `ECS_Template2`.
       *
       * @param tmpReq QueryAlertRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAlertRulesResponse
       */
      Models::QueryAlertRulesResponse queryAlertRulesWithOptions(const Models::QueryAlertRulesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of alert rules.
       *
       * @description This topic provides an example of how to retrieve a list of alert rules. In this example, a successful response returns two alert rules: `ECS_Template1` and `ECS_Template2`.
       *
       * @param request QueryAlertRulesRequest
       * @return QueryAlertRulesResponse
       */
      Models::QueryAlertRulesResponse queryAlertRules(const Models::QueryAlertRulesRequest &request);

      /**
       * @summary Search context.
       *
       * @param request SearchContextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchContextResponse
       */
      Models::SearchContextResponse searchContextWithOptions(const string &workspace, const string &contextStoreName, const Models::SearchContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search context.
       *
       * @param request SearchContextRequest
       * @return SearchContextResponse
       */
      Models::SearchContextResponse searchContext(const string &workspace, const string &contextStoreName, const Models::SearchContextRequest &request);

      /**
       * @summary Search memories using query conditions and filters.
       *
       * @param request SearchMemoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMemoriesResponse
       */
      Models::SearchMemoriesResponse searchMemoriesWithOptions(const string &workspace, const string &memoryStoreName, const Models::SearchMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search memories using query conditions and filters.
       *
       * @param request SearchMemoriesRequest
       * @return SearchMemoriesResponse
       */
      Models::SearchMemoriesResponse searchMemories(const string &workspace, const string &memoryStoreName, const Models::SearchMemoriesRequest &request);

      /**
       * @summary Adds tags to one or more resources.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to one or more resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Deletes a tag
       *
       * @param tmpReq UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a tag
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Upgrades an add-on component.
       *
       * @param request UpdateAddonReleaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAddonReleaseResponse
       */
      Models::UpdateAddonReleaseResponse updateAddonReleaseWithOptions(const string &releaseName, const string &policyId, const Models::UpdateAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades an add-on component.
       *
       * @param request UpdateAddonReleaseRequest
       * @return UpdateAddonReleaseResponse
       */
      Models::UpdateAddonReleaseResponse updateAddonRelease(const string &releaseName, const string &policyId, const Models::UpdateAddonReleaseRequest &request);

      /**
       * @summary Updates an aggregation task group.
       *
       * @param request UpdateAggTaskGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggTaskGroupResponse
       */
      Models::UpdateAggTaskGroupResponse updateAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const Models::UpdateAggTaskGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an aggregation task group.
       *
       * @param request UpdateAggTaskGroupRequest
       * @return UpdateAggTaskGroupResponse
       */
      Models::UpdateAggTaskGroupResponse updateAggTaskGroup(const string &instanceId, const string &groupId, const Models::UpdateAggTaskGroupRequest &request);

      /**
       * @summary Updates the status of an aggregation task group.
       *
       * @param request UpdateAggTaskGroupStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggTaskGroupStatusResponse
       */
      Models::UpdateAggTaskGroupStatusResponse updateAggTaskGroupStatusWithOptions(const string &instanceId, const string &groupId, const Models::UpdateAggTaskGroupStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of an aggregation task group.
       *
       * @param request UpdateAggTaskGroupStatusRequest
       * @return UpdateAggTaskGroupStatusResponse
       */
      Models::UpdateAggTaskGroupStatusResponse updateAggTaskGroupStatus(const string &instanceId, const string &groupId, const Models::UpdateAggTaskGroupStatusRequest &request);

      /**
       * @summary Updates a webhook.
       *
       * @param request UpdateAlertWebhookRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertWebhookResponse
       */
      Models::UpdateAlertWebhookResponse updateAlertWebhookWithOptions(const string &webhookId, const Models::UpdateAlertWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a webhook.
       *
       * @param request UpdateAlertWebhookRequest
       * @return UpdateAlertWebhookResponse
       */
      Models::UpdateAlertWebhookResponse updateAlertWebhook(const string &webhookId, const Models::UpdateAlertWebhookRequest &request);

      /**
       * @summary Modifies a business trace.
       *
       * @param request UpdateBizTraceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBizTraceResponse
       */
      Models::UpdateBizTraceResponse updateBizTraceWithOptions(const string &bizTraceId, const Models::UpdateBizTraceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a business trace.
       *
       * @param request UpdateBizTraceRequest
       * @return UpdateBizTraceResponse
       */
      Models::UpdateBizTraceResponse updateBizTrace(const string &bizTraceId, const Models::UpdateBizTraceRequest &request);

      /**
       * @summary Updates a context.
       *
       * @param request UpdateContextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContextResponse
       */
      Models::UpdateContextResponse updateContextWithOptions(const string &workspace, const string &contextStoreName, const string &contextId, const Models::UpdateContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a context.
       *
       * @param request UpdateContextRequest
       * @return UpdateContextResponse
       */
      Models::UpdateContextResponse updateContext(const string &workspace, const string &contextStoreName, const string &contextId, const Models::UpdateContextRequest &request);

      /**
       * @summary Updates the configuration of a context store.
       *
       * @param request UpdateContextStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContextStoreResponse
       */
      Models::UpdateContextStoreResponse updateContextStoreWithOptions(const string &workspace, const string &contextStoreName, const Models::UpdateContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a context store.
       *
       * @param request UpdateContextStoreRequest
       * @return UpdateContextStoreResponse
       */
      Models::UpdateContextStoreResponse updateContextStore(const string &workspace, const string &contextStoreName, const Models::UpdateContextStoreRequest &request);

      /**
       * @summary Updates a dataset.
       *
       * @param request UpdateDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDatasetWithOptions(const string &workspace, const string &datasetName, const Models::UpdateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a dataset.
       *
       * @param request UpdateDatasetRequest
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDataset(const string &workspace, const string &datasetName, const Models::UpdateDatasetRequest &request);

      /**
       * @summary Updates a delivery task. This operation uses PATCH semantics, meaning unspecified fields in the request body remain unchanged.
       *
       * @param request UpdateDeliveryTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDeliveryTaskResponse
       */
      Models::UpdateDeliveryTaskResponse updateDeliveryTaskWithOptions(const string &taskId, const Models::UpdateDeliveryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a delivery task. This operation uses PATCH semantics, meaning unspecified fields in the request body remain unchanged.
       *
       * @param request UpdateDeliveryTaskRequest
       * @return UpdateDeliveryTaskResponse
       */
      Models::UpdateDeliveryTaskResponse updateDeliveryTask(const string &taskId, const Models::UpdateDeliveryTaskRequest &request);

      /**
       * @summary Updates the specified policy.
       *
       * @param request UpdateIntegrationPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIntegrationPolicyResponse
       */
      Models::UpdateIntegrationPolicyResponse updateIntegrationPolicyWithOptions(const string &integrationPolicyId, const Models::UpdateIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the specified policy.
       *
       * @param request UpdateIntegrationPolicyRequest
       * @return UpdateIntegrationPolicyResponse
       */
      Models::UpdateIntegrationPolicyResponse updateIntegrationPolicy(const string &integrationPolicyId, const Models::UpdateIntegrationPolicyRequest &request);

      /**
       * @summary Updates a specific Memory.
       *
       * @param request UpdateMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemoryWithOptions(const string &workspace, const string &memoryStoreName, const string &memoryId, const Models::UpdateMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a specific Memory.
       *
       * @param request UpdateMemoryRequest
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemory(const string &workspace, const string &memoryStoreName, const string &memoryId, const Models::UpdateMemoryRequest &request);

      /**
       * @summary Modify a memory store.
       *
       * @param request UpdateMemoryStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryStoreResponse
       */
      Models::UpdateMemoryStoreResponse updateMemoryStoreWithOptions(const string &workspace, const string &memoryStoreName, const Models::UpdateMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify a memory store.
       *
       * @param request UpdateMemoryStoreRequest
       * @return UpdateMemoryStoreResponse
       */
      Models::UpdateMemoryStoreResponse updateMemoryStore(const string &workspace, const string &memoryStoreName, const Models::UpdateMemoryStoreRequest &request);

      /**
       * @summary Updates a notification policy.
       *
       * @param request UpdateNotifyStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNotifyStrategyResponse
       */
      Models::UpdateNotifyStrategyResponse updateNotifyStrategyWithOptions(const string &notifyStrategyId, const Models::UpdateNotifyStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a notification policy.
       *
       * @param request UpdateNotifyStrategyRequest
       * @return UpdateNotifyStrategyResponse
       */
      Models::UpdateNotifyStrategyResponse updateNotifyStrategy(const string &notifyStrategyId, const Models::UpdateNotifyStrategyRequest &request);

      /**
       * @summary Update pipeline
       *
       * @param request UpdatePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipelineWithOptions(const string &workspace, const string &pipelineName, const Models::UpdatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update pipeline
       *
       * @param request UpdatePipelineRequest
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipeline(const string &workspace, const string &pipelineName, const Models::UpdatePipelineRequest &request);

      /**
       * @summary Updates the information of a Prometheus instance.
       *
       * @description This topic describes how to update a Prometheus instance.
       *
       * @param request UpdatePrometheusInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusInstanceResponse
       */
      Models::UpdatePrometheusInstanceResponse updatePrometheusInstanceWithOptions(const string &prometheusInstanceId, const Models::UpdatePrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a Prometheus instance.
       *
       * @description This topic describes how to update a Prometheus instance.
       *
       * @param request UpdatePrometheusInstanceRequest
       * @return UpdatePrometheusInstanceResponse
       */
      Models::UpdatePrometheusInstanceResponse updatePrometheusInstance(const string &prometheusInstanceId, const Models::UpdatePrometheusInstanceRequest &request);

      /**
       * @summary Updates the user settings for Prometheus. Note: If you set `settingKey` to `financeUsageRegion`, Prometheus usage data is sent to Simple Log Service (SLS) in the specified region. Historical usage data will no longer be available in the Prometheus console.
       *
       * @param request UpdatePrometheusUserSettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusUserSettingResponse
       */
      Models::UpdatePrometheusUserSettingResponse updatePrometheusUserSettingWithOptions(const string &settingKey, const Models::UpdatePrometheusUserSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the user settings for Prometheus. Note: If you set `settingKey` to `financeUsageRegion`, Prometheus usage data is sent to Simple Log Service (SLS) in the specified region. Historical usage data will no longer be available in the Prometheus console.
       *
       * @param request UpdatePrometheusUserSettingRequest
       * @return UpdatePrometheusUserSettingResponse
       */
      Models::UpdatePrometheusUserSettingResponse updatePrometheusUserSetting(const string &settingKey, const Models::UpdatePrometheusUserSettingRequest &request);

      /**
       * @summary Updates the information about a Prometheus view instance.
       *
       * @description Updates the information about a Prometheus view instance.
       *
       * @param request UpdatePrometheusViewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusViewResponse
       */
      Models::UpdatePrometheusViewResponse updatePrometheusViewWithOptions(const string &prometheusViewId, const Models::UpdatePrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a Prometheus view instance.
       *
       * @description Updates the information about a Prometheus view instance.
       *
       * @param request UpdatePrometheusViewRequest
       * @return UpdatePrometheusViewResponse
       */
      Models::UpdatePrometheusViewResponse updatePrometheusView(const string &prometheusViewId, const Models::UpdatePrometheusViewRequest &request);

      /**
       * @summary Updates an application observability service.
       *
       * @param request UpdateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateServiceWithOptions(const string &workspace, const string &serviceId, const Models::UpdateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an application observability service.
       *
       * @param request UpdateServiceRequest
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateService(const string &workspace, const string &serviceId, const Models::UpdateServiceRequest &request);

      /**
       * @summary Updates a subscription.
       *
       * @param request UpdateSubscriptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscriptionWithOptions(const string &subscriptionId, const Models::UpdateSubscriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a subscription.
       *
       * @param request UpdateSubscriptionRequest
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscription(const string &subscriptionId, const Models::UpdateSubscriptionRequest &request);

      /**
       * @summary Updates the configuration of a Umodel.
       *
       * @description Updates the configuration of a Umodel.
       *
       * @param request UpdateUmodelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUmodelResponse
       */
      Models::UpdateUmodelResponse updateUmodelWithOptions(const string &workspace, const Models::UpdateUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a Umodel.
       *
       * @description Updates the configuration of a Umodel.
       *
       * @param request UpdateUmodelRequest
       * @return UpdateUmodelResponse
       */
      Models::UpdateUmodelResponse updateUmodel(const string &workspace, const Models::UpdateUmodelRequest &request);

      /**
       * @summary Upserts a common Umodel schema reference.
       *
       * @param request UpsertUmodelCommonSchemaRefRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertUmodelCommonSchemaRefResponse
       */
      Models::UpsertUmodelCommonSchemaRefResponse upsertUmodelCommonSchemaRefWithOptions(const string &workspace, const Models::UpsertUmodelCommonSchemaRefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upserts a common Umodel schema reference.
       *
       * @param request UpsertUmodelCommonSchemaRefRequest
       * @return UpsertUmodelCommonSchemaRefResponse
       */
      Models::UpsertUmodelCommonSchemaRefResponse upsertUmodelCommonSchemaRef(const string &workspace, const Models::UpsertUmodelCommonSchemaRefRequest &request);

      /**
       * @summary Inserts or updates Umodel elements.
       *
       * @param request UpsertUmodelDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertUmodelDataResponse
       */
      Models::UpsertUmodelDataResponse upsertUmodelDataWithOptions(const string &workspace, const Models::UpsertUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Inserts or updates Umodel elements.
       *
       * @param request UpsertUmodelDataRequest
       * @return UpsertUmodelDataResponse
       */
      Models::UpsertUmodelDataResponse upsertUmodelData(const string &workspace, const Models::UpsertUmodelDataRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
