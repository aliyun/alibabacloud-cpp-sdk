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
       * @summary Authorizes SysOM to diagnose ECS instances under the current account. You must call this operation to authorize diagnostics for a specific ECS instance before you can call the InvokeDiagnosis operation to initiate diagnostics on it.
       *
       * @description >Notice: The diagnostics feature requires a service-linked role to be created under the Resource Access Management (RAM) user. This operation automatically checks whether the service-linked role exists and creates it if it does not. The RAM user that invokes this operation must have the ram:CreateServiceLinkedRole permission.</notice>
       * Note the following when you invoke this operation to authorize SysOM to diagnose ECS instances:
       * - Each authorization is valid for 7 days. After the authorization expires, invoke this operation again to re-authorize.
       * - If the SysOM service-linked role (AliyunServiceRoleForSysom) does not exist when you invoke this operation, automatic creation is performed. The RAM user that invokes this operation must have the `ram:CreateServiceLinkedRole` permission.
       * - When you invoke this operation to authorize diagnostics for a specific instance, the label `sysom:diagnosis` is automatically associated with the target ECS instance. SysOM only allows diagnostics on instances that have this label.
       *
       * @param request AuthDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthDiagnosisResponse
       */
      Models::AuthDiagnosisResponse authDiagnosisWithOptions(const Models::AuthDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes SysOM to diagnose ECS instances under the current account. You must call this operation to authorize diagnostics for a specific ECS instance before you can call the InvokeDiagnosis operation to initiate diagnostics on it.
       *
       * @description >Notice: The diagnostics feature requires a service-linked role to be created under the Resource Access Management (RAM) user. This operation automatically checks whether the service-linked role exists and creates it if it does not. The RAM user that invokes this operation must have the ram:CreateServiceLinkedRole permission.</notice>
       * Note the following when you invoke this operation to authorize SysOM to diagnose ECS instances:
       * - Each authorization is valid for 7 days. After the authorization expires, invoke this operation again to re-authorize.
       * - If the SysOM service-linked role (AliyunServiceRoleForSysom) does not exist when you invoke this operation, automatic creation is performed. The RAM user that invokes this operation must have the `ram:CreateServiceLinkedRole` permission.
       * - When you invoke this operation to authorize diagnostics for a specific instance, the label `sysom:diagnosis` is automatically associated with the target ECS instance. SysOM only allows diagnostics on instances that have this label.
       *
       * @param request AuthDiagnosisRequest
       * @return AuthDiagnosisResponse
       */
      Models::AuthDiagnosisResponse authDiagnosis(const Models::AuthDiagnosisRequest &request);

      /**
       * @summary Checks whether a target instance is supported by SysOM.
       *
       * @description This operation retrieves the list of instances that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
       *
       * @param request CheckInstanceSupportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceSupportResponse
       */
      Models::CheckInstanceSupportResponse checkInstanceSupportWithOptions(const Models::CheckInstanceSupportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a target instance is supported by SysOM.
       *
       * @description This operation retrieves the list of instances that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
       *
       * @param request CheckInstanceSupportRequest
       * @return CheckInstanceSupportResponse
       */
      Models::CheckInstanceSupportResponse checkInstanceSupport(const Models::CheckInstanceSupportRequest &request);

      /**
       * @summary Calls the CPU High Agent streaming SSE interface.
       *
       * @param request CpuHighAgentStreamResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CpuHighAgentStreamResponseResponse
       */
      FutureGenerator<Models::CpuHighAgentStreamResponseResponse> cpuHighAgentStreamResponseWithSSE(const Models::CpuHighAgentStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CPU High Agent streaming SSE interface.
       *
       * @param request CpuHighAgentStreamResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CpuHighAgentStreamResponseResponse
       */
      Models::CpuHighAgentStreamResponseResponse cpuHighAgentStreamResponseWithOptions(const Models::CpuHighAgentStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CPU High Agent streaming SSE interface.
       *
       * @param request CpuHighAgentStreamResponseRequest
       * @return CpuHighAgentStreamResponseResponse
       */
      Models::CpuHighAgentStreamResponseResponse cpuHighAgentStreamResponse(const Models::CpuHighAgentStreamResponseRequest &request);

      /**
       * @summary Creates a contact for alert notifications.
       *
       * @param request CreateAlertDestinationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlertDestinationResponse
       */
      Models::CreateAlertDestinationResponse createAlertDestinationWithOptions(const Models::CreateAlertDestinationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a contact for alert notifications.
       *
       * @param request CreateAlertDestinationRequest
       * @return CreateAlertDestinationResponse
       */
      Models::CreateAlertDestinationResponse createAlertDestination(const Models::CreateAlertDestinationRequest &request);

      /**
       * @summary Creates an alert push strategy.
       *
       * @param request CreateAlertStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlertStrategyResponse
       */
      Models::CreateAlertStrategyResponse createAlertStrategyWithOptions(const Models::CreateAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert push strategy.
       *
       * @param request CreateAlertStrategyRequest
       * @return CreateAlertStrategyResponse
       */
      Models::CreateAlertStrategyResponse createAlertStrategy(const Models::CreateAlertStrategyRequest &request);

      /**
       * @summary 创建集群Vpc端点连接
       *
       * @description - 需配合aliyun-tea-openapi-inner包的call_sseapi接口使用
       * - 需要按通用LLM服务输入参数填充参数，转为string后赋给llmParamString
       * - 返回数据需将string转为dict后使用，参考通用LLM服务返回格式
       *
       * @param request CreateClusterVpcEndpointConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterVpcEndpointConnectionResponse
       */
      Models::CreateClusterVpcEndpointConnectionResponse createClusterVpcEndpointConnectionWithOptions(const Models::CreateClusterVpcEndpointConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建集群Vpc端点连接
       *
       * @description - 需配合aliyun-tea-openapi-inner包的call_sseapi接口使用
       * - 需要按通用LLM服务输入参数填充参数，转为string后赋给llmParamString
       * - 返回数据需将string转为dict后使用，参考通用LLM服务返回格式
       *
       * @param request CreateClusterVpcEndpointConnectionRequest
       * @return CreateClusterVpcEndpointConnectionResponse
       */
      Models::CreateClusterVpcEndpointConnectionResponse createClusterVpcEndpointConnection(const Models::CreateClusterVpcEndpointConnectionRequest &request);

      /**
       * @summary Creates a SysOM instance inspection.
       *
       * @param request CreateInstanceInspectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceInspectionResponse
       */
      Models::CreateInstanceInspectionResponse createInstanceInspectionWithOptions(const Models::CreateInstanceInspectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a SysOM instance inspection.
       *
       * @param request CreateInstanceInspectionRequest
       * @return CreateInstanceInspectionResponse
       */
      Models::CreateInstanceInspectionResponse createInstanceInspection(const Models::CreateInstanceInspectionRequest &request);

      /**
       * @summary Creates an intelligent breakdown diagnostic node that diagnoses the specified vmcore or dmesg log file based on the input parameters.
       *
       * @param request CreateVmcoreDiagnosisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVmcoreDiagnosisTaskResponse
       */
      Models::CreateVmcoreDiagnosisTaskResponse createVmcoreDiagnosisTaskWithOptions(const Models::CreateVmcoreDiagnosisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an intelligent breakdown diagnostic node that diagnoses the specified vmcore or dmesg log file based on the input parameters.
       *
       * @param request CreateVmcoreDiagnosisTaskRequest
       * @return CreateVmcoreDiagnosisTaskResponse
       */
      Models::CreateVmcoreDiagnosisTaskResponse createVmcoreDiagnosisTask(const Models::CreateVmcoreDiagnosisTaskRequest &request);

      /**
       * @summary Deletes an alert contact.
       *
       * @param request DeleteAlertDestinationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertDestinationResponse
       */
      Models::DeleteAlertDestinationResponse deleteAlertDestinationWithOptions(const Models::DeleteAlertDestinationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert contact.
       *
       * @param request DeleteAlertDestinationRequest
       * @return DeleteAlertDestinationResponse
       */
      Models::DeleteAlertDestinationResponse deleteAlertDestination(const Models::DeleteAlertDestinationRequest &request);

      /**
       * @summary Deletes an alert policy for push notifications.
       *
       * @param request DeleteAlertStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertStrategyResponse
       */
      Models::DeleteAlertStrategyResponse deleteAlertStrategyWithOptions(const Models::DeleteAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert policy for push notifications.
       *
       * @param request DeleteAlertStrategyRequest
       * @return DeleteAlertStrategyResponse
       */
      Models::DeleteAlertStrategyResponse deleteAlertStrategy(const Models::DeleteAlertStrategyRequest &request);

      /**
       * @summary Queries metric data.
       *
       * @description The instance list returned by this operation contains only instances that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
       *
       * @param request DescribeMetricListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricListWithOptions(const Models::DescribeMetricListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries metric data.
       *
       * @description The instance list returned by this operation contains only instances that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
       *
       * @param request DescribeMetricListRequest
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricList(const Models::DescribeMetricListRequest &request);

      /**
       * @summary Get the response result of the copilot service
       *
       * @description - Parameters need to be filled in according to the standard LLM service input parameters, converted to a string, and assigned to llmParamString
       * - The returned data needs to be converted from string to dict before use. Refer to the standard LLM service response format
       *
       * @param request GenerateCopilotResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCopilotResponseResponse
       */
      Models::GenerateCopilotResponseResponse generateCopilotResponseWithOptions(const Models::GenerateCopilotResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the response result of the copilot service
       *
       * @description - Parameters need to be filled in according to the standard LLM service input parameters, converted to a string, and assigned to llmParamString
       * - The returned data needs to be converted from string to dict before use. Refer to the standard LLM service response format
       *
       * @param request GenerateCopilotResponseRequest
       * @return GenerateCopilotResponseResponse
       */
      Models::GenerateCopilotResponseResponse generateCopilotResponse(const Models::GenerateCopilotResponseRequest &request);

      /**
       * @summary Calls the streaming SSE endpoint of the OS Copilot service.
       *
       * @description - Use this operation together with the call_sseapi operation in the aliyun-tea-openapi-inner package.
       * - Populate the parameters based on the standard LLM service input parameters, convert them to a string, and assign the string to llmParamString.
       * - Convert the returned string to a dictionary before use. Refer to the standard LLM service response format.
       *
       * @param request GenerateCopilotStreamResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCopilotStreamResponseResponse
       */
      FutureGenerator<Models::GenerateCopilotStreamResponseResponse> generateCopilotStreamResponseWithSSE(const Models::GenerateCopilotStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the streaming SSE endpoint of the OS Copilot service.
       *
       * @description - Use this operation together with the call_sseapi operation in the aliyun-tea-openapi-inner package.
       * - Populate the parameters based on the standard LLM service input parameters, convert them to a string, and assign the string to llmParamString.
       * - Convert the returned string to a dictionary before use. Refer to the standard LLM service response format.
       *
       * @param request GenerateCopilotStreamResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCopilotStreamResponseResponse
       */
      Models::GenerateCopilotStreamResponseResponse generateCopilotStreamResponseWithOptions(const Models::GenerateCopilotStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the streaming SSE endpoint of the OS Copilot service.
       *
       * @description - Use this operation together with the call_sseapi operation in the aliyun-tea-openapi-inner package.
       * - Populate the parameters based on the standard LLM service input parameters, convert them to a string, and assign the string to llmParamString.
       * - Convert the returned string to a dictionary before use. Refer to the standard LLM service response format.
       *
       * @param request GenerateCopilotStreamResponseRequest
       * @return GenerateCopilotStreamResponseResponse
       */
      Models::GenerateCopilotStreamResponseResponse generateCopilotStreamResponse(const Models::GenerateCopilotStreamResponseRequest &request);

      /**
       * @summary Queries the AI Infra analysis results.
       *
       * @param request GetAIQueryResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAIQueryResultResponse
       */
      Models::GetAIQueryResultResponse getAIQueryResultWithOptions(const Models::GetAIQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the AI Infra analysis results.
       *
       * @param request GetAIQueryResultRequest
       * @return GetAIQueryResultResponse
       */
      Models::GetAIQueryResultResponse getAIQueryResult(const Models::GetAIQueryResultRequest &request);

      /**
       * @summary Get the count of unhandled (undiagnosed) abnormal events of different levels for nodes/Pods
       *
       * @param request GetAbnormalEventsCountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAbnormalEventsCountResponse
       */
      Models::GetAbnormalEventsCountResponse getAbnormalEventsCountWithOptions(const Models::GetAbnormalEventsCountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the count of unhandled (undiagnosed) abnormal events of different levels for nodes/Pods
       *
       * @param request GetAbnormalEventsCountRequest
       * @return GetAbnormalEventsCountResponse
       */
      Models::GetAbnormalEventsCountResponse getAbnormalEventsCount(const Models::GetAbnormalEventsCountRequest &request);

      /**
       * @summary Get details of a specific agent
       *
       * @param request GetAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgentWithOptions(const Models::GetAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get details of a specific agent
       *
       * @param request GetAgentRequest
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgent(const Models::GetAgentRequest &request);

      /**
       * @summary Retrieves the execution status of an Agent installation task.
       *
       * @param request GetAgentTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentTaskResponse
       */
      Models::GetAgentTaskResponse getAgentTaskWithOptions(const Models::GetAgentTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the execution status of an Agent installation task.
       *
       * @param request GetAgentTaskRequest
       * @return GetAgentTaskResponse
       */
      Models::GetAgentTaskResponse getAgentTask(const Models::GetAgentTaskRequest &request);

      /**
       * @summary Retrieves the information of a specified alert contact.
       *
       * @param request GetAlertDestinationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlertDestinationResponse
       */
      Models::GetAlertDestinationResponse getAlertDestinationWithOptions(const Models::GetAlertDestinationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information of a specified alert contact.
       *
       * @param request GetAlertDestinationRequest
       * @return GetAlertDestinationResponse
       */
      Models::GetAlertDestinationResponse getAlertDestination(const Models::GetAlertDestinationRequest &request);

      /**
       * @summary Retrieves an alert for a user based on the policy ID.
       *
       * @param request GetAlertStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlertStrategyResponse
       */
      Models::GetAlertStrategyResponse getAlertStrategyWithOptions(const Models::GetAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an alert for a user based on the policy ID.
       *
       * @param request GetAlertStrategyRequest
       * @return GetAlertStrategyResponse
       */
      Models::GetAlertStrategyResponse getAlertStrategy(const Models::GetAlertStrategyRequest &request);

      /**
       * @summary Retrieves the chat history of Copilot.
       *
       * @param request GetCopilotHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCopilotHistoryResponse
       */
      Models::GetCopilotHistoryResponse getCopilotHistoryWithOptions(const Models::GetCopilotHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the chat history of Copilot.
       *
       * @param request GetCopilotHistoryRequest
       * @return GetCopilotHistoryResponse
       */
      Models::GetCopilotHistoryResponse getCopilotHistory(const Models::GetCopilotHistoryRequest &request);

      /**
       * @summary Retrieves the diagnostic result.
       *
       * @description The diagnostic process is asynchronous. When you call this operation, the diagnosis may still be in progress. You can check the `data.status` field in the response to determine the status. When `data.status == Success`, the diagnosis is complete and you can read the diagnostic result from `data.result`.
       *
       * @param request GetDiagnosisResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDiagnosisResultResponse
       */
      Models::GetDiagnosisResultResponse getDiagnosisResultWithOptions(const Models::GetDiagnosisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the diagnostic result.
       *
       * @description The diagnostic process is asynchronous. When you call this operation, the diagnosis may still be in progress. You can check the `data.status` field in the response to determine the status. When `data.status == Success`, the diagnosis is complete and you can read the diagnostic result from `data.result`.
       *
       * @param request GetDiagnosisResultRequest
       * @return GetDiagnosisResultResponse
       */
      Models::GetDiagnosisResultResponse getDiagnosisResult(const Models::GetDiagnosisResultRequest &request);

      /**
       * @summary Retrieves the health status distribution of nodes or pods over a specified time period.
       *
       * @param request GetHealthPercentageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHealthPercentageResponse
       */
      Models::GetHealthPercentageResponse getHealthPercentageWithOptions(const Models::GetHealthPercentageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the health status distribution of nodes or pods over a specified time period.
       *
       * @param request GetHealthPercentageRequest
       * @return GetHealthPercentageResponse
       */
      Models::GetHealthPercentageResponse getHealthPercentage(const Models::GetHealthPercentageRequest &request);

      /**
       * @summary Retrieves the number of nodes or the number of Pods on nodes in a cluster.
       *
       * @param request GetHostCountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHostCountResponse
       */
      Models::GetHostCountResponse getHostCountWithOptions(const Models::GetHostCountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the number of nodes or the number of Pods on nodes in a cluster.
       *
       * @param request GetHostCountRequest
       * @return GetHostCountResponse
       */
      Models::GetHostCountResponse getHostCount(const Models::GetHostCountRequest &request);

      /**
       * @summary Get the list of a specific field under an instance.
       *
       * @param request GetHotSpotUniqListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotSpotUniqListResponse
       */
      Models::GetHotSpotUniqListResponse getHotSpotUniqListWithOptions(const Models::GetHotSpotUniqListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the list of a specific field under an instance.
       *
       * @param request GetHotSpotUniqListRequest
       * @return GetHotSpotUniqListResponse
       */
      Models::GetHotSpotUniqListResponse getHotSpotUniqList(const Models::GetHotSpotUniqListRequest &request);

      /**
       * @summary Retrieves hot spot analysis results.
       *
       * @param request GetHotspotAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotAnalysisResponse
       */
      Models::GetHotspotAnalysisResponse getHotspotAnalysisWithOptions(const Models::GetHotspotAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves hot spot analysis results.
       *
       * @param request GetHotspotAnalysisRequest
       * @return GetHotspotAnalysisResponse
       */
      Models::GetHotspotAnalysisResponse getHotspotAnalysis(const Models::GetHotspotAnalysisRequest &request);

      /**
       * @summary Get Hotspot Comparison Tracing Results
       *
       * @param request GetHotspotCompareRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotCompareResponse
       */
      Models::GetHotspotCompareResponse getHotspotCompareWithOptions(const Models::GetHotspotCompareRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Hotspot Comparison Tracing Results
       *
       * @param request GetHotspotCompareRequest
       * @return GetHotspotCompareResponse
       */
      Models::GetHotspotCompareResponse getHotspotCompare(const Models::GetHotspotCompareRequest &request);

      /**
       * @summary Get Hotspot Instance List
       *
       * @param request GetHotspotInstanceListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotInstanceListResponse
       */
      Models::GetHotspotInstanceListResponse getHotspotInstanceListWithOptions(const Models::GetHotspotInstanceListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Hotspot Instance List
       *
       * @param request GetHotspotInstanceListRequest
       * @return GetHotspotInstanceListResponse
       */
      Models::GetHotspotInstanceListResponse getHotspotInstanceList(const Models::GetHotspotInstanceListRequest &request);

      /**
       * @summary Retrieves the PID list of a specified instance.
       *
       * @param request GetHotspotPidListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotPidListResponse
       */
      Models::GetHotspotPidListResponse getHotspotPidListWithOptions(const Models::GetHotspotPidListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the PID list of a specified instance.
       *
       * @param request GetHotspotPidListRequest
       * @return GetHotspotPidListResponse
       */
      Models::GetHotspotPidListResponse getHotspotPidList(const Models::GetHotspotPidListRequest &request);

      /**
       * @summary Retrieves hot spot tracking results.
       *
       * @param request GetHotspotTrackingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotTrackingResponse
       */
      Models::GetHotspotTrackingResponse getHotspotTrackingWithOptions(const Models::GetHotspotTrackingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves hot spot tracking results.
       *
       * @param request GetHotspotTrackingRequest
       * @return GetHotspotTrackingResponse
       */
      Models::GetHotspotTrackingResponse getHotspotTracking(const Models::GetHotspotTrackingRequest &request);

      /**
       * @summary Retrieves a SysOM inspection report.
       *
       * @param request GetInspectionReportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInspectionReportResponse
       */
      Models::GetInspectionReportResponse getInspectionReportWithOptions(const Models::GetInspectionReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a SysOM inspection report.
       *
       * @param request GetInspectionReportRequest
       * @return GetInspectionReportResponse
       */
      Models::GetInspectionReportResponse getInspectionReport(const Models::GetInspectionReportRequest &request);

      /**
       * @summary Get real-time cluster/node health score
       *
       * @param request GetInstantScoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstantScoreResponse
       */
      Models::GetInstantScoreResponse getInstantScoreWithOptions(const Models::GetInstantScoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get real-time cluster/node health score
       *
       * @param request GetInstantScoreRequest
       * @return GetInstantScoreResponse
       */
      Models::GetInstantScoreResponse getInstantScore(const Models::GetInstantScoreRequest &request);

      /**
       * @summary Retrieves a list of AI Infra analysis records.
       *
       * @param request GetListRecordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetListRecordResponse
       */
      Models::GetListRecordResponse getListRecordWithOptions(const Models::GetListRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of AI Infra analysis records.
       *
       * @param request GetListRecordRequest
       * @return GetListRecordResponse
       */
      Models::GetListRecordResponse getListRecord(const Models::GetListRecordRequest &request);

      /**
       * @summary Get the proportion of abnormal issues in cluster nodes/pods within a specified time range
       *
       * @param request GetProblemPercentageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProblemPercentageResponse
       */
      Models::GetProblemPercentageResponse getProblemPercentageWithOptions(const Models::GetProblemPercentageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the proportion of abnormal issues in cluster nodes/pods within a specified time range
       *
       * @param request GetProblemPercentageRequest
       * @return GetProblemPercentageResponse
       */
      Models::GetProblemPercentageResponse getProblemPercentage(const Models::GetProblemPercentageRequest &request);

      /**
       * @summary Retrieves the health score trend.
       *
       * @param request GetRangeScoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRangeScoreResponse
       */
      Models::GetRangeScoreResponse getRangeScoreWithOptions(const Models::GetRangeScoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the health score trend.
       *
       * @param request GetRangeScoreRequest
       * @return GetRangeScoreResponse
       */
      Models::GetRangeScoreResponse getRangeScore(const Models::GetRangeScoreRequest &request);

      /**
       * @summary Retrieves the real-time resource usage of a cluster or node.
       *
       * @param request GetResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourcesResponse
       */
      Models::GetResourcesResponse getResourcesWithOptions(const Models::GetResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the real-time resource usage of a cluster or node.
       *
       * @param request GetResourcesRequest
       * @return GetResourcesResponse
       */
      Models::GetResourcesResponse getResources(const Models::GetResourcesRequest &request);

      /**
       * @summary Retrieves the configuration of a feature module.
       *
       * @description Retrieves the service configuration status.
       *
       * @param tmpReq GetServiceFuncStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceFuncStatusResponse
       */
      Models::GetServiceFuncStatusResponse getServiceFuncStatusWithOptions(const Models::GetServiceFuncStatusRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration of a feature module.
       *
       * @description Retrieves the service configuration status.
       *
       * @param request GetServiceFuncStatusRequest
       * @return GetServiceFuncStatusResponse
       */
      Models::GetServiceFuncStatusResponse getServiceFuncStatus(const Models::GetServiceFuncStatusRequest &request);

      /**
       * @summary Queries the execution status and diagnostic result of a diagnostic task by task ID.
       *
       * @param request GetVmcoreDiagnosisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVmcoreDiagnosisTaskResponse
       */
      Models::GetVmcoreDiagnosisTaskResponse getVmcoreDiagnosisTaskWithOptions(const Models::GetVmcoreDiagnosisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status and diagnostic result of a diagnostic task by task ID.
       *
       * @param request GetVmcoreDiagnosisTaskRequest
       * @return GetVmcoreDiagnosisTaskResponse
       */
      Models::GetVmcoreDiagnosisTaskResponse getVmcoreDiagnosisTask(const Models::GetVmcoreDiagnosisTaskRequest &request);

      /**
       * @summary Initializes SysOM to ensure that the service-linked role exists.
       *
       * @description Some SysOM API operations require role assumption based on the `AliyunServiceRoleForSysom` service-linked role. Before using SysOM features, invoke this operation to perform initialization and ensure that the service-linked role has been created.
       * - `check_only`: If this parameter is set to True, the operation only checks whether the service-linked role exists and does not create it. If this parameter is set to False or left empty, the operation performs automatic creation of the service-linked role if it does not exist.
       * > 
       * > Note: When you call this operation to initialize the role through the API, you agree to the user agreement of the operating system console by default. For more information, see [Operating system console overview](https://www.alibabacloud.com/help/en/alinux/product-overview/os-console-overview) and [Alibaba Cloud Service Trial Terms](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud202001091714_51956.html).
       *
       * @param request InitialSysomRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitialSysomResponse
       */
      Models::InitialSysomResponse initialSysomWithOptions(const Models::InitialSysomRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes SysOM to ensure that the service-linked role exists.
       *
       * @description Some SysOM API operations require role assumption based on the `AliyunServiceRoleForSysom` service-linked role. Before using SysOM features, invoke this operation to perform initialization and ensure that the service-linked role has been created.
       * - `check_only`: If this parameter is set to True, the operation only checks whether the service-linked role exists and does not create it. If this parameter is set to False or left empty, the operation performs automatic creation of the service-linked role if it does not exist.
       * > 
       * > Note: When you call this operation to initialize the role through the API, you agree to the user agreement of the operating system console by default. For more information, see [Operating system console overview](https://www.alibabacloud.com/help/en/alinux/product-overview/os-console-overview) and [Alibaba Cloud Service Trial Terms](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud202001091714_51956.html).
       *
       * @param request InitialSysomRequest
       * @return InitialSysomResponse
       */
      Models::InitialSysomResponse initialSysom(const Models::InitialSysomRequest &request);

      /**
       * @summary Installs an Agent on a specified instance.
       *
       * @description Calling this operation to install an Agent is asynchronous. After the call, a task_id is returned. You can use this ID to call the GetAgentTask operation to retrieve the task execution status.
       *
       * @param request InstallAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAgentResponse
       */
      Models::InstallAgentResponse installAgentWithOptions(const Models::InstallAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs an Agent on a specified instance.
       *
       * @description Calling this operation to install an Agent is asynchronous. After the call, a task_id is returned. You can use this ID to call the GetAgentTask operation to retrieve the task execution status.
       *
       * @param request InstallAgentRequest
       * @return InstallAgentResponse
       */
      Models::InstallAgentResponse installAgent(const Models::InstallAgentRequest &request);

      /**
       * @summary Install component for cluster
       *
       * @description After installing a component for the target ACK cluster:
       * 1. First, when the cluster is managed for the first time, the component will be installed on all ECS instances currently in the cluster. If the cluster has more than 50 nodes, only 50 instances will be covered in the first batch.
       * 2. Then, the SysOM console periodically checks the scaling status of the managed cluster. Once a new ECS instance is added to the cluster, the SysOM console automatically installs the component on it without user intervention.
       *
       * @param request InstallAgentForClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAgentForClusterResponse
       */
      Models::InstallAgentForClusterResponse installAgentForClusterWithOptions(const Models::InstallAgentForClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Install component for cluster
       *
       * @description After installing a component for the target ACK cluster:
       * 1. First, when the cluster is managed for the first time, the component will be installed on all ECS instances currently in the cluster. If the cluster has more than 50 nodes, only 50 instances will be covered in the first batch.
       * 2. Then, the SysOM console periodically checks the scaling status of the managed cluster. Once a new ECS instance is added to the cluster, the SysOM console automatically installs the component on it without user intervention.
       *
       * @param request InstallAgentForClusterRequest
       * @return InstallAgentForClusterResponse
       */
      Models::InstallAgentForClusterResponse installAgentForCluster(const Models::InstallAgentForClusterRequest &request);

      /**
       * @summary Initiates an anomaly diagnostics task.
       *
       * @param request InvokeAnomalyDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeAnomalyDiagnosisResponse
       */
      Models::InvokeAnomalyDiagnosisResponse invokeAnomalyDiagnosisWithOptions(const Models::InvokeAnomalyDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates an anomaly diagnostics task.
       *
       * @param request InvokeAnomalyDiagnosisRequest
       * @return InvokeAnomalyDiagnosisResponse
       */
      Models::InvokeAnomalyDiagnosisResponse invokeAnomalyDiagnosis(const Models::InvokeAnomalyDiagnosisRequest &request);

      /**
       * @summary Initiate Diagnosis.
       *
       * @description The following requirements must be met to diagnose a target ECS instance:
       * - The target ECS instance must be in the Running state.
       * - The Cloud Assistant must be installed on the target ECS instance. If it is not installed, refer to [Install the Cloud Assistant Agent](https://help.aliyun.com/zh/ecs/user-guide/install-the-cloud-assistant-agent) for installation.
       * - You must call the AuthDiagnosis API to authorize SysOM to diagnose the target ECS instance. If authorization is not granted, this API will fail directly.
       * - This API requires that the SysOM service-linked role (AliyunServiceRoleForSysom) has been created. This API does not automatically create the service role. If the service role does not exist, you must first call AuthDiagnosis for authorization, which will create the aforementioned service role.
       *
       * @param request InvokeDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeDiagnosisResponse
       */
      Models::InvokeDiagnosisResponse invokeDiagnosisWithOptions(const Models::InvokeDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiate Diagnosis.
       *
       * @description The following requirements must be met to diagnose a target ECS instance:
       * - The target ECS instance must be in the Running state.
       * - The Cloud Assistant must be installed on the target ECS instance. If it is not installed, refer to [Install the Cloud Assistant Agent](https://help.aliyun.com/zh/ecs/user-guide/install-the-cloud-assistant-agent) for installation.
       * - You must call the AuthDiagnosis API to authorize SysOM to diagnose the target ECS instance. If authorization is not granted, this API will fail directly.
       * - This API requires that the SysOM service-linked role (AliyunServiceRoleForSysom) has been created. This API does not automatically create the service role. If the service role does not exist, you must first call AuthDiagnosis for authorization, which will create the aforementioned service role.
       *
       * @param request InvokeDiagnosisRequest
       * @return InvokeDiagnosisResponse
       */
      Models::InvokeDiagnosisResponse invokeDiagnosis(const Models::InvokeDiagnosisRequest &request);

      /**
       * @summary Retrieves anomaly event information for a cluster, node, or pod within a specified time range.
       *
       * @param request ListAbnormalyEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAbnormalyEventsResponse
       */
      Models::ListAbnormalyEventsResponse listAbnormalyEventsWithOptions(const Models::ListAbnormalyEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves anomaly event information for a cluster, node, or pod within a specified time range.
       *
       * @param request ListAbnormalyEventsRequest
       * @return ListAbnormalyEventsResponse
       */
      Models::ListAbnormalyEventsResponse listAbnormalyEvents(const Models::ListAbnormalyEventsRequest &request);

      /**
       * @summary Lists the installation records of an Agent.
       *
       * @param request ListAgentInstallRecordsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentInstallRecordsResponse
       */
      Models::ListAgentInstallRecordsResponse listAgentInstallRecordsWithOptions(const Models::ListAgentInstallRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the installation records of an Agent.
       *
       * @param request ListAgentInstallRecordsRequest
       * @return ListAgentInstallRecordsResponse
       */
      Models::ListAgentInstallRecordsResponse listAgentInstallRecords(const Models::ListAgentInstallRecordsRequest &request);

      /**
       * @summary Retrieves a list of agents.
       *
       * @param request ListAgentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgentsWithOptions(const Models::ListAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of agents.
       *
       * @param request ListAgentsRequest
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgents(const Models::ListAgentsRequest &request);

      /**
       * @summary This API is used to get the list of alert contacts
       *
       * @param request ListAlertDestinationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertDestinationsResponse
       */
      Models::ListAlertDestinationsResponse listAlertDestinationsWithOptions(const Models::ListAlertDestinationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to get the list of alert contacts
       *
       * @param request ListAlertDestinationsRequest
       * @return ListAlertDestinationsResponse
       */
      Models::ListAlertDestinationsResponse listAlertDestinations(const Models::ListAlertDestinationsRequest &request);

      /**
       * @summary Retrieves all alert metrics.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertItemsResponse
       */
      Models::ListAlertItemsResponse listAlertItemsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all alert metrics.
       *
       * @return ListAlertItemsResponse
       */
      Models::ListAlertItemsResponse listAlertItems();

      /**
       * @summary Retrieves all push alert policies for the current user.
       *
       * @param request ListAlertStrategiesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertStrategiesResponse
       */
      Models::ListAlertStrategiesResponse listAlertStrategiesWithOptions(const Models::ListAlertStrategiesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all push alert policies for the current user.
       *
       * @param request ListAlertStrategiesRequest
       * @return ListAlertStrategiesResponse
       */
      Models::ListAlertStrategiesResponse listAlertStrategies(const Models::ListAlertStrategiesRequest &request);

      /**
       * @summary This API is used to retrieve a list of managed/unmanaged instances along with their instance information.
       *
       * @param request ListAllInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllInstancesResponse
       */
      Models::ListAllInstancesResponse listAllInstancesWithOptions(const Models::ListAllInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to retrieve a list of managed/unmanaged instances along with their instance information.
       *
       * @param request ListAllInstancesRequest
       * @return ListAllInstancesResponse
       */
      Models::ListAllInstancesResponse listAllInstances(const Models::ListAllInstancesRequest &request);

      /**
       * @summary Get cluster component installation records
       *
       * @param request ListClusterAgentInstallRecordsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterAgentInstallRecordsResponse
       */
      Models::ListClusterAgentInstallRecordsResponse listClusterAgentInstallRecordsWithOptions(const Models::ListClusterAgentInstallRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get cluster component installation records
       *
       * @param request ListClusterAgentInstallRecordsRequest
       * @return ListClusterAgentInstallRecordsResponse
       */
      Models::ListClusterAgentInstallRecordsResponse listClusterAgentInstallRecords(const Models::ListClusterAgentInstallRecordsRequest &request);

      /**
       * @summary Retrieve all managed clusters of the current user
       *
       * @param request ListClustersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClustersWithOptions(const Models::ListClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve all managed clusters of the current user
       *
       * @param request ListClustersRequest
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClusters(const Models::ListClustersRequest &request);

      /**
       * @summary Obtain the list of diagnostic history.
       *
       * @param request ListDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiagnosisResponse
       */
      Models::ListDiagnosisResponse listDiagnosisWithOptions(const Models::ListDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the list of diagnostic history.
       *
       * @param request ListDiagnosisRequest
       * @return ListDiagnosisResponse
       */
      Models::ListDiagnosisResponse listDiagnosis(const Models::ListDiagnosisRequest &request);

      /**
       * @summary Retrieves the health status list of cluster nodes or Pods within a specified time range.
       *
       * @param request ListInstanceHealthRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceHealthResponse
       */
      Models::ListInstanceHealthResponse listInstanceHealthWithOptions(const Models::ListInstanceHealthRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the health status list of cluster nodes or Pods within a specified time range.
       *
       * @param request ListInstanceHealthRequest
       * @return ListInstanceHealthResponse
       */
      Models::ListInstanceHealthResponse listInstanceHealth(const Models::ListInstanceHealthRequest &request);

      /**
       * @summary Retrieves instance statuses.
       *
       * @description Retrieves the list of machines managed by SysOM.
       *
       * @param request ListInstanceStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceStatusResponse
       */
      Models::ListInstanceStatusResponse listInstanceStatusWithOptions(const Models::ListInstanceStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves instance statuses.
       *
       * @description Retrieves the list of machines managed by SysOM.
       *
       * @param request ListInstanceStatusRequest
       * @return ListInstanceStatusResponse
       */
      Models::ListInstanceStatusResponse listInstanceStatus(const Models::ListInstanceStatusRequest &request);

      /**
       * @summary Retrieves a list of instances.
       *
       * @description This operation retrieves the list of instances that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
       *
       * @param request ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of instances.
       *
       * @description This operation retrieves the list of instances that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Retrieves lists of ECS information for instances, such as tag lists and public IP address lists.
       *
       * @description The instance list retrieved by this operation contains only machines that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
       *
       * @param request ListInstancesEcsInfoListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesEcsInfoListResponse
       */
      Models::ListInstancesEcsInfoListResponse listInstancesEcsInfoListWithOptions(const Models::ListInstancesEcsInfoListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves lists of ECS information for instances, such as tag lists and public IP address lists.
       *
       * @description The instance list retrieved by this operation contains only machines that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
       *
       * @param request ListInstancesEcsInfoListRequest
       * @return ListInstancesEcsInfoListResponse
       */
      Models::ListInstancesEcsInfoListResponse listInstancesEcsInfoList(const Models::ListInstancesEcsInfoListRequest &request);

      /**
       * @summary Retrieves information about managed and unmanaged instances, including ECS information.
       *
       * @description The instance list returned by this operation contains only machines that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
       *
       * @param tmpReq ListInstancesWithEcsInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesWithEcsInfoResponse
       */
      Models::ListInstancesWithEcsInfoResponse listInstancesWithEcsInfoWithOptions(const Models::ListInstancesWithEcsInfoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about managed and unmanaged instances, including ECS information.
       *
       * @description The instance list returned by this operation contains only machines that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
       *
       * @param request ListInstancesWithEcsInfoRequest
       * @return ListInstancesWithEcsInfoResponse
       */
      Models::ListInstancesWithEcsInfoResponse listInstancesWithEcsInfo(const Models::ListInstancesWithEcsInfoRequest &request);

      /**
       * @summary Retrieves the list of instances for plug-in installation, update, or uninstallation.
       *
       * @description The instance list retrieved by this operation contains only machines that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
       *
       * @param request ListPluginsInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginsInstancesResponse
       */
      Models::ListPluginsInstancesResponse listPluginsInstancesWithOptions(const Models::ListPluginsInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of instances for plug-in installation, update, or uninstallation.
       *
       * @description The instance list retrieved by this operation contains only machines that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
       *
       * @param request ListPluginsInstancesRequest
       * @return ListPluginsInstancesResponse
       */
      Models::ListPluginsInstancesResponse listPluginsInstances(const Models::ListPluginsInstancesRequest &request);

      /**
       * @summary Retrieves the list of pods in a cluster or instance.
       *
       * @param request ListPodsOfInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPodsOfInstanceResponse
       */
      Models::ListPodsOfInstanceResponse listPodsOfInstanceWithOptions(const Models::ListPodsOfInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of pods in a cluster or instance.
       *
       * @param request ListPodsOfInstanceRequest
       * @return ListPodsOfInstanceResponse
       */
      Models::ListPodsOfInstanceResponse listPodsOfInstance(const Models::ListPodsOfInstanceRequest &request);

      /**
       * @summary Lists all regions that contain managed instances.
       *
       * @description This operation retrieves the list of regions where the current user has instances managed by SysOM. If a user has ECS instances in a region but none of them are managed by SysOM, that region is not included in the response.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all regions that contain managed instances.
       *
       * @description This operation retrieves the list of regions where the current user has instances managed by SysOM. If a user has ECS instances in a region but none of them are managed by SysOM, that region is not included in the response.
       *
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions();

      /**
       * @summary Query the historical crash diagnosis task list.
       *
       * @param request ListVmcoreDiagnosisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVmcoreDiagnosisTaskResponse
       */
      Models::ListVmcoreDiagnosisTaskResponse listVmcoreDiagnosisTaskWithOptions(const Models::ListVmcoreDiagnosisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the historical crash diagnosis task list.
       *
       * @param request ListVmcoreDiagnosisTaskRequest
       * @return ListVmcoreDiagnosisTaskResponse
       */
      Models::ListVmcoreDiagnosisTaskResponse listVmcoreDiagnosisTask(const Models::ListVmcoreDiagnosisTaskRequest &request);

      /**
       * @summary Start AI job analysis.
       *
       * @param request StartAIAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAIAnalysisResponse
       */
      Models::StartAIAnalysisResponse startAIAnalysisWithOptions(const Models::StartAIAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start AI job analysis.
       *
       * @param request StartAIAnalysisRequest
       * @return StartAIAnalysisResponse
       */
      Models::StartAIAnalysisResponse startAIAnalysis(const Models::StartAIAnalysisRequest &request);

      /**
       * @summary Starts an AI Infra differential analysis.
       *
       * @description Currently, only comparative analysis of the same pid across different steps within the same AI Infra analysis record is supported.
       *
       * @param request StartAIDiffAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAIDiffAnalysisResponse
       */
      Models::StartAIDiffAnalysisResponse startAIDiffAnalysisWithOptions(const Models::StartAIDiffAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an AI Infra differential analysis.
       *
       * @description Currently, only comparative analysis of the same pid across different steps within the same AI Infra analysis record is supported.
       *
       * @param request StartAIDiffAnalysisRequest
       * @return StartAIDiffAnalysisResponse
       */
      Models::StartAIDiffAnalysisResponse startAIDiffAnalysis(const Models::StartAIDiffAnalysisRequest &request);

      /**
       * @summary Uninstalls a specified version of a component.
       *
       * @description Calling this operation to uninstall an Agent is asynchronous. After the call, a task_id is returned. Use this ID to call the GetAgentTask operation to retrieve the execution status of the task.
       *
       * @param request UninstallAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallAgentResponse
       */
      Models::UninstallAgentResponse uninstallAgentWithOptions(const Models::UninstallAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls a specified version of a component.
       *
       * @description Calling this operation to uninstall an Agent is asynchronous. After the call, a task_id is returned. Use this ID to call the GetAgentTask operation to retrieve the execution status of the task.
       *
       * @param request UninstallAgentRequest
       * @return UninstallAgentResponse
       */
      Models::UninstallAgentResponse uninstallAgent(const Models::UninstallAgentRequest &request);

      /**
       * @summary Uninstalls a component from a cluster.
       *
       * @param request UninstallAgentForClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallAgentForClusterResponse
       */
      Models::UninstallAgentForClusterResponse uninstallAgentForClusterWithOptions(const Models::UninstallAgentForClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls a component from a cluster.
       *
       * @param request UninstallAgentForClusterRequest
       * @return UninstallAgentForClusterResponse
       */
      Models::UninstallAgentForClusterResponse uninstallAgentForCluster(const Models::UninstallAgentForClusterRequest &request);

      /**
       * @summary Updates an alert contact.
       *
       * @description .
       *
       * @param request UpdateAlertDestinationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertDestinationResponse
       */
      Models::UpdateAlertDestinationResponse updateAlertDestinationWithOptions(const Models::UpdateAlertDestinationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an alert contact.
       *
       * @description .
       *
       * @param request UpdateAlertDestinationRequest
       * @return UpdateAlertDestinationResponse
       */
      Models::UpdateAlertDestinationResponse updateAlertDestination(const Models::UpdateAlertDestinationRequest &request);

      /**
       * @summary Updates the status of a push alert policy.
       *
       * @param request UpdateAlertEnabledRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertEnabledResponse
       */
      Models::UpdateAlertEnabledResponse updateAlertEnabledWithOptions(const Models::UpdateAlertEnabledRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of a push alert policy.
       *
       * @param request UpdateAlertEnabledRequest
       * @return UpdateAlertEnabledResponse
       */
      Models::UpdateAlertEnabledResponse updateAlertEnabled(const Models::UpdateAlertEnabledRequest &request);

      /**
       * @summary Updates a push alert policy.
       *
       * @param request UpdateAlertStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertStrategyResponse
       */
      Models::UpdateAlertStrategyResponse updateAlertStrategyWithOptions(const Models::UpdateAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a push alert policy.
       *
       * @param request UpdateAlertStrategyRequest
       * @return UpdateAlertStrategyResponse
       */
      Models::UpdateAlertStrategyResponse updateAlertStrategy(const Models::UpdateAlertStrategyRequest &request);

      /**
       * @summary Updates the attention level of an anomaly item. Adjusting the attention level affects the sensitivity of the anomaly detection algorithm.
       *
       * @param request UpdateEventsAttentionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEventsAttentionResponse
       */
      Models::UpdateEventsAttentionResponse updateEventsAttentionWithOptions(const Models::UpdateEventsAttentionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the attention level of an anomaly item. Adjusting the attention level affects the sensitivity of the anomaly detection algorithm.
       *
       * @param request UpdateEventsAttentionRequest
       * @return UpdateEventsAttentionResponse
       */
      Models::UpdateEventsAttentionResponse updateEventsAttention(const Models::UpdateEventsAttentionRequest &request);

      /**
       * @summary Updates the configuration of a service feature module.
       *
       * @description - Populate parameters according to the general LLM service input parameters, convert them to a string, and assign the string to llmParamString.
       * - Convert the returned data from a string to a dict before use. Refer to the general LLM service response format.
       *
       * @param tmpReq UpdateFuncSwitchRecordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFuncSwitchRecordResponse
       */
      Models::UpdateFuncSwitchRecordResponse updateFuncSwitchRecordWithOptions(const Models::UpdateFuncSwitchRecordRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a service feature module.
       *
       * @description - Populate parameters according to the general LLM service input parameters, convert them to a string, and assign the string to llmParamString.
       * - Convert the returned data from a string to a dict before use. Refer to the general LLM service response format.
       *
       * @param request UpdateFuncSwitchRecordRequest
       * @return UpdateFuncSwitchRecordResponse
       */
      Models::UpdateFuncSwitchRecordResponse updateFuncSwitchRecord(const Models::UpdateFuncSwitchRecordRequest &request);

      /**
       * @summary Updates an installed component to a specified version.
       *
       * @description Updating the Agent by calling this operation is asynchronous. After you call this operation, a task_id is returned. You can use this ID to call the GetAgentTask operation to query the execution status of the task.
       *
       * @param request UpgradeAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeAgentResponse
       */
      Models::UpgradeAgentResponse upgradeAgentWithOptions(const Models::UpgradeAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an installed component to a specified version.
       *
       * @description Updating the Agent by calling this operation is asynchronous. After you call this operation, a task_id is returned. You can use this ID to call the GetAgentTask operation to query the execution status of the task.
       *
       * @param request UpgradeAgentRequest
       * @return UpgradeAgentResponse
       */
      Models::UpgradeAgentResponse upgradeAgent(const Models::UpgradeAgentRequest &request);

      /**
       * @summary Updates components for a cluster.
       *
       * @param request UpgradeAgentForClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeAgentForClusterResponse
       */
      Models::UpgradeAgentForClusterResponse upgradeAgentForClusterWithOptions(const Models::UpgradeAgentForClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates components for a cluster.
       *
       * @param request UpgradeAgentForClusterRequest
       * @return UpgradeAgentForClusterResponse
       */
      Models::UpgradeAgentForClusterResponse upgradeAgentForCluster(const Models::UpgradeAgentForClusterRequest &request);
  };
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
