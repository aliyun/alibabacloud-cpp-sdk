// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ARMS20190808_HPP_
#define ALIBABACLOUD_ARMS20190808_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ARMS20190808Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ARMS20190808.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @deprecated OpenAPI AddAliClusterIdsToPrometheusGlobalView is deprecated
       *
       * @summary Adds a global aggregation instance as a data source in Managed Service for Prometheus.
       *
       * @param request AddAliClusterIdsToPrometheusGlobalViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAliClusterIdsToPrometheusGlobalViewResponse
       */
      Models::AddAliClusterIdsToPrometheusGlobalViewResponse addAliClusterIdsToPrometheusGlobalViewWithOptions(const Models::AddAliClusterIdsToPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddAliClusterIdsToPrometheusGlobalView is deprecated
       *
       * @summary Adds a global aggregation instance as a data source in Managed Service for Prometheus.
       *
       * @param request AddAliClusterIdsToPrometheusGlobalViewRequest
       * @return AddAliClusterIdsToPrometheusGlobalViewResponse
       */
      Models::AddAliClusterIdsToPrometheusGlobalViewResponse addAliClusterIdsToPrometheusGlobalView(const Models::AddAliClusterIdsToPrometheusGlobalViewRequest &request);

      /**
       * @deprecated OpenAPI AddGrafana is deprecated
       *
       * @summary Integrates the dashboard of Prometheus Service.
       *
       * @param request AddGrafanaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGrafanaResponse
       */
      Models::AddGrafanaResponse addGrafanaWithOptions(const Models::AddGrafanaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddGrafana is deprecated
       *
       * @summary Integrates the dashboard of Prometheus Service.
       *
       * @param request AddGrafanaRequest
       * @return AddGrafanaResponse
       */
      Models::AddGrafanaResponse addGrafana(const Models::AddGrafanaRequest &request);

      /**
       * @deprecated OpenAPI AddIntegration is deprecated, please use ARMS::2019-08-08::InstallAddon instead.
       *
       * @summary Integrates the dashboard and collection rules of Prometheus Service.
       *
       * @param request AddIntegrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddIntegrationResponse
       */
      Models::AddIntegrationResponse addIntegrationWithOptions(const Models::AddIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddIntegration is deprecated, please use ARMS::2019-08-08::InstallAddon instead.
       *
       * @summary Integrates the dashboard and collection rules of Prometheus Service.
       *
       * @param request AddIntegrationRequest
       * @return AddIntegrationResponse
       */
      Models::AddIntegrationResponse addIntegration(const Models::AddIntegrationRequest &request);

      /**
       * @deprecated OpenAPI AddPrometheusGlobalView is deprecated
       *
       * @summary Adds a global aggregation instance in Prometheus Service.
       *
       * @param request AddPrometheusGlobalViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPrometheusGlobalViewResponse
       */
      Models::AddPrometheusGlobalViewResponse addPrometheusGlobalViewWithOptions(const Models::AddPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddPrometheusGlobalView is deprecated
       *
       * @summary Adds a global aggregation instance in Prometheus Service.
       *
       * @param request AddPrometheusGlobalViewRequest
       * @return AddPrometheusGlobalViewResponse
       */
      Models::AddPrometheusGlobalViewResponse addPrometheusGlobalView(const Models::AddPrometheusGlobalViewRequest &request);

      /**
       * @deprecated OpenAPI AddPrometheusGlobalViewByAliClusterIds is deprecated
       *
       * @summary Adds a global aggregation instance in Managed Service for Prometheus.
       *
       * @param request AddPrometheusGlobalViewByAliClusterIdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPrometheusGlobalViewByAliClusterIdsResponse
       */
      Models::AddPrometheusGlobalViewByAliClusterIdsResponse addPrometheusGlobalViewByAliClusterIdsWithOptions(const Models::AddPrometheusGlobalViewByAliClusterIdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddPrometheusGlobalViewByAliClusterIds is deprecated
       *
       * @summary Adds a global aggregation instance in Managed Service for Prometheus.
       *
       * @param request AddPrometheusGlobalViewByAliClusterIdsRequest
       * @return AddPrometheusGlobalViewByAliClusterIdsResponse
       */
      Models::AddPrometheusGlobalViewByAliClusterIdsResponse addPrometheusGlobalViewByAliClusterIds(const Models::AddPrometheusGlobalViewByAliClusterIdsRequest &request);

      /**
       * @deprecated OpenAPI AddPrometheusInstance is deprecated, please use ARMS::2019-08-08::CreatePrometheusInstance instead.
       *
       * @summary Creates a Prometheus instance for Remote Write.
       *
       * @param request AddPrometheusInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPrometheusInstanceResponse
       */
      Models::AddPrometheusInstanceResponse addPrometheusInstanceWithOptions(const Models::AddPrometheusInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddPrometheusInstance is deprecated, please use ARMS::2019-08-08::CreatePrometheusInstance instead.
       *
       * @summary Creates a Prometheus instance for Remote Write.
       *
       * @param request AddPrometheusInstanceRequest
       * @return AddPrometheusInstanceResponse
       */
      Models::AddPrometheusInstanceResponse addPrometheusInstance(const Models::AddPrometheusInstanceRequest &request);

      /**
       * @deprecated OpenAPI AddPrometheusIntegration is deprecated
       *
       * @summary Adds an exporter to a Prometheus instance for Container Service or a Prometheus instance for ECS.
       *
       * @param request AddPrometheusIntegrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPrometheusIntegrationResponse
       */
      Models::AddPrometheusIntegrationResponse addPrometheusIntegrationWithOptions(const Models::AddPrometheusIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddPrometheusIntegration is deprecated
       *
       * @summary Adds an exporter to a Prometheus instance for Container Service or a Prometheus instance for ECS.
       *
       * @param request AddPrometheusIntegrationRequest
       * @return AddPrometheusIntegrationResponse
       */
      Models::AddPrometheusIntegrationResponse addPrometheusIntegration(const Models::AddPrometheusIntegrationRequest &request);

      /**
       * @deprecated OpenAPI AddRecordingRule is deprecated
       *
       * @summary Creates or updates a recording rule of Managed Service for Prometheus.
       *
       * @param request AddRecordingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRecordingRuleResponse
       */
      Models::AddRecordingRuleResponse addRecordingRuleWithOptions(const Models::AddRecordingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddRecordingRule is deprecated
       *
       * @summary Creates or updates a recording rule of Managed Service for Prometheus.
       *
       * @param request AddRecordingRuleRequest
       * @return AddRecordingRuleResponse
       */
      Models::AddRecordingRuleResponse addRecordingRule(const Models::AddRecordingRuleRequest &request);

      /**
       * @deprecated OpenAPI AddTagToFlinkCluster is deprecated
       *
       * @summary Attaches the workspace ID and workspace name tags to the Prometheus instance corresponding to a Flink workspace.
       *
       * @param request AddTagToFlinkClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTagToFlinkClusterResponse
       */
      Models::AddTagToFlinkClusterResponse addTagToFlinkClusterWithOptions(const Models::AddTagToFlinkClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddTagToFlinkCluster is deprecated
       *
       * @summary Attaches the workspace ID and workspace name tags to the Prometheus instance corresponding to a Flink workspace.
       *
       * @param request AddTagToFlinkClusterRequest
       * @return AddTagToFlinkClusterResponse
       */
      Models::AddTagToFlinkClusterResponse addTagToFlinkCluster(const Models::AddTagToFlinkClusterRequest &request);

      /**
       * @deprecated OpenAPI AppendInstancesToPrometheusGlobalView is deprecated
       *
       * @summary Adds a data source to a global aggregation instance.
       *
       * @param request AppendInstancesToPrometheusGlobalViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AppendInstancesToPrometheusGlobalViewResponse
       */
      Models::AppendInstancesToPrometheusGlobalViewResponse appendInstancesToPrometheusGlobalViewWithOptions(const Models::AppendInstancesToPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AppendInstancesToPrometheusGlobalView is deprecated
       *
       * @summary Adds a data source to a global aggregation instance.
       *
       * @param request AppendInstancesToPrometheusGlobalViewRequest
       * @return AppendInstancesToPrometheusGlobalViewResponse
       */
      Models::AppendInstancesToPrometheusGlobalViewResponse appendInstancesToPrometheusGlobalView(const Models::AppendInstancesToPrometheusGlobalViewRequest &request);

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
       * @deprecated OpenAPI BindPrometheusGrafanaInstance is deprecated
       *
       * @summary Binds a Grafana workspace to a Prometheus instance.
       *
       * @param request BindPrometheusGrafanaInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindPrometheusGrafanaInstanceResponse
       */
      Models::BindPrometheusGrafanaInstanceResponse bindPrometheusGrafanaInstanceWithOptions(const Models::BindPrometheusGrafanaInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI BindPrometheusGrafanaInstance is deprecated
       *
       * @summary Binds a Grafana workspace to a Prometheus instance.
       *
       * @param request BindPrometheusGrafanaInstanceRequest
       * @return BindPrometheusGrafanaInstanceResponse
       */
      Models::BindPrometheusGrafanaInstanceResponse bindPrometheusGrafanaInstance(const Models::BindPrometheusGrafanaInstanceRequest &request);

      /**
       * @summary Blocks alert notifications in a time period.
       *
       * @param request BlockAlarmNotificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BlockAlarmNotificationResponse
       */
      Models::BlockAlarmNotificationResponse blockAlarmNotificationWithOptions(const Models::BlockAlarmNotificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Blocks alert notifications in a time period.
       *
       * @param request BlockAlarmNotificationRequest
       * @return BlockAlarmNotificationResponse
       */
      Models::BlockAlarmNotificationResponse blockAlarmNotification(const Models::BlockAlarmNotificationRequest &request);

      /**
       * @summary Modifies the severity level of an alert.
       *
       * @param request ChangeAlarmSeverityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeAlarmSeverityResponse
       */
      Models::ChangeAlarmSeverityResponse changeAlarmSeverityWithOptions(const Models::ChangeAlarmSeverityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the severity level of an alert.
       *
       * @param request ChangeAlarmSeverityRequest
       * @return ChangeAlarmSeverityResponse
       */
      Models::ChangeAlarmSeverityResponse changeAlarmSeverity(const Models::ChangeAlarmSeverityRequest &request);

      /**
       * @summary Moves a resource to a specific resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a resource to a specific resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Checks whether Application Real-Time Monitoring Service (ARMS) is available for commercial use in a region.
       *
       * @description You can call this operation to check whether ARMS is available for commercial use in a region.
       *
       * @param request CheckCommercialStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCommercialStatusResponse
       */
      Models::CheckCommercialStatusResponse checkCommercialStatusWithOptions(const Models::CheckCommercialStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether Application Real-Time Monitoring Service (ARMS) is available for commercial use in a region.
       *
       * @description You can call this operation to check whether ARMS is available for commercial use in a region.
       *
       * @param request CheckCommercialStatusRequest
       * @return CheckCommercialStatusResponse
       */
      Models::CheckCommercialStatusResponse checkCommercialStatus(const Models::CheckCommercialStatusRequest &request);

      /**
       * @summary Checks the status of a service in the current cluster, such as whether the service is activated and whether the payment is overdue.
       *
       * @param request CheckServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceStatusResponse
       */
      Models::CheckServiceStatusResponse checkServiceStatusWithOptions(const Models::CheckServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the status of a service in the current cluster, such as whether the service is activated and whether the payment is overdue.
       *
       * @param request CheckServiceStatusRequest
       * @return CheckServiceStatusResponse
       */
      Models::CheckServiceStatusResponse checkServiceStatus(const Models::CheckServiceStatusRequest &request);

      /**
       * @summary Claims an alert. This operation can be used together with escalation policies. When multiple handlers are involved in alert management, each handler can call this operation to claim alerts. After an alert is claimed, the alert enters the Being Processed state.
       *
       * @param request ClaimAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClaimAlarmResponse
       */
      Models::ClaimAlarmResponse claimAlarmWithOptions(const Models::ClaimAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Claims an alert. This operation can be used together with escalation policies. When multiple handlers are involved in alert management, each handler can call this operation to claim alerts. After an alert is claimed, the alert enters the Being Processed state.
       *
       * @param request ClaimAlarmRequest
       * @return ClaimAlarmResponse
       */
      Models::ClaimAlarmResponse claimAlarm(const Models::ClaimAlarmRequest &request);

      /**
       * @summary Disables an alert. Make sure that the alert is resolved before you disable the alert. If an alert is not resolved, new alerts can be triggered even after the alert is disabled.
       *
       * @param request CloseAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseAlarmResponse
       */
      Models::CloseAlarmResponse closeAlarmWithOptions(const Models::CloseAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an alert. Make sure that the alert is resolved before you disable the alert. If an alert is not resolved, new alerts can be triggered even after the alert is disabled.
       *
       * @param request CloseAlarmRequest
       * @return CloseAlarmResponse
       */
      Models::CloseAlarmResponse closeAlarm(const Models::CloseAlarmRequest &request);

      /**
       * @summary Turns on or off the main switch of an ARMS agent, or queries the status of the main switch.
       *
       * @description ****
       *
       * @param request ConfigAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigAppResponse
       */
      Models::ConfigAppResponse configAppWithOptions(const Models::ConfigAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Turns on or off the main switch of an ARMS agent, or queries the status of the main switch.
       *
       * @description ****
       *
       * @param request ConfigAppRequest
       * @return ConfigAppResponse
       */
      Models::ConfigAppResponse configApp(const Models::ConfigAppRequest &request);

      /**
       * @summary Creates an alert contact.
       *
       * @description This operation is no longer maintained. To create or modify an alert contact, call the CreateOrUpdateContact operation provided by the new version of the Alert Management module.
       *
       * @param request CreateAlertContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlertContactResponse
       */
      Models::CreateAlertContactResponse createAlertContactWithOptions(const Models::CreateAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert contact.
       *
       * @description This operation is no longer maintained. To create or modify an alert contact, call the CreateOrUpdateContact operation provided by the new version of the Alert Management module.
       *
       * @param request CreateAlertContactRequest
       * @return CreateAlertContactResponse
       */
      Models::CreateAlertContactResponse createAlertContact(const Models::CreateAlertContactRequest &request);

      /**
       * @summary Creates an alert contact group.
       *
       * @description The current API operation is no longer maintained. Call the CreateOrUpdateContactGroup operation of the new Alert Management module to create or modify alert contact groups.
       *
       * @param request CreateAlertContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlertContactGroupResponse
       */
      Models::CreateAlertContactGroupResponse createAlertContactGroupWithOptions(const Models::CreateAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert contact group.
       *
       * @description The current API operation is no longer maintained. Call the CreateOrUpdateContactGroup operation of the new Alert Management module to create or modify alert contact groups.
       *
       * @param request CreateAlertContactGroupRequest
       * @return CreateAlertContactGroupResponse
       */
      Models::CreateAlertContactGroupResponse createAlertContactGroup(const Models::CreateAlertContactGroupRequest &request);

      /**
       * @summary Creates a dispatch policy.
       *
       * @param request CreateDispatchRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDispatchRuleResponse
       */
      Models::CreateDispatchRuleResponse createDispatchRuleWithOptions(const Models::CreateDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dispatch policy.
       *
       * @param request CreateDispatchRuleRequest
       * @return CreateDispatchRuleResponse
       */
      Models::CreateDispatchRuleResponse createDispatchRule(const Models::CreateDispatchRuleRequest &request);

      /**
       * @summary Creates a custom job for an environment.
       *
       * @param request CreateEnvCustomJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnvCustomJobResponse
       */
      Models::CreateEnvCustomJobResponse createEnvCustomJobWithOptions(const Models::CreateEnvCustomJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom job for an environment.
       *
       * @param request CreateEnvCustomJobRequest
       * @return CreateEnvCustomJobResponse
       */
      Models::CreateEnvCustomJobResponse createEnvCustomJob(const Models::CreateEnvCustomJobRequest &request);

      /**
       * @summary Creates a PodMonitor for an environment.
       *
       * @param request CreateEnvPodMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnvPodMonitorResponse
       */
      Models::CreateEnvPodMonitorResponse createEnvPodMonitorWithOptions(const Models::CreateEnvPodMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a PodMonitor for an environment.
       *
       * @param request CreateEnvPodMonitorRequest
       * @return CreateEnvPodMonitorResponse
       */
      Models::CreateEnvPodMonitorResponse createEnvPodMonitor(const Models::CreateEnvPodMonitorRequest &request);

      /**
       * @summary Creates a ServiceMonitor for an environment.
       *
       * @param request CreateEnvServiceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnvServiceMonitorResponse
       */
      Models::CreateEnvServiceMonitorResponse createEnvServiceMonitorWithOptions(const Models::CreateEnvServiceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a ServiceMonitor for an environment.
       *
       * @param request CreateEnvServiceMonitorRequest
       * @return CreateEnvServiceMonitorResponse
       */
      Models::CreateEnvServiceMonitorResponse createEnvServiceMonitor(const Models::CreateEnvServiceMonitorRequest &request);

      /**
       * @summary Creates an environment instance.
       *
       * @param request CreateEnvironmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnvironmentResponse
       */
      Models::CreateEnvironmentResponse createEnvironmentWithOptions(const Models::CreateEnvironmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an environment instance.
       *
       * @param request CreateEnvironmentRequest
       * @return CreateEnvironmentResponse
       */
      Models::CreateEnvironmentResponse createEnvironment(const Models::CreateEnvironmentRequest &request);

      /**
       * @summary Creates a workspace in Managed Service for Grafana.
       *
       * @description Before you call the operation, make sure that you have learned about the billing methods and [pricing](https://www.alibabacloud.com/help/zh/grafana/product-overview/billing-4?spm=a2c4g.11186623.0.0.14c2d253B3SDbt) of Managed Service for Grafana.
       * > 
       * *   To create workspaces, you must complete real-name verification.
       * *   Regular users can create workspaces only in Managed Service for Grafana Developer Edition, Pro Edition, and Advanced Edition. `These editions charge fees.`
       * *   Internal users can create workspaces only in Managed Service for Grafana Beta Edition and Standard Edition. `These editions do not charge fees.`
       *
       * @param tmpReq CreateGrafanaWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGrafanaWorkspaceResponse
       */
      Models::CreateGrafanaWorkspaceResponse createGrafanaWorkspaceWithOptions(const Models::CreateGrafanaWorkspaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace in Managed Service for Grafana.
       *
       * @description Before you call the operation, make sure that you have learned about the billing methods and [pricing](https://www.alibabacloud.com/help/zh/grafana/product-overview/billing-4?spm=a2c4g.11186623.0.0.14c2d253B3SDbt) of Managed Service for Grafana.
       * > 
       * *   To create workspaces, you must complete real-name verification.
       * *   Regular users can create workspaces only in Managed Service for Grafana Developer Edition, Pro Edition, and Advanced Edition. `These editions charge fees.`
       * *   Internal users can create workspaces only in Managed Service for Grafana Beta Edition and Standard Edition. `These editions do not charge fees.`
       *
       * @param request CreateGrafanaWorkspaceRequest
       * @return CreateGrafanaWorkspaceResponse
       */
      Models::CreateGrafanaWorkspaceResponse createGrafanaWorkspace(const Models::CreateGrafanaWorkspaceRequest &request);

      /**
       * @summary Creates an alert integration.
       *
       * @param request CreateIntegrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIntegrationResponse
       */
      Models::CreateIntegrationResponse createIntegrationWithOptions(const Models::CreateIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert integration.
       *
       * @param request CreateIntegrationRequest
       * @return CreateIntegrationResponse
       */
      Models::CreateIntegrationResponse createIntegration(const Models::CreateIntegrationRequest &request);

      /**
       * @summary Creates or modifies an alert rule.
       *
       * @param request CreateOrUpdateAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateAlertRuleResponse
       */
      Models::CreateOrUpdateAlertRuleResponse createOrUpdateAlertRuleWithOptions(const Models::CreateOrUpdateAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an alert rule.
       *
       * @param request CreateOrUpdateAlertRuleRequest
       * @return CreateOrUpdateAlertRuleResponse
       */
      Models::CreateOrUpdateAlertRuleResponse createOrUpdateAlertRule(const Models::CreateOrUpdateAlertRuleRequest &request);

      /**
       * @summary Creates or modifies an alert contact.
       *
       * @param request CreateOrUpdateContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateContactResponse
       */
      Models::CreateOrUpdateContactResponse createOrUpdateContactWithOptions(const Models::CreateOrUpdateContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an alert contact.
       *
       * @param request CreateOrUpdateContactRequest
       * @return CreateOrUpdateContactResponse
       */
      Models::CreateOrUpdateContactResponse createOrUpdateContact(const Models::CreateOrUpdateContactRequest &request);

      /**
       * @summary Creates or modifies an alert contact group.
       *
       * @param request CreateOrUpdateContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateContactGroupResponse
       */
      Models::CreateOrUpdateContactGroupResponse createOrUpdateContactGroupWithOptions(const Models::CreateOrUpdateContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an alert contact group.
       *
       * @param request CreateOrUpdateContactGroupRequest
       * @return CreateOrUpdateContactGroupResponse
       */
      Models::CreateOrUpdateContactGroupResponse createOrUpdateContactGroup(const Models::CreateOrUpdateContactGroupRequest &request);

      /**
       * @summary Creates or modifies an EventBridge integration.
       *
       * @param request CreateOrUpdateEventBridgeIntegrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateEventBridgeIntegrationResponse
       */
      Models::CreateOrUpdateEventBridgeIntegrationResponse createOrUpdateEventBridgeIntegrationWithOptions(const Models::CreateOrUpdateEventBridgeIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an EventBridge integration.
       *
       * @param request CreateOrUpdateEventBridgeIntegrationRequest
       * @return CreateOrUpdateEventBridgeIntegrationResponse
       */
      Models::CreateOrUpdateEventBridgeIntegrationResponse createOrUpdateEventBridgeIntegration(const Models::CreateOrUpdateEventBridgeIntegrationRequest &request);

      /**
       * @summary Creates or updates an IM chatbot.
       *
       * @param request CreateOrUpdateIMRobotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateIMRobotResponse
       */
      Models::CreateOrUpdateIMRobotResponse createOrUpdateIMRobotWithOptions(const Models::CreateOrUpdateIMRobotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates an IM chatbot.
       *
       * @param request CreateOrUpdateIMRobotRequest
       * @return CreateOrUpdateIMRobotResponse
       */
      Models::CreateOrUpdateIMRobotResponse createOrUpdateIMRobot(const Models::CreateOrUpdateIMRobotRequest &request);

      /**
       * @summary Creates or modifies a notification policy.
       *
       * @param request CreateOrUpdateNotificationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateNotificationPolicyResponse
       */
      Models::CreateOrUpdateNotificationPolicyResponse createOrUpdateNotificationPolicyWithOptions(const Models::CreateOrUpdateNotificationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies a notification policy.
       *
       * @param request CreateOrUpdateNotificationPolicyRequest
       * @return CreateOrUpdateNotificationPolicyResponse
       */
      Models::CreateOrUpdateNotificationPolicyResponse createOrUpdateNotificationPolicy(const Models::CreateOrUpdateNotificationPolicyRequest &request);

      /**
       * @summary Creates or modifies a silence policy.
       *
       * @param request CreateOrUpdateSilencePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateSilencePolicyResponse
       */
      Models::CreateOrUpdateSilencePolicyResponse createOrUpdateSilencePolicyWithOptions(const Models::CreateOrUpdateSilencePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies a silence policy.
       *
       * @param request CreateOrUpdateSilencePolicyRequest
       * @return CreateOrUpdateSilencePolicyResponse
       */
      Models::CreateOrUpdateSilencePolicyResponse createOrUpdateSilencePolicy(const Models::CreateOrUpdateSilencePolicyRequest &request);

      /**
       * @summary Creates or modifies a webhook alert contact.
       *
       * @param request CreateOrUpdateWebhookContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateWebhookContactResponse
       */
      Models::CreateOrUpdateWebhookContactResponse createOrUpdateWebhookContactWithOptions(const Models::CreateOrUpdateWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies a webhook alert contact.
       *
       * @param request CreateOrUpdateWebhookContactRequest
       * @return CreateOrUpdateWebhookContactResponse
       */
      Models::CreateOrUpdateWebhookContactResponse createOrUpdateWebhookContact(const Models::CreateOrUpdateWebhookContactRequest &request);

      /**
       * @summary Creates an alert rule.
       *
       * @param request CreatePrometheusAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusAlertRuleResponse
       */
      Models::CreatePrometheusAlertRuleResponse createPrometheusAlertRuleWithOptions(const Models::CreatePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert rule.
       *
       * @param request CreatePrometheusAlertRuleRequest
       * @return CreatePrometheusAlertRuleResponse
       */
      Models::CreatePrometheusAlertRuleResponse createPrometheusAlertRule(const Models::CreatePrometheusAlertRuleRequest &request);

      /**
       * @summary Creates a Prometheus instance.
       *
       * @param request CreatePrometheusInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusInstanceResponse
       */
      Models::CreatePrometheusInstanceResponse createPrometheusInstanceWithOptions(const Models::CreatePrometheusInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Prometheus instance.
       *
       * @param request CreatePrometheusInstanceRequest
       * @return CreatePrometheusInstanceResponse
       */
      Models::CreatePrometheusInstanceResponse createPrometheusInstance(const Models::CreatePrometheusInstanceRequest &request);

      /**
       * @deprecated OpenAPI CreatePrometheusMonitoring is deprecated
       *
       * @summary Creates a monitoring configuration for a Prometheus instance.
       *
       * @param request CreatePrometheusMonitoringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusMonitoringResponse
       */
      Models::CreatePrometheusMonitoringResponse createPrometheusMonitoringWithOptions(const Models::CreatePrometheusMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreatePrometheusMonitoring is deprecated
       *
       * @summary Creates a monitoring configuration for a Prometheus instance.
       *
       * @param request CreatePrometheusMonitoringRequest
       * @return CreatePrometheusMonitoringResponse
       */
      Models::CreatePrometheusMonitoringResponse createPrometheusMonitoring(const Models::CreatePrometheusMonitoringRequest &request);

      /**
       * @summary Creates a Browser Monitoring task for an application.
       *
       * @param request CreateRetcodeAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRetcodeAppResponse
       */
      Models::CreateRetcodeAppResponse createRetcodeAppWithOptions(const Models::CreateRetcodeAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Browser Monitoring task for an application.
       *
       * @param request CreateRetcodeAppRequest
       * @return CreateRetcodeAppResponse
       */
      Models::CreateRetcodeAppResponse createRetcodeApp(const Models::CreateRetcodeAppRequest &request);

      /**
       * @summary Create a Real User Monitoring (RUM) application.
       *
       * @param tmpReq CreateRumAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRumAppResponse
       */
      Models::CreateRumAppResponse createRumAppWithOptions(const Models::CreateRumAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a Real User Monitoring (RUM) application.
       *
       * @param request CreateRumAppRequest
       * @return CreateRumAppResponse
       */
      Models::CreateRumAppResponse createRumApp(const Models::CreateRumAppRequest &request);

      /**
       * @summary Creates a file upload URL to upload SourceMap files, symbol table files, or dSYM files.
       *
       * @description This operation returns a URL. You can upload files to the URL. For more information, see [Upload local files with signed URLs](https://help.aliyun.com/document_detail/2579659.html).
       *
       * @param request CreateRumUploadFileUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRumUploadFileUrlResponse
       */
      Models::CreateRumUploadFileUrlResponse createRumUploadFileUrlWithOptions(const Models::CreateRumUploadFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a file upload URL to upload SourceMap files, symbol table files, or dSYM files.
       *
       * @description This operation returns a URL. You can upload files to the URL. For more information, see [Upload local files with signed URLs](https://help.aliyun.com/document_detail/2579659.html).
       *
       * @param request CreateRumUploadFileUrlRequest
       * @return CreateRumUploadFileUrlResponse
       */
      Models::CreateRumUploadFileUrlResponse createRumUploadFileUrl(const Models::CreateRumUploadFileUrlRequest &request);

      /**
       * @summary Creates or updates a synthetic monitoring task.
       *
       * @param tmpReq CreateSyntheticTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSyntheticTaskResponse
       */
      Models::CreateSyntheticTaskResponse createSyntheticTaskWithOptions(const Models::CreateSyntheticTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a synthetic monitoring task.
       *
       * @param request CreateSyntheticTaskRequest
       * @return CreateSyntheticTaskResponse
       */
      Models::CreateSyntheticTaskResponse createSyntheticTask(const Models::CreateSyntheticTaskRequest &request);

      /**
       * @summary Creates a scheduled synthetic test task.
       *
       * @param tmpReq CreateTimingSyntheticTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTimingSyntheticTaskResponse
       */
      Models::CreateTimingSyntheticTaskResponse createTimingSyntheticTaskWithOptions(const Models::CreateTimingSyntheticTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled synthetic test task.
       *
       * @param request CreateTimingSyntheticTaskRequest
       * @return CreateTimingSyntheticTaskResponse
       */
      Models::CreateTimingSyntheticTaskResponse createTimingSyntheticTask(const Models::CreateTimingSyntheticTaskRequest &request);

      /**
       * @summary Adds a contact for webhook alerts.
       *
       * @param request CreateWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWebhookResponse
       */
      Models::CreateWebhookResponse createWebhookWithOptions(const Models::CreateWebhookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a contact for webhook alerts.
       *
       * @param request CreateWebhookRequest
       * @return CreateWebhookResponse
       */
      Models::CreateWebhookResponse createWebhook(const Models::CreateWebhookRequest &request);

      /**
       * @summary Disables an authentication token.
       *
       * @param request DelAuthTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DelAuthTokenResponse
       */
      Models::DelAuthTokenResponse delAuthTokenWithOptions(const Models::DelAuthTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an authentication token.
       *
       * @param request DelAuthTokenRequest
       * @return DelAuthTokenResponse
       */
      Models::DelAuthTokenResponse delAuthToken(const Models::DelAuthTokenRequest &request);

      /**
       * @summary Delete AddonRelease data by AddonRelease name.
       *
       * @param request DeleteAddonReleaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAddonReleaseResponse
       */
      Models::DeleteAddonReleaseResponse deleteAddonReleaseWithOptions(const Models::DeleteAddonReleaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete AddonRelease data by AddonRelease name.
       *
       * @param request DeleteAddonReleaseRequest
       * @return DeleteAddonReleaseResponse
       */
      Models::DeleteAddonReleaseResponse deleteAddonRelease(const Models::DeleteAddonReleaseRequest &request);

      /**
       * @summary Deletes an DeleteAlertContact contact.
       *
       * @description ********
       *
       * @param request DeleteAlertContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertContactResponse
       */
      Models::DeleteAlertContactResponse deleteAlertContactWithOptions(const Models::DeleteAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an DeleteAlertContact contact.
       *
       * @description ********
       *
       * @param request DeleteAlertContactRequest
       * @return DeleteAlertContactResponse
       */
      Models::DeleteAlertContactResponse deleteAlertContact(const Models::DeleteAlertContactRequest &request);

      /**
       * @summary Deletes an DeleteAlertContactGroup contact group.
       *
       * @param request DeleteAlertContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertContactGroupResponse
       */
      Models::DeleteAlertContactGroupResponse deleteAlertContactGroupWithOptions(const Models::DeleteAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an DeleteAlertContactGroup contact group.
       *
       * @param request DeleteAlertContactGroupRequest
       * @return DeleteAlertContactGroupResponse
       */
      Models::DeleteAlertContactGroupResponse deleteAlertContactGroup(const Models::DeleteAlertContactGroupRequest &request);

      /**
       * @summary Deletes an alert rule.
       *
       * @param request DeleteAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertRuleResponse
       */
      Models::DeleteAlertRuleResponse deleteAlertRuleWithOptions(const Models::DeleteAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert rule.
       *
       * @param request DeleteAlertRuleRequest
       * @return DeleteAlertRuleResponse
       */
      Models::DeleteAlertRuleResponse deleteAlertRule(const Models::DeleteAlertRuleRequest &request);

      /**
       * @summary Deletes alert rules.
       *
       * @description The current operation is no longer maintained. Call the DeleteAlertRule operation of Alert Management (New) to delete alert rules.
       *
       * @param request DeleteAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertRulesResponse
       */
      Models::DeleteAlertRulesResponse deleteAlertRulesWithOptions(const Models::DeleteAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes alert rules.
       *
       * @description The current operation is no longer maintained. Call the DeleteAlertRule operation of Alert Management (New) to delete alert rules.
       *
       * @param request DeleteAlertRulesRequest
       * @return DeleteAlertRulesResponse
       */
      Models::DeleteAlertRulesResponse deleteAlertRules(const Models::DeleteAlertRulesRequest &request);

      /**
       * @summary Deletes multiple applications at a time based on the process IDs (PIDs).
       *
       * @param request DeleteAppListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppListResponse
       */
      Models::DeleteAppListResponse deleteAppListWithOptions(const Models::DeleteAppListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple applications at a time based on the process IDs (PIDs).
       *
       * @param request DeleteAppListRequest
       * @return DeleteAppListResponse
       */
      Models::DeleteAppListResponse deleteAppList(const Models::DeleteAppListRequest &request);

      /**
       * @deprecated OpenAPI DeleteCmsExporter is deprecated, please use ARMS::2019-08-08::DeleteAddonRelease instead.
       *
       * @summary Releases a Prometheus instance for Alibaba Cloud services.
       *
       * @param request DeleteCmsExporterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCmsExporterResponse
       */
      Models::DeleteCmsExporterResponse deleteCmsExporterWithOptions(const Models::DeleteCmsExporterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteCmsExporter is deprecated, please use ARMS::2019-08-08::DeleteAddonRelease instead.
       *
       * @summary Releases a Prometheus instance for Alibaba Cloud services.
       *
       * @param request DeleteCmsExporterRequest
       * @return DeleteCmsExporterResponse
       */
      Models::DeleteCmsExporterResponse deleteCmsExporter(const Models::DeleteCmsExporterRequest &request);

      /**
       * @summary Deletes alert contacts.
       *
       * @param request DeleteContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactResponse
       */
      Models::DeleteContactResponse deleteContactWithOptions(const Models::DeleteContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes alert contacts.
       *
       * @param request DeleteContactRequest
       * @return DeleteContactResponse
       */
      Models::DeleteContactResponse deleteContact(const Models::DeleteContactRequest &request);

      /**
       * @summary Deletes an alert contact group.
       *
       * @param request DeleteContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactGroupResponse
       */
      Models::DeleteContactGroupResponse deleteContactGroupWithOptions(const Models::DeleteContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert contact group.
       *
       * @param request DeleteContactGroupRequest
       * @return DeleteContactGroupResponse
       */
      Models::DeleteContactGroupResponse deleteContactGroup(const Models::DeleteContactGroupRequest &request);

      /**
       * @summary Deletes the dispatch policy of a specified ID.
       *
       * @param request DeleteDispatchRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDispatchRuleResponse
       */
      Models::DeleteDispatchRuleResponse deleteDispatchRuleWithOptions(const Models::DeleteDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the dispatch policy of a specified ID.
       *
       * @param request DeleteDispatchRuleRequest
       * @return DeleteDispatchRuleResponse
       */
      Models::DeleteDispatchRuleResponse deleteDispatchRule(const Models::DeleteDispatchRuleRequest &request);

      /**
       * @summary Deletes a custom job for an environment.
       *
       * @param request DeleteEnvCustomJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnvCustomJobResponse
       */
      Models::DeleteEnvCustomJobResponse deleteEnvCustomJobWithOptions(const Models::DeleteEnvCustomJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom job for an environment.
       *
       * @param request DeleteEnvCustomJobRequest
       * @return DeleteEnvCustomJobResponse
       */
      Models::DeleteEnvCustomJobResponse deleteEnvCustomJob(const Models::DeleteEnvCustomJobRequest &request);

      /**
       * @summary Deletes the PodMonitor of an environment.
       *
       * @param request DeleteEnvPodMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnvPodMonitorResponse
       */
      Models::DeleteEnvPodMonitorResponse deleteEnvPodMonitorWithOptions(const Models::DeleteEnvPodMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the PodMonitor of an environment.
       *
       * @param request DeleteEnvPodMonitorRequest
       * @return DeleteEnvPodMonitorResponse
       */
      Models::DeleteEnvPodMonitorResponse deleteEnvPodMonitor(const Models::DeleteEnvPodMonitorRequest &request);

      /**
       * @summary Deletes the ServiceMonitor of an environment.
       *
       * @param request DeleteEnvServiceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnvServiceMonitorResponse
       */
      Models::DeleteEnvServiceMonitorResponse deleteEnvServiceMonitorWithOptions(const Models::DeleteEnvServiceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the ServiceMonitor of an environment.
       *
       * @param request DeleteEnvServiceMonitorRequest
       * @return DeleteEnvServiceMonitorResponse
       */
      Models::DeleteEnvServiceMonitorResponse deleteEnvServiceMonitor(const Models::DeleteEnvServiceMonitorRequest &request);

      /**
       * @summary Deletes an environment instance.
       *
       * @param request DeleteEnvironmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnvironmentResponse
       */
      Models::DeleteEnvironmentResponse deleteEnvironmentWithOptions(const Models::DeleteEnvironmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an environment instance.
       *
       * @param request DeleteEnvironmentRequest
       * @return DeleteEnvironmentResponse
       */
      Models::DeleteEnvironmentResponse deleteEnvironment(const Models::DeleteEnvironmentRequest &request);

      /**
       * @summary Deletes a feature.
       *
       * @param request DeleteEnvironmentFeatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnvironmentFeatureResponse
       */
      Models::DeleteEnvironmentFeatureResponse deleteEnvironmentFeatureWithOptions(const Models::DeleteEnvironmentFeatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a feature.
       *
       * @param request DeleteEnvironmentFeatureRequest
       * @return DeleteEnvironmentFeatureResponse
       */
      Models::DeleteEnvironmentFeatureResponse deleteEnvironmentFeature(const Models::DeleteEnvironmentFeatureRequest &request);

      /**
       * @summary Deletes an EventBridge integration.
       *
       * @param request DeleteEventBridgeIntegrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventBridgeIntegrationResponse
       */
      Models::DeleteEventBridgeIntegrationResponse deleteEventBridgeIntegrationWithOptions(const Models::DeleteEventBridgeIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an EventBridge integration.
       *
       * @param request DeleteEventBridgeIntegrationRequest
       * @return DeleteEventBridgeIntegrationResponse
       */
      Models::DeleteEventBridgeIntegrationResponse deleteEventBridgeIntegration(const Models::DeleteEventBridgeIntegrationRequest &request);

      /**
       * @deprecated OpenAPI DeleteGrafanaResource is deprecated
       *
       * @summary Deletes Grafana dashboard resources from a Managed Service for Prometheus instance.
       *
       * @param request DeleteGrafanaResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGrafanaResourceResponse
       */
      Models::DeleteGrafanaResourceResponse deleteGrafanaResourceWithOptions(const Models::DeleteGrafanaResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteGrafanaResource is deprecated
       *
       * @summary Deletes Grafana dashboard resources from a Managed Service for Prometheus instance.
       *
       * @param request DeleteGrafanaResourceRequest
       * @return DeleteGrafanaResourceResponse
       */
      Models::DeleteGrafanaResourceResponse deleteGrafanaResource(const Models::DeleteGrafanaResourceRequest &request);

      /**
       * @summary Deletes a Managed Service for Prometheus workspace.
       *
       * @description *   You can delete workspaces only in Managed Service for Prometheus Beta Edition, which is `free of charge`.
       * *   You cannot delete workspaces in Managed Service for Prometheus Developer Edition, Pro Edition, and Advanced Edition. You can go to the [User Center](https://usercenter2.aliyun.com/refund/refund) to unsubscribe from workspaces.
       *
       * @param request DeleteGrafanaWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGrafanaWorkspaceResponse
       */
      Models::DeleteGrafanaWorkspaceResponse deleteGrafanaWorkspaceWithOptions(const Models::DeleteGrafanaWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Managed Service for Prometheus workspace.
       *
       * @description *   You can delete workspaces only in Managed Service for Prometheus Beta Edition, which is `free of charge`.
       * *   You cannot delete workspaces in Managed Service for Prometheus Developer Edition, Pro Edition, and Advanced Edition. You can go to the [User Center](https://usercenter2.aliyun.com/refund/refund) to unsubscribe from workspaces.
       *
       * @param request DeleteGrafanaWorkspaceRequest
       * @return DeleteGrafanaWorkspaceResponse
       */
      Models::DeleteGrafanaWorkspaceResponse deleteGrafanaWorkspace(const Models::DeleteGrafanaWorkspaceRequest &request);

      /**
       * @summary Deletes an instant messaging (IM) chatbot.
       *
       * @param request DeleteIMRobotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIMRobotResponse
       */
      Models::DeleteIMRobotResponse deleteIMRobotWithOptions(const Models::DeleteIMRobotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an instant messaging (IM) chatbot.
       *
       * @param request DeleteIMRobotRequest
       * @return DeleteIMRobotResponse
       */
      Models::DeleteIMRobotResponse deleteIMRobot(const Models::DeleteIMRobotRequest &request);

      /**
       * @deprecated OpenAPI DeleteIntegration is deprecated, please use ARMS::2019-08-08::DeleteAddonRelease instead.
       *
       * @summary Deletes collection rules from an integration.
       *
       * @param request DeleteIntegrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIntegrationResponse
       */
      Models::DeleteIntegrationResponse deleteIntegrationWithOptions(const Models::DeleteIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteIntegration is deprecated, please use ARMS::2019-08-08::DeleteAddonRelease instead.
       *
       * @summary Deletes collection rules from an integration.
       *
       * @param request DeleteIntegrationRequest
       * @return DeleteIntegrationResponse
       */
      Models::DeleteIntegrationResponse deleteIntegration(const Models::DeleteIntegrationRequest &request);

      /**
       * @summary Deletes an alert integration.
       *
       * @param request DeleteIntegrationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIntegrationsResponse
       */
      Models::DeleteIntegrationsResponse deleteIntegrationsWithOptions(const Models::DeleteIntegrationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert integration.
       *
       * @param request DeleteIntegrationsRequest
       * @return DeleteIntegrationsResponse
       */
      Models::DeleteIntegrationsResponse deleteIntegrations(const Models::DeleteIntegrationsRequest &request);

      /**
       * @summary Deletes a notification policy based on its ID.
       *
       * @param request DeleteNotificationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNotificationPolicyResponse
       */
      Models::DeleteNotificationPolicyResponse deleteNotificationPolicyWithOptions(const Models::DeleteNotificationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a notification policy based on its ID.
       *
       * @param request DeleteNotificationPolicyRequest
       * @return DeleteNotificationPolicyResponse
       */
      Models::DeleteNotificationPolicyResponse deleteNotificationPolicy(const Models::DeleteNotificationPolicyRequest &request);

      /**
       * @summary Deletes an alert rule of Prometheus Service.
       *
       * @param request DeletePrometheusAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrometheusAlertRuleResponse
       */
      Models::DeletePrometheusAlertRuleResponse deletePrometheusAlertRuleWithOptions(const Models::DeletePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert rule of Prometheus Service.
       *
       * @param request DeletePrometheusAlertRuleRequest
       * @return DeletePrometheusAlertRuleResponse
       */
      Models::DeletePrometheusAlertRuleResponse deletePrometheusAlertRule(const Models::DeletePrometheusAlertRuleRequest &request);

      /**
       * @deprecated OpenAPI DeletePrometheusGlobalView is deprecated
       *
       * @summary Deletes a global aggregation instance from Prometheus Service.
       *
       * @param request DeletePrometheusGlobalViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrometheusGlobalViewResponse
       */
      Models::DeletePrometheusGlobalViewResponse deletePrometheusGlobalViewWithOptions(const Models::DeletePrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeletePrometheusGlobalView is deprecated
       *
       * @summary Deletes a global aggregation instance from Prometheus Service.
       *
       * @param request DeletePrometheusGlobalViewRequest
       * @return DeletePrometheusGlobalViewResponse
       */
      Models::DeletePrometheusGlobalViewResponse deletePrometheusGlobalView(const Models::DeletePrometheusGlobalViewRequest &request);

      /**
       * @deprecated OpenAPI DeletePrometheusIntegration is deprecated
       *
       * @summary Deletes an exporter from a Prometheus instance for Container Service or a Prometheus instance for ECS.
       *
       * @param request DeletePrometheusIntegrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrometheusIntegrationResponse
       */
      Models::DeletePrometheusIntegrationResponse deletePrometheusIntegrationWithOptions(const Models::DeletePrometheusIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeletePrometheusIntegration is deprecated
       *
       * @summary Deletes an exporter from a Prometheus instance for Container Service or a Prometheus instance for ECS.
       *
       * @param request DeletePrometheusIntegrationRequest
       * @return DeletePrometheusIntegrationResponse
       */
      Models::DeletePrometheusIntegrationResponse deletePrometheusIntegration(const Models::DeletePrometheusIntegrationRequest &request);

      /**
       * @deprecated OpenAPI DeletePrometheusMonitoring is deprecated
       *
       * @summary Deletes the monitoring configuration of a Prometheus instance.
       *
       * @param request DeletePrometheusMonitoringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrometheusMonitoringResponse
       */
      Models::DeletePrometheusMonitoringResponse deletePrometheusMonitoringWithOptions(const Models::DeletePrometheusMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeletePrometheusMonitoring is deprecated
       *
       * @summary Deletes the monitoring configuration of a Prometheus instance.
       *
       * @param request DeletePrometheusMonitoringRequest
       * @return DeletePrometheusMonitoringResponse
       */
      Models::DeletePrometheusMonitoringResponse deletePrometheusMonitoring(const Models::DeletePrometheusMonitoringRequest &request);

      /**
       * @summary Deletes a Browser Monitoring task.
       *
       * @param request DeleteRetcodeAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRetcodeAppResponse
       */
      Models::DeleteRetcodeAppResponse deleteRetcodeAppWithOptions(const Models::DeleteRetcodeAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Browser Monitoring task.
       *
       * @param request DeleteRetcodeAppRequest
       * @return DeleteRetcodeAppResponse
       */
      Models::DeleteRetcodeAppResponse deleteRetcodeApp(const Models::DeleteRetcodeAppRequest &request);

      /**
       * @summary Deletes a RUM application.
       *
       * @param request DeleteRumAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRumAppResponse
       */
      Models::DeleteRumAppResponse deleteRumAppWithOptions(const Models::DeleteRumAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a RUM application.
       *
       * @param request DeleteRumAppRequest
       * @return DeleteRumAppResponse
       */
      Models::DeleteRumAppResponse deleteRumApp(const Models::DeleteRumAppRequest &request);

      /**
       * @summary Deletes a file such as a symbol table or SourceMap.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request DeleteRumUploadFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRumUploadFileResponse
       */
      Models::DeleteRumUploadFileResponse deleteRumUploadFileWithOptions(const Models::DeleteRumUploadFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a file such as a symbol table or SourceMap.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request DeleteRumUploadFileRequest
       * @return DeleteRumUploadFileResponse
       */
      Models::DeleteRumUploadFileResponse deleteRumUploadFile(const Models::DeleteRumUploadFileRequest &request);

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
       * @summary The ID of the silence policy.
       *
       * @param request DeleteSilencePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSilencePolicyResponse
       */
      Models::DeleteSilencePolicyResponse deleteSilencePolicyWithOptions(const Models::DeleteSilencePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the silence policy.
       *
       * @param request DeleteSilencePolicyRequest
       * @return DeleteSilencePolicyResponse
       */
      Models::DeleteSilencePolicyResponse deleteSilencePolicy(const Models::DeleteSilencePolicyRequest &request);

      /**
       * @summary Deletes the SourceMap files uploaded in Browser Monitoring.
       *
       * @param tmpReq DeleteSourceMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSourceMapResponse
       */
      Models::DeleteSourceMapResponse deleteSourceMapWithOptions(const Models::DeleteSourceMapRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the SourceMap files uploaded in Browser Monitoring.
       *
       * @param request DeleteSourceMapRequest
       * @return DeleteSourceMapResponse
       */
      Models::DeleteSourceMapResponse deleteSourceMap(const Models::DeleteSourceMapRequest &request);

      /**
       * @summary Deletes scheduled synthetic monitoring tasks.
       *
       * @param request DeleteSyntheticTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSyntheticTaskResponse
       */
      Models::DeleteSyntheticTaskResponse deleteSyntheticTaskWithOptions(const Models::DeleteSyntheticTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes scheduled synthetic monitoring tasks.
       *
       * @param request DeleteSyntheticTaskRequest
       * @return DeleteSyntheticTaskResponse
       */
      Models::DeleteSyntheticTaskResponse deleteSyntheticTask(const Models::DeleteSyntheticTaskRequest &request);

      /**
       * @summary Deletes a scheduled synthetic monitoring task.
       *
       * @param request DeleteTimingSyntheticTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTimingSyntheticTaskResponse
       */
      Models::DeleteTimingSyntheticTaskResponse deleteTimingSyntheticTaskWithOptions(const Models::DeleteTimingSyntheticTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scheduled synthetic monitoring task.
       *
       * @param request DeleteTimingSyntheticTaskRequest
       * @return DeleteTimingSyntheticTaskResponse
       */
      Models::DeleteTimingSyntheticTaskResponse deleteTimingSyntheticTask(const Models::DeleteTimingSyntheticTaskRequest &request);

      /**
       * @summary Deletes an application based on a specified process identifier (PID) and application type.
       *
       * @param tmpReq DeleteTraceAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTraceAppResponse
       */
      Models::DeleteTraceAppResponse deleteTraceAppWithOptions(const Models::DeleteTraceAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application based on a specified process identifier (PID) and application type.
       *
       * @param request DeleteTraceAppRequest
       * @return DeleteTraceAppResponse
       */
      Models::DeleteTraceAppResponse deleteTraceApp(const Models::DeleteTraceAppRequest &request);

      /**
       * @summary Deletes a webhook alert contact.
       *
       * @param request DeleteWebhookContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWebhookContactResponse
       */
      Models::DeleteWebhookContactResponse deleteWebhookContactWithOptions(const Models::DeleteWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a webhook alert contact.
       *
       * @param request DeleteWebhookContactRequest
       * @return DeleteWebhookContactResponse
       */
      Models::DeleteWebhookContactResponse deleteWebhookContact(const Models::DeleteWebhookContactRequest &request);

      /**
       * @summary Queries the metric details of a component.
       *
       * @param request DescribeAddonMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAddonMetricsResponse
       */
      Models::DescribeAddonMetricsResponse describeAddonMetricsWithOptions(const Models::DescribeAddonMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metric details of a component.
       *
       * @param request DescribeAddonMetricsRequest
       * @return DescribeAddonMetricsResponse
       */
      Models::DescribeAddonMetricsResponse describeAddonMetrics(const Models::DescribeAddonMetricsRequest &request);

      /**
       * @summary Queries the release information of an add-on by name.
       *
       * @param request DescribeAddonReleaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAddonReleaseResponse
       */
      Models::DescribeAddonReleaseResponse describeAddonReleaseWithOptions(const Models::DescribeAddonReleaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the release information of an add-on by name.
       *
       * @param request DescribeAddonReleaseRequest
       * @return DescribeAddonReleaseResponse
       */
      Models::DescribeAddonReleaseResponse describeAddonRelease(const Models::DescribeAddonReleaseRequest &request);

      /**
       * @summary Queries an alert contact group.
       *
       * @param request DescribeContactGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContactGroupsResponse
       */
      Models::DescribeContactGroupsResponse describeContactGroupsWithOptions(const Models::DescribeContactGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an alert contact group.
       *
       * @param request DescribeContactGroupsRequest
       * @return DescribeContactGroupsResponse
       */
      Models::DescribeContactGroupsResponse describeContactGroups(const Models::DescribeContactGroupsRequest &request);

      /**
       * @summary Queries alert contacts.
       *
       * @param request DescribeContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContactsResponse
       */
      Models::DescribeContactsResponse describeContactsWithOptions(const Models::DescribeContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert contacts.
       *
       * @param request DescribeContactsRequest
       * @return DescribeContactsResponse
       */
      Models::DescribeContactsResponse describeContacts(const Models::DescribeContactsRequest &request);

      /**
       * @summary Queries the information about a dispatch policy.
       *
       * @param request DescribeDispatchRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDispatchRuleResponse
       */
      Models::DescribeDispatchRuleResponse describeDispatchRuleWithOptions(const Models::DescribeDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a dispatch policy.
       *
       * @param request DescribeDispatchRuleRequest
       * @return DescribeDispatchRuleResponse
       */
      Models::DescribeDispatchRuleResponse describeDispatchRule(const Models::DescribeDispatchRuleRequest &request);

      /**
       * @summary Queries the details of a custom job for an environment.
       *
       * @param request DescribeEnvCustomJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnvCustomJobResponse
       */
      Models::DescribeEnvCustomJobResponse describeEnvCustomJobWithOptions(const Models::DescribeEnvCustomJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a custom job for an environment.
       *
       * @param request DescribeEnvCustomJobRequest
       * @return DescribeEnvCustomJobResponse
       */
      Models::DescribeEnvCustomJobResponse describeEnvCustomJob(const Models::DescribeEnvCustomJobRequest &request);

      /**
       * @summary 查询指定环境实例的废弃指标列表
       *
       * @param request DescribeEnvDropMetricsRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnvDropMetricsRuleResponse
       */
      Models::DescribeEnvDropMetricsRuleResponse describeEnvDropMetricsRuleWithOptions(const Models::DescribeEnvDropMetricsRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定环境实例的废弃指标列表
       *
       * @param request DescribeEnvDropMetricsRuleRequest
       * @return DescribeEnvDropMetricsRuleResponse
       */
      Models::DescribeEnvDropMetricsRuleResponse describeEnvDropMetricsRule(const Models::DescribeEnvDropMetricsRuleRequest &request);

      /**
       * @summary Queries the PodMonitor details of an environment.
       *
       * @param request DescribeEnvPodMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnvPodMonitorResponse
       */
      Models::DescribeEnvPodMonitorResponse describeEnvPodMonitorWithOptions(const Models::DescribeEnvPodMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the PodMonitor details of an environment.
       *
       * @param request DescribeEnvPodMonitorRequest
       * @return DescribeEnvPodMonitorResponse
       */
      Models::DescribeEnvPodMonitorResponse describeEnvPodMonitor(const Models::DescribeEnvPodMonitorRequest &request);

      /**
       * @summary Queries the ServiceMonitor details of an environment.
       *
       * @param request DescribeEnvServiceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnvServiceMonitorResponse
       */
      Models::DescribeEnvServiceMonitorResponse describeEnvServiceMonitorWithOptions(const Models::DescribeEnvServiceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ServiceMonitor details of an environment.
       *
       * @param request DescribeEnvServiceMonitorRequest
       * @return DescribeEnvServiceMonitorResponse
       */
      Models::DescribeEnvServiceMonitorResponse describeEnvServiceMonitor(const Models::DescribeEnvServiceMonitorRequest &request);

      /**
       * @summary Queries the details of an environment.
       *
       * @param request DescribeEnvironmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnvironmentResponse
       */
      Models::DescribeEnvironmentResponse describeEnvironmentWithOptions(const Models::DescribeEnvironmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an environment.
       *
       * @param request DescribeEnvironmentRequest
       * @return DescribeEnvironmentResponse
       */
      Models::DescribeEnvironmentResponse describeEnvironment(const Models::DescribeEnvironmentRequest &request);

      /**
       * @summary Queries the details of a feature.
       *
       * @param request DescribeEnvironmentFeatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnvironmentFeatureResponse
       */
      Models::DescribeEnvironmentFeatureResponse describeEnvironmentFeatureWithOptions(const Models::DescribeEnvironmentFeatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a feature.
       *
       * @param request DescribeEnvironmentFeatureRequest
       * @return DescribeEnvironmentFeatureResponse
       */
      Models::DescribeEnvironmentFeatureResponse describeEnvironmentFeature(const Models::DescribeEnvironmentFeatureRequest &request);

      /**
       * @summary Queries instant messaging (IM) chatbots.
       *
       * @param request DescribeIMRobotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIMRobotsResponse
       */
      Models::DescribeIMRobotsResponse describeIMRobotsWithOptions(const Models::DescribeIMRobotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instant messaging (IM) chatbots.
       *
       * @param request DescribeIMRobotsRequest
       * @return DescribeIMRobotsResponse
       */
      Models::DescribeIMRobotsResponse describeIMRobots(const Models::DescribeIMRobotsRequest &request);

      /**
       * @summary Queries the details about an alert rule for a Prometheus instance.
       *
       * @param request DescribePrometheusAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrometheusAlertRuleResponse
       */
      Models::DescribePrometheusAlertRuleResponse describePrometheusAlertRuleWithOptions(const Models::DescribePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about an alert rule for a Prometheus instance.
       *
       * @param request DescribePrometheusAlertRuleRequest
       * @return DescribePrometheusAlertRuleResponse
       */
      Models::DescribePrometheusAlertRuleResponse describePrometheusAlertRule(const Models::DescribePrometheusAlertRuleRequest &request);

      /**
       * @summary Queries the license key.
       *
       * @param request DescribeTraceLicenseKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTraceLicenseKeyResponse
       */
      Models::DescribeTraceLicenseKeyResponse describeTraceLicenseKeyWithOptions(const Models::DescribeTraceLicenseKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the license key.
       *
       * @param request DescribeTraceLicenseKeyRequest
       * @return DescribeTraceLicenseKeyResponse
       */
      Models::DescribeTraceLicenseKeyResponse describeTraceLicenseKey(const Models::DescribeTraceLicenseKeyRequest &request);

      /**
       * @summary Queries the list of webhook alert contacts.
       *
       * @param request DescribeWebhookContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebhookContactsResponse
       */
      Models::DescribeWebhookContactsResponse describeWebhookContactsWithOptions(const Models::DescribeWebhookContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of webhook alert contacts.
       *
       * @param request DescribeWebhookContactsRequest
       * @return DescribeWebhookContactsResponse
       */
      Models::DescribeWebhookContactsResponse describeWebhookContacts(const Models::DescribeWebhookContactsRequest &request);

      /**
       * @summary Performs actions based on the specified module type.
       *
       * @param request DoInsightsActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DoInsightsActionResponse
       */
      Models::DoInsightsActionResponse doInsightsActionWithOptions(const Models::DoInsightsActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs actions based on the specified module type.
       *
       * @param request DoInsightsActionRequest
       * @return DoInsightsActionResponse
       */
      Models::DoInsightsActionResponse doInsightsAction(const Models::DoInsightsActionRequest &request);

      /**
       * @deprecated OpenAPI EnableMetric is deprecated
       *
       * @summary Enables a discarded metric.
       *
       * @param request EnableMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableMetricResponse
       */
      Models::EnableMetricResponse enableMetricWithOptions(const Models::EnableMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI EnableMetric is deprecated
       *
       * @summary Enables a discarded metric.
       *
       * @param request EnableMetricRequest
       * @return EnableMetricResponse
       */
      Models::EnableMetricResponse enableMetric(const Models::EnableMetricRequest &request);

      /**
       * @summary Obtains the URL for downloading an agent.
       *
       * @param request GetAgentDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentDownloadUrlResponse
       */
      Models::GetAgentDownloadUrlResponse getAgentDownloadUrlWithOptions(const Models::GetAgentDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the URL for downloading an agent.
       *
       * @param request GetAgentDownloadUrlRequest
       * @return GetAgentDownloadUrlResponse
       */
      Models::GetAgentDownloadUrlResponse getAgentDownloadUrl(const Models::GetAgentDownloadUrlRequest &request);

      /**
       * @summary Obtains the URL for downloading an agent.
       *
       * @param request GetAgentDownloadUrlV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentDownloadUrlV2Response
       */
      Models::GetAgentDownloadUrlV2Response getAgentDownloadUrlV2WithOptions(const Models::GetAgentDownloadUrlV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the URL for downloading an agent.
       *
       * @param request GetAgentDownloadUrlV2Request
       * @return GetAgentDownloadUrlV2Response
       */
      Models::GetAgentDownloadUrlV2Response getAgentDownloadUrlV2(const Models::GetAgentDownloadUrlV2Request &request);

      /**
       * @summary Queries alert rules.
       *
       * @param request GetAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlertRulesResponse
       */
      Models::GetAlertRulesResponse getAlertRulesWithOptions(const Models::GetAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert rules.
       *
       * @param request GetAlertRulesRequest
       * @return GetAlertRulesResponse
       */
      Models::GetAlertRulesResponse getAlertRules(const Models::GetAlertRulesRequest &request);

      /**
       * @summary Queries the API operations of application monitoring by page.
       *
       * @param request GetAppApiByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppApiByPageResponse
       */
      Models::GetAppApiByPageResponse getAppApiByPageWithOptions(const Models::GetAppApiByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the API operations of application monitoring by page.
       *
       * @param request GetAppApiByPageRequest
       * @return GetAppApiByPageResponse
       */
      Models::GetAppApiByPageResponse getAppApiByPage(const Models::GetAppApiByPageRequest &request);

      /**
       * @summary Obtain the JVM configuration information of each instance of the application
       *
       * @param request GetAppJVMConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppJVMConfigResponse
       */
      Models::GetAppJVMConfigResponse getAppJVMConfigWithOptions(const Models::GetAppJVMConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the JVM configuration information of each instance of the application
       *
       * @param request GetAppJVMConfigRequest
       * @return GetAppJVMConfigResponse
       */
      Models::GetAppJVMConfigResponse getAppJVMConfig(const Models::GetAppJVMConfigRequest &request);

      /**
       * @summary Obtains an authentication token. When you connect a Container Service for Kubernetes (ACK) cluster to Prometheus Service over the Internet, you must use a token for authentication.
       *
       * @param request GetAuthTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthTokenResponse
       */
      Models::GetAuthTokenResponse getAuthTokenWithOptions(const Models::GetAuthTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains an authentication token. When you connect a Container Service for Kubernetes (ACK) cluster to Prometheus Service over the Internet, you must use a token for authentication.
       *
       * @param request GetAuthTokenRequest
       * @return GetAuthTokenResponse
       */
      Models::GetAuthTokenResponse getAuthToken(const Models::GetAuthTokenRequest &request);

      /**
       * @deprecated OpenAPI GetCloudClusterAllUrl is deprecated, please use ARMS::2019-08-08::GetRemoteWriteUrl instead.
       *
       * @summary Queries the read and write URLs of a CloudMonitor instance, such as Pushgateway and Grafana URLs.
       *
       * @param request GetCloudClusterAllUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCloudClusterAllUrlResponse
       */
      Models::GetCloudClusterAllUrlResponse getCloudClusterAllUrlWithOptions(const Models::GetCloudClusterAllUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetCloudClusterAllUrl is deprecated, please use ARMS::2019-08-08::GetRemoteWriteUrl instead.
       *
       * @summary Queries the read and write URLs of a CloudMonitor instance, such as Pushgateway and Grafana URLs.
       *
       * @param request GetCloudClusterAllUrlRequest
       * @return GetCloudClusterAllUrlResponse
       */
      Models::GetCloudClusterAllUrlResponse getCloudClusterAllUrl(const Models::GetCloudClusterAllUrlRequest &request);

      /**
       * @deprecated OpenAPI GetClusterAllUrl is deprecated, please use ARMS::2019-08-08::GetPrometheusInstance instead.
       *
       * @summary Obtains all the URLs of a cluster, including remote read and write URLs, Pushgateway URLs, and Grafana URLs.
       *
       * @param request GetClusterAllUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterAllUrlResponse
       */
      Models::GetClusterAllUrlResponse getClusterAllUrlWithOptions(const Models::GetClusterAllUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetClusterAllUrl is deprecated, please use ARMS::2019-08-08::GetPrometheusInstance instead.
       *
       * @summary Obtains all the URLs of a cluster, including remote read and write URLs, Pushgateway URLs, and Grafana URLs.
       *
       * @param request GetClusterAllUrlRequest
       * @return GetClusterAllUrlResponse
       */
      Models::GetClusterAllUrlResponse getClusterAllUrl(const Models::GetClusterAllUrlRequest &request);

      /**
       * @summary Queries whether the current account has activated the commercial edition of a service.
       *
       * @param request GetCommercialStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCommercialStatusResponse
       */
      Models::GetCommercialStatusResponse getCommercialStatusWithOptions(const Models::GetCommercialStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the current account has activated the commercial edition of a service.
       *
       * @param request GetCommercialStatusRequest
       * @return GetCommercialStatusResponse
       */
      Models::GetCommercialStatusResponse getCommercialStatus(const Models::GetCommercialStatusRequest &request);

      /**
       * @deprecated OpenAPI GetExploreUrl is deprecated
       *
       * @summary Enables the Explore feature of Grafana.
       *
       * @param request GetExploreUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExploreUrlResponse
       */
      Models::GetExploreUrlResponse getExploreUrlWithOptions(const Models::GetExploreUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetExploreUrl is deprecated
       *
       * @summary Enables the Explore feature of Grafana.
       *
       * @param request GetExploreUrlRequest
       * @return GetExploreUrlResponse
       */
      Models::GetExploreUrlResponse getExploreUrl(const Models::GetExploreUrlRequest &request);

      /**
       * @summary Queries the information about a Grafana workspace.
       *
       * @description Note: The list returned by this operation includes the workspaces of Developer Edition, Expert Edition, and Advanced Edition. The list does not include the workspaces of Shared Edition.
       *
       * @param request GetGrafanaWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGrafanaWorkspaceResponse
       */
      Models::GetGrafanaWorkspaceResponse getGrafanaWorkspaceWithOptions(const Models::GetGrafanaWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a Grafana workspace.
       *
       * @description Note: The list returned by this operation includes the workspaces of Developer Edition, Expert Edition, and Advanced Edition. The list does not include the workspaces of Shared Edition.
       *
       * @param request GetGrafanaWorkspaceRequest
       * @return GetGrafanaWorkspaceResponse
       */
      Models::GetGrafanaWorkspaceResponse getGrafanaWorkspace(const Models::GetGrafanaWorkspaceRequest &request);

      /**
       * @deprecated OpenAPI GetIntegrationState is deprecated, please use ARMS::2019-08-08::DescribeAddonRelease instead.
       *
       * @summary Queries the integration state of the dashboards and collection rules of Application Real-Time Monitoring Service (ARMS) Prometheus.
       *
       * @param request GetIntegrationStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIntegrationStateResponse
       */
      Models::GetIntegrationStateResponse getIntegrationStateWithOptions(const Models::GetIntegrationStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetIntegrationState is deprecated, please use ARMS::2019-08-08::DescribeAddonRelease instead.
       *
       * @summary Queries the integration state of the dashboards and collection rules of Application Real-Time Monitoring Service (ARMS) Prometheus.
       *
       * @param request GetIntegrationStateRequest
       * @return GetIntegrationStateResponse
       */
      Models::GetIntegrationStateResponse getIntegrationState(const Models::GetIntegrationStateRequest &request);

      /**
       * @deprecated OpenAPI GetManagedPrometheusStatus is deprecated
       *
       * @summary Queries the installation status of a Prometheus agent in a serverless Kubernetes (ASK) cluster or an Elastic Compute Service (ECS) cluster.
       *
       * @param request GetManagedPrometheusStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetManagedPrometheusStatusResponse
       */
      Models::GetManagedPrometheusStatusResponse getManagedPrometheusStatusWithOptions(const Models::GetManagedPrometheusStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetManagedPrometheusStatus is deprecated
       *
       * @summary Queries the installation status of a Prometheus agent in a serverless Kubernetes (ASK) cluster or an Elastic Compute Service (ECS) cluster.
       *
       * @param request GetManagedPrometheusStatusRequest
       * @return GetManagedPrometheusStatusResponse
       */
      Models::GetManagedPrometheusStatusResponse getManagedPrometheusStatus(const Models::GetManagedPrometheusStatusRequest &request);

      /**
       * @summary Queries the details of one or more traces.
       *
       * @param request GetMultipleTraceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultipleTraceResponse
       */
      Models::GetMultipleTraceResponse getMultipleTraceWithOptions(const Models::GetMultipleTraceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more traces.
       *
       * @param request GetMultipleTraceRequest
       * @return GetMultipleTraceResponse
       */
      Models::GetMultipleTraceResponse getMultipleTrace(const Models::GetMultipleTraceRequest &request);

      /**
       * @summary Queries the information about a scheduling policy.
       *
       * @param request GetOnCallSchedulesDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOnCallSchedulesDetailResponse
       */
      Models::GetOnCallSchedulesDetailResponse getOnCallSchedulesDetailWithOptions(const Models::GetOnCallSchedulesDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a scheduling policy.
       *
       * @param request GetOnCallSchedulesDetailRequest
       * @return GetOnCallSchedulesDetailResponse
       */
      Models::GetOnCallSchedulesDetailResponse getOnCallSchedulesDetail(const Models::GetOnCallSchedulesDetailRequest &request);

      /**
       * @summary Queries the token required for integrating Prometheus Service.
       *
       * @description None.
       *
       * @param request GetPrometheusApiTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrometheusApiTokenResponse
       */
      Models::GetPrometheusApiTokenResponse getPrometheusApiTokenWithOptions(const Models::GetPrometheusApiTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the token required for integrating Prometheus Service.
       *
       * @description None.
       *
       * @param request GetPrometheusApiTokenRequest
       * @return GetPrometheusApiTokenResponse
       */
      Models::GetPrometheusApiTokenResponse getPrometheusApiToken(const Models::GetPrometheusApiTokenRequest &request);

      /**
       * @summary Queries the information about a global aggregation instance.
       *
       * @param request GetPrometheusGlobalViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrometheusGlobalViewResponse
       */
      Models::GetPrometheusGlobalViewResponse getPrometheusGlobalViewWithOptions(const Models::GetPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a global aggregation instance.
       *
       * @param request GetPrometheusGlobalViewRequest
       * @return GetPrometheusGlobalViewResponse
       */
      Models::GetPrometheusGlobalViewResponse getPrometheusGlobalView(const Models::GetPrometheusGlobalViewRequest &request);

      /**
       * @summary Queries the information about a Prometheus instance.
       *
       * @param request GetPrometheusInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrometheusInstanceResponse
       */
      Models::GetPrometheusInstanceResponse getPrometheusInstanceWithOptions(const Models::GetPrometheusInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a Prometheus instance.
       *
       * @param request GetPrometheusInstanceRequest
       * @return GetPrometheusInstanceResponse
       */
      Models::GetPrometheusInstanceResponse getPrometheusInstance(const Models::GetPrometheusInstanceRequest &request);

      /**
       * @deprecated OpenAPI GetPrometheusIntegration is deprecated
       *
       * @summary Queries the information about an exporter that is integrated into a Prometheus instance for Container Service or a Prometheus instance for ECS.
       *
       * @param request GetPrometheusIntegrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrometheusIntegrationResponse
       */
      Models::GetPrometheusIntegrationResponse getPrometheusIntegrationWithOptions(const Models::GetPrometheusIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetPrometheusIntegration is deprecated
       *
       * @summary Queries the information about an exporter that is integrated into a Prometheus instance for Container Service or a Prometheus instance for ECS.
       *
       * @param request GetPrometheusIntegrationRequest
       * @return GetPrometheusIntegrationResponse
       */
      Models::GetPrometheusIntegrationResponse getPrometheusIntegration(const Models::GetPrometheusIntegrationRequest &request);

      /**
       * @deprecated OpenAPI GetPrometheusMonitoring is deprecated
       *
       * @summary Queries the monitoring configuration of a Prometheus instance.
       *
       * @param request GetPrometheusMonitoringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrometheusMonitoringResponse
       */
      Models::GetPrometheusMonitoringResponse getPrometheusMonitoringWithOptions(const Models::GetPrometheusMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetPrometheusMonitoring is deprecated
       *
       * @summary Queries the monitoring configuration of a Prometheus instance.
       *
       * @param request GetPrometheusMonitoringRequest
       * @return GetPrometheusMonitoringResponse
       */
      Models::GetPrometheusMonitoringResponse getPrometheusMonitoring(const Models::GetPrometheusMonitoringRequest &request);

      /**
       * @deprecated OpenAPI GetRecordingRule is deprecated
       *
       * @summary Obtains the recording rule of a cluster.
       *
       * @param request GetRecordingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecordingRuleResponse
       */
      Models::GetRecordingRuleResponse getRecordingRuleWithOptions(const Models::GetRecordingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetRecordingRule is deprecated
       *
       * @summary Obtains the recording rule of a cluster.
       *
       * @param request GetRecordingRuleRequest
       * @return GetRecordingRuleResponse
       */
      Models::GetRecordingRuleResponse getRecordingRule(const Models::GetRecordingRuleRequest &request);

      /**
       * @summary Queries the objects of a Browser Monitoring application by process identifier (PID).
       *
       * @param request GetRetcodeAppByPidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRetcodeAppByPidResponse
       */
      Models::GetRetcodeAppByPidResponse getRetcodeAppByPidWithOptions(const Models::GetRetcodeAppByPidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the objects of a Browser Monitoring application by process identifier (PID).
       *
       * @param request GetRetcodeAppByPidRequest
       * @return GetRetcodeAppByPidResponse
       */
      Models::GetRetcodeAppByPidResponse getRetcodeAppByPid(const Models::GetRetcodeAppByPidRequest &request);

      /**
       * @summary Queries the Browser Monitoring data based on a query statement of Log Service.
       *
       * @param request GetRetcodeDataByQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRetcodeDataByQueryResponse
       */
      Models::GetRetcodeDataByQueryResponse getRetcodeDataByQueryWithOptions(const Models::GetRetcodeDataByQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Browser Monitoring data based on a query statement of Log Service.
       *
       * @param request GetRetcodeDataByQueryRequest
       * @return GetRetcodeDataByQueryResponse
       */
      Models::GetRetcodeDataByQueryResponse getRetcodeDataByQuery(const Models::GetRetcodeDataByQueryRequest &request);

      /**
       * @summary Queries the Log Service project and Logstore that correspond to an application of browser monitoring.
       *
       * @param request GetRetcodeLogstoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRetcodeLogstoreResponse
       */
      Models::GetRetcodeLogstoreResponse getRetcodeLogstoreWithOptions(const Models::GetRetcodeLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Log Service project and Logstore that correspond to an application of browser monitoring.
       *
       * @param request GetRetcodeLogstoreRequest
       * @return GetRetcodeLogstoreResponse
       */
      Models::GetRetcodeLogstoreResponse getRetcodeLogstore(const Models::GetRetcodeLogstoreRequest &request);

      /**
       * @summary Queries the share URL of an application monitored by Browser Monitoring.
       *
       * @param request GetRetcodeShareUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRetcodeShareUrlResponse
       */
      Models::GetRetcodeShareUrlResponse getRetcodeShareUrlWithOptions(const Models::GetRetcodeShareUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the share URL of an application monitored by Browser Monitoring.
       *
       * @param request GetRetcodeShareUrlRequest
       * @return GetRetcodeShareUrlResponse
       */
      Models::GetRetcodeShareUrlResponse getRetcodeShareUrl(const Models::GetRetcodeShareUrlRequest &request);

      /**
       * @summary Obtains the information about a single application in Browser Monitoring.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request GetRumAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRumAppInfoResponse
       */
      Models::GetRumAppInfoResponse getRumAppInfoWithOptions(const Models::GetRumAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about a single application in Browser Monitoring.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request GetRumAppInfoRequest
       * @return GetRumAppInfoResponse
       */
      Models::GetRumAppInfoResponse getRumAppInfo(const Models::GetRumAppInfoRequest &request);

      /**
       * @summary Queries a list of Real User Monitoring (RUM) applications.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param tmpReq GetRumAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRumAppsResponse
       */
      Models::GetRumAppsResponse getRumAppsWithOptions(const Models::GetRumAppsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Real User Monitoring (RUM) applications.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request GetRumAppsRequest
       * @return GetRumAppsResponse
       */
      Models::GetRumAppsResponse getRumApps(const Models::GetRumAppsRequest &request);

      /**
       * @summary Queries Real User Monitoring (RUM) data by page.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request GetRumDataForPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRumDataForPageResponse
       */
      Models::GetRumDataForPageResponse getRumDataForPageWithOptions(const Models::GetRumDataForPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Real User Monitoring (RUM) data by page.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request GetRumDataForPageRequest
       * @return GetRumDataForPageResponse
       */
      Models::GetRumDataForPageResponse getRumDataForPage(const Models::GetRumDataForPageRequest &request);

      /**
       * @summary Queries the exception stack information of a Real User Monitoring (RUM) application.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request GetRumExceptionStackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRumExceptionStackResponse
       */
      Models::GetRumExceptionStackResponse getRumExceptionStackWithOptions(const Models::GetRumExceptionStackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the exception stack information of a Real User Monitoring (RUM) application.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request GetRumExceptionStackRequest
       * @return GetRumExceptionStackResponse
       */
      Models::GetRumExceptionStackResponse getRumExceptionStack(const Models::GetRumExceptionStackRequest &request);

      /**
       * @summary Queries the observability capacity unit (OCU) usage data of Real User Monitoring (RUM).
       *
       * @description You can query the usage data for the current day at any time. You can query the usage data for the previous day only after 8:00 today.
       *
       * @param tmpReq GetRumOcuStatisticDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRumOcuStatisticDataResponse
       */
      Models::GetRumOcuStatisticDataResponse getRumOcuStatisticDataWithOptions(const Models::GetRumOcuStatisticDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the observability capacity unit (OCU) usage data of Real User Monitoring (RUM).
       *
       * @description You can query the usage data for the current day at any time. You can query the usage data for the previous day only after 8:00 today.
       *
       * @param request GetRumOcuStatisticDataRequest
       * @return GetRumOcuStatisticDataResponse
       */
      Models::GetRumOcuStatisticDataResponse getRumOcuStatisticData(const Models::GetRumOcuStatisticDataRequest &request);

      /**
       * @summary Queries Real User Monitoring (RUM)-related files, such as symbol tables and SourceMap.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request GetRumUploadFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRumUploadFilesResponse
       */
      Models::GetRumUploadFilesResponse getRumUploadFilesWithOptions(const Models::GetRumUploadFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Real User Monitoring (RUM)-related files, such as symbol tables and SourceMap.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request GetRumUploadFilesRequest
       * @return GetRumUploadFilesResponse
       */
      Models::GetRumUploadFilesResponse getRumUploadFiles(const Models::GetRumUploadFilesRequest &request);

      /**
       * @summary Obtains the details of the SourceMap file uploaded in Browser Monitoring.
       *
       * @param request GetSourceMapInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSourceMapInfoResponse
       */
      Models::GetSourceMapInfoResponse getSourceMapInfoWithOptions(const Models::GetSourceMapInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of the SourceMap file uploaded in Browser Monitoring.
       *
       * @param request GetSourceMapInfoRequest
       * @return GetSourceMapInfoResponse
       */
      Models::GetSourceMapInfoResponse getSourceMapInfo(const Models::GetSourceMapInfoRequest &request);

      /**
       * @summary Queries the information of a method stack.
       *
       * @param request GetStackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStackResponse
       */
      Models::GetStackResponse getStackWithOptions(const Models::GetStackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a method stack.
       *
       * @param request GetStackRequest
       * @return GetStackResponse
       */
      Models::GetStackResponse getStack(const Models::GetStackRequest &request);

      /**
       * @summary Obtains detection points.
       *
       * @param tmpReq GetSyntheticMonitorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSyntheticMonitorsResponse
       */
      Models::GetSyntheticMonitorsResponse getSyntheticMonitorsWithOptions(const Models::GetSyntheticMonitorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains detection points.
       *
       * @param request GetSyntheticMonitorsRequest
       * @return GetSyntheticMonitorsResponse
       */
      Models::GetSyntheticMonitorsResponse getSyntheticMonitors(const Models::GetSyntheticMonitorsRequest &request);

      /**
       * @summary Queries the details of a scheduled synthetic monitoring task.
       *
       * @param request GetSyntheticTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSyntheticTaskDetailResponse
       */
      Models::GetSyntheticTaskDetailResponse getSyntheticTaskDetailWithOptions(const Models::GetSyntheticTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a scheduled synthetic monitoring task.
       *
       * @param request GetSyntheticTaskDetailRequest
       * @return GetSyntheticTaskDetailResponse
       */
      Models::GetSyntheticTaskDetailResponse getSyntheticTaskDetail(const Models::GetSyntheticTaskDetailRequest &request);

      /**
       * @summary Queries a list of scheduled synthetic monitoring tasks.
       *
       * @param request GetSyntheticTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSyntheticTaskListResponse
       */
      Models::GetSyntheticTaskListResponse getSyntheticTaskListWithOptions(const Models::GetSyntheticTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of scheduled synthetic monitoring tasks.
       *
       * @param request GetSyntheticTaskListRequest
       * @return GetSyntheticTaskListResponse
       */
      Models::GetSyntheticTaskListResponse getSyntheticTaskList(const Models::GetSyntheticTaskListRequest &request);

      /**
       * @summary Obtains the information about synthetic monitoring points.
       *
       * @param request GetSyntheticTaskMonitorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSyntheticTaskMonitorsResponse
       */
      Models::GetSyntheticTaskMonitorsResponse getSyntheticTaskMonitorsWithOptions(const Models::GetSyntheticTaskMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about synthetic monitoring points.
       *
       * @param request GetSyntheticTaskMonitorsRequest
       * @return GetSyntheticTaskMonitorsResponse
       */
      Models::GetSyntheticTaskMonitorsResponse getSyntheticTaskMonitors(const Models::GetSyntheticTaskMonitorsRequest &request);

      /**
       * @summary Obtains the details of a synthetic monitoring task.
       *
       * @param request GetTimingSyntheticTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTimingSyntheticTaskResponse
       */
      Models::GetTimingSyntheticTaskResponse getTimingSyntheticTaskWithOptions(const Models::GetTimingSyntheticTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a synthetic monitoring task.
       *
       * @param request GetTimingSyntheticTaskRequest
       * @return GetTimingSyntheticTaskResponse
       */
      Models::GetTimingSyntheticTaskResponse getTimingSyntheticTask(const Models::GetTimingSyntheticTaskRequest &request);

      /**
       * @summary Queries the details of a trace.
       *
       * @description > You must use Application Real-Time Monitoring Service (ARMS) SDK for Java V2.7.24.
       *
       * @param request GetTraceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTraceResponse
       */
      Models::GetTraceResponse getTraceWithOptions(const Models::GetTraceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a trace.
       *
       * @description > You must use Application Real-Time Monitoring Service (ARMS) SDK for Java V2.7.24.
       *
       * @param request GetTraceRequest
       * @return GetTraceResponse
       */
      Models::GetTraceResponse getTrace(const Models::GetTraceRequest &request);

      /**
       * @summary Queries the details of an application monitoring task.
       *
       * @param request GetTraceAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTraceAppResponse
       */
      Models::GetTraceAppResponse getTraceAppWithOptions(const Models::GetTraceAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an application monitoring task.
       *
       * @param request GetTraceAppRequest
       * @return GetTraceAppResponse
       */
      Models::GetTraceAppResponse getTraceApp(const Models::GetTraceAppRequest &request);

      /**
       * @summary Queries all custom settings of an application monitored by Application Monitoring, such as trace sampling settings and agent switches. This operation is applicable only to applications that are monitored by Application Monitoring. It is not applicable to applications that are monitored by Managed Service for OpenTelemetry.
       *
       * @param request GetTraceAppConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTraceAppConfigResponse
       */
      Models::GetTraceAppConfigResponse getTraceAppConfigWithOptions(const Models::GetTraceAppConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all custom settings of an application monitored by Application Monitoring, such as trace sampling settings and agent switches. This operation is applicable only to applications that are monitored by Application Monitoring. It is not applicable to applications that are monitored by Managed Service for OpenTelemetry.
       *
       * @param request GetTraceAppConfigRequest
       * @return GetTraceAppConfigResponse
       */
      Models::GetTraceAppConfigResponse getTraceAppConfig(const Models::GetTraceAppConfigRequest &request);

      /**
       * @summary Creates an alert rule based on an alert template.
       *
       * @description >  You can call the **ImportAppAlertRules** operation to import only the alert rules that are generated by Application Real-Time Monitoring Service (ARMS) for application monitoring and browser monitoring. This operation cannot be used to import custom alert rules, alert rules for Prometheus monitoring, or default emergency alert rules.
       *
       * @param request ImportAppAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportAppAlertRulesResponse
       */
      Models::ImportAppAlertRulesResponse importAppAlertRulesWithOptions(const Models::ImportAppAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert rule based on an alert template.
       *
       * @description >  You can call the **ImportAppAlertRules** operation to import only the alert rules that are generated by Application Real-Time Monitoring Service (ARMS) for application monitoring and browser monitoring. This operation cannot be used to import custom alert rules, alert rules for Prometheus monitoring, or default emergency alert rules.
       *
       * @param request ImportAppAlertRulesRequest
       * @return ImportAppAlertRulesResponse
       */
      Models::ImportAppAlertRulesResponse importAppAlertRules(const Models::ImportAppAlertRulesRequest &request);

      /**
       * @summary Initializes an environment instance.
       *
       * @param request InitEnvironmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitEnvironmentResponse
       */
      Models::InitEnvironmentResponse initEnvironmentWithOptions(const Models::InitEnvironmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes an environment instance.
       *
       * @param request InitEnvironmentRequest
       * @return InitEnvironmentResponse
       */
      Models::InitEnvironmentResponse initEnvironment(const Models::InitEnvironmentRequest &request);

      /**
       * @summary Installs an add-on.
       *
       * @param request InstallAddonRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAddonResponse
       */
      Models::InstallAddonResponse installAddonWithOptions(const Models::InstallAddonRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs an add-on.
       *
       * @param request InstallAddonRequest
       * @return InstallAddonResponse
       */
      Models::InstallAddonResponse installAddon(const Models::InstallAddonRequest &request);

      /**
       * @deprecated OpenAPI InstallCmsExporter is deprecated, please use ARMS::2019-08-08::InstallAddon instead.
       *
       * @summary Installs the cms-exporter collector.
       *
       * @param request InstallCmsExporterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallCmsExporterResponse
       */
      Models::InstallCmsExporterResponse installCmsExporterWithOptions(const Models::InstallCmsExporterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI InstallCmsExporter is deprecated, please use ARMS::2019-08-08::InstallAddon instead.
       *
       * @summary Installs the cms-exporter collector.
       *
       * @param request InstallCmsExporterRequest
       * @return InstallCmsExporterResponse
       */
      Models::InstallCmsExporterResponse installCmsExporter(const Models::InstallCmsExporterRequest &request);

      /**
       * @summary Installs a feature.
       *
       * @param request InstallEnvironmentFeatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallEnvironmentFeatureResponse
       */
      Models::InstallEnvironmentFeatureResponse installEnvironmentFeatureWithOptions(const Models::InstallEnvironmentFeatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs a feature.
       *
       * @param request InstallEnvironmentFeatureRequest
       * @return InstallEnvironmentFeatureResponse
       */
      Models::InstallEnvironmentFeatureResponse installEnvironmentFeature(const Models::InstallEnvironmentFeatureRequest &request);

      /**
       * @deprecated OpenAPI InstallManagedPrometheus is deprecated
       *
       * @summary Installs a Prometheus agent for serverless Kubernetes (ASK) clusters or Elastic Compute Service (ECS) clusters.
       *
       * @description You can call this operation only if the following conditions are met: The resources that you want to monitor are ASK clusters or ECS clusters. No Prometheus agents are installed in the ASK or ECS clusters. Take note that Prometheus agents can be installed only on the cloud service side, not in user clusters.
       *
       * @param request InstallManagedPrometheusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallManagedPrometheusResponse
       */
      Models::InstallManagedPrometheusResponse installManagedPrometheusWithOptions(const Models::InstallManagedPrometheusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI InstallManagedPrometheus is deprecated
       *
       * @summary Installs a Prometheus agent for serverless Kubernetes (ASK) clusters or Elastic Compute Service (ECS) clusters.
       *
       * @description You can call this operation only if the following conditions are met: The resources that you want to monitor are ASK clusters or ECS clusters. No Prometheus agents are installed in the ASK or ECS clusters. Take note that Prometheus agents can be installed only on the cloud service side, not in user clusters.
       *
       * @param request InstallManagedPrometheusRequest
       * @return InstallManagedPrometheusResponse
       */
      Models::InstallManagedPrometheusResponse installManagedPrometheus(const Models::InstallManagedPrometheusRequest &request);

      /**
       * @summary Queries the alerts that have been triggered.
       *
       * @param request ListActivatedAlertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListActivatedAlertsResponse
       */
      Models::ListActivatedAlertsResponse listActivatedAlertsWithOptions(const Models::ListActivatedAlertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alerts that have been triggered.
       *
       * @param request ListActivatedAlertsRequest
       * @return ListActivatedAlertsResponse
       */
      Models::ListActivatedAlertsResponse listActivatedAlerts(const Models::ListActivatedAlertsRequest &request);

      /**
       * @summary Queries the add-ons installed in an environment.
       *
       * @param request ListAddonReleasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddonReleasesResponse
       */
      Models::ListAddonReleasesResponse listAddonReleasesWithOptions(const Models::ListAddonReleasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the add-ons installed in an environment.
       *
       * @param request ListAddonReleasesRequest
       * @return ListAddonReleasesResponse
       */
      Models::ListAddonReleasesResponse listAddonReleases(const Models::ListAddonReleasesRequest &request);

      /**
       * @summary List of access center products.
       *
       * @param request ListAddonsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddonsResponse
       */
      Models::ListAddonsResponse listAddonsWithOptions(const Models::ListAddonsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List of access center products.
       *
       * @param request ListAddonsRequest
       * @return ListAddonsResponse
       */
      Models::ListAddonsResponse listAddons(const Models::ListAddonsRequest &request);

      /**
       * @summary Queries historical alert events.
       *
       * @param request ListAlertEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertEventsResponse
       */
      Models::ListAlertEventsResponse listAlertEventsWithOptions(const Models::ListAlertEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries historical alert events.
       *
       * @param request ListAlertEventsRequest
       * @return ListAlertEventsResponse
       */
      Models::ListAlertEventsResponse listAlertEvents(const Models::ListAlertEventsRequest &request);

      /**
       * @summary Queries the alert sending history.
       *
       * @param request ListAlertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertsResponse
       */
      Models::ListAlertsResponse listAlertsWithOptions(const Models::ListAlertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert sending history.
       *
       * @param request ListAlertsRequest
       * @return ListAlertsResponse
       */
      Models::ListAlertsResponse listAlerts(const Models::ListAlertsRequest &request);

      /**
       * @deprecated OpenAPI ListClusterFromGrafana is deprecated
       *
       * @summary Queries all Grafana dashboards in a specified region.
       *
       * @param request ListClusterFromGrafanaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterFromGrafanaResponse
       */
      Models::ListClusterFromGrafanaResponse listClusterFromGrafanaWithOptions(const Models::ListClusterFromGrafanaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListClusterFromGrafana is deprecated
       *
       * @summary Queries all Grafana dashboards in a specified region.
       *
       * @param request ListClusterFromGrafanaRequest
       * @return ListClusterFromGrafanaResponse
       */
      Models::ListClusterFromGrafanaResponse listClusterFromGrafana(const Models::ListClusterFromGrafanaRequest &request);

      /**
       * @deprecated OpenAPI ListCmsInstances is deprecated
       *
       * @summary Queries the collection of cloud services.
       *
       * @param request ListCmsInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCmsInstancesResponse
       */
      Models::ListCmsInstancesResponse listCmsInstancesWithOptions(const Models::ListCmsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListCmsInstances is deprecated
       *
       * @summary Queries the collection of cloud services.
       *
       * @param request ListCmsInstancesRequest
       * @return ListCmsInstancesResponse
       */
      Models::ListCmsInstancesResponse listCmsInstances(const Models::ListCmsInstancesRequest &request);

      /**
       * @summary Queries the Grafana dashboards of a Container Service for Kubernetes (ACK) cluster.
       *
       * @description None.
       *
       * @param request ListDashboardsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDashboardsResponse
       */
      Models::ListDashboardsResponse listDashboardsWithOptions(const Models::ListDashboardsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Grafana dashboards of a Container Service for Kubernetes (ACK) cluster.
       *
       * @description None.
       *
       * @param request ListDashboardsRequest
       * @return ListDashboardsResponse
       */
      Models::ListDashboardsResponse listDashboards(const Models::ListDashboardsRequest &request);

      /**
       * @deprecated OpenAPI ListDashboardsByName is deprecated
       *
       * @summary Uses Loki data sources and other data sources to create a Grafana dashboard in Managed Service for Prometheus.
       *
       * @param request ListDashboardsByNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDashboardsByNameResponse
       */
      Models::ListDashboardsByNameResponse listDashboardsByNameWithOptions(const Models::ListDashboardsByNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListDashboardsByName is deprecated
       *
       * @summary Uses Loki data sources and other data sources to create a Grafana dashboard in Managed Service for Prometheus.
       *
       * @param request ListDashboardsByNameRequest
       * @return ListDashboardsByNameResponse
       */
      Models::ListDashboardsByNameResponse listDashboardsByName(const Models::ListDashboardsByNameRequest &request);

      /**
       * @summary Queries notification policies.
       *
       * @description The current API operation is no longer maintained. To query the notification policy information, call the ListNotificationPolicies operation instead.
       *
       * @param request ListDispatchRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDispatchRuleResponse
       */
      Models::ListDispatchRuleResponse listDispatchRuleWithOptions(const Models::ListDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries notification policies.
       *
       * @description The current API operation is no longer maintained. To query the notification policy information, call the ListNotificationPolicies operation instead.
       *
       * @param request ListDispatchRuleRequest
       * @return ListDispatchRuleResponse
       */
      Models::ListDispatchRuleResponse listDispatchRule(const Models::ListDispatchRuleRequest &request);

      /**
       * @summary Queries the custom jobs of an environment.
       *
       * @param request ListEnvCustomJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvCustomJobsResponse
       */
      Models::ListEnvCustomJobsResponse listEnvCustomJobsWithOptions(const Models::ListEnvCustomJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the custom jobs of an environment.
       *
       * @param request ListEnvCustomJobsRequest
       * @return ListEnvCustomJobsResponse
       */
      Models::ListEnvCustomJobsResponse listEnvCustomJobs(const Models::ListEnvCustomJobsRequest &request);

      /**
       * @summary Queries the PodMonitors of an environment.
       *
       * @param request ListEnvPodMonitorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvPodMonitorsResponse
       */
      Models::ListEnvPodMonitorsResponse listEnvPodMonitorsWithOptions(const Models::ListEnvPodMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the PodMonitors of an environment.
       *
       * @param request ListEnvPodMonitorsRequest
       * @return ListEnvPodMonitorsResponse
       */
      Models::ListEnvPodMonitorsResponse listEnvPodMonitors(const Models::ListEnvPodMonitorsRequest &request);

      /**
       * @summary Queries the ServiceMonitors of an environment.
       *
       * @param request ListEnvServiceMonitorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvServiceMonitorsResponse
       */
      Models::ListEnvServiceMonitorsResponse listEnvServiceMonitorsWithOptions(const Models::ListEnvServiceMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ServiceMonitors of an environment.
       *
       * @param request ListEnvServiceMonitorsRequest
       * @return ListEnvServiceMonitorsResponse
       */
      Models::ListEnvServiceMonitorsResponse listEnvServiceMonitors(const Models::ListEnvServiceMonitorsRequest &request);

      /**
       * @summary 环境addon列表
       *
       * @param request ListEnvironmentAddonsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvironmentAddonsResponse
       */
      Models::ListEnvironmentAddonsResponse listEnvironmentAddonsWithOptions(const Models::ListEnvironmentAddonsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 环境addon列表
       *
       * @param request ListEnvironmentAddonsRequest
       * @return ListEnvironmentAddonsResponse
       */
      Models::ListEnvironmentAddonsResponse listEnvironmentAddons(const Models::ListEnvironmentAddonsRequest &request);

      /**
       * @summary Queries the alert groups of an environment instance.
       *
       * @param request ListEnvironmentAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvironmentAlertRulesResponse
       */
      Models::ListEnvironmentAlertRulesResponse listEnvironmentAlertRulesWithOptions(const Models::ListEnvironmentAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert groups of an environment instance.
       *
       * @param request ListEnvironmentAlertRulesRequest
       * @return ListEnvironmentAlertRulesResponse
       */
      Models::ListEnvironmentAlertRulesResponse listEnvironmentAlertRules(const Models::ListEnvironmentAlertRulesRequest &request);

      /**
       * @summary Queries information about a dashboard of an environment instance.
       *
       * @param request ListEnvironmentDashboardsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvironmentDashboardsResponse
       */
      Models::ListEnvironmentDashboardsResponse listEnvironmentDashboardsWithOptions(const Models::ListEnvironmentDashboardsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a dashboard of an environment instance.
       *
       * @param request ListEnvironmentDashboardsRequest
       * @return ListEnvironmentDashboardsResponse
       */
      Models::ListEnvironmentDashboardsResponse listEnvironmentDashboards(const Models::ListEnvironmentDashboardsRequest &request);

      /**
       * @summary Queries the features in an environment.
       *
       * @param request ListEnvironmentFeaturesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvironmentFeaturesResponse
       */
      Models::ListEnvironmentFeaturesResponse listEnvironmentFeaturesWithOptions(const Models::ListEnvironmentFeaturesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the features in an environment.
       *
       * @param request ListEnvironmentFeaturesRequest
       * @return ListEnvironmentFeaturesResponse
       */
      Models::ListEnvironmentFeaturesResponse listEnvironmentFeatures(const Models::ListEnvironmentFeaturesRequest &request);

      /**
       * @summary Queries the Kubernetes resources of an environment.
       *
       * @param tmpReq ListEnvironmentKubeResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvironmentKubeResourcesResponse
       */
      Models::ListEnvironmentKubeResourcesResponse listEnvironmentKubeResourcesWithOptions(const Models::ListEnvironmentKubeResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Kubernetes resources of an environment.
       *
       * @param request ListEnvironmentKubeResourcesRequest
       * @return ListEnvironmentKubeResourcesResponse
       */
      Models::ListEnvironmentKubeResourcesResponse listEnvironmentKubeResources(const Models::ListEnvironmentKubeResourcesRequest &request);

      /**
       * @summary Queries the targets of an environment.
       *
       * @param request ListEnvironmentMetricTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvironmentMetricTargetsResponse
       */
      Models::ListEnvironmentMetricTargetsResponse listEnvironmentMetricTargetsWithOptions(const Models::ListEnvironmentMetricTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the targets of an environment.
       *
       * @param request ListEnvironmentMetricTargetsRequest
       * @return ListEnvironmentMetricTargetsResponse
       */
      Models::ListEnvironmentMetricTargetsResponse listEnvironmentMetricTargets(const Models::ListEnvironmentMetricTargetsRequest &request);

      /**
       * @summary Queries environments.
       *
       * @param tmpReq ListEnvironmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvironmentsResponse
       */
      Models::ListEnvironmentsResponse listEnvironmentsWithOptions(const Models::ListEnvironmentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries environments.
       *
       * @param request ListEnvironmentsRequest
       * @return ListEnvironmentsResponse
       */
      Models::ListEnvironmentsResponse listEnvironments(const Models::ListEnvironmentsRequest &request);

      /**
       * @summary Queries the information about an escalation policy.
       *
       * @param request ListEscalationPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEscalationPoliciesResponse
       */
      Models::ListEscalationPoliciesResponse listEscalationPoliciesWithOptions(const Models::ListEscalationPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an escalation policy.
       *
       * @param request ListEscalationPoliciesRequest
       * @return ListEscalationPoliciesResponse
       */
      Models::ListEscalationPoliciesResponse listEscalationPolicies(const Models::ListEscalationPoliciesRequest &request);

      /**
       * @summary Queries an EventBridge integration.
       *
       * @param request ListEventBridgeIntegrationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventBridgeIntegrationsResponse
       */
      Models::ListEventBridgeIntegrationsResponse listEventBridgeIntegrationsWithOptions(const Models::ListEventBridgeIntegrationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an EventBridge integration.
       *
       * @param request ListEventBridgeIntegrationsRequest
       * @return ListEventBridgeIntegrationsResponse
       */
      Models::ListEventBridgeIntegrationsResponse listEventBridgeIntegrations(const Models::ListEventBridgeIntegrationsRequest &request);

      /**
       * @summary Obtain Specified Workspace List
       *
       * @description >The list returned by this operation includes the workspaces of Developer Edition, Expert Edition, and Advanced Edition. The list does not include the workspaces of Shared Edition.
       *
       * @param tmpReq ListGrafanaWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGrafanaWorkspaceResponse
       */
      Models::ListGrafanaWorkspaceResponse listGrafanaWorkspaceWithOptions(const Models::ListGrafanaWorkspaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain Specified Workspace List
       *
       * @description >The list returned by this operation includes the workspaces of Developer Edition, Expert Edition, and Advanced Edition. The list does not include the workspaces of Shared Edition.
       *
       * @param request ListGrafanaWorkspaceRequest
       * @return ListGrafanaWorkspaceResponse
       */
      Models::ListGrafanaWorkspaceResponse listGrafanaWorkspace(const Models::ListGrafanaWorkspaceRequest &request);

      /**
       * @summary Queries the abnormal Insights events within a specified period of time.
       *
       * @param request ListInsightsEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInsightsEventsResponse
       */
      Models::ListInsightsEventsResponse listInsightsEventsWithOptions(const Models::ListInsightsEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the abnormal Insights events within a specified period of time.
       *
       * @param request ListInsightsEventsRequest
       * @return ListInsightsEventsResponse
       */
      Models::ListInsightsEventsResponse listInsightsEvents(const Models::ListInsightsEventsRequest &request);

      /**
       * @summary Views a list of alert integrations.
       *
       * @param request ListIntegrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationResponse
       */
      Models::ListIntegrationResponse listIntegrationWithOptions(const Models::ListIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Views a list of alert integrations.
       *
       * @param request ListIntegrationRequest
       * @return ListIntegrationResponse
       */
      Models::ListIntegrationResponse listIntegration(const Models::ListIntegrationRequest &request);

      /**
       * @summary Queries notification policies based on specified conditions.
       *
       * @param request ListNotificationPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNotificationPoliciesResponse
       */
      Models::ListNotificationPoliciesResponse listNotificationPoliciesWithOptions(const Models::ListNotificationPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries notification policies based on specified conditions.
       *
       * @param request ListNotificationPoliciesRequest
       * @return ListNotificationPoliciesResponse
       */
      Models::ListNotificationPoliciesResponse listNotificationPolicies(const Models::ListNotificationPoliciesRequest &request);

      /**
       * @summary Queries the information about a scheduling policy.
       *
       * @param request ListOnCallSchedulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOnCallSchedulesResponse
       */
      Models::ListOnCallSchedulesResponse listOnCallSchedulesWithOptions(const Models::ListOnCallSchedulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a scheduling policy.
       *
       * @param request ListOnCallSchedulesRequest
       * @return ListOnCallSchedulesResponse
       */
      Models::ListOnCallSchedulesResponse listOnCallSchedules(const Models::ListOnCallSchedulesRequest &request);

      /**
       * @summary Queries the alert rules created for a Prometheus instance.
       *
       * @param request ListPrometheusAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusAlertRulesResponse
       */
      Models::ListPrometheusAlertRulesResponse listPrometheusAlertRulesWithOptions(const Models::ListPrometheusAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert rules created for a Prometheus instance.
       *
       * @param request ListPrometheusAlertRulesRequest
       * @return ListPrometheusAlertRulesResponse
       */
      Models::ListPrometheusAlertRulesResponse listPrometheusAlertRules(const Models::ListPrometheusAlertRulesRequest &request);

      /**
       * @summary Queries the alert templates of Prometheus Service.
       *
       * @param request ListPrometheusAlertTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusAlertTemplatesResponse
       */
      Models::ListPrometheusAlertTemplatesResponse listPrometheusAlertTemplatesWithOptions(const Models::ListPrometheusAlertTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert templates of Prometheus Service.
       *
       * @param request ListPrometheusAlertTemplatesRequest
       * @return ListPrometheusAlertTemplatesResponse
       */
      Models::ListPrometheusAlertTemplatesResponse listPrometheusAlertTemplates(const Models::ListPrometheusAlertTemplatesRequest &request);

      /**
       * @summary Creates a global aggregation instance in Prometheus Service and obtains the list of global aggregation instances.
       *
       * @param request ListPrometheusGlobalViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusGlobalViewResponse
       */
      Models::ListPrometheusGlobalViewResponse listPrometheusGlobalViewWithOptions(const Models::ListPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a global aggregation instance in Prometheus Service and obtains the list of global aggregation instances.
       *
       * @param request ListPrometheusGlobalViewRequest
       * @return ListPrometheusGlobalViewResponse
       */
      Models::ListPrometheusGlobalViewResponse listPrometheusGlobalView(const Models::ListPrometheusGlobalViewRequest &request);

      /**
       * @summary Queries Prometheus instances by tag and resource group.
       *
       * @param request ListPrometheusInstanceByTagAndResourceGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusInstanceByTagAndResourceGroupIdResponse
       */
      Models::ListPrometheusInstanceByTagAndResourceGroupIdResponse listPrometheusInstanceByTagAndResourceGroupIdWithOptions(const Models::ListPrometheusInstanceByTagAndResourceGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Prometheus instances by tag and resource group.
       *
       * @param request ListPrometheusInstanceByTagAndResourceGroupIdRequest
       * @return ListPrometheusInstanceByTagAndResourceGroupIdResponse
       */
      Models::ListPrometheusInstanceByTagAndResourceGroupIdResponse listPrometheusInstanceByTagAndResourceGroupId(const Models::ListPrometheusInstanceByTagAndResourceGroupIdRequest &request);

      /**
       * @summary Obtains all Prometheus instances in a region.
       *
       * @param request ListPrometheusInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusInstancesResponse
       */
      Models::ListPrometheusInstancesResponse listPrometheusInstancesWithOptions(const Models::ListPrometheusInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains all Prometheus instances in a region.
       *
       * @param request ListPrometheusInstancesRequest
       * @return ListPrometheusInstancesResponse
       */
      Models::ListPrometheusInstancesResponse listPrometheusInstances(const Models::ListPrometheusInstancesRequest &request);

      /**
       * @deprecated OpenAPI ListPrometheusIntegration is deprecated
       *
       * @summary Queries a list of exporters that are integrated into a Prometheus instance. Only aliyun-cs and ecs instances are supported.
       *
       * @param request ListPrometheusIntegrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusIntegrationResponse
       */
      Models::ListPrometheusIntegrationResponse listPrometheusIntegrationWithOptions(const Models::ListPrometheusIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListPrometheusIntegration is deprecated
       *
       * @summary Queries a list of exporters that are integrated into a Prometheus instance. Only aliyun-cs and ecs instances are supported.
       *
       * @param request ListPrometheusIntegrationRequest
       * @return ListPrometheusIntegrationResponse
       */
      Models::ListPrometheusIntegrationResponse listPrometheusIntegration(const Models::ListPrometheusIntegrationRequest &request);

      /**
       * @deprecated OpenAPI ListPrometheusMonitoring is deprecated
       *
       * @summary Queries the monitoring configuration of a Prometheus instance.
       *
       * @param request ListPrometheusMonitoringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusMonitoringResponse
       */
      Models::ListPrometheusMonitoringResponse listPrometheusMonitoringWithOptions(const Models::ListPrometheusMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListPrometheusMonitoring is deprecated
       *
       * @summary Queries the monitoring configuration of a Prometheus instance.
       *
       * @param request ListPrometheusMonitoringRequest
       * @return ListPrometheusMonitoringResponse
       */
      Models::ListPrometheusMonitoringResponse listPrometheusMonitoring(const Models::ListPrometheusMonitoringRequest &request);

      /**
       * @summary Queries the Browser Monitoring tasks in a region.
       *
       * @description ****
       *
       * @param request ListRetcodeAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRetcodeAppsResponse
       */
      Models::ListRetcodeAppsResponse listRetcodeAppsWithOptions(const Models::ListRetcodeAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Browser Monitoring tasks in a region.
       *
       * @description ****
       *
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
       * @summary Queries the information of a silence policy list.
       *
       * @param request ListSilencePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSilencePoliciesResponse
       */
      Models::ListSilencePoliciesResponse listSilencePoliciesWithOptions(const Models::ListSilencePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a silence policy list.
       *
       * @param request ListSilencePoliciesRequest
       * @return ListSilencePoliciesResponse
       */
      Models::ListSilencePoliciesResponse listSilencePolicies(const Models::ListSilencePoliciesRequest &request);

      /**
       * @summary Obtains the results of one or more synthetic tests.
       *
       * @param tmpReq ListSyntheticDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSyntheticDetailResponse
       */
      Models::ListSyntheticDetailResponse listSyntheticDetailWithOptions(const Models::ListSyntheticDetailRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the results of one or more synthetic tests.
       *
       * @param request ListSyntheticDetailRequest
       * @return ListSyntheticDetailResponse
       */
      Models::ListSyntheticDetailResponse listSyntheticDetail(const Models::ListSyntheticDetailRequest &request);

      /**
       * @summary Queries scheduled synthetic monitoring tasks.
       *
       * @param tmpReq ListTimingSyntheticTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTimingSyntheticTasksResponse
       */
      Models::ListTimingSyntheticTasksResponse listTimingSyntheticTasksWithOptions(const Models::ListTimingSyntheticTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scheduled synthetic monitoring tasks.
       *
       * @param request ListTimingSyntheticTasksRequest
       * @return ListTimingSyntheticTasksResponse
       */
      Models::ListTimingSyntheticTasksResponse listTimingSyntheticTasks(const Models::ListTimingSyntheticTasksRequest &request);

      /**
       * @summary Queries all Application Monitoring tasks in a specified region.
       *
       * @param request ListTraceAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTraceAppsResponse
       */
      Models::ListTraceAppsResponse listTraceAppsWithOptions(const Models::ListTraceAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all Application Monitoring tasks in a specified region.
       *
       * @param request ListTraceAppsRequest
       * @return ListTraceAppsResponse
       */
      Models::ListTraceAppsResponse listTraceApps(const Models::ListTraceAppsRequest &request);

      /**
       * @summary Activates the service-linked role AliyunServiceRoleForARMS for Application Real-Time Monitoring Service (ARMS).
       *
       * @param request OpenArmsDefaultSLRRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenArmsDefaultSLRResponse
       */
      Models::OpenArmsDefaultSLRResponse openArmsDefaultSLRWithOptions(const Models::OpenArmsDefaultSLRRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the service-linked role AliyunServiceRoleForARMS for Application Real-Time Monitoring Service (ARMS).
       *
       * @param request OpenArmsDefaultSLRRequest
       * @return OpenArmsDefaultSLRResponse
       */
      Models::OpenArmsDefaultSLRResponse openArmsDefaultSLR(const Models::OpenArmsDefaultSLRRequest &request);

      /**
       * @summary Activates a specified pay-as-you-go sub-service of Application Real-Time Monitoring Service (ARMS).
       *
       * @description The **OpenArmsServiceSecondVersion** operation supports the following sub-service editions:
       * *   Application Monitoring: Basic Edition
       * *   Browser Monitoring: Basic Edition
       * *   Synthetic Monitoring: Pro Edition (pay-as-you-go)
       * *   Prometheus Service: Pro Edition
       *
       * @param request OpenArmsServiceSecondVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenArmsServiceSecondVersionResponse
       */
      Models::OpenArmsServiceSecondVersionResponse openArmsServiceSecondVersionWithOptions(const Models::OpenArmsServiceSecondVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates a specified pay-as-you-go sub-service of Application Real-Time Monitoring Service (ARMS).
       *
       * @description The **OpenArmsServiceSecondVersion** operation supports the following sub-service editions:
       * *   Application Monitoring: Basic Edition
       * *   Browser Monitoring: Basic Edition
       * *   Synthetic Monitoring: Pro Edition (pay-as-you-go)
       * *   Prometheus Service: Pro Edition
       *
       * @param request OpenArmsServiceSecondVersionRequest
       * @return OpenArmsServiceSecondVersionResponse
       */
      Models::OpenArmsServiceSecondVersionResponse openArmsServiceSecondVersion(const Models::OpenArmsServiceSecondVersionRequest &request);

      /**
       * @deprecated OpenAPI OpenVCluster is deprecated
       *
       * @summary Activates a virtual cluster.
       *
       * @param request OpenVClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenVClusterResponse
       */
      Models::OpenVClusterResponse openVClusterWithOptions(const Models::OpenVClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI OpenVCluster is deprecated
       *
       * @summary Activates a virtual cluster.
       *
       * @param request OpenVClusterRequest
       * @return OpenVClusterResponse
       */
      Models::OpenVClusterResponse openVCluster(const Models::OpenVClusterRequest &request);

      /**
       * @summary Activates the service-linked role AliyunServiceRoleForXtrace for Tracing Analysis.
       *
       * @param request OpenXtraceDefaultSLRRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenXtraceDefaultSLRResponse
       */
      Models::OpenXtraceDefaultSLRResponse openXtraceDefaultSLRWithOptions(const Models::OpenXtraceDefaultSLRRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the service-linked role AliyunServiceRoleForXtrace for Tracing Analysis.
       *
       * @param request OpenXtraceDefaultSLRRequest
       * @return OpenXtraceDefaultSLRResponse
       */
      Models::OpenXtraceDefaultSLRResponse openXtraceDefaultSLR(const Models::OpenXtraceDefaultSLRRequest &request);

      /**
       * @summary Queries the encoding mapping content based on the metadata IDs and metadata type.
       *
       * @param request QueryAppMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAppMetadataResponse
       */
      Models::QueryAppMetadataResponse queryAppMetadataWithOptions(const Models::QueryAppMetadataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the encoding mapping content based on the metadata IDs and metadata type.
       *
       * @param request QueryAppMetadataRequest
       * @return QueryAppMetadataResponse
       */
      Models::QueryAppMetadataResponse queryAppMetadata(const Models::QueryAppMetadataRequest &request);

      /**
       * @summary Queries the topology of an application.
       *
       * @param tmpReq QueryAppTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAppTopologyResponse
       */
      Models::QueryAppTopologyResponse queryAppTopologyWithOptions(const Models::QueryAppTopologyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the topology of an application.
       *
       * @param request QueryAppTopologyRequest
       * @return QueryAppTopologyResponse
       */
      Models::QueryAppTopologyResponse queryAppTopology(const Models::QueryAppTopologyRequest &request);

      /**
       * @summary Queries the amount of data written to Application Monitoring, Managed Service for OpenTelemetry, Managed Service for Prometheus, and Real User Monitoring (RUM).
       *
       * @param request QueryCommercialUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCommercialUsageResponse
       */
      Models::QueryCommercialUsageResponse queryCommercialUsageWithOptions(const Models::QueryCommercialUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the amount of data written to Application Monitoring, Managed Service for OpenTelemetry, Managed Service for Prometheus, and Real User Monitoring (RUM).
       *
       * @param request QueryCommercialUsageRequest
       * @return QueryCommercialUsageResponse
       */
      Models::QueryCommercialUsageResponse queryCommercialUsage(const Models::QueryCommercialUsageRequest &request);

      /**
       * @summary Queries an Application Monitoring metric or a Browser Monitoring metric.
       *
       * @param request QueryMetricByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMetricByPageResponse
       */
      Models::QueryMetricByPageResponse queryMetricByPageWithOptions(const Models::QueryMetricByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an Application Monitoring metric or a Browser Monitoring metric.
       *
       * @param request QueryMetricByPageRequest
       * @return QueryMetricByPageResponse
       */
      Models::QueryMetricByPageResponse queryMetricByPage(const Models::QueryMetricByPageRequest &request);

      /**
       * @deprecated OpenAPI QueryPromInstallStatus is deprecated
       *
       * @summary Queries whether the Prometheus agent is installed on a cluster.
       *
       * @param request QueryPromInstallStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPromInstallStatusResponse
       */
      Models::QueryPromInstallStatusResponse queryPromInstallStatusWithOptions(const Models::QueryPromInstallStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI QueryPromInstallStatus is deprecated
       *
       * @summary Queries whether the Prometheus agent is installed on a cluster.
       *
       * @param request QueryPromInstallStatusRequest
       * @return QueryPromInstallStatusResponse
       */
      Models::QueryPromInstallStatusResponse queryPromInstallStatus(const Models::QueryPromInstallStatusRequest &request);

      /**
       * @summary Queries the metrics that are provided for different versions of a specified Enterprise Distributed Application Service (EDAS) or Kubernetes application.
       *
       * @param request QueryReleaseMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryReleaseMetricResponse
       */
      Models::QueryReleaseMetricResponse queryReleaseMetricWithOptions(const Models::QueryReleaseMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metrics that are provided for different versions of a specified Enterprise Distributed Application Service (EDAS) or Kubernetes application.
       *
       * @param request QueryReleaseMetricRequest
       * @return QueryReleaseMetricResponse
       */
      Models::QueryReleaseMetricResponse queryReleaseMetric(const Models::QueryReleaseMetricRequest &request);

      /**
       * @deprecated OpenAPI RemoveAliClusterIdsFromPrometheusGlobalView is deprecated
       *
       * @summary Removes data sources from a global aggregation instance in Managed Service for Prometheus.
       *
       * @param request RemoveAliClusterIdsFromPrometheusGlobalViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveAliClusterIdsFromPrometheusGlobalViewResponse
       */
      Models::RemoveAliClusterIdsFromPrometheusGlobalViewResponse removeAliClusterIdsFromPrometheusGlobalViewWithOptions(const Models::RemoveAliClusterIdsFromPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RemoveAliClusterIdsFromPrometheusGlobalView is deprecated
       *
       * @summary Removes data sources from a global aggregation instance in Managed Service for Prometheus.
       *
       * @param request RemoveAliClusterIdsFromPrometheusGlobalViewRequest
       * @return RemoveAliClusterIdsFromPrometheusGlobalViewResponse
       */
      Models::RemoveAliClusterIdsFromPrometheusGlobalViewResponse removeAliClusterIdsFromPrometheusGlobalView(const Models::RemoveAliClusterIdsFromPrometheusGlobalViewRequest &request);

      /**
       * @deprecated OpenAPI RemoveSourcesFromPrometheusGlobalView is deprecated
       *
       * @summary Removes data sources from a global aggregation instance in Managed Service for Prometheus. You can delete only data sources that are not from Alibaba Cloud.
       *
       * @param request RemoveSourcesFromPrometheusGlobalViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSourcesFromPrometheusGlobalViewResponse
       */
      Models::RemoveSourcesFromPrometheusGlobalViewResponse removeSourcesFromPrometheusGlobalViewWithOptions(const Models::RemoveSourcesFromPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RemoveSourcesFromPrometheusGlobalView is deprecated
       *
       * @summary Removes data sources from a global aggregation instance in Managed Service for Prometheus. You can delete only data sources that are not from Alibaba Cloud.
       *
       * @param request RemoveSourcesFromPrometheusGlobalViewRequest
       * @return RemoveSourcesFromPrometheusGlobalViewResponse
       */
      Models::RemoveSourcesFromPrometheusGlobalViewResponse removeSourcesFromPrometheusGlobalView(const Models::RemoveSourcesFromPrometheusGlobalViewRequest &request);

      /**
       * @summary Restarts a feature.
       *
       * @param request RestartEnvironmentFeatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartEnvironmentFeatureResponse
       */
      Models::RestartEnvironmentFeatureResponse restartEnvironmentFeatureWithOptions(const Models::RestartEnvironmentFeatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a feature.
       *
       * @param request RestartEnvironmentFeatureRequest
       * @return RestartEnvironmentFeatureResponse
       */
      Models::RestartEnvironmentFeatureResponse restartEnvironmentFeature(const Models::RestartEnvironmentFeatureRequest &request);

      /**
       * @summary Modifies the settings of Application Monitoring, such as trace sampling and agent switch settings.
       *
       * @param request SaveTraceAppConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTraceAppConfigResponse
       */
      Models::SaveTraceAppConfigResponse saveTraceAppConfigWithOptions(const Models::SaveTraceAppConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the settings of Application Monitoring, such as trace sampling and agent switch settings.
       *
       * @param request SaveTraceAppConfigRequest
       * @return SaveTraceAppConfigResponse
       */
      Models::SaveTraceAppConfigResponse saveTraceAppConfig(const Models::SaveTraceAppConfigRequest &request);

      /**
       * @summary Queries alert contacts.
       *
       * @description This operation is no longer maintained. To query alert contacts, call the DescribeContacts operation provided by the new version of Alert Management.
       *
       * @param request SearchAlertContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchAlertContactResponse
       */
      Models::SearchAlertContactResponse searchAlertContactWithOptions(const Models::SearchAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert contacts.
       *
       * @description This operation is no longer maintained. To query alert contacts, call the DescribeContacts operation provided by the new version of Alert Management.
       *
       * @param request SearchAlertContactRequest
       * @return SearchAlertContactResponse
       */
      Models::SearchAlertContactResponse searchAlertContact(const Models::SearchAlertContactRequest &request);

      /**
       * @summary Queries alert contact groups.
       *
       * @description The operation is no longer maintained. Call the DescribeContactGroups operation in the alert management module to query alert contact groups.
       *
       * @param request SearchAlertContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchAlertContactGroupResponse
       */
      Models::SearchAlertContactGroupResponse searchAlertContactGroupWithOptions(const Models::SearchAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert contact groups.
       *
       * @description The operation is no longer maintained. Call the DescribeContactGroups operation in the alert management module to query alert contact groups.
       *
       * @param request SearchAlertContactGroupRequest
       * @return SearchAlertContactGroupResponse
       */
      Models::SearchAlertContactGroupResponse searchAlertContactGroup(const Models::SearchAlertContactGroupRequest &request);

      /**
       * @summary Queries the alert records of an alert rule.
       *
       * @description This operation is no longer maintained. To query alert records, call the ListAlerts operation provided by the new version of Alert Management.
       *
       * @param request SearchAlertHistoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchAlertHistoriesResponse
       */
      Models::SearchAlertHistoriesResponse searchAlertHistoriesWithOptions(const Models::SearchAlertHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert records of an alert rule.
       *
       * @description This operation is no longer maintained. To query alert records, call the ListAlerts operation provided by the new version of Alert Management.
       *
       * @param request SearchAlertHistoriesRequest
       * @return SearchAlertHistoriesResponse
       */
      Models::SearchAlertHistoriesResponse searchAlertHistories(const Models::SearchAlertHistoriesRequest &request);

      /**
       * @summary Queries alert rules.
       *
       * @description The current operation is no longer maintained. You can call the GetAlertRules operation of Alert Management (New) to query existing alert rules.
       *
       * @param request SearchAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchAlertRulesResponse
       */
      Models::SearchAlertRulesResponse searchAlertRulesWithOptions(const Models::SearchAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert rules.
       *
       * @description The current operation is no longer maintained. You can call the GetAlertRules operation of Alert Management (New) to query existing alert rules.
       *
       * @param request SearchAlertRulesRequest
       * @return SearchAlertRulesResponse
       */
      Models::SearchAlertRulesResponse searchAlertRules(const Models::SearchAlertRulesRequest &request);

      /**
       * @summary Queries alert event records.
       *
       * @description Alert event records are different from alert notification records. Alert events are recorded every minute after an alert rule filters data. Alert events can be classified based on whether they are triggered or not. If a triggered event is not in the silence period, an alert notification is sent.
       *
       * @param request SearchEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchEventsResponse
       */
      Models::SearchEventsResponse searchEventsWithOptions(const Models::SearchEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert event records.
       *
       * @description Alert event records are different from alert notification records. Alert events are recorded every minute after an alert rule filters data. Alert events can be classified based on whether they are triggered or not. If a triggered event is not in the silence period, an alert notification is sent.
       *
       * @param request SearchEventsRequest
       * @return SearchEventsResponse
       */
      Models::SearchEventsResponse searchEvents(const Models::SearchEventsRequest &request);

      /**
       * @summary Queries Browser Monitoring tasks by page.
       *
       * @param request SearchRetcodeAppByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchRetcodeAppByPageResponse
       */
      Models::SearchRetcodeAppByPageResponse searchRetcodeAppByPageWithOptions(const Models::SearchRetcodeAppByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Browser Monitoring tasks by page.
       *
       * @param request SearchRetcodeAppByPageRequest
       * @return SearchRetcodeAppByPageResponse
       */
      Models::SearchRetcodeAppByPageResponse searchRetcodeAppByPage(const Models::SearchRetcodeAppByPageRequest &request);

      /**
       * @summary Queries Application Monitoring tasks by application name.
       *
       * @param request SearchTraceAppByNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTraceAppByNameResponse
       */
      Models::SearchTraceAppByNameResponse searchTraceAppByNameWithOptions(const Models::SearchTraceAppByNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Application Monitoring tasks by application name.
       *
       * @param request SearchTraceAppByNameRequest
       * @return SearchTraceAppByNameResponse
       */
      Models::SearchTraceAppByNameResponse searchTraceAppByName(const Models::SearchTraceAppByNameRequest &request);

      /**
       * @summary Queries application monitoring tasks by page.
       *
       * @param request SearchTraceAppByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTraceAppByPageResponse
       */
      Models::SearchTraceAppByPageResponse searchTraceAppByPageWithOptions(const Models::SearchTraceAppByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries application monitoring tasks by page.
       *
       * @param request SearchTraceAppByPageRequest
       * @return SearchTraceAppByPageResponse
       */
      Models::SearchTraceAppByPageResponse searchTraceAppByPage(const Models::SearchTraceAppByPageRequest &request);

      /**
       * @summary Queries traces by time, application name, IP address, span name, and tag.
       *
       * @description > A maximum of 100 data entries can be returned each time this operation is called. If you want to query all existing traces, we recommend that you call the SearchTracesByPage operation. For more information, see [SearchTracesByPage](https://help.aliyun.com/document_detail/175866.html).
       *
       * @param request SearchTracesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTracesResponse
       */
      Models::SearchTracesResponse searchTracesWithOptions(const Models::SearchTracesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries traces by time, application name, IP address, span name, and tag.
       *
       * @description > A maximum of 100 data entries can be returned each time this operation is called. If you want to query all existing traces, we recommend that you call the SearchTracesByPage operation. For more information, see [SearchTracesByPage](https://help.aliyun.com/document_detail/175866.html).
       *
       * @param request SearchTracesRequest
       * @return SearchTracesResponse
       */
      Models::SearchTracesResponse searchTraces(const Models::SearchTracesRequest &request);

      /**
       * @summary Queries traces by page. You can query traces by time range, application name, IP address, span name, or tag.
       *
       * @param request SearchTracesByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTracesByPageResponse
       */
      Models::SearchTracesByPageResponse searchTracesByPageWithOptions(const Models::SearchTracesByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries traces by page. You can query traces by time range, application name, IP address, span name, or tag.
       *
       * @param request SearchTracesByPageRequest
       * @return SearchTracesByPageResponse
       */
      Models::SearchTracesByPageResponse searchTracesByPage(const Models::SearchTracesByPageRequest &request);

      /**
       * @summary Sends a text message to an alert contact to verify the mobile number of the alert contact.
       *
       * @description After you receive the text message, verify the mobile number as prompted. Before you can specify a mobile phone number in a notification policy, you must verify the mobile phone number.
       *
       * @param request SendTTSVerifyLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendTTSVerifyLinkResponse
       */
      Models::SendTTSVerifyLinkResponse sendTTSVerifyLinkWithOptions(const Models::SendTTSVerifyLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a text message to an alert contact to verify the mobile number of the alert contact.
       *
       * @description After you receive the text message, verify the mobile number as prompted. Before you can specify a mobile phone number in a notification policy, you must verify the mobile phone number.
       *
       * @param request SendTTSVerifyLinkRequest
       * @return SendTTSVerifyLinkResponse
       */
      Models::SendTTSVerifyLinkResponse sendTTSVerifyLink(const Models::SendTTSVerifyLinkRequest &request);

      /**
       * @summary Turns on or turns off logon-free sharing for an application monitored by Browser Monitoring.
       *
       * @param request SetRetcodeShareStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetRetcodeShareStatusResponse
       */
      Models::SetRetcodeShareStatusResponse setRetcodeShareStatusWithOptions(const Models::SetRetcodeShareStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Turns on or turns off logon-free sharing for an application monitored by Browser Monitoring.
       *
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
       * @summary Starts scheduled synthetic monitoring tasks.
       *
       * @param tmpReq StartTimingSyntheticTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTimingSyntheticTaskResponse
       */
      Models::StartTimingSyntheticTaskResponse startTimingSyntheticTaskWithOptions(const Models::StartTimingSyntheticTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts scheduled synthetic monitoring tasks.
       *
       * @param request StartTimingSyntheticTaskRequest
       * @return StartTimingSyntheticTaskResponse
       */
      Models::StartTimingSyntheticTaskResponse startTimingSyntheticTask(const Models::StartTimingSyntheticTaskRequest &request);

      /**
       * @summary Call StartAlert to stop an alert rule.
       *
       * @param request StopAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAlertResponse
       */
      Models::StopAlertResponse stopAlertWithOptions(const Models::StopAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call StartAlert to stop an alert rule.
       *
       * @param request StopAlertRequest
       * @return StopAlertResponse
       */
      Models::StopAlertResponse stopAlert(const Models::StopAlertRequest &request);

      /**
       * @summary Stops scheduled synthetic monitoring tasks.
       *
       * @param tmpReq StopTimingSyntheticTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTimingSyntheticTaskResponse
       */
      Models::StopTimingSyntheticTaskResponse stopTimingSyntheticTaskWithOptions(const Models::StopTimingSyntheticTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops scheduled synthetic monitoring tasks.
       *
       * @param request StopTimingSyntheticTaskRequest
       * @return StopTimingSyntheticTaskResponse
       */
      Models::StopTimingSyntheticTaskResponse stopTimingSyntheticTask(const Models::StopTimingSyntheticTaskRequest &request);

      /**
       * @summary Starts or stops a scheduled synthetic monitoring task.
       *
       * @param request SwitchSyntheticTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchSyntheticTaskStatusResponse
       */
      Models::SwitchSyntheticTaskStatusResponse switchSyntheticTaskStatusWithOptions(const Models::SwitchSyntheticTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts or stops a scheduled synthetic monitoring task.
       *
       * @param request SwitchSyntheticTaskStatusRequest
       * @return SwitchSyntheticTaskStatusResponse
       */
      Models::SwitchSyntheticTaskStatusResponse switchSyntheticTaskStatus(const Models::SwitchSyntheticTaskStatusRequest &request);

      /**
       * @deprecated OpenAPI SyncRecordingRules is deprecated
       *
       * @summary Synchronizes the aggregation rule of a cluster to other clusters in a region.
       *
       * @param request SyncRecordingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncRecordingRulesResponse
       */
      Models::SyncRecordingRulesResponse syncRecordingRulesWithOptions(const Models::SyncRecordingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI SyncRecordingRules is deprecated
       *
       * @summary Synchronizes the aggregation rule of a cluster to other clusters in a region.
       *
       * @param request SyncRecordingRulesRequest
       * @return SyncRecordingRulesResponse
       */
      Models::SyncRecordingRulesResponse syncRecordingRules(const Models::SyncRecordingRulesRequest &request);

      /**
       * @summary Adds tags to ARMS resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to ARMS resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @deprecated OpenAPI UninstallManagedPrometheus is deprecated
       *
       * @summary Uninstalls a managed Prometheus agent for a serverless Kubernetes (ASK) cluster, Distributed Cloud Container Platform for Kubernetes (ACK One) cluster, or Elastic Compute Service (ECS) cluster.
       *
       * @description This operation is available only for ASK, ECS, and ACK One clusters. Before you call this operation, make sure that a managed Prometheus agent is installed for your cluster.
       *
       * @param request UninstallManagedPrometheusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallManagedPrometheusResponse
       */
      Models::UninstallManagedPrometheusResponse uninstallManagedPrometheusWithOptions(const Models::UninstallManagedPrometheusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UninstallManagedPrometheus is deprecated
       *
       * @summary Uninstalls a managed Prometheus agent for a serverless Kubernetes (ASK) cluster, Distributed Cloud Container Platform for Kubernetes (ACK One) cluster, or Elastic Compute Service (ECS) cluster.
       *
       * @description This operation is available only for ASK, ECS, and ACK One clusters. Before you call this operation, make sure that a managed Prometheus agent is installed for your cluster.
       *
       * @param request UninstallManagedPrometheusRequest
       * @return UninstallManagedPrometheusResponse
       */
      Models::UninstallManagedPrometheusResponse uninstallManagedPrometheus(const Models::UninstallManagedPrometheusRequest &request);

      /**
       * @summary Releases a Prometheus instance.
       *
       * @param request UninstallPromClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallPromClusterResponse
       */
      Models::UninstallPromClusterResponse uninstallPromClusterWithOptions(const Models::UninstallPromClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a Prometheus instance.
       *
       * @param request UninstallPromClusterRequest
       * @return UninstallPromClusterResponse
       */
      Models::UninstallPromClusterResponse uninstallPromCluster(const Models::UninstallPromClusterRequest &request);

      /**
       * @summary Removes tags from ARMS resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from ARMS resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates an alert contact.
       *
       * @description This operation is no longer maintained. To create or modify an alert contact, call the CreateOrUpdateContact operation provided by the new version of Alert Management.
       *
       * @param request UpdateAlertContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertContactResponse
       */
      Models::UpdateAlertContactResponse updateAlertContactWithOptions(const Models::UpdateAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an alert contact.
       *
       * @description This operation is no longer maintained. To create or modify an alert contact, call the CreateOrUpdateContact operation provided by the new version of Alert Management.
       *
       * @param request UpdateAlertContactRequest
       * @return UpdateAlertContactResponse
       */
      Models::UpdateAlertContactResponse updateAlertContact(const Models::UpdateAlertContactRequest &request);

      /**
       * @summary Updates UpdateAlertContactGroup alarm contact group.
       *
       * @param request UpdateAlertContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertContactGroupResponse
       */
      Models::UpdateAlertContactGroupResponse updateAlertContactGroupWithOptions(const Models::UpdateAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates UpdateAlertContactGroup alarm contact group.
       *
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
       * @summary Modifies a dispatch policy.
       *
       * @param request UpdateDispatchRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDispatchRuleResponse
       */
      Models::UpdateDispatchRuleResponse updateDispatchRuleWithOptions(const Models::UpdateDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a dispatch policy.
       *
       * @param request UpdateDispatchRuleRequest
       * @return UpdateDispatchRuleResponse
       */
      Models::UpdateDispatchRuleResponse updateDispatchRule(const Models::UpdateDispatchRuleRequest &request);

      /**
       * @summary Updates a custom job for an environment.
       *
       * @param request UpdateEnvCustomJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnvCustomJobResponse
       */
      Models::UpdateEnvCustomJobResponse updateEnvCustomJobWithOptions(const Models::UpdateEnvCustomJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom job for an environment.
       *
       * @param request UpdateEnvCustomJobRequest
       * @return UpdateEnvCustomJobResponse
       */
      Models::UpdateEnvCustomJobResponse updateEnvCustomJob(const Models::UpdateEnvCustomJobRequest &request);

      /**
       * @summary 更新环境实例的废弃指标列表
       *
       * @param request UpdateEnvDropMetricsRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnvDropMetricsRuleResponse
       */
      Models::UpdateEnvDropMetricsRuleResponse updateEnvDropMetricsRuleWithOptions(const Models::UpdateEnvDropMetricsRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新环境实例的废弃指标列表
       *
       * @param request UpdateEnvDropMetricsRuleRequest
       * @return UpdateEnvDropMetricsRuleResponse
       */
      Models::UpdateEnvDropMetricsRuleResponse updateEnvDropMetricsRule(const Models::UpdateEnvDropMetricsRuleRequest &request);

      /**
       * @summary Updates the PodMonitor of an environment.
       *
       * @param request UpdateEnvPodMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnvPodMonitorResponse
       */
      Models::UpdateEnvPodMonitorResponse updateEnvPodMonitorWithOptions(const Models::UpdateEnvPodMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the PodMonitor of an environment.
       *
       * @param request UpdateEnvPodMonitorRequest
       * @return UpdateEnvPodMonitorResponse
       */
      Models::UpdateEnvPodMonitorResponse updateEnvPodMonitor(const Models::UpdateEnvPodMonitorRequest &request);

      /**
       * @summary Updates the ServiceMonitor of an environment.
       *
       * @param request UpdateEnvServiceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnvServiceMonitorResponse
       */
      Models::UpdateEnvServiceMonitorResponse updateEnvServiceMonitorWithOptions(const Models::UpdateEnvServiceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the ServiceMonitor of an environment.
       *
       * @param request UpdateEnvServiceMonitorRequest
       * @return UpdateEnvServiceMonitorResponse
       */
      Models::UpdateEnvServiceMonitorResponse updateEnvServiceMonitor(const Models::UpdateEnvServiceMonitorRequest &request);

      /**
       * @summary Updates the configuration of an environment.
       *
       * @param request UpdateEnvironmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnvironmentResponse
       */
      Models::UpdateEnvironmentResponse updateEnvironmentWithOptions(const Models::UpdateEnvironmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of an environment.
       *
       * @param request UpdateEnvironmentRequest
       * @return UpdateEnvironmentResponse
       */
      Models::UpdateEnvironmentResponse updateEnvironment(const Models::UpdateEnvironmentRequest &request);

      /**
       * @summary Updates the information about a Grafana workspace.
       *
       * @param request UpdateGrafanaWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGrafanaWorkspaceResponse
       */
      Models::UpdateGrafanaWorkspaceResponse updateGrafanaWorkspaceWithOptions(const Models::UpdateGrafanaWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a Grafana workspace.
       *
       * @param request UpdateGrafanaWorkspaceRequest
       * @return UpdateGrafanaWorkspaceResponse
       */
      Models::UpdateGrafanaWorkspaceResponse updateGrafanaWorkspace(const Models::UpdateGrafanaWorkspaceRequest &request);

      /**
       * @summary Updates the version of a Grafana workspace.
       *
       * @description Note: The list returned by this operation includes the workspaces of Developer Edition, Expert Edition, and Advanced Edition. The list does not include the workspaces of Shared Edition.
       *
       * @param request UpdateGrafanaWorkspaceVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGrafanaWorkspaceVersionResponse
       */
      Models::UpdateGrafanaWorkspaceVersionResponse updateGrafanaWorkspaceVersionWithOptions(const Models::UpdateGrafanaWorkspaceVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the version of a Grafana workspace.
       *
       * @description Note: The list returned by this operation includes the workspaces of Developer Edition, Expert Edition, and Advanced Edition. The list does not include the workspaces of Shared Edition.
       *
       * @param request UpdateGrafanaWorkspaceVersionRequest
       * @return UpdateGrafanaWorkspaceVersionResponse
       */
      Models::UpdateGrafanaWorkspaceVersionResponse updateGrafanaWorkspaceVersion(const Models::UpdateGrafanaWorkspaceVersionRequest &request);

      /**
       * @summary Modifies the information about an integration.
       *
       * @param request UpdateIntegrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIntegrationResponse
       */
      Models::UpdateIntegrationResponse updateIntegrationWithOptions(const Models::UpdateIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about an integration.
       *
       * @param request UpdateIntegrationRequest
       * @return UpdateIntegrationResponse
       */
      Models::UpdateIntegrationResponse updateIntegration(const Models::UpdateIntegrationRequest &request);

      /**
       * @deprecated OpenAPI UpdateMetricDrop is deprecated, please use ARMS::2019-08-08::UpdateEnvDropMetricsRule instead.
       *
       * @summary Updates the list of discarded metrics.
       *
       * @param request UpdateMetricDropRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMetricDropResponse
       */
      Models::UpdateMetricDropResponse updateMetricDropWithOptions(const Models::UpdateMetricDropRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateMetricDrop is deprecated, please use ARMS::2019-08-08::UpdateEnvDropMetricsRule instead.
       *
       * @summary Updates the list of discarded metrics.
       *
       * @param request UpdateMetricDropRequest
       * @return UpdateMetricDropResponse
       */
      Models::UpdateMetricDropResponse updateMetricDrop(const Models::UpdateMetricDropRequest &request);

      /**
       * @summary 更新Prometheus告警规则
       *
       * @param request UpdatePrometheusAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusAlertRuleResponse
       */
      Models::UpdatePrometheusAlertRuleResponse updatePrometheusAlertRuleWithOptions(const Models::UpdatePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Prometheus告警规则
       *
       * @param request UpdatePrometheusAlertRuleRequest
       * @return UpdatePrometheusAlertRuleResponse
       */
      Models::UpdatePrometheusAlertRuleResponse updatePrometheusAlertRule(const Models::UpdatePrometheusAlertRuleRequest &request);

      /**
       * @deprecated OpenAPI UpdatePrometheusGlobalView is deprecated
       *
       * @summary Updates the data sources of Prometheus instance for GlobalView.
       *
       * @param request UpdatePrometheusGlobalViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusGlobalViewResponse
       */
      Models::UpdatePrometheusGlobalViewResponse updatePrometheusGlobalViewWithOptions(const Models::UpdatePrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdatePrometheusGlobalView is deprecated
       *
       * @summary Updates the data sources of Prometheus instance for GlobalView.
       *
       * @param request UpdatePrometheusGlobalViewRequest
       * @return UpdatePrometheusGlobalViewResponse
       */
      Models::UpdatePrometheusGlobalViewResponse updatePrometheusGlobalView(const Models::UpdatePrometheusGlobalViewRequest &request);

      /**
       * @summary Updates the information about a Prometheus instance.
       *
       * @param request UpdatePrometheusInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusInstanceResponse
       */
      Models::UpdatePrometheusInstanceResponse updatePrometheusInstanceWithOptions(const Models::UpdatePrometheusInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a Prometheus instance.
       *
       * @param request UpdatePrometheusInstanceRequest
       * @return UpdatePrometheusInstanceResponse
       */
      Models::UpdatePrometheusInstanceResponse updatePrometheusInstance(const Models::UpdatePrometheusInstanceRequest &request);

      /**
       * @deprecated OpenAPI UpdatePrometheusIntegration is deprecated
       *
       * @summary Modifies the configurations of an exporter that is integrated into a Prometheus instance for Container Service or a Prometheus instance for ECS.
       *
       * @param request UpdatePrometheusIntegrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusIntegrationResponse
       */
      Models::UpdatePrometheusIntegrationResponse updatePrometheusIntegrationWithOptions(const Models::UpdatePrometheusIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdatePrometheusIntegration is deprecated
       *
       * @summary Modifies the configurations of an exporter that is integrated into a Prometheus instance for Container Service or a Prometheus instance for ECS.
       *
       * @param request UpdatePrometheusIntegrationRequest
       * @return UpdatePrometheusIntegrationResponse
       */
      Models::UpdatePrometheusIntegrationResponse updatePrometheusIntegration(const Models::UpdatePrometheusIntegrationRequest &request);

      /**
       * @deprecated OpenAPI UpdatePrometheusMonitoring is deprecated
       *
       * @summary Updates the monitoring configuration of a Prometheus instance.
       *
       * @param request UpdatePrometheusMonitoringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusMonitoringResponse
       */
      Models::UpdatePrometheusMonitoringResponse updatePrometheusMonitoringWithOptions(const Models::UpdatePrometheusMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdatePrometheusMonitoring is deprecated
       *
       * @summary Updates the monitoring configuration of a Prometheus instance.
       *
       * @param request UpdatePrometheusMonitoringRequest
       * @return UpdatePrometheusMonitoringResponse
       */
      Models::UpdatePrometheusMonitoringResponse updatePrometheusMonitoring(const Models::UpdatePrometheusMonitoringRequest &request);

      /**
       * @deprecated OpenAPI UpdatePrometheusMonitoringStatus is deprecated
       *
       * @summary Updates the status of the monitoring configuration of a Prometheus instance.
       *
       * @param request UpdatePrometheusMonitoringStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusMonitoringStatusResponse
       */
      Models::UpdatePrometheusMonitoringStatusResponse updatePrometheusMonitoringStatusWithOptions(const Models::UpdatePrometheusMonitoringStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdatePrometheusMonitoringStatus is deprecated
       *
       * @summary Updates the status of the monitoring configuration of a Prometheus instance.
       *
       * @param request UpdatePrometheusMonitoringStatusRequest
       * @return UpdatePrometheusMonitoringStatusResponse
       */
      Models::UpdatePrometheusMonitoringStatusResponse updatePrometheusMonitoringStatus(const Models::UpdatePrometheusMonitoringStatusRequest &request);

      /**
       * @summary Updates a Real User Monitoring (RUM) application.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request UpdateRumAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRumAppResponse
       */
      Models::UpdateRumAppResponse updateRumAppWithOptions(const Models::UpdateRumAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Real User Monitoring (RUM) application.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request UpdateRumAppRequest
       * @return UpdateRumAppResponse
       */
      Models::UpdateRumAppResponse updateRumApp(const Models::UpdateRumAppRequest &request);

      /**
       * @summary Updates the status of a Real User Monitoring (RUM) file. You can call this operation after the RUM file is uploaded.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request UpdateRumFileStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRumFileStatusResponse
       */
      Models::UpdateRumFileStatusResponse updateRumFileStatusWithOptions(const Models::UpdateRumFileStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of a Real User Monitoring (RUM) file. You can call this operation after the RUM file is uploaded.
       *
       * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
       *
       * @param request UpdateRumFileStatusRequest
       * @return UpdateRumFileStatusResponse
       */
      Models::UpdateRumFileStatusResponse updateRumFileStatus(const Models::UpdateRumFileStatusRequest &request);

      /**
       * @summary Updates a scheduled synthetic test task.
       *
       * @param tmpReq UpdateTimingSyntheticTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTimingSyntheticTaskResponse
       */
      Models::UpdateTimingSyntheticTaskResponse updateTimingSyntheticTaskWithOptions(const Models::UpdateTimingSyntheticTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a scheduled synthetic test task.
       *
       * @param request UpdateTimingSyntheticTaskRequest
       * @return UpdateTimingSyntheticTaskResponse
       */
      Models::UpdateTimingSyntheticTaskResponse updateTimingSyntheticTask(const Models::UpdateTimingSyntheticTaskRequest &request);

      /**
       * @summary Modifies the information about a webhook alert contact.
       *
       * @description This operation is no longer maintained. Call the CreateOrUpdateWebhookContact operation in the new alter management module to create or modify a webhook alert contact.
       *
       * @param request UpdateWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWebhookResponse
       */
      Models::UpdateWebhookResponse updateWebhookWithOptions(const Models::UpdateWebhookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a webhook alert contact.
       *
       * @description This operation is no longer maintained. Call the CreateOrUpdateWebhookContact operation in the new alter management module to create or modify a webhook alert contact.
       *
       * @param request UpdateWebhookRequest
       * @return UpdateWebhookResponse
       */
      Models::UpdateWebhookResponse updateWebhook(const Models::UpdateWebhookRequest &request);

      /**
       * @summary Updates the release information of an add-on.
       *
       * @param request UpgradeAddonReleaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeAddonReleaseResponse
       */
      Models::UpgradeAddonReleaseResponse upgradeAddonReleaseWithOptions(const Models::UpgradeAddonReleaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the release information of an add-on.
       *
       * @param request UpgradeAddonReleaseRequest
       * @return UpgradeAddonReleaseResponse
       */
      Models::UpgradeAddonReleaseResponse upgradeAddonRelease(const Models::UpgradeAddonReleaseRequest &request);

      /**
       * @summary Updates the feature information of an environment.
       *
       * @param request UpgradeEnvironmentFeatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeEnvironmentFeatureResponse
       */
      Models::UpgradeEnvironmentFeatureResponse upgradeEnvironmentFeatureWithOptions(const Models::UpgradeEnvironmentFeatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the feature information of an environment.
       *
       * @param request UpgradeEnvironmentFeatureRequest
       * @return UpgradeEnvironmentFeatureResponse
       */
      Models::UpgradeEnvironmentFeatureResponse upgradeEnvironmentFeature(const Models::UpgradeEnvironmentFeatureRequest &request);

      /**
       * @summary Uploads a SourceMap file to ARMS Browser Monitoring.
       *
       * @param request UploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadResponse
       */
      Models::UploadResponse uploadWithOptions(const Models::UploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a SourceMap file to ARMS Browser Monitoring.
       *
       * @param request UploadRequest
       * @return UploadResponse
       */
      Models::UploadResponse upload(const Models::UploadRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
