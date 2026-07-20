// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RISKMANAGEMENT20260424_HPP_
#define ALIBABACLOUD_RISKMANAGEMENT20260424_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/RiskManagement20260424Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/RiskManagement20260424.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary sas-绑定授权到机器
       *
       * @param tmpReq BindAuthToMachineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAuthToMachineResponse
       */
      Models::BindAuthToMachineResponse bindAuthToMachineWithOptions(const Models::BindAuthToMachineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary sas-绑定授权到机器
       *
       * @param request BindAuthToMachineRequest
       * @return BindAuthToMachineResponse
       */
      Models::BindAuthToMachineResponse bindAuthToMachine(const Models::BindAuthToMachineRequest &request);

      /**
       * @summary sas-初始化云安全中心模块规则
       *
       * @param tmpReq CreateSasTrialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSasTrialResponse
       */
      Models::CreateSasTrialResponse createSasTrialWithOptions(const Models::CreateSasTrialRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary sas-初始化云安全中心模块规则
       *
       * @param request CreateSasTrialRequest
       * @return CreateSasTrialResponse
       */
      Models::CreateSasTrialResponse createSasTrial(const Models::CreateSasTrialRequest &request);

      /**
       * @summary sas-创建服务关联角色
       *
       * @param tmpReq CreateServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const Models::CreateServiceLinkedRoleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary sas-创建服务关联角色
       *
       * @param request CreateServiceLinkedRoleRequest
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole(const Models::CreateServiceLinkedRoleRequest &request);

      /**
       * @summary 创建全盘扫描任务
       *
       * @param request CreateVirusScanOnceTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirusScanOnceTaskResponse
       */
      Models::CreateVirusScanOnceTaskResponse createVirusScanOnceTaskWithOptions(const Models::CreateVirusScanOnceTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建全盘扫描任务
       *
       * @param request CreateVirusScanOnceTaskRequest
       * @return CreateVirusScanOnceTaskResponse
       */
      Models::CreateVirusScanOnceTaskResponse createVirusScanOnceTask(const Models::CreateVirusScanOnceTaskRequest &request);

      /**
       * @summary sas-查询云安全中心实例列表
       *
       * @param tmpReq DescribeCloudCenterInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudCenterInstancesResponse
       */
      Models::DescribeCloudCenterInstancesResponse describeCloudCenterInstancesWithOptions(const Models::DescribeCloudCenterInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary sas-查询云安全中心实例列表
       *
       * @param request DescribeCloudCenterInstancesRequest
       * @return DescribeCloudCenterInstancesResponse
       */
      Models::DescribeCloudCenterInstancesResponse describeCloudCenterInstances(const Models::DescribeCloudCenterInstancesRequest &request);

      /**
       * @summary sas-查询服务关联角色状态
       *
       * @param tmpReq DescribeServiceLinkedRoleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceLinkedRoleStatusResponse
       */
      Models::DescribeServiceLinkedRoleStatusResponse describeServiceLinkedRoleStatusWithOptions(const Models::DescribeServiceLinkedRoleStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary sas-查询服务关联角色状态
       *
       * @param request DescribeServiceLinkedRoleStatusRequest
       * @return DescribeServiceLinkedRoleStatusResponse
       */
      Models::DescribeServiceLinkedRoleStatusResponse describeServiceLinkedRoleStatus(const Models::DescribeServiceLinkedRoleStatusRequest &request);

      /**
       * @summary sas-查询安全告警事件
       *
       * @param tmpReq DescribeSuspEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSuspEventsResponse
       */
      Models::DescribeSuspEventsResponse describeSuspEventsWithOptions(const Models::DescribeSuspEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary sas-查询安全告警事件
       *
       * @param request DescribeSuspEventsRequest
       * @return DescribeSuspEventsResponse
       */
      Models::DescribeSuspEventsResponse describeSuspEvents(const Models::DescribeSuspEventsRequest &request);

      /**
       * @summary sas-查看已购买的云安全中心实例的版本详情
       *
       * @param tmpReq DescribeVersionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVersionConfigResponse
       */
      Models::DescribeVersionConfigResponse describeVersionConfigWithOptions(const Models::DescribeVersionConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary sas-查看已购买的云安全中心实例的版本详情
       *
       * @param request DescribeVersionConfigRequest
       * @return DescribeVersionConfigResponse
       */
      Models::DescribeVersionConfigResponse describeVersionConfig(const Models::DescribeVersionConfigRequest &request);

      /**
       * @summary 获取告警记录分析结果
       *
       * @param tmpReq GetAlertRecordAnalysisResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlertRecordAnalysisResultResponse
       */
      Models::GetAlertRecordAnalysisResultResponse getAlertRecordAnalysisResultWithOptions(const Models::GetAlertRecordAnalysisResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取告警记录分析结果
       *
       * @param request GetAlertRecordAnalysisResultRequest
       * @return GetAlertRecordAnalysisResultResponse
       */
      Models::GetAlertRecordAnalysisResultResponse getAlertRecordAnalysisResult(const Models::GetAlertRecordAnalysisResultRequest &request);

      /**
       * @summary 调用云安全中心部分接口
       *
       * @param tmpReq GetAliYunSafeCenterResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAliYunSafeCenterResultResponse
       */
      Models::GetAliYunSafeCenterResultResponse getAliYunSafeCenterResultWithOptions(const Models::GetAliYunSafeCenterResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用云安全中心部分接口
       *
       * @param request GetAliYunSafeCenterResultRequest
       * @return GetAliYunSafeCenterResultResponse
       */
      Models::GetAliYunSafeCenterResultResponse getAliYunSafeCenterResult(const Models::GetAliYunSafeCenterResultRequest &request);

      /**
       * @summary sas-获取能否试用
       *
       * @param tmpReq GetCanTrySasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCanTrySasResponse
       */
      Models::GetCanTrySasResponse getCanTrySasWithOptions(const Models::GetCanTrySasRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary sas-获取能否试用
       *
       * @param request GetCanTrySasRequest
       * @return GetCanTrySasResponse
       */
      Models::GetCanTrySasResponse getCanTrySas(const Models::GetCanTrySasRequest &request);

      /**
       * @summary 获取安全合规包id
       *
       * @param request GetCompliancePackIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCompliancePackIdResponse
       */
      Models::GetCompliancePackIdResponse getCompliancePackIdWithOptions(const Models::GetCompliancePackIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取安全合规包id
       *
       * @param request GetCompliancePackIdRequest
       * @return GetCompliancePackIdResponse
       */
      Models::GetCompliancePackIdResponse getCompliancePackId(const Models::GetCompliancePackIdRequest &request);

      /**
       * @summary 获取一键处置赋权状态
       *
       * @param request GetDisposalToolStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDisposalToolStatusResponse
       */
      Models::GetDisposalToolStatusResponse getDisposalToolStatusWithOptions(const Models::GetDisposalToolStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一键处置赋权状态
       *
       * @param request GetDisposalToolStatusRequest
       * @return GetDisposalToolStatusResponse
       */
      Models::GetDisposalToolStatusResponse getDisposalToolStatus(const Models::GetDisposalToolStatusRequest &request);

      /**
       * @summary 获取用户确认安全联系人记录
       *
       * @param request GetNotificationClickRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNotificationClickRecordResponse
       */
      Models::GetNotificationClickRecordResponse getNotificationClickRecordWithOptions(const Models::GetNotificationClickRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户确认安全联系人记录
       *
       * @param request GetNotificationClickRecordRequest
       * @return GetNotificationClickRecordResponse
       */
      Models::GetNotificationClickRecordResponse getNotificationClickRecord(const Models::GetNotificationClickRecordRequest &request);

      /**
       * @summary 获取安全联系人全部信息
       *
       * @param request GetNotificationContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNotificationContactsResponse
       */
      Models::GetNotificationContactsResponse getNotificationContactsWithOptions(const Models::GetNotificationContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取安全联系人全部信息
       *
       * @param request GetNotificationContactsRequest
       * @return GetNotificationContactsResponse
       */
      Models::GetNotificationContactsResponse getNotificationContacts(const Models::GetNotificationContactsRequest &request);

      /**
       * @summary 获取安全联系人待处理数
       *
       * @param request GetNotificationPendNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNotificationPendNumberResponse
       */
      Models::GetNotificationPendNumberResponse getNotificationPendNumberWithOptions(const Models::GetNotificationPendNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取安全联系人待处理数
       *
       * @param request GetNotificationPendNumberRequest
       * @return GetNotificationPendNumberResponse
       */
      Models::GetNotificationPendNumberResponse getNotificationPendNumber(const Models::GetNotificationPendNumberRequest &request);

      /**
       * @summary 查询云资源管控事件详情
       *
       * @param tmpReq GetResourceControlEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceControlEventResponse
       */
      Models::GetResourceControlEventResponse getResourceControlEventWithOptions(const Models::GetResourceControlEventRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云资源管控事件详情
       *
       * @param request GetResourceControlEventRequest
       * @return GetResourceControlEventResponse
       */
      Models::GetResourceControlEventResponse getResourceControlEvent(const Models::GetResourceControlEventRequest &request);

      /**
       * @summary 获取安全体检基础信息
       *
       * @param request GetSecurityCheckBaseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityCheckBaseInfoResponse
       */
      Models::GetSecurityCheckBaseInfoResponse getSecurityCheckBaseInfoWithOptions(const Models::GetSecurityCheckBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取安全体检基础信息
       *
       * @param request GetSecurityCheckBaseInfoRequest
       * @return GetSecurityCheckBaseInfoResponse
       */
      Models::GetSecurityCheckBaseInfoResponse getSecurityCheckBaseInfo(const Models::GetSecurityCheckBaseInfoRequest &request);

      /**
       * @summary 获取安全检查结果基础信息
       *
       * @param request GetSecurityCheckResultBaseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityCheckResultBaseInfoResponse
       */
      Models::GetSecurityCheckResultBaseInfoResponse getSecurityCheckResultBaseInfoWithOptions(const Models::GetSecurityCheckResultBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取安全检查结果基础信息
       *
       * @param request GetSecurityCheckResultBaseInfoRequest
       * @return GetSecurityCheckResultBaseInfoResponse
       */
      Models::GetSecurityCheckResultBaseInfoResponse getSecurityCheckResultBaseInfo(const Models::GetSecurityCheckResultBaseInfoRequest &request);

      /**
       * @summary 获取安全优化建议列表
       *
       * @param tmpReq GetSecuritySuggestionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecuritySuggestionListResponse
       */
      Models::GetSecuritySuggestionListResponse getSecuritySuggestionListWithOptions(const Models::GetSecuritySuggestionListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取安全优化建议列表
       *
       * @param request GetSecuritySuggestionListRequest
       * @return GetSecuritySuggestionListResponse
       */
      Models::GetSecuritySuggestionListResponse getSecuritySuggestionList(const Models::GetSecuritySuggestionListRequest &request);

      /**
       * @summary 获取安全优化建议条数
       *
       * @param request GetSecuritySuggestionNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecuritySuggestionNumberResponse
       */
      Models::GetSecuritySuggestionNumberResponse getSecuritySuggestionNumberWithOptions(const Models::GetSecuritySuggestionNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取安全优化建议条数
       *
       * @param request GetSecuritySuggestionNumberRequest
       * @return GetSecuritySuggestionNumberResponse
       */
      Models::GetSecuritySuggestionNumberResponse getSecuritySuggestionNumber(const Models::GetSecuritySuggestionNumberRequest &request);

      /**
       * @summary 获取服务关联角色状态
       *
       * @param request GetServiceLinkedRoleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceLinkedRoleStatusResponse
       */
      Models::GetServiceLinkedRoleStatusResponse getServiceLinkedRoleStatusWithOptions(const Models::GetServiceLinkedRoleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取服务关联角色状态
       *
       * @param request GetServiceLinkedRoleStatusRequest
       * @return GetServiceLinkedRoleStatusResponse
       */
      Models::GetServiceLinkedRoleStatusResponse getServiceLinkedRoleStatus(const Models::GetServiceLinkedRoleStatusRequest &request);

      /**
       * @summary sas-获取有效抵扣实例
       *
       * @param tmpReq GetValidDeductInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetValidDeductInstancesResponse
       */
      Models::GetValidDeductInstancesResponse getValidDeductInstancesWithOptions(const Models::GetValidDeductInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary sas-获取有效抵扣实例
       *
       * @param request GetValidDeductInstancesRequest
       * @return GetValidDeductInstancesResponse
       */
      Models::GetValidDeductInstancesResponse getValidDeductInstances(const Models::GetValidDeductInstancesRequest &request);

      /**
       * @summary sas-初始化云安全中心模块规则
       *
       * @param tmpReq InitSasModuleRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitSasModuleRuleResponse
       */
      Models::InitSasModuleRuleResponse initSasModuleRuleWithOptions(const Models::InitSasModuleRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary sas-初始化云安全中心模块规则
       *
       * @param request InitSasModuleRuleRequest
       * @return InitSasModuleRuleResponse
       */
      Models::InitSasModuleRuleResponse initSasModuleRule(const Models::InitSasModuleRuleRequest &request);

      /**
       * @summary 查询全盘扫描结果
       *
       * @param request ListVirusScanMachineEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirusScanMachineEventResponse
       */
      Models::ListVirusScanMachineEventResponse listVirusScanMachineEventWithOptions(const Models::ListVirusScanMachineEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询全盘扫描结果
       *
       * @param request ListVirusScanMachineEventRequest
       * @return ListVirusScanMachineEventResponse
       */
      Models::ListVirusScanMachineEventResponse listVirusScanMachineEvent(const Models::ListVirusScanMachineEventRequest &request);

      /**
       * @summary sas-开启试用套餐
       *
       * @param request OpenTrialPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenTrialPackageResponse
       */
      Models::OpenTrialPackageResponse openTrialPackageWithOptions(const Models::OpenTrialPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary sas-开启试用套餐
       *
       * @param request OpenTrialPackageRequest
       * @return OpenTrialPackageResponse
       */
      Models::OpenTrialPackageResponse openTrialPackage(const Models::OpenTrialPackageRequest &request);

      /**
       * @summary 查询账号安全事件
       *
       * @param request QueryAccountSafetyIncidentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountSafetyIncidentResponse
       */
      Models::QueryAccountSafetyIncidentResponse queryAccountSafetyIncidentWithOptions(const Models::QueryAccountSafetyIncidentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询账号安全事件
       *
       * @param request QueryAccountSafetyIncidentRequest
       * @return QueryAccountSafetyIncidentResponse
       */
      Models::QueryAccountSafetyIncidentResponse queryAccountSafetyIncident(const Models::QueryAccountSafetyIncidentRequest &request);

      /**
       * @summary 查询云上安全指南的订阅状态
       *
       * @param request QueryGuideSubStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGuideSubStatusResponse
       */
      Models::QueryGuideSubStatusResponse queryGuideSubStatusWithOptions(const Models::QueryGuideSubStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云上安全指南的订阅状态
       *
       * @param request QueryGuideSubStatusRequest
       * @return QueryGuideSubStatusResponse
       */
      Models::QueryGuideSubStatusResponse queryGuideSubStatus(const Models::QueryGuideSubStatusRequest &request);

      /**
       * @summary 查询云资源管控事件
       *
       * @param tmpReq QueryResourceControlEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryResourceControlEventsResponse
       */
      Models::QueryResourceControlEventsResponse queryResourceControlEventsWithOptions(const Models::QueryResourceControlEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云资源管控事件
       *
       * @param request QueryResourceControlEventsRequest
       * @return QueryResourceControlEventsResponse
       */
      Models::QueryResourceControlEventsResponse queryResourceControlEvents(const Models::QueryResourceControlEventsRequest &request);

      /**
       * @summary 查询安全体检简报
       *
       * @param request QuerySecurityCheckReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySecurityCheckReportResponse
       */
      Models::QuerySecurityCheckReportResponse querySecurityCheckReportWithOptions(const Models::QuerySecurityCheckReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询安全体检简报
       *
       * @param request QuerySecurityCheckReportRequest
       * @return QuerySecurityCheckReportResponse
       */
      Models::QuerySecurityCheckReportResponse querySecurityCheckReport(const Models::QuerySecurityCheckReportRequest &request);

      /**
       * @summary 开启处置工具授权
       *
       * @param request StartDisposalToolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDisposalToolServiceResponse
       */
      Models::StartDisposalToolServiceResponse startDisposalToolServiceWithOptions(const Models::StartDisposalToolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启处置工具授权
       *
       * @param request StartDisposalToolServiceRequest
       * @return StartDisposalToolServiceResponse
       */
      Models::StartDisposalToolServiceResponse startDisposalToolService(const Models::StartDisposalToolServiceRequest &request);

      /**
       * @summary 开启安全体检
       *
       * @param request StartSecurityCheckServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSecurityCheckServiceResponse
       */
      Models::StartSecurityCheckServiceResponse startSecurityCheckServiceWithOptions(const Models::StartSecurityCheckServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启安全体检
       *
       * @param request StartSecurityCheckServiceRequest
       * @return StartSecurityCheckServiceResponse
       */
      Models::StartSecurityCheckServiceResponse startSecurityCheckService(const Models::StartSecurityCheckServiceRequest &request);

      /**
       * @summary 申请解封
       *
       * @param tmpReq SubmitApplyRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitApplyRecordResponse
       */
      Models::SubmitApplyRecordResponse submitApplyRecordWithOptions(const Models::SubmitApplyRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请解封
       *
       * @param request SubmitApplyRecordRequest
       * @return SubmitApplyRecordResponse
       */
      Models::SubmitApplyRecordResponse submitApplyRecord(const Models::SubmitApplyRecordRequest &request);

      /**
       * @summary sas-更新后付费绑定关系
       *
       * @param tmpReq UpdatePostPaidBindRelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePostPaidBindRelResponse
       */
      Models::UpdatePostPaidBindRelResponse updatePostPaidBindRelWithOptions(const Models::UpdatePostPaidBindRelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary sas-更新后付费绑定关系
       *
       * @param request UpdatePostPaidBindRelRequest
       * @return UpdatePostPaidBindRelResponse
       */
      Models::UpdatePostPaidBindRelResponse updatePostPaidBindRel(const Models::UpdatePostPaidBindRelRequest &request);

      /**
       * @summary 更新体检结果
       *
       * @param request UpdateSecurityCheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityCheckResultResponse
       */
      Models::UpdateSecurityCheckResultResponse updateSecurityCheckResultWithOptions(const Models::UpdateSecurityCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新体检结果
       *
       * @param request UpdateSecurityCheckResultRequest
       * @return UpdateSecurityCheckResultResponse
       */
      Models::UpdateSecurityCheckResultResponse updateSecurityCheckResult(const Models::UpdateSecurityCheckResultRequest &request);
  };
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
