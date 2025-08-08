// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DEVS20230714_HPP_
#define ALIBABACLOUD_DEVS20230714_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Devs20230714Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Devs20230714.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 激活身份绑定,完成OAuth授权
       *
       * @param request ActivateConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateConnectionResponse
       */
      Models::ActivateConnectionResponse activateConnectionWithOptions(const string &name, const Models::ActivateConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 激活身份绑定,完成OAuth授权
       *
       * @param request ActivateConnectionRequest
       * @return ActivateConnectionResponse
       */
      Models::ActivateConnectionResponse activateConnection(const string &name, const Models::ActivateConnectionRequest &request);

      /**
       * @summary 取消流水线
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPipelineResponse
       */
      Models::CancelPipelineResponse cancelPipelineWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消流水线
       *
       * @return CancelPipelineResponse
       */
      Models::CancelPipelineResponse cancelPipeline(const string &name);

      /**
       * @summary 取消任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTaskWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消任务
       *
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTask(const string &name);

      /**
       * @summary 创建交付物存储
       *
       * @param request CreateArtifactRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateArtifactResponse
       */
      Models::CreateArtifactResponse createArtifactWithOptions(const Models::CreateArtifactRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建交付物存储
       *
       * @param request CreateArtifactRequest
       * @return CreateArtifactResponse
       */
      Models::CreateArtifactResponse createArtifact(const Models::CreateArtifactRequest &request);

      /**
       * @summary 创建环境
       *
       * @param request CreateEnvironmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnvironmentResponse
       */
      Models::CreateEnvironmentResponse createEnvironmentWithOptions(const string &projectName, const Models::CreateEnvironmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建环境
       *
       * @param request CreateEnvironmentRequest
       * @return CreateEnvironmentResponse
       */
      Models::CreateEnvironmentResponse createEnvironment(const string &projectName, const Models::CreateEnvironmentRequest &request);

      /**
       * @summary 创建流水线
       *
       * @param request CreatePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipelineWithOptions(const Models::CreatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建流水线
       *
       * @param request CreatePipelineRequest
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipeline(const Models::CreatePipelineRequest &request);

      /**
       * @summary 创建项目
       *
       * @param request CreateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const Models::CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建项目
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const Models::CreateProjectRequest &request);

      /**
       * @summary 创建任务
       *
       * @param request CreateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTaskWithOptions(const Models::CreateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建任务
       *
       * @param request CreateTaskRequest
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTask(const Models::CreateTaskRequest &request);

      /**
       * @summary 创建工具集
       *
       * @param request CreateToolsetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateToolsetResponse
       */
      Models::CreateToolsetResponse createToolsetWithOptions(const Models::CreateToolsetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建工具集
       *
       * @param request CreateToolsetRequest
       * @return CreateToolsetResponse
       */
      Models::CreateToolsetResponse createToolset(const Models::CreateToolsetRequest &request);

      /**
       * @summary 删除交付物
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteArtifactResponse
       */
      Models::DeleteArtifactResponse deleteArtifactWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除交付物
       *
       * @return DeleteArtifactResponse
       */
      Models::DeleteArtifactResponse deleteArtifact(const string &name);

      /**
       * @summary 删除身份绑定
       *
       * @param request DeleteConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConnectionResponse
       */
      Models::DeleteConnectionResponse deleteConnectionWithOptions(const string &name, const Models::DeleteConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除身份绑定
       *
       * @param request DeleteConnectionRequest
       * @return DeleteConnectionResponse
       */
      Models::DeleteConnectionResponse deleteConnection(const string &name, const Models::DeleteConnectionRequest &request);

      /**
       * @summary 删除环境
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnvironmentResponse
       */
      Models::DeleteEnvironmentResponse deleteEnvironmentWithOptions(const string &projectName, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除环境
       *
       * @return DeleteEnvironmentResponse
       */
      Models::DeleteEnvironmentResponse deleteEnvironment(const string &projectName, const string &name);

      /**
       * @summary 删除项目
       *
       * @param request DeleteProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const string &name, const Models::DeleteProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除项目
       *
       * @param request DeleteProjectRequest
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProject(const string &name, const Models::DeleteProjectRequest &request);

      /**
       * @summary 删除工具集
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteToolsetResponse
       */
      Models::DeleteToolsetResponse deleteToolsetWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除工具集
       *
       * @return DeleteToolsetResponse
       */
      Models::DeleteToolsetResponse deleteToolset(const string &name);

      /**
       * @summary 手动触发环境部署
       *
       * @param request DeployEnvironmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployEnvironmentResponse
       */
      Models::DeployEnvironmentResponse deployEnvironmentWithOptions(const string &projectName, const string &name, const Models::DeployEnvironmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 手动触发环境部署
       *
       * @param request DeployEnvironmentRequest
       * @return DeployEnvironmentResponse
       */
      Models::DeployEnvironmentResponse deployEnvironment(const string &projectName, const string &name, const Models::DeployEnvironmentRequest &request);

      /**
       * @summary 获取交付物的zip包临时下载地址url
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchArtifactDownloadUrlResponse
       */
      Models::FetchArtifactDownloadUrlResponse fetchArtifactDownloadUrlWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取交付物的zip包临时下载地址url
       *
       * @return FetchArtifactDownloadUrlResponse
       */
      Models::FetchArtifactDownloadUrlResponse fetchArtifactDownloadUrl(const string &name);

      /**
       * @summary 获取交付物临时上传的bucket、object和临时sts
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchArtifactTempBucketTokenResponse
       */
      Models::FetchArtifactTempBucketTokenResponse fetchArtifactTempBucketTokenWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取交付物临时上传的bucket、object和临时sts
       *
       * @return FetchArtifactTempBucketTokenResponse
       */
      Models::FetchArtifactTempBucketTokenResponse fetchArtifactTempBucketToken();

      /**
       * @summary 查询身份绑定中的凭证信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchConnectionCredentialResponse
       */
      Models::FetchConnectionCredentialResponse fetchConnectionCredentialWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询身份绑定中的凭证信息
       *
       * @return FetchConnectionCredentialResponse
       */
      Models::FetchConnectionCredentialResponse fetchConnectionCredential(const string &name);

      /**
       * @summary 查询交付物
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactResponse
       */
      Models::GetArtifactResponse getArtifactWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询交付物
       *
       * @return GetArtifactResponse
       */
      Models::GetArtifactResponse getArtifact(const string &name);

      /**
       * @summary 获取环境信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEnvironmentResponse
       */
      Models::GetEnvironmentResponse getEnvironmentWithOptions(const string &projectName, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取环境信息
       *
       * @return GetEnvironmentResponse
       */
      Models::GetEnvironmentResponse getEnvironment(const string &projectName, const string &name);

      /**
       * @summary 查询环境部署信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEnvironmentDeploymentResponse
       */
      Models::GetEnvironmentDeploymentResponse getEnvironmentDeploymentWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询环境部署信息
       *
       * @return GetEnvironmentDeploymentResponse
       */
      Models::GetEnvironmentDeploymentResponse getEnvironmentDeployment(const string &name);

      /**
       * @summary 查询流水线
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineResponse
       */
      Models::GetPipelineResponse getPipelineWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询流水线
       *
       * @return GetPipelineResponse
       */
      Models::GetPipelineResponse getPipeline(const string &name);

      /**
       * @summary 查询项目
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询项目
       *
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const string &name);

      /**
       * @summary 查询仓库绑定
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRepositoryResponse
       */
      Models::GetRepositoryResponse getRepositoryWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询仓库绑定
       *
       * @return GetRepositoryResponse
       */
      Models::GetRepositoryResponse getRepository(const string &name);

      /**
       * @summary 查询服务部署信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceDeploymentResponse
       */
      Models::GetServiceDeploymentResponse getServiceDeploymentWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务部署信息
       *
       * @return GetServiceDeploymentResponse
       */
      Models::GetServiceDeploymentResponse getServiceDeployment(const string &name);

      /**
       * @summary 查询任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务
       *
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const string &name);

      /**
       * @summary 查询工具集
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetToolsetResponse
       */
      Models::GetToolsetResponse getToolsetWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询工具集
       *
       * @return GetToolsetResponse
       */
      Models::GetToolsetResponse getToolset(const string &name);

      /**
       * @summary 批量查询身份绑定
       *
       * @param tmpReq ListConnectionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectionsResponse
       */
      Models::ListConnectionsResponse listConnectionsWithOptions(const Models::ListConnectionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询身份绑定
       *
       * @param request ListConnectionsRequest
       * @return ListConnectionsResponse
       */
      Models::ListConnectionsResponse listConnections(const Models::ListConnectionsRequest &request);

      /**
       * @summary 查询环境列表
       *
       * @param tmpReq ListEnvironmentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvironmentsResponse
       */
      Models::ListEnvironmentsResponse listEnvironmentsWithOptions(const string &projectName, const Models::ListEnvironmentsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询环境列表
       *
       * @param request ListEnvironmentsRequest
       * @return ListEnvironmentsResponse
       */
      Models::ListEnvironmentsResponse listEnvironments(const string &projectName, const Models::ListEnvironmentsRequest &request);

      /**
       * @summary 批量查询流水线
       *
       * @param tmpReq ListPipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelinesResponse
       */
      Models::ListPipelinesResponse listPipelinesWithOptions(const Models::ListPipelinesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询流水线
       *
       * @param request ListPipelinesRequest
       * @return ListPipelinesResponse
       */
      Models::ListPipelinesResponse listPipelines(const Models::ListPipelinesRequest &request);

      /**
       * @summary 批量查询项目
       *
       * @param tmpReq ListProjectsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询项目
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const Models::ListProjectsRequest &request);

      /**
       * @summary 批量查询服务部署信息
       *
       * @param tmpReq ListServiceDeploymentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceDeploymentsResponse
       */
      Models::ListServiceDeploymentsResponse listServiceDeploymentsWithOptions(const Models::ListServiceDeploymentsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询服务部署信息
       *
       * @param request ListServiceDeploymentsRequest
       * @return ListServiceDeploymentsResponse
       */
      Models::ListServiceDeploymentsResponse listServiceDeployments(const Models::ListServiceDeploymentsRequest &request);

      /**
       * @summary 批量查询任务
       *
       * @param tmpReq ListTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasksWithOptions(const Models::ListTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询任务
       *
       * @param request ListTasksRequest
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasks(const Models::ListTasksRequest &request);

      /**
       * @summary 批量查询工具集
       *
       * @param tmpReq ListToolsetsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListToolsetsResponse
       */
      Models::ListToolsetsResponse listToolsetsWithOptions(const Models::ListToolsetsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询工具集
       *
       * @param request ListToolsetsRequest
       * @return ListToolsetsResponse
       */
      Models::ListToolsetsResponse listToolsets(const Models::ListToolsetsRequest &request);

      /**
       * @summary 预览环境变更信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewEnvironmentResponse
       */
      Models::PreviewEnvironmentResponse previewEnvironmentWithOptions(const string &projectName, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预览环境变更信息
       *
       * @return PreviewEnvironmentResponse
       */
      Models::PreviewEnvironmentResponse previewEnvironment(const string &projectName, const string &name);

      /**
       * @summary 更新交付物
       *
       * @param request PutArtifactRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutArtifactResponse
       */
      Models::PutArtifactResponse putArtifactWithOptions(const string &name, const Models::PutArtifactRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新交付物
       *
       * @param request PutArtifactRequest
       * @return PutArtifactResponse
       */
      Models::PutArtifactResponse putArtifact(const string &name, const Models::PutArtifactRequest &request);

      /**
       * @summary 更新流水线状态
       *
       * @param request PutPipelineStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutPipelineStatusResponse
       */
      Models::PutPipelineStatusResponse putPipelineStatusWithOptions(const string &name, const Models::PutPipelineStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新流水线状态
       *
       * @param request PutPipelineStatusRequest
       * @return PutPipelineStatusResponse
       */
      Models::PutPipelineStatusResponse putPipelineStatus(const string &name, const Models::PutPipelineStatusRequest &request);

      /**
       * @summary 更新替换任务状态
       *
       * @param request PutTaskStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutTaskStatusResponse
       */
      Models::PutTaskStatusResponse putTaskStatusWithOptions(const string &name, const Models::PutTaskStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新替换任务状态
       *
       * @param request PutTaskStatusRequest
       * @return PutTaskStatusResponse
       */
      Models::PutTaskStatusResponse putTaskStatus(const string &name, const Models::PutTaskStatusRequest &request);

      /**
       * @summary 解析模板中的服务、变量配置
       *
       * @param request RenderServicesByTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenderServicesByTemplateResponse
       */
      Models::RenderServicesByTemplateResponse renderServicesByTemplateWithOptions(const Models::RenderServicesByTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解析模板中的服务、变量配置
       *
       * @param request RenderServicesByTemplateRequest
       * @return RenderServicesByTemplateResponse
       */
      Models::RenderServicesByTemplateResponse renderServicesByTemplate(const Models::RenderServicesByTemplateRequest &request);

      /**
       * @summary 确认并继续执行任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeTaskResponse
       */
      Models::ResumeTaskResponse resumeTaskWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 确认并继续执行任务
       *
       * @return ResumeTaskResponse
       */
      Models::ResumeTaskResponse resumeTask(const string &name);

      /**
       * @summary 重试执行任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryTaskResponse
       */
      Models::RetryTaskResponse retryTaskWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重试执行任务
       *
       * @return RetryTaskResponse
       */
      Models::RetryTaskResponse retryTask(const string &name);

      /**
       * @summary 开始执行流水线
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartPipelineResponse
       */
      Models::StartPipelineResponse startPipelineWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开始执行流水线
       *
       * @return StartPipelineResponse
       */
      Models::StartPipelineResponse startPipeline(const string &name);

      /**
       * @summary 开始执行任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTaskResponse
       */
      Models::StartTaskResponse startTaskWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开始执行任务
       *
       * @return StartTaskResponse
       */
      Models::StartTaskResponse startTask(const string &name);

      /**
       * @summary 更新环境（局部更新）
       *
       * @param request UpdateEnvironmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnvironmentResponse
       */
      Models::UpdateEnvironmentResponse updateEnvironmentWithOptions(const string &projectName, const string &name, const Models::UpdateEnvironmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新环境（局部更新）
       *
       * @param request UpdateEnvironmentRequest
       * @return UpdateEnvironmentResponse
       */
      Models::UpdateEnvironmentResponse updateEnvironment(const string &projectName, const string &name, const Models::UpdateEnvironmentRequest &request);

      /**
       * @summary 更新替换应用
       *
       * @param request UpdateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const string &name, const Models::UpdateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新替换应用
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const string &name, const Models::UpdateProjectRequest &request);

      /**
       * @summary 更新工具集
       *
       * @param request UpdateToolsetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateToolsetResponse
       */
      Models::UpdateToolsetResponse updateToolsetWithOptions(const string &name, const Models::UpdateToolsetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新工具集
       *
       * @param request UpdateToolsetRequest
       * @return UpdateToolsetResponse
       */
      Models::UpdateToolsetResponse updateToolset(const string &name, const Models::UpdateToolsetRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
