// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SYSOM20231230_HPP_
#define ALIBABACLOUD_SYSOM20231230_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/SysOM20231230Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/SysOM20231230.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 授权 SysOM 对某个机器进行诊断
       *
       * @param request AuthDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthDiagnosisResponse
       */
      Models::AuthDiagnosisResponse authDiagnosisWithOptions(const Models::AuthDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 授权 SysOM 对某个机器进行诊断
       *
       * @param request AuthDiagnosisRequest
       * @return AuthDiagnosisResponse
       */
      Models::AuthDiagnosisResponse authDiagnosis(const Models::AuthDiagnosisRequest &request);

      /**
       * @summary 检查目标实例是否被 SysOM 支持
       *
       * @param request CheckInstanceSupportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceSupportResponse
       */
      Models::CheckInstanceSupportResponse checkInstanceSupportWithOptions(const Models::CheckInstanceSupportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查目标实例是否被 SysOM 支持
       *
       * @param request CheckInstanceSupportRequest
       * @return CheckInstanceSupportResponse
       */
      Models::CheckInstanceSupportResponse checkInstanceSupport(const Models::CheckInstanceSupportRequest &request);

      /**
       * @summary 新增推送告警的策略
       *
       * @param request CreateAlertStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlertStrategyResponse
       */
      Models::CreateAlertStrategyResponse createAlertStrategyWithOptions(const Models::CreateAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增推送告警的策略
       *
       * @param request CreateAlertStrategyRequest
       * @return CreateAlertStrategyResponse
       */
      Models::CreateAlertStrategyResponse createAlertStrategy(const Models::CreateAlertStrategyRequest &request);

      /**
       * @summary 用户删除推送告警的策略
       *
       * @param request DeleteAlertStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertStrategyResponse
       */
      Models::DeleteAlertStrategyResponse deleteAlertStrategyWithOptions(const Models::DeleteAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用户删除推送告警的策略
       *
       * @param request DeleteAlertStrategyRequest
       * @return DeleteAlertStrategyResponse
       */
      Models::DeleteAlertStrategyResponse deleteAlertStrategy(const Models::DeleteAlertStrategyRequest &request);

      /**
       * @summary 获取copilot服务的返回结果
       *
       * @param request GenerateCopilotResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCopilotResponseResponse
       */
      Models::GenerateCopilotResponseResponse generateCopilotResponseWithOptions(const Models::GenerateCopilotResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取copilot服务的返回结果
       *
       * @param request GenerateCopilotResponseRequest
       * @return GenerateCopilotResponseResponse
       */
      Models::GenerateCopilotResponseResponse generateCopilotResponse(const Models::GenerateCopilotResponseRequest &request);

      /**
       * @summary 流式copilot服务接口
       *
       * @param request GenerateCopilotStreamResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCopilotStreamResponseResponse
       */
      FutrueGenerator<Models::GenerateCopilotStreamResponseResponse> generateCopilotStreamResponseWithSSE(const Models::GenerateCopilotStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 流式copilot服务接口
       *
       * @param request GenerateCopilotStreamResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCopilotStreamResponseResponse
       */
      Models::GenerateCopilotStreamResponseResponse generateCopilotStreamResponseWithOptions(const Models::GenerateCopilotStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 流式copilot服务接口
       *
       * @param request GenerateCopilotStreamResponseRequest
       * @return GenerateCopilotStreamResponseResponse
       */
      Models::GenerateCopilotStreamResponseResponse generateCopilotStreamResponse(const Models::GenerateCopilotStreamResponseRequest &request);

      /**
       * @summary 查看AI Infra分析结果
       *
       * @param request GetAIQueryResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAIQueryResultResponse
       */
      Models::GetAIQueryResultResponse getAIQueryResultWithOptions(const Models::GetAIQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看AI Infra分析结果
       *
       * @param request GetAIQueryResultRequest
       * @return GetAIQueryResultResponse
       */
      Models::GetAIQueryResultResponse getAIQueryResult(const Models::GetAIQueryResultRequest &request);

      /**
       * @summary 获取节点/Pod不同等级异常事件的数量
       *
       * @param request GetAbnormalEventsCountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAbnormalEventsCountResponse
       */
      Models::GetAbnormalEventsCountResponse getAbnormalEventsCountWithOptions(const Models::GetAbnormalEventsCountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取节点/Pod不同等级异常事件的数量
       *
       * @param request GetAbnormalEventsCountRequest
       * @return GetAbnormalEventsCountResponse
       */
      Models::GetAbnormalEventsCountResponse getAbnormalEventsCount(const Models::GetAbnormalEventsCountRequest &request);

      /**
       * @summary 获取某个组件的详情
       *
       * @param request GetAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgentWithOptions(const Models::GetAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取某个组件的详情
       *
       * @param request GetAgentRequest
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgent(const Models::GetAgentRequest &request);

      /**
       * @summary 获取Agent安装任务执行状态
       *
       * @param request GetAgentTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentTaskResponse
       */
      Models::GetAgentTaskResponse getAgentTaskWithOptions(const Models::GetAgentTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Agent安装任务执行状态
       *
       * @param request GetAgentTaskRequest
       * @return GetAgentTaskResponse
       */
      Models::GetAgentTaskResponse getAgentTask(const Models::GetAgentTaskRequest &request);

      /**
       * @summary 根据策略id，获取用户的一条告警
       *
       * @param request GetAlertStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlertStrategyResponse
       */
      Models::GetAlertStrategyResponse getAlertStrategyWithOptions(const Models::GetAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据策略id，获取用户的一条告警
       *
       * @param request GetAlertStrategyRequest
       * @return GetAlertStrategyResponse
       */
      Models::GetAlertStrategyResponse getAlertStrategy(const Models::GetAlertStrategyRequest &request);

      /**
       * @summary 获取copilot历史聊天记录
       *
       * @param request GetCopilotHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCopilotHistoryResponse
       */
      Models::GetCopilotHistoryResponse getCopilotHistoryWithOptions(const Models::GetCopilotHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取copilot历史聊天记录
       *
       * @param request GetCopilotHistoryRequest
       * @return GetCopilotHistoryResponse
       */
      Models::GetCopilotHistoryResponse getCopilotHistory(const Models::GetCopilotHistoryRequest &request);

      /**
       * @summary 获取诊断结果
       *
       * @param request GetDiagnosisResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDiagnosisResultResponse
       */
      Models::GetDiagnosisResultResponse getDiagnosisResultWithOptions(const Models::GetDiagnosisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取诊断结果
       *
       * @param request GetDiagnosisResultRequest
       * @return GetDiagnosisResultResponse
       */
      Models::GetDiagnosisResultResponse getDiagnosisResult(const Models::GetDiagnosisResultRequest &request);

      /**
       * @summary 获取一段时间的节点/pod健康度比例
       *
       * @param request GetHealthPercentageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHealthPercentageResponse
       */
      Models::GetHealthPercentageResponse getHealthPercentageWithOptions(const Models::GetHealthPercentageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一段时间的节点/pod健康度比例
       *
       * @param request GetHealthPercentageRequest
       * @return GetHealthPercentageResponse
       */
      Models::GetHealthPercentageResponse getHealthPercentage(const Models::GetHealthPercentageRequest &request);

      /**
       * @summary 获取集群节点数量
       *
       * @param request GetHostCountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHostCountResponse
       */
      Models::GetHostCountResponse getHostCountWithOptions(const Models::GetHostCountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取集群节点数量
       *
       * @param request GetHostCountRequest
       * @return GetHostCountResponse
       */
      Models::GetHostCountResponse getHostCount(const Models::GetHostCountRequest &request);

      /**
       * @summary 获取实例下的某个字段列表
       *
       * @param request GetHotSpotUniqListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotSpotUniqListResponse
       */
      Models::GetHotSpotUniqListResponse getHotSpotUniqListWithOptions(const Models::GetHotSpotUniqListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例下的某个字段列表
       *
       * @param request GetHotSpotUniqListRequest
       * @return GetHotSpotUniqListResponse
       */
      Models::GetHotSpotUniqListResponse getHotSpotUniqList(const Models::GetHotSpotUniqListRequest &request);

      /**
       * @summary 获取热定分析结果
       *
       * @param request GetHotspotAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotAnalysisResponse
       */
      Models::GetHotspotAnalysisResponse getHotspotAnalysisWithOptions(const Models::GetHotspotAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取热定分析结果
       *
       * @param request GetHotspotAnalysisRequest
       * @return GetHotspotAnalysisResponse
       */
      Models::GetHotspotAnalysisResponse getHotspotAnalysis(const Models::GetHotspotAnalysisRequest &request);

      /**
       * @summary 热点对比
       *
       * @param request GetHotspotCompareRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotCompareResponse
       */
      Models::GetHotspotCompareResponse getHotspotCompareWithOptions(const Models::GetHotspotCompareRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 热点对比
       *
       * @param request GetHotspotCompareRequest
       * @return GetHotspotCompareResponse
       */
      Models::GetHotspotCompareResponse getHotspotCompare(const Models::GetHotspotCompareRequest &request);

      /**
       * @summary 获取热点实例列表
       *
       * @param request GetHotspotInstanceListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotInstanceListResponse
       */
      Models::GetHotspotInstanceListResponse getHotspotInstanceListWithOptions(const Models::GetHotspotInstanceListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取热点实例列表
       *
       * @param request GetHotspotInstanceListRequest
       * @return GetHotspotInstanceListResponse
       */
      Models::GetHotspotInstanceListResponse getHotspotInstanceList(const Models::GetHotspotInstanceListRequest &request);

      /**
       * @summary 获取某个实例的pid列表
       *
       * @param request GetHotspotPidListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotPidListResponse
       */
      Models::GetHotspotPidListResponse getHotspotPidListWithOptions(const Models::GetHotspotPidListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取某个实例的pid列表
       *
       * @param request GetHotspotPidListRequest
       * @return GetHotspotPidListResponse
       */
      Models::GetHotspotPidListResponse getHotspotPidList(const Models::GetHotspotPidListRequest &request);

      /**
       * @summary 发起热点追踪
       *
       * @param request GetHotspotTrackingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotTrackingResponse
       */
      Models::GetHotspotTrackingResponse getHotspotTrackingWithOptions(const Models::GetHotspotTrackingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发起热点追踪
       *
       * @param request GetHotspotTrackingRequest
       * @return GetHotspotTrackingResponse
       */
      Models::GetHotspotTrackingResponse getHotspotTracking(const Models::GetHotspotTrackingRequest &request);

      /**
       * @summary 获取实时集群/节点健康度分数
       *
       * @param request GetInstantScoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstantScoreResponse
       */
      Models::GetInstantScoreResponse getInstantScoreWithOptions(const Models::GetInstantScoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实时集群/节点健康度分数
       *
       * @param request GetInstantScoreRequest
       * @return GetInstantScoreResponse
       */
      Models::GetInstantScoreResponse getInstantScore(const Models::GetInstantScoreRequest &request);

      /**
       * @summary AI Infra获取分析记录列表
       *
       * @param request GetListRecordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetListRecordResponse
       */
      Models::GetListRecordResponse getListRecordWithOptions(const Models::GetListRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI Infra获取分析记录列表
       *
       * @param request GetListRecordRequest
       * @return GetListRecordResponse
       */
      Models::GetListRecordResponse getListRecord(const Models::GetListRecordRequest &request);

      /**
       * @summary 获取一定时间内集群中节点/节点中pod异常问题占比
       *
       * @param request GetProblemPercentageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProblemPercentageResponse
       */
      Models::GetProblemPercentageResponse getProblemPercentageWithOptions(const Models::GetProblemPercentageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一定时间内集群中节点/节点中pod异常问题占比
       *
       * @param request GetProblemPercentageRequest
       * @return GetProblemPercentageResponse
       */
      Models::GetProblemPercentageResponse getProblemPercentage(const Models::GetProblemPercentageRequest &request);

      /**
       * @summary 获取健康分趋势
       *
       * @param request GetRangeScoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRangeScoreResponse
       */
      Models::GetRangeScoreResponse getRangeScoreWithOptions(const Models::GetRangeScoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取健康分趋势
       *
       * @param request GetRangeScoreRequest
       * @return GetRangeScoreResponse
       */
      Models::GetRangeScoreResponse getRangeScore(const Models::GetRangeScoreRequest &request);

      /**
       * @summary 获取集群/节点资源实时使用情况
       *
       * @param request GetResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourcesResponse
       */
      Models::GetResourcesResponse getResourcesWithOptions(const Models::GetResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取集群/节点资源实时使用情况
       *
       * @param request GetResourcesRequest
       * @return GetResourcesResponse
       */
      Models::GetResourcesResponse getResources(const Models::GetResourcesRequest &request);

      /**
       * @summary 获取功能模块配置
       *
       * @param tmpReq GetServiceFuncStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceFuncStatusResponse
       */
      Models::GetServiceFuncStatusResponse getServiceFuncStatusWithOptions(const Models::GetServiceFuncStatusRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取功能模块配置
       *
       * @param request GetServiceFuncStatusRequest
       * @return GetServiceFuncStatusResponse
       */
      Models::GetServiceFuncStatusResponse getServiceFuncStatus(const Models::GetServiceFuncStatusRequest &request);

      /**
       * @summary 初始化SysOM，确保角色存在
       *
       * @param request InitialSysomRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitialSysomResponse
       */
      Models::InitialSysomResponse initialSysomWithOptions(const Models::InitialSysomRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 初始化SysOM，确保角色存在
       *
       * @param request InitialSysomRequest
       * @return InitialSysomResponse
       */
      Models::InitialSysomResponse initialSysom(const Models::InitialSysomRequest &request);

      /**
       * @summary 在指定的实例上安装 Agent
       *
       * @param request InstallAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAgentResponse
       */
      Models::InstallAgentResponse installAgentWithOptions(const Models::InstallAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 在指定的实例上安装 Agent
       *
       * @param request InstallAgentRequest
       * @return InstallAgentResponse
       */
      Models::InstallAgentResponse installAgent(const Models::InstallAgentRequest &request);

      /**
       * @summary 给集群安装组件
       *
       * @param request InstallAgentForClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAgentForClusterResponse
       */
      Models::InstallAgentForClusterResponse installAgentForClusterWithOptions(const Models::InstallAgentForClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 给集群安装组件
       *
       * @param request InstallAgentForClusterRequest
       * @return InstallAgentForClusterResponse
       */
      Models::InstallAgentForClusterResponse installAgentForCluster(const Models::InstallAgentForClusterRequest &request);

      /**
       * @summary 异常项诊断跳转
       *
       * @param request InvokeAnomalyDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeAnomalyDiagnosisResponse
       */
      Models::InvokeAnomalyDiagnosisResponse invokeAnomalyDiagnosisWithOptions(const Models::InvokeAnomalyDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 异常项诊断跳转
       *
       * @param request InvokeAnomalyDiagnosisRequest
       * @return InvokeAnomalyDiagnosisResponse
       */
      Models::InvokeAnomalyDiagnosisResponse invokeAnomalyDiagnosis(const Models::InvokeAnomalyDiagnosisRequest &request);

      /**
       * @summary 发起诊断
       *
       * @param request InvokeDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeDiagnosisResponse
       */
      Models::InvokeDiagnosisResponse invokeDiagnosisWithOptions(const Models::InvokeDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发起诊断
       *
       * @param request InvokeDiagnosisRequest
       * @return InvokeDiagnosisResponse
       */
      Models::InvokeDiagnosisResponse invokeDiagnosis(const Models::InvokeDiagnosisRequest &request);

      /**
       * @summary 获取一定时间段内的异常事件
       *
       * @param request ListAbnormalyEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAbnormalyEventsResponse
       */
      Models::ListAbnormalyEventsResponse listAbnormalyEventsWithOptions(const Models::ListAbnormalyEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一定时间段内的异常事件
       *
       * @param request ListAbnormalyEventsRequest
       * @return ListAbnormalyEventsResponse
       */
      Models::ListAbnormalyEventsResponse listAbnormalyEvents(const Models::ListAbnormalyEventsRequest &request);

      /**
       * @summary 列出 Agent 的安装记录
       *
       * @param request ListAgentInstallRecordsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentInstallRecordsResponse
       */
      Models::ListAgentInstallRecordsResponse listAgentInstallRecordsWithOptions(const Models::ListAgentInstallRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出 Agent 的安装记录
       *
       * @param request ListAgentInstallRecordsRequest
       * @return ListAgentInstallRecordsResponse
       */
      Models::ListAgentInstallRecordsResponse listAgentInstallRecords(const Models::ListAgentInstallRecordsRequest &request);

      /**
       * @summary 获取 Agent 列表
       *
       * @param request ListAgentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgentsWithOptions(const Models::ListAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 Agent 列表
       *
       * @param request ListAgentsRequest
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgents(const Models::ListAgentsRequest &request);

      /**
       * @summary 获取所有告警项
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertItemsResponse
       */
      Models::ListAlertItemsResponse listAlertItemsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取所有告警项
       *
       * @return ListAlertItemsResponse
       */
      Models::ListAlertItemsResponse listAlertItems();

      /**
       * @summary 用于获取用户所有推送告警的策略
       *
       * @param request ListAlertStrategiesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertStrategiesResponse
       */
      Models::ListAlertStrategiesResponse listAlertStrategiesWithOptions(const Models::ListAlertStrategiesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于获取用户所有推送告警的策略
       *
       * @param request ListAlertStrategiesRequest
       * @return ListAlertStrategiesResponse
       */
      Models::ListAlertStrategiesResponse listAlertStrategies(const Models::ListAlertStrategiesRequest &request);

      /**
       * @summary 此接口用于获取已纳管/未纳管实例列表并带有实例信息
       *
       * @param request ListAllInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllInstancesResponse
       */
      Models::ListAllInstancesResponse listAllInstancesWithOptions(const Models::ListAllInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 此接口用于获取已纳管/未纳管实例列表并带有实例信息
       *
       * @param request ListAllInstancesRequest
       * @return ListAllInstancesResponse
       */
      Models::ListAllInstancesResponse listAllInstances(const Models::ListAllInstancesRequest &request);

      /**
       * @summary 获取集群组件安装记录
       *
       * @param request ListClusterAgentInstallRecordsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterAgentInstallRecordsResponse
       */
      Models::ListClusterAgentInstallRecordsResponse listClusterAgentInstallRecordsWithOptions(const Models::ListClusterAgentInstallRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取集群组件安装记录
       *
       * @param request ListClusterAgentInstallRecordsRequest
       * @return ListClusterAgentInstallRecordsResponse
       */
      Models::ListClusterAgentInstallRecordsResponse listClusterAgentInstallRecords(const Models::ListClusterAgentInstallRecordsRequest &request);

      /**
       * @summary 获取当前用户的所有集群
       *
       * @param request ListClustersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClustersWithOptions(const Models::ListClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取当前用户的所有集群
       *
       * @param request ListClustersRequest
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClusters(const Models::ListClustersRequest &request);

      /**
       * @summary 获取诊断历史记录列表
       *
       * @param request ListDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiagnosisResponse
       */
      Models::ListDiagnosisResponse listDiagnosisWithOptions(const Models::ListDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取诊断历史记录列表
       *
       * @param request ListDiagnosisRequest
       * @return ListDiagnosisResponse
       */
      Models::ListDiagnosisResponse listDiagnosis(const Models::ListDiagnosisRequest &request);

      /**
       * @summary 获取一定时间内集群节点/Pod健康度列表
       *
       * @param request ListInstanceHealthRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceHealthResponse
       */
      Models::ListInstanceHealthResponse listInstanceHealthWithOptions(const Models::ListInstanceHealthRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一定时间内集群节点/Pod健康度列表
       *
       * @param request ListInstanceHealthRequest
       * @return ListInstanceHealthResponse
       */
      Models::ListInstanceHealthResponse listInstanceHealth(const Models::ListInstanceHealthRequest &request);

      /**
       * @summary 获取实例状态
       *
       * @param request ListInstanceStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceStatusResponse
       */
      Models::ListInstanceStatusResponse listInstanceStatusWithOptions(const Models::ListInstanceStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例状态
       *
       * @param request ListInstanceStatusRequest
       * @return ListInstanceStatusResponse
       */
      Models::ListInstanceStatusResponse listInstanceStatus(const Models::ListInstanceStatusRequest &request);

      /**
       * @summary 获取实例列表
       *
       * @param request ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例列表
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary 获取ecs信息的列表，如标签列表，公网ip列表等
       *
       * @param request ListInstancesEcsInfoListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesEcsInfoListResponse
       */
      Models::ListInstancesEcsInfoListResponse listInstancesEcsInfoListWithOptions(const Models::ListInstancesEcsInfoListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取ecs信息的列表，如标签列表，公网ip列表等
       *
       * @param request ListInstancesEcsInfoListRequest
       * @return ListInstancesEcsInfoListResponse
       */
      Models::ListInstancesEcsInfoListResponse listInstancesEcsInfoList(const Models::ListInstancesEcsInfoListRequest &request);

      /**
       * @summary 获取已纳管/未纳管实例信息，信息中包含ECS信息
       *
       * @param tmpReq ListInstancesWithEcsInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesWithEcsInfoResponse
       */
      Models::ListInstancesWithEcsInfoResponse listInstancesWithEcsInfoWithOptions(const Models::ListInstancesWithEcsInfoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取已纳管/未纳管实例信息，信息中包含ECS信息
       *
       * @param request ListInstancesWithEcsInfoRequest
       * @return ListInstancesWithEcsInfoResponse
       */
      Models::ListInstancesWithEcsInfoResponse listInstancesWithEcsInfo(const Models::ListInstancesWithEcsInfoRequest &request);

      /**
       * @summary 获取插件的安装/更新/卸载实例列表
       *
       * @param request ListPluginsInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginsInstancesResponse
       */
      Models::ListPluginsInstancesResponse listPluginsInstancesWithOptions(const Models::ListPluginsInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取插件的安装/更新/卸载实例列表
       *
       * @param request ListPluginsInstancesRequest
       * @return ListPluginsInstancesResponse
       */
      Models::ListPluginsInstancesResponse listPluginsInstances(const Models::ListPluginsInstancesRequest &request);

      /**
       * @summary 获取实例中的pod列表
       *
       * @param request ListPodsOfInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPodsOfInstanceResponse
       */
      Models::ListPodsOfInstanceResponse listPodsOfInstanceWithOptions(const Models::ListPodsOfInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例中的pod列表
       *
       * @param request ListPodsOfInstanceRequest
       * @return ListPodsOfInstanceResponse
       */
      Models::ListPodsOfInstanceResponse listPodsOfInstance(const Models::ListPodsOfInstanceRequest &request);

      /**
       * @summary 列出所有纳管了机器的区域
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出所有纳管了机器的区域
       *
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions();

      /**
       * @summary 启动AI作业分析
       *
       * @param request StartAIAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAIAnalysisResponse
       */
      Models::StartAIAnalysisResponse startAIAnalysisWithOptions(const Models::StartAIAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动AI作业分析
       *
       * @param request StartAIAnalysisRequest
       * @return StartAIAnalysisResponse
       */
      Models::StartAIAnalysisResponse startAIAnalysis(const Models::StartAIAnalysisRequest &request);

      /**
       * @summary 查看AI Infra差分分析结果
       *
       * @param request StartAIDiffAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAIDiffAnalysisResponse
       */
      Models::StartAIDiffAnalysisResponse startAIDiffAnalysisWithOptions(const Models::StartAIDiffAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看AI Infra差分分析结果
       *
       * @param request StartAIDiffAnalysisRequest
       * @return StartAIDiffAnalysisResponse
       */
      Models::StartAIDiffAnalysisResponse startAIDiffAnalysis(const Models::StartAIDiffAnalysisRequest &request);

      /**
       * @summary 卸载 SysOM Agent
       *
       * @param request UninstallAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallAgentResponse
       */
      Models::UninstallAgentResponse uninstallAgentWithOptions(const Models::UninstallAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 卸载 SysOM Agent
       *
       * @param request UninstallAgentRequest
       * @return UninstallAgentResponse
       */
      Models::UninstallAgentResponse uninstallAgent(const Models::UninstallAgentRequest &request);

      /**
       * @summary 给集群卸载组件
       *
       * @param request UninstallAgentForClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallAgentForClusterResponse
       */
      Models::UninstallAgentForClusterResponse uninstallAgentForClusterWithOptions(const Models::UninstallAgentForClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 给集群卸载组件
       *
       * @param request UninstallAgentForClusterRequest
       * @return UninstallAgentForClusterResponse
       */
      Models::UninstallAgentForClusterResponse uninstallAgentForCluster(const Models::UninstallAgentForClusterRequest &request);

      /**
       * @summary 用户更新推送告警策略的状态
       *
       * @param request UpdateAlertEnabledRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertEnabledResponse
       */
      Models::UpdateAlertEnabledResponse updateAlertEnabledWithOptions(const Models::UpdateAlertEnabledRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用户更新推送告警策略的状态
       *
       * @param request UpdateAlertEnabledRequest
       * @return UpdateAlertEnabledResponse
       */
      Models::UpdateAlertEnabledResponse updateAlertEnabled(const Models::UpdateAlertEnabledRequest &request);

      /**
       * @summary 更新推送告警策略
       *
       * @param request UpdateAlertStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertStrategyResponse
       */
      Models::UpdateAlertStrategyResponse updateAlertStrategyWithOptions(const Models::UpdateAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新推送告警策略
       *
       * @param request UpdateAlertStrategyRequest
       * @return UpdateAlertStrategyResponse
       */
      Models::UpdateAlertStrategyResponse updateAlertStrategy(const Models::UpdateAlertStrategyRequest &request);

      /**
       * @summary 异常项关注度更新
       *
       * @param request UpdateEventsAttentionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEventsAttentionResponse
       */
      Models::UpdateEventsAttentionResponse updateEventsAttentionWithOptions(const Models::UpdateEventsAttentionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 异常项关注度更新
       *
       * @param request UpdateEventsAttentionRequest
       * @return UpdateEventsAttentionResponse
       */
      Models::UpdateEventsAttentionResponse updateEventsAttention(const Models::UpdateEventsAttentionRequest &request);

      /**
       * @summary 获取功能模块配置
       *
       * @param tmpReq UpdateFuncSwitchRecordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFuncSwitchRecordResponse
       */
      Models::UpdateFuncSwitchRecordResponse updateFuncSwitchRecordWithOptions(const Models::UpdateFuncSwitchRecordRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取功能模块配置
       *
       * @param request UpdateFuncSwitchRecordRequest
       * @return UpdateFuncSwitchRecordResponse
       */
      Models::UpdateFuncSwitchRecordResponse updateFuncSwitchRecord(const Models::UpdateFuncSwitchRecordRequest &request);

      /**
       * @summary 更新 SysOM Agent
       *
       * @param request UpgradeAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeAgentResponse
       */
      Models::UpgradeAgentResponse upgradeAgentWithOptions(const Models::UpgradeAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 SysOM Agent
       *
       * @param request UpgradeAgentRequest
       * @return UpgradeAgentResponse
       */
      Models::UpgradeAgentResponse upgradeAgent(const Models::UpgradeAgentRequest &request);

      /**
       * @summary 给集群更新组件
       *
       * @param request UpgradeAgentForClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeAgentForClusterResponse
       */
      Models::UpgradeAgentForClusterResponse upgradeAgentForClusterWithOptions(const Models::UpgradeAgentForClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 给集群更新组件
       *
       * @param request UpgradeAgentForClusterRequest
       * @return UpgradeAgentForClusterResponse
       */
      Models::UpgradeAgentForClusterResponse upgradeAgentForCluster(const Models::UpgradeAgentForClusterRequest &request);
  };
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
