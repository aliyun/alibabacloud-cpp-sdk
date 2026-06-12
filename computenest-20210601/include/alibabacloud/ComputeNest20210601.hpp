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
       * @summary Cancels a service usage request.
       *
       * @param request CancelServiceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelServiceUsageResponse
       */
      Models::CancelServiceUsageResponse cancelServiceUsageWithOptions(const Models::CancelServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a service usage request.
       *
       * @param request CancelServiceUsageRequest
       * @return CancelServiceUsageResponse
       */
      Models::CancelServiceUsageResponse cancelServiceUsage(const Models::CancelServiceUsageRequest &request);

      /**
       * @summary Changes the resource group for a cloud resource.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group for a cloud resource.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Performs a precheck to verify that a service instance can be deployed.
       *
       * @param request CheckServiceDeployableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceDeployableResponse
       */
      Models::CheckServiceDeployableResponse checkServiceDeployableWithOptions(const Models::CheckServiceDeployableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a precheck to verify that a service instance can be deployed.
       *
       * @param request CheckServiceDeployableRequest
       * @return CheckServiceDeployableResponse
       */
      Models::CheckServiceDeployableResponse checkServiceDeployable(const Models::CheckServiceDeployableRequest &request);

      /**
       * @summary If a service instance fails to deploy, you can call the ContinueDeployServiceInstance operation to resume the deployment.
       *
       * @description If a private service instance that uses the ROS deployment type fails to deploy, you can call the ContinueDeployServiceInstance operation to resume the deployment.
       *
       * @param request ContinueDeployServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinueDeployServiceInstanceResponse
       */
      Models::ContinueDeployServiceInstanceResponse continueDeployServiceInstanceWithOptions(const Models::ContinueDeployServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If a service instance fails to deploy, you can call the ContinueDeployServiceInstance operation to resume the deployment.
       *
       * @description If a private service instance that uses the ROS deployment type fails to deploy, you can call the ContinueDeployServiceInstance operation to resume the deployment.
       *
       * @param request ContinueDeployServiceInstanceRequest
       * @return ContinueDeployServiceInstanceResponse
       */
      Models::ContinueDeployServiceInstanceResponse continueDeployServiceInstance(const Models::ContinueDeployServiceInstanceRequest &request);

      /**
       * @summary Creates a backup for a Compute Nest service instance.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the upgrade/downgrade feature and configured the corresponding parameters when the service was created.
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup for a Compute Nest service instance.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the upgrade/downgrade feature and configured the corresponding parameters when the service was created.
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary Creates a restore job.
       *
       * @description ### Prerequisites
       * Before you call this operation, ensure that the service provider enabled the upgrade and downgrade feature and configured its parameters when the service was created.
       *
       * @param request CreateRestoreTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRestoreTaskResponse
       */
      Models::CreateRestoreTaskResponse createRestoreTaskWithOptions(const Models::CreateRestoreTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a restore job.
       *
       * @description ### Prerequisites
       * Before you call this operation, ensure that the service provider enabled the upgrade and downgrade feature and configured its parameters when the service was created.
       *
       * @param request CreateRestoreTaskRequest
       * @return CreateRestoreTaskResponse
       */
      Models::CreateRestoreTaskResponse createRestoreTask(const Models::CreateRestoreTaskRequest &request);

      /**
       * @summary Creates and deploys a service instance in Compute Nest by specifying parameters such as a region ID, a service instance name, and a service ID.
       *
       * @param tmpReq CreateServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceInstanceResponse
       */
      Models::CreateServiceInstanceResponse createServiceInstanceWithOptions(const Models::CreateServiceInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and deploys a service instance in Compute Nest by specifying parameters such as a region ID, a service instance name, and a service ID.
       *
       * @param request CreateServiceInstanceRequest
       * @return CreateServiceInstanceResponse
       */
      Models::CreateServiceInstanceResponse createServiceInstance(const Models::CreateServiceInstanceRequest &request);

      /**
       * @summary Creates a service usage request.
       *
       * @param tmpReq CreateServiceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceUsageResponse
       */
      Models::CreateServiceUsageResponse createServiceUsageWithOptions(const Models::CreateServiceUsageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service usage request.
       *
       * @param request CreateServiceUsageRequest
       * @return CreateServiceUsageResponse
       */
      Models::CreateServiceUsageResponse createServiceUsage(const Models::CreateServiceUsageRequest &request);

      /**
       * @summary Creates a Skill.
       *
       * @description ### Prerequisites
       * Before you begin, ensure that the service provider has enabled the modification feature and configured its parameters during service creation.
       *
       * @param request CreateSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillResponse
       */
      Models::CreateSkillResponse createSkillWithOptions(const Models::CreateSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Skill.
       *
       * @description ### Prerequisites
       * Before you begin, ensure that the service provider has enabled the modification feature and configured its parameters during service creation.
       *
       * @param request CreateSkillRequest
       * @return CreateSkillResponse
       */
      Models::CreateSkillResponse createSkill(const Models::CreateSkillRequest &request);

      /**
       * @summary Creates a Skill file detection task.
       *
       * @description ### Prerequisites
       * Ensure that the service provider has enabled the modification feature and configured its parameters during service creation.
       *
       * @param request CreateSkillFileDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillFileDetectResponse
       */
      Models::CreateSkillFileDetectResponse createSkillFileDetectWithOptions(const Models::CreateSkillFileDetectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Skill file detection task.
       *
       * @description ### Prerequisites
       * Ensure that the service provider has enabled the modification feature and configured its parameters during service creation.
       *
       * @param request CreateSkillFileDetectRequest
       * @return CreateSkillFileDetectResponse
       */
      Models::CreateSkillFileDetectResponse createSkillFileDetect(const Models::CreateSkillFileDetectRequest &request);

      /**
       * @summary Creates a SkillHub config.
       *
       * @description ### Prerequisites
       * Ensure that the service provider has enabled the modify configuration feature and set the required parameters.
       *
       * @param request CreateSkillHubConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillHubConfigResponse
       */
      Models::CreateSkillHubConfigResponse createSkillHubConfigWithOptions(const Models::CreateSkillHubConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a SkillHub config.
       *
       * @description ### Prerequisites
       * Ensure that the service provider has enabled the modify configuration feature and set the required parameters.
       *
       * @param request CreateSkillHubConfigRequest
       * @return CreateSkillHubConfigResponse
       */
      Models::CreateSkillHubConfigResponse createSkillHubConfig(const Models::CreateSkillHubConfigRequest &request);

      /**
       * @summary Creates a skill space.
       *
       * @description ### Prerequisites
       * Ensure the service provider has enabled the modify configuration feature and set the required parameters during service creation.
       *
       * @param request CreateSkillSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillSpaceResponse
       */
      Models::CreateSkillSpaceResponse createSkillSpaceWithOptions(const Models::CreateSkillSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a skill space.
       *
       * @description ### Prerequisites
       * Ensure the service provider has enabled the modify configuration feature and set the required parameters during service creation.
       *
       * @param request CreateSkillSpaceRequest
       * @return CreateSkillSpaceResponse
       */
      Models::CreateSkillSpaceResponse createSkillSpace(const Models::CreateSkillSpaceRequest &request);

      /**
       * @summary Deletes a Compute Nest instance backup.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the upgrade/downgrade feature and configured the upgrade/downgrade parameters when the service was created.
       *
       * @param request DeleteBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackupWithOptions(const Models::DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Compute Nest instance backup.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the upgrade/downgrade feature and configured the upgrade/downgrade parameters when the service was created.
       *
       * @param request DeleteBackupRequest
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackup(const Models::DeleteBackupRequest &request);

      /**
       * @summary Deletes the specified service instances in a region.
       *
       * @param request DeleteServiceInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceInstancesResponse
       */
      Models::DeleteServiceInstancesResponse deleteServiceInstancesWithOptions(const Models::DeleteServiceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified service instances in a region.
       *
       * @param request DeleteServiceInstancesRequest
       * @return DeleteServiceInstancesResponse
       */
      Models::DeleteServiceInstancesResponse deleteServiceInstances(const Models::DeleteServiceInstancesRequest &request);

      /**
       * @summary Deletes a skill.
       *
       * @description ### Prerequisites
       * Ensure the service provider has enabled the modification feature and configured the modification parameters when creating the service.
       *
       * @param request DeleteSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkillWithOptions(const Models::DeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a skill.
       *
       * @description ### Prerequisites
       * Ensure the service provider has enabled the modification feature and configured the modification parameters when creating the service.
       *
       * @param request DeleteSkillRequest
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkill(const Models::DeleteSkillRequest &request);

      /**
       * @summary Deletes a SkillSpace.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the modify configuration feature and set the required parameters during service creation.
       *
       * @param request DeleteSkillSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillSpaceResponse
       */
      Models::DeleteSkillSpaceResponse deleteSkillSpaceWithOptions(const Models::DeleteSkillSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a SkillSpace.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the modify configuration feature and set the required parameters during service creation.
       *
       * @param request DeleteSkillSpaceRequest
       * @return DeleteSkillSpaceResponse
       */
      Models::DeleteSkillSpaceResponse deleteSkillSpace(const Models::DeleteSkillSpaceRequest &request);

      /**
       * @summary Deploys a service instance.
       *
       * @param request DeployServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployServiceInstanceResponse
       */
      Models::DeployServiceInstanceResponse deployServiceInstanceWithOptions(const Models::DeployServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys a service instance.
       *
       * @param request DeployServiceInstanceRequest
       * @return DeployServiceInstanceResponse
       */
      Models::DeployServiceInstanceResponse deployServiceInstance(const Models::DeployServiceInstanceRequest &request);

      /**
       * @summary Queries the available regions.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Check for missing access policies before you create a service instance.
       *
       * @param tmpReq GenerateServicePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateServicePolicyResponse
       */
      Models::GenerateServicePolicyResponse generateServicePolicyWithOptions(const Models::GenerateServicePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check for missing access policies before you create a service instance.
       *
       * @param request GenerateServicePolicyRequest
       * @return GenerateServicePolicyResponse
       */
      Models::GenerateServicePolicyResponse generateServicePolicy(const Models::GenerateServicePolicyRequest &request);

      /**
       * @summary Retrieves the details of a backup.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the upgrade and downgrade feature and configured its parameters when the service was created.
       *
       * @param request GetBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBackupResponse
       */
      Models::GetBackupResponse getBackupWithOptions(const Models::GetBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a backup.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the upgrade and downgrade feature and configured its parameters when the service was created.
       *
       * @param request GetBackupRequest
       * @return GetBackupResponse
       */
      Models::GetBackupResponse getBackup(const Models::GetBackupRequest &request);

      /**
       * @summary Returns a list of available zones for a specified region.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the upgrade/downgrade feature and set the related parameters when the service was created.
       *
       * @param request GetNetworkAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkAvailableZonesResponse
       */
      Models::GetNetworkAvailableZonesResponse getNetworkAvailableZonesWithOptions(const Models::GetNetworkAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a list of available zones for a specified region.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the upgrade/downgrade feature and set the related parameters when the service was created.
       *
       * @param request GetNetworkAvailableZonesRequest
       * @return GetNetworkAvailableZonesResponse
       */
      Models::GetNetworkAvailableZonesResponse getNetworkAvailableZones(const Models::GetNetworkAvailableZonesRequest &request);

      /**
       * @summary Retrieves the details of a specified service.
       *
       * @param request GetServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getServiceWithOptions(const Models::GetServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified service.
       *
       * @param request GetServiceRequest
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getService(const Models::GetServiceRequest &request);

      /**
       * @summary Queries the estimated cost of creating a service instance.
       *
       * @param tmpReq GetServiceEstimateCostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceEstimateCostResponse
       */
      Models::GetServiceEstimateCostResponse getServiceEstimateCostWithOptions(const Models::GetServiceEstimateCostRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the estimated cost of creating a service instance.
       *
       * @param request GetServiceEstimateCostRequest
       * @return GetServiceEstimateCostResponse
       */
      Models::GetServiceEstimateCostResponse getServiceEstimateCost(const Models::GetServiceEstimateCostRequest &request);

      /**
       * @summary Queries the details of a service instance by its region ID, service instance ID, or Alibaba Cloud Marketplace instance ID. The returned information includes the service status, template name, and a list of resources.
       *
       * @param request GetServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceInstanceResponse
       */
      Models::GetServiceInstanceResponse getServiceInstanceWithOptions(const Models::GetServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a service instance by its region ID, service instance ID, or Alibaba Cloud Marketplace instance ID. The returned information includes the service status, template name, and a list of resources.
       *
       * @param request GetServiceInstanceRequest
       * @return GetServiceInstanceResponse
       */
      Models::GetServiceInstanceResponse getServiceInstance(const Models::GetServiceInstanceRequest &request);

      /**
       * @summary Queries the estimated renewal cost of subscription resources in a privately deployed service instance. You can query the cost for all resources associated with a service instance ID, or for a specific set of resources.
       *
       * @param request GetServiceInstanceSubscriptionEstimateCostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceInstanceSubscriptionEstimateCostResponse
       */
      Models::GetServiceInstanceSubscriptionEstimateCostResponse getServiceInstanceSubscriptionEstimateCostWithOptions(const Models::GetServiceInstanceSubscriptionEstimateCostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the estimated renewal cost of subscription resources in a privately deployed service instance. You can query the cost for all resources associated with a service instance ID, or for a specific set of resources.
       *
       * @param request GetServiceInstanceSubscriptionEstimateCostRequest
       * @return GetServiceInstanceSubscriptionEstimateCostResponse
       */
      Models::GetServiceInstanceSubscriptionEstimateCostResponse getServiceInstanceSubscriptionEstimateCost(const Models::GetServiceInstanceSubscriptionEstimateCostRequest &request);

      /**
       * @summary Retrieves the provisions of a service, such as its activation status and service roles.
       *
       * @param tmpReq GetServiceProvisionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceProvisionsResponse
       */
      Models::GetServiceProvisionsResponse getServiceProvisionsWithOptions(const Models::GetServiceProvisionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the provisions of a service, such as its activation status and service roles.
       *
       * @param request GetServiceProvisionsRequest
       * @return GetServiceProvisionsResponse
       */
      Models::GetServiceProvisionsResponse getServiceProvisions(const Models::GetServiceProvisionsRequest &request);

      /**
       * @summary Queries the parameter constraints for a Resource Orchestration Service (ROS) template in a specified region using the template name and service ID.
       *
       * @param request GetServiceTemplateParameterConstraintsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceTemplateParameterConstraintsResponse
       */
      Models::GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraintsWithOptions(const Models::GetServiceTemplateParameterConstraintsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter constraints for a Resource Orchestration Service (ROS) template in a specified region using the template name and service ID.
       *
       * @param request GetServiceTemplateParameterConstraintsRequest
       * @return GetServiceTemplateParameterConstraintsResponse
       */
      Models::GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraints(const Models::GetServiceTemplateParameterConstraintsRequest &request);

      /**
       * @summary Queries the details of a Skill.
       *
       * @description ### Prerequisites
       * Before calling this operation, ensure that the service provider enabled the modification feature and configured the required parameters during service creation.
       *
       * @param request GetSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkillWithOptions(const Models::GetSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Skill.
       *
       * @description ### Prerequisites
       * Before calling this operation, ensure that the service provider enabled the modification feature and configured the required parameters during service creation.
       *
       * @param request GetSkillRequest
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkill(const Models::GetSkillRequest &request);

      /**
       * @summary Retrieves the result of a Skill file detection task.
       *
       * @description ### Prerequisites
       * This operation is available only if the service provider enabled the modification feature and configured the relevant parameters during service creation.
       *
       * @param request GetSkillFileDetectResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillFileDetectResultResponse
       */
      Models::GetSkillFileDetectResultResponse getSkillFileDetectResultWithOptions(const Models::GetSkillFileDetectResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of a Skill file detection task.
       *
       * @description ### Prerequisites
       * This operation is available only if the service provider enabled the modification feature and configured the relevant parameters during service creation.
       *
       * @param request GetSkillFileDetectResultRequest
       * @return GetSkillFileDetectResultResponse
       */
      Models::GetSkillFileDetectResultResponse getSkillFileDetectResult(const Models::GetSkillFileDetectResultRequest &request);

      /**
       * @summary Retrieves the SkillHub configuration.
       *
       * @description ### Prerequisites
       * Ensure the service provider enabled the modification feature and configured its parameters when creating the service.
       *
       * @param request GetSkillHubConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillHubConfigResponse
       */
      Models::GetSkillHubConfigResponse getSkillHubConfigWithOptions(const Models::GetSkillHubConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the SkillHub configuration.
       *
       * @description ### Prerequisites
       * Ensure the service provider enabled the modification feature and configured its parameters when creating the service.
       *
       * @param request GetSkillHubConfigRequest
       * @return GetSkillHubConfigResponse
       */
      Models::GetSkillHubConfigResponse getSkillHubConfig(const Models::GetSkillHubConfigRequest &request);

      /**
       * @summary Retrieves the details of a SkillSpace.
       *
       * @description ### Prerequisites
       * Ensure that the service provider has enabled the modification feature and configured the modification parameters for the service.
       *
       * @param request GetSkillSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillSpaceResponse
       */
      Models::GetSkillSpaceResponse getSkillSpaceWithOptions(const Models::GetSkillSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a SkillSpace.
       *
       * @description ### Prerequisites
       * Ensure that the service provider has enabled the modification feature and configured the modification parameters for the service.
       *
       * @param request GetSkillSpaceRequest
       * @return GetSkillSpaceResponse
       */
      Models::GetSkillSpaceResponse getSkillSpace(const Models::GetSkillSpaceRequest &request);

      /**
       * @summary Queries user information.
       *
       * @param request GetUserInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserInformationResponse
       */
      Models::GetUserInformationResponse getUserInformationWithOptions(const Models::GetUserInformationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user information.
       *
       * @param request GetUserInformationRequest
       * @return GetUserInformationResponse
       */
      Models::GetUserInformationResponse getUserInformation(const Models::GetUserInformationRequest &request);

      /**
       * @summary Queries a list of backups for Compute Nest service instances.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the upgrade and downgrade feature and configured the related parameters when the service was created.
       *
       * @param request ListBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBackupsResponse
       */
      Models::ListBackupsResponse listBackupsWithOptions(const Models::ListBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of backups for Compute Nest service instances.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the upgrade and downgrade feature and configured the related parameters when the service was created.
       *
       * @param request ListBackupsRequest
       * @return ListBackupsResponse
       */
      Models::ListBackupsResponse listBackups(const Models::ListBackupsRequest &request);

      /**
       * @summary Retrieves a list of access policies.
       *
       * @param request ListPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPoliciesWithOptions(const Models::ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of access policies.
       *
       * @param request ListPoliciesRequest
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPolicies(const Models::ListPoliciesRequest &request);

      /**
       * @summary Lists public skills.
       *
       * @description ### Prerequisites
       * Ensure the service provider enabled the change specification feature and configured the relevant parameters during service creation.
       *
       * @param request ListPublicSkillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublicSkillsResponse
       */
      Models::ListPublicSkillsResponse listPublicSkillsWithOptions(const Models::ListPublicSkillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists public skills.
       *
       * @description ### Prerequisites
       * Ensure the service provider enabled the change specification feature and configured the relevant parameters during service creation.
       *
       * @param request ListPublicSkillsRequest
       * @return ListPublicSkillsResponse
       */
      Models::ListPublicSkillsResponse listPublicSkills(const Models::ListPublicSkillsRequest &request);

      /**
       * @summary Queries a list of restore jobs.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the upgrade and downgrade feature and configured its parameters when creating the service.
       *
       * @param request ListRestoreTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRestoreTasksResponse
       */
      Models::ListRestoreTasksResponse listRestoreTasksWithOptions(const Models::ListRestoreTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of restore jobs.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the upgrade and downgrade feature and configured its parameters when creating the service.
       *
       * @param request ListRestoreTasksRequest
       * @return ListRestoreTasksResponse
       */
      Models::ListRestoreTasksResponse listRestoreTasks(const Models::ListRestoreTasksRequest &request);

      /**
       * @summary Lists the available service categories.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceCategoriesResponse
       */
      Models::ListServiceCategoriesResponse listServiceCategoriesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the available service categories.
       *
       * @return ListServiceCategoriesResponse
       */
      Models::ListServiceCategoriesResponse listServiceCategories();

      /**
       * @summary Call the ListServiceInstanceBill operation to query bills for service instances.
       *
       * @param request ListServiceInstanceBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceBillResponse
       */
      Models::ListServiceInstanceBillResponse listServiceInstanceBillWithOptions(const Models::ListServiceInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ListServiceInstanceBill operation to query bills for service instances.
       *
       * @param request ListServiceInstanceBillRequest
       * @return ListServiceInstanceBillResponse
       */
      Models::ListServiceInstanceBillResponse listServiceInstanceBill(const Models::ListServiceInstanceBillRequest &request);

      /**
       * @summary Retrieves the deployment and upgrade logs of a service instance.
       *
       * @param request ListServiceInstanceLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceLogsResponse
       */
      Models::ListServiceInstanceLogsResponse listServiceInstanceLogsWithOptions(const Models::ListServiceInstanceLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the deployment and upgrade logs of a service instance.
       *
       * @param request ListServiceInstanceLogsRequest
       * @return ListServiceInstanceLogsResponse
       */
      Models::ListServiceInstanceLogsResponse listServiceInstanceLogs(const Models::ListServiceInstanceLogsRequest &request);

      /**
       * @summary Queries the resources of a service instance based on parameters such as the service instance ID, Alibaba Cloud Resource Name (ARN), and region ID.
       *
       * @param request ListServiceInstanceResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceResourcesResponse
       */
      Models::ListServiceInstanceResourcesResponse listServiceInstanceResourcesWithOptions(const Models::ListServiceInstanceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources of a service instance based on parameters such as the service instance ID, Alibaba Cloud Resource Name (ARN), and region ID.
       *
       * @param request ListServiceInstanceResourcesRequest
       * @return ListServiceInstanceResourcesResponse
       */
      Models::ListServiceInstanceResourcesResponse listServiceInstanceResources(const Models::ListServiceInstanceResourcesRequest &request);

      /**
       * @summary You can call ListServiceInstanceUpgradeHistory to query the upgrade history of a service instance.
       *
       * @param request ListServiceInstanceUpgradeHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceUpgradeHistoryResponse
       */
      Models::ListServiceInstanceUpgradeHistoryResponse listServiceInstanceUpgradeHistoryWithOptions(const Models::ListServiceInstanceUpgradeHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call ListServiceInstanceUpgradeHistory to query the upgrade history of a service instance.
       *
       * @param request ListServiceInstanceUpgradeHistoryRequest
       * @return ListServiceInstanceUpgradeHistoryResponse
       */
      Models::ListServiceInstanceUpgradeHistoryResponse listServiceInstanceUpgradeHistory(const Models::ListServiceInstanceUpgradeHistoryRequest &request);

      /**
       * @summary Queries service instances for your account in a specified region.
       *
       * @param request ListServiceInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstancesResponse
       */
      Models::ListServiceInstancesResponse listServiceInstancesWithOptions(const Models::ListServiceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries service instances for your account in a specified region.
       *
       * @param request ListServiceInstancesRequest
       * @return ListServiceInstancesResponse
       */
      Models::ListServiceInstancesResponse listServiceInstances(const Models::ListServiceInstancesRequest &request);

      /**
       * @summary Queries your service usages.
       *
       * @param request ListServiceUsagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceUsagesResponse
       */
      Models::ListServiceUsagesResponse listServiceUsagesWithOptions(const Models::ListServiceUsagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries your service usages.
       *
       * @param request ListServiceUsagesRequest
       * @return ListServiceUsagesResponse
       */
      Models::ListServiceUsagesResponse listServiceUsages(const Models::ListServiceUsagesRequest &request);

      /**
       * @summary Queries information about your services.
       *
       * @param request ListServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServicesWithOptions(const Models::ListServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about your services.
       *
       * @param request ListServicesRequest
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServices(const Models::ListServicesRequest &request);

      /**
       * @summary Lists the files of a specified Skill.
       *
       * @description ### Prerequisites
       * Before you call this operation, ensure that the service provider has enabled the modification feature and configured the modification parameters when creating the service.
       *
       * @param request ListSkillFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillFilesResponse
       */
      Models::ListSkillFilesResponse listSkillFilesWithOptions(const Models::ListSkillFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the files of a specified Skill.
       *
       * @description ### Prerequisites
       * Before you call this operation, ensure that the service provider has enabled the modification feature and configured the modification parameters when creating the service.
       *
       * @param request ListSkillFilesRequest
       * @return ListSkillFilesResponse
       */
      Models::ListSkillFilesResponse listSkillFiles(const Models::ListSkillFilesRequest &request);

      /**
       * @summary Queries a list of SkillSpaces.
       *
       * @description ### Prerequisites
       * Ensure the service provider enabled the upgrade feature and configured its parameters when creating the service.
       *
       * @param request ListSkillSpacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillSpacesResponse
       */
      Models::ListSkillSpacesResponse listSkillSpacesWithOptions(const Models::ListSkillSpacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of SkillSpaces.
       *
       * @description ### Prerequisites
       * Ensure the service provider enabled the upgrade feature and configured its parameters when creating the service.
       *
       * @param request ListSkillSpacesRequest
       * @return ListSkillSpacesResponse
       */
      Models::ListSkillSpacesResponse listSkillSpaces(const Models::ListSkillSpacesRequest &request);

      /**
       * @summary Retrieves a list of Skills.
       *
       * @description ### Prerequisites
       * Ensure that the service provider has enabled modification and configured the modification parameters when creating the service.
       *
       * @param request ListSkillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkillsWithOptions(const Models::ListSkillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of Skills.
       *
       * @description ### Prerequisites
       * Ensure that the service provider has enabled modification and configured the modification parameters when creating the service.
       *
       * @param request ListSkillsRequest
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkills(const Models::ListSkillsRequest &request);

      /**
       * @summary This operation lists existing tag keys.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation lists existing tag keys.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary Queries a list of tagged resources.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tagged resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Lists the tag values for a specified tag key.
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the tag values for a specified tag key.
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Renews a service instance.
       *
       * @param request RenewServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewServiceInstanceResponse
       */
      Models::RenewServiceInstanceResponse renewServiceInstanceWithOptions(const Models::RenewServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a service instance.
       *
       * @param request RenewServiceInstanceRequest
       * @return RenewServiceInstanceResponse
       */
      Models::RenewServiceInstanceResponse renewServiceInstance(const Models::RenewServiceInstanceRequest &request);

      /**
       * @summary Renews the subscription resources for a private deployment service instance. This operation supports two renewal methods: renewing all subscription resources for a service instance or renewing only specific resources. You can use only one method per request.
       *
       * @param request RenewServiceInstanceResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewServiceInstanceResourcesResponse
       */
      Models::RenewServiceInstanceResourcesResponse renewServiceInstanceResourcesWithOptions(const Models::RenewServiceInstanceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews the subscription resources for a private deployment service instance. This operation supports two renewal methods: renewing all subscription resources for a service instance or renewing only specific resources. You can use only one method per request.
       *
       * @param request RenewServiceInstanceResourcesRequest
       * @return RenewServiceInstanceResourcesResponse
       */
      Models::RenewServiceInstanceResourcesResponse renewServiceInstanceResources(const Models::RenewServiceInstanceResourcesRequest &request);

      /**
       * @summary Restarts a service instance in the Deployed state.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the restart O\\&M operation when the service was created.
       *
       * @param request RestartServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartServiceInstanceResponse
       */
      Models::RestartServiceInstanceResponse restartServiceInstanceWithOptions(const Models::RestartServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a service instance in the Deployed state.
       *
       * @description ### Prerequisites
       * Ensure that the service provider enabled the restart O\\&M operation when the service was created.
       *
       * @param request RestartServiceInstanceRequest
       * @return RestartServiceInstanceResponse
       */
      Models::RestartServiceInstanceResponse restartServiceInstance(const Models::RestartServiceInstanceRequest &request);

      /**
       * @summary Rolls back an upgraded service instance.
       *
       * @param request RollbackServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackServiceInstanceResponse
       */
      Models::RollbackServiceInstanceResponse rollbackServiceInstanceWithOptions(const Models::RollbackServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back an upgraded service instance.
       *
       * @param request RollbackServiceInstanceRequest
       * @return RollbackServiceInstanceResponse
       */
      Models::RollbackServiceInstanceResponse rollbackServiceInstance(const Models::RollbackServiceInstanceRequest &request);

      /**
       * @summary Call the StartServiceInstance operation to start a service instance that is in the Stopped or StartFailed state.
       *
       * @description ### Prerequisites
       * Ensure that the service provider configured the start and stop O\\&M actions when creating the service.
       *
       * @param request StartServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartServiceInstanceResponse
       */
      Models::StartServiceInstanceResponse startServiceInstanceWithOptions(const Models::StartServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the StartServiceInstance operation to start a service instance that is in the Stopped or StartFailed state.
       *
       * @description ### Prerequisites
       * Ensure that the service provider configured the start and stop O\\&M actions when creating the service.
       *
       * @param request StartServiceInstanceRequest
       * @return StartServiceInstanceResponse
       */
      Models::StartServiceInstanceResponse startServiceInstance(const Models::StartServiceInstanceRequest &request);

      /**
       * @summary Call the StopServiceInstance operation to shut down a service instance that is in the Deployed or StopFailed state.
       *
       * @description ### Prerequisites
       * Ensure that the service provider configured the Operations and Maintenance (O\\&M) operations for startup and shutdown when the service was created.
       *
       * @param request StopServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopServiceInstanceResponse
       */
      Models::StopServiceInstanceResponse stopServiceInstanceWithOptions(const Models::StopServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the StopServiceInstance operation to shut down a service instance that is in the Deployed or StopFailed state.
       *
       * @description ### Prerequisites
       * Ensure that the service provider configured the Operations and Maintenance (O\\&M) operations for startup and shutdown when the service was created.
       *
       * @param request StopServiceInstanceRequest
       * @return StopServiceInstanceResponse
       */
      Models::StopServiceInstanceResponse stopServiceInstance(const Models::StopServiceInstanceRequest &request);

      /**
       * @summary You can call TagResources to create and attach tags to multiple resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call TagResources to create and attach tags to multiple resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Detaches tags from specified resources.
       *
       * @param request UnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches tags from specified resources.
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
       * @summary You can call the UpdateServiceInstanceSpec operation to upgrade or downgrade a service instance if its parameters or package settings do not meet your requirements.
       *
       * @description ### Prerequisites
       * Ensure that the service provider has enabled the upgrade/downgrade feature and configured the related parameters when the service was created.
       *
       * @param tmpReq UpdateServiceInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceInstanceSpecResponse
       */
      Models::UpdateServiceInstanceSpecResponse updateServiceInstanceSpecWithOptions(const Models::UpdateServiceInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UpdateServiceInstanceSpec operation to upgrade or downgrade a service instance if its parameters or package settings do not meet your requirements.
       *
       * @description ### Prerequisites
       * Ensure that the service provider has enabled the upgrade/downgrade feature and configured the related parameters when the service was created.
       *
       * @param request UpdateServiceInstanceSpecRequest
       * @return UpdateServiceInstanceSpecResponse
       */
      Models::UpdateServiceInstanceSpecResponse updateServiceInstanceSpec(const Models::UpdateServiceInstanceSpecRequest &request);

      /**
       * @summary Updates the information about a service usage request.
       *
       * @param tmpReq UpdateServiceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceUsageResponse
       */
      Models::UpdateServiceUsageResponse updateServiceUsageWithOptions(const Models::UpdateServiceUsageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a service usage request.
       *
       * @param request UpdateServiceUsageRequest
       * @return UpdateServiceUsageResponse
       */
      Models::UpdateServiceUsageResponse updateServiceUsage(const Models::UpdateServiceUsageRequest &request);

      /**
       * @summary Updates a skill.
       *
       * @description ### Prerequisites
       * Ensure the service provider has enabled the option to modify configurations and configured the relevant parameters during service creation.
       *
       * @param request UpdateSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillResponse
       */
      Models::UpdateSkillResponse updateSkillWithOptions(const Models::UpdateSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a skill.
       *
       * @description ### Prerequisites
       * Ensure the service provider has enabled the option to modify configurations and configured the relevant parameters during service creation.
       *
       * @param request UpdateSkillRequest
       * @return UpdateSkillResponse
       */
      Models::UpdateSkillResponse updateSkill(const Models::UpdateSkillRequest &request);

      /**
       * @summary The UpdateUserInformation operation updates user information.
       *
       * @param request UpdateUserInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserInformationResponse
       */
      Models::UpdateUserInformationResponse updateUserInformationWithOptions(const Models::UpdateUserInformationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The UpdateUserInformation operation updates user information.
       *
       * @param request UpdateUserInformationRequest
       * @return UpdateUserInformationResponse
       */
      Models::UpdateUserInformationResponse updateUserInformation(const Models::UpdateUserInformationRequest &request);

      /**
       * @summary Upgrades a service instance to a new version.
       *
       * @param tmpReq UpgradeServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeServiceInstanceResponse
       */
      Models::UpgradeServiceInstanceResponse upgradeServiceInstanceWithOptions(const Models::UpgradeServiceInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a service instance to a new version.
       *
       * @param request UpgradeServiceInstanceRequest
       * @return UpgradeServiceInstanceResponse
       */
      Models::UpgradeServiceInstanceResponse upgradeServiceInstance(const Models::UpgradeServiceInstanceRequest &request);

      /**
       * @summary Validates the name of a service instance.
       *
       * @param request ValidateServiceInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateServiceInstanceNameResponse
       */
      Models::ValidateServiceInstanceNameResponse validateServiceInstanceNameWithOptions(const Models::ValidateServiceInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates the name of a service instance.
       *
       * @param request ValidateServiceInstanceNameRequest
       * @return ValidateServiceInstanceNameResponse
       */
      Models::ValidateServiceInstanceNameResponse validateServiceInstanceName(const Models::ValidateServiceInstanceNameRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
