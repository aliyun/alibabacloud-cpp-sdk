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
       * @summary Adds a shared account of a service.
       *
       * @param request AddServiceSharedAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddServiceSharedAccountsResponse
       */
      Models::AddServiceSharedAccountsResponse addServiceSharedAccountsWithOptions(const Models::AddServiceSharedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a shared account of a service.
       *
       * @param request AddServiceSharedAccountsRequest
       * @return AddServiceSharedAccountsResponse
       */
      Models::AddServiceSharedAccountsResponse addServiceSharedAccounts(const Models::AddServiceSharedAccountsRequest &request);

      /**
       * @summary Merchant uses service request
       *
       * @param request ApproveServiceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApproveServiceUsageResponse
       */
      Models::ApproveServiceUsageResponse approveServiceUsageWithOptions(const Models::ApproveServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Merchant uses service request
       *
       * @param request ApproveServiceUsageRequest
       * @return ApproveServiceUsageResponse
       */
      Models::ApproveServiceUsageResponse approveServiceUsage(const Models::ApproveServiceUsageRequest &request);

      /**
       * @summary Cancel service registration.
       *
       * @description Only service registration in the Submitted status can be canceled.
       *
       * @param request CancelServiceRegistrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelServiceRegistrationResponse
       */
      Models::CancelServiceRegistrationResponse cancelServiceRegistrationWithOptions(const Models::CancelServiceRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancel service registration.
       *
       * @description Only service registration in the Submitted status can be canceled.
       *
       * @param request CancelServiceRegistrationRequest
       * @return CancelServiceRegistrationResponse
       */
      Models::CancelServiceRegistrationResponse cancelServiceRegistration(const Models::CancelServiceRegistrationRequest &request);

      /**
       * @summary Redeploys a service instance after the service instance failed to be deployed.
       *
       * @param request ContinueDeployServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinueDeployServiceInstanceResponse
       */
      Models::ContinueDeployServiceInstanceResponse continueDeployServiceInstanceWithOptions(const Models::ContinueDeployServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Redeploys a service instance after the service instance failed to be deployed.
       *
       * @param request ContinueDeployServiceInstanceRequest
       * @return ContinueDeployServiceInstanceResponse
       */
      Models::ContinueDeployServiceInstanceResponse continueDeployServiceInstance(const Models::ContinueDeployServiceInstanceRequest &request);

      /**
       * @summary Creates a deployment package.
       *
       * @param tmpReq CreateArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateArtifactResponse
       */
      Models::CreateArtifactResponse createArtifactWithOptions(const Models::CreateArtifactRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a deployment package.
       *
       * @param request CreateArtifactRequest
       * @return CreateArtifactResponse
       */
      Models::CreateArtifactResponse createArtifact(const Models::CreateArtifactRequest &request);

      /**
       * @summary Creates a service.
       *
       * @param tmpReq CreateServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createServiceWithOptions(const Models::CreateServiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service.
       *
       * @param request CreateServiceRequest
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createService(const Models::CreateServiceRequest &request);

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
       * @summary Create service test case.
       *
       * @param request CreateServiceTestCaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceTestCaseResponse
       */
      Models::CreateServiceTestCaseResponse createServiceTestCaseWithOptions(const Models::CreateServiceTestCaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create service test case.
       *
       * @param request CreateServiceTestCaseRequest
       * @return CreateServiceTestCaseResponse
       */
      Models::CreateServiceTestCaseResponse createServiceTestCase(const Models::CreateServiceTestCaseRequest &request);

      /**
       * @summary Create service test task
       *
       * @param request CreateServiceTestTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceTestTaskResponse
       */
      Models::CreateServiceTestTaskResponse createServiceTestTaskWithOptions(const Models::CreateServiceTestTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create service test task
       *
       * @param request CreateServiceTestTaskRequest
       * @return CreateServiceTestTaskResponse
       */
      Models::CreateServiceTestTaskResponse createServiceTestTask(const Models::CreateServiceTestTaskRequest &request);

      /**
       * @summary Create  Service resell application.
       *
       * @param request CreateServiceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceUsageResponse
       */
      Models::CreateServiceUsageResponse createServiceUsageWithOptions(const Models::CreateServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create  Service resell application.
       *
       * @param request CreateServiceUsageRequest
       * @return CreateServiceUsageResponse
       */
      Models::CreateServiceUsageResponse createServiceUsage(const Models::CreateServiceUsageRequest &request);

      /**
       * @summary 注册成为服务商
       *
       * @param request CreateSupplierRegistrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSupplierRegistrationResponse
       */
      Models::CreateSupplierRegistrationResponse createSupplierRegistrationWithOptions(const Models::CreateSupplierRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 注册成为服务商
       *
       * @param request CreateSupplierRegistrationRequest
       * @return CreateSupplierRegistrationResponse
       */
      Models::CreateSupplierRegistrationResponse createSupplierRegistration(const Models::CreateSupplierRegistrationRequest &request);

      /**
       * @summary 删除Acr镜像仓库
       *
       * @param request DeleteAcrImageRepositoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAcrImageRepositoriesResponse
       */
      Models::DeleteAcrImageRepositoriesResponse deleteAcrImageRepositoriesWithOptions(const Models::DeleteAcrImageRepositoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Acr镜像仓库
       *
       * @param request DeleteAcrImageRepositoriesRequest
       * @return DeleteAcrImageRepositoriesResponse
       */
      Models::DeleteAcrImageRepositoriesResponse deleteAcrImageRepositories(const Models::DeleteAcrImageRepositoriesRequest &request);

      /**
       * @summary 删除Acr容器镜像版本
       *
       * @param request DeleteAcrImageTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAcrImageTagsResponse
       */
      Models::DeleteAcrImageTagsResponse deleteAcrImageTagsWithOptions(const Models::DeleteAcrImageTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Acr容器镜像版本
       *
       * @param request DeleteAcrImageTagsRequest
       * @return DeleteAcrImageTagsResponse
       */
      Models::DeleteAcrImageTagsResponse deleteAcrImageTags(const Models::DeleteAcrImageTagsRequest &request);

      /**
       * @summary Deletes an artifact.
       *
       * @param request DeleteArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteArtifactResponse
       */
      Models::DeleteArtifactResponse deleteArtifactWithOptions(const Models::DeleteArtifactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an artifact.
       *
       * @param request DeleteArtifactRequest
       * @return DeleteArtifactResponse
       */
      Models::DeleteArtifactResponse deleteArtifact(const Models::DeleteArtifactRequest &request);

      /**
       * @summary Deletes a service.
       *
       * @param request DeleteServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteServiceWithOptions(const Models::DeleteServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service.
       *
       * @param request DeleteServiceRequest
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteService(const Models::DeleteServiceRequest &request);

      /**
       * @summary Deletes a service instance.
       *
       * @param request DeleteServiceInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceInstancesResponse
       */
      Models::DeleteServiceInstancesResponse deleteServiceInstancesWithOptions(const Models::DeleteServiceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service instance.
       *
       * @param request DeleteServiceInstancesRequest
       * @return DeleteServiceInstancesResponse
       */
      Models::DeleteServiceInstancesResponse deleteServiceInstances(const Models::DeleteServiceInstancesRequest &request);

      /**
       * @summary Delete service test configuration
       *
       * @param request DeleteServiceTestCaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceTestCaseResponse
       */
      Models::DeleteServiceTestCaseResponse deleteServiceTestCaseWithOptions(const Models::DeleteServiceTestCaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete service test configuration
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
       * @summary 生成默认服务测试配置
       *
       * @param request GenerateDefaultServiceTestConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDefaultServiceTestConfigResponse
       */
      Models::GenerateDefaultServiceTestConfigResponse generateDefaultServiceTestConfigWithOptions(const Models::GenerateDefaultServiceTestConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成默认服务测试配置
       *
       * @param request GenerateDefaultServiceTestConfigRequest
       * @return GenerateDefaultServiceTestConfigResponse
       */
      Models::GenerateDefaultServiceTestConfigResponse generateDefaultServiceTestConfig(const Models::GenerateDefaultServiceTestConfigRequest &request);

      /**
       * @summary 生成并校验服务创建stack所需要
       *
       * @param request GenerateServicePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateServicePolicyResponse
       */
      Models::GenerateServicePolicyResponse generateServicePolicyWithOptions(const Models::GenerateServicePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成并校验服务创建stack所需要
       *
       * @param request GenerateServicePolicyRequest
       * @return GenerateServicePolicyResponse
       */
      Models::GenerateServicePolicyResponse generateServicePolicy(const Models::GenerateServicePolicyRequest &request);

      /**
       * @summary Queries the information about a deployment package.
       *
       * @param request GetArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactResponse
       */
      Models::GetArtifactResponse getArtifactWithOptions(const Models::GetArtifactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a deployment package.
       *
       * @param request GetArtifactRequest
       * @return GetArtifactResponse
       */
      Models::GetArtifactResponse getArtifact(const Models::GetArtifactRequest &request);

      /**
       * @summary Queries the credentials that are required to upload a deployment package.
       *
       * @param request GetArtifactRepositoryCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactRepositoryCredentialsResponse
       */
      Models::GetArtifactRepositoryCredentialsResponse getArtifactRepositoryCredentialsWithOptions(const Models::GetArtifactRepositoryCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the credentials that are required to upload a deployment package.
       *
       * @param request GetArtifactRepositoryCredentialsRequest
       * @return GetArtifactRepositoryCredentialsResponse
       */
      Models::GetArtifactRepositoryCredentialsResponse getArtifactRepositoryCredentials(const Models::GetArtifactRepositoryCredentialsRequest &request);

      /**
       * @summary 根据地域参数获取地域可用区列表
       *
       * @param request GetNetworkAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkAvailableZonesResponse
       */
      Models::GetNetworkAvailableZonesResponse getNetworkAvailableZonesWithOptions(const Models::GetNetworkAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据地域参数获取地域可用区列表
       *
       * @param request GetNetworkAvailableZonesRequest
       * @return GetNetworkAvailableZonesResponse
       */
      Models::GetNetworkAvailableZonesResponse getNetworkAvailableZones(const Models::GetNetworkAvailableZonesRequest &request);

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
       * @summary Queries the information about a service instance.
       *
       * @param request GetServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceInstanceResponse
       */
      Models::GetServiceInstanceResponse getServiceInstanceWithOptions(const Models::GetServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a service instance.
       *
       * @param request GetServiceInstanceRequest
       * @return GetServiceInstanceResponse
       */
      Models::GetServiceInstanceResponse getServiceInstance(const Models::GetServiceInstanceRequest &request);

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
       * @summary Get service registration detail.
       *
       * @param request GetServiceRegistrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceRegistrationResponse
       */
      Models::GetServiceRegistrationResponse getServiceRegistrationWithOptions(const Models::GetServiceRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get service registration detail.
       *
       * @param request GetServiceRegistrationRequest
       * @return GetServiceRegistrationResponse
       */
      Models::GetServiceRegistrationResponse getServiceRegistration(const Models::GetServiceRegistrationRequest &request);

      /**
       * @summary 查询服务模板存在的规范问题
       *
       * @param request GetServiceTemplateCriterionIssuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceTemplateCriterionIssuesResponse
       */
      Models::GetServiceTemplateCriterionIssuesResponse getServiceTemplateCriterionIssuesWithOptions(const Models::GetServiceTemplateCriterionIssuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务模板存在的规范问题
       *
       * @param request GetServiceTemplateCriterionIssuesRequest
       * @return GetServiceTemplateCriterionIssuesResponse
       */
      Models::GetServiceTemplateCriterionIssuesResponse getServiceTemplateCriterionIssues(const Models::GetServiceTemplateCriterionIssuesRequest &request);

      /**
       * @summary Queries the valid values of parameters in a Resource Orchestration Service (ROS) template.
       *
       * @param request GetServiceTemplateParameterConstraintsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceTemplateParameterConstraintsResponse
       */
      Models::GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraintsWithOptions(const Models::GetServiceTemplateParameterConstraintsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the valid values of parameters in a Resource Orchestration Service (ROS) template.
       *
       * @param request GetServiceTemplateParameterConstraintsRequest
       * @return GetServiceTemplateParameterConstraintsResponse
       */
      Models::GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraints(const Models::GetServiceTemplateParameterConstraintsRequest &request);

      /**
       * @summary Get the execution status of Cases in the service test task
       *
       * @param request GetServiceTestTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceTestTaskResponse
       */
      Models::GetServiceTestTaskResponse getServiceTestTaskWithOptions(const Models::GetServiceTestTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the execution status of Cases in the service test task
       *
       * @param request GetServiceTestTaskRequest
       * @return GetServiceTestTaskResponse
       */
      Models::GetServiceTestTaskResponse getServiceTestTask(const Models::GetServiceTestTaskRequest &request);

      /**
       * @summary Get service provider information
       *
       * @param request GetSupplierInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSupplierInformationResponse
       */
      Models::GetSupplierInformationResponse getSupplierInformationWithOptions(const Models::GetSupplierInformationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get service provider information
       *
       * @param request GetSupplierInformationRequest
       * @return GetSupplierInformationResponse
       */
      Models::GetSupplierInformationResponse getSupplierInformation(const Models::GetSupplierInformationRequest &request);

      /**
       * @summary Obtain the AccessKey pair of uploaded files.
       *
       * @param request GetUploadCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadCredentialsResponse
       */
      Models::GetUploadCredentialsResponse getUploadCredentialsWithOptions(const Models::GetUploadCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the AccessKey pair of uploaded files.
       *
       * @param request GetUploadCredentialsRequest
       * @return GetUploadCredentialsResponse
       */
      Models::GetUploadCredentialsResponse getUploadCredentials(const Models::GetUploadCredentialsRequest &request);

      /**
       * @summary Launch service
       *
       * @description 需要上线的服务必须为已通过审核的服务。
       *
       * @param request LaunchServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LaunchServiceResponse
       */
      Models::LaunchServiceResponse launchServiceWithOptions(const Models::LaunchServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Launch service
       *
       * @description 需要上线的服务必须为已通过审核的服务。
       *
       * @param request LaunchServiceRequest
       * @return LaunchServiceResponse
       */
      Models::LaunchServiceResponse launchService(const Models::LaunchServiceRequest &request);

      /**
       * @summary Queries a list of images uploaded to Container Registry.
       *
       * @param request ListAcrImageRepositoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAcrImageRepositoriesResponse
       */
      Models::ListAcrImageRepositoriesResponse listAcrImageRepositoriesWithOptions(const Models::ListAcrImageRepositoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of images uploaded to Container Registry.
       *
       * @param request ListAcrImageRepositoriesRequest
       * @return ListAcrImageRepositoriesResponse
       */
      Models::ListAcrImageRepositoriesResponse listAcrImageRepositories(const Models::ListAcrImageRepositoriesRequest &request);

      /**
       * @summary Queries the versions of images that are uploaded to the image repository.
       *
       * @param request ListAcrImageTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAcrImageTagsResponse
       */
      Models::ListAcrImageTagsResponse listAcrImageTagsWithOptions(const Models::ListAcrImageTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the versions of images that are uploaded to the image repository.
       *
       * @param request ListAcrImageTagsRequest
       * @return ListAcrImageTagsResponse
       */
      Models::ListAcrImageTagsResponse listAcrImageTags(const Models::ListAcrImageTagsRequest &request);

      /**
       * @summary 查询部署实例、升级以及应用的日志
       *
       * @param request ListArtifactBuildLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactBuildLogsResponse
       */
      Models::ListArtifactBuildLogsResponse listArtifactBuildLogsWithOptions(const Models::ListArtifactBuildLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询部署实例、升级以及应用的日志
       *
       * @param request ListArtifactBuildLogsRequest
       * @return ListArtifactBuildLogsResponse
       */
      Models::ListArtifactBuildLogsResponse listArtifactBuildLogs(const Models::ListArtifactBuildLogsRequest &request);

      /**
       * @summary Get the list of artifact security risks
       *
       * @param request ListArtifactRisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactRisksResponse
       */
      Models::ListArtifactRisksResponse listArtifactRisksWithOptions(const Models::ListArtifactRisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the list of artifact security risks
       *
       * @param request ListArtifactRisksRequest
       * @return ListArtifactRisksResponse
       */
      Models::ListArtifactRisksResponse listArtifactRisks(const Models::ListArtifactRisksRequest &request);

      /**
       * @summary Queries the version information about a deployment package.
       *
       * @param tmpReq ListArtifactVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactVersionsResponse
       */
      Models::ListArtifactVersionsResponse listArtifactVersionsWithOptions(const Models::ListArtifactVersionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the version information about a deployment package.
       *
       * @param request ListArtifactVersionsRequest
       * @return ListArtifactVersionsResponse
       */
      Models::ListArtifactVersionsResponse listArtifactVersions(const Models::ListArtifactVersionsRequest &request);

      /**
       * @summary Queries a list of deployment packages.
       *
       * @param request ListArtifactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactsResponse
       */
      Models::ListArtifactsResponse listArtifactsWithOptions(const Models::ListArtifactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of deployment packages.
       *
       * @param request ListArtifactsRequest
       * @return ListArtifactsResponse
       */
      Models::ListArtifactsResponse listArtifacts(const Models::ListArtifactsRequest &request);

      /**
       * @summary Paginated query of distributor information list
       *
       * @param request ListResellersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResellersResponse
       */
      Models::ListResellersResponse listResellersWithOptions(const Models::ListResellersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Paginated query of distributor information list
       *
       * @param request ListResellersRequest
       * @return ListResellersResponse
       */
      Models::ListResellersResponse listResellers(const Models::ListResellersRequest &request);

      /**
       * @summary 查询部署实例、升级以及应用的日志
       *
       * @param request ListServiceBuildLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceBuildLogsResponse
       */
      Models::ListServiceBuildLogsResponse listServiceBuildLogsWithOptions(const Models::ListServiceBuildLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询部署实例、升级以及应用的日志
       *
       * @param request ListServiceBuildLogsRequest
       * @return ListServiceBuildLogsResponse
       */
      Models::ListServiceBuildLogsResponse listServiceBuildLogs(const Models::ListServiceBuildLogsRequest &request);

      /**
       * @summary Display service instance bill
       *
       * @param request ListServiceInstanceBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceBillResponse
       */
      Models::ListServiceInstanceBillResponse listServiceInstanceBillWithOptions(const Models::ListServiceInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Display service instance bill
       *
       * @param request ListServiceInstanceBillRequest
       * @return ListServiceInstanceBillResponse
       */
      Models::ListServiceInstanceBillResponse listServiceInstanceBill(const Models::ListServiceInstanceBillRequest &request);

      /**
       * @summary Query service instance deployment details
       *
       * @param request ListServiceInstanceDeployDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceDeployDetailsResponse
       */
      Models::ListServiceInstanceDeployDetailsResponse listServiceInstanceDeployDetailsWithOptions(const Models::ListServiceInstanceDeployDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query service instance deployment details
       *
       * @param request ListServiceInstanceDeployDetailsRequest
       * @return ListServiceInstanceDeployDetailsResponse
       */
      Models::ListServiceInstanceDeployDetailsResponse listServiceInstanceDeployDetails(const Models::ListServiceInstanceDeployDetailsRequest &request);

      /**
       * @summary “Query logs at various levels, including service instance application, instance, and resource.”
       *
       * @param request ListServiceInstanceLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceLogsResponse
       */
      Models::ListServiceInstanceLogsResponse listServiceInstanceLogsWithOptions(const Models::ListServiceInstanceLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary “Query logs at various levels, including service instance application, instance, and resource.”
       *
       * @param request ListServiceInstanceLogsRequest
       * @return ListServiceInstanceLogsResponse
       */
      Models::ListServiceInstanceLogsResponse listServiceInstanceLogs(const Models::ListServiceInstanceLogsRequest &request);

      /**
       * @summary 查询服务实例资源
       *
       * @param request ListServiceInstanceResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceResourcesResponse
       */
      Models::ListServiceInstanceResourcesResponse listServiceInstanceResourcesWithOptions(const Models::ListServiceInstanceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务实例资源
       *
       * @param request ListServiceInstanceResourcesRequest
       * @return ListServiceInstanceResourcesResponse
       */
      Models::ListServiceInstanceResourcesResponse listServiceInstanceResources(const Models::ListServiceInstanceResourcesRequest &request);

      /**
       * @summary View the upgrade history of a service instance
       *
       * @param request ListServiceInstanceUpgradeHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceUpgradeHistoryResponse
       */
      Models::ListServiceInstanceUpgradeHistoryResponse listServiceInstanceUpgradeHistoryWithOptions(const Models::ListServiceInstanceUpgradeHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View the upgrade history of a service instance
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
       * @summary Query service registrations.
       *
       * @param request ListServiceRegistrationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceRegistrationsResponse
       */
      Models::ListServiceRegistrationsResponse listServiceRegistrationsWithOptions(const Models::ListServiceRegistrationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query service registrations.
       *
       * @param request ListServiceRegistrationsRequest
       * @return ListServiceRegistrationsResponse
       */
      Models::ListServiceRegistrationsResponse listServiceRegistrations(const Models::ListServiceRegistrationsRequest &request);

      /**
       * @summary 调用ListServiceSharedAccounts查看服务共享账号列表。
       *
       * @param request ListServiceSharedAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceSharedAccountsResponse
       */
      Models::ListServiceSharedAccountsResponse listServiceSharedAccountsWithOptions(const Models::ListServiceSharedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用ListServiceSharedAccounts查看服务共享账号列表。
       *
       * @param request ListServiceSharedAccountsRequest
       * @return ListServiceSharedAccountsResponse
       */
      Models::ListServiceSharedAccountsResponse listServiceSharedAccounts(const Models::ListServiceSharedAccountsRequest &request);

      /**
       * @summary Service test case list
       *
       * @param request ListServiceTestCasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceTestCasesResponse
       */
      Models::ListServiceTestCasesResponse listServiceTestCasesWithOptions(const Models::ListServiceTestCasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Service test case list
       *
       * @param request ListServiceTestCasesRequest
       * @return ListServiceTestCasesResponse
       */
      Models::ListServiceTestCasesResponse listServiceTestCases(const Models::ListServiceTestCasesRequest &request);

      /**
       * @summary Get service test real-time logs
       *
       * @param request ListServiceTestTaskLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceTestTaskLogsResponse
       */
      Models::ListServiceTestTaskLogsResponse listServiceTestTaskLogsWithOptions(const Models::ListServiceTestTaskLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get service test real-time logs
       *
       * @param request ListServiceTestTaskLogsRequest
       * @return ListServiceTestTaskLogsResponse
       */
      Models::ListServiceTestTaskLogsResponse listServiceTestTaskLogs(const Models::ListServiceTestTaskLogsRequest &request);

      /**
       * @summary 获取任务执行列表
       *
       * @param request ListServiceTestTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceTestTasksResponse
       */
      Models::ListServiceTestTasksResponse listServiceTestTasksWithOptions(const Models::ListServiceTestTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务执行列表
       *
       * @param request ListServiceTestTasksRequest
       * @return ListServiceTestTasksResponse
       */
      Models::ListServiceTestTasksResponse listServiceTestTasks(const Models::ListServiceTestTasksRequest &request);

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
       * @summary Query the list of service provider onboarding reviews
       *
       * @param request ListSupplierRegistrationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSupplierRegistrationsResponse
       */
      Models::ListSupplierRegistrationsResponse listSupplierRegistrationsWithOptions(const Models::ListSupplierRegistrationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of service provider onboarding reviews
       *
       * @param request ListSupplierRegistrationsRequest
       * @return ListSupplierRegistrationsResponse
       */
      Models::ListSupplierRegistrationsResponse listSupplierRegistrations(const Models::ListSupplierRegistrationsRequest &request);

      /**
       * @summary Query tag key list
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query tag key list
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary Query resource tags
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query resource tags
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Query tag value list
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query tag value list
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Modifies the resource information about a service instance.
       *
       * @param request ModifyServiceInstanceResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyServiceInstanceResourcesResponse
       */
      Models::ModifyServiceInstanceResourcesResponse modifyServiceInstanceResourcesWithOptions(const Models::ModifyServiceInstanceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource information about a service instance.
       *
       * @param request ModifyServiceInstanceResourcesRequest
       * @return ModifyServiceInstanceResourcesResponse
       */
      Models::ModifyServiceInstanceResourcesResponse modifyServiceInstanceResources(const Models::ModifyServiceInstanceResourcesRequest &request);

      /**
       * @summary Pre-release service
       *
       * @param request PreLaunchServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreLaunchServiceResponse
       */
      Models::PreLaunchServiceResponse preLaunchServiceWithOptions(const Models::PreLaunchServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pre-release service
       *
       * @param request PreLaunchServiceRequest
       * @return PreLaunchServiceResponse
       */
      Models::PreLaunchServiceResponse preLaunchService(const Models::PreLaunchServiceRequest &request);

      /**
       * @summary Pushes metering data of an Alibaba Cloud Marketplace commodity.
       *
       * @param request PushMeteringDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushMeteringDataResponse
       */
      Models::PushMeteringDataResponse pushMeteringDataWithOptions(const Models::PushMeteringDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pushes metering data of an Alibaba Cloud Marketplace commodity.
       *
       * @param request PushMeteringDataRequest
       * @return PushMeteringDataResponse
       */
      Models::PushMeteringDataResponse pushMeteringData(const Models::PushMeteringDataRequest &request);

      /**
       * @summary Registers an artifact.
       *
       * @param request RegisterServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterServiceResponse
       */
      Models::RegisterServiceResponse registerServiceWithOptions(const Models::RegisterServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers an artifact.
       *
       * @param request RegisterServiceRequest
       * @return RegisterServiceResponse
       */
      Models::RegisterServiceResponse registerService(const Models::RegisterServiceRequest &request);

      /**
       * @summary Reject service usage.
       *
       * @param request RejectServiceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectServiceUsageResponse
       */
      Models::RejectServiceUsageResponse rejectServiceUsageWithOptions(const Models::RejectServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reject service usage.
       *
       * @param request RejectServiceUsageRequest
       * @return RejectServiceUsageResponse
       */
      Models::RejectServiceUsageResponse rejectServiceUsage(const Models::RejectServiceUsageRequest &request);

      /**
       * @summary Publishes an artifact.
       *
       * @param request ReleaseArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseArtifactResponse
       */
      Models::ReleaseArtifactResponse releaseArtifactWithOptions(const Models::ReleaseArtifactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes an artifact.
       *
       * @param request ReleaseArtifactRequest
       * @return ReleaseArtifactResponse
       */
      Models::ReleaseArtifactResponse releaseArtifact(const Models::ReleaseArtifactRequest &request);

      /**
       * @summary Remove  service shared account.
       *
       * @param request RemoveServiceSharedAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveServiceSharedAccountsResponse
       */
      Models::RemoveServiceSharedAccountsResponse removeServiceSharedAccountsWithOptions(const Models::RemoveServiceSharedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Remove  service shared account.
       *
       * @param request RemoveServiceSharedAccountsRequest
       * @return RemoveServiceSharedAccountsResponse
       */
      Models::RemoveServiceSharedAccountsResponse removeServiceSharedAccounts(const Models::RemoveServiceSharedAccountsRequest &request);

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
       * @summary Rollback Service Instance
       *
       * @param request RollbackServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackServiceInstanceResponse
       */
      Models::RollbackServiceInstanceResponse rollbackServiceInstanceWithOptions(const Models::RollbackServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rollback Service Instance
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
       * @summary Tag a resource
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tag a resource
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Unbind resource from tag
       *
       * @param request UnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbind resource from tag
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary Updates a deployment package.
       *
       * @param tmpReq UpdateArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateArtifactResponse
       */
      Models::UpdateArtifactResponse updateArtifactWithOptions(const Models::UpdateArtifactRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a deployment package.
       *
       * @param request UpdateArtifactRequest
       * @return UpdateArtifactResponse
       */
      Models::UpdateArtifactResponse updateArtifact(const Models::UpdateArtifactRequest &request);

      /**
       * @summary Update a service.
       *
       * @param tmpReq UpdateServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateServiceWithOptions(const Models::UpdateServiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a service.
       *
       * @param request UpdateServiceRequest
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateService(const Models::UpdateServiceRequest &request);

      /**
       * @summary Updates the properties of a service instance.
       *
       * @param tmpReq UpdateServiceInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceInstanceAttributeResponse
       */
      Models::UpdateServiceInstanceAttributeResponse updateServiceInstanceAttributeWithOptions(const Models::UpdateServiceInstanceAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the properties of a service instance.
       *
       * @param request UpdateServiceInstanceAttributeRequest
       * @return UpdateServiceInstanceAttributeResponse
       */
      Models::UpdateServiceInstanceAttributeResponse updateServiceInstanceAttribute(const Models::UpdateServiceInstanceAttributeRequest &request);

      /**
       * @summary Updates the configurations of a service instance.
       *
       * @param tmpReq UpdateServiceInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceInstanceSpecResponse
       */
      Models::UpdateServiceInstanceSpecResponse updateServiceInstanceSpecWithOptions(const Models::UpdateServiceInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of a service instance.
       *
       * @param request UpdateServiceInstanceSpecRequest
       * @return UpdateServiceInstanceSpecResponse
       */
      Models::UpdateServiceInstanceSpecResponse updateServiceInstanceSpec(const Models::UpdateServiceInstanceSpecRequest &request);

      /**
       * @summary Modify Service Test Case
       *
       * @param request UpdateServiceTestCaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceTestCaseResponse
       */
      Models::UpdateServiceTestCaseResponse updateServiceTestCaseWithOptions(const Models::UpdateServiceTestCaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Service Test Case
       *
       * @param request UpdateServiceTestCaseRequest
       * @return UpdateServiceTestCaseResponse
       */
      Models::UpdateServiceTestCaseResponse updateServiceTestCase(const Models::UpdateServiceTestCaseRequest &request);

      /**
       * @summary Update Service Sharing Permissions
       *
       * @param request UpdateSharedAccountPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSharedAccountPermissionResponse
       */
      Models::UpdateSharedAccountPermissionResponse updateSharedAccountPermissionWithOptions(const Models::UpdateSharedAccountPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Service Sharing Permissions
       *
       * @param request UpdateSharedAccountPermissionRequest
       * @return UpdateSharedAccountPermissionResponse
       */
      Models::UpdateSharedAccountPermissionResponse updateSharedAccountPermission(const Models::UpdateSharedAccountPermissionRequest &request);

      /**
       * @summary Update the information of supplier.
       *
       * @param request UpdateSupplierInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSupplierInformationResponse
       */
      Models::UpdateSupplierInformationResponse updateSupplierInformationWithOptions(const Models::UpdateSupplierInformationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the information of supplier.
       *
       * @param request UpdateSupplierInformationRequest
       * @return UpdateSupplierInformationResponse
       */
      Models::UpdateSupplierInformationResponse updateSupplierInformation(const Models::UpdateSupplierInformationRequest &request);

      /**
       * @summary Upgrades a service instance.
       *
       * @param tmpReq UpgradeServiceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeServiceInstanceResponse
       */
      Models::UpgradeServiceInstanceResponse upgradeServiceInstanceWithOptions(const Models::UpgradeServiceInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a service instance.
       *
       * @param request UpgradeServiceInstanceRequest
       * @return UpgradeServiceInstanceResponse
       */
      Models::UpgradeServiceInstanceResponse upgradeServiceInstance(const Models::UpgradeServiceInstanceRequest &request);

      /**
       * @summary Withdraw service version.
       *
       * @param request WithdrawServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawServiceResponse
       */
      Models::WithdrawServiceResponse withdrawServiceWithOptions(const Models::WithdrawServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Withdraw service version.
       *
       * @param request WithdrawServiceRequest
       * @return WithdrawServiceResponse
       */
      Models::WithdrawServiceResponse withdrawService(const Models::WithdrawServiceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
