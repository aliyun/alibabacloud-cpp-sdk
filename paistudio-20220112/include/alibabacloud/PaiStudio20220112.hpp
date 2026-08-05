// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAISTUDIO20220112_HPP_
#define ALIBABACLOUD_PAISTUDIO20220112_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PaiStudio20220112Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PaiStudio20220112.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Checks the connection to the instance container.
       *
       * @param request CheckInstanceWebTerminalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceWebTerminalResponse
       */
      Models::CheckInstanceWebTerminalResponse checkInstanceWebTerminalWithOptions(const string &TrainingJobId, const string &InstanceId, const Models::CheckInstanceWebTerminalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the connection to the instance container.
       *
       * @param request CheckInstanceWebTerminalRequest
       * @return CheckInstanceWebTerminalResponse
       */
      Models::CheckInstanceWebTerminalResponse checkInstanceWebTerminal(const string &TrainingJobId, const string &InstanceId, const Models::CheckInstanceWebTerminalRequest &request);

      /**
       * @summary Creates an algorithm.
       *
       * @param request CreateAlgorithmRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlgorithmResponse
       */
      Models::CreateAlgorithmResponse createAlgorithmWithOptions(const Models::CreateAlgorithmRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an algorithm.
       *
       * @param request CreateAlgorithmRequest
       * @return CreateAlgorithmResponse
       */
      Models::CreateAlgorithmResponse createAlgorithm(const Models::CreateAlgorithmRequest &request);

      /**
       * @summary Creates a version of an algorithm.
       *
       * @param tmpReq CreateAlgorithmVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlgorithmVersionResponse
       */
      Models::CreateAlgorithmVersionResponse createAlgorithmVersionWithOptions(const string &AlgorithmId, const string &AlgorithmVersion, const Models::CreateAlgorithmVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a version of an algorithm.
       *
       * @param request CreateAlgorithmVersionRequest
       * @return CreateAlgorithmVersionResponse
       */
      Models::CreateAlgorithmVersionResponse createAlgorithmVersion(const string &AlgorithmId, const string &AlgorithmVersion, const Models::CreateAlgorithmVersionRequest &request);

      /**
       * @summary You can create a link to access the container of the instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceWebTerminalResponse
       */
      Models::CreateInstanceWebTerminalResponse createInstanceWebTerminalWithOptions(const string &TrainingJobId, const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can create a link to access the container of the instance.
       *
       * @return CreateInstanceWebTerminalResponse
       */
      Models::CreateInstanceWebTerminalResponse createInstanceWebTerminal(const string &TrainingJobId, const string &InstanceId);

      /**
       * @summary Call the `CreateQuota` operation to create a quota.
       *
       * @param request CreateQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQuotaResponse
       */
      Models::CreateQuotaResponse createQuotaWithOptions(const Models::CreateQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the `CreateQuota` operation to create a quota.
       *
       * @param request CreateQuotaRequest
       * @return CreateQuotaResponse
       */
      Models::CreateQuotaResponse createQuota(const Models::CreateQuotaRequest &request);

      /**
       * @summary Use the CreateResourceGroup operation to create a resource group.
       *
       * @param request CreateResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroupWithOptions(const Models::CreateResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the CreateResourceGroup operation to create a resource group.
       *
       * @param request CreateResourceGroupRequest
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroup(const Models::CreateResourceGroupRequest &request);

      /**
       * @summary Creates a training job.
       *
       * @param request CreateTrainingJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrainingJobResponse
       */
      Models::CreateTrainingJobResponse createTrainingJobWithOptions(const Models::CreateTrainingJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a training job.
       *
       * @param request CreateTrainingJobRequest
       * @return CreateTrainingJobResponse
       */
      Models::CreateTrainingJobResponse createTrainingJob(const Models::CreateTrainingJobRequest &request);

      /**
       * @summary Deletes an algorithm.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlgorithmResponse
       */
      Models::DeleteAlgorithmResponse deleteAlgorithmWithOptions(const string &AlgorithmId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an algorithm.
       *
       * @return DeleteAlgorithmResponse
       */
      Models::DeleteAlgorithmResponse deleteAlgorithm(const string &AlgorithmId);

      /**
       * @summary Deletes an algorithm version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlgorithmVersionResponse
       */
      Models::DeleteAlgorithmVersionResponse deleteAlgorithmVersionWithOptions(const string &AlgorithmId, const string &AlgorithmVersion, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an algorithm version.
       *
       * @return DeleteAlgorithmVersionResponse
       */
      Models::DeleteAlgorithmVersionResponse deleteAlgorithmVersion(const string &AlgorithmId, const string &AlgorithmVersion);

      /**
       * @deprecated OpenAPI DeleteMachineGroup is deprecated
       *
       * @summary Deletes a machine group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMachineGroupResponse
       */
      Models::DeleteMachineGroupResponse deleteMachineGroupWithOptions(const string &MachineGroupID, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteMachineGroup is deprecated
       *
       * @summary Deletes a machine group.
       *
       * @return DeleteMachineGroupResponse
       */
      Models::DeleteMachineGroupResponse deleteMachineGroup(const string &MachineGroupID);

      /**
       * @summary You can delete a resource quota by using DeleteQuota.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQuotaResponse
       */
      Models::DeleteQuotaResponse deleteQuotaWithOptions(const string &QuotaId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can delete a resource quota by using DeleteQuota.
       *
       * @return DeleteQuotaResponse
       */
      Models::DeleteQuotaResponse deleteQuota(const string &QuotaId);

      /**
       * @summary Deletes a resource group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroupWithOptions(const string &ResourceGroupID, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource group.
       *
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroup(const string &ResourceGroupID);

      /**
       * @deprecated OpenAPI DeleteResourceGroupMachineGroup is deprecated
       *
       * @summary Deletes the specified machine group from a resource group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceGroupMachineGroupResponse
       */
      Models::DeleteResourceGroupMachineGroupResponse deleteResourceGroupMachineGroupWithOptions(const string &MachineGroupID, const string &ResourceGroupID, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteResourceGroupMachineGroup is deprecated
       *
       * @summary Deletes the specified machine group from a resource group.
       *
       * @return DeleteResourceGroupMachineGroupResponse
       */
      Models::DeleteResourceGroupMachineGroupResponse deleteResourceGroupMachineGroup(const string &MachineGroupID, const string &ResourceGroupID);

      /**
       * @summary Deletes a training task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrainingJobResponse
       */
      Models::DeleteTrainingJobResponse deleteTrainingJobWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a training task.
       *
       * @return DeleteTrainingJobResponse
       */
      Models::DeleteTrainingJobResponse deleteTrainingJob(const string &TrainingJobId);

      /**
       * @summary Deletes the labels of a training task.
       *
       * @param request DeleteTrainingJobLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrainingJobLabelsResponse
       */
      Models::DeleteTrainingJobLabelsResponse deleteTrainingJobLabelsWithOptions(const string &TrainingJobId, const Models::DeleteTrainingJobLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the labels of a training task.
       *
       * @param request DeleteTrainingJobLabelsRequest
       * @return DeleteTrainingJobLabelsResponse
       */
      Models::DeleteTrainingJobLabelsResponse deleteTrainingJobLabels(const string &TrainingJobId, const Models::DeleteTrainingJobLabelsRequest &request);

      /**
       * @summary Retrieves algorithm details.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlgorithmResponse
       */
      Models::GetAlgorithmResponse getAlgorithmWithOptions(const string &AlgorithmId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves algorithm details.
       *
       * @return GetAlgorithmResponse
       */
      Models::GetAlgorithmResponse getAlgorithm(const string &AlgorithmId);

      /**
       * @summary Retrieve details about an algorithm version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlgorithmVersionResponse
       */
      Models::GetAlgorithmVersionResponse getAlgorithmVersionWithOptions(const string &AlgorithmId, const string &AlgorithmVersion, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve details about an algorithm version.
       *
       * @return GetAlgorithmVersionResponse
       */
      Models::GetAlgorithmVersionResponse getAlgorithmVersion(const string &AlgorithmId, const string &AlgorithmVersion);

      /**
       * @deprecated OpenAPI GetMachineGroup is deprecated
       *
       * @summary Retrieves the details of a specific machine group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMachineGroupResponse
       */
      Models::GetMachineGroupResponse getMachineGroupWithOptions(const string &MachineGroupID, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetMachineGroup is deprecated
       *
       * @summary Retrieves the details of a specific machine group.
       *
       * @return GetMachineGroupResponse
       */
      Models::GetMachineGroupResponse getMachineGroup(const string &MachineGroupID);

      /**
       * @deprecated OpenAPI GetNodeMetrics is deprecated
       *
       * @summary You can call the GetNodeMetrics operation to obtain the metric information of resource group nodes.
       *
       * @param request GetNodeMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeMetricsResponse
       */
      Models::GetNodeMetricsResponse getNodeMetricsWithOptions(const string &ResourceGroupID, const string &MetricType, const Models::GetNodeMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetNodeMetrics is deprecated
       *
       * @summary You can call the GetNodeMetrics operation to obtain the metric information of resource group nodes.
       *
       * @param request GetNodeMetricsRequest
       * @return GetNodeMetricsResponse
       */
      Models::GetNodeMetricsResponse getNodeMetrics(const string &ResourceGroupID, const string &MetricType, const Models::GetNodeMetricsRequest &request);

      /**
       * @summary Call GetQuota to retrieve the details of a resource quota. This helps you monitor current resource usage for effective resource management and planning.
       *
       * @param request GetQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaResponse
       */
      Models::GetQuotaResponse getQuotaWithOptions(const string &QuotaId, const Models::GetQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call GetQuota to retrieve the details of a resource quota. This helps you monitor current resource usage for effective resource management and planning.
       *
       * @param request GetQuotaRequest
       * @return GetQuotaResponse
       */
      Models::GetQuotaResponse getQuota(const string &QuotaId, const Models::GetQuotaRequest &request);

      /**
       * @summary `GetResourceGroup` retrieves details for a resource group.
       *
       * @param tmpReq GetResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupResponse
       */
      Models::GetResourceGroupResponse getResourceGroupWithOptions(const string &ResourceGroupID, const Models::GetResourceGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary `GetResourceGroup` retrieves details for a resource group.
       *
       * @param request GetResourceGroupRequest
       * @return GetResourceGroupResponse
       */
      Models::GetResourceGroupResponse getResourceGroup(const string &ResourceGroupID, const Models::GetResourceGroupRequest &request);

      /**
       * @summary Call GetResourceGroupMachineGroup to retrieve the details of a machine group.
       *
       * @param tmpReq GetResourceGroupMachineGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupMachineGroupResponse
       */
      Models::GetResourceGroupMachineGroupResponse getResourceGroupMachineGroupWithOptions(const string &MachineGroupID, const string &ResourceGroupID, const Models::GetResourceGroupMachineGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call GetResourceGroupMachineGroup to retrieve the details of a machine group.
       *
       * @param request GetResourceGroupMachineGroupRequest
       * @return GetResourceGroupMachineGroupResponse
       */
      Models::GetResourceGroupMachineGroupResponse getResourceGroupMachineGroup(const string &MachineGroupID, const string &ResourceGroupID, const Models::GetResourceGroupMachineGroupRequest &request);

      /**
       * @deprecated OpenAPI GetResourceGroupRequest is deprecated
       *
       * @summary You can call the GetResourceGroupRequest operation to obtain the number of resources that have been allocated to a resource group.
       *
       * @param request GetResourceGroupRequestRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupRequestResponse
       */
      Models::GetResourceGroupRequestResponse getResourceGroupRequestWithOptions(const Models::GetResourceGroupRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetResourceGroupRequest is deprecated
       *
       * @summary You can call the GetResourceGroupRequest operation to obtain the number of resources that have been allocated to a resource group.
       *
       * @param request GetResourceGroupRequestRequest
       * @return GetResourceGroupRequestResponse
       */
      Models::GetResourceGroupRequestResponse getResourceGroupRequest(const Models::GetResourceGroupRequestRequest &request);

      /**
       * @summary You can call GetResourceGroupTotal to get the total resources of a Resource Group.
       *
       * @param request GetResourceGroupTotalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupTotalResponse
       */
      Models::GetResourceGroupTotalResponse getResourceGroupTotalWithOptions(const Models::GetResourceGroupTotalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call GetResourceGroupTotal to get the total resources of a Resource Group.
       *
       * @param request GetResourceGroupTotalRequest
       * @return GetResourceGroupTotalResponse
       */
      Models::GetResourceGroupTotalResponse getResourceGroupTotal(const Models::GetResourceGroupTotalRequest &request);

      /**
       * @summary Retrieves the historical prices of spot instances.
       *
       * @param request GetSpotPriceHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSpotPriceHistoryResponse
       */
      Models::GetSpotPriceHistoryResponse getSpotPriceHistoryWithOptions(const string &InstanceType, const Models::GetSpotPriceHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the historical prices of spot instances.
       *
       * @param request GetSpotPriceHistoryRequest
       * @return GetSpotPriceHistoryResponse
       */
      Models::GetSpotPriceHistoryResponse getSpotPriceHistory(const string &InstanceType, const Models::GetSpotPriceHistoryRequest &request);

      /**
       * @summary Obtains a share token for a training task.
       *
       * @param request GetTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getTokenWithOptions(const Models::GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a share token for a training task.
       *
       * @param request GetTokenRequest
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getToken(const Models::GetTokenRequest &request);

      /**
       * @summary Retrieves the details of a training job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrainingJobResponse
       */
      Models::GetTrainingJobResponse getTrainingJobWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a training job.
       *
       * @return GetTrainingJobResponse
       */
      Models::GetTrainingJobResponse getTrainingJob(const string &TrainingJobId);

      /**
       * @summary Retrieves the runtime fault error message of a training node.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrainingJobErrorInfoResponse
       */
      Models::GetTrainingJobErrorInfoResponse getTrainingJobErrorInfoWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the runtime fault error message of a training node.
       *
       * @return GetTrainingJobErrorInfoResponse
       */
      Models::GetTrainingJobErrorInfoResponse getTrainingJobErrorInfo(const string &TrainingJobId);

      /**
       * @summary Retrieves the latest metrics for a training task.
       *
       * @param request GetTrainingJobLatestMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrainingJobLatestMetricsResponse
       */
      Models::GetTrainingJobLatestMetricsResponse getTrainingJobLatestMetricsWithOptions(const string &TrainingJobId, const Models::GetTrainingJobLatestMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the latest metrics for a training task.
       *
       * @param request GetTrainingJobLatestMetricsRequest
       * @return GetTrainingJobLatestMetricsResponse
       */
      Models::GetTrainingJobLatestMetricsResponse getTrainingJobLatestMetrics(const string &TrainingJobId, const Models::GetTrainingJobLatestMetricsRequest &request);

      /**
       * @deprecated OpenAPI GetUserViewMetrics is deprecated
       *
       * @summary Retrieves metric data at the user dimension.
       *
       * @param request GetUserViewMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserViewMetricsResponse
       */
      Models::GetUserViewMetricsResponse getUserViewMetricsWithOptions(const string &ResourceGroupID, const Models::GetUserViewMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetUserViewMetrics is deprecated
       *
       * @summary Retrieves metric data at the user dimension.
       *
       * @param request GetUserViewMetricsRequest
       * @return GetUserViewMetricsResponse
       */
      Models::GetUserViewMetricsResponse getUserViewMetrics(const string &ResourceGroupID, const Models::GetUserViewMetricsRequest &request);

      /**
       * @summary Retrieve a list of algorithm version details.
       *
       * @param request ListAlgorithmVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlgorithmVersionsResponse
       */
      Models::ListAlgorithmVersionsResponse listAlgorithmVersionsWithOptions(const string &AlgorithmId, const Models::ListAlgorithmVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a list of algorithm version details.
       *
       * @param request ListAlgorithmVersionsRequest
       * @return ListAlgorithmVersionsResponse
       */
      Models::ListAlgorithmVersionsResponse listAlgorithmVersions(const string &AlgorithmId, const Models::ListAlgorithmVersionsRequest &request);

      /**
       * @summary Lists algorithm details.
       *
       * @param request ListAlgorithmsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlgorithmsResponse
       */
      Models::ListAlgorithmsResponse listAlgorithmsWithOptions(const Models::ListAlgorithmsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists algorithm details.
       *
       * @param request ListAlgorithmsRequest
       * @return ListAlgorithmsResponse
       */
      Models::ListAlgorithmsResponse listAlgorithms(const Models::ListAlgorithmsRequest &request);

      /**
       * @summary Retrieves detailed information about all pods on a specified node.
       *
       * @description ## Operation description
       * - This feature is currently available only on the Lingjun AI Computing Service platform and is accessible to customers through a whitelist.
       * - `NodeName` and `ResourceGroupId` are required parameters that represent the node name and the resource group ID to which the node belongs.
       * - Optional parameters include `OversoldTypes` and `GPUIndexes`, which are used to further filter or specify conditions.
       *
       * @param request ListNodePodsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodePodsResponse
       */
      Models::ListNodePodsResponse listNodePodsWithOptions(const string &NodeId, const Models::ListNodePodsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves detailed information about all pods on a specified node.
       *
       * @description ## Operation description
       * - This feature is currently available only on the Lingjun AI Computing Service platform and is accessible to customers through a whitelist.
       * - `NodeName` and `ResourceGroupId` are required parameters that represent the node name and the resource group ID to which the node belongs.
       * - Optional parameters include `OversoldTypes` and `GPUIndexes`, which are used to further filter or specify conditions.
       *
       * @param request ListNodePodsRequest
       * @return ListNodePodsResponse
       */
      Models::ListNodePodsResponse listNodePods(const string &NodeId, const Models::ListNodePodsRequest &request);

      /**
       * @summary Lists the available node types.
       *
       * @description ## Description
       * - Lists the node types that match the specified filter criteria.
       * - You must specify either the `ResourceGroupIds` or `QuotaId` parameter. The specified resource group IDs or quota ID must belong to the requesting user.
       * - You can filter the results by using parameters such as accelerator type and GPU type.
       * - The response includes details and statistics for each node type, indicating the availability of your resources.
       *
       * @param request ListNodeTypesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodeTypesResponse
       */
      Models::ListNodeTypesResponse listNodeTypesWithOptions(const Models::ListNodeTypesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the available node types.
       *
       * @description ## Description
       * - Lists the node types that match the specified filter criteria.
       * - You must specify either the `ResourceGroupIds` or `QuotaId` parameter. The specified resource group IDs or quota ID must belong to the requesting user.
       * - You can filter the results by using parameters such as accelerator type and GPU type.
       * - The response includes details and statistics for each node type, indicating the availability of your resources.
       *
       * @param request ListNodeTypesRequest
       * @return ListNodeTypesResponse
       */
      Models::ListNodeTypesResponse listNodeTypes(const Models::ListNodeTypesRequest &request);

      /**
       * @summary Returns a list of resource nodes.
       *
       * @description ListNodes retrieves resource nodes that match specified filter conditions.
       *
       * @param tmpReq ListNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const Models::ListNodesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a list of resource nodes.
       *
       * @description ListNodes retrieves resource nodes that match specified filter conditions.
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const Models::ListNodesRequest &request);

      /**
       * @summary Lists users within a quota and their resource usage.
       *
       * @description Retrieves the resource usage of users in a specified quota.
       *
       * @param request ListQuotaActiveUserUsagesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaActiveUserUsagesResponse
       */
      Models::ListQuotaActiveUserUsagesResponse listQuotaActiveUserUsagesWithOptions(const string &QuotaId, const Models::ListQuotaActiveUserUsagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists users within a quota and their resource usage.
       *
       * @description Retrieves the resource usage of users in a specified quota.
       *
       * @param request ListQuotaActiveUserUsagesRequest
       * @return ListQuotaActiveUserUsagesResponse
       */
      Models::ListQuotaActiveUserUsagesResponse listQuotaActiveUserUsages(const string &QuotaId, const Models::ListQuotaActiveUserUsagesRequest &request);

      /**
       * @summary Retrieves a list of workloads associated with a specific quota.
       *
       * @param request ListQuotaWorkloadsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaWorkloadsResponse
       */
      Models::ListQuotaWorkloadsResponse listQuotaWorkloadsWithOptions(const string &QuotaId, const Models::ListQuotaWorkloadsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of workloads associated with a specific quota.
       *
       * @param request ListQuotaWorkloadsRequest
       * @return ListQuotaWorkloadsResponse
       */
      Models::ListQuotaWorkloadsResponse listQuotaWorkloads(const string &QuotaId, const Models::ListQuotaWorkloadsRequest &request);

      /**
       * @summary Lists quotas.
       *
       * @param request ListQuotasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotasResponse
       */
      Models::ListQuotasResponse listQuotasWithOptions(const Models::ListQuotasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists quotas.
       *
       * @param request ListQuotasRequest
       * @return ListQuotasResponse
       */
      Models::ListQuotasResponse listQuotas(const Models::ListQuotasRequest &request);

      /**
       * @summary Retrieves a list of machine groups in a specified resource group.
       *
       * @param request ListResourceGroupMachineGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupMachineGroupsResponse
       */
      Models::ListResourceGroupMachineGroupsResponse listResourceGroupMachineGroupsWithOptions(const string &ResourceGroupID, const Models::ListResourceGroupMachineGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of machine groups in a specified resource group.
       *
       * @param request ListResourceGroupMachineGroupsRequest
       * @return ListResourceGroupMachineGroupsResponse
       */
      Models::ListResourceGroupMachineGroupsResponse listResourceGroupMachineGroups(const string &ResourceGroupID, const Models::ListResourceGroupMachineGroupsRequest &request);

      /**
       * @summary Call this operation to list resource groups for ECS or Lingjun intelligent computing resources.
       *
       * @description Currently, AI computing resource groups (including ECS and Lingjun intelligent computing resources) are available only in specific regions. For a list of supported regions, see [AI computing resource management](https://help.aliyun.com/document_detail/143986.html).
       *
       * @param request ListResourceGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroupsWithOptions(const Models::ListResourceGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this operation to list resource groups for ECS or Lingjun intelligent computing resources.
       *
       * @description Currently, AI computing resource groups (including ECS and Lingjun intelligent computing resources) are available only in specific regions. For a list of supported regions, see [AI computing resource management](https://help.aliyun.com/document_detail/143986.html).
       *
       * @param request ListResourceGroupsRequest
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroups(const Models::ListResourceGroupsRequest &request);

      /**
       * @summary Tag query API.
       *
       * @description Specify at least one of the following parameters to query for resources.
       * - ResourceId.N
       * - Tag.N (Tag.N.Key and Tag.N.Value)
       * If you specify both parameters, the operation returns only resources that match both criteria.
       * - Tag.N and ResourceId.N
       *
       * @param tmpReq ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tag query API.
       *
       * @description Specify at least one of the following parameters to query for resources.
       * - ResourceId.N
       * - Tag.N (Tag.N.Key and Tag.N.Value)
       * If you specify both parameters, the operation returns only resources that match both criteria.
       * - Tag.N and ResourceId.N
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Retrieve events for a specific training task to gain detailed insight into the training process.
       *
       * @param request ListTrainingJobEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobEventsResponse
       */
      Models::ListTrainingJobEventsResponse listTrainingJobEventsWithOptions(const string &TrainingJobId, const Models::ListTrainingJobEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve events for a specific training task to gain detailed insight into the training process.
       *
       * @param request ListTrainingJobEventsRequest
       * @return ListTrainingJobEventsResponse
       */
      Models::ListTrainingJobEventsResponse listTrainingJobEvents(const string &TrainingJobId, const Models::ListTrainingJobEventsRequest &request);

      /**
       * @summary Retrieve events for a training job instance.
       *
       * @param request ListTrainingJobInstanceEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobInstanceEventsResponse
       */
      Models::ListTrainingJobInstanceEventsResponse listTrainingJobInstanceEventsWithOptions(const string &TrainingJobId, const string &InstanceId, const Models::ListTrainingJobInstanceEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve events for a training job instance.
       *
       * @param request ListTrainingJobInstanceEventsRequest
       * @return ListTrainingJobInstanceEventsResponse
       */
      Models::ListTrainingJobInstanceEventsResponse listTrainingJobInstanceEvents(const string &TrainingJobId, const string &InstanceId, const Models::ListTrainingJobInstanceEventsRequest &request);

      /**
       * @summary Retrieve monitoring metrics for training job instances.
       *
       * @param request ListTrainingJobInstanceMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobInstanceMetricsResponse
       */
      Models::ListTrainingJobInstanceMetricsResponse listTrainingJobInstanceMetricsWithOptions(const string &TrainingJobId, const Models::ListTrainingJobInstanceMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve monitoring metrics for training job instances.
       *
       * @param request ListTrainingJobInstanceMetricsRequest
       * @return ListTrainingJobInstanceMetricsResponse
       */
      Models::ListTrainingJobInstanceMetricsResponse listTrainingJobInstanceMetrics(const string &TrainingJobId, const Models::ListTrainingJobInstanceMetricsRequest &request);

      /**
       * @summary Retrieves the logs for a training task.
       *
       * @param request ListTrainingJobLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobLogsResponse
       */
      Models::ListTrainingJobLogsResponse listTrainingJobLogsWithOptions(const string &TrainingJobId, const Models::ListTrainingJobLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the logs for a training task.
       *
       * @param request ListTrainingJobLogsRequest
       * @return ListTrainingJobLogsResponse
       */
      Models::ListTrainingJobLogsResponse listTrainingJobLogs(const string &TrainingJobId, const Models::ListTrainingJobLogsRequest &request);

      /**
       * @summary Retrieve monitoring data for a training task.
       *
       * @param request ListTrainingJobMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobMetricsResponse
       */
      Models::ListTrainingJobMetricsResponse listTrainingJobMetricsWithOptions(const string &TrainingJobId, const Models::ListTrainingJobMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve monitoring data for a training task.
       *
       * @param request ListTrainingJobMetricsRequest
       * @return ListTrainingJobMetricsResponse
       */
      Models::ListTrainingJobMetricsResponse listTrainingJobMetrics(const string &TrainingJobId, const Models::ListTrainingJobMetricsRequest &request);

      /**
       * @summary Retrieves information about the output models of a training job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobOutputModelsResponse
       */
      Models::ListTrainingJobOutputModelsResponse listTrainingJobOutputModelsWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about the output models of a training job.
       *
       * @return ListTrainingJobOutputModelsResponse
       */
      Models::ListTrainingJobOutputModelsResponse listTrainingJobOutputModels(const string &TrainingJobId);

      /**
       * @summary Retrieves a list of training jobs.
       *
       * @param tmpReq ListTrainingJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobsResponse
       */
      Models::ListTrainingJobsResponse listTrainingJobsWithOptions(const Models::ListTrainingJobsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of training jobs.
       *
       * @param request ListTrainingJobsRequest
       * @return ListTrainingJobsResponse
       */
      Models::ListTrainingJobsResponse listTrainingJobs(const Models::ListTrainingJobsRequest &request);

      /**
       * @summary Use OperateNode to manage nodes.
       *
       * @description Use OperateNode to manage a specified resource node. Supported operations include disabling or enabling scheduling.
       *
       * @param request OperateNodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateNodeResponse
       */
      Models::OperateNodeResponse operateNodeWithOptions(const string &NodeId, const Models::OperateNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use OperateNode to manage nodes.
       *
       * @description Use OperateNode to manage a specified resource node. Supported operations include disabling or enabling scheduling.
       *
       * @param request OperateNodeRequest
       * @return OperateNodeResponse
       */
      Models::OperateNodeResponse operateNode(const string &NodeId, const Models::OperateNodeRequest &request);

      /**
       * @summary Use ScaleQuota to scale resource quotas.
       *
       * @param request ScaleQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleQuotaResponse
       */
      Models::ScaleQuotaResponse scaleQuotaWithOptions(const string &QuotaId, const Models::ScaleQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use ScaleQuota to scale resource quotas.
       *
       * @param request ScaleQuotaRequest
       * @return ScaleQuotaResponse
       */
      Models::ScaleQuotaResponse scaleQuota(const string &QuotaId, const Models::ScaleQuotaRequest &request);

      /**
       * @summary Stops a training task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTrainingJobResponse
       */
      Models::StopTrainingJobResponse stopTrainingJobWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a training task.
       *
       * @return StopTrainingJobResponse
       */
      Models::StopTrainingJobResponse stopTrainingJob(const string &TrainingJobId);

      /**
       * @summary Attaches tags to resources.
       *
       * @description Alibaba Cloud checks the number of existing tags on the resource before attaching a new tag. If the limit is exceeded, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches tags to resources.
       *
       * @description Alibaba Cloud checks the number of existing tags on the resource before attaching a new tag. If the limit is exceeded, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Detach tags from a list of specified resources. If a tag is no longer attached to any resource after detachment, Alibaba Cloud deletes it automatically.
       *
       * @param tmpReq UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detach tags from a list of specified resources. If a tag is no longer attached to any resource after detachment, Alibaba Cloud deletes it automatically.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates an algorithm.
       *
       * @param request UpdateAlgorithmRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlgorithmResponse
       */
      Models::UpdateAlgorithmResponse updateAlgorithmWithOptions(const string &AlgorithmId, const Models::UpdateAlgorithmRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an algorithm.
       *
       * @param request UpdateAlgorithmRequest
       * @return UpdateAlgorithmResponse
       */
      Models::UpdateAlgorithmResponse updateAlgorithm(const string &AlgorithmId, const Models::UpdateAlgorithmRequest &request);

      /**
       * @summary Updates an algorithm version.
       *
       * @param tmpReq UpdateAlgorithmVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlgorithmVersionResponse
       */
      Models::UpdateAlgorithmVersionResponse updateAlgorithmVersionWithOptions(const string &AlgorithmId, const string &AlgorithmVersion, const Models::UpdateAlgorithmVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an algorithm version.
       *
       * @param request UpdateAlgorithmVersionRequest
       * @return UpdateAlgorithmVersionResponse
       */
      Models::UpdateAlgorithmVersionResponse updateAlgorithmVersion(const string &AlgorithmId, const string &AlgorithmVersion, const Models::UpdateAlgorithmVersionRequest &request);

      /**
       * @summary Updates the information of a resource quota.
       *
       * @param request UpdateQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQuotaResponse
       */
      Models::UpdateQuotaResponse updateQuotaWithOptions(const string &QuotaId, const Models::UpdateQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a resource quota.
       *
       * @param request UpdateQuotaRequest
       * @return UpdateQuotaResponse
       */
      Models::UpdateQuotaResponse updateQuota(const string &QuotaId, const Models::UpdateQuotaRequest &request);

      /**
       * @summary Use UpdateResourceGroup to update resource group information.
       *
       * @param request UpdateResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceGroupResponse
       */
      Models::UpdateResourceGroupResponse updateResourceGroupWithOptions(const string &ResourceGroupID, const Models::UpdateResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use UpdateResourceGroup to update resource group information.
       *
       * @param request UpdateResourceGroupRequest
       * @return UpdateResourceGroupResponse
       */
      Models::UpdateResourceGroupResponse updateResourceGroup(const string &ResourceGroupID, const Models::UpdateResourceGroupRequest &request);

      /**
       * @summary Updates the labels of a training task.
       *
       * @param request UpdateTrainingJobLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrainingJobLabelsResponse
       */
      Models::UpdateTrainingJobLabelsResponse updateTrainingJobLabelsWithOptions(const string &TrainingJobId, const Models::UpdateTrainingJobLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the labels of a training task.
       *
       * @param request UpdateTrainingJobLabelsRequest
       * @return UpdateTrainingJobLabelsResponse
       */
      Models::UpdateTrainingJobLabelsResponse updateTrainingJobLabels(const string &TrainingJobId, const Models::UpdateTrainingJobLabelsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
