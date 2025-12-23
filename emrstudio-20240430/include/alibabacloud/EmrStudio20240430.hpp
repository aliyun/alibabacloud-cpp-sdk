// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EMRSTUDIO20240430_HPP_
#define ALIBABACLOUD_EMRSTUDIO20240430_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EmrStudio20240430Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EmrStudio20240430.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建工作流
       *
       * @param request CreateWorkflowRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkflowResponse
       */
      Models::CreateWorkflowResponse createWorkflowWithOptions(const string &projectId, const Models::CreateWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建工作流
       *
       * @param request CreateWorkflowRequest
       * @return CreateWorkflowResponse
       */
      Models::CreateWorkflowResponse createWorkflow(const string &projectId, const Models::CreateWorkflowRequest &request);

      /**
       * @summary 删除工作流
       *
       * @param request DeleteWorkflowRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkflowResponse
       */
      Models::DeleteWorkflowResponse deleteWorkflowWithOptions(const string &projectId, const string &workflowId, const Models::DeleteWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除工作流
       *
       * @param request DeleteWorkflowRequest
       * @return DeleteWorkflowResponse
       */
      Models::DeleteWorkflowResponse deleteWorkflow(const string &projectId, const string &workflowId, const Models::DeleteWorkflowRequest &request);

      /**
       * @summary 获取id关联信息
       *
       * @param request DescribeIdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIdResponse
       */
      Models::DescribeIdResponse describeIdWithOptions(const Models::DescribeIdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取id关联信息
       *
       * @param request DescribeIdRequest
       * @return DescribeIdResponse
       */
      Models::DescribeIdResponse describeId(const Models::DescribeIdRequest &request);

      /**
       * @summary 获取手动任务定义
       *
       * @param request DescribeManualTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeManualTaskResponse
       */
      Models::DescribeManualTaskResponse describeManualTaskWithOptions(const string &projectId, const string &manualTaskId, const Models::DescribeManualTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取手动任务定义
       *
       * @param request DescribeManualTaskRequest
       * @return DescribeManualTaskResponse
       */
      Models::DescribeManualTaskResponse describeManualTask(const string &projectId, const string &manualTaskId, const Models::DescribeManualTaskRequest &request);

      /**
       * @summary 获取手动任务实例
       *
       * @param request DescribeManualTaskInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeManualTaskInstanceResponse
       */
      Models::DescribeManualTaskInstanceResponse describeManualTaskInstanceWithOptions(const string &manualTaskInstanceId, const string &projectId, const Models::DescribeManualTaskInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取手动任务实例
       *
       * @param request DescribeManualTaskInstanceRequest
       * @return DescribeManualTaskInstanceResponse
       */
      Models::DescribeManualTaskInstanceResponse describeManualTaskInstance(const string &manualTaskInstanceId, const string &projectId, const Models::DescribeManualTaskInstanceRequest &request);

      /**
       * @summary 获取项目详情
       *
       * @param request DescribeProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectResponse
       */
      Models::DescribeProjectResponse describeProjectWithOptions(const string &projectId, const Models::DescribeProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目详情
       *
       * @param request DescribeProjectRequest
       * @return DescribeProjectResponse
       */
      Models::DescribeProjectResponse describeProject(const string &projectId, const Models::DescribeProjectRequest &request);

      /**
       * @summary 查询任务定义
       *
       * @param request DescribeTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskResponse
       */
      Models::DescribeTaskResponse describeTaskWithOptions(const string &workflowId, const string &projectId, const string &taskId, const Models::DescribeTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务定义
       *
       * @param request DescribeTaskRequest
       * @return DescribeTaskResponse
       */
      Models::DescribeTaskResponse describeTask(const string &workflowId, const string &projectId, const string &taskId, const Models::DescribeTaskRequest &request);

      /**
       * @summary 获取任务实例
       *
       * @param request DescribeTaskInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskInstanceResponse
       */
      Models::DescribeTaskInstanceResponse describeTaskInstanceWithOptions(const string &projectId, const string &workflowInstanceId, const string &taskInstanceId, const Models::DescribeTaskInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务实例
       *
       * @param request DescribeTaskInstanceRequest
       * @return DescribeTaskInstanceResponse
       */
      Models::DescribeTaskInstanceResponse describeTaskInstance(const string &projectId, const string &workflowInstanceId, const string &taskInstanceId, const Models::DescribeTaskInstanceRequest &request);

      /**
       * @summary 获取工作流详情
       *
       * @param request DescribeWorkflowRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWorkflowResponse
       */
      Models::DescribeWorkflowResponse describeWorkflowWithOptions(const string &projectId, const string &workflowId, const Models::DescribeWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作流详情
       *
       * @param request DescribeWorkflowRequest
       * @return DescribeWorkflowResponse
       */
      Models::DescribeWorkflowResponse describeWorkflow(const string &projectId, const string &workflowId, const Models::DescribeWorkflowRequest &request);

      /**
       * @summary 获取工作流实例详情
       *
       * @param request DescribeWorkflowInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWorkflowInstanceResponse
       */
      Models::DescribeWorkflowInstanceResponse describeWorkflowInstanceWithOptions(const string &projectId, const string &workflowInstanceId, const Models::DescribeWorkflowInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作流实例详情
       *
       * @param request DescribeWorkflowInstanceRequest
       * @return DescribeWorkflowInstanceResponse
       */
      Models::DescribeWorkflowInstanceResponse describeWorkflowInstance(const string &projectId, const string &workflowInstanceId, const Models::DescribeWorkflowInstanceRequest &request);

      /**
       * @summary 获取实例的日志
       *
       * @param request GetInstanceLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceLogResponse
       */
      Models::GetInstanceLogResponse getInstanceLogWithOptions(const string &projectId, const string &instanceId, const Models::GetInstanceLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例的日志
       *
       * @param request GetInstanceLogRequest
       * @return GetInstanceLogResponse
       */
      Models::GetInstanceLogResponse getInstanceLog(const string &projectId, const string &instanceId, const Models::GetInstanceLogRequest &request);

      /**
       * @summary 查询告警组列表
       *
       * @param request ListAlertGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertGroupsResponse
       */
      Models::ListAlertGroupsResponse listAlertGroupsWithOptions(const string &projectId, const Models::ListAlertGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询告警组列表
       *
       * @param request ListAlertGroupsRequest
       * @return ListAlertGroupsResponse
       */
      Models::ListAlertGroupsResponse listAlertGroups(const string &projectId, const Models::ListAlertGroupsRequest &request);

      /**
       * @summary 获取手动任务实例列表
       *
       * @param request ListManualTaskInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListManualTaskInstancesResponse
       */
      Models::ListManualTaskInstancesResponse listManualTaskInstancesWithOptions(const string &projectId, const Models::ListManualTaskInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取手动任务实例列表
       *
       * @param request ListManualTaskInstancesRequest
       * @return ListManualTaskInstancesResponse
       */
      Models::ListManualTaskInstancesResponse listManualTaskInstances(const string &projectId, const Models::ListManualTaskInstancesRequest &request);

      /**
       * @summary 查询手动任务定义列表
       *
       * @param request ListManualTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListManualTasksResponse
       */
      Models::ListManualTasksResponse listManualTasksWithOptions(const string &projectId, const Models::ListManualTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询手动任务定义列表
       *
       * @param request ListManualTasksRequest
       * @return ListManualTasksResponse
       */
      Models::ListManualTasksResponse listManualTasks(const string &projectId, const Models::ListManualTasksRequest &request);

      /**
       * @summary 获取项目详情
       *
       * @param request ListProjectsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目详情
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const Models::ListProjectsRequest &request);

      /**
       * @summary 查询调度资源组列表
       *
       * @param request ListResourceGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroupsWithOptions(const Models::ListResourceGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询调度资源组列表
       *
       * @param request ListResourceGroupsRequest
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroups(const Models::ListResourceGroupsRequest &request);

      /**
       * @summary 获取任务实例列表
       *
       * @param request ListTaskInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskInstancesResponse
       */
      Models::ListTaskInstancesResponse listTaskInstancesWithOptions(const string &projectId, const Models::ListTaskInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务实例列表
       *
       * @param request ListTaskInstancesRequest
       * @return ListTaskInstancesResponse
       */
      Models::ListTaskInstancesResponse listTaskInstances(const string &projectId, const Models::ListTaskInstancesRequest &request);

      /**
       * @summary 查询任务定义列表
       *
       * @param request ListTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasksWithOptions(const string &projectId, const Models::ListTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务定义列表
       *
       * @param request ListTasksRequest
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasks(const string &projectId, const Models::ListTasksRequest &request);

      /**
       * @summary 查询工作流目录列表
       *
       * @param request ListWorkflowDirectoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowDirectoriesResponse
       */
      Models::ListWorkflowDirectoriesResponse listWorkflowDirectoriesWithOptions(const string &projectId, const Models::ListWorkflowDirectoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询工作流目录列表
       *
       * @param request ListWorkflowDirectoriesRequest
       * @return ListWorkflowDirectoriesResponse
       */
      Models::ListWorkflowDirectoriesResponse listWorkflowDirectories(const string &projectId, const Models::ListWorkflowDirectoriesRequest &request);

      /**
       * @summary 获取工作流实例列表
       *
       * @param request ListWorkflowInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowInstancesResponse
       */
      Models::ListWorkflowInstancesResponse listWorkflowInstancesWithOptions(const string &projectId, const Models::ListWorkflowInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作流实例列表
       *
       * @param request ListWorkflowInstancesRequest
       * @return ListWorkflowInstancesResponse
       */
      Models::ListWorkflowInstancesResponse listWorkflowInstances(const string &projectId, const Models::ListWorkflowInstancesRequest &request);

      /**
       * @summary 获取工作流列表
       *
       * @param request ListWorkflowsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowsResponse
       */
      Models::ListWorkflowsResponse listWorkflowsWithOptions(const string &projectId, const Models::ListWorkflowsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作流列表
       *
       * @param request ListWorkflowsRequest
       * @return ListWorkflowsResponse
       */
      Models::ListWorkflowsResponse listWorkflows(const string &projectId, const Models::ListWorkflowsRequest &request);

      /**
       * @summary 操作工作流实例
       *
       * @param request OperateWorkflowInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateWorkflowInstanceResponse
       */
      Models::OperateWorkflowInstanceResponse operateWorkflowInstanceWithOptions(const string &projectId, const Models::OperateWorkflowInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 操作工作流实例
       *
       * @param request OperateWorkflowInstanceRequest
       * @return OperateWorkflowInstanceResponse
       */
      Models::OperateWorkflowInstanceResponse operateWorkflowInstance(const string &projectId, const Models::OperateWorkflowInstanceRequest &request);

      /**
       * @summary 运行工作流
       *
       * @param request RunWorkflowRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunWorkflowResponse
       */
      Models::RunWorkflowResponse runWorkflowWithOptions(const string &projectId, const Models::RunWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 运行工作流
       *
       * @param request RunWorkflowRequest
       * @return RunWorkflowResponse
       */
      Models::RunWorkflowResponse runWorkflow(const string &projectId, const Models::RunWorkflowRequest &request);

      /**
       * @summary 更新工作流
       *
       * @param request UpdateWorkflowRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkflowResponse
       */
      Models::UpdateWorkflowResponse updateWorkflowWithOptions(const string &projectId, const string &workflowId, const Models::UpdateWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新工作流
       *
       * @param request UpdateWorkflowRequest
       * @return UpdateWorkflowResponse
       */
      Models::UpdateWorkflowResponse updateWorkflow(const string &projectId, const string &workflowId, const Models::UpdateWorkflowRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
