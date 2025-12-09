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
       * @summary 检查WebTerminal
       *
       * @param request CheckInstanceWebTerminalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceWebTerminalResponse
       */
      Models::CheckInstanceWebTerminalResponse checkInstanceWebTerminalWithOptions(const string &TrainingJobId, const string &InstanceId, const Models::CheckInstanceWebTerminalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查WebTerminal
       *
       * @param request CheckInstanceWebTerminalRequest
       * @return CheckInstanceWebTerminalResponse
       */
      Models::CheckInstanceWebTerminalResponse checkInstanceWebTerminal(const string &TrainingJobId, const string &InstanceId, const Models::CheckInstanceWebTerminalRequest &request);

      /**
       * @summary 创建新的算法
       *
       * @param request CreateAlgorithmRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlgorithmResponse
       */
      Models::CreateAlgorithmResponse createAlgorithmWithOptions(const Models::CreateAlgorithmRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建新的算法
       *
       * @param request CreateAlgorithmRequest
       * @return CreateAlgorithmResponse
       */
      Models::CreateAlgorithmResponse createAlgorithm(const Models::CreateAlgorithmRequest &request);

      /**
       * @summary 创建一个新的算法版本
       *
       * @param tmpReq CreateAlgorithmVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlgorithmVersionResponse
       */
      Models::CreateAlgorithmVersionResponse createAlgorithmVersionWithOptions(const string &AlgorithmId, const string &AlgorithmVersion, const Models::CreateAlgorithmVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个新的算法版本
       *
       * @param request CreateAlgorithmVersionRequest
       * @return CreateAlgorithmVersionResponse
       */
      Models::CreateAlgorithmVersionResponse createAlgorithmVersion(const string &AlgorithmId, const string &AlgorithmVersion, const Models::CreateAlgorithmVersionRequest &request);

      /**
       * @summary 创建WebTerminal
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceWebTerminalResponse
       */
      Models::CreateInstanceWebTerminalResponse createInstanceWebTerminalWithOptions(const string &TrainingJobId, const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建WebTerminal
       *
       * @return CreateInstanceWebTerminalResponse
       */
      Models::CreateInstanceWebTerminalResponse createInstanceWebTerminal(const string &TrainingJobId, const string &InstanceId);

      /**
       * @summary 创建Quota
       *
       * @param request CreateQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQuotaResponse
       */
      Models::CreateQuotaResponse createQuotaWithOptions(const Models::CreateQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Quota
       *
       * @param request CreateQuotaRequest
       * @return CreateQuotaResponse
       */
      Models::CreateQuotaResponse createQuota(const Models::CreateQuotaRequest &request);

      /**
       * @summary 创建资源组
       *
       * @param request CreateResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroupWithOptions(const Models::CreateResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建资源组
       *
       * @param request CreateResourceGroupRequest
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroup(const Models::CreateResourceGroupRequest &request);

      /**
       * @summary 创建TrainingJob
       *
       * @param request CreateTrainingJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrainingJobResponse
       */
      Models::CreateTrainingJobResponse createTrainingJobWithOptions(const Models::CreateTrainingJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建TrainingJob
       *
       * @param request CreateTrainingJobRequest
       * @return CreateTrainingJobResponse
       */
      Models::CreateTrainingJobResponse createTrainingJob(const Models::CreateTrainingJobRequest &request);

      /**
       * @summary 删除算法
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlgorithmResponse
       */
      Models::DeleteAlgorithmResponse deleteAlgorithmWithOptions(const string &AlgorithmId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除算法
       *
       * @return DeleteAlgorithmResponse
       */
      Models::DeleteAlgorithmResponse deleteAlgorithm(const string &AlgorithmId);

      /**
       * @summary 删除算法版本
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlgorithmVersionResponse
       */
      Models::DeleteAlgorithmVersionResponse deleteAlgorithmVersionWithOptions(const string &AlgorithmId, const string &AlgorithmVersion, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除算法版本
       *
       * @return DeleteAlgorithmVersionResponse
       */
      Models::DeleteAlgorithmVersionResponse deleteAlgorithmVersion(const string &AlgorithmId, const string &AlgorithmVersion);

      /**
       * @deprecated OpenAPI DeleteMachineGroup is deprecated
       *
       * @summary delete machine group
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMachineGroupResponse
       */
      Models::DeleteMachineGroupResponse deleteMachineGroupWithOptions(const string &MachineGroupID, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteMachineGroup is deprecated
       *
       * @summary delete machine group
       *
       * @return DeleteMachineGroupResponse
       */
      Models::DeleteMachineGroupResponse deleteMachineGroup(const string &MachineGroupID);

      /**
       * @summary 删除Quota
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQuotaResponse
       */
      Models::DeleteQuotaResponse deleteQuotaWithOptions(const string &QuotaId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Quota
       *
       * @return DeleteQuotaResponse
       */
      Models::DeleteQuotaResponse deleteQuota(const string &QuotaId);

      /**
       * @summary 删除资源组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroupWithOptions(const string &ResourceGroupID, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除资源组
       *
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroup(const string &ResourceGroupID);

      /**
       * @deprecated OpenAPI DeleteResourceGroupMachineGroup is deprecated
       *
       * @summary delete machine group
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceGroupMachineGroupResponse
       */
      Models::DeleteResourceGroupMachineGroupResponse deleteResourceGroupMachineGroupWithOptions(const string &MachineGroupID, const string &ResourceGroupID, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteResourceGroupMachineGroup is deprecated
       *
       * @summary delete machine group
       *
       * @return DeleteResourceGroupMachineGroupResponse
       */
      Models::DeleteResourceGroupMachineGroupResponse deleteResourceGroupMachineGroup(const string &MachineGroupID, const string &ResourceGroupID);

      /**
       * @summary 删除一个TrainingJob
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrainingJobResponse
       */
      Models::DeleteTrainingJobResponse deleteTrainingJobWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个TrainingJob
       *
       * @return DeleteTrainingJobResponse
       */
      Models::DeleteTrainingJobResponse deleteTrainingJob(const string &TrainingJobId);

      /**
       * @summary 删除TrainingJob的Labels
       *
       * @param request DeleteTrainingJobLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrainingJobLabelsResponse
       */
      Models::DeleteTrainingJobLabelsResponse deleteTrainingJobLabelsWithOptions(const string &TrainingJobId, const Models::DeleteTrainingJobLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除TrainingJob的Labels
       *
       * @param request DeleteTrainingJobLabelsRequest
       * @return DeleteTrainingJobLabelsResponse
       */
      Models::DeleteTrainingJobLabelsResponse deleteTrainingJobLabels(const string &TrainingJobId, const Models::DeleteTrainingJobLabelsRequest &request);

      /**
       * @summary 获取一个算法信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlgorithmResponse
       */
      Models::GetAlgorithmResponse getAlgorithmWithOptions(const string &AlgorithmId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一个算法信息
       *
       * @return GetAlgorithmResponse
       */
      Models::GetAlgorithmResponse getAlgorithm(const string &AlgorithmId);

      /**
       * @summary 创建一个新的算法版本
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlgorithmVersionResponse
       */
      Models::GetAlgorithmVersionResponse getAlgorithmVersionWithOptions(const string &AlgorithmId, const string &AlgorithmVersion, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个新的算法版本
       *
       * @return GetAlgorithmVersionResponse
       */
      Models::GetAlgorithmVersionResponse getAlgorithmVersion(const string &AlgorithmId, const string &AlgorithmVersion);

      /**
       * @deprecated OpenAPI GetMachineGroup is deprecated
       *
       * @summary get machine group
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMachineGroupResponse
       */
      Models::GetMachineGroupResponse getMachineGroupWithOptions(const string &MachineGroupID, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetMachineGroup is deprecated
       *
       * @summary get machine group
       *
       * @return GetMachineGroupResponse
       */
      Models::GetMachineGroupResponse getMachineGroup(const string &MachineGroupID);

      /**
       * @deprecated OpenAPI GetNodeMetrics is deprecated
       *
       * @summary get resource group node metrics
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
       * @summary get resource group node metrics
       *
       * @param request GetNodeMetricsRequest
       * @return GetNodeMetricsResponse
       */
      Models::GetNodeMetricsResponse getNodeMetrics(const string &ResourceGroupID, const string &MetricType, const Models::GetNodeMetricsRequest &request);

      /**
       * @summary 获取Quota
       *
       * @param request GetQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaResponse
       */
      Models::GetQuotaResponse getQuotaWithOptions(const string &QuotaId, const Models::GetQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Quota
       *
       * @param request GetQuotaRequest
       * @return GetQuotaResponse
       */
      Models::GetQuotaResponse getQuota(const string &QuotaId, const Models::GetQuotaRequest &request);

      /**
       * @summary get resource group by group id
       *
       * @param tmpReq GetResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupResponse
       */
      Models::GetResourceGroupResponse getResourceGroupWithOptions(const string &ResourceGroupID, const Models::GetResourceGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary get resource group by group id
       *
       * @param request GetResourceGroupRequest
       * @return GetResourceGroupResponse
       */
      Models::GetResourceGroupResponse getResourceGroup(const string &ResourceGroupID, const Models::GetResourceGroupRequest &request);

      /**
       * @summary get machine group
       *
       * @param tmpReq GetResourceGroupMachineGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupMachineGroupResponse
       */
      Models::GetResourceGroupMachineGroupResponse getResourceGroupMachineGroupWithOptions(const string &MachineGroupID, const string &ResourceGroupID, const Models::GetResourceGroupMachineGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary get machine group
       *
       * @param request GetResourceGroupMachineGroupRequest
       * @return GetResourceGroupMachineGroupResponse
       */
      Models::GetResourceGroupMachineGroupResponse getResourceGroupMachineGroup(const string &MachineGroupID, const string &ResourceGroupID, const Models::GetResourceGroupMachineGroupRequest &request);

      /**
       * @deprecated OpenAPI GetResourceGroupRequest is deprecated
       *
       * @summary get resource group requested resource by resource group id
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
       * @summary get resource group requested resource by resource group id
       *
       * @param request GetResourceGroupRequestRequest
       * @return GetResourceGroupRequestResponse
       */
      Models::GetResourceGroupRequestResponse getResourceGroupRequest(const Models::GetResourceGroupRequestRequest &request);

      /**
       * @summary get resource group total resource by group id
       *
       * @param request GetResourceGroupTotalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupTotalResponse
       */
      Models::GetResourceGroupTotalResponse getResourceGroupTotalWithOptions(const Models::GetResourceGroupTotalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary get resource group total resource by group id
       *
       * @param request GetResourceGroupTotalRequest
       * @return GetResourceGroupTotalResponse
       */
      Models::GetResourceGroupTotalResponse getResourceGroupTotal(const Models::GetResourceGroupTotalRequest &request);

      /**
       * @summary 获取抢占式实例历史价格
       *
       * @param request GetSpotPriceHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSpotPriceHistoryResponse
       */
      Models::GetSpotPriceHistoryResponse getSpotPriceHistoryWithOptions(const string &InstanceType, const Models::GetSpotPriceHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取抢占式实例历史价格
       *
       * @param request GetSpotPriceHistoryRequest
       * @return GetSpotPriceHistoryResponse
       */
      Models::GetSpotPriceHistoryResponse getSpotPriceHistory(const string &InstanceType, const Models::GetSpotPriceHistoryRequest &request);

      /**
       * @summary 调用GetToken获取临时鉴权信息
       *
       * @param request GetTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getTokenWithOptions(const Models::GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用GetToken获取临时鉴权信息
       *
       * @param request GetTokenRequest
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getToken(const Models::GetTokenRequest &request);

      /**
       * @summary 获取TrainingJob的详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrainingJobResponse
       */
      Models::GetTrainingJobResponse getTrainingJobWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取TrainingJob的详情
       *
       * @return GetTrainingJobResponse
       */
      Models::GetTrainingJobResponse getTrainingJob(const string &TrainingJobId);

      /**
       * @summary 获取Training Job的算法错误信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrainingJobErrorInfoResponse
       */
      Models::GetTrainingJobErrorInfoResponse getTrainingJobErrorInfoWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Training Job的算法错误信息
       *
       * @return GetTrainingJobErrorInfoResponse
       */
      Models::GetTrainingJobErrorInfoResponse getTrainingJobErrorInfo(const string &TrainingJobId);

      /**
       * @summary 获取TrainingJob最近的Metrics
       *
       * @param request GetTrainingJobLatestMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrainingJobLatestMetricsResponse
       */
      Models::GetTrainingJobLatestMetricsResponse getTrainingJobLatestMetricsWithOptions(const string &TrainingJobId, const Models::GetTrainingJobLatestMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取TrainingJob最近的Metrics
       *
       * @param request GetTrainingJobLatestMetricsRequest
       * @return GetTrainingJobLatestMetricsResponse
       */
      Models::GetTrainingJobLatestMetricsResponse getTrainingJobLatestMetrics(const string &TrainingJobId, const Models::GetTrainingJobLatestMetricsRequest &request);

      /**
       * @deprecated OpenAPI GetUserViewMetrics is deprecated
       *
       * @summary get user view  metrics
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
       * @summary get user view  metrics
       *
       * @param request GetUserViewMetricsRequest
       * @return GetUserViewMetricsResponse
       */
      Models::GetUserViewMetricsResponse getUserViewMetrics(const string &ResourceGroupID, const Models::GetUserViewMetricsRequest &request);

      /**
       * @summary 获取算法的所有版本信息
       *
       * @param request ListAlgorithmVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlgorithmVersionsResponse
       */
      Models::ListAlgorithmVersionsResponse listAlgorithmVersionsWithOptions(const string &AlgorithmId, const Models::ListAlgorithmVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取算法的所有版本信息
       *
       * @param request ListAlgorithmVersionsRequest
       * @return ListAlgorithmVersionsResponse
       */
      Models::ListAlgorithmVersionsResponse listAlgorithmVersions(const string &AlgorithmId, const Models::ListAlgorithmVersionsRequest &request);

      /**
       * @summary 获取算法列表
       *
       * @param request ListAlgorithmsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlgorithmsResponse
       */
      Models::ListAlgorithmsResponse listAlgorithmsWithOptions(const Models::ListAlgorithmsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取算法列表
       *
       * @param request ListAlgorithmsRequest
       * @return ListAlgorithmsResponse
       */
      Models::ListAlgorithmsResponse listAlgorithms(const Models::ListAlgorithmsRequest &request);

      /**
       * @summary 获取资源节点列表
       *
       * @param request ListNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const Models::ListNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源节点列表
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const Models::ListNodesRequest &request);

      /**
       * @summary 您可以通过此API获取Quota上的任务信息列表
       *
       * @param request ListQuotaWorkloadsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaWorkloadsResponse
       */
      Models::ListQuotaWorkloadsResponse listQuotaWorkloadsWithOptions(const string &QuotaId, const Models::ListQuotaWorkloadsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 您可以通过此API获取Quota上的任务信息列表
       *
       * @param request ListQuotaWorkloadsRequest
       * @return ListQuotaWorkloadsResponse
       */
      Models::ListQuotaWorkloadsResponse listQuotaWorkloads(const string &QuotaId, const Models::ListQuotaWorkloadsRequest &request);

      /**
       * @summary 获取Quota列表
       *
       * @param request ListQuotasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotasResponse
       */
      Models::ListQuotasResponse listQuotasWithOptions(const Models::ListQuotasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Quota列表
       *
       * @param request ListQuotasRequest
       * @return ListQuotasResponse
       */
      Models::ListQuotasResponse listQuotas(const Models::ListQuotasRequest &request);

      /**
       * @summary list machine groups
       *
       * @param request ListResourceGroupMachineGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupMachineGroupsResponse
       */
      Models::ListResourceGroupMachineGroupsResponse listResourceGroupMachineGroupsWithOptions(const string &ResourceGroupID, const Models::ListResourceGroupMachineGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary list machine groups
       *
       * @param request ListResourceGroupMachineGroupsRequest
       * @return ListResourceGroupMachineGroupsResponse
       */
      Models::ListResourceGroupMachineGroupsResponse listResourceGroupMachineGroups(const string &ResourceGroupID, const Models::ListResourceGroupMachineGroupsRequest &request);

      /**
       * @summary list resource group
       *
       * @param request ListResourceGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroupsWithOptions(const Models::ListResourceGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary list resource group
       *
       * @param request ListResourceGroupsRequest
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroups(const Models::ListResourceGroupsRequest &request);

      /**
       * @summary 查标签接口
       *
       * @param tmpReq ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查标签接口
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 获取指定TrainingJob的事件。
       *
       * @param request ListTrainingJobEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobEventsResponse
       */
      Models::ListTrainingJobEventsResponse listTrainingJobEventsWithOptions(const string &TrainingJobId, const Models::ListTrainingJobEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定TrainingJob的事件。
       *
       * @param request ListTrainingJobEventsRequest
       * @return ListTrainingJobEventsResponse
       */
      Models::ListTrainingJobEventsResponse listTrainingJobEvents(const string &TrainingJobId, const Models::ListTrainingJobEventsRequest &request);

      /**
       * @summary 获取指定Instance（TrainingJob的运行单元）的日志。
       *
       * @param request ListTrainingJobInstanceEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobInstanceEventsResponse
       */
      Models::ListTrainingJobInstanceEventsResponse listTrainingJobInstanceEventsWithOptions(const string &TrainingJobId, const string &InstanceId, const Models::ListTrainingJobInstanceEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定Instance（TrainingJob的运行单元）的日志。
       *
       * @param request ListTrainingJobInstanceEventsRequest
       * @return ListTrainingJobInstanceEventsResponse
       */
      Models::ListTrainingJobInstanceEventsResponse listTrainingJobInstanceEvents(const string &TrainingJobId, const string &InstanceId, const Models::ListTrainingJobInstanceEventsRequest &request);

      /**
       * @summary 获取Training Job实例的Metrics
       *
       * @param request ListTrainingJobInstanceMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobInstanceMetricsResponse
       */
      Models::ListTrainingJobInstanceMetricsResponse listTrainingJobInstanceMetricsWithOptions(const string &TrainingJobId, const Models::ListTrainingJobInstanceMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Training Job实例的Metrics
       *
       * @param request ListTrainingJobInstanceMetricsRequest
       * @return ListTrainingJobInstanceMetricsResponse
       */
      Models::ListTrainingJobInstanceMetricsResponse listTrainingJobInstanceMetrics(const string &TrainingJobId, const Models::ListTrainingJobInstanceMetricsRequest &request);

      /**
       * @summary 获取Training Job的日志
       *
       * @param request ListTrainingJobLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobLogsResponse
       */
      Models::ListTrainingJobLogsResponse listTrainingJobLogsWithOptions(const string &TrainingJobId, const Models::ListTrainingJobLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Training Job的日志
       *
       * @param request ListTrainingJobLogsRequest
       * @return ListTrainingJobLogsResponse
       */
      Models::ListTrainingJobLogsResponse listTrainingJobLogs(const string &TrainingJobId, const Models::ListTrainingJobLogsRequest &request);

      /**
       * @summary 获取Training Job的Metrics
       *
       * @param request ListTrainingJobMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobMetricsResponse
       */
      Models::ListTrainingJobMetricsResponse listTrainingJobMetricsWithOptions(const string &TrainingJobId, const Models::ListTrainingJobMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Training Job的Metrics
       *
       * @param request ListTrainingJobMetricsRequest
       * @return ListTrainingJobMetricsResponse
       */
      Models::ListTrainingJobMetricsResponse listTrainingJobMetrics(const string &TrainingJobId, const Models::ListTrainingJobMetricsRequest &request);

      /**
       * @summary 获取Training Job 产出的所有模型信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobOutputModelsResponse
       */
      Models::ListTrainingJobOutputModelsResponse listTrainingJobOutputModelsWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Training Job 产出的所有模型信息
       *
       * @return ListTrainingJobOutputModelsResponse
       */
      Models::ListTrainingJobOutputModelsResponse listTrainingJobOutputModels(const string &TrainingJobId);

      /**
       * @summary 获取TrainingJob的列表
       *
       * @param tmpReq ListTrainingJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrainingJobsResponse
       */
      Models::ListTrainingJobsResponse listTrainingJobsWithOptions(const Models::ListTrainingJobsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取TrainingJob的列表
       *
       * @param request ListTrainingJobsRequest
       * @return ListTrainingJobsResponse
       */
      Models::ListTrainingJobsResponse listTrainingJobs(const Models::ListTrainingJobsRequest &request);

      /**
       * @summary 扩缩容Quota
       *
       * @param request ScaleQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleQuotaResponse
       */
      Models::ScaleQuotaResponse scaleQuotaWithOptions(const string &QuotaId, const Models::ScaleQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 扩缩容Quota
       *
       * @param request ScaleQuotaRequest
       * @return ScaleQuotaResponse
       */
      Models::ScaleQuotaResponse scaleQuota(const string &QuotaId, const Models::ScaleQuotaRequest &request);

      /**
       * @summary 停止一个TrainingJob
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTrainingJobResponse
       */
      Models::StopTrainingJobResponse stopTrainingJobWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止一个TrainingJob
       *
       * @return StopTrainingJobResponse
       */
      Models::StopTrainingJobResponse stopTrainingJob(const string &TrainingJobId);

      /**
       * @summary 打标签接口
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打标签接口
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 删标签接口
       *
       * @param tmpReq UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删标签接口
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary 更新算法
       *
       * @param request UpdateAlgorithmRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlgorithmResponse
       */
      Models::UpdateAlgorithmResponse updateAlgorithmWithOptions(const string &AlgorithmId, const Models::UpdateAlgorithmRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新算法
       *
       * @param request UpdateAlgorithmRequest
       * @return UpdateAlgorithmResponse
       */
      Models::UpdateAlgorithmResponse updateAlgorithm(const string &AlgorithmId, const Models::UpdateAlgorithmRequest &request);

      /**
       * @summary 更新算法
       *
       * @param tmpReq UpdateAlgorithmVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlgorithmVersionResponse
       */
      Models::UpdateAlgorithmVersionResponse updateAlgorithmVersionWithOptions(const string &AlgorithmId, const string &AlgorithmVersion, const Models::UpdateAlgorithmVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新算法
       *
       * @param request UpdateAlgorithmVersionRequest
       * @return UpdateAlgorithmVersionResponse
       */
      Models::UpdateAlgorithmVersionResponse updateAlgorithmVersion(const string &AlgorithmId, const string &AlgorithmVersion, const Models::UpdateAlgorithmVersionRequest &request);

      /**
       * @summary 更新Quota
       *
       * @param request UpdateQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQuotaResponse
       */
      Models::UpdateQuotaResponse updateQuotaWithOptions(const string &QuotaId, const Models::UpdateQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Quota
       *
       * @param request UpdateQuotaRequest
       * @return UpdateQuotaResponse
       */
      Models::UpdateQuotaResponse updateQuota(const string &QuotaId, const Models::UpdateQuotaRequest &request);

      /**
       * @summary 更新Resource Group
       *
       * @param request UpdateResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceGroupResponse
       */
      Models::UpdateResourceGroupResponse updateResourceGroupWithOptions(const string &ResourceGroupID, const Models::UpdateResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Resource Group
       *
       * @param request UpdateResourceGroupRequest
       * @return UpdateResourceGroupResponse
       */
      Models::UpdateResourceGroupResponse updateResourceGroup(const string &ResourceGroupID, const Models::UpdateResourceGroupRequest &request);

      /**
       * @summary 更新一个TrainingJob的Labels
       *
       * @param request UpdateTrainingJobLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrainingJobLabelsResponse
       */
      Models::UpdateTrainingJobLabelsResponse updateTrainingJobLabelsWithOptions(const string &TrainingJobId, const Models::UpdateTrainingJobLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新一个TrainingJob的Labels
       *
       * @param request UpdateTrainingJobLabelsRequest
       * @return UpdateTrainingJobLabelsResponse
       */
      Models::UpdateTrainingJobLabelsResponse updateTrainingJobLabels(const string &TrainingJobId, const Models::UpdateTrainingJobLabelsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
