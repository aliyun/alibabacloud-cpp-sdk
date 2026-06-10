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
       * @summary This API is used to authorize SysOM to diagnose ECS instances under your account. You can only invoke the InvokeDiagnosis API to initiate diagnosis on a specific ECS instance after authorizing it through this API.
       *
       * @description >Notice: The diagnosis feature requires a service-linked role to be created under a Resource Access Management (RAM) user. When you call this API, it automatically checks whether the service-linked role exists. If the role does not exist, the API automatically creates it. This requires the RAM user invoking this API to have the ram:CreateServiceLinkedRole permission.</notice>
       * When calling this API to authorize SysOM to diagnose ECS instances, note the following:
       * - Each authorization is valid for 7 days. After 7 days, the authorization expires, and you must call this API again to re-authorize.
       * - If the SysOM service-linked role (AliyunServiceRoleForSysom) does not exist when you call this API, it will be automatically created. This requires the RAM user invoking this API to have the `ram:CreateServiceLinkedRole` permission.
       * - When you authorize a specific instance through this API, the system automatically adds the label `sysom:diagnosis` to the target ECS instance. SysOM can only diagnose instances that have this label.
       *
       * @param request AuthDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthDiagnosisResponse
       */
      Models::AuthDiagnosisResponse authDiagnosisWithOptions(const Models::AuthDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to authorize SysOM to diagnose ECS instances under your account. You can only invoke the InvokeDiagnosis API to initiate diagnosis on a specific ECS instance after authorizing it through this API.
       *
       * @description >Notice: The diagnosis feature requires a service-linked role to be created under a Resource Access Management (RAM) user. When you call this API, it automatically checks whether the service-linked role exists. If the role does not exist, the API automatically creates it. This requires the RAM user invoking this API to have the ram:CreateServiceLinkedRole permission.</notice>
       * When calling this API to authorize SysOM to diagnose ECS instances, note the following:
       * - Each authorization is valid for 7 days. After 7 days, the authorization expires, and you must call this API again to re-authorize.
       * - If the SysOM service-linked role (AliyunServiceRoleForSysom) does not exist when you call this API, it will be automatically created. This requires the RAM user invoking this API to have the `ram:CreateServiceLinkedRole` permission.
       * - When you authorize a specific instance through this API, the system automatically adds the label `sysom:diagnosis` to the target ECS instance. SysOM can only diagnose instances that have this label.
       *
       * @param request AuthDiagnosisRequest
       * @return AuthDiagnosisResponse
       */
      Models::AuthDiagnosisResponse authDiagnosis(const Models::AuthDiagnosisRequest &request);

      /**
       * @summary Check whether the target instance is supported by SysOM
       *
       * @description The instance list returned by this API includes only machines that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it will not appear in the list.
       *
       * @param request CheckInstanceSupportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceSupportResponse
       */
      Models::CheckInstanceSupportResponse checkInstanceSupportWithOptions(const Models::CheckInstanceSupportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check whether the target instance is supported by SysOM
       *
       * @description The instance list returned by this API includes only machines that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it will not appear in the list.
       *
       * @param request CheckInstanceSupportRequest
       * @return CheckInstanceSupportResponse
       */
      Models::CheckInstanceSupportResponse checkInstanceSupport(const Models::CheckInstanceSupportRequest &request);

      /**
       * @summary High-CPU agent streaming API
       *
       * @param request CpuHighAgentStreamResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CpuHighAgentStreamResponseResponse
       */
      FutureGenerator<Models::CpuHighAgentStreamResponseResponse> cpuHighAgentStreamResponseWithSSE(const Models::CpuHighAgentStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary High-CPU agent streaming API
       *
       * @param request CpuHighAgentStreamResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CpuHighAgentStreamResponseResponse
       */
      Models::CpuHighAgentStreamResponseResponse cpuHighAgentStreamResponseWithOptions(const Models::CpuHighAgentStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary High-CPU agent streaming API
       *
       * @param request CpuHighAgentStreamResponseRequest
       * @return CpuHighAgentStreamResponseResponse
       */
      Models::CpuHighAgentStreamResponseResponse cpuHighAgentStreamResponse(const Models::CpuHighAgentStreamResponseRequest &request);

      /**
       * @summary This API is used to create an alert contact for push notifications.
       *
       * @param request CreateAlertDestinationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlertDestinationResponse
       */
      Models::CreateAlertDestinationResponse createAlertDestinationWithOptions(const Models::CreateAlertDestinationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to create an alert contact for push notifications.
       *
       * @param request CreateAlertDestinationRequest
       * @return CreateAlertDestinationResponse
       */
      Models::CreateAlertDestinationResponse createAlertDestination(const Models::CreateAlertDestinationRequest &request);

      /**
       * @summary Create an alert policy for push notifications
       *
       * @param request CreateAlertStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlertStrategyResponse
       */
      Models::CreateAlertStrategyResponse createAlertStrategyWithOptions(const Models::CreateAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an alert policy for push notifications
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
       * @summary 创建实例巡检
       *
       * @param request CreateInstanceInspectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceInspectionResponse
       */
      Models::CreateInstanceInspectionResponse createInstanceInspectionWithOptions(const Models::CreateInstanceInspectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例巡检
       *
       * @param request CreateInstanceInspectionRequest
       * @return CreateInstanceInspectionResponse
       */
      Models::CreateInstanceInspectionResponse createInstanceInspection(const Models::CreateInstanceInspectionRequest &request);

      /**
       * @summary This API creates an intelligent breakdown diagnosis task to diagnose the vmcore or dmesg log file provided in the parameters.
       *
       * @param request CreateVmcoreDiagnosisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVmcoreDiagnosisTaskResponse
       */
      Models::CreateVmcoreDiagnosisTaskResponse createVmcoreDiagnosisTaskWithOptions(const Models::CreateVmcoreDiagnosisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API creates an intelligent breakdown diagnosis task to diagnose the vmcore or dmesg log file provided in the parameters.
       *
       * @param request CreateVmcoreDiagnosisTaskRequest
       * @return CreateVmcoreDiagnosisTaskResponse
       */
      Models::CreateVmcoreDiagnosisTaskResponse createVmcoreDiagnosisTask(const Models::CreateVmcoreDiagnosisTaskRequest &request);

      /**
       * @summary This API is used to delete an alert contact.
       *
       * @param request DeleteAlertDestinationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertDestinationResponse
       */
      Models::DeleteAlertDestinationResponse deleteAlertDestinationWithOptions(const Models::DeleteAlertDestinationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to delete an alert contact.
       *
       * @param request DeleteAlertDestinationRequest
       * @return DeleteAlertDestinationResponse
       */
      Models::DeleteAlertDestinationResponse deleteAlertDestination(const Models::DeleteAlertDestinationRequest &request);

      /**
       * @summary User deletes the alert policy for push notifications.
       *
       * @param request DeleteAlertStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertStrategyResponse
       */
      Models::DeleteAlertStrategyResponse deleteAlertStrategyWithOptions(const Models::DeleteAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary User deletes the alert policy for push notifications.
       *
       * @param request DeleteAlertStrategyRequest
       * @return DeleteAlertStrategyResponse
       */
      Models::DeleteAlertStrategyResponse deleteAlertStrategy(const Models::DeleteAlertStrategyRequest &request);

      /**
       * @summary Query metrics
       *
       * @description The instance list obtained by this API includes only the machines that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it will not appear in the list.
       *
       * @param request DescribeMetricListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricListWithOptions(const Models::DescribeMetricListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query metrics
       *
       * @description The instance list obtained by this API includes only the machines that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it will not appear in the list.
       *
       * @param request DescribeMetricListRequest
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricList(const Models::DescribeMetricListRequest &request);

      /**
       * @summary Obtain the Return Result of the copilot service
       *
       * @description - You must fill in the input parameters according to the standard LLM service input parameters, convert them into a string, and assign the result to llmParamString.  
       * - The returned data must be converted from a string to a dict before use. Refer to the standard LLM service return format.
       *
       * @param request GenerateCopilotResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCopilotResponseResponse
       */
      Models::GenerateCopilotResponseResponse generateCopilotResponseWithOptions(const Models::GenerateCopilotResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the Return Result of the copilot service
       *
       * @description - You must fill in the input parameters according to the standard LLM service input parameters, convert them into a string, and assign the result to llmParamString.  
       * - The returned data must be converted from a string to a dict before use. Refer to the standard LLM service return format.
       *
       * @param request GenerateCopilotResponseRequest
       * @return GenerateCopilotResponseResponse
       */
      Models::GenerateCopilotResponseResponse generateCopilotResponse(const Models::GenerateCopilotResponseRequest &request);

      /**
       * @summary Stream Copilot service API
       *
       * @description - Must be used together with the call_sseapi API of the aliyun-tea-openapi-inner package.  
       * - You must populate the input parameters according to the standard LLM service input parameters, convert them into a string, and assign the result to llmParamString.  
       * - The returned data is a string that you must convert into a dictionary for use, following the standard LLM service response format.
       *
       * @param request GenerateCopilotStreamResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCopilotStreamResponseResponse
       */
      FutureGenerator<Models::GenerateCopilotStreamResponseResponse> generateCopilotStreamResponseWithSSE(const Models::GenerateCopilotStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stream Copilot service API
       *
       * @description - Must be used together with the call_sseapi API of the aliyun-tea-openapi-inner package.  
       * - You must populate the input parameters according to the standard LLM service input parameters, convert them into a string, and assign the result to llmParamString.  
       * - The returned data is a string that you must convert into a dictionary for use, following the standard LLM service response format.
       *
       * @param request GenerateCopilotStreamResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCopilotStreamResponseResponse
       */
      Models::GenerateCopilotStreamResponseResponse generateCopilotStreamResponseWithOptions(const Models::GenerateCopilotStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stream Copilot service API
       *
       * @description - Must be used together with the call_sseapi API of the aliyun-tea-openapi-inner package.  
       * - You must populate the input parameters according to the standard LLM service input parameters, convert them into a string, and assign the result to llmParamString.  
       * - The returned data is a string that you must convert into a dictionary for use, following the standard LLM service response format.
       *
       * @param request GenerateCopilotStreamResponseRequest
       * @return GenerateCopilotStreamResponseResponse
       */
      Models::GenerateCopilotStreamResponseResponse generateCopilotStreamResponse(const Models::GenerateCopilotStreamResponseRequest &request);

      /**
       * @summary View AI Infra Analysis Result
       *
       * @param request GetAIQueryResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAIQueryResultResponse
       */
      Models::GetAIQueryResultResponse getAIQueryResultWithOptions(const Models::GetAIQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View AI Infra Analysis Result
       *
       * @param request GetAIQueryResultRequest
       * @return GetAIQueryResultResponse
       */
      Models::GetAIQueryResultResponse getAIQueryResult(const Models::GetAIQueryResultRequest &request);

      /**
       * @summary Obtain the quantity of unprocessed (undiagnosed) anomalous activity at different Levels for edge zones/pods.
       *
       * @param request GetAbnormalEventsCountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAbnormalEventsCountResponse
       */
      Models::GetAbnormalEventsCountResponse getAbnormalEventsCountWithOptions(const Models::GetAbnormalEventsCountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the quantity of unprocessed (undiagnosed) anomalous activity at different Levels for edge zones/pods.
       *
       * @param request GetAbnormalEventsCountRequest
       * @return GetAbnormalEventsCountResponse
       */
      Models::GetAbnormalEventsCountResponse getAbnormalEventsCount(const Models::GetAbnormalEventsCountRequest &request);

      /**
       * @summary Retrieve the details of a widget
       *
       * @param request GetAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgentWithOptions(const Models::GetAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the details of a widget
       *
       * @param request GetAgentRequest
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgent(const Models::GetAgentRequest &request);

      /**
       * @summary Obtain the task execution status of Agent installation
       *
       * @param request GetAgentTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentTaskResponse
       */
      Models::GetAgentTaskResponse getAgentTaskWithOptions(const Models::GetAgentTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the task execution status of Agent installation
       *
       * @param request GetAgentTaskRequest
       * @return GetAgentTaskResponse
       */
      Models::GetAgentTaskResponse getAgentTask(const Models::GetAgentTaskRequest &request);

      /**
       * @summary This API is used to obtain the specified alert contact information.
       *
       * @param request GetAlertDestinationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlertDestinationResponse
       */
      Models::GetAlertDestinationResponse getAlertDestinationWithOptions(const Models::GetAlertDestinationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to obtain the specified alert contact information.
       *
       * @param request GetAlertDestinationRequest
       * @return GetAlertDestinationResponse
       */
      Models::GetAlertDestinationResponse getAlertDestination(const Models::GetAlertDestinationRequest &request);

      /**
       * @summary Obtain an alert for a user by policy ID.
       *
       * @param request GetAlertStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlertStrategyResponse
       */
      Models::GetAlertStrategyResponse getAlertStrategyWithOptions(const Models::GetAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain an alert for a user by policy ID.
       *
       * @param request GetAlertStrategyRequest
       * @return GetAlertStrategyResponse
       */
      Models::GetAlertStrategyResponse getAlertStrategy(const Models::GetAlertStrategyRequest &request);

      /**
       * @summary Retrieve copilot chat history
       *
       * @param request GetCopilotHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCopilotHistoryResponse
       */
      Models::GetCopilotHistoryResponse getCopilotHistoryWithOptions(const Models::GetCopilotHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve copilot chat history
       *
       * @param request GetCopilotHistoryRequest
       * @return GetCopilotHistoryResponse
       */
      Models::GetCopilotHistoryResponse getCopilotHistory(const Models::GetCopilotHistoryRequest &request);

      /**
       * @summary Obtain the diagnosis result.
       *
       * @description The diagnosis flow is asynchronous. Therefore, when you invoke this API, the diagnosis may still be executing and not yet ended. You can check the `data.status` field in the returned data to determine the status. When `data.status == "Success"`, it indicates that the diagnosis succeeded, and you can read the diagnosis result from `data.result`.
       *
       * @param request GetDiagnosisResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDiagnosisResultResponse
       */
      Models::GetDiagnosisResultResponse getDiagnosisResultWithOptions(const Models::GetDiagnosisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the diagnosis result.
       *
       * @description The diagnosis flow is asynchronous. Therefore, when you invoke this API, the diagnosis may still be executing and not yet ended. You can check the `data.status` field in the returned data to determine the status. When `data.status == "Success"`, it indicates that the diagnosis succeeded, and you can read the diagnosis result from `data.result`.
       *
       * @param request GetDiagnosisResultRequest
       * @return GetDiagnosisResultResponse
       */
      Models::GetDiagnosisResultResponse getDiagnosisResult(const Models::GetDiagnosisResultRequest &request);

      /**
       * @summary Obtain the proportion of edge zone/pod health statuses over a period of time
       *
       * @param request GetHealthPercentageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHealthPercentageResponse
       */
      Models::GetHealthPercentageResponse getHealthPercentageWithOptions(const Models::GetHealthPercentageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the proportion of edge zone/pod health statuses over a period of time
       *
       * @param request GetHealthPercentageRequest
       * @return GetHealthPercentageResponse
       */
      Models::GetHealthPercentageResponse getHealthPercentage(const Models::GetHealthPercentageRequest &request);

      /**
       * @summary Obtain the number of edge zones in a cluster or the number of pods in an edge zone
       *
       * @param request GetHostCountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHostCountResponse
       */
      Models::GetHostCountResponse getHostCountWithOptions(const Models::GetHostCountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the number of edge zones in a cluster or the number of pods in an edge zone
       *
       * @param request GetHostCountRequest
       * @return GetHostCountResponse
       */
      Models::GetHostCountResponse getHostCount(const Models::GetHostCountRequest &request);

      /**
       * @summary Obtain the list of a specific field under an instance.
       *
       * @param request GetHotSpotUniqListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotSpotUniqListResponse
       */
      Models::GetHotSpotUniqListResponse getHotSpotUniqListWithOptions(const Models::GetHotSpotUniqListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the list of a specific field under an instance.
       *
       * @param request GetHotSpotUniqListRequest
       * @return GetHotSpotUniqListResponse
       */
      Models::GetHotSpotUniqListResponse getHotSpotUniqList(const Models::GetHotSpotUniqListRequest &request);

      /**
       * @summary Obtain hot spot analysis results
       *
       * @param request GetHotspotAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotAnalysisResponse
       */
      Models::GetHotspotAnalysisResponse getHotspotAnalysisWithOptions(const Models::GetHotspotAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain hot spot analysis results
       *
       * @param request GetHotspotAnalysisRequest
       * @return GetHotspotAnalysisResponse
       */
      Models::GetHotspotAnalysisResponse getHotspotAnalysis(const Models::GetHotspotAnalysisRequest &request);

      /**
       * @summary Obtain hot spot comparison tracing results
       *
       * @param request GetHotspotCompareRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotCompareResponse
       */
      Models::GetHotspotCompareResponse getHotspotCompareWithOptions(const Models::GetHotspotCompareRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain hot spot comparison tracing results
       *
       * @param request GetHotspotCompareRequest
       * @return GetHotspotCompareResponse
       */
      Models::GetHotspotCompareResponse getHotspotCompare(const Models::GetHotspotCompareRequest &request);

      /**
       * @summary Obtain the hot spot instance list
       *
       * @param request GetHotspotInstanceListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotInstanceListResponse
       */
      Models::GetHotspotInstanceListResponse getHotspotInstanceListWithOptions(const Models::GetHotspotInstanceListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the hot spot instance list
       *
       * @param request GetHotspotInstanceListRequest
       * @return GetHotspotInstanceListResponse
       */
      Models::GetHotspotInstanceListResponse getHotspotInstanceList(const Models::GetHotspotInstanceListRequest &request);

      /**
       * @summary Obtain the PID list of a specific instance
       *
       * @param request GetHotspotPidListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotPidListResponse
       */
      Models::GetHotspotPidListResponse getHotspotPidListWithOptions(const Models::GetHotspotPidListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the PID list of a specific instance
       *
       * @param request GetHotspotPidListRequest
       * @return GetHotspotPidListResponse
       */
      Models::GetHotspotPidListResponse getHotspotPidList(const Models::GetHotspotPidListRequest &request);

      /**
       * @summary Obtain hot spot tracing results
       *
       * @param request GetHotspotTrackingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotTrackingResponse
       */
      Models::GetHotspotTrackingResponse getHotspotTrackingWithOptions(const Models::GetHotspotTrackingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain hot spot tracing results
       *
       * @param request GetHotspotTrackingRequest
       * @return GetHotspotTrackingResponse
       */
      Models::GetHotspotTrackingResponse getHotspotTracking(const Models::GetHotspotTrackingRequest &request);

      /**
       * @summary 获取巡检报告
       *
       * @param request GetInspectionReportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInspectionReportResponse
       */
      Models::GetInspectionReportResponse getInspectionReportWithOptions(const Models::GetInspectionReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取巡检报告
       *
       * @param request GetInspectionReportRequest
       * @return GetInspectionReportResponse
       */
      Models::GetInspectionReportResponse getInspectionReport(const Models::GetInspectionReportRequest &request);

      /**
       * @summary Obtain real-time cluster/edge zone health degree score
       *
       * @param request GetInstantScoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstantScoreResponse
       */
      Models::GetInstantScoreResponse getInstantScoreWithOptions(const Models::GetInstantScoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain real-time cluster/edge zone health degree score
       *
       * @param request GetInstantScoreRequest
       * @return GetInstantScoreResponse
       */
      Models::GetInstantScoreResponse getInstantScore(const Models::GetInstantScoreRequest &request);

      /**
       * @summary AI Infra retrieves the list of analysis records
       *
       * @param request GetListRecordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetListRecordResponse
       */
      Models::GetListRecordResponse getListRecordWithOptions(const Models::GetListRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI Infra retrieves the list of analysis records
       *
       * @param request GetListRecordRequest
       * @return GetListRecordResponse
       */
      Models::GetListRecordResponse getListRecord(const Models::GetListRecordRequest &request);

      /**
       * @summary Obtain the proportion of abnormal issues in pods within edge zones or in an edge zone within a cluster over a specified period of time.
       *
       * @param request GetProblemPercentageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProblemPercentageResponse
       */
      Models::GetProblemPercentageResponse getProblemPercentageWithOptions(const Models::GetProblemPercentageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the proportion of abnormal issues in pods within edge zones or in an edge zone within a cluster over a specified period of time.
       *
       * @param request GetProblemPercentageRequest
       * @return GetProblemPercentageResponse
       */
      Models::GetProblemPercentageResponse getProblemPercentage(const Models::GetProblemPercentageRequest &request);

      /**
       * @summary Retrieve the health score trend
       *
       * @param request GetRangeScoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRangeScoreResponse
       */
      Models::GetRangeScoreResponse getRangeScoreWithOptions(const Models::GetRangeScoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the health score trend
       *
       * @param request GetRangeScoreRequest
       * @return GetRangeScoreResponse
       */
      Models::GetRangeScoreResponse getRangeScore(const Models::GetRangeScoreRequest &request);

      /**
       * @summary Obtain real-time resource usage of clusters or edge zones
       *
       * @param request GetResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourcesResponse
       */
      Models::GetResourcesResponse getResourcesWithOptions(const Models::GetResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain real-time resource usage of clusters or edge zones
       *
       * @param request GetResourcesRequest
       * @return GetResourcesResponse
       */
      Models::GetResourcesResponse getResources(const Models::GetResourcesRequest &request);

      /**
       * @summary Obtain Function Modules Configuration
       *
       * @description This API is used to retrieve the service configuration status.
       *
       * @param tmpReq GetServiceFuncStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceFuncStatusResponse
       */
      Models::GetServiceFuncStatusResponse getServiceFuncStatusWithOptions(const Models::GetServiceFuncStatusRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain Function Modules Configuration
       *
       * @description This API is used to retrieve the service configuration status.
       *
       * @param request GetServiceFuncStatusRequest
       * @return GetServiceFuncStatusResponse
       */
      Models::GetServiceFuncStatusResponse getServiceFuncStatus(const Models::GetServiceFuncStatusRequest &request);

      /**
       * @summary This API queries the task execution status and diagnosis result based on the job ID.
       *
       * @param request GetVmcoreDiagnosisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVmcoreDiagnosisTaskResponse
       */
      Models::GetVmcoreDiagnosisTaskResponse getVmcoreDiagnosisTaskWithOptions(const Models::GetVmcoreDiagnosisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API queries the task execution status and diagnosis result based on the job ID.
       *
       * @param request GetVmcoreDiagnosisTaskRequest
       * @return GetVmcoreDiagnosisTaskResponse
       */
      Models::GetVmcoreDiagnosisTaskResponse getVmcoreDiagnosisTask(const Models::GetVmcoreDiagnosisTaskRequest &request);

      /**
       * @summary Initialize SysOM and ensure that the service role exists.
       *
       * @description Some SysOM APIs require role assumption based on the `AliyunServiceRoleForSysom` service role. Therefore, before using SysOM features, you must invoke this API to perform initialization and ensure that the service role has been created.  
       * - `check_only`: If this parameter is set to True, the API only checks whether the service role exists and does not create it. If this parameter is set to False or omitted, the API automatically creates the service role if it does not exist.
       * >  
       * > Note: When you invoke this API to initialize the role, you are deemed to have accepted the User Agreement of the operating system console by default. For more information, see [Overview of the Operating System Console](https://help.aliyun.com/zh/alinux/product-overview/os-console-overview?spm=a2c4g.11186623.help-menu-2632541.d_0_7.35a829ffLjQtgg) and [Alibaba Cloud Service Trial Terms](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud202001091714_51956.html).
       *
       * @param request InitialSysomRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitialSysomResponse
       */
      Models::InitialSysomResponse initialSysomWithOptions(const Models::InitialSysomRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initialize SysOM and ensure that the service role exists.
       *
       * @description Some SysOM APIs require role assumption based on the `AliyunServiceRoleForSysom` service role. Therefore, before using SysOM features, you must invoke this API to perform initialization and ensure that the service role has been created.  
       * - `check_only`: If this parameter is set to True, the API only checks whether the service role exists and does not create it. If this parameter is set to False or omitted, the API automatically creates the service role if it does not exist.
       * >  
       * > Note: When you invoke this API to initialize the role, you are deemed to have accepted the User Agreement of the operating system console by default. For more information, see [Overview of the Operating System Console](https://help.aliyun.com/zh/alinux/product-overview/os-console-overview?spm=a2c4g.11186623.help-menu-2632541.d_0_7.35a829ffLjQtgg) and [Alibaba Cloud Service Trial Terms](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud202001091714_51956.html).
       *
       * @param request InitialSysomRequest
       * @return InitialSysomResponse
       */
      Models::InitialSysomResponse initialSysom(const Models::InitialSysomRequest &request);

      /**
       * @summary Install an agent on the specified instance
       *
       * @description The API call to install an agent is asynchronous. After invoking this API, a task_id is returned. You can use this ID to invoke the GetAgentTask API to retrieve the job execution status.
       *
       * @param request InstallAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAgentResponse
       */
      Models::InstallAgentResponse installAgentWithOptions(const Models::InstallAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Install an agent on the specified instance
       *
       * @description The API call to install an agent is asynchronous. After invoking this API, a task_id is returned. You can use this ID to invoke the GetAgentTask API to retrieve the job execution status.
       *
       * @param request InstallAgentRequest
       * @return InstallAgentResponse
       */
      Models::InstallAgentResponse installAgent(const Models::InstallAgentRequest &request);

      /**
       * @summary Install widgets on a cluster
       *
       * @description After you install widgets on the specified ACK cluster:  
       * 1. When the cluster is first enrolled, widgets are installed on all ECS instances in the cluster (if the cluster contains more than 50 nodes, widgets are installed on only 50 nodes in the first batch).  
       * 2. The operating system console periodically checks for scale-in or scale-out events in the enrolled cluster. Whenever new ECS instances are added to the cluster, the operating system console automatically installs widgets on them without requiring user intervention.
       *
       * @param request InstallAgentForClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAgentForClusterResponse
       */
      Models::InstallAgentForClusterResponse installAgentForClusterWithOptions(const Models::InstallAgentForClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Install widgets on a cluster
       *
       * @description After you install widgets on the specified ACK cluster:  
       * 1. When the cluster is first enrolled, widgets are installed on all ECS instances in the cluster (if the cluster contains more than 50 nodes, widgets are installed on only 50 nodes in the first batch).  
       * 2. The operating system console periodically checks for scale-in or scale-out events in the enrolled cluster. Whenever new ECS instances are added to the cluster, the operating system console automatically installs widgets on them without requiring user intervention.
       *
       * @param request InstallAgentForClusterRequest
       * @return InstallAgentForClusterResponse
       */
      Models::InstallAgentForClusterResponse installAgentForCluster(const Models::InstallAgentForClusterRequest &request);

      /**
       * @summary Initiate diagnosis for anomalous activity
       *
       * @param request InvokeAnomalyDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeAnomalyDiagnosisResponse
       */
      Models::InvokeAnomalyDiagnosisResponse invokeAnomalyDiagnosisWithOptions(const Models::InvokeAnomalyDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiate diagnosis for anomalous activity
       *
       * @param request InvokeAnomalyDiagnosisRequest
       * @return InvokeAnomalyDiagnosisResponse
       */
      Models::InvokeAnomalyDiagnosisResponse invokeAnomalyDiagnosis(const Models::InvokeAnomalyDiagnosisRequest &request);

      /**
       * @summary Initiate a diagnosis.
       *
       * @description Diagnosing the target ECS instance has the following requirements:  
       * - The instance status of the target ECS instance must be running.  
       * - The Cloud Assistant Agent must already be installed on the target ECS instance. If it is not installed, install it by referring to [Install the Cloud Assistant Agent](https://help.aliyun.com/zh/ecs/user-guide/install-the-cloud-assistant-agent).  
       * - You must invoke the AuthDiagnosis API to authorize SysOM to diagnose the target ECS instance. If this authorization is not granted, the API call will fail immediately.  
       * - This API depends on the existence of the SysOM service-linked role (AliyunServiceRoleForSysom). This API does not create the service-linked role automatically. If the service-linked role does not exist, you must first call AuthDiagnosis to perform authorization, which will create the aforementioned service-linked role.
       *
       * @param request InvokeDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeDiagnosisResponse
       */
      Models::InvokeDiagnosisResponse invokeDiagnosisWithOptions(const Models::InvokeDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiate a diagnosis.
       *
       * @description Diagnosing the target ECS instance has the following requirements:  
       * - The instance status of the target ECS instance must be running.  
       * - The Cloud Assistant Agent must already be installed on the target ECS instance. If it is not installed, install it by referring to [Install the Cloud Assistant Agent](https://help.aliyun.com/zh/ecs/user-guide/install-the-cloud-assistant-agent).  
       * - You must invoke the AuthDiagnosis API to authorize SysOM to diagnose the target ECS instance. If this authorization is not granted, the API call will fail immediately.  
       * - This API depends on the existence of the SysOM service-linked role (AliyunServiceRoleForSysom). This API does not create the service-linked role automatically. If the service-linked role does not exist, you must first call AuthDiagnosis to perform authorization, which will create the aforementioned service-linked role.
       *
       * @param request InvokeDiagnosisRequest
       * @return InvokeDiagnosisResponse
       */
      Models::InvokeDiagnosisResponse invokeDiagnosis(const Models::InvokeDiagnosisRequest &request);

      /**
       * @summary Obtain anomalous activity information for clusters, edge zones, or pods within a specified time period.
       *
       * @param request ListAbnormalyEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAbnormalyEventsResponse
       */
      Models::ListAbnormalyEventsResponse listAbnormalyEventsWithOptions(const Models::ListAbnormalyEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain anomalous activity information for clusters, edge zones, or pods within a specified time period.
       *
       * @param request ListAbnormalyEventsRequest
       * @return ListAbnormalyEventsResponse
       */
      Models::ListAbnormalyEventsResponse listAbnormalyEvents(const Models::ListAbnormalyEventsRequest &request);

      /**
       * @summary List installation records of the agent
       *
       * @param request ListAgentInstallRecordsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentInstallRecordsResponse
       */
      Models::ListAgentInstallRecordsResponse listAgentInstallRecordsWithOptions(const Models::ListAgentInstallRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List installation records of the agent
       *
       * @param request ListAgentInstallRecordsRequest
       * @return ListAgentInstallRecordsResponse
       */
      Models::ListAgentInstallRecordsResponse listAgentInstallRecords(const Models::ListAgentInstallRecordsRequest &request);

      /**
       * @summary Retrieve the Agent List
       *
       * @param request ListAgentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgentsWithOptions(const Models::ListAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the Agent List
       *
       * @param request ListAgentsRequest
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgents(const Models::ListAgentsRequest &request);

      /**
       * @summary This API is used to obtain the alert contact list.
       *
       * @param request ListAlertDestinationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertDestinationsResponse
       */
      Models::ListAlertDestinationsResponse listAlertDestinationsWithOptions(const Models::ListAlertDestinationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to obtain the alert contact list.
       *
       * @param request ListAlertDestinationsRequest
       * @return ListAlertDestinationsResponse
       */
      Models::ListAlertDestinationsResponse listAlertDestinations(const Models::ListAlertDestinationsRequest &request);

      /**
       * @summary Retrieve all alerting items
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertItemsResponse
       */
      Models::ListAlertItemsResponse listAlertItemsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve all alerting items
       *
       * @return ListAlertItemsResponse
       */
      Models::ListAlertItemsResponse listAlertItems();

      /**
       * @summary Used to obtain all alert policies for push notifications of a user
       *
       * @param request ListAlertStrategiesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertStrategiesResponse
       */
      Models::ListAlertStrategiesResponse listAlertStrategiesWithOptions(const Models::ListAlertStrategiesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Used to obtain all alert policies for push notifications of a user
       *
       * @param request ListAlertStrategiesRequest
       * @return ListAlertStrategiesResponse
       */
      Models::ListAlertStrategiesResponse listAlertStrategies(const Models::ListAlertStrategiesRequest &request);

      /**
       * @summary This API is used to obtain a list of managed or unmanaged instances along with instance information.
       *
       * @param request ListAllInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllInstancesResponse
       */
      Models::ListAllInstancesResponse listAllInstancesWithOptions(const Models::ListAllInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to obtain a list of managed or unmanaged instances along with instance information.
       *
       * @param request ListAllInstancesRequest
       * @return ListAllInstancesResponse
       */
      Models::ListAllInstancesResponse listAllInstances(const Models::ListAllInstancesRequest &request);

      /**
       * @summary Obtain cluster widget installation records
       *
       * @param request ListClusterAgentInstallRecordsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterAgentInstallRecordsResponse
       */
      Models::ListClusterAgentInstallRecordsResponse listClusterAgentInstallRecordsWithOptions(const Models::ListClusterAgentInstallRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain cluster widget installation records
       *
       * @param request ListClusterAgentInstallRecordsRequest
       * @return ListClusterAgentInstallRecordsResponse
       */
      Models::ListClusterAgentInstallRecordsResponse listClusterAgentInstallRecords(const Models::ListClusterAgentInstallRecordsRequest &request);

      /**
       * @summary Retrieve all clusters managed by the current user
       *
       * @param request ListClustersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClustersWithOptions(const Models::ListClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve all clusters managed by the current user
       *
       * @param request ListClustersRequest
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClusters(const Models::ListClustersRequest &request);

      /**
       * @summary Obtain the diagnosis history list.
       *
       * @param request ListDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiagnosisResponse
       */
      Models::ListDiagnosisResponse listDiagnosisWithOptions(const Models::ListDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the diagnosis history list.
       *
       * @param request ListDiagnosisRequest
       * @return ListDiagnosisResponse
       */
      Models::ListDiagnosisResponse listDiagnosis(const Models::ListDiagnosisRequest &request);

      /**
       * @summary Obtain a list of cluster node or pod health scores within a specified time period.
       *
       * @param request ListInstanceHealthRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceHealthResponse
       */
      Models::ListInstanceHealthResponse listInstanceHealthWithOptions(const Models::ListInstanceHealthRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain a list of cluster node or pod health scores within a specified time period.
       *
       * @param request ListInstanceHealthRequest
       * @return ListInstanceHealthResponse
       */
      Models::ListInstanceHealthResponse listInstanceHealth(const Models::ListInstanceHealthRequest &request);

      /**
       * @summary Obtain instance status
       *
       * @description This API is used to obtain the list of machines managed by SysOM.
       *
       * @param request ListInstanceStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceStatusResponse
       */
      Models::ListInstanceStatusResponse listInstanceStatusWithOptions(const Models::ListInstanceStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain instance status
       *
       * @description This API is used to obtain the list of machines managed by SysOM.
       *
       * @param request ListInstanceStatusRequest
       * @return ListInstanceStatusResponse
       */
      Models::ListInstanceStatusResponse listInstanceStatus(const Models::ListInstanceStatusRequest &request);

      /**
       * @summary Obtain the instance list
       *
       * @description The instance list returned by this API includes only the machines that have been managed by SysOM. If an ECS instance exists but has not been managed by SysOM, it will not appear in the list.
       *
       * @param request ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the instance list
       *
       * @description The instance list returned by this API includes only the machines that have been managed by SysOM. If an ECS instance exists but has not been managed by SysOM, it will not appear in the list.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Obtain a list of ECS information, such as the tag list, public IP address list, and so on.
       *
       * @description The instance list returned by this API includes only machines that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it will not appear in the list.
       *
       * @param request ListInstancesEcsInfoListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesEcsInfoListResponse
       */
      Models::ListInstancesEcsInfoListResponse listInstancesEcsInfoListWithOptions(const Models::ListInstancesEcsInfoListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain a list of ECS information, such as the tag list, public IP address list, and so on.
       *
       * @description The instance list returned by this API includes only machines that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it will not appear in the list.
       *
       * @param request ListInstancesEcsInfoListRequest
       * @return ListInstancesEcsInfoListResponse
       */
      Models::ListInstancesEcsInfoListResponse listInstancesEcsInfoList(const Models::ListInstancesEcsInfoListRequest &request);

      /**
       * @summary Obtain information about managed or unmanaged instances, including ECS information.
       *
       * @description The current API returns a list of instances that have already been managed by SysOM. If an ECS instance exists but has not been managed by SysOM, it will not appear in the list.
       *
       * @param tmpReq ListInstancesWithEcsInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesWithEcsInfoResponse
       */
      Models::ListInstancesWithEcsInfoResponse listInstancesWithEcsInfoWithOptions(const Models::ListInstancesWithEcsInfoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain information about managed or unmanaged instances, including ECS information.
       *
       * @description The current API returns a list of instances that have already been managed by SysOM. If an ECS instance exists but has not been managed by SysOM, it will not appear in the list.
       *
       * @param request ListInstancesWithEcsInfoRequest
       * @return ListInstancesWithEcsInfoResponse
       */
      Models::ListInstancesWithEcsInfoResponse listInstancesWithEcsInfo(const Models::ListInstancesWithEcsInfoRequest &request);

      /**
       * @summary Obtain the list of instances for plugin installation, update, or uninstallation
       *
       * @description The instance list returned by this API consists of machines that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it will not appear in the list.
       *
       * @param request ListPluginsInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginsInstancesResponse
       */
      Models::ListPluginsInstancesResponse listPluginsInstancesWithOptions(const Models::ListPluginsInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the list of instances for plugin installation, update, or uninstallation
       *
       * @description The instance list returned by this API consists of machines that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it will not appear in the list.
       *
       * @param request ListPluginsInstancesRequest
       * @return ListPluginsInstancesResponse
       */
      Models::ListPluginsInstancesResponse listPluginsInstances(const Models::ListPluginsInstancesRequest &request);

      /**
       * @summary Retrieve the list of pods in a cluster or instance
       *
       * @param request ListPodsOfInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPodsOfInstanceResponse
       */
      Models::ListPodsOfInstanceResponse listPodsOfInstanceWithOptions(const Models::ListPodsOfInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of pods in a cluster or instance
       *
       * @param request ListPodsOfInstanceRequest
       * @return ListPodsOfInstanceResponse
       */
      Models::ListPodsOfInstanceResponse listPodsOfInstance(const Models::ListPodsOfInstanceRequest &request);

      /**
       * @summary List all areas where machines are managed
       *
       * @description This API retrieves the list of areas where the current user has machines managed by SysOM. If the user has ECS instances in an area but those instances are not managed by SysOM, that area will not appear in the API response.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List all areas where machines are managed
       *
       * @description This API retrieves the list of areas where the current user has machines managed by SysOM. If the user has ECS instances in an area but those instances are not managed by SysOM, that area will not appear in the API response.
       *
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions();

      /**
       * @summary Query the history list of breakdown diagnosis jobs.
       *
       * @param request ListVmcoreDiagnosisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVmcoreDiagnosisTaskResponse
       */
      Models::ListVmcoreDiagnosisTaskResponse listVmcoreDiagnosisTaskWithOptions(const Models::ListVmcoreDiagnosisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the history list of breakdown diagnosis jobs.
       *
       * @param request ListVmcoreDiagnosisTaskRequest
       * @return ListVmcoreDiagnosisTaskResponse
       */
      Models::ListVmcoreDiagnosisTaskResponse listVmcoreDiagnosisTask(const Models::ListVmcoreDiagnosisTaskRequest &request);

      /**
       * @summary Start an AI job analysis.
       *
       * @param request StartAIAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAIAnalysisResponse
       */
      Models::StartAIAnalysisResponse startAIAnalysisWithOptions(const Models::StartAIAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start an AI job analysis.
       *
       * @param request StartAIAnalysisRequest
       * @return StartAIAnalysisResponse
       */
      Models::StartAIAnalysisResponse startAIAnalysis(const Models::StartAIAnalysisRequest &request);

      /**
       * @summary Start AI Infra differential analysis.
       *
       * @description Currently, only comparative analysis between different steps under the same AI Infra analysis record and the same pid is supported.
       *
       * @param request StartAIDiffAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAIDiffAnalysisResponse
       */
      Models::StartAIDiffAnalysisResponse startAIDiffAnalysisWithOptions(const Models::StartAIDiffAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start AI Infra differential analysis.
       *
       * @description Currently, only comparative analysis between different steps under the same AI Infra analysis record and the same pid is supported.
       *
       * @param request StartAIDiffAnalysisRequest
       * @return StartAIDiffAnalysisResponse
       */
      Models::StartAIDiffAnalysisResponse startAIDiffAnalysis(const Models::StartAIDiffAnalysisRequest &request);

      /**
       * @summary Uninstall a specified version of the widget
       *
       * @description The API call to uninstall an Agent is asynchronous. After invoking this API, a task_id is returned. You can use this ID to invoke the GetAgentTask API to retrieve the execution status of the job.
       *
       * @param request UninstallAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallAgentResponse
       */
      Models::UninstallAgentResponse uninstallAgentWithOptions(const Models::UninstallAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstall a specified version of the widget
       *
       * @description The API call to uninstall an Agent is asynchronous. After invoking this API, a task_id is returned. You can use this ID to invoke the GetAgentTask API to retrieve the execution status of the job.
       *
       * @param request UninstallAgentRequest
       * @return UninstallAgentResponse
       */
      Models::UninstallAgentResponse uninstallAgent(const Models::UninstallAgentRequest &request);

      /**
       * @summary Uninstall a widget from a cluster
       *
       * @param request UninstallAgentForClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallAgentForClusterResponse
       */
      Models::UninstallAgentForClusterResponse uninstallAgentForClusterWithOptions(const Models::UninstallAgentForClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstall a widget from a cluster
       *
       * @param request UninstallAgentForClusterRequest
       * @return UninstallAgentForClusterResponse
       */
      Models::UninstallAgentForClusterResponse uninstallAgentForCluster(const Models::UninstallAgentForClusterRequest &request);

      /**
       * @summary This API is used to update an alert contact.
       *
       * @description 、
       *
       * @param request UpdateAlertDestinationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertDestinationResponse
       */
      Models::UpdateAlertDestinationResponse updateAlertDestinationWithOptions(const Models::UpdateAlertDestinationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to update an alert contact.
       *
       * @description 、
       *
       * @param request UpdateAlertDestinationRequest
       * @return UpdateAlertDestinationResponse
       */
      Models::UpdateAlertDestinationResponse updateAlertDestination(const Models::UpdateAlertDestinationRequest &request);

      /**
       * @summary User updates the status of a push alert policy
       *
       * @param request UpdateAlertEnabledRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertEnabledResponse
       */
      Models::UpdateAlertEnabledResponse updateAlertEnabledWithOptions(const Models::UpdateAlertEnabledRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary User updates the status of a push alert policy
       *
       * @param request UpdateAlertEnabledRequest
       * @return UpdateAlertEnabledResponse
       */
      Models::UpdateAlertEnabledResponse updateAlertEnabled(const Models::UpdateAlertEnabledRequest &request);

      /**
       * @summary Update push alert policy
       *
       * @param request UpdateAlertStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertStrategyResponse
       */
      Models::UpdateAlertStrategyResponse updateAlertStrategyWithOptions(const Models::UpdateAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update push alert policy
       *
       * @param request UpdateAlertStrategyRequest
       * @return UpdateAlertStrategyResponse
       */
      Models::UpdateAlertStrategyResponse updateAlertStrategy(const Models::UpdateAlertStrategyRequest &request);

      /**
       * @summary Update the follow level of an anomalous activity to adjust the sensitivity of the anomaly detection algorithm by modifying the follow level.
       *
       * @param request UpdateEventsAttentionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEventsAttentionResponse
       */
      Models::UpdateEventsAttentionResponse updateEventsAttentionWithOptions(const Models::UpdateEventsAttentionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the follow level of an anomalous activity to adjust the sensitivity of the anomaly detection algorithm by modifying the follow level.
       *
       * @param request UpdateEventsAttentionRequest
       * @return UpdateEventsAttentionResponse
       */
      Models::UpdateEventsAttentionResponse updateEventsAttention(const Models::UpdateEventsAttentionRequest &request);

      /**
       * @summary Update the service function module configuration.
       *
       * @description - You must fill in the parameters according to the input parameters of the general LLM service, convert them to a string, and assign the result to `llmParamString`.  
       * - To use the returned data, convert the string back to a dictionary, following the response format of the general LLM service.
       *
       * @param tmpReq UpdateFuncSwitchRecordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFuncSwitchRecordResponse
       */
      Models::UpdateFuncSwitchRecordResponse updateFuncSwitchRecordWithOptions(const Models::UpdateFuncSwitchRecordRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the service function module configuration.
       *
       * @description - You must fill in the parameters according to the input parameters of the general LLM service, convert them to a string, and assign the result to `llmParamString`.  
       * - To use the returned data, convert the string back to a dictionary, following the response format of the general LLM service.
       *
       * @param request UpdateFuncSwitchRecordRequest
       * @return UpdateFuncSwitchRecordResponse
       */
      Models::UpdateFuncSwitchRecordResponse updateFuncSwitchRecord(const Models::UpdateFuncSwitchRecordRequest &request);

      /**
       * @summary Update the version of the installed widget to the specified version.
       *
       * @description The API call to update the Agent is asynchronous. After invoking this API, a task_id is returned. You can use this ID to invoke the GetAgentTask API to retrieve the execution status of the job.
       *
       * @param request UpgradeAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeAgentResponse
       */
      Models::UpgradeAgentResponse upgradeAgentWithOptions(const Models::UpgradeAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the version of the installed widget to the specified version.
       *
       * @description The API call to update the Agent is asynchronous. After invoking this API, a task_id is returned. You can use this ID to invoke the GetAgentTask API to retrieve the execution status of the job.
       *
       * @param request UpgradeAgentRequest
       * @return UpgradeAgentResponse
       */
      Models::UpgradeAgentResponse upgradeAgent(const Models::UpgradeAgentRequest &request);

      /**
       * @summary Update widget for cluster
       *
       * @param request UpgradeAgentForClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeAgentForClusterResponse
       */
      Models::UpgradeAgentForClusterResponse upgradeAgentForClusterWithOptions(const Models::UpgradeAgentForClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update widget for cluster
       *
       * @param request UpgradeAgentForClusterRequest
       * @return UpgradeAgentForClusterResponse
       */
      Models::UpgradeAgentForClusterResponse upgradeAgentForCluster(const Models::UpgradeAgentForClusterRequest &request);
  };
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
