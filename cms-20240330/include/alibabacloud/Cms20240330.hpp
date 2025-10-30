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
       * @summary Install the access component, representing a single access attempt
       *
       * @description Used to create a site monitoring task
       *
       * @param request CreateAddonReleaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAddonReleaseResponse
       */
      Models::CreateAddonReleaseResponse createAddonReleaseWithOptions(const string &policyId, const Models::CreateAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Install the access component, representing a single access attempt
       *
       * @description Used to create a site monitoring task
       *
       * @param request CreateAddonReleaseRequest
       * @return CreateAddonReleaseResponse
       */
      Models::CreateAddonReleaseResponse createAddonRelease(const string &policyId, const Models::CreateAddonReleaseRequest &request);

      /**
       * @summary Create Aggregation Task Group
       *
       * @param request CreateAggTaskGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggTaskGroupResponse
       */
      Models::CreateAggTaskGroupResponse createAggTaskGroupWithOptions(const string &instanceId, const Models::CreateAggTaskGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Aggregation Task Group
       *
       * @param request CreateAggTaskGroupRequest
       * @return CreateAggTaskGroupResponse
       */
      Models::CreateAggTaskGroupResponse createAggTaskGroup(const string &instanceId, const Models::CreateAggTaskGroupRequest &request);

      /**
       * @summary Create storage related to EntityStore
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEntityStoreResponse
       */
      Models::CreateEntityStoreResponse createEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create storage related to EntityStore
       *
       * @return CreateEntityStoreResponse
       */
      Models::CreateEntityStoreResponse createEntityStore(const string &workspaceName);

      /**
       * @summary Create Access Center Policy
       *
       * @description This interface is used to support users in creating event integration.
       *
       * @param request CreateIntegrationPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIntegrationPolicyResponse
       */
      Models::CreateIntegrationPolicyResponse createIntegrationPolicyWithOptions(const Models::CreateIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Access Center Policy
       *
       * @description This interface is used to support users in creating event integration.
       *
       * @param request CreateIntegrationPolicyRequest
       * @return CreateIntegrationPolicyResponse
       */
      Models::CreateIntegrationPolicyResponse createIntegrationPolicy(const Models::CreateIntegrationPolicyRequest &request);

      /**
       * @summary Create a Prometheus monitoring instance
       *
       * @param request CreatePrometheusInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusInstanceResponse
       */
      Models::CreatePrometheusInstanceResponse createPrometheusInstanceWithOptions(const Models::CreatePrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a Prometheus monitoring instance
       *
       * @param request CreatePrometheusInstanceRequest
       * @return CreatePrometheusInstanceResponse
       */
      Models::CreatePrometheusInstanceResponse createPrometheusInstance(const Models::CreatePrometheusInstanceRequest &request);

      /**
       * @summary Create Prometheus View
       *
       * @description Used to create a site monitoring task
       *
       * @param request CreatePrometheusViewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusViewResponse
       */
      Models::CreatePrometheusViewResponse createPrometheusViewWithOptions(const Models::CreatePrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Prometheus View
       *
       * @description Used to create a site monitoring task
       *
       * @param request CreatePrometheusViewRequest
       * @return CreatePrometheusViewResponse
       */
      Models::CreatePrometheusViewResponse createPrometheusView(const Models::CreatePrometheusViewRequest &request);

      /**
       * @summary Create Prometheus Monitoring Instance
       *
       * @description Create a Prometheus monitoring virtual instance.
       *
       * @param request CreatePrometheusVirtualInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusVirtualInstanceResponse
       */
      Models::CreatePrometheusVirtualInstanceResponse createPrometheusVirtualInstanceWithOptions(const Models::CreatePrometheusVirtualInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Prometheus Monitoring Instance
       *
       * @description Create a Prometheus monitoring virtual instance.
       *
       * @param request CreatePrometheusVirtualInstanceRequest
       * @return CreatePrometheusVirtualInstanceResponse
       */
      Models::CreatePrometheusVirtualInstanceResponse createPrometheusVirtualInstance(const Models::CreatePrometheusVirtualInstanceRequest &request);

      /**
       * @summary Create Service
       *
       * @param request CreateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createServiceWithOptions(const string &workspace, const Models::CreateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Service
       *
       * @param request CreateServiceRequest
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createService(const string &workspace, const Models::CreateServiceRequest &request);

      /**
       * @summary Create Ticket
       *
       * @param request CreateTicketRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicketWithOptions(const Models::CreateTicketRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Ticket
       *
       * @param request CreateTicketRequest
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicket(const Models::CreateTicketRequest &request);

      /**
       * @summary Create Umodel configuration
       *
       * @description Create Umodel configuration in the specified workspace
       *
       * @param request CreateUmodelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUmodelResponse
       */
      Models::CreateUmodelResponse createUmodelWithOptions(const string &workspace, const Models::CreateUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Umodel configuration
       *
       * @description Create Umodel configuration in the specified workspace
       *
       * @param request CreateUmodelRequest
       * @return CreateUmodelResponse
       */
      Models::CreateUmodelResponse createUmodel(const string &workspace, const Models::CreateUmodelRequest &request);

      /**
       * @summary Delete addon release information
       *
       * @param request DeleteAddonReleaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAddonReleaseResponse
       */
      Models::DeleteAddonReleaseResponse deleteAddonReleaseWithOptions(const string &policyId, const Models::DeleteAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete addon release information
       *
       * @param request DeleteAddonReleaseRequest
       * @return DeleteAddonReleaseResponse
       */
      Models::DeleteAddonReleaseResponse deleteAddonRelease(const string &policyId, const Models::DeleteAddonReleaseRequest &request);

      /**
       * @summary Delete Aggregation Task Group
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAggTaskGroupResponse
       */
      Models::DeleteAggTaskGroupResponse deleteAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Aggregation Task Group
       *
       * @return DeleteAggTaskGroupResponse
       */
      Models::DeleteAggTaskGroupResponse deleteAggTaskGroup(const string &instanceId, const string &groupId);

      /**
       * @summary Delete EntityStore related storage
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEntityStoreResponse
       */
      Models::DeleteEntityStoreResponse deleteEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete EntityStore related storage
       *
       * @return DeleteEntityStoreResponse
       */
      Models::DeleteEntityStoreResponse deleteEntityStore(const string &workspaceName);

      /**
       * @summary Delete Access Center Policy
       *
       * @param request DeleteIntegrationPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIntegrationPolicyResponse
       */
      Models::DeleteIntegrationPolicyResponse deleteIntegrationPolicyWithOptions(const string &policyId, const Models::DeleteIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Access Center Policy
       *
       * @param request DeleteIntegrationPolicyRequest
       * @return DeleteIntegrationPolicyResponse
       */
      Models::DeleteIntegrationPolicyResponse deleteIntegrationPolicy(const string &policyId, const Models::DeleteIntegrationPolicyRequest &request);

      /**
       * @summary Delete prom instance
       *
       * @description Delete a Prometheus instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrometheusInstanceResponse
       */
      Models::DeletePrometheusInstanceResponse deletePrometheusInstanceWithOptions(const string &prometheusInstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete prom instance
       *
       * @description Delete a Prometheus instance.
       *
       * @return DeletePrometheusInstanceResponse
       */
      Models::DeletePrometheusInstanceResponse deletePrometheusInstance(const string &prometheusInstanceId);

      /**
       * @summary Delete prometheus view instance
       *
       * @description Delete prometheus view instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrometheusViewResponse
       */
      Models::DeletePrometheusViewResponse deletePrometheusViewWithOptions(const string &prometheusViewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete prometheus view instance
       *
       * @description Delete prometheus view instance.
       *
       * @return DeletePrometheusViewResponse
       */
      Models::DeletePrometheusViewResponse deletePrometheusView(const string &prometheusViewId);

      /**
       * @summary Delete Service
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteServiceWithOptions(const string &workspace, const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Service
       *
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteService(const string &workspace, const string &serviceId);

      /**
       * @summary Delete Umodel configuration information
       *
       * @description Delete the Umodel under the specified workspace
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUmodelResponse
       */
      Models::DeleteUmodelResponse deleteUmodelWithOptions(const string &workspace, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Umodel configuration information
       *
       * @description Delete the Umodel under the specified workspace
       *
       * @return DeleteUmodelResponse
       */
      Models::DeleteUmodelResponse deleteUmodel(const string &workspace);

      /**
       * @summary Delete Umodel Elements
       *
       * @description Delete the Umodel Data under a specified workspace
       *
       * @param request DeleteUmodelDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUmodelDataResponse
       */
      Models::DeleteUmodelDataResponse deleteUmodelDataWithOptions(const string &workspace, const Models::DeleteUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Umodel Elements
       *
       * @description Delete the Umodel Data under a specified workspace
       *
       * @param request DeleteUmodelDataRequest
       * @return DeleteUmodelDataResponse
       */
      Models::DeleteUmodelDataResponse deleteUmodelData(const string &workspace, const Models::DeleteUmodelDataRequest &request);

      /**
       * @summary Delete Workspace
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Workspace
       *
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &workspaceName);

      /**
       * @summary Check addon release (view connection status)
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAddonReleaseResponse
       */
      Models::GetAddonReleaseResponse getAddonReleaseWithOptions(const string &releaseName, const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check addon release (view connection status)
       *
       * @return GetAddonReleaseResponse
       */
      Models::GetAddonReleaseResponse getAddonRelease(const string &releaseName, const string &policyId);

      /**
       * @summary Describes the aggregation task group
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggTaskGroupResponse
       */
      Models::GetAggTaskGroupResponse getAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the aggregation task group
       *
       * @return GetAggTaskGroupResponse
       */
      Models::GetAggTaskGroupResponse getAggTaskGroup(const string &instanceId, const string &groupId);

      /**
       * @summary Get EntityStore related storage information
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEntityStoreResponse
       */
      Models::GetEntityStoreResponse getEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get EntityStore related storage information
       *
       * @return GetEntityStoreResponse
       */
      Models::GetEntityStoreResponse getEntityStore(const string &workspaceName);

      /**
       * @summary Query the entity and relationship data under a specified Workspace, returning the entity data within a certain time range (the returned result is transmitted after compression).
       *
       * @param request GetEntityStoreDataRequest
       * @param headers GetEntityStoreDataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEntityStoreDataResponse
       */
      Models::GetEntityStoreDataResponse getEntityStoreDataWithOptions(const string &workspace, const Models::GetEntityStoreDataRequest &request, const Models::GetEntityStoreDataHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the entity and relationship data under a specified Workspace, returning the entity data within a certain time range (the returned result is transmitted after compression).
       *
       * @param request GetEntityStoreDataRequest
       * @return GetEntityStoreDataResponse
       */
      Models::GetEntityStoreDataResponse getEntityStoreData(const string &workspace, const Models::GetEntityStoreDataRequest &request);

      /**
       * @summary Query the list of access center policies
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIntegrationPolicyResponse
       */
      Models::GetIntegrationPolicyResponse getIntegrationPolicyWithOptions(const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of access center policies
       *
       * @return GetIntegrationPolicyResponse
       */
      Models::GetIntegrationPolicyResponse getIntegrationPolicy(const string &policyId);

      /**
       * @summary Query the instance in a specified environment
       *
       * @description Retrieve details of a Prometheus instance.
       *
       * @param request GetPrometheusInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrometheusInstanceResponse
       */
      Models::GetPrometheusInstanceResponse getPrometheusInstanceWithOptions(const string &prometheusInstanceId, const Models::GetPrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the instance in a specified environment
       *
       * @description Retrieve details of a Prometheus instance.
       *
       * @param request GetPrometheusInstanceRequest
       * @return GetPrometheusInstanceResponse
       */
      Models::GetPrometheusInstanceResponse getPrometheusInstance(const string &prometheusInstanceId, const Models::GetPrometheusInstanceRequest &request);

      /**
       * @summary Query a specified Prometheus view instance
       *
       * @description Query a specified Prometheus view instance.
       *
       * @param request GetPrometheusViewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrometheusViewResponse
       */
      Models::GetPrometheusViewResponse getPrometheusViewWithOptions(const string &prometheusViewId, const Models::GetPrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a specified Prometheus view instance
       *
       * @description Query a specified Prometheus view instance.
       *
       * @param request GetPrometheusViewRequest
       * @return GetPrometheusViewResponse
       */
      Models::GetPrometheusViewResponse getPrometheusView(const string &prometheusViewId, const Models::GetPrometheusViewRequest &request);

      /**
       * @summary Query Service
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getServiceWithOptions(const string &workspace, const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Service
       *
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getService(const string &workspace, const string &serviceId);

      /**
       * @summary Get Application Observability Instance
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceObservabilityResponse
       */
      Models::GetServiceObservabilityResponse getServiceObservabilityWithOptions(const string &workspace, const string &type, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Application Observability Instance
       *
       * @return GetServiceObservabilityResponse
       */
      Models::GetServiceObservabilityResponse getServiceObservability(const string &workspace, const string &type);

      /**
       * @summary Get Umodel configuration information
       *
       * @description Get Umodel configuration information
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUmodelResponse
       */
      Models::GetUmodelResponse getUmodelWithOptions(const string &workspace, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Umodel configuration information
       *
       * @description Get Umodel configuration information
       *
       * @return GetUmodelResponse
       */
      Models::GetUmodelResponse getUmodel(const string &workspace);

      /**
       * @summary Retrieve associated Umodel graph data
       *
       * @description Find Umodel
       *
       * @param request GetUmodelDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUmodelDataResponse
       */
      Models::GetUmodelDataResponse getUmodelDataWithOptions(const string &workspace, const Models::GetUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve associated Umodel graph data
       *
       * @description Find Umodel
       *
       * @param request GetUmodelDataRequest
       * @return GetUmodelDataResponse
       */
      Models::GetUmodelDataResponse getUmodelData(const string &workspace, const Models::GetUmodelDataRequest &request);

      /**
       * @summary Get Workspace
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspaceWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Workspace
       *
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspace(const string &workspaceName);

      /**
       * @summary List of addon releases
       *
       * @description Query the list of access configurations
       *
       * @param request ListAddonReleasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddonReleasesResponse
       */
      Models::ListAddonReleasesResponse listAddonReleasesWithOptions(const string &policyId, const Models::ListAddonReleasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List of addon releases
       *
       * @description Query the list of access configurations
       *
       * @param request ListAddonReleasesRequest
       * @return ListAddonReleasesResponse
       */
      Models::ListAddonReleasesResponse listAddonReleases(const string &policyId, const Models::ListAddonReleasesRequest &request);

      /**
       * @summary List Aggregation Task Groups
       *
       * @param tmpReq ListAggTaskGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggTaskGroupsResponse
       */
      Models::ListAggTaskGroupsResponse listAggTaskGroupsWithOptions(const string &instanceId, const Models::ListAggTaskGroupsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Aggregation Task Groups
       *
       * @param request ListAggTaskGroupsRequest
       * @return ListAggTaskGroupsResponse
       */
      Models::ListAggTaskGroupsResponse listAggTaskGroups(const string &instanceId, const Models::ListAggTaskGroupsRequest &request);

      /**
       * @summary Query Alert Actions
       *
       * @param tmpReq ListAlertActionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertActionsResponse
       */
      Models::ListAlertActionsResponse listAlertActionsWithOptions(const Models::ListAlertActionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Alert Actions
       *
       * @param request ListAlertActionsRequest
       * @return ListAlertActionsResponse
       */
      Models::ListAlertActionsResponse listAlertActions(const Models::ListAlertActionsRequest &request);

      /**
       * @summary Query Access Center Policy List Information
       *
       * @description Query Integration List
       *
       * @param tmpReq ListIntegrationPoliciesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPoliciesResponse
       */
      Models::ListIntegrationPoliciesResponse listIntegrationPoliciesWithOptions(const Models::ListIntegrationPoliciesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Access Center Policy List Information
       *
       * @description Query Integration List
       *
       * @param request ListIntegrationPoliciesRequest
       * @return ListIntegrationPoliciesResponse
       */
      Models::ListIntegrationPoliciesResponse listIntegrationPolicies(const Models::ListIntegrationPoliciesRequest &request);

      /**
       * @summary Get storage requirement information for the access center policy
       *
       * @param request ListIntegrationPolicyCustomScrapeJobRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyCustomScrapeJobRulesResponse
       */
      Models::ListIntegrationPolicyCustomScrapeJobRulesResponse listIntegrationPolicyCustomScrapeJobRulesWithOptions(const string &policyId, const Models::ListIntegrationPolicyCustomScrapeJobRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get storage requirement information for the access center policy
       *
       * @param request ListIntegrationPolicyCustomScrapeJobRulesRequest
       * @return ListIntegrationPolicyCustomScrapeJobRulesResponse
       */
      Models::ListIntegrationPolicyCustomScrapeJobRulesResponse listIntegrationPolicyCustomScrapeJobRules(const string &policyId, const Models::ListIntegrationPolicyCustomScrapeJobRulesRequest &request);

      /**
       * @summary Policy Dashboard List
       *
       * @description This article provides an example of querying the alarm template list. The result shows that there are 2 alarm templates in the list, which are `ECS_Template1` and `ECS_Template2`.
       *
       * @param request ListIntegrationPolicyDashboardsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyDashboardsResponse
       */
      Models::ListIntegrationPolicyDashboardsResponse listIntegrationPolicyDashboardsWithOptions(const string &policyId, const Models::ListIntegrationPolicyDashboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Policy Dashboard List
       *
       * @description This article provides an example of querying the alarm template list. The result shows that there are 2 alarm templates in the list, which are `ECS_Template1` and `ECS_Template2`.
       *
       * @param request ListIntegrationPolicyDashboardsRequest
       * @return ListIntegrationPolicyDashboardsResponse
       */
      Models::ListIntegrationPolicyDashboardsResponse listIntegrationPolicyDashboards(const string &policyId, const Models::ListIntegrationPolicyDashboardsRequest &request);

      /**
       * @summary Get PodMonitor Resources of Access Center Policy
       *
       * @description This article provides an example to query the alarm template list. The result shows that there are 2 alarm templates in the alarm template list, which are `ECS_Template1` and `ECS_Template2`.
       *
       * @param request ListIntegrationPolicyPodMonitorsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyPodMonitorsResponse
       */
      Models::ListIntegrationPolicyPodMonitorsResponse listIntegrationPolicyPodMonitorsWithOptions(const string &policyId, const Models::ListIntegrationPolicyPodMonitorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get PodMonitor Resources of Access Center Policy
       *
       * @description This article provides an example to query the alarm template list. The result shows that there are 2 alarm templates in the alarm template list, which are `ECS_Template1` and `ECS_Template2`.
       *
       * @param request ListIntegrationPolicyPodMonitorsRequest
       * @return ListIntegrationPolicyPodMonitorsResponse
       */
      Models::ListIntegrationPolicyPodMonitorsResponse listIntegrationPolicyPodMonitors(const string &policyId, const Models::ListIntegrationPolicyPodMonitorsRequest &request);

      /**
       * @summary Get Storage Requirements Information for Access Center Policy
       *
       * @description During the effective period of the policy, all alarms within the application group will no longer send notifications.
       *  
       * This article provides an example of creating a pause alarm notification policy `PauseNotify` for the application group `7301****`. This application group will pause alarms from `1622949300000` to `1623208500000` (Beijing Time `2021-06-06 11:15:00` to `2021-06-09 11:15:00`).
       *
       * @param request ListIntegrationPolicyStorageRequirementsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyStorageRequirementsResponse
       */
      Models::ListIntegrationPolicyStorageRequirementsResponse listIntegrationPolicyStorageRequirementsWithOptions(const string &policyId, const Models::ListIntegrationPolicyStorageRequirementsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Storage Requirements Information for Access Center Policy
       *
       * @description During the effective period of the policy, all alarms within the application group will no longer send notifications.
       *  
       * This article provides an example of creating a pause alarm notification policy `PauseNotify` for the application group `7301****`. This application group will pause alarms from `1622949300000` to `1623208500000` (Beijing Time `2021-06-06 11:15:00` to `2021-06-09 11:15:00`).
       *
       * @param request ListIntegrationPolicyStorageRequirementsRequest
       * @return ListIntegrationPolicyStorageRequirementsResponse
       */
      Models::ListIntegrationPolicyStorageRequirementsResponse listIntegrationPolicyStorageRequirements(const string &policyId, const Models::ListIntegrationPolicyStorageRequirementsRequest &request);

      /**
       * @summary Get Prometheus Instance Dashboard List
       *
       * @description Get the list of Prometheus instance dashboards.
       *
       * @param request ListPrometheusDashboardsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusDashboardsResponse
       */
      Models::ListPrometheusDashboardsResponse listPrometheusDashboardsWithOptions(const string &prometheusInstanceId, const Models::ListPrometheusDashboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Prometheus Instance Dashboard List
       *
       * @description Get the list of Prometheus instance dashboards.
       *
       * @param request ListPrometheusDashboardsRequest
       * @return ListPrometheusDashboardsResponse
       */
      Models::ListPrometheusDashboardsResponse listPrometheusDashboards(const string &prometheusInstanceId, const Models::ListPrometheusDashboardsRequest &request);

      /**
       * @summary Get the list of Prometheus instance information
       *
       * @description Get the list of Prometheus instances.
       *
       * @param tmpReq ListPrometheusInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusInstancesResponse
       */
      Models::ListPrometheusInstancesResponse listPrometheusInstancesWithOptions(const Models::ListPrometheusInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the list of Prometheus instance information
       *
       * @description Get the list of Prometheus instances.
       *
       * @param request ListPrometheusInstancesRequest
       * @return ListPrometheusInstancesResponse
       */
      Models::ListPrometheusInstancesResponse listPrometheusInstances(const Models::ListPrometheusInstancesRequest &request);

      /**
       * @summary Retrieve a list of Prometheus view instance information
       *
       * @description Retrieve a list of Prometheus view instance information.
       *
       * @param tmpReq ListPrometheusViewsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusViewsResponse
       */
      Models::ListPrometheusViewsResponse listPrometheusViewsWithOptions(const Models::ListPrometheusViewsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a list of Prometheus view instance information
       *
       * @description Retrieve a list of Prometheus view instance information.
       *
       * @param request ListPrometheusViewsRequest
       * @return ListPrometheusViewsResponse
       */
      Models::ListPrometheusViewsResponse listPrometheusViews(const Models::ListPrometheusViewsRequest &request);

      /**
       * @summary Get Prometheus Virtual Instance
       *
       * @description Used for creating a site monitoring task
       *
       * @param request ListPrometheusVirtualInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusVirtualInstancesResponse
       */
      Models::ListPrometheusVirtualInstancesResponse listPrometheusVirtualInstancesWithOptions(const Models::ListPrometheusVirtualInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Prometheus Virtual Instance
       *
       * @description Used for creating a site monitoring task
       *
       * @param request ListPrometheusVirtualInstancesRequest
       * @return ListPrometheusVirtualInstancesResponse
       */
      Models::ListPrometheusVirtualInstancesResponse listPrometheusVirtualInstances(const Models::ListPrometheusVirtualInstancesRequest &request);

      /**
       * @summary List Resource Services
       *
       * @param request ListServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServicesWithOptions(const string &workspace, const Models::ListServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Resource Services
       *
       * @param request ListServicesRequest
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServices(const string &workspace, const Models::ListServicesRequest &request);

      /**
       * @summary Get Workspace List
       *
       * @param tmpReq ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Workspace List
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary Create Workspace
       *
       * @param request PutWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutWorkspaceResponse
       */
      Models::PutWorkspaceResponse putWorkspaceWithOptions(const string &workspaceName, const Models::PutWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Workspace
       *
       * @param request PutWorkspaceRequest
       * @return PutWorkspaceResponse
       */
      Models::PutWorkspaceResponse putWorkspace(const string &workspaceName, const Models::PutWorkspaceRequest &request);

      /**
       * @summary Upgrade Access Component
       *
       * @param request UpdateAddonReleaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAddonReleaseResponse
       */
      Models::UpdateAddonReleaseResponse updateAddonReleaseWithOptions(const string &releaseName, const string &policyId, const Models::UpdateAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrade Access Component
       *
       * @param request UpdateAddonReleaseRequest
       * @return UpdateAddonReleaseResponse
       */
      Models::UpdateAddonReleaseResponse updateAddonRelease(const string &releaseName, const string &policyId, const Models::UpdateAddonReleaseRequest &request);

      /**
       * @summary Apply Aggregation Task Group
       *
       * @param request UpdateAggTaskGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggTaskGroupResponse
       */
      Models::UpdateAggTaskGroupResponse updateAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const Models::UpdateAggTaskGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Apply Aggregation Task Group
       *
       * @param request UpdateAggTaskGroupRequest
       * @return UpdateAggTaskGroupResponse
       */
      Models::UpdateAggTaskGroupResponse updateAggTaskGroup(const string &instanceId, const string &groupId, const Models::UpdateAggTaskGroupRequest &request);

      /**
       * @summary Update Aggregation Task Group Status
       *
       * @param request UpdateAggTaskGroupStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggTaskGroupStatusResponse
       */
      Models::UpdateAggTaskGroupStatusResponse updateAggTaskGroupStatusWithOptions(const string &instanceId, const string &groupId, const Models::UpdateAggTaskGroupStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Aggregation Task Group Status
       *
       * @param request UpdateAggTaskGroupStatusRequest
       * @return UpdateAggTaskGroupStatusResponse
       */
      Models::UpdateAggTaskGroupStatusResponse updateAggTaskGroupStatus(const string &instanceId, const string &groupId, const Models::UpdateAggTaskGroupStatusRequest &request);

      /**
       * @summary Update the specified policy
       *
       * @param request UpdateIntegrationPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIntegrationPolicyResponse
       */
      Models::UpdateIntegrationPolicyResponse updateIntegrationPolicyWithOptions(const string &integrationPolicyId, const Models::UpdateIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the specified policy
       *
       * @param request UpdateIntegrationPolicyRequest
       * @return UpdateIntegrationPolicyResponse
       */
      Models::UpdateIntegrationPolicyResponse updateIntegrationPolicy(const string &integrationPolicyId, const Models::UpdateIntegrationPolicyRequest &request);

      /**
       * @summary Update Prometheus instance information
       *
       * @description Update Prometheus instance information.
       *
       * @param request UpdatePrometheusInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusInstanceResponse
       */
      Models::UpdatePrometheusInstanceResponse updatePrometheusInstanceWithOptions(const string &prometheusInstanceId, const Models::UpdatePrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Prometheus instance information
       *
       * @description Update Prometheus instance information.
       *
       * @param request UpdatePrometheusInstanceRequest
       * @return UpdatePrometheusInstanceResponse
       */
      Models::UpdatePrometheusInstanceResponse updatePrometheusInstance(const string &prometheusInstanceId, const Models::UpdatePrometheusInstanceRequest &request);

      /**
       * @summary Update Prometheus view instance information
       *
       * @description Update Prometheus view instance information.
       *
       * @param request UpdatePrometheusViewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusViewResponse
       */
      Models::UpdatePrometheusViewResponse updatePrometheusViewWithOptions(const string &prometheusViewId, const Models::UpdatePrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Prometheus view instance information
       *
       * @description Update Prometheus view instance information.
       *
       * @param request UpdatePrometheusViewRequest
       * @return UpdatePrometheusViewResponse
       */
      Models::UpdatePrometheusViewResponse updatePrometheusView(const string &prometheusViewId, const Models::UpdatePrometheusViewRequest &request);

      /**
       * @summary Update Service
       *
       * @param request UpdateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateServiceWithOptions(const string &workspace, const string &serviceId, const Models::UpdateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Service
       *
       * @param request UpdateServiceRequest
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateService(const string &workspace, const string &serviceId, const Models::UpdateServiceRequest &request);

      /**
       * @summary Update Umodel configuration information
       *
       * @description Update Umodel configuration information
       *
       * @param request UpdateUmodelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUmodelResponse
       */
      Models::UpdateUmodelResponse updateUmodelWithOptions(const string &workspace, const Models::UpdateUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Umodel configuration information
       *
       * @description Update Umodel configuration information
       *
       * @param request UpdateUmodelRequest
       * @return UpdateUmodelResponse
       */
      Models::UpdateUmodelResponse updateUmodel(const string &workspace, const Models::UpdateUmodelRequest &request);

      /**
       * @summary Write Umodel Elements
       *
       * @param request UpsertUmodelDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertUmodelDataResponse
       */
      Models::UpsertUmodelDataResponse upsertUmodelDataWithOptions(const string &workspace, const Models::UpsertUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Write Umodel Elements
       *
       * @param request UpsertUmodelDataRequest
       * @return UpsertUmodelDataResponse
       */
      Models::UpsertUmodelDataResponse upsertUmodelData(const string &workspace, const Models::UpsertUmodelDataRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
