// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_IACSERVICE20210806_HPP_
#define ALIBABACLOUD_IACSERVICE20210806_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/IaCService20210806Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/IaCService20210806.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 新增共享账号信息
       *
       * @param request AddSharedAccountsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSharedAccountsResponse
       */
      Models::AddSharedAccountsResponse addSharedAccountsWithOptions(const Models::AddSharedAccountsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增共享账号信息
       *
       * @param request AddSharedAccountsRequest
       * @return AddSharedAccountsResponse
       */
      Models::AddSharedAccountsResponse addSharedAccounts(const Models::AddSharedAccountsRequest &request);

      /**
       * @summary 分组关联
       *
       * @param request AssociateGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateGroupResponse
       */
      Models::AssociateGroupResponse associateGroupWithOptions(const string &groupId, const Models::AssociateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分组关联
       *
       * @param request AssociateGroupRequest
       * @return AssociateGroupResponse
       */
      Models::AssociateGroupResponse associateGroup(const string &groupId, const Models::AssociateGroupRequest &request);

      /**
       * @summary 取消资源导出任务
       *
       * @param request CancelResourceExportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelResourceExportTaskResponse
       */
      Models::CancelResourceExportTaskResponse cancelResourceExportTaskWithOptions(const string &exportTaskId, const Models::CancelResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消资源导出任务
       *
       * @param request CancelResourceExportTaskRequest
       * @return CancelResourceExportTaskResponse
       */
      Models::CancelResourceExportTaskResponse cancelResourceExportTask(const string &exportTaskId, const Models::CancelResourceExportTaskRequest &request);

      /**
       * @summary 创建分组
       *
       * @param request CreateGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建分组
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @summary 创建作业
       *
       * @param request CreateJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const string &taskId, const Models::CreateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建作业
       *
       * @param request CreateJobRequest
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJob(const string &taskId, const Models::CreateJobRequest &request);

      /**
       * @summary 创建模板
       *
       * @param request CreateModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModuleResponse
       */
      Models::CreateModuleResponse createModuleWithOptions(const Models::CreateModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模板
       *
       * @param request CreateModuleRequest
       * @return CreateModuleResponse
       */
      Models::CreateModuleResponse createModule(const Models::CreateModuleRequest &request);

      /**
       * @summary 创建模板版本
       *
       * @param request CreateModuleVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModuleVersionResponse
       */
      Models::CreateModuleVersionResponse createModuleVersionWithOptions(const string &moduleId, const Models::CreateModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模板版本
       *
       * @param request CreateModuleVersionRequest
       * @return CreateModuleVersionResponse
       */
      Models::CreateModuleVersionResponse createModuleVersion(const string &moduleId, const Models::CreateModuleVersionRequest &request);

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
       * @summary 创建RegistryModule
       *
       * @param request CreateRegistryModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRegistryModuleResponse
       */
      Models::CreateRegistryModuleResponse createRegistryModuleWithOptions(const Models::CreateRegistryModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建RegistryModule
       *
       * @param request CreateRegistryModuleRequest
       * @return CreateRegistryModuleResponse
       */
      Models::CreateRegistryModuleResponse createRegistryModule(const Models::CreateRegistryModuleRequest &request);

      /**
       * @summary 创建工作空间
       *
       * @param request CreateRegistryNamespaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRegistryNamespaceResponse
       */
      Models::CreateRegistryNamespaceResponse createRegistryNamespaceWithOptions(const Models::CreateRegistryNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建工作空间
       *
       * @param request CreateRegistryNamespaceRequest
       * @return CreateRegistryNamespaceResponse
       */
      Models::CreateRegistryNamespaceResponse createRegistryNamespace(const Models::CreateRegistryNamespaceRequest &request);

      /**
       * @summary 创建导出任务
       *
       * @param request CreateResourceExportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceExportTaskResponse
       */
      Models::CreateResourceExportTaskResponse createResourceExportTaskWithOptions(const Models::CreateResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建导出任务
       *
       * @param request CreateResourceExportTaskRequest
       * @return CreateResourceExportTaskResponse
       */
      Models::CreateResourceExportTaskResponse createResourceExportTask(const Models::CreateResourceExportTaskRequest &request);

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
       * @summary 删除分组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroupWithOptions(const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除分组
       *
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroup(const string &groupId);

      /**
       * @summary 删除模板
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModuleResponse
       */
      Models::DeleteModuleResponse deleteModuleWithOptions(const string &moduleId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除模板
       *
       * @return DeleteModuleResponse
       */
      Models::DeleteModuleResponse deleteModule(const string &moduleId);

      /**
       * @summary 删除项目
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const string &projectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除项目
       *
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProject(const string &projectId);

      /**
       * @summary 删除RegistryModule
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRegistryModuleResponse
       */
      Models::DeleteRegistryModuleResponse deleteRegistryModuleWithOptions(const string &namespaceName, const string &moduleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除RegistryModule
       *
       * @return DeleteRegistryModuleResponse
       */
      Models::DeleteRegistryModuleResponse deleteRegistryModule(const string &namespaceName, const string &moduleName);

      /**
       * @summary 删除RegistryModule版本
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRegistryModuleVersionResponse
       */
      Models::DeleteRegistryModuleVersionResponse deleteRegistryModuleVersionWithOptions(const string &namespaceName, const string &moduleName, const string &version, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除RegistryModule版本
       *
       * @return DeleteRegistryModuleVersionResponse
       */
      Models::DeleteRegistryModuleVersionResponse deleteRegistryModuleVersion(const string &namespaceName, const string &moduleName, const string &version);

      /**
       * @summary 删除工作空间
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRegistryNamespaceResponse
       */
      Models::DeleteRegistryNamespaceResponse deleteRegistryNamespaceWithOptions(const string &namespaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除工作空间
       *
       * @return DeleteRegistryNamespaceResponse
       */
      Models::DeleteRegistryNamespaceResponse deleteRegistryNamespace(const string &namespaceName);

      /**
       * @summary 删除资源导出任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceExportTaskResponse
       */
      Models::DeleteResourceExportTaskResponse deleteResourceExportTaskWithOptions(const string &exportTaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除资源导出任务
       *
       * @return DeleteResourceExportTaskResponse
       */
      Models::DeleteResourceExportTaskResponse deleteResourceExportTask(const string &exportTaskId);

      /**
       * @summary 删除任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTaskResponse
       */
      Models::DeleteTaskResponse deleteTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除任务
       *
       * @return DeleteTaskResponse
       */
      Models::DeleteTaskResponse deleteTask(const string &taskId);

      /**
       * @summary 取消关联分组
       *
       * @param request DissociateGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateGroupResponse
       */
      Models::DissociateGroupResponse dissociateGroupWithOptions(const string &projectId, const string &groupId, const Models::DissociateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消关联分组
       *
       * @param request DissociateGroupRequest
       * @return DissociateGroupResponse
       */
      Models::DissociateGroupResponse dissociateGroup(const string &projectId, const string &groupId, const Models::DissociateGroupRequest &request);

      /**
       * @summary 执行RegistryModule
       *
       * @param request ExecuteRegistryModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteRegistryModuleResponse
       */
      Models::ExecuteRegistryModuleResponse executeRegistryModuleWithOptions(const string &namespaceName, const string &moduleName, const Models::ExecuteRegistryModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行RegistryModule
       *
       * @param request ExecuteRegistryModuleRequest
       * @return ExecuteRegistryModuleResponse
       */
      Models::ExecuteRegistryModuleResponse executeRegistryModule(const string &namespaceName, const string &moduleName, const Models::ExecuteRegistryModuleRequest &request);

      /**
       * @summary 执行资源导出任务
       *
       * @param request ExecuteResourceExportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteResourceExportTaskResponse
       */
      Models::ExecuteResourceExportTaskResponse executeResourceExportTaskWithOptions(const string &exportTaskId, const Models::ExecuteResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行资源导出任务
       *
       * @param request ExecuteResourceExportTaskRequest
       * @return ExecuteResourceExportTaskResponse
       */
      Models::ExecuteResourceExportTaskResponse executeResourceExportTask(const string &exportTaskId, const Models::ExecuteResourceExportTaskRequest &request);

      /**
       * @summary 执行TerraformApply
       *
       * @param request ExecuteTerraformApplyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTerraformApplyResponse
       */
      Models::ExecuteTerraformApplyResponse executeTerraformApplyWithOptions(const Models::ExecuteTerraformApplyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行TerraformApply
       *
       * @param request ExecuteTerraformApplyRequest
       * @return ExecuteTerraformApplyResponse
       */
      Models::ExecuteTerraformApplyResponse executeTerraformApply(const Models::ExecuteTerraformApplyRequest &request);

      /**
       * @summary 执行TerraformDestroy
       *
       * @param request ExecuteTerraformDestroyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTerraformDestroyResponse
       */
      Models::ExecuteTerraformDestroyResponse executeTerraformDestroyWithOptions(const Models::ExecuteTerraformDestroyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行TerraformDestroy
       *
       * @param request ExecuteTerraformDestroyRequest
       * @return ExecuteTerraformDestroyResponse
       */
      Models::ExecuteTerraformDestroyResponse executeTerraformDestroy(const Models::ExecuteTerraformDestroyRequest &request);

      /**
       * @summary 执行TerraformPlan
       *
       * @param request ExecuteTerraformPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTerraformPlanResponse
       */
      Models::ExecuteTerraformPlanResponse executeTerraformPlanWithOptions(const Models::ExecuteTerraformPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行TerraformPlan
       *
       * @param request ExecuteTerraformPlanRequest
       * @return ExecuteTerraformPlanResponse
       */
      Models::ExecuteTerraformPlanResponse executeTerraformPlan(const Models::ExecuteTerraformPlanRequest &request);

      /**
       * @summary 生成模板
       *
       * @param request GenerateModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateModuleResponse
       */
      Models::GenerateModuleResponse generateModuleWithOptions(const Models::GenerateModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成模板
       *
       * @param request GenerateModuleRequest
       * @return GenerateModuleResponse
       */
      Models::GenerateModuleResponse generateModule(const Models::GenerateModuleRequest &request);

      /**
       * @summary 获取Terraform运行结果
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExecuteStateResponse
       */
      Models::GetExecuteStateResponse getExecuteStateWithOptions(const string &stateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Terraform运行结果
       *
       * @return GetExecuteStateResponse
       */
      Models::GetExecuteStateResponse getExecuteState(const string &stateId);

      /**
       * @summary 查询分组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroupWithOptions(const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询分组
       *
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroup(const string &groupId);

      /**
       * @summary 作业详情
       *
       * @param request GetJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResponse
       */
      Models::GetJobResponse getJobWithOptions(const string &taskId, const string &jobId, const Models::GetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 作业详情
       *
       * @param request GetJobRequest
       * @return GetJobResponse
       */
      Models::GetJobResponse getJob(const string &taskId, const string &jobId, const Models::GetJobRequest &request);

      /**
       * @summary 获取模板详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModuleResponse
       */
      Models::GetModuleResponse getModuleWithOptions(const string &moduleId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取模板详情
       *
       * @return GetModuleResponse
       */
      Models::GetModuleResponse getModule(const string &moduleId);

      /**
       * @summary 模板版本详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModuleVersionResponse
       */
      Models::GetModuleVersionResponse getModuleVersionWithOptions(const string &moduleId, const string &moduleVersion, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模板版本详情
       *
       * @return GetModuleVersionResponse
       */
      Models::GetModuleVersionResponse getModuleVersion(const string &moduleId, const string &moduleVersion);

      /**
       * @summary 查询项目
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const string &projectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询项目
       *
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const string &projectId);

      /**
       * @summary 获取RegistryModule信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegistryModuleResponse
       */
      Models::GetRegistryModuleResponse getRegistryModuleWithOptions(const string &namespaceName, const string &moduleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取RegistryModule信息
       *
       * @return GetRegistryModuleResponse
       */
      Models::GetRegistryModuleResponse getRegistryModule(const string &namespaceName, const string &moduleName);

      /**
       * @summary 获取RegistryModule版本信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegistryModuleVersionResponse
       */
      Models::GetRegistryModuleVersionResponse getRegistryModuleVersionWithOptions(const string &namespaceName, const string &moduleName, const string &version, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取RegistryModule版本信息
       *
       * @return GetRegistryModuleVersionResponse
       */
      Models::GetRegistryModuleVersionResponse getRegistryModuleVersion(const string &namespaceName, const string &moduleName, const string &version);

      /**
       * @summary 获取工作空间信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegistryNamespaceResponse
       */
      Models::GetRegistryNamespaceResponse getRegistryNamespaceWithOptions(const string &namespaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作空间信息
       *
       * @return GetRegistryNamespaceResponse
       */
      Models::GetRegistryNamespaceResponse getRegistryNamespace(const string &namespaceName);

      /**
       * @summary 查询导出任务详情
       *
       * @param request GetResourceExportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceExportTaskResponse
       */
      Models::GetResourceExportTaskResponse getResourceExportTaskWithOptions(const string &exportTaskId, const Models::GetResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询导出任务详情
       *
       * @param request GetResourceExportTaskRequest
       * @return GetResourceExportTaskResponse
       */
      Models::GetResourceExportTaskResponse getResourceExportTask(const string &exportTaskId, const Models::GetResourceExportTaskRequest &request);

      /**
       * @summary 获取资源类型信息
       *
       * @param request GetResourceTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceTypeResponse
       */
      Models::GetResourceTypeResponse getResourceTypeWithOptions(const string &resourceType, const Models::GetResourceTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源类型信息
       *
       * @param request GetResourceTypeRequest
       * @return GetResourceTypeResponse
       */
      Models::GetResourceTypeResponse getResourceType(const string &resourceType, const Models::GetResourceTypeRequest &request);

      /**
       * @summary 查询任务详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务详情
       *
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const string &taskId);

      /**
       * @summary 获取Explorer的egistryModule版本示例列表
       *
       * @param request ListExplorerRegistryModuleExamplesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExplorerRegistryModuleExamplesResponse
       */
      Models::ListExplorerRegistryModuleExamplesResponse listExplorerRegistryModuleExamplesWithOptions(const Models::ListExplorerRegistryModuleExamplesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Explorer的egistryModule版本示例列表
       *
       * @param request ListExplorerRegistryModuleExamplesRequest
       * @return ListExplorerRegistryModuleExamplesResponse
       */
      Models::ListExplorerRegistryModuleExamplesResponse listExplorerRegistryModuleExamples(const Models::ListExplorerRegistryModuleExamplesRequest &request);

      /**
       * @summary 获取Explorer的egistryModule版本列表
       *
       * @param request ListExplorerRegistryModuleVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExplorerRegistryModuleVersionsResponse
       */
      Models::ListExplorerRegistryModuleVersionsResponse listExplorerRegistryModuleVersionsWithOptions(const Models::ListExplorerRegistryModuleVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Explorer的egistryModule版本列表
       *
       * @param request ListExplorerRegistryModuleVersionsRequest
       * @return ListExplorerRegistryModuleVersionsResponse
       */
      Models::ListExplorerRegistryModuleVersionsResponse listExplorerRegistryModuleVersions(const Models::ListExplorerRegistryModuleVersionsRequest &request);

      /**
       * @summary 获取Explorer的Registry Module列表
       *
       * @param request ListExplorerRegistryModulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExplorerRegistryModulesResponse
       */
      Models::ListExplorerRegistryModulesResponse listExplorerRegistryModulesWithOptions(const Models::ListExplorerRegistryModulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Explorer的Registry Module列表
       *
       * @param request ListExplorerRegistryModulesRequest
       * @return ListExplorerRegistryModulesResponse
       */
      Models::ListExplorerRegistryModulesResponse listExplorerRegistryModules(const Models::ListExplorerRegistryModulesRequest &request);

      /**
       * @summary 查询分组列表
       *
       * @param tmpReq ListGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupResponse
       */
      Models::ListGroupResponse listGroupWithOptions(const Models::ListGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询分组列表
       *
       * @param request ListGroupRequest
       * @return ListGroupResponse
       */
      Models::ListGroupResponse listGroup(const Models::ListGroupRequest &request);

      /**
       * @summary 作业列表
       *
       * @param request ListJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const string &taskId, const Models::ListJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 作业列表
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const string &taskId, const Models::ListJobsRequest &request);

      /**
       * @summary 模板版本列表
       *
       * @param request ListModuleVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModuleVersionResponse
       */
      Models::ListModuleVersionResponse listModuleVersionWithOptions(const string &moduleId, const Models::ListModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模板版本列表
       *
       * @param request ListModuleVersionRequest
       * @return ListModuleVersionResponse
       */
      Models::ListModuleVersionResponse listModuleVersion(const string &moduleId, const Models::ListModuleVersionRequest &request);

      /**
       * @summary 列举模板
       *
       * @param tmpReq ListModulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModulesResponse
       */
      Models::ListModulesResponse listModulesWithOptions(const Models::ListModulesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举模板
       *
       * @param request ListModulesRequest
       * @return ListModulesResponse
       */
      Models::ListModulesResponse listModules(const Models::ListModulesRequest &request);

      /**
       * @summary 所有产品列表
       *
       * @param request ListProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProductsWithOptions(const Models::ListProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 所有产品列表
       *
       * @param request ListProductsRequest
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProducts(const Models::ListProductsRequest &request);

      /**
       * @summary 查询项目列表
       *
       * @param tmpReq ListProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectResponse
       */
      Models::ListProjectResponse listProjectWithOptions(const Models::ListProjectRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询项目列表
       *
       * @param request ListProjectRequest
       * @return ListProjectResponse
       */
      Models::ListProjectResponse listProject(const Models::ListProjectRequest &request);

      /**
       * @summary 获取RegistryModule版本列表
       *
       * @param request ListRegistryModuleVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegistryModuleVersionsResponse
       */
      Models::ListRegistryModuleVersionsResponse listRegistryModuleVersionsWithOptions(const Models::ListRegistryModuleVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取RegistryModule版本列表
       *
       * @param request ListRegistryModuleVersionsRequest
       * @return ListRegistryModuleVersionsResponse
       */
      Models::ListRegistryModuleVersionsResponse listRegistryModuleVersions(const Models::ListRegistryModuleVersionsRequest &request);

      /**
       * @summary 获取RegistryModule列表
       *
       * @param request ListRegistryModulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegistryModulesResponse
       */
      Models::ListRegistryModulesResponse listRegistryModulesWithOptions(const Models::ListRegistryModulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取RegistryModule列表
       *
       * @param request ListRegistryModulesRequest
       * @return ListRegistryModulesResponse
       */
      Models::ListRegistryModulesResponse listRegistryModules(const Models::ListRegistryModulesRequest &request);

      /**
       * @summary 获取工作空间列表
       *
       * @param request ListRegistryNamespacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegistryNamespacesResponse
       */
      Models::ListRegistryNamespacesResponse listRegistryNamespacesWithOptions(const Models::ListRegistryNamespacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作空间列表
       *
       * @param request ListRegistryNamespacesRequest
       * @return ListRegistryNamespacesResponse
       */
      Models::ListRegistryNamespacesResponse listRegistryNamespaces(const Models::ListRegistryNamespacesRequest &request);

      /**
       * @summary 获取任务版本列表
       *
       * @param request ListResourceExportTaskVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceExportTaskVersionsResponse
       */
      Models::ListResourceExportTaskVersionsResponse listResourceExportTaskVersionsWithOptions(const string &exportTaskId, const Models::ListResourceExportTaskVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务版本列表
       *
       * @param request ListResourceExportTaskVersionsRequest
       * @return ListResourceExportTaskVersionsResponse
       */
      Models::ListResourceExportTaskVersionsResponse listResourceExportTaskVersions(const string &exportTaskId, const Models::ListResourceExportTaskVersionsRequest &request);

      /**
       * @summary 查询导出任务列表
       *
       * @param request ListResourceExportTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceExportTasksResponse
       */
      Models::ListResourceExportTasksResponse listResourceExportTasksWithOptions(const Models::ListResourceExportTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询导出任务列表
       *
       * @param request ListResourceExportTasksRequest
       * @return ListResourceExportTasksResponse
       */
      Models::ListResourceExportTasksResponse listResourceExportTasks(const Models::ListResourceExportTasksRequest &request);

      /**
       * @summary 资源类型列表
       *
       * @param tmpReq ListResourceTypesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceTypesResponse
       */
      Models::ListResourceTypesResponse listResourceTypesWithOptions(const Models::ListResourceTypesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 资源类型列表
       *
       * @param request ListResourceTypesRequest
       * @return ListResourceTypesResponse
       */
      Models::ListResourceTypesResponse listResourceTypes(const Models::ListResourceTypesRequest &request);

      /**
       * @summary 任务列表
       *
       * @param tmpReq ListTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasksWithOptions(const Models::ListTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务列表
       *
       * @param request ListTasksRequest
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasks(const Models::ListTasksRequest &request);

      /**
       * @summary terraformProvider版本
       *
       * @param request ListTerraformProviderVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTerraformProviderVersionsResponse
       */
      Models::ListTerraformProviderVersionsResponse listTerraformProviderVersionsWithOptions(const Models::ListTerraformProviderVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary terraformProvider版本
       *
       * @param request ListTerraformProviderVersionsRequest
       * @return ListTerraformProviderVersionsResponse
       */
      Models::ListTerraformProviderVersionsResponse listTerraformProviderVersions(const Models::ListTerraformProviderVersionsRequest &request);

      /**
       * @summary 控制作业
       *
       * @param request OperateJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateJobResponse
       */
      Models::OperateJobResponse operateJobWithOptions(const string &taskId, const string &jobId, const string &operationType, const Models::OperateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 控制作业
       *
       * @param request OperateJobRequest
       * @return OperateJobResponse
       */
      Models::OperateJobResponse operateJob(const string &taskId, const string &jobId, const string &operationType, const Models::OperateJobRequest &request);

      /**
       * @summary 发布RegistryModule版本
       *
       * @param request PublishRegistryModuleVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishRegistryModuleVersionResponse
       */
      Models::PublishRegistryModuleVersionResponse publishRegistryModuleVersionWithOptions(const Models::PublishRegistryModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布RegistryModule版本
       *
       * @param request PublishRegistryModuleVersionRequest
       * @return PublishRegistryModuleVersionResponse
       */
      Models::PublishRegistryModuleVersionResponse publishRegistryModuleVersion(const Models::PublishRegistryModuleVersionRequest &request);

      /**
       * @summary 删除共享账号信息
       *
       * @param tmpReq RemoveSharedAccountsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSharedAccountsResponse
       */
      Models::RemoveSharedAccountsResponse removeSharedAccountsWithOptions(const Models::RemoveSharedAccountsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除共享账号信息
       *
       * @param request RemoveSharedAccountsRequest
       * @return RemoveSharedAccountsResponse
       */
      Models::RemoveSharedAccountsResponse removeSharedAccounts(const Models::RemoveSharedAccountsRequest &request);

      /**
       * @summary 修改ExplorerModule
       *
       * @param request UpdateExplorerModuleAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExplorerModuleAttributeResponse
       */
      Models::UpdateExplorerModuleAttributeResponse updateExplorerModuleAttributeWithOptions(const string &explorerModuleId, const Models::UpdateExplorerModuleAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改ExplorerModule
       *
       * @param request UpdateExplorerModuleAttributeRequest
       * @return UpdateExplorerModuleAttributeResponse
       */
      Models::UpdateExplorerModuleAttributeResponse updateExplorerModuleAttribute(const string &explorerModuleId, const Models::UpdateExplorerModuleAttributeRequest &request);

      /**
       * @summary 修改分组
       *
       * @param request UpdateGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroupWithOptions(const string &groupId, const Models::UpdateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改分组
       *
       * @param request UpdateGroupRequest
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroup(const string &groupId, const Models::UpdateGroupRequest &request);

      /**
       * @summary 更新模板
       *
       * @param request UpdateModuleAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModuleAttributeResponse
       */
      Models::UpdateModuleAttributeResponse updateModuleAttributeWithOptions(const string &moduleId, const Models::UpdateModuleAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新模板
       *
       * @param request UpdateModuleAttributeRequest
       * @return UpdateModuleAttributeResponse
       */
      Models::UpdateModuleAttributeResponse updateModuleAttribute(const string &moduleId, const Models::UpdateModuleAttributeRequest &request);

      /**
       * @summary 修改项目
       *
       * @param request UpdateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const string &projectId, const Models::UpdateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改项目
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const string &projectId, const Models::UpdateProjectRequest &request);

      /**
       * @summary 修改RegistryModule
       *
       * @param request UpdateRegistryModuleAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRegistryModuleAttributeResponse
       */
      Models::UpdateRegistryModuleAttributeResponse updateRegistryModuleAttributeWithOptions(const string &namespaceName, const string &moduleName, const Models::UpdateRegistryModuleAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RegistryModule
       *
       * @param request UpdateRegistryModuleAttributeRequest
       * @return UpdateRegistryModuleAttributeResponse
       */
      Models::UpdateRegistryModuleAttributeResponse updateRegistryModuleAttribute(const string &namespaceName, const string &moduleName, const Models::UpdateRegistryModuleAttributeRequest &request);

      /**
       * @summary 修改工作空间
       *
       * @param request UpdateRegistryNamespaceAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRegistryNamespaceAttributeResponse
       */
      Models::UpdateRegistryNamespaceAttributeResponse updateRegistryNamespaceAttributeWithOptions(const string &namespaceName, const Models::UpdateRegistryNamespaceAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改工作空间
       *
       * @param request UpdateRegistryNamespaceAttributeRequest
       * @return UpdateRegistryNamespaceAttributeResponse
       */
      Models::UpdateRegistryNamespaceAttributeResponse updateRegistryNamespaceAttribute(const string &namespaceName, const Models::UpdateRegistryNamespaceAttributeRequest &request);

      /**
       * @summary 更新导出任务
       *
       * @param request UpdateResourceExportTaskAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceExportTaskAttributeResponse
       */
      Models::UpdateResourceExportTaskAttributeResponse updateResourceExportTaskAttributeWithOptions(const string &exportTaskId, const Models::UpdateResourceExportTaskAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新导出任务
       *
       * @param request UpdateResourceExportTaskAttributeRequest
       * @return UpdateResourceExportTaskAttributeResponse
       */
      Models::UpdateResourceExportTaskAttributeResponse updateResourceExportTaskAttribute(const string &exportTaskId, const Models::UpdateResourceExportTaskAttributeRequest &request);

      /**
       * @summary 修改任务
       *
       * @param request UpdateTaskAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskAttributeResponse
       */
      Models::UpdateTaskAttributeResponse updateTaskAttributeWithOptions(const string &taskId, const Models::UpdateTaskAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改任务
       *
       * @param request UpdateTaskAttributeRequest
       * @return UpdateTaskAttributeResponse
       */
      Models::UpdateTaskAttributeResponse updateTaskAttribute(const string &taskId, const Models::UpdateTaskAttributeRequest &request);

      /**
       * @summary 模版预检
       *
       * @param request ValidateModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateModuleResponse
       */
      FutureGenerator<Models::ValidateModuleResponse> validateModuleWithSSE(const Models::ValidateModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模版预检
       *
       * @param request ValidateModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateModuleResponse
       */
      Models::ValidateModuleResponse validateModuleWithOptions(const Models::ValidateModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模版预检
       *
       * @param request ValidateModuleRequest
       * @return ValidateModuleResponse
       */
      Models::ValidateModuleResponse validateModule(const Models::ValidateModuleRequest &request);
  };
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
