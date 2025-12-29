// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_OOS20190601_HPP_
#define ALIBABACLOUD_OOS20190601_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Oos20190601Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Oos20190601.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 分析仓库
       *
       * @param request AnalyzeGitRepositoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnalyzeGitRepositoryResponse
       */
      Models::AnalyzeGitRepositoryResponse analyzeGitRepositoryWithOptions(const Models::AnalyzeGitRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分析仓库
       *
       * @param request AnalyzeGitRepositoryRequest
       * @return AnalyzeGitRepositoryResponse
       */
      Models::AnalyzeGitRepositoryResponse analyzeGitRepository(const Models::AnalyzeGitRepositoryRequest &request);

      /**
       * @summary Cancels an execution.
       *
       * @param request CancelExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelExecutionResponse
       */
      Models::CancelExecutionResponse cancelExecutionWithOptions(const Models::CancelExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an execution.
       *
       * @param request CancelExecutionRequest
       * @return CancelExecutionResponse
       */
      Models::CancelExecutionResponse cancelExecution(const Models::CancelExecutionRequest &request);

      /**
       * @summary Modifies the resource group to which a cloud resource belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group to which a cloud resource belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary 检测仓库中文件是否存在
       *
       * @param request CheckGitRepoFileExistsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckGitRepoFileExistsResponse
       */
      Models::CheckGitRepoFileExistsResponse checkGitRepoFileExistsWithOptions(const Models::CheckGitRepoFileExistsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检测仓库中文件是否存在
       *
       * @param request CheckGitRepoFileExistsRequest
       * @return CheckGitRepoFileExistsResponse
       */
      Models::CheckGitRepoFileExistsResponse checkGitRepoFileExists(const Models::CheckGitRepoFileExistsRequest &request);

      /**
       * @summary 检测仓库是否存在
       *
       * @param request CheckGitRepositoryExistsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckGitRepositoryExistsResponse
       */
      Models::CheckGitRepositoryExistsResponse checkGitRepositoryExistsWithOptions(const Models::CheckGitRepositoryExistsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检测仓库是否存在
       *
       * @param request CheckGitRepositoryExistsRequest
       * @return CheckGitRepositoryExistsResponse
       */
      Models::CheckGitRepositoryExistsResponse checkGitRepositoryExists(const Models::CheckGitRepositoryExistsRequest &request);

      /**
       * @summary Continues deploying an application group when an error occurs for calling the DeployApplicationGroup operation. You can call this operation only for the applications which reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request ContinueDeployApplicationGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinueDeployApplicationGroupResponse
       */
      Models::ContinueDeployApplicationGroupResponse continueDeployApplicationGroupWithOptions(const Models::ContinueDeployApplicationGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Continues deploying an application group when an error occurs for calling the DeployApplicationGroup operation. You can call this operation only for the applications which reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request ContinueDeployApplicationGroupRequest
       * @return ContinueDeployApplicationGroupResponse
       */
      Models::ContinueDeployApplicationGroupResponse continueDeployApplicationGroup(const Models::ContinueDeployApplicationGroupRequest &request);

      /**
       * @summary Creates an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param tmpReq CreateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplicationWithOptions(const Models::CreateApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request CreateApplicationRequest
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplication(const Models::CreateApplicationRequest &request);

      /**
       * @summary Creates an application group. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request CreateApplicationGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationGroupResponse
       */
      Models::CreateApplicationGroupResponse createApplicationGroupWithOptions(const Models::CreateApplicationGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application group. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request CreateApplicationGroupRequest
       * @return CreateApplicationGroupResponse
       */
      Models::CreateApplicationGroupResponse createApplicationGroup(const Models::CreateApplicationGroupRequest &request);

      /**
       * @summary 创建仓库
       *
       * @param request CreateGitRepositoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGitRepositoryResponse
       */
      Models::CreateGitRepositoryResponse createGitRepositoryWithOptions(const Models::CreateGitRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建仓库
       *
       * @param request CreateGitRepositoryRequest
       * @return CreateGitRepositoryResponse
       */
      Models::CreateGitRepositoryResponse createGitRepository(const Models::CreateGitRepositoryRequest &request);

      /**
       * @summary Creates an O\\\\\\\\\\\\&M Item.
       *
       * @param tmpReq CreateOpsItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOpsItemResponse
       */
      Models::CreateOpsItemResponse createOpsItemWithOptions(const Models::CreateOpsItemRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an O\\\\\\\\\\\\&M Item.
       *
       * @param request CreateOpsItemRequest
       * @return CreateOpsItemResponse
       */
      Models::CreateOpsItemResponse createOpsItem(const Models::CreateOpsItemRequest &request);

      /**
       * @summary Creates a common parameter.
       *
       * @param tmpReq CreateParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParameterResponse
       */
      Models::CreateParameterResponse createParameterWithOptions(const Models::CreateParameterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a common parameter.
       *
       * @param request CreateParameterRequest
       * @return CreateParameterResponse
       */
      Models::CreateParameterResponse createParameter(const Models::CreateParameterRequest &request);

      /**
       * @summary Creates a patch baseline.
       *
       * @param tmpReq CreatePatchBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePatchBaselineResponse
       */
      Models::CreatePatchBaselineResponse createPatchBaselineWithOptions(const Models::CreatePatchBaselineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a patch baseline.
       *
       * @param request CreatePatchBaselineRequest
       * @return CreatePatchBaselineResponse
       */
      Models::CreatePatchBaselineResponse createPatchBaseline(const Models::CreatePatchBaselineRequest &request);

      /**
       * @summary Creates an encryption parameter. Make sure that you have the permissions to call this operation.
       *
       * @param tmpReq CreateSecretParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecretParameterResponse
       */
      Models::CreateSecretParameterResponse createSecretParameterWithOptions(const Models::CreateSecretParameterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an encryption parameter. Make sure that you have the permissions to call this operation.
       *
       * @param request CreateSecretParameterRequest
       * @return CreateSecretParameterResponse
       */
      Models::CreateSecretParameterResponse createSecretParameter(const Models::CreateSecretParameterRequest &request);

      /**
       * @summary Creates a desired-state configuration.
       *
       * @param tmpReq CreateStateConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStateConfigurationResponse
       */
      Models::CreateStateConfigurationResponse createStateConfigurationWithOptions(const Models::CreateStateConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a desired-state configuration.
       *
       * @param request CreateStateConfigurationRequest
       * @return CreateStateConfigurationResponse
       */
      Models::CreateStateConfigurationResponse createStateConfiguration(const Models::CreateStateConfigurationRequest &request);

      /**
       * @summary Creates a template.
       *
       * @param tmpReq CreateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const Models::CreateTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a template.
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

      /**
       * @summary Deletes an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request DeleteApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplicationWithOptions(const Models::DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request DeleteApplicationRequest
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplication(const Models::DeleteApplicationRequest &request);

      /**
       * @summary Deletes an application group. You can call this operation only for the application groups which reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request DeleteApplicationGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationGroupResponse
       */
      Models::DeleteApplicationGroupResponse deleteApplicationGroupWithOptions(const Models::DeleteApplicationGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application group. You can call this operation only for the application groups which reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request DeleteApplicationGroupRequest
       * @return DeleteApplicationGroupResponse
       */
      Models::DeleteApplicationGroupResponse deleteApplicationGroup(const Models::DeleteApplicationGroupRequest &request);

      /**
       * @summary Deletes multiple executions.
       *
       * @param request DeleteExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExecutionsResponse
       */
      Models::DeleteExecutionsResponse deleteExecutionsWithOptions(const Models::DeleteExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple executions.
       *
       * @param request DeleteExecutionsRequest
       * @return DeleteExecutionsResponse
       */
      Models::DeleteExecutionsResponse deleteExecutions(const Models::DeleteExecutionsRequest &request);

      /**
       * @summary Deletes O\\\\\\&M Items.
       *
       * @param request DeleteOpsItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOpsItemsResponse
       */
      Models::DeleteOpsItemsResponse deleteOpsItemsWithOptions(const Models::DeleteOpsItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes O\\\\\\&M Items.
       *
       * @param request DeleteOpsItemsRequest
       * @return DeleteOpsItemsResponse
       */
      Models::DeleteOpsItemsResponse deleteOpsItems(const Models::DeleteOpsItemsRequest &request);

      /**
       * @summary Deletes a common parameter.
       *
       * @param request DeleteParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParameterResponse
       */
      Models::DeleteParameterResponse deleteParameterWithOptions(const Models::DeleteParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a common parameter.
       *
       * @param request DeleteParameterRequest
       * @return DeleteParameterResponse
       */
      Models::DeleteParameterResponse deleteParameter(const Models::DeleteParameterRequest &request);

      /**
       * @summary Deletes a patch baseline.
       *
       * @param request DeletePatchBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePatchBaselineResponse
       */
      Models::DeletePatchBaselineResponse deletePatchBaselineWithOptions(const Models::DeletePatchBaselineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a patch baseline.
       *
       * @param request DeletePatchBaselineRequest
       * @return DeletePatchBaselineResponse
       */
      Models::DeletePatchBaselineResponse deletePatchBaseline(const Models::DeletePatchBaselineRequest &request);

      /**
       * @summary Deletes an encryption parameter. Make sure that you have the permissions to call the DeleteSecret operation before you call this operation.
       *
       * @param request DeleteSecretParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretParameterResponse
       */
      Models::DeleteSecretParameterResponse deleteSecretParameterWithOptions(const Models::DeleteSecretParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an encryption parameter. Make sure that you have the permissions to call the DeleteSecret operation before you call this operation.
       *
       * @param request DeleteSecretParameterRequest
       * @return DeleteSecretParameterResponse
       */
      Models::DeleteSecretParameterResponse deleteSecretParameter(const Models::DeleteSecretParameterRequest &request);

      /**
       * @summary Deletes multiple desired-state configurations at a time.
       *
       * @param request DeleteStateConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStateConfigurationsResponse
       */
      Models::DeleteStateConfigurationsResponse deleteStateConfigurationsWithOptions(const Models::DeleteStateConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple desired-state configurations at a time.
       *
       * @param request DeleteStateConfigurationsRequest
       * @return DeleteStateConfigurationsResponse
       */
      Models::DeleteStateConfigurationsResponse deleteStateConfigurations(const Models::DeleteStateConfigurationsRequest &request);

      /**
       * @summary Deletes a template.
       *
       * @param request DeleteTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const Models::DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a template.
       *
       * @param request DeleteTemplateRequest
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplate(const Models::DeleteTemplateRequest &request);

      /**
       * @summary Deletes multiple templates.
       *
       * @param request DeleteTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplatesResponse
       */
      Models::DeleteTemplatesResponse deleteTemplatesWithOptions(const Models::DeleteTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple templates.
       *
       * @param request DeleteTemplatesRequest
       * @return DeleteTemplatesResponse
       */
      Models::DeleteTemplatesResponse deleteTemplates(const Models::DeleteTemplatesRequest &request);

      /**
       * @summary Deploys an application group. You can call this operation only for the applications which reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request DeployApplicationGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployApplicationGroupResponse
       */
      Models::DeployApplicationGroupResponse deployApplicationGroupWithOptions(const Models::DeployApplicationGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys an application group. You can call this operation only for the applications which reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request DeployApplicationGroupRequest
       * @return DeployApplicationGroupResponse
       */
      Models::DeployApplicationGroupResponse deployApplicationGroup(const Models::DeployApplicationGroupRequest &request);

      /**
       * @summary 查询应用分组资源成本
       *
       * @param request DescribeApplicationGroupBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationGroupBillResponse
       */
      Models::DescribeApplicationGroupBillResponse describeApplicationGroupBillWithOptions(const Models::DescribeApplicationGroupBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询应用分组资源成本
       *
       * @param request DescribeApplicationGroupBillRequest
       * @return DescribeApplicationGroupBillResponse
       */
      Models::DescribeApplicationGroupBillResponse describeApplicationGroupBill(const Models::DescribeApplicationGroupBillRequest &request);

      /**
       * @summary Queries supported regions.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries supported regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the Resource Access Management (RAM) policy required for template execution.
       *
       * @param request GenerateExecutionPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateExecutionPolicyResponse
       */
      Models::GenerateExecutionPolicyResponse generateExecutionPolicyWithOptions(const Models::GenerateExecutionPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Resource Access Management (RAM) policy required for template execution.
       *
       * @param request GenerateExecutionPolicyRequest
       * @return GenerateExecutionPolicyResponse
       */
      Models::GenerateExecutionPolicyResponse generateExecutionPolicy(const Models::GenerateExecutionPolicyRequest &request);

      /**
       * @summary Generates an O\\\\\\&M item.
       *
       * @param request GenerateOpsItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateOpsItemResponse
       */
      Models::GenerateOpsItemResponse generateOpsItemWithOptions(const Models::GenerateOpsItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates an O\\\\\\&M item.
       *
       * @param request GenerateOpsItemRequest
       * @return GenerateOpsItemResponse
       */
      Models::GenerateOpsItemResponse generateOpsItem(const Models::GenerateOpsItemRequest &request);

      /**
       * @summary Queries the information of an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request GetApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplicationWithOptions(const Models::GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request GetApplicationRequest
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplication(const Models::GetApplicationRequest &request);

      /**
       * @summary Queries the information about an application group. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request GetApplicationGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationGroupResponse
       */
      Models::GetApplicationGroupResponse getApplicationGroupWithOptions(const Models::GetApplicationGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an application group. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request GetApplicationGroupRequest
       * @return GetApplicationGroupResponse
       */
      Models::GetApplicationGroupResponse getApplicationGroup(const Models::GetApplicationGroupRequest &request);

      /**
       * @summary Queries the information about the template of an execution, including the content of the template.
       *
       * @param request GetExecutionTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExecutionTemplateResponse
       */
      Models::GetExecutionTemplateResponse getExecutionTemplateWithOptions(const Models::GetExecutionTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the template of an execution, including the content of the template.
       *
       * @param request GetExecutionTemplateRequest
       * @return GetExecutionTemplateResponse
       */
      Models::GetExecutionTemplateResponse getExecutionTemplate(const Models::GetExecutionTemplateRequest &request);

      /**
       * @summary 查询Git分支详情
       *
       * @param request GetGitBranchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGitBranchResponse
       */
      Models::GetGitBranchResponse getGitBranchWithOptions(const Models::GetGitBranchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Git分支详情
       *
       * @param request GetGitBranchRequest
       * @return GetGitBranchResponse
       */
      Models::GetGitBranchResponse getGitBranch(const Models::GetGitBranchRequest &request);

      /**
       * @summary 查询Git仓库详情
       *
       * @param request GetGitRepositoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGitRepositoryResponse
       */
      Models::GetGitRepositoryResponse getGitRepositoryWithOptions(const Models::GetGitRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Git仓库详情
       *
       * @param request GetGitRepositoryRequest
       * @return GetGitRepositoryResponse
       */
      Models::GetGitRepositoryResponse getGitRepository(const Models::GetGitRepositoryRequest &request);

      /**
       * @summary Queries the properties of a configuration list.
       *
       * @param request GetInventorySchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInventorySchemaResponse
       */
      Models::GetInventorySchemaResponse getInventorySchemaWithOptions(const Models::GetInventorySchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the properties of a configuration list.
       *
       * @param request GetInventorySchemaRequest
       * @return GetInventorySchemaResponse
       */
      Models::GetInventorySchemaResponse getInventorySchema(const Models::GetInventorySchemaRequest &request);

      /**
       * @summary Queries the details of an O\\\\\\\\\\\\&M item.
       *
       * @param request GetOpsItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpsItemResponse
       */
      Models::GetOpsItemResponse getOpsItemWithOptions(const Models::GetOpsItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an O\\\\\\\\\\\\&M item.
       *
       * @param request GetOpsItemRequest
       * @return GetOpsItemResponse
       */
      Models::GetOpsItemResponse getOpsItem(const Models::GetOpsItemRequest &request);

      /**
       * @summary Queries a common parameter and its value.
       *
       * @param request GetParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetParameterResponse
       */
      Models::GetParameterResponse getParameterWithOptions(const Models::GetParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a common parameter and its value.
       *
       * @param request GetParameterRequest
       * @return GetParameterResponse
       */
      Models::GetParameterResponse getParameter(const Models::GetParameterRequest &request);

      /**
       * @summary Queries the information about one or more parameters.
       *
       * @param request GetParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetParametersResponse
       */
      Models::GetParametersResponse getParametersWithOptions(const Models::GetParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about one or more parameters.
       *
       * @param request GetParametersRequest
       * @return GetParametersResponse
       */
      Models::GetParametersResponse getParameters(const Models::GetParametersRequest &request);

      /**
       * @summary Queries one or more parameters by path.
       *
       * @param request GetParametersByPathRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetParametersByPathResponse
       */
      Models::GetParametersByPathResponse getParametersByPathWithOptions(const Models::GetParametersByPathRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more parameters by path.
       *
       * @param request GetParametersByPathRequest
       * @return GetParametersByPathResponse
       */
      Models::GetParametersByPathResponse getParametersByPath(const Models::GetParametersByPathRequest &request);

      /**
       * @summary Queries the information of a patch baseline.
       *
       * @param request GetPatchBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPatchBaselineResponse
       */
      Models::GetPatchBaselineResponse getPatchBaselineWithOptions(const Models::GetPatchBaselineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a patch baseline.
       *
       * @param request GetPatchBaselineRequest
       * @return GetPatchBaselineResponse
       */
      Models::GetPatchBaselineResponse getPatchBaseline(const Models::GetPatchBaselineRequest &request);

      /**
       * @summary Queries the information about an encryption parameter, including the parameter value. Make sure that you have the permissions to call the GetSecretValue operation before you call this operation.
       *
       * @param request GetSecretParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecretParameterResponse
       */
      Models::GetSecretParameterResponse getSecretParameterWithOptions(const Models::GetSecretParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an encryption parameter, including the parameter value. Make sure that you have the permissions to call the GetSecretValue operation before you call this operation.
       *
       * @param request GetSecretParameterRequest
       * @return GetSecretParameterResponse
       */
      Models::GetSecretParameterResponse getSecretParameter(const Models::GetSecretParameterRequest &request);

      /**
       * @summary Queries the information about one or more encryption parameters. Make sure that you have the permissions to call the GetSecretValue operation before you call this operation.
       *
       * @param request GetSecretParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecretParametersResponse
       */
      Models::GetSecretParametersResponse getSecretParametersWithOptions(const Models::GetSecretParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about one or more encryption parameters. Make sure that you have the permissions to call the GetSecretValue operation before you call this operation.
       *
       * @param request GetSecretParametersRequest
       * @return GetSecretParametersResponse
       */
      Models::GetSecretParametersResponse getSecretParameters(const Models::GetSecretParametersRequest &request);

      /**
       * @summary Queries encryption parameters by path. Make sure that you have the permissions to call the GetSecretValue operation before you call this operation.
       *
       * @param request GetSecretParametersByPathRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecretParametersByPathResponse
       */
      Models::GetSecretParametersByPathResponse getSecretParametersByPathWithOptions(const Models::GetSecretParametersByPathRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries encryption parameters by path. Make sure that you have the permissions to call the GetSecretValue operation before you call this operation.
       *
       * @param request GetSecretParametersByPathRequest
       * @return GetSecretParametersByPathResponse
       */
      Models::GetSecretParametersByPathResponse getSecretParametersByPath(const Models::GetSecretParametersByPathRequest &request);

      /**
       * @summary Queries the settings of the delivery feature.
       *
       * @param request GetServiceSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceSettingsResponse
       */
      Models::GetServiceSettingsResponse getServiceSettingsWithOptions(const Models::GetServiceSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settings of the delivery feature.
       *
       * @param request GetServiceSettingsRequest
       * @return GetServiceSettingsResponse
       */
      Models::GetServiceSettingsResponse getServiceSettings(const Models::GetServiceSettingsRequest &request);

      /**
       * @summary Queries the information about a template, including the content of the template.
       *
       * @param request GetTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const Models::GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a template, including the content of the template.
       *
       * @param request GetTemplateRequest
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplate(const Models::GetTemplateRequest &request);

      /**
       * @summary 获取参数可用值
       *
       * @param request GetTemplateParameterConstraintsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateParameterConstraintsResponse
       */
      Models::GetTemplateParameterConstraintsResponse getTemplateParameterConstraintsWithOptions(const Models::GetTemplateParameterConstraintsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取参数可用值
       *
       * @param request GetTemplateParameterConstraintsRequest
       * @return GetTemplateParameterConstraintsResponse
       */
      Models::GetTemplateParameterConstraintsResponse getTemplateParameterConstraints(const Models::GetTemplateParameterConstraintsRequest &request);

      /**
       * @summary Queries the available actions, including atomic actions and cloud product actions.
       *
       * @param request ListActionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListActionsResponse
       */
      Models::ListActionsResponse listActionsWithOptions(const Models::ListActionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available actions, including atomic actions and cloud product actions.
       *
       * @param request ListActionsRequest
       * @return ListActionsResponse
       */
      Models::ListActionsResponse listActions(const Models::ListActionsRequest &request);

      /**
       * @summary Queries a list of application groups. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request ListApplicationGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationGroupsResponse
       */
      Models::ListApplicationGroupsResponse listApplicationGroupsWithOptions(const Models::ListApplicationGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of application groups. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request ListApplicationGroupsRequest
       * @return ListApplicationGroupsResponse
       */
      Models::ListApplicationGroupsResponse listApplicationGroups(const Models::ListApplicationGroupsRequest &request);

      /**
       * @summary Queries a list of applications. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param tmpReq ListApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplicationsWithOptions(const Models::ListApplicationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of applications. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request ListApplicationsRequest
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplications(const Models::ListApplicationsRequest &request);

      /**
       * @summary Queries the logs of an execution.
       *
       * @description ****
       *
       * @param request ListExecutionLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExecutionLogsResponse
       */
      Models::ListExecutionLogsResponse listExecutionLogsWithOptions(const Models::ListExecutionLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of an execution.
       *
       * @description ****
       *
       * @param request ListExecutionLogsRequest
       * @return ListExecutionLogsResponse
       */
      Models::ListExecutionLogsResponse listExecutionLogs(const Models::ListExecutionLogsRequest &request);

      /**
       * @summary Queries high-risk tasks in the execution of a template.
       *
       * @param request ListExecutionRiskyTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExecutionRiskyTasksResponse
       */
      Models::ListExecutionRiskyTasksResponse listExecutionRiskyTasksWithOptions(const Models::ListExecutionRiskyTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries high-risk tasks in the execution of a template.
       *
       * @param request ListExecutionRiskyTasksRequest
       * @return ListExecutionRiskyTasksResponse
       */
      Models::ListExecutionRiskyTasksResponse listExecutionRiskyTasks(const Models::ListExecutionRiskyTasksRequest &request);

      /**
       * @summary Queries executions. Multiple methods are supported to filter executions.
       *
       * @param tmpReq ListExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExecutionsResponse
       */
      Models::ListExecutionsResponse listExecutionsWithOptions(const Models::ListExecutionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries executions. Multiple methods are supported to filter executions.
       *
       * @param request ListExecutionsRequest
       * @return ListExecutionsResponse
       */
      Models::ListExecutionsResponse listExecutions(const Models::ListExecutionsRequest &request);

      /**
       * @summary 获取当前阿里云用户已授权在应用管理的托管平台账户
       *
       * @param request ListGitAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGitAccountsResponse
       */
      Models::ListGitAccountsResponse listGitAccountsWithOptions(const Models::ListGitAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取当前阿里云用户已授权在应用管理的托管平台账户
       *
       * @param request ListGitAccountsRequest
       * @return ListGitAccountsResponse
       */
      Models::ListGitAccountsResponse listGitAccounts(const Models::ListGitAccountsRequest &request);

      /**
       * @summary 获取指定Git仓库的所有分支
       *
       * @param request ListGitBranchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGitBranchesResponse
       */
      Models::ListGitBranchesResponse listGitBranchesWithOptions(const Models::ListGitBranchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定Git仓库的所有分支
       *
       * @param request ListGitBranchesRequest
       * @return ListGitBranchesResponse
       */
      Models::ListGitBranchesResponse listGitBranches(const Models::ListGitBranchesRequest &request);

      /**
       * @summary 获取已授权用户的组织
       *
       * @param request ListGitOrganizationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGitOrganizationsResponse
       */
      Models::ListGitOrganizationsResponse listGitOrganizationsWithOptions(const Models::ListGitOrganizationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取已授权用户的组织
       *
       * @param request ListGitOrganizationsRequest
       * @return ListGitOrganizationsResponse
       */
      Models::ListGitOrganizationsResponse listGitOrganizations(const Models::ListGitOrganizationsRequest &request);

      /**
       * @summary 查询Git仓库列表
       *
       * @param request ListGitRepositoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGitRepositoriesResponse
       */
      Models::ListGitRepositoriesResponse listGitRepositoriesWithOptions(const Models::ListGitRepositoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Git仓库列表
       *
       * @param request ListGitRepositoriesRequest
       * @return ListGitRepositoriesResponse
       */
      Models::ListGitRepositoriesResponse listGitRepositories(const Models::ListGitRepositoriesRequest &request);

      /**
       * @summary 获取仓库文件与目录信息
       *
       * @param request ListGitRepositoryContentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGitRepositoryContentsResponse
       */
      Models::ListGitRepositoryContentsResponse listGitRepositoryContentsWithOptions(const Models::ListGitRepositoryContentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取仓库文件与目录信息
       *
       * @param request ListGitRepositoryContentsRequest
       * @return ListGitRepositoryContentsResponse
       */
      Models::ListGitRepositoryContentsResponse listGitRepositoryContents(const Models::ListGitRepositoryContentsRequest &request);

      /**
       * @summary List Instance Package States
       *
       * @param request ListInstancePackageStatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancePackageStatesResponse
       */
      Models::ListInstancePackageStatesResponse listInstancePackageStatesWithOptions(const Models::ListInstancePackageStatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Instance Package States
       *
       * @param request ListInstancePackageStatesRequest
       * @return ListInstancePackageStatesResponse
       */
      Models::ListInstancePackageStatesResponse listInstancePackageStates(const Models::ListInstancePackageStatesRequest &request);

      /**
       * @summary Queries the information about the patches of an instance.
       *
       * @param request ListInstancePatchStatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancePatchStatesResponse
       */
      Models::ListInstancePatchStatesResponse listInstancePatchStatesWithOptions(const Models::ListInstancePatchStatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the patches of an instance.
       *
       * @param request ListInstancePatchStatesRequest
       * @return ListInstancePatchStatesResponse
       */
      Models::ListInstancePatchStatesResponse listInstancePatchStates(const Models::ListInstancePatchStatesRequest &request);

      /**
       * @summary Queries the information about the patches of an instance.
       *
       * @param request ListInstancePatchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancePatchesResponse
       */
      Models::ListInstancePatchesResponse listInstancePatchesWithOptions(const Models::ListInstancePatchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the patches of an instance.
       *
       * @param request ListInstancePatchesRequest
       * @return ListInstancePatchesResponse
       */
      Models::ListInstancePatchesResponse listInstancePatches(const Models::ListInstancePatchesRequest &request);

      /**
       * @summary Queries the configurations of an Elastic Compute Service (ECS) instance.
       *
       * @param request ListInventoryEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInventoryEntriesResponse
       */
      Models::ListInventoryEntriesResponse listInventoryEntriesWithOptions(const Models::ListInventoryEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an Elastic Compute Service (ECS) instance.
       *
       * @param request ListInventoryEntriesRequest
       * @return ListInventoryEntriesResponse
       */
      Models::ListInventoryEntriesResponse listInventoryEntries(const Models::ListInventoryEntriesRequest &request);

      /**
       * @summary Queries O\\&M items.
       *
       * @param tmpReq ListOpsItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOpsItemsResponse
       */
      Models::ListOpsItemsResponse listOpsItemsWithOptions(const Models::ListOpsItemsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries O\\&M items.
       *
       * @param request ListOpsItemsRequest
       * @return ListOpsItemsResponse
       */
      Models::ListOpsItemsResponse listOpsItems(const Models::ListOpsItemsRequest &request);

      /**
       * @summary Queries the versions of a common parameter.
       *
       * @param request ListParameterVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListParameterVersionsResponse
       */
      Models::ListParameterVersionsResponse listParameterVersionsWithOptions(const Models::ListParameterVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the versions of a common parameter.
       *
       * @param request ListParameterVersionsRequest
       * @return ListParameterVersionsResponse
       */
      Models::ListParameterVersionsResponse listParameterVersions(const Models::ListParameterVersionsRequest &request);

      /**
       * @summary Queries common parameters. Multiple methods are supported to filter common parameters.
       *
       * @param tmpReq ListParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListParametersResponse
       */
      Models::ListParametersResponse listParametersWithOptions(const Models::ListParametersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries common parameters. Multiple methods are supported to filter common parameters.
       *
       * @param request ListParametersRequest
       * @return ListParametersResponse
       */
      Models::ListParametersResponse listParameters(const Models::ListParametersRequest &request);

      /**
       * @summary Queries a list of patch baselines.
       *
       * @param tmpReq ListPatchBaselinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPatchBaselinesResponse
       */
      Models::ListPatchBaselinesResponse listPatchBaselinesWithOptions(const Models::ListPatchBaselinesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of patch baselines.
       *
       * @param request ListPatchBaselinesRequest
       * @return ListPatchBaselinesResponse
       */
      Models::ListPatchBaselinesResponse listPatchBaselines(const Models::ListPatchBaselinesRequest &request);

      /**
       * @summary Queries the information about a scheduled execution that involves O&M operations on Elastic Compute Service (ECS) instances.
       *
       * @param request ListResourceExecutionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceExecutionStatusResponse
       */
      Models::ListResourceExecutionStatusResponse listResourceExecutionStatusWithOptions(const Models::ListResourceExecutionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a scheduled execution that involves O&M operations on Elastic Compute Service (ECS) instances.
       *
       * @param request ListResourceExecutionStatusRequest
       * @return ListResourceExecutionStatusResponse
       */
      Models::ListResourceExecutionStatusResponse listResourceExecutionStatus(const Models::ListResourceExecutionStatusRequest &request);

      /**
       * @summary Queries versions of an encryption parameter.
       *
       * @param request ListSecretParameterVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecretParameterVersionsResponse
       */
      Models::ListSecretParameterVersionsResponse listSecretParameterVersionsWithOptions(const Models::ListSecretParameterVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries versions of an encryption parameter.
       *
       * @param request ListSecretParameterVersionsRequest
       * @return ListSecretParameterVersionsResponse
       */
      Models::ListSecretParameterVersionsResponse listSecretParameterVersions(const Models::ListSecretParameterVersionsRequest &request);

      /**
       * @summary Queries common parameters. Multiple types of queries are supported.
       *
       * @description Before you call this operation, make sure that you have the permission to manage Key Management Service (KMS) secrets.
       *
       * @param tmpReq ListSecretParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecretParametersResponse
       */
      Models::ListSecretParametersResponse listSecretParametersWithOptions(const Models::ListSecretParametersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries common parameters. Multiple types of queries are supported.
       *
       * @description Before you call this operation, make sure that you have the permission to manage Key Management Service (KMS) secrets.
       *
       * @param request ListSecretParametersRequest
       * @return ListSecretParametersResponse
       */
      Models::ListSecretParametersResponse listSecretParameters(const Models::ListSecretParametersRequest &request);

      /**
       * @summary Queries desired-state configurations.
       *
       * @param tmpReq ListStateConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStateConfigurationsResponse
       */
      Models::ListStateConfigurationsResponse listStateConfigurationsWithOptions(const Models::ListStateConfigurationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries desired-state configurations.
       *
       * @param request ListStateConfigurationsRequest
       * @return ListStateConfigurationsResponse
       */
      Models::ListStateConfigurationsResponse listStateConfigurations(const Models::ListStateConfigurationsRequest &request);

      /**
       * @summary Queries the tags.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary Queries the tags that are added to one or more resources.
       *
       * @param tmpReq ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to one or more resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the values of created tags.
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the values of created tags.
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Queries task executions. Multiple methods are supported to filter task executions.
       *
       * @param request ListTaskExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskExecutionsResponse
       */
      Models::ListTaskExecutionsResponse listTaskExecutionsWithOptions(const Models::ListTaskExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries task executions. Multiple methods are supported to filter task executions.
       *
       * @param request ListTaskExecutionsRequest
       * @return ListTaskExecutionsResponse
       */
      Models::ListTaskExecutionsResponse listTaskExecutions(const Models::ListTaskExecutionsRequest &request);

      /**
       * @summary Queries a list of versions of a template.
       *
       * @param request ListTemplateVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplateVersionsResponse
       */
      Models::ListTemplateVersionsResponse listTemplateVersionsWithOptions(const Models::ListTemplateVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of versions of a template.
       *
       * @param request ListTemplateVersionsRequest
       * @return ListTemplateVersionsResponse
       */
      Models::ListTemplateVersionsResponse listTemplateVersions(const Models::ListTemplateVersionsRequest &request);

      /**
       * @summary Queries templates. Multiple methods are supported to filter templates.
       *
       * @param tmpReq ListTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplatesWithOptions(const Models::ListTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries templates. Multiple methods are supported to filter templates.
       *
       * @param request ListTemplatesRequest
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplates(const Models::ListTemplatesRequest &request);

      /**
       * @summary Notifies an execution in the Waiting state of the subsequent operations.
       *
       * @description You can call this operation to notify an execution in the following scenarios:
       * *   If a template contains a special task, such as an approval task, the Operation Orchestration Service (OOS) execution engine sets the execution state to Waiting when the approval task is being run. You can call this operation to specify whether to continue the execution.
       * *   If you perform debugging in the debug mode, you can call this operation to notify the execution of the subsequent operations after the execution is created or a task is complete.
       * *   If a high-risk operation task waits for approval, you can call this operation to specify whether to continue the execution.
       *
       * @param request NotifyExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return NotifyExecutionResponse
       */
      Models::NotifyExecutionResponse notifyExecutionWithOptions(const Models::NotifyExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Notifies an execution in the Waiting state of the subsequent operations.
       *
       * @description You can call this operation to notify an execution in the following scenarios:
       * *   If a template contains a special task, such as an approval task, the Operation Orchestration Service (OOS) execution engine sets the execution state to Waiting when the approval task is being run. You can call this operation to specify whether to continue the execution.
       * *   If you perform debugging in the debug mode, you can call this operation to notify the execution of the subsequent operations after the execution is created or a task is complete.
       * *   If a high-risk operation task waits for approval, you can call this operation to specify whether to continue the execution.
       *
       * @param request NotifyExecutionRequest
       * @return NotifyExecutionResponse
       */
      Models::NotifyExecutionResponse notifyExecution(const Models::NotifyExecutionRequest &request);

      /**
       * @summary Registers the default patch baseline.
       *
       * @param request RegisterDefaultPatchBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterDefaultPatchBaselineResponse
       */
      Models::RegisterDefaultPatchBaselineResponse registerDefaultPatchBaselineWithOptions(const Models::RegisterDefaultPatchBaselineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers the default patch baseline.
       *
       * @param request RegisterDefaultPatchBaselineRequest
       * @return RegisterDefaultPatchBaselineResponse
       */
      Models::RegisterDefaultPatchBaselineResponse registerDefaultPatchBaseline(const Models::RegisterDefaultPatchBaselineRequest &request);

      /**
       * @summary Queries the details or aggregate information of a configuration inventory.
       *
       * @param request SearchInventoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchInventoryResponse
       */
      Models::SearchInventoryResponse searchInventoryWithOptions(const Models::SearchInventoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details or aggregate information of a configuration inventory.
       *
       * @param request SearchInventoryRequest
       * @return SearchInventoryResponse
       */
      Models::SearchInventoryResponse searchInventory(const Models::SearchInventoryRequest &request);

      /**
       * @summary Enables or disables the feature of delivering template execution records and sets the storage location.
       *
       * @param request SetServiceSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetServiceSettingsResponse
       */
      Models::SetServiceSettingsResponse setServiceSettingsWithOptions(const Models::SetServiceSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the feature of delivering template execution records and sets the storage location.
       *
       * @param request SetServiceSettingsRequest
       * @return SetServiceSettingsResponse
       */
      Models::SetServiceSettingsResponse setServiceSettings(const Models::SetServiceSettingsRequest &request);

      /**
       * @summary 启动一个调试执行
       *
       * @param request StartDebugExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDebugExecutionResponse
       */
      Models::StartDebugExecutionResponse startDebugExecutionWithOptions(const Models::StartDebugExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动一个调试执行
       *
       * @param request StartDebugExecutionRequest
       * @return StartDebugExecutionResponse
       */
      Models::StartDebugExecutionResponse startDebugExecution(const Models::StartDebugExecutionRequest &request);

      /**
       * @summary Starts an execution.
       *
       * @param tmpReq StartExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartExecutionResponse
       */
      Models::StartExecutionResponse startExecutionWithOptions(const Models::StartExecutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an execution.
       *
       * @param request StartExecutionRequest
       * @return StartExecutionResponse
       */
      Models::StartExecutionResponse startExecution(const Models::StartExecutionRequest &request);

      /**
       * @summary Adds tags to one or more resources.
       *
       * @param tmpReq TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to one or more resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Debugs a started execution that contains an event trigger task or alert trigger task. If the operation is called, a message body is sent to the event trigger task or alert trigger task. After the trigger task receives the message body, the trigger task generates a new child execution.
       *
       * @param request TriggerExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerExecutionResponse
       */
      Models::TriggerExecutionResponse triggerExecutionWithOptions(const Models::TriggerExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Debugs a started execution that contains an event trigger task or alert trigger task. If the operation is called, a message body is sent to the event trigger task or alert trigger task. After the trigger task receives the message body, the trigger task generates a new child execution.
       *
       * @param request TriggerExecutionRequest
       * @return TriggerExecutionResponse
       */
      Models::TriggerExecutionResponse triggerExecution(const Models::TriggerExecutionRequest &request);

      /**
       * @summary Removes tags from one or more resources.
       *
       * @param tmpReq UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from one or more resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param tmpReq UpdateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationResponse
       */
      Models::UpdateApplicationResponse updateApplicationWithOptions(const Models::UpdateApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request UpdateApplicationRequest
       * @return UpdateApplicationResponse
       */
      Models::UpdateApplicationResponse updateApplication(const Models::UpdateApplicationRequest &request);

      /**
       * @summary Updates the information of an application group. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param tmpReq UpdateApplicationGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationGroupResponse
       */
      Models::UpdateApplicationGroupResponse updateApplicationGroupWithOptions(const Models::UpdateApplicationGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of an application group. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
       *
       * @param request UpdateApplicationGroupRequest
       * @return UpdateApplicationGroupResponse
       */
      Models::UpdateApplicationGroupResponse updateApplicationGroup(const Models::UpdateApplicationGroupRequest &request);

      /**
       * @summary Update executions that are in Running or Waiting status.
       *
       * @param request UpdateExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExecutionResponse
       */
      Models::UpdateExecutionResponse updateExecutionWithOptions(const Models::UpdateExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update executions that are in Running or Waiting status.
       *
       * @param request UpdateExecutionRequest
       * @return UpdateExecutionResponse
       */
      Models::UpdateExecutionResponse updateExecution(const Models::UpdateExecutionRequest &request);

      /**
       * @summary Updates the installed extensions of an instance.
       *
       * @param tmpReq UpdateInstancePackageStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstancePackageStateResponse
       */
      Models::UpdateInstancePackageStateResponse updateInstancePackageStateWithOptions(const Models::UpdateInstancePackageStateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the installed extensions of an instance.
       *
       * @param request UpdateInstancePackageStateRequest
       * @return UpdateInstancePackageStateResponse
       */
      Models::UpdateInstancePackageStateResponse updateInstancePackageState(const Models::UpdateInstancePackageStateRequest &request);

      /**
       * @summary Modifies an O\\\\\\\\\\\\&M item.
       *
       * @param tmpReq UpdateOpsItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOpsItemResponse
       */
      Models::UpdateOpsItemResponse updateOpsItemWithOptions(const Models::UpdateOpsItemRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an O\\\\\\\\\\\\&M item.
       *
       * @param request UpdateOpsItemRequest
       * @return UpdateOpsItemResponse
       */
      Models::UpdateOpsItemResponse updateOpsItem(const Models::UpdateOpsItemRequest &request);

      /**
       * @summary Updates a common parameter.
       *
       * @param request UpdateParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateParameterResponse
       */
      Models::UpdateParameterResponse updateParameterWithOptions(const Models::UpdateParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a common parameter.
       *
       * @param request UpdateParameterRequest
       * @return UpdateParameterResponse
       */
      Models::UpdateParameterResponse updateParameter(const Models::UpdateParameterRequest &request);

      /**
       * @summary Updates a patch baseline.
       *
       * @param tmpReq UpdatePatchBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePatchBaselineResponse
       */
      Models::UpdatePatchBaselineResponse updatePatchBaselineWithOptions(const Models::UpdatePatchBaselineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a patch baseline.
       *
       * @param request UpdatePatchBaselineRequest
       * @return UpdatePatchBaselineResponse
       */
      Models::UpdatePatchBaselineResponse updatePatchBaseline(const Models::UpdatePatchBaselineRequest &request);

      /**
       * @summary Updates an encryption parameter.
       *
       * @param tmpReq UpdateSecretParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecretParameterResponse
       */
      Models::UpdateSecretParameterResponse updateSecretParameterWithOptions(const Models::UpdateSecretParameterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an encryption parameter.
       *
       * @param request UpdateSecretParameterRequest
       * @return UpdateSecretParameterResponse
       */
      Models::UpdateSecretParameterResponse updateSecretParameter(const Models::UpdateSecretParameterRequest &request);

      /**
       * @summary Updates a desired-state configuration.
       *
       * @param tmpReq UpdateStateConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStateConfigurationResponse
       */
      Models::UpdateStateConfigurationResponse updateStateConfigurationWithOptions(const Models::UpdateStateConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a desired-state configuration.
       *
       * @param request UpdateStateConfigurationRequest
       * @return UpdateStateConfigurationResponse
       */
      Models::UpdateStateConfigurationResponse updateStateConfiguration(const Models::UpdateStateConfigurationRequest &request);

      /**
       * @summary Updates the information about an existing template.
       *
       * @param tmpReq UpdateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplateWithOptions(const Models::UpdateTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about an existing template.
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const Models::UpdateTemplateRequest &request);

      /**
       * @summary Check whether a template is valid.
       *
       * @param request ValidateTemplateContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateTemplateContentResponse
       */
      Models::ValidateTemplateContentResponse validateTemplateContentWithOptions(const Models::ValidateTemplateContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check whether a template is valid.
       *
       * @param request ValidateTemplateContentRequest
       * @return ValidateTemplateContentResponse
       */
      Models::ValidateTemplateContentResponse validateTemplateContent(const Models::ValidateTemplateContentRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
