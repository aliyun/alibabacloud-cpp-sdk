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
       * @summary 安装接入组件，代表进行一次接入
       *
       * @param request CreateAddonReleaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAddonReleaseResponse
       */
      Models::CreateAddonReleaseResponse createAddonReleaseWithOptions(const string &policyId, const Models::CreateAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 安装接入组件，代表进行一次接入
       *
       * @param request CreateAddonReleaseRequest
       * @return CreateAddonReleaseResponse
       */
      Models::CreateAddonReleaseResponse createAddonRelease(const string &policyId, const Models::CreateAddonReleaseRequest &request);

      /**
       * @summary 创建聚合任务组
       *
       * @param request CreateAggTaskGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggTaskGroupResponse
       */
      Models::CreateAggTaskGroupResponse createAggTaskGroupWithOptions(const string &instanceId, const Models::CreateAggTaskGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建聚合任务组
       *
       * @param request CreateAggTaskGroupRequest
       * @return CreateAggTaskGroupResponse
       */
      Models::CreateAggTaskGroupResponse createAggTaskGroup(const string &instanceId, const Models::CreateAggTaskGroupRequest &request);

      /**
       * @summary 创建EntityStore相关存储
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEntityStoreResponse
       */
      Models::CreateEntityStoreResponse createEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建EntityStore相关存储
       *
       * @return CreateEntityStoreResponse
       */
      Models::CreateEntityStoreResponse createEntityStore(const string &workspaceName);

      /**
       * @summary 创建接入中心策略
       *
       * @param request CreateIntegrationPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIntegrationPolicyResponse
       */
      Models::CreateIntegrationPolicyResponse createIntegrationPolicyWithOptions(const Models::CreateIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建接入中心策略
       *
       * @param request CreateIntegrationPolicyRequest
       * @return CreateIntegrationPolicyResponse
       */
      Models::CreateIntegrationPolicyResponse createIntegrationPolicy(const Models::CreateIntegrationPolicyRequest &request);

      /**
       * @summary 创建Prometheus监控实例
       *
       * @param request CreatePrometheusInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusInstanceResponse
       */
      Models::CreatePrometheusInstanceResponse createPrometheusInstanceWithOptions(const Models::CreatePrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Prometheus监控实例
       *
       * @param request CreatePrometheusInstanceRequest
       * @return CreatePrometheusInstanceResponse
       */
      Models::CreatePrometheusInstanceResponse createPrometheusInstance(const Models::CreatePrometheusInstanceRequest &request);

      /**
       * @summary 创建prometheus视图
       *
       * @param request CreatePrometheusViewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusViewResponse
       */
      Models::CreatePrometheusViewResponse createPrometheusViewWithOptions(const Models::CreatePrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建prometheus视图
       *
       * @param request CreatePrometheusViewRequest
       * @return CreatePrometheusViewResponse
       */
      Models::CreatePrometheusViewResponse createPrometheusView(const Models::CreatePrometheusViewRequest &request);

      /**
       * @summary 创建Prometheus监控实例
       *
       * @param request CreatePrometheusVirtualInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusVirtualInstanceResponse
       */
      Models::CreatePrometheusVirtualInstanceResponse createPrometheusVirtualInstanceWithOptions(const Models::CreatePrometheusVirtualInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Prometheus监控实例
       *
       * @param request CreatePrometheusVirtualInstanceRequest
       * @return CreatePrometheusVirtualInstanceResponse
       */
      Models::CreatePrometheusVirtualInstanceResponse createPrometheusVirtualInstance(const Models::CreatePrometheusVirtualInstanceRequest &request);

      /**
       * @summary 创建Service
       *
       * @param request CreateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createServiceWithOptions(const string &workspace, const Models::CreateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Service
       *
       * @param request CreateServiceRequest
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createService(const string &workspace, const Models::CreateServiceRequest &request);

      /**
       * @summary 创建票据
       *
       * @param request CreateTicketRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicketWithOptions(const Models::CreateTicketRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建票据
       *
       * @param request CreateTicketRequest
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicket(const Models::CreateTicketRequest &request);

      /**
       * @summary 创建Umodel配置
       *
       * @param request CreateUmodelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUmodelResponse
       */
      Models::CreateUmodelResponse createUmodelWithOptions(const string &workspace, const Models::CreateUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Umodel配置
       *
       * @param request CreateUmodelRequest
       * @return CreateUmodelResponse
       */
      Models::CreateUmodelResponse createUmodel(const string &workspace, const Models::CreateUmodelRequest &request);

      /**
       * @summary 删除addon release信息
       *
       * @param request DeleteAddonReleaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAddonReleaseResponse
       */
      Models::DeleteAddonReleaseResponse deleteAddonReleaseWithOptions(const string &policyId, const Models::DeleteAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除addon release信息
       *
       * @param request DeleteAddonReleaseRequest
       * @return DeleteAddonReleaseResponse
       */
      Models::DeleteAddonReleaseResponse deleteAddonRelease(const string &policyId, const Models::DeleteAddonReleaseRequest &request);

      /**
       * @summary 删除聚合任务组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAggTaskGroupResponse
       */
      Models::DeleteAggTaskGroupResponse deleteAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除聚合任务组
       *
       * @return DeleteAggTaskGroupResponse
       */
      Models::DeleteAggTaskGroupResponse deleteAggTaskGroup(const string &instanceId, const string &groupId);

      /**
       * @summary 删除EntityStore相关存储
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEntityStoreResponse
       */
      Models::DeleteEntityStoreResponse deleteEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除EntityStore相关存储
       *
       * @return DeleteEntityStoreResponse
       */
      Models::DeleteEntityStoreResponse deleteEntityStore(const string &workspaceName);

      /**
       * @summary 删除接入中心策略
       *
       * @param request DeleteIntegrationPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIntegrationPolicyResponse
       */
      Models::DeleteIntegrationPolicyResponse deleteIntegrationPolicyWithOptions(const string &policyId, const Models::DeleteIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除接入中心策略
       *
       * @param request DeleteIntegrationPolicyRequest
       * @return DeleteIntegrationPolicyResponse
       */
      Models::DeleteIntegrationPolicyResponse deleteIntegrationPolicy(const string &policyId, const Models::DeleteIntegrationPolicyRequest &request);

      /**
       * @summary 删除prom实例
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrometheusInstanceResponse
       */
      Models::DeletePrometheusInstanceResponse deletePrometheusInstanceWithOptions(const string &prometheusInstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除prom实例
       *
       * @return DeletePrometheusInstanceResponse
       */
      Models::DeletePrometheusInstanceResponse deletePrometheusInstance(const string &prometheusInstanceId);

      /**
       * @summary 删除prometheus视图实例
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrometheusViewResponse
       */
      Models::DeletePrometheusViewResponse deletePrometheusViewWithOptions(const string &prometheusViewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除prometheus视图实例
       *
       * @return DeletePrometheusViewResponse
       */
      Models::DeletePrometheusViewResponse deletePrometheusView(const string &prometheusViewId);

      /**
       * @summary 删除Service
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteServiceWithOptions(const string &workspace, const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Service
       *
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteService(const string &workspace, const string &serviceId);

      /**
       * @summary 删除Umodel配置信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUmodelResponse
       */
      Models::DeleteUmodelResponse deleteUmodelWithOptions(const string &workspace, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Umodel配置信息
       *
       * @return DeleteUmodelResponse
       */
      Models::DeleteUmodelResponse deleteUmodel(const string &workspace);

      /**
       * @summary 删除 Umodel Elements
       *
       * @param request DeleteUmodelDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUmodelDataResponse
       */
      Models::DeleteUmodelDataResponse deleteUmodelDataWithOptions(const string &workspace, const Models::DeleteUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 Umodel Elements
       *
       * @param request DeleteUmodelDataRequest
       * @return DeleteUmodelDataResponse
       */
      Models::DeleteUmodelDataResponse deleteUmodelData(const string &workspace, const Models::DeleteUmodelDataRequest &request);

      /**
       * @summary 删除工作空间
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除工作空间
       *
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &workspaceName);

      /**
       * @summary 查看addon release(查看接入状态)
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAddonReleaseResponse
       */
      Models::GetAddonReleaseResponse getAddonReleaseWithOptions(const string &releaseName, const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看addon release(查看接入状态)
       *
       * @return GetAddonReleaseResponse
       */
      Models::GetAddonReleaseResponse getAddonRelease(const string &releaseName, const string &policyId);

      /**
       * @summary 描述聚合任务组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggTaskGroupResponse
       */
      Models::GetAggTaskGroupResponse getAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 描述聚合任务组
       *
       * @return GetAggTaskGroupResponse
       */
      Models::GetAggTaskGroupResponse getAggTaskGroup(const string &instanceId, const string &groupId);

      /**
       * @summary 获取EntityStore相关存储信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEntityStoreResponse
       */
      Models::GetEntityStoreResponse getEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取EntityStore相关存储信息
       *
       * @return GetEntityStoreResponse
       */
      Models::GetEntityStoreResponse getEntityStore(const string &workspaceName);

      /**
       * @summary 查询指定Workspace下的实体和关系数据，返回结果显示某时间区间中的实体数据（返回结果压缩后传输）。
       *
       * @param request GetEntityStoreDataRequest
       * @param headers GetEntityStoreDataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEntityStoreDataResponse
       */
      Models::GetEntityStoreDataResponse getEntityStoreDataWithOptions(const string &workspace, const Models::GetEntityStoreDataRequest &request, const Models::GetEntityStoreDataHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定Workspace下的实体和关系数据，返回结果显示某时间区间中的实体数据（返回结果压缩后传输）。
       *
       * @param request GetEntityStoreDataRequest
       * @return GetEntityStoreDataResponse
       */
      Models::GetEntityStoreDataResponse getEntityStoreData(const string &workspace, const Models::GetEntityStoreDataRequest &request);

      /**
       * @summary 查询接入中心策略列表信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIntegrationPolicyResponse
       */
      Models::GetIntegrationPolicyResponse getIntegrationPolicyWithOptions(const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询接入中心策略列表信息
       *
       * @return GetIntegrationPolicyResponse
       */
      Models::GetIntegrationPolicyResponse getIntegrationPolicy(const string &policyId);

      /**
       * @summary 查询指定环境实例
       *
       * @param request GetPrometheusInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrometheusInstanceResponse
       */
      Models::GetPrometheusInstanceResponse getPrometheusInstanceWithOptions(const string &prometheusInstanceId, const Models::GetPrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定环境实例
       *
       * @param request GetPrometheusInstanceRequest
       * @return GetPrometheusInstanceResponse
       */
      Models::GetPrometheusInstanceResponse getPrometheusInstance(const string &prometheusInstanceId, const Models::GetPrometheusInstanceRequest &request);

      /**
       * @summary 查询指定Prometheus视图实例
       *
       * @param request GetPrometheusViewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrometheusViewResponse
       */
      Models::GetPrometheusViewResponse getPrometheusViewWithOptions(const string &prometheusViewId, const Models::GetPrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定Prometheus视图实例
       *
       * @param request GetPrometheusViewRequest
       * @return GetPrometheusViewResponse
       */
      Models::GetPrometheusViewResponse getPrometheusView(const string &prometheusViewId, const Models::GetPrometheusViewRequest &request);

      /**
       * @summary 查询 Service
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getServiceWithOptions(const string &workspace, const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 Service
       *
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getService(const string &workspace, const string &serviceId);

      /**
       * @summary 获取应用可观测实例
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceObservabilityResponse
       */
      Models::GetServiceObservabilityResponse getServiceObservabilityWithOptions(const string &workspace, const string &type, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用可观测实例
       *
       * @return GetServiceObservabilityResponse
       */
      Models::GetServiceObservabilityResponse getServiceObservability(const string &workspace, const string &type);

      /**
       * @summary 获取Umodel配置信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUmodelResponse
       */
      Models::GetUmodelResponse getUmodelWithOptions(const string &workspace, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Umodel配置信息
       *
       * @return GetUmodelResponse
       */
      Models::GetUmodelResponse getUmodel(const string &workspace);

      /**
       * @summary 获取相关联的 Umodel 图数据
       *
       * @param request GetUmodelDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUmodelDataResponse
       */
      Models::GetUmodelDataResponse getUmodelDataWithOptions(const string &workspace, const Models::GetUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取相关联的 Umodel 图数据
       *
       * @param request GetUmodelDataRequest
       * @return GetUmodelDataResponse
       */
      Models::GetUmodelDataResponse getUmodelData(const string &workspace, const Models::GetUmodelDataRequest &request);

      /**
       * @summary 获取工作空间
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspaceWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作空间
       *
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspace(const string &workspaceName);

      /**
       * @summary addon的release列表
       *
       * @param request ListAddonReleasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddonReleasesResponse
       */
      Models::ListAddonReleasesResponse listAddonReleasesWithOptions(const string &policyId, const Models::ListAddonReleasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary addon的release列表
       *
       * @param request ListAddonReleasesRequest
       * @return ListAddonReleasesResponse
       */
      Models::ListAddonReleasesResponse listAddonReleases(const string &policyId, const Models::ListAddonReleasesRequest &request);

      /**
       * @summary 列举聚合任务组
       *
       * @param tmpReq ListAggTaskGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggTaskGroupsResponse
       */
      Models::ListAggTaskGroupsResponse listAggTaskGroupsWithOptions(const string &instanceId, const Models::ListAggTaskGroupsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举聚合任务组
       *
       * @param request ListAggTaskGroupsRequest
       * @return ListAggTaskGroupsResponse
       */
      Models::ListAggTaskGroupsResponse listAggTaskGroups(const string &instanceId, const Models::ListAggTaskGroupsRequest &request);

      /**
       * @summary 查询告警动作
       *
       * @param tmpReq ListAlertActionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertActionsResponse
       */
      Models::ListAlertActionsResponse listAlertActionsWithOptions(const Models::ListAlertActionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询告警动作
       *
       * @param request ListAlertActionsRequest
       * @return ListAlertActionsResponse
       */
      Models::ListAlertActionsResponse listAlertActions(const Models::ListAlertActionsRequest &request);

      /**
       * @summary 查询接入中心策略列表信息
       *
       * @param tmpReq ListIntegrationPoliciesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPoliciesResponse
       */
      Models::ListIntegrationPoliciesResponse listIntegrationPoliciesWithOptions(const Models::ListIntegrationPoliciesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询接入中心策略列表信息
       *
       * @param request ListIntegrationPoliciesRequest
       * @return ListIntegrationPoliciesResponse
       */
      Models::ListIntegrationPoliciesResponse listIntegrationPolicies(const Models::ListIntegrationPoliciesRequest &request);

      /**
       * @summary 获取接入中心策略的存储要求信息
       *
       * @param request ListIntegrationPolicyCustomScrapeJobRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyCustomScrapeJobRulesResponse
       */
      Models::ListIntegrationPolicyCustomScrapeJobRulesResponse listIntegrationPolicyCustomScrapeJobRulesWithOptions(const string &policyId, const Models::ListIntegrationPolicyCustomScrapeJobRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取接入中心策略的存储要求信息
       *
       * @param request ListIntegrationPolicyCustomScrapeJobRulesRequest
       * @return ListIntegrationPolicyCustomScrapeJobRulesResponse
       */
      Models::ListIntegrationPolicyCustomScrapeJobRulesResponse listIntegrationPolicyCustomScrapeJobRules(const string &policyId, const Models::ListIntegrationPolicyCustomScrapeJobRulesRequest &request);

      /**
       * @summary 策略大盘列表
       *
       * @param request ListIntegrationPolicyDashboardsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyDashboardsResponse
       */
      Models::ListIntegrationPolicyDashboardsResponse listIntegrationPolicyDashboardsWithOptions(const string &policyId, const Models::ListIntegrationPolicyDashboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 策略大盘列表
       *
       * @param request ListIntegrationPolicyDashboardsRequest
       * @return ListIntegrationPolicyDashboardsResponse
       */
      Models::ListIntegrationPolicyDashboardsResponse listIntegrationPolicyDashboards(const string &policyId, const Models::ListIntegrationPolicyDashboardsRequest &request);

      /**
       * @summary 获取接入中心策略的PodMonitor资源
       *
       * @param request ListIntegrationPolicyPodMonitorsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyPodMonitorsResponse
       */
      Models::ListIntegrationPolicyPodMonitorsResponse listIntegrationPolicyPodMonitorsWithOptions(const string &policyId, const Models::ListIntegrationPolicyPodMonitorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取接入中心策略的PodMonitor资源
       *
       * @param request ListIntegrationPolicyPodMonitorsRequest
       * @return ListIntegrationPolicyPodMonitorsResponse
       */
      Models::ListIntegrationPolicyPodMonitorsResponse listIntegrationPolicyPodMonitors(const string &policyId, const Models::ListIntegrationPolicyPodMonitorsRequest &request);

      /**
       * @summary 获取接入中心策略的存储要求信息
       *
       * @param request ListIntegrationPolicyStorageRequirementsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegrationPolicyStorageRequirementsResponse
       */
      Models::ListIntegrationPolicyStorageRequirementsResponse listIntegrationPolicyStorageRequirementsWithOptions(const string &policyId, const Models::ListIntegrationPolicyStorageRequirementsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取接入中心策略的存储要求信息
       *
       * @param request ListIntegrationPolicyStorageRequirementsRequest
       * @return ListIntegrationPolicyStorageRequirementsResponse
       */
      Models::ListIntegrationPolicyStorageRequirementsResponse listIntegrationPolicyStorageRequirements(const string &policyId, const Models::ListIntegrationPolicyStorageRequirementsRequest &request);

      /**
       * @summary 获取Prometheus实例大盘列表
       *
       * @param request ListPrometheusDashboardsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusDashboardsResponse
       */
      Models::ListPrometheusDashboardsResponse listPrometheusDashboardsWithOptions(const string &prometheusInstanceId, const Models::ListPrometheusDashboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Prometheus实例大盘列表
       *
       * @param request ListPrometheusDashboardsRequest
       * @return ListPrometheusDashboardsResponse
       */
      Models::ListPrometheusDashboardsResponse listPrometheusDashboards(const string &prometheusInstanceId, const Models::ListPrometheusDashboardsRequest &request);

      /**
       * @summary 获取Prometheus实例信息列表
       *
       * @param tmpReq ListPrometheusInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusInstancesResponse
       */
      Models::ListPrometheusInstancesResponse listPrometheusInstancesWithOptions(const Models::ListPrometheusInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Prometheus实例信息列表
       *
       * @param request ListPrometheusInstancesRequest
       * @return ListPrometheusInstancesResponse
       */
      Models::ListPrometheusInstancesResponse listPrometheusInstances(const Models::ListPrometheusInstancesRequest &request);

      /**
       * @summary 获取Prometheus视图实例信息列表
       *
       * @param tmpReq ListPrometheusViewsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusViewsResponse
       */
      Models::ListPrometheusViewsResponse listPrometheusViewsWithOptions(const Models::ListPrometheusViewsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Prometheus视图实例信息列表
       *
       * @param request ListPrometheusViewsRequest
       * @return ListPrometheusViewsResponse
       */
      Models::ListPrometheusViewsResponse listPrometheusViews(const Models::ListPrometheusViewsRequest &request);

      /**
       * @summary 获取Prometheus虚拟实例
       *
       * @param request ListPrometheusVirtualInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrometheusVirtualInstancesResponse
       */
      Models::ListPrometheusVirtualInstancesResponse listPrometheusVirtualInstancesWithOptions(const Models::ListPrometheusVirtualInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Prometheus虚拟实例
       *
       * @param request ListPrometheusVirtualInstancesRequest
       * @return ListPrometheusVirtualInstancesResponse
       */
      Models::ListPrometheusVirtualInstancesResponse listPrometheusVirtualInstances(const Models::ListPrometheusVirtualInstancesRequest &request);

      /**
       * @summary 列出资源Service
       *
       * @param request ListServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServicesWithOptions(const string &workspace, const Models::ListServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出资源Service
       *
       * @param request ListServicesRequest
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServices(const string &workspace, const Models::ListServicesRequest &request);

      /**
       * @summary 获取工作空间列表
       *
       * @param tmpReq ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作空间列表
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary 创建工作空间
       *
       * @param request PutWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutWorkspaceResponse
       */
      Models::PutWorkspaceResponse putWorkspaceWithOptions(const string &workspaceName, const Models::PutWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建工作空间
       *
       * @param request PutWorkspaceRequest
       * @return PutWorkspaceResponse
       */
      Models::PutWorkspaceResponse putWorkspace(const string &workspaceName, const Models::PutWorkspaceRequest &request);

      /**
       * @summary 升级接入组件
       *
       * @param request UpdateAddonReleaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAddonReleaseResponse
       */
      Models::UpdateAddonReleaseResponse updateAddonReleaseWithOptions(const string &releaseName, const string &policyId, const Models::UpdateAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 升级接入组件
       *
       * @param request UpdateAddonReleaseRequest
       * @return UpdateAddonReleaseResponse
       */
      Models::UpdateAddonReleaseResponse updateAddonRelease(const string &releaseName, const string &policyId, const Models::UpdateAddonReleaseRequest &request);

      /**
       * @summary 应用聚合任务组
       *
       * @param request UpdateAggTaskGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggTaskGroupResponse
       */
      Models::UpdateAggTaskGroupResponse updateAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const Models::UpdateAggTaskGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 应用聚合任务组
       *
       * @param request UpdateAggTaskGroupRequest
       * @return UpdateAggTaskGroupResponse
       */
      Models::UpdateAggTaskGroupResponse updateAggTaskGroup(const string &instanceId, const string &groupId, const Models::UpdateAggTaskGroupRequest &request);

      /**
       * @summary 更新聚合任务组状态
       *
       * @param request UpdateAggTaskGroupStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggTaskGroupStatusResponse
       */
      Models::UpdateAggTaskGroupStatusResponse updateAggTaskGroupStatusWithOptions(const string &instanceId, const string &groupId, const Models::UpdateAggTaskGroupStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新聚合任务组状态
       *
       * @param request UpdateAggTaskGroupStatusRequest
       * @return UpdateAggTaskGroupStatusResponse
       */
      Models::UpdateAggTaskGroupStatusResponse updateAggTaskGroupStatus(const string &instanceId, const string &groupId, const Models::UpdateAggTaskGroupStatusRequest &request);

      /**
       * @summary 更新指定策略
       *
       * @param request UpdateIntegrationPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIntegrationPolicyResponse
       */
      Models::UpdateIntegrationPolicyResponse updateIntegrationPolicyWithOptions(const string &integrationPolicyId, const Models::UpdateIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新指定策略
       *
       * @param request UpdateIntegrationPolicyRequest
       * @return UpdateIntegrationPolicyResponse
       */
      Models::UpdateIntegrationPolicyResponse updateIntegrationPolicy(const string &integrationPolicyId, const Models::UpdateIntegrationPolicyRequest &request);

      /**
       * @summary 更新Prom实例信息
       *
       * @param request UpdatePrometheusInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusInstanceResponse
       */
      Models::UpdatePrometheusInstanceResponse updatePrometheusInstanceWithOptions(const string &prometheusInstanceId, const Models::UpdatePrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Prom实例信息
       *
       * @param request UpdatePrometheusInstanceRequest
       * @return UpdatePrometheusInstanceResponse
       */
      Models::UpdatePrometheusInstanceResponse updatePrometheusInstance(const string &prometheusInstanceId, const Models::UpdatePrometheusInstanceRequest &request);

      /**
       * @summary 更新Prom视图实例信息
       *
       * @param request UpdatePrometheusViewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrometheusViewResponse
       */
      Models::UpdatePrometheusViewResponse updatePrometheusViewWithOptions(const string &prometheusViewId, const Models::UpdatePrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Prom视图实例信息
       *
       * @param request UpdatePrometheusViewRequest
       * @return UpdatePrometheusViewResponse
       */
      Models::UpdatePrometheusViewResponse updatePrometheusView(const string &prometheusViewId, const Models::UpdatePrometheusViewRequest &request);

      /**
       * @summary 更新UpdateService
       *
       * @param request UpdateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateServiceWithOptions(const string &workspace, const string &serviceId, const Models::UpdateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新UpdateService
       *
       * @param request UpdateServiceRequest
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateService(const string &workspace, const string &serviceId, const Models::UpdateServiceRequest &request);

      /**
       * @summary 更新Umodel配置信息
       *
       * @param request UpdateUmodelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUmodelResponse
       */
      Models::UpdateUmodelResponse updateUmodelWithOptions(const string &workspace, const Models::UpdateUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Umodel配置信息
       *
       * @param request UpdateUmodelRequest
       * @return UpdateUmodelResponse
       */
      Models::UpdateUmodelResponse updateUmodel(const string &workspace, const Models::UpdateUmodelRequest &request);

      /**
       * @summary 写入 Umodel Elements
       *
       * @param request UpsertUmodelDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertUmodelDataResponse
       */
      Models::UpsertUmodelDataResponse upsertUmodelDataWithOptions(const string &workspace, const Models::UpsertUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 写入 Umodel Elements
       *
       * @param request UpsertUmodelDataRequest
       * @return UpsertUmodelDataResponse
       */
      Models::UpsertUmodelDataResponse upsertUmodelData(const string &workspace, const Models::UpsertUmodelDataRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
