// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER20210521_HPP_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER20210521_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ComputeNestSupplier20210521Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ComputeNestSupplier20210521.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds shared accounts for a service.
       *
       * @param request AddServiceSharedAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddServiceSharedAccountsResponse
       */
      Models::AddServiceSharedAccountsResponse addServiceSharedAccountsWithOptions(const Models::AddServiceSharedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds shared accounts for a service.
       *
       * @param request AddServiceSharedAccountsRequest
       * @return AddServiceSharedAccountsResponse
       */
      Models::AddServiceSharedAccountsResponse addServiceSharedAccounts(const Models::AddServiceSharedAccountsRequest &request);

      /**
       * @summary Approves a service usage request.
       *
       * @param request ApproveServiceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApproveServiceUsageResponse
       */
      Models::ApproveServiceUsageResponse approveServiceUsageWithOptions(const Models::ApproveServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Approves a service usage request.
       *
       * @param request ApproveServiceUsageRequest
       * @return ApproveServiceUsageResponse
       */
      Models::ApproveServiceUsageResponse approveServiceUsage(const Models::ApproveServiceUsageRequest &request);

      /**
       * @summary Cancels a service review request.
       *
       * @description Service review requests can be canceled only if they are in the Submitted state.
       *
       * @param request CancelServiceRegistrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelServiceRegistrationResponse
       */
      Models::CancelServiceRegistrationResponse cancelServiceRegistrationWithOptions(const Models::CancelServiceRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a service review request.
       *
       * @description Service review requests can be canceled only if they are in the Submitted state.
       *
       * @param request CancelServiceRegistrationRequest
       * @return CancelServiceRegistrationResponse
       */
      Models::CancelServiceRegistrationResponse cancelServiceRegistration(const Models::CancelServiceRegistrationRequest &request);

      /**
       * @summary Continues the deployment of a service instance after a deployment failure. You must specify the region ID, service ID, and the configuration parameters for the service instance.
       *
       * @param request ContinueDeployServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinueDeployServiceInstanceResponse
       */
      Models::ContinueDeployServiceInstanceResponse continueDeployServiceInstanceWithOptions(const Models::ContinueDeployServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Continues the deployment of a service instance after a deployment failure. You must specify the region ID, service ID, and the configuration parameters for the service instance.
       *
       * @param request ContinueDeployServiceInstanceRequest
       * @return ContinueDeployServiceInstanceResponse
       */
      Models::ContinueDeployServiceInstanceResponse continueDeployServiceInstance(const Models::ContinueDeployServiceInstanceRequest &request);

      /**
       * @summary Creates an artifact.
       *
       * @param tmpReq CreateArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateArtifactResponse
       */
      Models::CreateArtifactResponse createArtifactWithOptions(const Models::CreateArtifactRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an artifact.
       *
       * @param request CreateArtifactRequest
       * @return CreateArtifactResponse
       */
      Models::CreateArtifactResponse createArtifact(const Models::CreateArtifactRequest &request);

      /**
       * @summary Creates an operations and maintenance (O&M) notice.
       *
       * @param tmpReq CreateOpsNoticeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOpsNoticeResponse
       */
      Models::CreateOpsNoticeResponse createOpsNoticeWithOptions(const Models::CreateOpsNoticeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an operations and maintenance (O&M) notice.
       *
       * @param request CreateOpsNoticeRequest
       * @return CreateOpsNoticeResponse
       */
      Models::CreateOpsNoticeResponse createOpsNotice(const Models::CreateOpsNoticeRequest &request);

      /**
       * @summary Creates a service by specifying parameters, such as the region ID, deployment type, service type, and service name.
       *
       * @param tmpReq CreateServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createServiceWithOptions(const Models::CreateServiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service by specifying parameters, such as the region ID, deployment type, service type, and service name.
       *
       * @param request CreateServiceRequest
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createService(const Models::CreateServiceRequest &request);

      /**
       * @summary You can create and deploy a service instance by specifying parameters such as the region ID, service ID, and service version.
       *
       * @param tmpReq CreateServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceInstanceResponse
       */
      Models::CreateServiceInstanceResponse createServiceInstanceWithOptions(const Models::CreateServiceInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can create and deploy a service instance by specifying parameters such as the region ID, service ID, and service version.
       *
       * @param request CreateServiceInstanceRequest
       * @return CreateServiceInstanceResponse
       */
      Models::CreateServiceInstanceResponse createServiceInstance(const Models::CreateServiceInstanceRequest &request);

      /**
       * @summary Creates a service test case.
       *
       * @param request CreateServiceTestCaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceTestCaseResponse
       */
      Models::CreateServiceTestCaseResponse createServiceTestCaseWithOptions(const Models::CreateServiceTestCaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service test case.
       *
       * @param request CreateServiceTestCaseRequest
       * @return CreateServiceTestCaseResponse
       */
      Models::CreateServiceTestCaseResponse createServiceTestCase(const Models::CreateServiceTestCaseRequest &request);

      /**
       * @summary Creates a test task for a service.
       *
       * @param request CreateServiceTestTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceTestTaskResponse
       */
      Models::CreateServiceTestTaskResponse createServiceTestTaskWithOptions(const Models::CreateServiceTestTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a test task for a service.
       *
       * @param request CreateServiceTestTaskRequest
       * @return CreateServiceTestTaskResponse
       */
      Models::CreateServiceTestTaskResponse createServiceTestTask(const Models::CreateServiceTestTaskRequest &request);

      /**
       * @summary You can create a service distribution request.
       *
       * @param request CreateServiceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceUsageResponse
       */
      Models::CreateServiceUsageResponse createServiceUsageWithOptions(const Models::CreateServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can create a service distribution request.
       *
       * @param request CreateServiceUsageRequest
       * @return CreateServiceUsageResponse
       */
      Models::CreateServiceUsageResponse createServiceUsage(const Models::CreateServiceUsageRequest &request);

      /**
       * @summary Registers a service provider.
       *
       * @param request CreateSupplierRegistrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSupplierRegistrationResponse
       */
      Models::CreateSupplierRegistrationResponse createSupplierRegistrationWithOptions(const Models::CreateSupplierRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a service provider.
       *
       * @param request CreateSupplierRegistrationRequest
       * @return CreateSupplierRegistrationResponse
       */
      Models::CreateSupplierRegistrationResponse createSupplierRegistration(const Models::CreateSupplierRegistrationRequest &request);

      /**
       * @summary Deletes ACR image repositories.
       *
       * @description ### Prerequisites
       * Before you delete an image repository, ensure that no deployments reference its container images. If you delete a repository that contains referenced images, the associated deployments become unavailable.
       *
       * @param request DeleteAcrImageRepositoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAcrImageRepositoriesResponse
       */
      Models::DeleteAcrImageRepositoriesResponse deleteAcrImageRepositoriesWithOptions(const Models::DeleteAcrImageRepositoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes ACR image repositories.
       *
       * @description ### Prerequisites
       * Before you delete an image repository, ensure that no deployments reference its container images. If you delete a repository that contains referenced images, the associated deployments become unavailable.
       *
       * @param request DeleteAcrImageRepositoriesRequest
       * @return DeleteAcrImageRepositoriesResponse
       */
      Models::DeleteAcrImageRepositoriesResponse deleteAcrImageRepositories(const Models::DeleteAcrImageRepositoriesRequest &request);

      /**
       * @summary Delete a container image version from ACR
       *
       * @description ###
       * You must delete the deployments that use the container image before you delete the image tag. After the tag is deleted, the corresponding deployments become unusable.
       *
       * @param request DeleteAcrImageTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAcrImageTagsResponse
       */
      Models::DeleteAcrImageTagsResponse deleteAcrImageTagsWithOptions(const Models::DeleteAcrImageTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a container image version from ACR
       *
       * @description ###
       * You must delete the deployments that use the container image before you delete the image tag. After the tag is deleted, the corresponding deployments become unusable.
       *
       * @param request DeleteAcrImageTagsRequest
       * @return DeleteAcrImageTagsResponse
       */
      Models::DeleteAcrImageTagsResponse deleteAcrImageTags(const Models::DeleteAcrImageTagsRequest &request);

      /**
       * @summary You can call DeleteArtifact to delete an artifact or a specific version of an artifact.
       *
       * @param request DeleteArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteArtifactResponse
       */
      Models::DeleteArtifactResponse deleteArtifactWithOptions(const Models::DeleteArtifactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call DeleteArtifact to delete an artifact or a specific version of an artifact.
       *
       * @param request DeleteArtifactRequest
       * @return DeleteArtifactResponse
       */
      Models::DeleteArtifactResponse deleteArtifact(const Models::DeleteArtifactRequest &request);

      /**
       * @summary Deletes a specified service based on its region ID, service ID, and service version.
       *
       * @param request DeleteServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteServiceWithOptions(const Models::DeleteServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified service based on its region ID, service ID, and service version.
       *
       * @param request DeleteServiceRequest
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteService(const Models::DeleteServiceRequest &request);

      /**
       * @summary Deletes service instances by specifying a region ID and service instance IDs.
       *
       * @param request DeleteServiceInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceInstancesResponse
       */
      Models::DeleteServiceInstancesResponse deleteServiceInstancesWithOptions(const Models::DeleteServiceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes service instances by specifying a region ID and service instance IDs.
       *
       * @param request DeleteServiceInstancesRequest
       * @return DeleteServiceInstancesResponse
       */
      Models::DeleteServiceInstancesResponse deleteServiceInstances(const Models::DeleteServiceInstancesRequest &request);

      /**
       * @summary Deletes a service test case.
       *
       * @param request DeleteServiceTestCaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceTestCaseResponse
       */
      Models::DeleteServiceTestCaseResponse deleteServiceTestCaseWithOptions(const Models::DeleteServiceTestCaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service test case.
       *
       * @param request DeleteServiceTestCaseRequest
       * @return DeleteServiceTestCaseResponse
       */
      Models::DeleteServiceTestCaseResponse deleteServiceTestCase(const Models::DeleteServiceTestCaseRequest &request);

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
       * @summary You can call the GenerateDefaultServiceTestConfig operation to modify the service test configuration.
       *
       * @param request GenerateDefaultServiceTestConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDefaultServiceTestConfigResponse
       */
      Models::GenerateDefaultServiceTestConfigResponse generateDefaultServiceTestConfigWithOptions(const Models::GenerateDefaultServiceTestConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the GenerateDefaultServiceTestConfig operation to modify the service test configuration.
       *
       * @param request GenerateDefaultServiceTestConfigRequest
       * @return GenerateDefaultServiceTestConfigResponse
       */
      Models::GenerateDefaultServiceTestConfigResponse generateDefaultServiceTestConfig(const Models::GenerateDefaultServiceTestConfigRequest &request);

      /**
       * @summary Generates the required access policies before you create a service instance.
       *
       * @param tmpReq GenerateServicePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateServicePolicyResponse
       */
      Models::GenerateServicePolicyResponse generateServicePolicyWithOptions(const Models::GenerateServicePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates the required access policies before you create a service instance.
       *
       * @param request GenerateServicePolicyRequest
       * @return GenerateServicePolicyResponse
       */
      Models::GenerateServicePolicyResponse generateServicePolicy(const Models::GenerateServicePolicyRequest &request);

      /**
       * @summary Retrieves the details of an artifact.
       *
       * @param request GetArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactResponse
       */
      Models::GetArtifactResponse getArtifactWithOptions(const Models::GetArtifactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an artifact.
       *
       * @param request GetArtifactRequest
       * @return GetArtifactResponse
       */
      Models::GetArtifactResponse getArtifact(const Models::GetArtifactRequest &request);

      /**
       * @summary Obtains the credentials required to upload an artifact.
       *
       * @param request GetArtifactRepositoryCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactRepositoryCredentialsResponse
       */
      Models::GetArtifactRepositoryCredentialsResponse getArtifactRepositoryCredentialsWithOptions(const Models::GetArtifactRepositoryCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the credentials required to upload an artifact.
       *
       * @param request GetArtifactRepositoryCredentialsRequest
       * @return GetArtifactRepositoryCredentialsResponse
       */
      Models::GetArtifactRepositoryCredentialsResponse getArtifactRepositoryCredentials(const Models::GetArtifactRepositoryCredentialsRequest &request);

      /**
       * @summary Retrieves a list of available zones in a region.
       *
       * @param request GetNetworkAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkAvailableZonesResponse
       */
      Models::GetNetworkAvailableZonesResponse getNetworkAvailableZonesWithOptions(const Models::GetNetworkAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of available zones in a region.
       *
       * @param request GetNetworkAvailableZonesRequest
       * @return GetNetworkAvailableZonesResponse
       */
      Models::GetNetworkAvailableZonesResponse getNetworkAvailableZones(const Models::GetNetworkAvailableZonesRequest &request);

      /**
       * @summary Retrieves the details of an operations and maintenance (O&M) notice.
       *
       * @description Services must be approved before they can be published.
       *
       * @param request GetOpsNoticeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpsNoticeResponse
       */
      Models::GetOpsNoticeResponse getOpsNoticeWithOptions(const Models::GetOpsNoticeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an operations and maintenance (O&M) notice.
       *
       * @description Services must be approved before they can be published.
       *
       * @param request GetOpsNoticeRequest
       * @return GetOpsNoticeResponse
       */
      Models::GetOpsNoticeResponse getOpsNotice(const Models::GetOpsNoticeRequest &request);

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
       * @summary Retrieves the estimated cost of creating a service instance.
       *
       * @param tmpReq GetServiceEstimateCostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceEstimateCostResponse
       */
      Models::GetServiceEstimateCostResponse getServiceEstimateCostWithOptions(const Models::GetServiceEstimateCostRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the estimated cost of creating a service instance.
       *
       * @param request GetServiceEstimateCostRequest
       * @return GetServiceEstimateCostResponse
       */
      Models::GetServiceEstimateCostResponse getServiceEstimateCost(const Models::GetServiceEstimateCostRequest &request);

      /**
       * @summary Queries the details of a specified service instance using the service instance ID and region ID. The returned information includes the deployment status, template name, and service details.
       *
       * @param request GetServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceInstanceResponse
       */
      Models::GetServiceInstanceResponse getServiceInstanceWithOptions(const Models::GetServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified service instance using the service instance ID and region ID. The returned information includes the deployment status, template name, and service details.
       *
       * @param request GetServiceInstanceRequest
       * @return GetServiceInstanceResponse
       */
      Models::GetServiceInstanceResponse getServiceInstance(const Models::GetServiceInstanceRequest &request);

      /**
       * @summary Queries the activation status of a service and the information about its service roles.
       *
       * @param tmpReq GetServiceProvisionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceProvisionsResponse
       */
      Models::GetServiceProvisionsResponse getServiceProvisionsWithOptions(const Models::GetServiceProvisionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the activation status of a service and the information about its service roles.
       *
       * @param request GetServiceProvisionsRequest
       * @return GetServiceProvisionsResponse
       */
      Models::GetServiceProvisionsResponse getServiceProvisions(const Models::GetServiceProvisionsRequest &request);

      /**
       * @summary Queries the details of a service registration.
       *
       * @param request GetServiceRegistrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceRegistrationResponse
       */
      Models::GetServiceRegistrationResponse getServiceRegistrationWithOptions(const Models::GetServiceRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a service registration.
       *
       * @param request GetServiceRegistrationRequest
       * @return GetServiceRegistrationResponse
       */
      Models::GetServiceRegistrationResponse getServiceRegistration(const Models::GetServiceRegistrationRequest &request);

      /**
       * @summary Queries for criterion issues in a service template.
       *
       * @param request GetServiceTemplateCriterionIssuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceTemplateCriterionIssuesResponse
       */
      Models::GetServiceTemplateCriterionIssuesResponse getServiceTemplateCriterionIssuesWithOptions(const Models::GetServiceTemplateCriterionIssuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries for criterion issues in a service template.
       *
       * @param request GetServiceTemplateCriterionIssuesRequest
       * @return GetServiceTemplateCriterionIssuesResponse
       */
      Models::GetServiceTemplateCriterionIssuesResponse getServiceTemplateCriterionIssues(const Models::GetServiceTemplateCriterionIssuesRequest &request);

      /**
       * @summary Queries the parameter constraints for a Resource Orchestration Service (ROS) template.
       *
       * @param request GetServiceTemplateParameterConstraintsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceTemplateParameterConstraintsResponse
       */
      Models::GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraintsWithOptions(const Models::GetServiceTemplateParameterConstraintsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter constraints for a Resource Orchestration Service (ROS) template.
       *
       * @param request GetServiceTemplateParameterConstraintsRequest
       * @return GetServiceTemplateParameterConstraintsResponse
       */
      Models::GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraints(const Models::GetServiceTemplateParameterConstraintsRequest &request);

      /**
       * @summary After a service test task is created, you can call this API to retrieve the execution details of each use case in the task.
       *
       * @param request GetServiceTestTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceTestTaskResponse
       */
      Models::GetServiceTestTaskResponse getServiceTestTaskWithOptions(const Models::GetServiceTestTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After a service test task is created, you can call this API to retrieve the execution details of each use case in the task.
       *
       * @param request GetServiceTestTaskRequest
       * @return GetServiceTestTaskResponse
       */
      Models::GetServiceTestTaskResponse getServiceTestTask(const Models::GetServiceTestTaskRequest &request);

      /**
       * @summary Retrieves service provider information.
       *
       * @param request GetSupplierInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSupplierInformationResponse
       */
      Models::GetSupplierInformationResponse getSupplierInformationWithOptions(const Models::GetSupplierInformationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves service provider information.
       *
       * @param request GetSupplierInformationRequest
       * @return GetSupplierInformationResponse
       */
      Models::GetSupplierInformationResponse getSupplierInformation(const Models::GetSupplierInformationRequest &request);

      /**
       * @summary Retrieves credentials to upload a file.
       *
       * @param request GetUploadCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadCredentialsResponse
       */
      Models::GetUploadCredentialsResponse getUploadCredentialsWithOptions(const Models::GetUploadCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves credentials to upload a file.
       *
       * @param request GetUploadCredentialsRequest
       * @return GetUploadCredentialsResponse
       */
      Models::GetUploadCredentialsResponse getUploadCredentials(const Models::GetUploadCredentialsRequest &request);

      /**
       * @summary Publishes a service.
       *
       * @description Only approved services can be published.
       *
       * @param request LaunchServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LaunchServiceResponse
       */
      Models::LaunchServiceResponse launchServiceWithOptions(const Models::LaunchServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a service.
       *
       * @description Only approved services can be published.
       *
       * @param request LaunchServiceRequest
       * @return LaunchServiceResponse
       */
      Models::LaunchServiceResponse launchService(const Models::LaunchServiceRequest &request);

      /**
       * @summary You can call the ListAcrImageRepositories operation to query a list of image repositories in ACR.
       *
       * @param request ListAcrImageRepositoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAcrImageRepositoriesResponse
       */
      Models::ListAcrImageRepositoriesResponse listAcrImageRepositoriesWithOptions(const Models::ListAcrImageRepositoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListAcrImageRepositories operation to query a list of image repositories in ACR.
       *
       * @param request ListAcrImageRepositoriesRequest
       * @return ListAcrImageRepositoriesResponse
       */
      Models::ListAcrImageRepositoriesResponse listAcrImageRepositories(const Models::ListAcrImageRepositoriesRequest &request);

      /**
       * @summary Lists the uploaded image versions in an image repository.
       *
       * @param request ListAcrImageTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAcrImageTagsResponse
       */
      Models::ListAcrImageTagsResponse listAcrImageTagsWithOptions(const Models::ListAcrImageTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the uploaded image versions in an image repository.
       *
       * @param request ListAcrImageTagsRequest
       * @return ListAcrImageTagsResponse
       */
      Models::ListAcrImageTagsResponse listAcrImageTags(const Models::ListAcrImageTagsRequest &request);

      /**
       * @summary Queries the build logs of an artifact.
       *
       * @description ### Prerequisites
       * None
       *
       * @param request ListArtifactBuildLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactBuildLogsResponse
       */
      Models::ListArtifactBuildLogsResponse listArtifactBuildLogsWithOptions(const Models::ListArtifactBuildLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the build logs of an artifact.
       *
       * @description ### Prerequisites
       * None
       *
       * @param request ListArtifactBuildLogsRequest
       * @return ListArtifactBuildLogsResponse
       */
      Models::ListArtifactBuildLogsResponse listArtifactBuildLogs(const Models::ListArtifactBuildLogsRequest &request);

      /**
       * @summary Retrieves a list of security risks for an artifact.
       *
       * @param request ListArtifactRisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactRisksResponse
       */
      Models::ListArtifactRisksResponse listArtifactRisksWithOptions(const Models::ListArtifactRisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of security risks for an artifact.
       *
       * @param request ListArtifactRisksRequest
       * @return ListArtifactRisksResponse
       */
      Models::ListArtifactRisksResponse listArtifactRisks(const Models::ListArtifactRisksRequest &request);

      /**
       * @summary Queries artifact versions.
       *
       * @param tmpReq ListArtifactVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactVersionsResponse
       */
      Models::ListArtifactVersionsResponse listArtifactVersionsWithOptions(const Models::ListArtifactVersionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries artifact versions.
       *
       * @param request ListArtifactVersionsRequest
       * @return ListArtifactVersionsResponse
       */
      Models::ListArtifactVersionsResponse listArtifactVersions(const Models::ListArtifactVersionsRequest &request);

      /**
       * @summary Queries a list of artifacts.
       *
       * @param request ListArtifactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactsResponse
       */
      Models::ListArtifactsResponse listArtifactsWithOptions(const Models::ListArtifactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of artifacts.
       *
       * @param request ListArtifactsRequest
       * @return ListArtifactsResponse
       */
      Models::ListArtifactsResponse listArtifacts(const Models::ListArtifactsRequest &request);

      /**
       * @summary Queries the operations and maintenance (O&M) notices published by a service provider.
       *
       * @param request ListOpsNoticesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOpsNoticesResponse
       */
      Models::ListOpsNoticesResponse listOpsNoticesWithOptions(const Models::ListOpsNoticesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operations and maintenance (O&M) notices published by a service provider.
       *
       * @param request ListOpsNoticesRequest
       * @return ListOpsNoticesResponse
       */
      Models::ListOpsNoticesResponse listOpsNotices(const Models::ListOpsNoticesRequest &request);

      /**
       * @summary Queries a list of resellers for display on the frontend.
       *
       * @param request ListResellersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResellersResponse
       */
      Models::ListResellersResponse listResellersWithOptions(const Models::ListResellersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of resellers for display on the frontend.
       *
       * @param request ListResellersRequest
       * @return ListResellersResponse
       */
      Models::ListResellersResponse listResellers(const Models::ListResellersRequest &request);

      /**
       * @summary Queries the logs for service instances, upgrades, and applications.
       *
       * @description ### Prerequisites
       * Ensure that you add the startup and shutdown Operations and Maintenance (O\\&M) operations when you create a service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
       *
       * @param request ListServiceBuildLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceBuildLogsResponse
       */
      Models::ListServiceBuildLogsResponse listServiceBuildLogsWithOptions(const Models::ListServiceBuildLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs for service instances, upgrades, and applications.
       *
       * @description ### Prerequisites
       * Ensure that you add the startup and shutdown Operations and Maintenance (O\\&M) operations when you create a service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
       *
       * @param request ListServiceBuildLogsRequest
       * @return ListServiceBuildLogsResponse
       */
      Models::ListServiceBuildLogsResponse listServiceBuildLogs(const Models::ListServiceBuildLogsRequest &request);

      /**
       * @summary You can call the ListServiceInstanceBill operation to query the bills of a service instance.
       *
       * @param request ListServiceInstanceBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceBillResponse
       */
      Models::ListServiceInstanceBillResponse listServiceInstanceBillWithOptions(const Models::ListServiceInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListServiceInstanceBill operation to query the bills of a service instance.
       *
       * @param request ListServiceInstanceBillRequest
       * @return ListServiceInstanceBillResponse
       */
      Models::ListServiceInstanceBillResponse listServiceInstanceBill(const Models::ListServiceInstanceBillRequest &request);

      /**
       * @summary Queries the deployment details for service instances.
       *
       * @param request ListServiceInstanceDeployDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceDeployDetailsResponse
       */
      Models::ListServiceInstanceDeployDetailsResponse listServiceInstanceDeployDetailsWithOptions(const Models::ListServiceInstanceDeployDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deployment details for service instances.
       *
       * @param request ListServiceInstanceDeployDetailsRequest
       * @return ListServiceInstanceDeployDetailsResponse
       */
      Models::ListServiceInstanceDeployDetailsResponse listServiceInstanceDeployDetails(const Models::ListServiceInstanceDeployDetailsRequest &request);

      /**
       * @summary Call the ListServiceInstanceLogs operation to query deployment, upgrade, and application logs for a service instance.
       *
       * @param request ListServiceInstanceLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceLogsResponse
       */
      Models::ListServiceInstanceLogsResponse listServiceInstanceLogsWithOptions(const Models::ListServiceInstanceLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ListServiceInstanceLogs operation to query deployment, upgrade, and application logs for a service instance.
       *
       * @param request ListServiceInstanceLogsRequest
       * @return ListServiceInstanceLogsResponse
       */
      Models::ListServiceInstanceLogsResponse listServiceInstanceLogs(const Models::ListServiceInstanceLogsRequest &request);

      /**
       * @summary Lists the resources in a service instance.
       *
       * @param request ListServiceInstanceResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceResourcesResponse
       */
      Models::ListServiceInstanceResourcesResponse listServiceInstanceResourcesWithOptions(const Models::ListServiceInstanceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the resources in a service instance.
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
       * @summary Queries a list of service instances.
       *
       * @param request ListServiceInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstancesResponse
       */
      Models::ListServiceInstancesResponse listServiceInstancesWithOptions(const Models::ListServiceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of service instances.
       *
       * @param request ListServiceInstancesRequest
       * @return ListServiceInstancesResponse
       */
      Models::ListServiceInstancesResponse listServiceInstances(const Models::ListServiceInstancesRequest &request);

      /**
       * @summary Queries service registration requests.
       *
       * @param request ListServiceRegistrationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceRegistrationsResponse
       */
      Models::ListServiceRegistrationsResponse listServiceRegistrationsWithOptions(const Models::ListServiceRegistrationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries service registration requests.
       *
       * @param request ListServiceRegistrationsRequest
       * @return ListServiceRegistrationsResponse
       */
      Models::ListServiceRegistrationsResponse listServiceRegistrations(const Models::ListServiceRegistrationsRequest &request);

      /**
       * @summary Queries the accounts that a service is shared with.
       *
       * @param request ListServiceSharedAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceSharedAccountsResponse
       */
      Models::ListServiceSharedAccountsResponse listServiceSharedAccountsWithOptions(const Models::ListServiceSharedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the accounts that a service is shared with.
       *
       * @param request ListServiceSharedAccountsRequest
       * @return ListServiceSharedAccountsResponse
       */
      Models::ListServiceSharedAccountsResponse listServiceSharedAccounts(const Models::ListServiceSharedAccountsRequest &request);

      /**
       * @summary Queries the service test cases for the current service version.
       *
       * @param request ListServiceTestCasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceTestCasesResponse
       */
      Models::ListServiceTestCasesResponse listServiceTestCasesWithOptions(const Models::ListServiceTestCasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the service test cases for the current service version.
       *
       * @param request ListServiceTestCasesRequest
       * @return ListServiceTestCasesResponse
       */
      Models::ListServiceTestCasesResponse listServiceTestCases(const Models::ListServiceTestCasesRequest &request);

      /**
       * @summary Retrieves the real-time logs of a service test.
       *
       * @param request ListServiceTestTaskLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceTestTaskLogsResponse
       */
      Models::ListServiceTestTaskLogsResponse listServiceTestTaskLogsWithOptions(const Models::ListServiceTestTaskLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the real-time logs of a service test.
       *
       * @param request ListServiceTestTaskLogsRequest
       * @return ListServiceTestTaskLogsResponse
       */
      Models::ListServiceTestTaskLogsResponse listServiceTestTaskLogs(const Models::ListServiceTestTaskLogsRequest &request);

      /**
       * @summary Queries the test tasks for a service.
       *
       * @param request ListServiceTestTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceTestTasksResponse
       */
      Models::ListServiceTestTasksResponse listServiceTestTasksWithOptions(const Models::ListServiceTestTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the test tasks for a service.
       *
       * @param request ListServiceTestTasksRequest
       * @return ListServiceTestTasksResponse
       */
      Models::ListServiceTestTasksResponse listServiceTestTasks(const Models::ListServiceTestTasksRequest &request);

      /**
       * @summary Queries the usage of your services.
       *
       * @param request ListServiceUsagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceUsagesResponse
       */
      Models::ListServiceUsagesResponse listServiceUsagesWithOptions(const Models::ListServiceUsagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage of your services.
       *
       * @param request ListServiceUsagesRequest
       * @return ListServiceUsagesResponse
       */
      Models::ListServiceUsagesResponse listServiceUsages(const Models::ListServiceUsagesRequest &request);

      /**
       * @summary Queries for a list of services based on specified parameters, such as a region ID and service IDs. The returned information includes the service status, service version, and publish time.
       *
       * @param request ListServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServicesWithOptions(const Models::ListServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries for a list of services based on specified parameters, such as a region ID and service IDs. The returned information includes the service status, service version, and publish time.
       *
       * @param request ListServicesRequest
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServices(const Models::ListServicesRequest &request);

      /**
       * @summary Queries service provider registration requests.
       *
       * @param request ListSupplierRegistrationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSupplierRegistrationsResponse
       */
      Models::ListSupplierRegistrationsResponse listSupplierRegistrationsWithOptions(const Models::ListSupplierRegistrationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries service provider registration requests.
       *
       * @param request ListSupplierRegistrationsRequest
       * @return ListSupplierRegistrationsResponse
       */
      Models::ListSupplierRegistrationsResponse listSupplierRegistrations(const Models::ListSupplierRegistrationsRequest &request);

      /**
       * @summary Queries the existing tag keys.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the existing tag keys.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary Queries the tags of one or more resources.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of one or more resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the tag values for a specific tag key.
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag values for a specific tag key.
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Modifies the resources of a service instance.
       *
       * @param request ModifyServiceInstanceResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyServiceInstanceResourcesResponse
       */
      Models::ModifyServiceInstanceResourcesResponse modifyServiceInstanceResourcesWithOptions(const Models::ModifyServiceInstanceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resources of a service instance.
       *
       * @param request ModifyServiceInstanceResourcesRequest
       * @return ModifyServiceInstanceResourcesResponse
       */
      Models::ModifyServiceInstanceResourcesResponse modifyServiceInstanceResources(const Models::ModifyServiceInstanceResourcesRequest &request);

      /**
       * @summary Prelaunches a service.
       *
       * @param request PreLaunchServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreLaunchServiceResponse
       */
      Models::PreLaunchServiceResponse preLaunchServiceWithOptions(const Models::PreLaunchServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prelaunches a service.
       *
       * @param request PreLaunchServiceRequest
       * @return PreLaunchServiceResponse
       */
      Models::PreLaunchServiceResponse preLaunchService(const Models::PreLaunchServiceRequest &request);

      /**
       * @summary This API pushes metering data for pay-as-you-go Compute Nest service instances. The metering items must be predefined by the service provider.
       *
       * @param request PushMeteringDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushMeteringDataResponse
       */
      Models::PushMeteringDataResponse pushMeteringDataWithOptions(const Models::PushMeteringDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API pushes metering data for pay-as-you-go Compute Nest service instances. The metering items must be predefined by the service provider.
       *
       * @param request PushMeteringDataRequest
       * @return PushMeteringDataResponse
       */
      Models::PushMeteringDataResponse pushMeteringData(const Models::PushMeteringDataRequest &request);

      /**
       * @summary Registers a Service deployment.
       *
       * @param request RegisterServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterServiceResponse
       */
      Models::RegisterServiceResponse registerServiceWithOptions(const Models::RegisterServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a Service deployment.
       *
       * @param request RegisterServiceRequest
       * @return RegisterServiceResponse
       */
      Models::RegisterServiceResponse registerService(const Models::RegisterServiceRequest &request);

      /**
       * @summary You can call RejectServiceUsage to reject a service request.
       *
       * @param request RejectServiceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectServiceUsageResponse
       */
      Models::RejectServiceUsageResponse rejectServiceUsageWithOptions(const Models::RejectServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call RejectServiceUsage to reject a service request.
       *
       * @param request RejectServiceUsageRequest
       * @return RejectServiceUsageResponse
       */
      Models::RejectServiceUsageResponse rejectServiceUsage(const Models::RejectServiceUsageRequest &request);

      /**
       * @summary Publishes an artifact.
       *
       * @description ### Prerequisites
       * Ensure that you have created and saved an artifact.
       *
       * @param request ReleaseArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseArtifactResponse
       */
      Models::ReleaseArtifactResponse releaseArtifactWithOptions(const Models::ReleaseArtifactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes an artifact.
       *
       * @description ### Prerequisites
       * Ensure that you have created and saved an artifact.
       *
       * @param request ReleaseArtifactRequest
       * @return ReleaseArtifactResponse
       */
      Models::ReleaseArtifactResponse releaseArtifact(const Models::ReleaseArtifactRequest &request);

      /**
       * @summary Removes shared accounts.
       *
       * @param request RemoveServiceSharedAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveServiceSharedAccountsResponse
       */
      Models::RemoveServiceSharedAccountsResponse removeServiceSharedAccountsWithOptions(const Models::RemoveServiceSharedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes shared accounts.
       *
       * @param request RemoveServiceSharedAccountsRequest
       * @return RemoveServiceSharedAccountsResponse
       */
      Models::RemoveServiceSharedAccountsResponse removeServiceSharedAccounts(const Models::RemoveServiceSharedAccountsRequest &request);

      /**
       * @summary Call the RestartServiceInstance operation to restart a service instance whose status is Deployed.
       *
       * @description ### Prerequisites
       * Ensure that you add the restart Operations and Maintenance (O\\&M) operation when you create the service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
       *
       * @param request RestartServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartServiceInstanceResponse
       */
      Models::RestartServiceInstanceResponse restartServiceInstanceWithOptions(const Models::RestartServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the RestartServiceInstance operation to restart a service instance whose status is Deployed.
       *
       * @description ### Prerequisites
       * Ensure that you add the restart Operations and Maintenance (O\\&M) operation when you create the service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
       *
       * @param request RestartServiceInstanceRequest
       * @return RestartServiceInstanceResponse
       */
      Models::RestartServiceInstanceResponse restartServiceInstance(const Models::RestartServiceInstanceRequest &request);

      /**
       * @summary Rolls back an upgraded service instance to its previous version.
       *
       * @param request RollbackServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackServiceInstanceResponse
       */
      Models::RollbackServiceInstanceResponse rollbackServiceInstanceWithOptions(const Models::RollbackServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back an upgraded service instance to its previous version.
       *
       * @param request RollbackServiceInstanceRequest
       * @return RollbackServiceInstanceResponse
       */
      Models::RollbackServiceInstanceResponse rollbackServiceInstance(const Models::RollbackServiceInstanceRequest &request);

      /**
       * @summary Starts a service instance when its status is Stopped or StartFailed.
       *
       * @description ### Prerequisites
       * Ensure that you add the startup and shutdown O\\&M operations when you create the service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
       *
       * @param request StartServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartServiceInstanceResponse
       */
      Models::StartServiceInstanceResponse startServiceInstanceWithOptions(const Models::StartServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a service instance when its status is Stopped or StartFailed.
       *
       * @description ### Prerequisites
       * Ensure that you add the startup and shutdown O\\&M operations when you create the service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
       *
       * @param request StartServiceInstanceRequest
       * @return StartServiceInstanceResponse
       */
      Models::StartServiceInstanceResponse startServiceInstance(const Models::StartServiceInstanceRequest &request);

      /**
       * @summary This operation stops a service instance that is in the Deployed or StopFailed state.
       *
       * @description ### Prerequisites
       * Ensure that you configured the startup and shutdown operations and maintenance (O\\&M) when you created the service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
       *
       * @param request StopServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopServiceInstanceResponse
       */
      Models::StopServiceInstanceResponse stopServiceInstanceWithOptions(const Models::StopServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation stops a service instance that is in the Deployed or StopFailed state.
       *
       * @description ### Prerequisites
       * Ensure that you configured the startup and shutdown operations and maintenance (O\\&M) when you created the service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
       *
       * @param request StopServiceInstanceRequest
       * @return StopServiceInstanceResponse
       */
      Models::StopServiceInstanceResponse stopServiceInstance(const Models::StopServiceInstanceRequest &request);

      /**
       * @summary Creates and attaches tags to one or more resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and attaches tags to one or more resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary Updates an artifact.
       *
       * @param tmpReq UpdateArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateArtifactResponse
       */
      Models::UpdateArtifactResponse updateArtifactWithOptions(const Models::UpdateArtifactRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an artifact.
       *
       * @param request UpdateArtifactRequest
       * @return UpdateArtifactResponse
       */
      Models::UpdateArtifactResponse updateArtifact(const Models::UpdateArtifactRequest &request);

      /**
       * @summary Updates a service.
       *
       * @description Only approved services can be published.
       *
       * @param tmpReq UpdateServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateServiceWithOptions(const Models::UpdateServiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a service.
       *
       * @description Only approved services can be published.
       *
       * @param request UpdateServiceRequest
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateService(const Models::UpdateServiceRequest &request);

      /**
       * @summary Updates the attributes of a service instance.
       *
       * @param tmpReq UpdateServiceInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceInstanceAttributeResponse
       */
      Models::UpdateServiceInstanceAttributeResponse updateServiceInstanceAttributeWithOptions(const Models::UpdateServiceInstanceAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the attributes of a service instance.
       *
       * @param request UpdateServiceInstanceAttributeRequest
       * @return UpdateServiceInstanceAttributeResponse
       */
      Models::UpdateServiceInstanceAttributeResponse updateServiceInstanceAttribute(const Models::UpdateServiceInstanceAttributeRequest &request);

      /**
       * @summary Upgrades or downgrades a service instance.
       *
       * @param tmpReq UpdateServiceInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceInstanceSpecResponse
       */
      Models::UpdateServiceInstanceSpecResponse updateServiceInstanceSpecWithOptions(const Models::UpdateServiceInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades or downgrades a service instance.
       *
       * @param request UpdateServiceInstanceSpecRequest
       * @return UpdateServiceInstanceSpecResponse
       */
      Models::UpdateServiceInstanceSpecResponse updateServiceInstanceSpec(const Models::UpdateServiceInstanceSpecRequest &request);

      /**
       * @summary Updates a service test case.
       *
       * @param request UpdateServiceTestCaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceTestCaseResponse
       */
      Models::UpdateServiceTestCaseResponse updateServiceTestCaseWithOptions(const Models::UpdateServiceTestCaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a service test case.
       *
       * @param request UpdateServiceTestCaseRequest
       * @return UpdateServiceTestCaseResponse
       */
      Models::UpdateServiceTestCaseResponse updateServiceTestCase(const Models::UpdateServiceTestCaseRequest &request);

      /**
       * @summary You can call UpdateSharedAccountPermission to update the permissions of a shared account.
       *
       * @param request UpdateSharedAccountPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSharedAccountPermissionResponse
       */
      Models::UpdateSharedAccountPermissionResponse updateSharedAccountPermissionWithOptions(const Models::UpdateSharedAccountPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call UpdateSharedAccountPermission to update the permissions of a shared account.
       *
       * @param request UpdateSharedAccountPermissionRequest
       * @return UpdateSharedAccountPermissionResponse
       */
      Models::UpdateSharedAccountPermissionResponse updateSharedAccountPermission(const Models::UpdateSharedAccountPermissionRequest &request);

      /**
       * @summary You can call the UpdateSupplierInformation operation to update supplier information.
       *
       * @param request UpdateSupplierInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSupplierInformationResponse
       */
      Models::UpdateSupplierInformationResponse updateSupplierInformationWithOptions(const Models::UpdateSupplierInformationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UpdateSupplierInformation operation to update supplier information.
       *
       * @param request UpdateSupplierInformationRequest
       * @return UpdateSupplierInformationResponse
       */
      Models::UpdateSupplierInformationResponse updateSupplierInformation(const Models::UpdateSupplierInformationRequest &request);

      /**
       * @summary The UpgradeServiceInstance operation upgrades a service instance based on parameters such as the region ID and service version.
       *
       * @param tmpReq UpgradeServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeServiceInstanceResponse
       */
      Models::UpgradeServiceInstanceResponse upgradeServiceInstanceWithOptions(const Models::UpgradeServiceInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The UpgradeServiceInstance operation upgrades a service instance based on parameters such as the region ID and service version.
       *
       * @param request UpgradeServiceInstanceRequest
       * @return UpgradeServiceInstanceResponse
       */
      Models::UpgradeServiceInstanceResponse upgradeServiceInstance(const Models::UpgradeServiceInstanceRequest &request);

      /**
       * @summary Unpublishes a service version.
       *
       * @param request WithdrawServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawServiceResponse
       */
      Models::WithdrawServiceResponse withdrawServiceWithOptions(const Models::WithdrawServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unpublishes a service version.
       *
       * @param request WithdrawServiceRequest
       * @return WithdrawServiceResponse
       */
      Models::WithdrawServiceResponse withdrawService(const Models::WithdrawServiceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
