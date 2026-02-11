// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ARMS20210422_HPP_
#define ALIBABACLOUD_ARMS20210422_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ARMS20210422Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ARMS20210422.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AddGrafanaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGrafanaResponse
       */
      Models::AddGrafanaResponse addGrafanaWithOptions(const Models::AddGrafanaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddGrafanaRequest
       * @return AddGrafanaResponse
       */
      Models::AddGrafanaResponse addGrafana(const Models::AddGrafanaRequest &request);

      /**
       * @param request AddIntegrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddIntegrationResponse
       */
      Models::AddIntegrationResponse addIntegrationWithOptions(const Models::AddIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddIntegrationRequest
       * @return AddIntegrationResponse
       */
      Models::AddIntegrationResponse addIntegration(const Models::AddIntegrationRequest &request);

      /**
       * @param tmpReq ApplyScenarioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyScenarioResponse
       */
      Models::ApplyScenarioResponse applyScenarioWithOptions(const Models::ApplyScenarioRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ApplyScenarioRequest
       * @return ApplyScenarioResponse
       */
      Models::ApplyScenarioResponse applyScenario(const Models::ApplyScenarioRequest &request);

      /**
       * @param request CheckDataConsistencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDataConsistencyResponse
       */
      Models::CheckDataConsistencyResponse checkDataConsistencyWithOptions(const Models::CheckDataConsistencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckDataConsistencyRequest
       * @return CheckDataConsistencyResponse
       */
      Models::CheckDataConsistencyResponse checkDataConsistency(const Models::CheckDataConsistencyRequest &request);

      /**
       * @param request CheckServiceLinkedRoleForDeletingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleForDeletingResponse
       */
      Models::CheckServiceLinkedRoleForDeletingResponse checkServiceLinkedRoleForDeletingWithOptions(const Models::CheckServiceLinkedRoleForDeletingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckServiceLinkedRoleForDeletingRequest
       * @return CheckServiceLinkedRoleForDeletingResponse
       */
      Models::CheckServiceLinkedRoleForDeletingResponse checkServiceLinkedRoleForDeleting(const Models::CheckServiceLinkedRoleForDeletingRequest &request);

      /**
       * @param request CheckServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceStatusResponse
       */
      Models::CheckServiceStatusResponse checkServiceStatusWithOptions(const Models::CheckServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckServiceStatusRequest
       * @return CheckServiceStatusResponse
       */
      Models::CheckServiceStatusResponse checkServiceStatus(const Models::CheckServiceStatusRequest &request);

      /**
       * @param request ConfigAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigAppResponse
       */
      Models::ConfigAppResponse configAppWithOptions(const Models::ConfigAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConfigAppRequest
       * @return ConfigAppResponse
       */
      Models::ConfigAppResponse configApp(const Models::ConfigAppRequest &request);

      /**
       * @param request CreateAlertContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlertContactResponse
       */
      Models::CreateAlertContactResponse createAlertContactWithOptions(const Models::CreateAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAlertContactRequest
       * @return CreateAlertContactResponse
       */
      Models::CreateAlertContactResponse createAlertContact(const Models::CreateAlertContactRequest &request);

      /**
       * @param request CreateAlertContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlertContactGroupResponse
       */
      Models::CreateAlertContactGroupResponse createAlertContactGroupWithOptions(const Models::CreateAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAlertContactGroupRequest
       * @return CreateAlertContactGroupResponse
       */
      Models::CreateAlertContactGroupResponse createAlertContactGroup(const Models::CreateAlertContactGroupRequest &request);

      /**
       * @param request CreateAlertTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlertTemplateResponse
       */
      Models::CreateAlertTemplateResponse createAlertTemplateWithOptions(const Models::CreateAlertTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAlertTemplateRequest
       * @return CreateAlertTemplateResponse
       */
      Models::CreateAlertTemplateResponse createAlertTemplate(const Models::CreateAlertTemplateRequest &request);

      /**
       * @param request CreateDispatchRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDispatchRuleResponse
       */
      Models::CreateDispatchRuleResponse createDispatchRuleWithOptions(const Models::CreateDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateDispatchRuleRequest
       * @return CreateDispatchRuleResponse
       */
      Models::CreateDispatchRuleResponse createDispatchRule(const Models::CreateDispatchRuleRequest &request);

      /**
       * @param request CreatePrometheusAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusAlertRuleResponse
       */
      Models::CreatePrometheusAlertRuleResponse createPrometheusAlertRuleWithOptions(const Models::CreatePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreatePrometheusAlertRuleRequest
       * @return CreatePrometheusAlertRuleResponse
       */
      Models::CreatePrometheusAlertRuleResponse createPrometheusAlertRule(const Models::CreatePrometheusAlertRuleRequest &request);

      /**
       * @param request CreateRetcodeAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRetcodeAppResponse
       */
      Models::CreateRetcodeAppResponse createRetcodeAppWithOptions(const Models::CreateRetcodeAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateRetcodeAppRequest
       * @return CreateRetcodeAppResponse
       */
      Models::CreateRetcodeAppResponse createRetcodeApp(const Models::CreateRetcodeAppRequest &request);

      /**
       * @param request CreateWehookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWehookResponse
       */
      Models::CreateWehookResponse createWehookWithOptions(const Models::CreateWehookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateWehookRequest
       * @return CreateWehookResponse
       */
      Models::CreateWehookResponse createWehook(const Models::CreateWehookRequest &request);

      /**
       * @param request DeleteAlertContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertContactResponse
       */
      Models::DeleteAlertContactResponse deleteAlertContactWithOptions(const Models::DeleteAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAlertContactRequest
       * @return DeleteAlertContactResponse
       */
      Models::DeleteAlertContactResponse deleteAlertContact(const Models::DeleteAlertContactRequest &request);

      /**
       * @param request DeleteAlertContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertContactGroupResponse
       */
      Models::DeleteAlertContactGroupResponse deleteAlertContactGroupWithOptions(const Models::DeleteAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAlertContactGroupRequest
       * @return DeleteAlertContactGroupResponse
       */
      Models::DeleteAlertContactGroupResponse deleteAlertContactGroup(const Models::DeleteAlertContactGroupRequest &request);

      /**
       * @param request DeleteAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertRulesResponse
       */
      Models::DeleteAlertRulesResponse deleteAlertRulesWithOptions(const Models::DeleteAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAlertRulesRequest
       * @return DeleteAlertRulesResponse
       */
      Models::DeleteAlertRulesResponse deleteAlertRules(const Models::DeleteAlertRulesRequest &request);

      /**
       * @param request DeleteAlertTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertTemplateResponse
       */
      Models::DeleteAlertTemplateResponse deleteAlertTemplateWithOptions(const Models::DeleteAlertTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAlertTemplateRequest
       * @return DeleteAlertTemplateResponse
       */
      Models::DeleteAlertTemplateResponse deleteAlertTemplate(const Models::DeleteAlertTemplateRequest &request);

      /**
       * @param request DeleteDispatchRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDispatchRuleResponse
       */
      Models::DeleteDispatchRuleResponse deleteDispatchRuleWithOptions(const Models::DeleteDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteDispatchRuleRequest
       * @return DeleteDispatchRuleResponse
       */
      Models::DeleteDispatchRuleResponse deleteDispatchRule(const Models::DeleteDispatchRuleRequest &request);

      /**
       * @param request DeleteGrafanaResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGrafanaResourceResponse
       */
      Models::DeleteGrafanaResourceResponse deleteGrafanaResourceWithOptions(const Models::DeleteGrafanaResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteGrafanaResourceRequest
       * @return DeleteGrafanaResourceResponse
       */
      Models::DeleteGrafanaResourceResponse deleteGrafanaResource(const Models::DeleteGrafanaResourceRequest &request);

      /**
       * @param request DeletePrometheusAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrometheusAlertRuleResponse
       */
      Models::DeletePrometheusAlertRuleResponse deletePrometheusAlertRuleWithOptions(const Models::DeletePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeletePrometheusAlertRuleRequest
       * @return DeletePrometheusAlertRuleResponse
       */
      Models::DeletePrometheusAlertRuleResponse deletePrometheusAlertRule(const Models::DeletePrometheusAlertRuleRequest &request);

      /**
       * @param request DeleteRetcodeAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRetcodeAppResponse
       */
      Models::DeleteRetcodeAppResponse deleteRetcodeAppWithOptions(const Models::DeleteRetcodeAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteRetcodeAppRequest
       * @return DeleteRetcodeAppResponse
       */
      Models::DeleteRetcodeAppResponse deleteRetcodeApp(const Models::DeleteRetcodeAppRequest &request);

      /**
       * @param request DeleteScenarioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScenarioResponse
       */
      Models::DeleteScenarioResponse deleteScenarioWithOptions(const Models::DeleteScenarioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteScenarioRequest
       * @return DeleteScenarioResponse
       */
      Models::DeleteScenarioResponse deleteScenario(const Models::DeleteScenarioRequest &request);

      /**
       * @param request DeleteTraceAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTraceAppResponse
       */
      Models::DeleteTraceAppResponse deleteTraceAppWithOptions(const Models::DeleteTraceAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteTraceAppRequest
       * @return DeleteTraceAppResponse
       */
      Models::DeleteTraceAppResponse deleteTraceApp(const Models::DeleteTraceAppRequest &request);

      /**
       * @param request DescribeDispatchRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDispatchRuleResponse
       */
      Models::DescribeDispatchRuleResponse describeDispatchRuleWithOptions(const Models::DescribeDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDispatchRuleRequest
       * @return DescribeDispatchRuleResponse
       */
      Models::DescribeDispatchRuleResponse describeDispatchRule(const Models::DescribeDispatchRuleRequest &request);

      /**
       * @param request DescribePrometheusAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrometheusAlertRuleResponse
       */
      Models::DescribePrometheusAlertRuleResponse describePrometheusAlertRuleWithOptions(const Models::DescribePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribePrometheusAlertRuleRequest
       * @return DescribePrometheusAlertRuleResponse
       */
      Models::DescribePrometheusAlertRuleResponse describePrometheusAlertRule(const Models::DescribePrometheusAlertRuleRequest &request);

      /**
       * @param request DescribeTraceLicenseKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTraceLicenseKeyResponse
       */
      Models::DescribeTraceLicenseKeyResponse describeTraceLicenseKeyWithOptions(const Models::DescribeTraceLicenseKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeTraceLicenseKeyRequest
       * @return DescribeTraceLicenseKeyResponse
       */
      Models::DescribeTraceLicenseKeyResponse describeTraceLicenseKey(const Models::DescribeTraceLicenseKeyRequest &request);

      /**
       * @param request DescribeTraceLocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTraceLocationResponse
       */
      Models::DescribeTraceLocationResponse describeTraceLocationWithOptions(const Models::DescribeTraceLocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeTraceLocationRequest
       * @return DescribeTraceLocationResponse
       */
      Models::DescribeTraceLocationResponse describeTraceLocation(const Models::DescribeTraceLocationRequest &request);

      /**
       * @param request DisableAlertTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAlertTemplateResponse
       */
      Models::DisableAlertTemplateResponse disableAlertTemplateWithOptions(const Models::DisableAlertTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DisableAlertTemplateRequest
       * @return DisableAlertTemplateResponse
       */
      Models::DisableAlertTemplateResponse disableAlertTemplate(const Models::DisableAlertTemplateRequest &request);

      /**
       * @param request EnableAlertTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAlertTemplateResponse
       */
      Models::EnableAlertTemplateResponse enableAlertTemplateWithOptions(const Models::EnableAlertTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableAlertTemplateRequest
       * @return EnableAlertTemplateResponse
       */
      Models::EnableAlertTemplateResponse enableAlertTemplate(const Models::EnableAlertTemplateRequest &request);

      /**
       * @param request ExportPrometheusRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportPrometheusRulesResponse
       */
      Models::ExportPrometheusRulesResponse exportPrometheusRulesWithOptions(const Models::ExportPrometheusRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ExportPrometheusRulesRequest
       * @return ExportPrometheusRulesResponse
       */
      Models::ExportPrometheusRulesResponse exportPrometheusRules(const Models::ExportPrometheusRulesRequest &request);

      /**
       * @param request GetAgentDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentDownloadUrlResponse
       */
      Models::GetAgentDownloadUrlResponse getAgentDownloadUrlWithOptions(const Models::GetAgentDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAgentDownloadUrlRequest
       * @return GetAgentDownloadUrlResponse
       */
      Models::GetAgentDownloadUrlResponse getAgentDownloadUrl(const Models::GetAgentDownloadUrlRequest &request);

      /**
       * @param request GetAppApiByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppApiByPageResponse
       */
      Models::GetAppApiByPageResponse getAppApiByPageWithOptions(const Models::GetAppApiByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAppApiByPageRequest
       * @return GetAppApiByPageResponse
       */
      Models::GetAppApiByPageResponse getAppApiByPage(const Models::GetAppApiByPageRequest &request);

      /**
       * @param request GetConsistencySnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsistencySnapshotResponse
       */
      Models::GetConsistencySnapshotResponse getConsistencySnapshotWithOptions(const Models::GetConsistencySnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetConsistencySnapshotRequest
       * @return GetConsistencySnapshotResponse
       */
      Models::GetConsistencySnapshotResponse getConsistencySnapshot(const Models::GetConsistencySnapshotRequest &request);

      /**
       * @param request GetIntegrationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIntegrationTokenResponse
       */
      Models::GetIntegrationTokenResponse getIntegrationTokenWithOptions(const Models::GetIntegrationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetIntegrationTokenRequest
       * @return GetIntegrationTokenResponse
       */
      Models::GetIntegrationTokenResponse getIntegrationToken(const Models::GetIntegrationTokenRequest &request);

      /**
       * @param request GetMultipleTraceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultipleTraceResponse
       */
      Models::GetMultipleTraceResponse getMultipleTraceWithOptions(const Models::GetMultipleTraceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetMultipleTraceRequest
       * @return GetMultipleTraceResponse
       */
      Models::GetMultipleTraceResponse getMultipleTrace(const Models::GetMultipleTraceRequest &request);

      /**
       * @param request GetPrometheusApiTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrometheusApiTokenResponse
       */
      Models::GetPrometheusApiTokenResponse getPrometheusApiTokenWithOptions(const Models::GetPrometheusApiTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetPrometheusApiTokenRequest
       * @return GetPrometheusApiTokenResponse
       */
      Models::GetPrometheusApiTokenResponse getPrometheusApiToken(const Models::GetPrometheusApiTokenRequest &request);

      /**
       * @param request GetRetcodeShareUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRetcodeShareUrlResponse
       */
      Models::GetRetcodeShareUrlResponse getRetcodeShareUrlWithOptions(const Models::GetRetcodeShareUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetRetcodeShareUrlRequest
       * @return GetRetcodeShareUrlResponse
       */
      Models::GetRetcodeShareUrlResponse getRetcodeShareUrl(const Models::GetRetcodeShareUrlRequest &request);

      /**
       * @param request GetStackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStackResponse
       */
      Models::GetStackResponse getStackWithOptions(const Models::GetStackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetStackRequest
       * @return GetStackResponse
       */
      Models::GetStackResponse getStack(const Models::GetStackRequest &request);

      /**
       * @param request GetTraceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTraceResponse
       */
      Models::GetTraceResponse getTraceWithOptions(const Models::GetTraceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetTraceRequest
       * @return GetTraceResponse
       */
      Models::GetTraceResponse getTrace(const Models::GetTraceRequest &request);

      /**
       * @param request GetTraceAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTraceAppResponse
       */
      Models::GetTraceAppResponse getTraceAppWithOptions(const Models::GetTraceAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetTraceAppRequest
       * @return GetTraceAppResponse
       */
      Models::GetTraceAppResponse getTraceApp(const Models::GetTraceAppRequest &request);

      /**
       * @param request ImportAppAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportAppAlertRulesResponse
       */
      Models::ImportAppAlertRulesResponse importAppAlertRulesWithOptions(const Models::ImportAppAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImportAppAlertRulesRequest
       * @return ImportAppAlertRulesResponse
       */
      Models::ImportAppAlertRulesResponse importAppAlertRules(const Models::ImportAppAlertRulesRequest &request);

      /**
       * @param request ImportCustomAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportCustomAlertRulesResponse
       */
      Models::ImportCustomAlertRulesResponse importCustomAlertRulesWithOptions(const Models::ImportCustomAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImportCustomAlertRulesRequest
       * @return ImportCustomAlertRulesResponse
       */
      Models::ImportCustomAlertRulesResponse importCustomAlertRules(const Models::ImportCustomAlertRulesRequest &request);

      /**
       * @param request ImportPrometheusRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportPrometheusRulesResponse
       */
      Models::ImportPrometheusRulesResponse importPrometheusRulesWithOptions(const Models::ImportPrometheusRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImportPrometheusRulesRequest
       * @return ImportPrometheusRulesResponse
       */
      Models::ImportPrometheusRulesResponse importPrometheusRules(const Models::ImportPrometheusRulesRequest &request);

      /**
       * @param request ListActivatedAlertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListActivatedAlertsResponse
       */
      Models::ListActivatedAlertsResponse listActivatedAlertsWithOptions(const Models::ListActivatedAlertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListActivatedAlertsRequest
       * @return ListActivatedAlertsResponse
       */
      Models::ListActivatedAlertsResponse listActivatedAlerts(const Models::ListActivatedAlertsRequest &request);

      /**
       * @param request ListAlertTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertTemplatesResponse
       */
      Models::ListAlertTemplatesResponse listAlertTemplatesWithOptions(const Models::ListAlertTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAlertTemplatesRequest
       * @return ListAlertTemplatesResponse
       */
      Models::ListAlertTemplatesResponse listAlertTemplates(const Models::ListAlertTemplatesRequest &request);

      /**
       * @param request ListClusterFromGrafanaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterFromGrafanaResponse
       */
      Models::ListClusterFromGrafanaResponse listClusterFromGrafanaWithOptions(const Models::ListClusterFromGrafanaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListClusterFromGrafanaRequest
       * @return ListClusterFromGrafanaResponse
       */
      Models::ListClusterFromGrafanaResponse listClusterFromGrafana(const Models::ListClusterFromGrafanaRequest &request);

      /**
       * @param request ListDashboardsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDashboardsResponse
       */
      Models::ListDashboardsResponse listDashboardsWithOptions(const Models::ListDashboardsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListDashboardsRequest
       * @return ListDashboardsResponse
       */
      Models::ListDashboardsResponse listDashboards(const Models::ListDashboardsRequest &request);

      /**
       * @param request ListDispatchRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDispatchRuleResponse
       */
      Models::ListDispatchRuleResponse listDispatchRuleWithOptions(const Models::ListDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListDispatchRuleRequest
       * @return ListDispatchRuleResponse
       */
      Models::ListDispatchRuleResponse listDispatchRule(const Models::ListDispatchRuleRequest &request);

      /**
       * @param request ListPromClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPromClustersResponse
       */
      Models::ListPromClustersResponse listPromClustersWithOptions(const Models::ListPromClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListPromClustersRequest
       * @return ListPromClustersResponse
       */
      Models::ListPromClustersResponse listPromClusters(const Models::ListPromClustersRequest &request);

      /**
       * @param request ListPrometheusAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusAlertRulesResponse
       */
      Models::ListPrometheusAlertRulesResponse listPrometheusAlertRulesWithOptions(const Models::ListPrometheusAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListPrometheusAlertRulesRequest
       * @return ListPrometheusAlertRulesResponse
       */
      Models::ListPrometheusAlertRulesResponse listPrometheusAlertRules(const Models::ListPrometheusAlertRulesRequest &request);

      /**
       * @param request ListPrometheusAlertTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusAlertTemplatesResponse
       */
      Models::ListPrometheusAlertTemplatesResponse listPrometheusAlertTemplatesWithOptions(const Models::ListPrometheusAlertTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListPrometheusAlertTemplatesRequest
       * @return ListPrometheusAlertTemplatesResponse
       */
      Models::ListPrometheusAlertTemplatesResponse listPrometheusAlertTemplates(const Models::ListPrometheusAlertTemplatesRequest &request);

      /**
       * @param request ListRetcodeAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRetcodeAppsResponse
       */
      Models::ListRetcodeAppsResponse listRetcodeAppsWithOptions(const Models::ListRetcodeAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListRetcodeAppsRequest
       * @return ListRetcodeAppsResponse
       */
      Models::ListRetcodeAppsResponse listRetcodeApps(const Models::ListRetcodeAppsRequest &request);

      /**
       * @param request ListScenarioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScenarioResponse
       */
      Models::ListScenarioResponse listScenarioWithOptions(const Models::ListScenarioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListScenarioRequest
       * @return ListScenarioResponse
       */
      Models::ListScenarioResponse listScenario(const Models::ListScenarioRequest &request);

      /**
       * @param request ListServerlessTopNAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServerlessTopNAppsResponse
       */
      Models::ListServerlessTopNAppsResponse listServerlessTopNAppsWithOptions(const Models::ListServerlessTopNAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListServerlessTopNAppsRequest
       * @return ListServerlessTopNAppsResponse
       */
      Models::ListServerlessTopNAppsResponse listServerlessTopNApps(const Models::ListServerlessTopNAppsRequest &request);

      /**
       * @param request ListTraceAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTraceAppsResponse
       */
      Models::ListTraceAppsResponse listTraceAppsWithOptions(const Models::ListTraceAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListTraceAppsRequest
       * @return ListTraceAppsResponse
       */
      Models::ListTraceAppsResponse listTraceApps(const Models::ListTraceAppsRequest &request);

      /**
       * @param request OpenArmsDefaultSLRRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenArmsDefaultSLRResponse
       */
      Models::OpenArmsDefaultSLRResponse openArmsDefaultSLRWithOptions(const Models::OpenArmsDefaultSLRRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request OpenArmsDefaultSLRRequest
       * @return OpenArmsDefaultSLRResponse
       */
      Models::OpenArmsDefaultSLRResponse openArmsDefaultSLR(const Models::OpenArmsDefaultSLRRequest &request);

      /**
       * @param request OpenArmsServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenArmsServiceResponse
       */
      Models::OpenArmsServiceResponse openArmsServiceWithOptions(const Models::OpenArmsServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request OpenArmsServiceRequest
       * @return OpenArmsServiceResponse
       */
      Models::OpenArmsServiceResponse openArmsService(const Models::OpenArmsServiceRequest &request);

      /**
       * @param request OpenVClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenVClusterResponse
       */
      Models::OpenVClusterResponse openVClusterWithOptions(const Models::OpenVClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request OpenVClusterRequest
       * @return OpenVClusterResponse
       */
      Models::OpenVClusterResponse openVCluster(const Models::OpenVClusterRequest &request);

      /**
       * @param request OpenXtraceDefaultSLRRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenXtraceDefaultSLRResponse
       */
      Models::OpenXtraceDefaultSLRResponse openXtraceDefaultSLRWithOptions(const Models::OpenXtraceDefaultSLRRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request OpenXtraceDefaultSLRRequest
       * @return OpenXtraceDefaultSLRResponse
       */
      Models::OpenXtraceDefaultSLRResponse openXtraceDefaultSLR(const Models::OpenXtraceDefaultSLRRequest &request);

      /**
       * @param request QueryDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDatasetResponse
       */
      Models::QueryDatasetResponse queryDatasetWithOptions(const Models::QueryDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryDatasetRequest
       * @return QueryDatasetResponse
       */
      Models::QueryDatasetResponse queryDataset(const Models::QueryDatasetRequest &request);

      /**
       * @param request QueryMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMetricResponse
       */
      Models::QueryMetricResponse queryMetricWithOptions(const Models::QueryMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryMetricRequest
       * @return QueryMetricResponse
       */
      Models::QueryMetricResponse queryMetric(const Models::QueryMetricRequest &request);

      /**
       * @param request QueryMetricByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMetricByPageResponse
       */
      Models::QueryMetricByPageResponse queryMetricByPageWithOptions(const Models::QueryMetricByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryMetricByPageRequest
       * @return QueryMetricByPageResponse
       */
      Models::QueryMetricByPageResponse queryMetricByPage(const Models::QueryMetricByPageRequest &request);

      /**
       * @param request SaveTraceAppConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTraceAppConfigResponse
       */
      Models::SaveTraceAppConfigResponse saveTraceAppConfigWithOptions(const Models::SaveTraceAppConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveTraceAppConfigRequest
       * @return SaveTraceAppConfigResponse
       */
      Models::SaveTraceAppConfigResponse saveTraceAppConfig(const Models::SaveTraceAppConfigRequest &request);

      /**
       * @param request SearchAlertContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchAlertContactResponse
       */
      Models::SearchAlertContactResponse searchAlertContactWithOptions(const Models::SearchAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SearchAlertContactRequest
       * @return SearchAlertContactResponse
       */
      Models::SearchAlertContactResponse searchAlertContact(const Models::SearchAlertContactRequest &request);

      /**
       * @param request SearchAlertContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchAlertContactGroupResponse
       */
      Models::SearchAlertContactGroupResponse searchAlertContactGroupWithOptions(const Models::SearchAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SearchAlertContactGroupRequest
       * @return SearchAlertContactGroupResponse
       */
      Models::SearchAlertContactGroupResponse searchAlertContactGroup(const Models::SearchAlertContactGroupRequest &request);

      /**
       * @param request SearchAlertHistoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchAlertHistoriesResponse
       */
      Models::SearchAlertHistoriesResponse searchAlertHistoriesWithOptions(const Models::SearchAlertHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SearchAlertHistoriesRequest
       * @return SearchAlertHistoriesResponse
       */
      Models::SearchAlertHistoriesResponse searchAlertHistories(const Models::SearchAlertHistoriesRequest &request);

      /**
       * @param request SearchAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchAlertRulesResponse
       */
      Models::SearchAlertRulesResponse searchAlertRulesWithOptions(const Models::SearchAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SearchAlertRulesRequest
       * @return SearchAlertRulesResponse
       */
      Models::SearchAlertRulesResponse searchAlertRules(const Models::SearchAlertRulesRequest &request);

      /**
       * @param request SearchEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchEventsResponse
       */
      Models::SearchEventsResponse searchEventsWithOptions(const Models::SearchEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SearchEventsRequest
       * @return SearchEventsResponse
       */
      Models::SearchEventsResponse searchEvents(const Models::SearchEventsRequest &request);

      /**
       * @param request SearchRetcodeAppByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchRetcodeAppByPageResponse
       */
      Models::SearchRetcodeAppByPageResponse searchRetcodeAppByPageWithOptions(const Models::SearchRetcodeAppByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SearchRetcodeAppByPageRequest
       * @return SearchRetcodeAppByPageResponse
       */
      Models::SearchRetcodeAppByPageResponse searchRetcodeAppByPage(const Models::SearchRetcodeAppByPageRequest &request);

      /**
       * @param request SearchTraceAppByNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTraceAppByNameResponse
       */
      Models::SearchTraceAppByNameResponse searchTraceAppByNameWithOptions(const Models::SearchTraceAppByNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SearchTraceAppByNameRequest
       * @return SearchTraceAppByNameResponse
       */
      Models::SearchTraceAppByNameResponse searchTraceAppByName(const Models::SearchTraceAppByNameRequest &request);

      /**
       * @param request SearchTraceAppByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTraceAppByPageResponse
       */
      Models::SearchTraceAppByPageResponse searchTraceAppByPageWithOptions(const Models::SearchTraceAppByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SearchTraceAppByPageRequest
       * @return SearchTraceAppByPageResponse
       */
      Models::SearchTraceAppByPageResponse searchTraceAppByPage(const Models::SearchTraceAppByPageRequest &request);

      /**
       * @param request SearchTracesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTracesResponse
       */
      Models::SearchTracesResponse searchTracesWithOptions(const Models::SearchTracesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SearchTracesRequest
       * @return SearchTracesResponse
       */
      Models::SearchTracesResponse searchTraces(const Models::SearchTracesRequest &request);

      /**
       * @param request SearchTracesByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTracesByPageResponse
       */
      Models::SearchTracesByPageResponse searchTracesByPageWithOptions(const Models::SearchTracesByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SearchTracesByPageRequest
       * @return SearchTracesByPageResponse
       */
      Models::SearchTracesByPageResponse searchTracesByPage(const Models::SearchTracesByPageRequest &request);

      /**
       * @param request SendCustomIncidentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendCustomIncidentsResponse
       */
      Models::SendCustomIncidentsResponse sendCustomIncidentsWithOptions(const Models::SendCustomIncidentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SendCustomIncidentsRequest
       * @return SendCustomIncidentsResponse
       */
      Models::SendCustomIncidentsResponse sendCustomIncidents(const Models::SendCustomIncidentsRequest &request);

      /**
       * @param request SendMseIncidentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMseIncidentResponse
       */
      Models::SendMseIncidentResponse sendMseIncidentWithOptions(const Models::SendMseIncidentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SendMseIncidentRequest
       * @return SendMseIncidentResponse
       */
      Models::SendMseIncidentResponse sendMseIncident(const Models::SendMseIncidentRequest &request);

      /**
       * @param request SetRetcodeShareStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetRetcodeShareStatusResponse
       */
      Models::SetRetcodeShareStatusResponse setRetcodeShareStatusWithOptions(const Models::SetRetcodeShareStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetRetcodeShareStatusRequest
       * @return SetRetcodeShareStatusResponse
       */
      Models::SetRetcodeShareStatusResponse setRetcodeShareStatus(const Models::SetRetcodeShareStatusRequest &request);

      /**
       * @param request StartAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAlertResponse
       */
      Models::StartAlertResponse startAlertWithOptions(const Models::StartAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartAlertRequest
       * @return StartAlertResponse
       */
      Models::StartAlertResponse startAlert(const Models::StartAlertRequest &request);

      /**
       * @param request StopAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAlertResponse
       */
      Models::StopAlertResponse stopAlertWithOptions(const Models::StopAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StopAlertRequest
       * @return StopAlertResponse
       */
      Models::StopAlertResponse stopAlert(const Models::StopAlertRequest &request);

      /**
       * @param request UpdateAlertContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertContactResponse
       */
      Models::UpdateAlertContactResponse updateAlertContactWithOptions(const Models::UpdateAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateAlertContactRequest
       * @return UpdateAlertContactResponse
       */
      Models::UpdateAlertContactResponse updateAlertContact(const Models::UpdateAlertContactRequest &request);

      /**
       * @param request UpdateAlertContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertContactGroupResponse
       */
      Models::UpdateAlertContactGroupResponse updateAlertContactGroupWithOptions(const Models::UpdateAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateAlertContactGroupRequest
       * @return UpdateAlertContactGroupResponse
       */
      Models::UpdateAlertContactGroupResponse updateAlertContactGroup(const Models::UpdateAlertContactGroupRequest &request);

      /**
       * @param request UpdateAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertRuleResponse
       */
      Models::UpdateAlertRuleResponse updateAlertRuleWithOptions(const Models::UpdateAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateAlertRuleRequest
       * @return UpdateAlertRuleResponse
       */
      Models::UpdateAlertRuleResponse updateAlertRule(const Models::UpdateAlertRuleRequest &request);

      /**
       * @param request UpdateAlertTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertTemplateResponse
       */
      Models::UpdateAlertTemplateResponse updateAlertTemplateWithOptions(const Models::UpdateAlertTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateAlertTemplateRequest
       * @return UpdateAlertTemplateResponse
       */
      Models::UpdateAlertTemplateResponse updateAlertTemplate(const Models::UpdateAlertTemplateRequest &request);

      /**
       * @param request UpdateDispatchRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDispatchRuleResponse
       */
      Models::UpdateDispatchRuleResponse updateDispatchRuleWithOptions(const Models::UpdateDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateDispatchRuleRequest
       * @return UpdateDispatchRuleResponse
       */
      Models::UpdateDispatchRuleResponse updateDispatchRule(const Models::UpdateDispatchRuleRequest &request);

      /**
       * @param request UpdatePrometheusAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusAlertRuleResponse
       */
      Models::UpdatePrometheusAlertRuleResponse updatePrometheusAlertRuleWithOptions(const Models::UpdatePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdatePrometheusAlertRuleRequest
       * @return UpdatePrometheusAlertRuleResponse
       */
      Models::UpdatePrometheusAlertRuleResponse updatePrometheusAlertRule(const Models::UpdatePrometheusAlertRuleRequest &request);

      /**
       * @param request UpdateWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWebhookResponse
       */
      Models::UpdateWebhookResponse updateWebhookWithOptions(const Models::UpdateWebhookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateWebhookRequest
       * @return UpdateWebhookResponse
       */
      Models::UpdateWebhookResponse updateWebhook(const Models::UpdateWebhookRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
