// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_COMPUTENEST20210601_HPP_
#define ALIBABACLOUD_COMPUTENEST20210601_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ComputeNest20210601Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ComputeNest20210601.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Cancels the application for using a service.
       *
       * @param request CancelServiceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelServiceUsageResponse
       */
      Models::CancelServiceUsageResponse cancelServiceUsageWithOptions(const Models::CancelServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the application for using a service.
       *
       * @param request CancelServiceUsageRequest
       * @return CancelServiceUsageResponse
       */
      Models::CancelServiceUsageResponse cancelServiceUsage(const Models::CancelServiceUsageRequest &request);

      /**
       * @summary Changes the resource group to which a cloud resource belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a cloud resource belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary 服务实例部署前的预检查
       *
       * @param request CheckServiceDeployableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceDeployableResponse
       */
      Models::CheckServiceDeployableResponse checkServiceDeployableWithOptions(const Models::CheckServiceDeployableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 服务实例部署前的预检查
       *
       * @param request CheckServiceDeployableRequest
       * @return CheckServiceDeployableResponse
       */
      Models::CheckServiceDeployableResponse checkServiceDeployable(const Models::CheckServiceDeployableRequest &request);

      /**
       * @summary Continues to deploy a service instance after the service instance failed to be deployed.
       *
       * @description This operation is available only for service instances that belong to private services deployed by using Resource Orchestration Service (ROS).
       *
       * @param request ContinueDeployServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinueDeployServiceInstanceResponse
       */
      Models::ContinueDeployServiceInstanceResponse continueDeployServiceInstanceWithOptions(const Models::ContinueDeployServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Continues to deploy a service instance after the service instance failed to be deployed.
       *
       * @description This operation is available only for service instances that belong to private services deployed by using Resource Orchestration Service (ROS).
       *
       * @param request ContinueDeployServiceInstanceRequest
       * @return ContinueDeployServiceInstanceResponse
       */
      Models::ContinueDeployServiceInstanceResponse continueDeployServiceInstance(const Models::ContinueDeployServiceInstanceRequest &request);

      /**
       * @summary Create backup for Compute Nest instance
       *
       * @description ### [](#)Prerequisites
       * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create backup for Compute Nest instance
       *
       * @description ### [](#)Prerequisites
       * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary Create restore task
       *
       * @description ### [](#)Prerequisites
       * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
       *
       * @param request CreateRestoreTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRestoreTaskResponse
       */
      Models::CreateRestoreTaskResponse createRestoreTaskWithOptions(const Models::CreateRestoreTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create restore task
       *
       * @description ### [](#)Prerequisites
       * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
       *
       * @param request CreateRestoreTaskRequest
       * @return CreateRestoreTaskResponse
       */
      Models::CreateRestoreTaskResponse createRestoreTask(const Models::CreateRestoreTaskRequest &request);

      /**
       * @summary Creates and deploys a service instance.
       *
       * @param tmpReq CreateServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceInstanceResponse
       */
      Models::CreateServiceInstanceResponse createServiceInstanceWithOptions(const Models::CreateServiceInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and deploys a service instance.
       *
       * @param request CreateServiceInstanceRequest
       * @return CreateServiceInstanceResponse
       */
      Models::CreateServiceInstanceResponse createServiceInstance(const Models::CreateServiceInstanceRequest &request);

      /**
       * @summary Creates an application for using a service.
       *
       * @param tmpReq CreateServiceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceUsageResponse
       */
      Models::CreateServiceUsageResponse createServiceUsageWithOptions(const Models::CreateServiceUsageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application for using a service.
       *
       * @param request CreateServiceUsageRequest
       * @return CreateServiceUsageResponse
       */
      Models::CreateServiceUsageResponse createServiceUsage(const Models::CreateServiceUsageRequest &request);

      /**
       * @summary Delete Compute Nest instance backups.
       *
       * @description ### [](#)Prerequisites
       * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
       *
       * @param request DeleteBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackupWithOptions(const Models::DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Compute Nest instance backups.
       *
       * @description ### [](#)Prerequisites
       * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
       *
       * @param request DeleteBackupRequest
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackup(const Models::DeleteBackupRequest &request);

      /**
       * @summary Delete service instances.
       *
       * @param request DeleteServiceInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceInstancesResponse
       */
      Models::DeleteServiceInstancesResponse deleteServiceInstancesWithOptions(const Models::DeleteServiceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete service instances.
       *
       * @param request DeleteServiceInstancesRequest
       * @return DeleteServiceInstancesResponse
       */
      Models::DeleteServiceInstancesResponse deleteServiceInstances(const Models::DeleteServiceInstancesRequest &request);

      /**
       * @summary Deploy service instance in Created status.
       *
       * @param request DeployServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployServiceInstanceResponse
       */
      Models::DeployServiceInstanceResponse deployServiceInstanceWithOptions(const Models::DeployServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploy service instance in Created status.
       *
       * @param request DeployServiceInstanceRequest
       * @return DeployServiceInstanceResponse
       */
      Models::DeployServiceInstanceResponse deployServiceInstance(const Models::DeployServiceInstanceRequest &request);

      /**
       * @summary List available regions.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List available regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary 生成并校验服务创建stack所需要的权限
       *
       * @param request GenerateServicePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateServicePolicyResponse
       */
      Models::GenerateServicePolicyResponse generateServicePolicyWithOptions(const Models::GenerateServicePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成并校验服务创建stack所需要的权限
       *
       * @param request GenerateServicePolicyRequest
       * @return GenerateServicePolicyResponse
       */
      Models::GenerateServicePolicyResponse generateServicePolicy(const Models::GenerateServicePolicyRequest &request);

      /**
       * @summary Queries the information about backup task.
       *
       * @description ### [](#)Prerequisites
       * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
       *
       * @param request GetBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBackupResponse
       */
      Models::GetBackupResponse getBackupWithOptions(const Models::GetBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about backup task.
       *
       * @description ### [](#)Prerequisites
       * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
       *
       * @param request GetBackupRequest
       * @return GetBackupResponse
       */
      Models::GetBackupResponse getBackup(const Models::GetBackupRequest &request);

      /**
       * @summary Queries the information about a service.
       *
       * @param request GetServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getServiceWithOptions(const Models::GetServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a service.
       *
       * @param request GetServiceRequest
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getService(const Models::GetServiceRequest &request);

      /**
       * @summary Queries the estimated price for creating a service instance.
       *
       * @param tmpReq GetServiceEstimateCostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceEstimateCostResponse
       */
      Models::GetServiceEstimateCostResponse getServiceEstimateCostWithOptions(const Models::GetServiceEstimateCostRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the estimated price for creating a service instance.
       *
       * @param request GetServiceEstimateCostRequest
       * @return GetServiceEstimateCostResponse
       */
      Models::GetServiceEstimateCostResponse getServiceEstimateCost(const Models::GetServiceEstimateCostRequest &request);

      /**
       * @summary Queries the information about a service instance based on the region ID and the ID of the service instance or the Alibaba Cloud Marketplace instance. Information including the service status, template name, and involved resources are returned.
       *
       * @param request GetServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceInstanceResponse
       */
      Models::GetServiceInstanceResponse getServiceInstanceWithOptions(const Models::GetServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a service instance based on the region ID and the ID of the service instance or the Alibaba Cloud Marketplace instance. Information including the service status, template name, and involved resources are returned.
       *
       * @param request GetServiceInstanceRequest
       * @return GetServiceInstanceResponse
       */
      Models::GetServiceInstanceResponse getServiceInstance(const Models::GetServiceInstanceRequest &request);

      /**
       * @summary Query renewal prices for prepaid resources of private deployment service instance. You can query renewal prices for all prepaid resources included in a service instance, or query renewal prices for specified resources. Only one of the two methods can be used.
       *
       * @param request GetServiceInstanceSubscriptionEstimateCostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceInstanceSubscriptionEstimateCostResponse
       */
      Models::GetServiceInstanceSubscriptionEstimateCostResponse getServiceInstanceSubscriptionEstimateCostWithOptions(const Models::GetServiceInstanceSubscriptionEstimateCostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query renewal prices for prepaid resources of private deployment service instance. You can query renewal prices for all prepaid resources included in a service instance, or query renewal prices for specified resources. Only one of the two methods can be used.
       *
       * @param request GetServiceInstanceSubscriptionEstimateCostRequest
       * @return GetServiceInstanceSubscriptionEstimateCostResponse
       */
      Models::GetServiceInstanceSubscriptionEstimateCostResponse getServiceInstanceSubscriptionEstimateCost(const Models::GetServiceInstanceSubscriptionEstimateCostRequest &request);

      /**
       * @summary Queries the information about the activation status and Resource Access Management (RAM) roles of the cloud services required by a service.
       *
       * @param tmpReq GetServiceProvisionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceProvisionsResponse
       */
      Models::GetServiceProvisionsResponse getServiceProvisionsWithOptions(const Models::GetServiceProvisionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the activation status and Resource Access Management (RAM) roles of the cloud services required by a service.
       *
       * @param request GetServiceProvisionsRequest
       * @return GetServiceProvisionsResponse
       */
      Models::GetServiceProvisionsResponse getServiceProvisions(const Models::GetServiceProvisionsRequest &request);

      /**
       * @summary Queries the constraints on the parameters in an Resource Orchestration Service (ROS) template.
       *
       * @param request GetServiceTemplateParameterConstraintsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceTemplateParameterConstraintsResponse
       */
      Models::GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraintsWithOptions(const Models::GetServiceTemplateParameterConstraintsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the constraints on the parameters in an Resource Orchestration Service (ROS) template.
       *
       * @param request GetServiceTemplateParameterConstraintsRequest
       * @return GetServiceTemplateParameterConstraintsResponse
       */
      Models::GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraints(const Models::GetServiceTemplateParameterConstraintsRequest &request);

      /**
       * @summary Queries the information about a customer.
       *
       * @param request GetUserInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserInformationResponse
       */
      Models::GetUserInformationResponse getUserInformationWithOptions(const Models::GetUserInformationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a customer.
       *
       * @param request GetUserInformationRequest
       * @return GetUserInformationResponse
       */
      Models::GetUserInformationResponse getUserInformation(const Models::GetUserInformationRequest &request);

      /**
       * @summary Query and list Compute Nest instance backups
       *
       * @description ### [](#)Prerequisites
       * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
       *
       * @param request ListBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBackupsResponse
       */
      Models::ListBackupsResponse listBackupsWithOptions(const Models::ListBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query and list Compute Nest instance backups
       *
       * @description ### [](#)Prerequisites
       * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
       *
       * @param request ListBackupsRequest
       * @return ListBackupsResponse
       */
      Models::ListBackupsResponse listBackups(const Models::ListBackupsRequest &request);

      /**
       * @summary Query Permission Policy List
       *
       * @param request ListPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPoliciesWithOptions(const Models::ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Permission Policy List
       *
       * @param request ListPoliciesRequest
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPolicies(const Models::ListPoliciesRequest &request);

      /**
       * @summary Query and list restore tasks
       *
       * @description ### [](#)Prerequisites
       * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
       *
       * @param request ListRestoreTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRestoreTasksResponse
       */
      Models::ListRestoreTasksResponse listRestoreTasksWithOptions(const Models::ListRestoreTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query and list restore tasks
       *
       * @description ### [](#)Prerequisites
       * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
       *
       * @param request ListRestoreTasksRequest
       * @return ListRestoreTasksResponse
       */
      Models::ListRestoreTasksResponse listRestoreTasks(const Models::ListRestoreTasksRequest &request);

      /**
       * @summary 查询服务类别
       *
       * @param request ListServiceCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceCategoriesResponse
       */
      Models::ListServiceCategoriesResponse listServiceCategoriesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务类别
       *
       * @return ListServiceCategoriesResponse
       */
      Models::ListServiceCategoriesResponse listServiceCategories();

      /**
       * @summary 展示服务实例账单
       *
       * @param request ListServiceInstanceBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceBillResponse
       */
      Models::ListServiceInstanceBillResponse listServiceInstanceBillWithOptions(const Models::ListServiceInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 展示服务实例账单
       *
       * @param request ListServiceInstanceBillRequest
       * @return ListServiceInstanceBillResponse
       */
      Models::ListServiceInstanceBillResponse listServiceInstanceBill(const Models::ListServiceInstanceBillRequest &request);

      /**
       * @summary Queries the deployment and upgrade logs of a service instance.
       *
       * @param request ListServiceInstanceLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceLogsResponse
       */
      Models::ListServiceInstanceLogsResponse listServiceInstanceLogsWithOptions(const Models::ListServiceInstanceLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deployment and upgrade logs of a service instance.
       *
       * @param request ListServiceInstanceLogsRequest
       * @return ListServiceInstanceLogsResponse
       */
      Models::ListServiceInstanceLogsResponse listServiceInstanceLogs(const Models::ListServiceInstanceLogsRequest &request);

      /**
       * @summary Queries the resources contained in a service instance.
       *
       * @param request ListServiceInstanceResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceResourcesResponse
       */
      Models::ListServiceInstanceResourcesResponse listServiceInstanceResourcesWithOptions(const Models::ListServiceInstanceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources contained in a service instance.
       *
       * @param request ListServiceInstanceResourcesRequest
       * @return ListServiceInstanceResourcesResponse
       */
      Models::ListServiceInstanceResourcesResponse listServiceInstanceResources(const Models::ListServiceInstanceResourcesRequest &request);

      /**
       * @summary Queries the upgrade history of a service instance.
       *
       * @param request ListServiceInstanceUpgradeHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceUpgradeHistoryResponse
       */
      Models::ListServiceInstanceUpgradeHistoryResponse listServiceInstanceUpgradeHistoryWithOptions(const Models::ListServiceInstanceUpgradeHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the upgrade history of a service instance.
       *
       * @param request ListServiceInstanceUpgradeHistoryRequest
       * @return ListServiceInstanceUpgradeHistoryResponse
       */
      Models::ListServiceInstanceUpgradeHistoryResponse listServiceInstanceUpgradeHistory(const Models::ListServiceInstanceUpgradeHistoryRequest &request);

      /**
       * @summary {}
       *
       * @param request ListServiceInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstancesResponse
       */
      Models::ListServiceInstancesResponse listServiceInstancesWithOptions(const Models::ListServiceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary {}
       *
       * @param request ListServiceInstancesRequest
       * @return ListServiceInstancesResponse
       */
      Models::ListServiceInstancesResponse listServiceInstances(const Models::ListServiceInstancesRequest &request);

      /**
       * @summary Queries the applications for using a service.
       *
       * @param request ListServiceUsagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceUsagesResponse
       */
      Models::ListServiceUsagesResponse listServiceUsagesWithOptions(const Models::ListServiceUsagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the applications for using a service.
       *
       * @param request ListServiceUsagesRequest
       * @return ListServiceUsagesResponse
       */
      Models::ListServiceUsagesResponse listServiceUsages(const Models::ListServiceUsagesRequest &request);

      /**
       * @summary Queries a list of services.
       *
       * @param request ListServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServicesWithOptions(const Models::ListServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of services.
       *
       * @param request ListServicesRequest
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServices(const Models::ListServicesRequest &request);

      /**
       * @summary 查询标签键列表
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询标签键列表
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary 查询标签资源列表
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询标签资源列表
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 查询标签值列表
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询标签值列表
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Renew the prepaid resources included in the private deployment service instance. You can renew all prepaid resources under the specified service instance ID, or you can renew the specified resources. Only one of the two renewal methods can be used.
       *
       * @param request RenewServiceInstanceResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewServiceInstanceResourcesResponse
       */
      Models::RenewServiceInstanceResourcesResponse renewServiceInstanceResourcesWithOptions(const Models::RenewServiceInstanceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renew the prepaid resources included in the private deployment service instance. You can renew all prepaid resources under the specified service instance ID, or you can renew the specified resources. Only one of the two renewal methods can be used.
       *
       * @param request RenewServiceInstanceResourcesRequest
       * @return RenewServiceInstanceResourcesResponse
       */
      Models::RenewServiceInstanceResourcesResponse renewServiceInstanceResources(const Models::RenewServiceInstanceResourcesRequest &request);

      /**
       * @summary When the service instance is Deployed, call the RestartServiceInstance interface to restart the service instance.
       *
       * @param request RestartServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartServiceInstanceResponse
       */
      Models::RestartServiceInstanceResponse restartServiceInstanceWithOptions(const Models::RestartServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary When the service instance is Deployed, call the RestartServiceInstance interface to restart the service instance.
       *
       * @param request RestartServiceInstanceRequest
       * @return RestartServiceInstanceResponse
       */
      Models::RestartServiceInstanceResponse restartServiceInstance(const Models::RestartServiceInstanceRequest &request);

      /**
       * @summary Rolls back an upgraded service instance to the previous version.
       *
       * @param request RollbackServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackServiceInstanceResponse
       */
      Models::RollbackServiceInstanceResponse rollbackServiceInstanceWithOptions(const Models::RollbackServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back an upgraded service instance to the previous version.
       *
       * @param request RollbackServiceInstanceRequest
       * @return RollbackServiceInstanceResponse
       */
      Models::RollbackServiceInstanceResponse rollbackServiceInstance(const Models::RollbackServiceInstanceRequest &request);

      /**
       * @summary When the service instance status is Stopped (Stopped) or StartFailed (Startup failed), the StartServiceInstance interface is invoked to start the service instance.
       *
       * @param request StartServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartServiceInstanceResponse
       */
      Models::StartServiceInstanceResponse startServiceInstanceWithOptions(const Models::StartServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary When the service instance status is Stopped (Stopped) or StartFailed (Startup failed), the StartServiceInstance interface is invoked to start the service instance.
       *
       * @param request StartServiceInstanceRequest
       * @return StartServiceInstanceResponse
       */
      Models::StartServiceInstanceResponse startServiceInstance(const Models::StartServiceInstanceRequest &request);

      /**
       * @summary When the service instance is Deployed and StopFailed, call the StopServiceInstance interface to stop the service instance.
       *
       * @param request StopServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopServiceInstanceResponse
       */
      Models::StopServiceInstanceResponse stopServiceInstanceWithOptions(const Models::StopServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary When the service instance is Deployed and StopFailed, call the StopServiceInstance interface to stop the service instance.
       *
       * @param request StopServiceInstanceRequest
       * @return StopServiceInstanceResponse
       */
      Models::StopServiceInstanceResponse stopServiceInstance(const Models::StopServiceInstanceRequest &request);

      /**
       * @summary 给资源打标签
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 给资源打标签
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 给资源解除标签
       *
       * @param request UnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 给资源解除标签
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary Updates the attributes of a service instance.
       *
       * @param request UpdateServiceInstanceAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceInstanceAttributesResponse
       */
      Models::UpdateServiceInstanceAttributesResponse updateServiceInstanceAttributesWithOptions(const Models::UpdateServiceInstanceAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the attributes of a service instance.
       *
       * @param request UpdateServiceInstanceAttributesRequest
       * @return UpdateServiceInstanceAttributesResponse
       */
      Models::UpdateServiceInstanceAttributesResponse updateServiceInstanceAttributes(const Models::UpdateServiceInstanceAttributesRequest &request);

      /**
       * @summary Changes the configurations of a service instance.
       *
       * @description ### [](#)Prerequisites
       * Configuration change is enabled and the related parameters are configured for the service by the service provider.
       *
       * @param tmpReq UpdateServiceInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceInstanceSpecResponse
       */
      Models::UpdateServiceInstanceSpecResponse updateServiceInstanceSpecWithOptions(const Models::UpdateServiceInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the configurations of a service instance.
       *
       * @description ### [](#)Prerequisites
       * Configuration change is enabled and the related parameters are configured for the service by the service provider.
       *
       * @param request UpdateServiceInstanceSpecRequest
       * @return UpdateServiceInstanceSpecResponse
       */
      Models::UpdateServiceInstanceSpecResponse updateServiceInstanceSpec(const Models::UpdateServiceInstanceSpecRequest &request);

      /**
       * @summary Updates the application for using a service.
       *
       * @param tmpReq UpdateServiceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceUsageResponse
       */
      Models::UpdateServiceUsageResponse updateServiceUsageWithOptions(const Models::UpdateServiceUsageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the application for using a service.
       *
       * @param request UpdateServiceUsageRequest
       * @return UpdateServiceUsageResponse
       */
      Models::UpdateServiceUsageResponse updateServiceUsage(const Models::UpdateServiceUsageRequest &request);

      /**
       * @summary Updates the information about a customer.
       *
       * @param request UpdateUserInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserInformationResponse
       */
      Models::UpdateUserInformationResponse updateUserInformationWithOptions(const Models::UpdateUserInformationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a customer.
       *
       * @param request UpdateUserInformationRequest
       * @return UpdateUserInformationResponse
       */
      Models::UpdateUserInformationResponse updateUserInformation(const Models::UpdateUserInformationRequest &request);

      /**
       * @summary Upgrades the version of a service instance.
       *
       * @param tmpReq UpgradeServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeServiceInstanceResponse
       */
      Models::UpgradeServiceInstanceResponse upgradeServiceInstanceWithOptions(const Models::UpgradeServiceInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the version of a service instance.
       *
       * @param request UpgradeServiceInstanceRequest
       * @return UpgradeServiceInstanceResponse
       */
      Models::UpgradeServiceInstanceResponse upgradeServiceInstance(const Models::UpgradeServiceInstanceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
