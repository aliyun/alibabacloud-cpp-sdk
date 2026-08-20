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
       * @summary Bindss authorization to machines in Security Center.
       *
       * @param tmpReq BindAuthToMachineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAuthToMachineResponse
       */
      Models::BindAuthToMachineResponse bindAuthToMachineWithOptions(const Models::BindAuthToMachineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Bindss authorization to machines in Security Center.
       *
       * @param request BindAuthToMachineRequest
       * @return BindAuthToMachineResponse
       */
      Models::BindAuthToMachineResponse bindAuthToMachine(const Models::BindAuthToMachineRequest &request);

      /**
       * @summary Initializes Security Center module rules.
       *
       * @param tmpReq CreateSasTrialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSasTrialResponse
       */
      Models::CreateSasTrialResponse createSasTrialWithOptions(const Models::CreateSasTrialRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes Security Center module rules.
       *
       * @param request CreateSasTrialRequest
       * @return CreateSasTrialResponse
       */
      Models::CreateSasTrialResponse createSasTrial(const Models::CreateSasTrialRequest &request);

      /**
       * @summary Creates a service-linked role for Security Center and authorizes Security Center to access cloud resources.
       *
       * @param tmpReq CreateServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const Models::CreateServiceLinkedRoleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role for Security Center and authorizes Security Center to access cloud resources.
       *
       * @param request CreateServiceLinkedRoleRequest
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole(const Models::CreateServiceLinkedRoleRequest &request);

      /**
       * @summary Creates a full disk scan task.
       *
       * @param request CreateVirusScanOnceTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirusScanOnceTaskResponse
       */
      Models::CreateVirusScanOnceTaskResponse createVirusScanOnceTaskWithOptions(const Models::CreateVirusScanOnceTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a full disk scan task.
       *
       * @param request CreateVirusScanOnceTaskRequest
       * @return CreateVirusScanOnceTaskResponse
       */
      Models::CreateVirusScanOnceTaskResponse createVirusScanOnceTask(const Models::CreateVirusScanOnceTaskRequest &request);

      /**
       * @summary Queries the list of Security Center instances.
       *
       * @param tmpReq DescribeCloudCenterInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudCenterInstancesResponse
       */
      Models::DescribeCloudCenterInstancesResponse describeCloudCenterInstancesWithOptions(const Models::DescribeCloudCenterInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Security Center instances.
       *
       * @param request DescribeCloudCenterInstancesRequest
       * @return DescribeCloudCenterInstancesResponse
       */
      Models::DescribeCloudCenterInstancesResponse describeCloudCenterInstances(const Models::DescribeCloudCenterInstancesRequest &request);

      /**
       * @summary Queries the status of a service-linked role for Security Center.
       *
       * @param tmpReq DescribeServiceLinkedRoleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceLinkedRoleStatusResponse
       */
      Models::DescribeServiceLinkedRoleStatusResponse describeServiceLinkedRoleStatusWithOptions(const Models::DescribeServiceLinkedRoleStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a service-linked role for Security Center.
       *
       * @param request DescribeServiceLinkedRoleStatusRequest
       * @return DescribeServiceLinkedRoleStatusResponse
       */
      Models::DescribeServiceLinkedRoleStatusResponse describeServiceLinkedRoleStatus(const Models::DescribeServiceLinkedRoleStatusRequest &request);

      /**
       * @summary Queries security alert events in Security Center.
       *
       * @param tmpReq DescribeSuspEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSuspEventsResponse
       */
      Models::DescribeSuspEventsResponse describeSuspEventsWithOptions(const Models::DescribeSuspEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries security alert events in Security Center.
       *
       * @param request DescribeSuspEventsRequest
       * @return DescribeSuspEventsResponse
       */
      Models::DescribeSuspEventsResponse describeSuspEvents(const Models::DescribeSuspEventsRequest &request);

      /**
       * @summary Queries the edition details of a purchased Security Center instance.
       *
       * @param tmpReq DescribeVersionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVersionConfigResponse
       */
      Models::DescribeVersionConfigResponse describeVersionConfigWithOptions(const Models::DescribeVersionConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the edition details of a purchased Security Center instance.
       *
       * @param request DescribeVersionConfigRequest
       * @return DescribeVersionConfigResponse
       */
      Models::DescribeVersionConfigResponse describeVersionConfig(const Models::DescribeVersionConfigRequest &request);

      /**
       * @summary Retrieves the analysis results of alert records.
       *
       * @param tmpReq GetAlertRecordAnalysisResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlertRecordAnalysisResultResponse
       */
      Models::GetAlertRecordAnalysisResultResponse getAlertRecordAnalysisResultWithOptions(const Models::GetAlertRecordAnalysisResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the analysis results of alert records.
       *
       * @param request GetAlertRecordAnalysisResultRequest
       * @return GetAlertRecordAnalysisResultResponse
       */
      Models::GetAlertRecordAnalysisResultResponse getAlertRecordAnalysisResult(const Models::GetAlertRecordAnalysisResultRequest &request);

      /**
       * @summary Calls specific Security Center API operations.
       *
       * @param tmpReq GetAliYunSafeCenterResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAliYunSafeCenterResultResponse
       */
      Models::GetAliYunSafeCenterResultResponse getAliYunSafeCenterResultWithOptions(const Models::GetAliYunSafeCenterResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls specific Security Center API operations.
       *
       * @param request GetAliYunSafeCenterResultRequest
       * @return GetAliYunSafeCenterResultResponse
       */
      Models::GetAliYunSafeCenterResultResponse getAliYunSafeCenterResult(const Models::GetAliYunSafeCenterResultRequest &request);

      /**
       * @summary Queries whether a user is eligible for a Security Center free trial.
       *
       * @param tmpReq GetCanTrySasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCanTrySasResponse
       */
      Models::GetCanTrySasResponse getCanTrySasWithOptions(const Models::GetCanTrySasRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a user is eligible for a Security Center free trial.
       *
       * @param request GetCanTrySasRequest
       * @return GetCanTrySasResponse
       */
      Models::GetCanTrySasResponse getCanTrySas(const Models::GetCanTrySasRequest &request);

      /**
       * @summary Retrieves the security compliance package ID.
       *
       * @param request GetCompliancePackIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCompliancePackIdResponse
       */
      Models::GetCompliancePackIdResponse getCompliancePackIdWithOptions(const Models::GetCompliancePackIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the security compliance package ID.
       *
       * @param request GetCompliancePackIdRequest
       * @return GetCompliancePackIdResponse
       */
      Models::GetCompliancePackIdResponse getCompliancePackId(const Models::GetCompliancePackIdRequest &request);

      /**
       * @summary Retrieves the authorization status for one-click disposal.
       *
       * @param request GetDisposalToolStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDisposalToolStatusResponse
       */
      Models::GetDisposalToolStatusResponse getDisposalToolStatusWithOptions(const Models::GetDisposalToolStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the authorization status for one-click disposal.
       *
       * @param request GetDisposalToolStatusRequest
       * @return GetDisposalToolStatusResponse
       */
      Models::GetDisposalToolStatusResponse getDisposalToolStatus(const Models::GetDisposalToolStatusRequest &request);

      /**
       * @summary Retrieves the record of a user confirming a security contact.
       *
       * @param request GetNotificationClickRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNotificationClickRecordResponse
       */
      Models::GetNotificationClickRecordResponse getNotificationClickRecordWithOptions(const Models::GetNotificationClickRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the record of a user confirming a security contact.
       *
       * @param request GetNotificationClickRecordRequest
       * @return GetNotificationClickRecordResponse
       */
      Models::GetNotificationClickRecordResponse getNotificationClickRecord(const Models::GetNotificationClickRecordRequest &request);

      /**
       * @summary Retrieves all information about security contacts.
       *
       * @param request GetNotificationContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNotificationContactsResponse
       */
      Models::GetNotificationContactsResponse getNotificationContactsWithOptions(const Models::GetNotificationContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all information about security contacts.
       *
       * @param request GetNotificationContactsRequest
       * @return GetNotificationContactsResponse
       */
      Models::GetNotificationContactsResponse getNotificationContacts(const Models::GetNotificationContactsRequest &request);

      /**
       * @summary Retrieves the number of pending items for security contacts.
       *
       * @param request GetNotificationPendNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNotificationPendNumberResponse
       */
      Models::GetNotificationPendNumberResponse getNotificationPendNumberWithOptions(const Models::GetNotificationPendNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the number of pending items for security contacts.
       *
       * @param request GetNotificationPendNumberRequest
       * @return GetNotificationPendNumberResponse
       */
      Models::GetNotificationPendNumberResponse getNotificationPendNumber(const Models::GetNotificationPendNumberRequest &request);

      /**
       * @summary Queries the details of cloud resource control events.
       *
       * @param tmpReq GetResourceControlEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceControlEventResponse
       */
      Models::GetResourceControlEventResponse getResourceControlEventWithOptions(const Models::GetResourceControlEventRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of cloud resource control events.
       *
       * @param request GetResourceControlEventRequest
       * @return GetResourceControlEventResponse
       */
      Models::GetResourceControlEventResponse getResourceControlEvent(const Models::GetResourceControlEventRequest &request);

      /**
       * @summary Retrieves the basic information of a security check.
       *
       * @param request GetSecurityCheckBaseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityCheckBaseInfoResponse
       */
      Models::GetSecurityCheckBaseInfoResponse getSecurityCheckBaseInfoWithOptions(const Models::GetSecurityCheckBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the basic information of a security check.
       *
       * @param request GetSecurityCheckBaseInfoRequest
       * @return GetSecurityCheckBaseInfoResponse
       */
      Models::GetSecurityCheckBaseInfoResponse getSecurityCheckBaseInfo(const Models::GetSecurityCheckBaseInfoRequest &request);

      /**
       * @summary Retrieves the basic information of security check results.
       *
       * @param request GetSecurityCheckResultBaseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityCheckResultBaseInfoResponse
       */
      Models::GetSecurityCheckResultBaseInfoResponse getSecurityCheckResultBaseInfoWithOptions(const Models::GetSecurityCheckResultBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the basic information of security check results.
       *
       * @param request GetSecurityCheckResultBaseInfoRequest
       * @return GetSecurityCheckResultBaseInfoResponse
       */
      Models::GetSecurityCheckResultBaseInfoResponse getSecurityCheckResultBaseInfo(const Models::GetSecurityCheckResultBaseInfoRequest &request);

      /**
       * @summary Retrieves a list of security optimization suggestions.
       *
       * @param tmpReq GetSecuritySuggestionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecuritySuggestionListResponse
       */
      Models::GetSecuritySuggestionListResponse getSecuritySuggestionListWithOptions(const Models::GetSecuritySuggestionListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of security optimization suggestions.
       *
       * @param request GetSecuritySuggestionListRequest
       * @return GetSecuritySuggestionListResponse
       */
      Models::GetSecuritySuggestionListResponse getSecuritySuggestionList(const Models::GetSecuritySuggestionListRequest &request);

      /**
       * @summary Retrieves the number of security optimization suggestions.
       *
       * @param request GetSecuritySuggestionNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecuritySuggestionNumberResponse
       */
      Models::GetSecuritySuggestionNumberResponse getSecuritySuggestionNumberWithOptions(const Models::GetSecuritySuggestionNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the number of security optimization suggestions.
       *
       * @param request GetSecuritySuggestionNumberRequest
       * @return GetSecuritySuggestionNumberResponse
       */
      Models::GetSecuritySuggestionNumberResponse getSecuritySuggestionNumber(const Models::GetSecuritySuggestionNumberRequest &request);

      /**
       * @summary Retrieves the status of a service-linked role.
       *
       * @param request GetServiceLinkedRoleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceLinkedRoleStatusResponse
       */
      Models::GetServiceLinkedRoleStatusResponse getServiceLinkedRoleStatusWithOptions(const Models::GetServiceLinkedRoleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the status of a service-linked role.
       *
       * @param request GetServiceLinkedRoleStatusRequest
       * @return GetServiceLinkedRoleStatusResponse
       */
      Models::GetServiceLinkedRoleStatusResponse getServiceLinkedRoleStatus(const Models::GetServiceLinkedRoleStatusRequest &request);

      /**
       * @summary Retrieves valid deductible instances for Security Center.
       *
       * @param tmpReq GetValidDeductInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetValidDeductInstancesResponse
       */
      Models::GetValidDeductInstancesResponse getValidDeductInstancesWithOptions(const Models::GetValidDeductInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves valid deductible instances for Security Center.
       *
       * @param request GetValidDeductInstancesRequest
       * @return GetValidDeductInstancesResponse
       */
      Models::GetValidDeductInstancesResponse getValidDeductInstances(const Models::GetValidDeductInstancesRequest &request);

      /**
       * @summary Initializes module rules for Security Center.
       *
       * @param tmpReq InitSasModuleRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitSasModuleRuleResponse
       */
      Models::InitSasModuleRuleResponse initSasModuleRuleWithOptions(const Models::InitSasModuleRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes module rules for Security Center.
       *
       * @param request InitSasModuleRuleRequest
       * @return InitSasModuleRuleResponse
       */
      Models::InitSasModuleRuleResponse initSasModuleRule(const Models::InitSasModuleRuleRequest &request);

      /**
       * @summary Queries the results of a full disk scan.
       *
       * @param request ListVirusScanMachineEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirusScanMachineEventResponse
       */
      Models::ListVirusScanMachineEventResponse listVirusScanMachineEventWithOptions(const Models::ListVirusScanMachineEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of a full disk scan.
       *
       * @param request ListVirusScanMachineEventRequest
       * @return ListVirusScanMachineEventResponse
       */
      Models::ListVirusScanMachineEventResponse listVirusScanMachineEvent(const Models::ListVirusScanMachineEventRequest &request);

      /**
       * @summary Starts a free trial of Security Center.
       *
       * @param request OpenTrialPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenTrialPackageResponse
       */
      Models::OpenTrialPackageResponse openTrialPackageWithOptions(const Models::OpenTrialPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a free trial of Security Center.
       *
       * @param request OpenTrialPackageRequest
       * @return OpenTrialPackageResponse
       */
      Models::OpenTrialPackageResponse openTrialPackage(const Models::OpenTrialPackageRequest &request);

      /**
       * @summary Queries account security events.
       *
       * @param tmpReq QueryAccountSafetyIncidentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountSafetyIncidentResponse
       */
      Models::QueryAccountSafetyIncidentResponse queryAccountSafetyIncidentWithOptions(const Models::QueryAccountSafetyIncidentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries account security events.
       *
       * @param request QueryAccountSafetyIncidentRequest
       * @return QueryAccountSafetyIncidentResponse
       */
      Models::QueryAccountSafetyIncidentResponse queryAccountSafetyIncident(const Models::QueryAccountSafetyIncidentRequest &request);

      /**
       * @summary Queries the subscription status of the cloud security guide.
       *
       * @param request QueryGuideSubStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGuideSubStatusResponse
       */
      Models::QueryGuideSubStatusResponse queryGuideSubStatusWithOptions(const Models::QueryGuideSubStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the subscription status of the cloud security guide.
       *
       * @param request QueryGuideSubStatusRequest
       * @return QueryGuideSubStatusResponse
       */
      Models::QueryGuideSubStatusResponse queryGuideSubStatus(const Models::QueryGuideSubStatusRequest &request);

      /**
       * @summary Queries cloud resource control events.
       *
       * @param tmpReq QueryResourceControlEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryResourceControlEventsResponse
       */
      Models::QueryResourceControlEventsResponse queryResourceControlEventsWithOptions(const Models::QueryResourceControlEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cloud resource control events.
       *
       * @param request QueryResourceControlEventsRequest
       * @return QueryResourceControlEventsResponse
       */
      Models::QueryResourceControlEventsResponse queryResourceControlEvents(const Models::QueryResourceControlEventsRequest &request);

      /**
       * @summary Queries the security check brief.
       *
       * @param request QuerySecurityCheckReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySecurityCheckReportResponse
       */
      Models::QuerySecurityCheckReportResponse querySecurityCheckReportWithOptions(const Models::QuerySecurityCheckReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security check brief.
       *
       * @param request QuerySecurityCheckReportRequest
       * @return QuerySecurityCheckReportResponse
       */
      Models::QuerySecurityCheckReportResponse querySecurityCheckReport(const Models::QuerySecurityCheckReportRequest &request);

      /**
       * @summary Enables disposal tool authorization.
       *
       * @param request StartDisposalToolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDisposalToolServiceResponse
       */
      Models::StartDisposalToolServiceResponse startDisposalToolServiceWithOptions(const Models::StartDisposalToolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables disposal tool authorization.
       *
       * @param request StartDisposalToolServiceRequest
       * @return StartDisposalToolServiceResponse
       */
      Models::StartDisposalToolServiceResponse startDisposalToolService(const Models::StartDisposalToolServiceRequest &request);

      /**
       * @summary Enables security check.
       *
       * @param request StartSecurityCheckServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSecurityCheckServiceResponse
       */
      Models::StartSecurityCheckServiceResponse startSecurityCheckServiceWithOptions(const Models::StartSecurityCheckServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables security check.
       *
       * @param request StartSecurityCheckServiceRequest
       * @return StartSecurityCheckServiceResponse
       */
      Models::StartSecurityCheckServiceResponse startSecurityCheckService(const Models::StartSecurityCheckServiceRequest &request);

      /**
       * @summary Submits an unblocking request.
       *
       * @param tmpReq SubmitApplyRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitApplyRecordResponse
       */
      Models::SubmitApplyRecordResponse submitApplyRecordWithOptions(const Models::SubmitApplyRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an unblocking request.
       *
       * @param request SubmitApplyRecordRequest
       * @return SubmitApplyRecordResponse
       */
      Models::SubmitApplyRecordResponse submitApplyRecord(const Models::SubmitApplyRecordRequest &request);

      /**
       * @summary Updates the pay-as-you-go binding relationship for Security Center.
       *
       * @param tmpReq UpdatePostPaidBindRelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePostPaidBindRelResponse
       */
      Models::UpdatePostPaidBindRelResponse updatePostPaidBindRelWithOptions(const Models::UpdatePostPaidBindRelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the pay-as-you-go binding relationship for Security Center.
       *
       * @param request UpdatePostPaidBindRelRequest
       * @return UpdatePostPaidBindRelResponse
       */
      Models::UpdatePostPaidBindRelResponse updatePostPaidBindRel(const Models::UpdatePostPaidBindRelRequest &request);

      /**
       * @summary Updates the health check result.
       *
       * @param request UpdateSecurityCheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityCheckResultResponse
       */
      Models::UpdateSecurityCheckResultResponse updateSecurityCheckResultWithOptions(const Models::UpdateSecurityCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the health check result.
       *
       * @param request UpdateSecurityCheckResultRequest
       * @return UpdateSecurityCheckResultResponse
       */
      Models::UpdateSecurityCheckResultResponse updateSecurityCheckResult(const Models::UpdateSecurityCheckResultRequest &request);
  };
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
